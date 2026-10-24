#include "touch_controls.h"
#include "language.h"
#include "mh3_frame_rate_control.h"
#if defined(ANDROID) || defined(__ANDROID__)
#include <SDL3/SDL.h>
#include <SDL3/SDL_system.h>
#elif !defined(__vita__)
#include <SDL3/SDL.h>
#endif
#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <string>
#include <cstdio>
#endif
#include "win_posix_dir.h"
#include <unistd.h>
#include "abi_bridge.h"
#include "fatal.h"
#include <aurora/fatal.hpp>
#include "generated/RuntimeConfig.h"
#include "disc_image.h"
#include "audio_dma.h"
#include "village_boot.h"
#include "gx_host.h"
#include "gx_panic.h"
#include "field_jump.h"
#include "quest_placement.h"
#include "quest_catalog.h"
#include "launcher_cheats.h"
#include "guest_worker.h"
#include "net/online.h"
#include "net/local_server.h"
#include <algorithm>
#include <chrono>
#include <thread>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <optional>
#include <vector>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <windowsx.h>
#include <commdlg.h>
#include <dwmapi.h>
#endif
#include <strings.h>
#ifdef __vita__
#include "../vita/platform.h"
#include "vita_launcher.h"
#include <psp2/kernel/clib.h>
#else
#include "vita_launcher.h"
#include "launcher_screen.h"
#ifndef __EMSCRIPTEN__
#include <execinfo.h>
#endif
#endif
#include <iostream>
#include <string_view>
#ifdef MH3_DEVELOPMENT
#include "dev_options.h"
#endif

extern "C" void InitializeDataSections();
extern "C" void MH3_OSExceptionInit(CpuContext*);
extern "C" void MH3_OSInterruptInit(CpuContext*);
void RunDeviceSelfTests(CpuContext*);
void RunAudioSelfTests(CpuContext*);
#ifdef MH3_ENABLE_COLLISION_CHECK
int RunCollisionCheck(CpuContext*);
#endif

void SystemBridge::DumpCpuState(std::ostream& out, const CpuContext* cpu) {
    if (!cpu)
        return;

    out << std::hex << "guest pc=" << cpu->pc << " lr=" << cpu->lr << " ctr=" << cpu->ctr << '\n';

    for (unsigned i = 0; i < 32; ++i)
        out << "r" << std::dec << i << "=" << std::hex << cpu->gpr[i] << ((i % 4 == 3) ? '\n' : ' ');

    out << std::dec;
}

void SystemBridge::DumpCpuState(const CpuContext* cpu) {
    DumpCpuState(std::cerr, cpu);
}

void DumpHostStackTraceForRuntimeHelper() {
#if !defined(__vita__) && !defined(__EMSCRIPTEN__) && !defined(MH3_NO_UNWIND_TABLES)
    void* frames[40];
    int count = backtrace(frames, 40);
    backtrace_symbols_fd(frames, count, 2);
#endif
}

void ShowRuntimeFatalPopup(std::string_view category, std::string_view details) noexcept {
    std::cerr << category << ": " << details << '\n';
}

void MarkFatalErrorReported() {}
void SetRuntimeExitCode(int) {}
namespace RuntimeCrash {
// Every report that stops the game, with the guest CPU state, also goes to
// crash.txt (appended) and, on the Vita, through sceClibPrintf, which the
// console shows in any build: ux0:/data/mh3-wii/crash.txt there, beside the
// saves elsewhere (MH3_USER_DIR, default saves/). Host crashes that report
// nothing (a data abort) leave the system's core dump instead.
void AppendCrashLog(std::string_view what, const CpuContext* cpu) noexcept {
    std::ostringstream report;
    report << "MH3 runtime stopped: " << what << '\n';
    SystemBridge::DumpCpuState(report, cpu);
    const std::string text = report.str();
#if defined(ANDROID) || defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_FATAL, "MH3", "MH3 CRASH REPORT:\n%s", text.c_str());
    std::error_code lec;
    std::filesystem::create_directories("/storage/emulated/0/MH3/logs", lec);
    if (FILE* f = fopen("/storage/emulated/0/MH3/logs/oceantri_crash.txt", "a")) {
        fputs(text.c_str(), f);
        fputc('\n', f);
        fclose(f);
    }
#endif
#ifdef __vita__
    for (size_t at = 0; at < text.size();) {
        const size_t end = std::min(text.find('\n', at), text.size());
        sceClibPrintf("%.*s\n", int(end - at), text.data() + at);
        at = end + 1;
    }

    const std::string path = "ux0:/data/mh3-wii/crash.txt";
#else
    const char* user = std::getenv("MH3_USER_DIR");
    const std::string path = std::string(user ? user : "saves") + "/crash.txt";
#endif
    std::ofstream out(path, std::ios::app);

    if (out)
        out << text << '\n';
}

void WriteCrashArtifacts(std::string_view reason, std::string_view details, const uint32_t*) noexcept {
#if defined(ANDROID) || defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_FATAL, "MH3", "CRASH ARTIFACTS: %.*s: %.*s", int(reason.size()), reason.data(), int(details.size()), details.data());
#endif
    std::cerr << reason << ": " << details << '\n';
    SystemBridge::DumpCpuState(TryGetCpuContext());
    AppendCrashLog(std::string(reason) + ": " + std::string(details), TryGetCpuContext());
}

[[noreturn]] void FatalMissingGuestTarget(uint32_t target, CpuContext* cpu) noexcept {
    char what[64];
    std::snprintf(what, sizeof what, "Missing translated target 0x%08x", target);
#if defined(ANDROID) || defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_FATAL, "MH3", "FATAL MISSING TARGET: %s", what);
#endif
    std::cerr << what << '\n';
    SystemBridge::DumpCpuState(cpu);
    AppendCrashLog(what, cpu);
    DumpHostStackTraceForRuntimeHelper();
    std::exit(1);
}
} // namespace RuntimeCrash

#ifdef MH3_HAS_AURORA
int RunGraphicsCheck(int argc, char** argv);
int RunEfbCheck(int argc, char** argv);
#endif

constexpr const char* kUsage = "Unknown option. Options:\n"
                               "  --village                      start File 1 / character 1 in the village\n"
                               "  --city                         start File 1 / character 1 in the City (online play)\n"
                               "  --list quests|online-quests|arena-quests\n"
                               "                                 list a quest set (id, stars, map, name, monsters, goal)\n"
                               "  --quest <id>|free|custom:<file> [--area <n>|camp] [--spawn <x,y,z>|exit:<n>[,<m>...]|exit:tour]\n"
                               "                                 start a quest (village, arena or online) or the\n"
                               "                                 Moga Woods free roam from the village, in the area\n"
                               "                                 numbered n on the map; --spawn moves the hunter\n"
                               "                                 there (arena pit: 0,300,0), or into the area's exit\n"
                               "                                 to area n; custom:<file> plays a custom quest\n"
                               "                                 (USER/custom-quests/<name>.mh3quest)\n"
                               "  --area-index <n>               (with --quest) start in the game's area n instead\n"
                               "                                 (its own order, also the areas without a number)\n"
                               "  --quest-monster <name|id>      (with --quest) replace the quest's large monster\n"
                               "                                 (any monster in the arena pit: --quest 9004 --spawn 0,300,0)\n"
                               "  --quest-small <name|id>        (with --quest) replace the quest's small monsters\n"
                               "                                 (four in the arena pit: --quest 9000)\n"
                               "  --no-damage                    (with any of the above) the hunter takes no damage\n"
                               "  --cheat <name>[=<value>]       (with any of the above, repeatable) turn on a cheat of\n"
                               "                                 the launcher's list by its name (\"InfHP\"; with its\n"
                               "                                 group when lists share it, \"Bully:ActionRepeater\"),\n"
                               "                                 with a value by label or number\n"
                               "  --rom <image>                  (with any of the above) play from the European disc\n"
                               "                                 (RVZ, WIA or ISO); remembered in disc/ next to the executable\n";

#ifndef __vita__
#ifdef _WIN32
namespace {
bool IsSupportedDiscImage(const std::filesystem::path& path) {
    std::string extension = path.extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(), [](unsigned char c) { return char(std::tolower(c)); });
    return extension == ".iso" || extension == ".rvz" || extension == ".wia";
}



std::vector<std::filesystem::path> FindNearbyDiscImages(const std::filesystem::path& root) {
    // Automatic boot is intentionally limited to the EXE's own directory.
    // A ROM elsewhere is added through the launcher and copied beside MH3.exe.
    std::vector<std::filesystem::path> images;
    std::error_code ec;
    if (!std::filesystem::is_directory(root, ec))
        return images;
    for (std::filesystem::directory_iterator it(root, ec), end; !ec && it != end; it.increment(ec)) {
        if (it->is_regular_file(ec) && IsSupportedDiscImage(it->path()))
            images.push_back(it->path());
    }
    std::sort(images.begin(), images.end());
    images.erase(std::unique(images.begin(), images.end()), images.end());
    return images;
}

std::optional<std::filesystem::path> SelectDiscImage(const std::filesystem::path& root, HWND owner = nullptr) {
    std::vector<wchar_t> filename(32768, L'\0');
    const std::wstring initialDirectory = root.wstring();
    OPENFILENAMEW dialog{};
    dialog.lStructSize = sizeof(dialog);
    dialog.hwndOwner = owner;
    dialog.lpstrFilter = L"Monster Hunter Tri ROM (*.iso;*.rvz;*.wia)\0*.iso;*.rvz;*.wia\0Todos los archivos (*.*)\0*.*\0\0";
    dialog.nFilterIndex = 1;
    dialog.lpstrFile = filename.data();
    dialog.nMaxFile = static_cast<DWORD>(filename.size());
    dialog.lpstrInitialDir = initialDirectory.c_str();
    dialog.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_NOCHANGEDIR | OFN_DONTADDTORECENT;

    if (!GetOpenFileNameW(&dialog))
        return std::nullopt;
    return std::filesystem::path(filename.data());
}

constexpr wchar_t DiscLauncherClassName[] = L"MH3RecompDiscLauncher";
constexpr int DiscLauncherWidth = 680;
constexpr int DiscLauncherHeight = 430;
constexpr COLORREF LauncherInk = RGB(235, 250, 248);
constexpr COLORREF LauncherMuted = RGB(142, 177, 174);
constexpr COLORREF LauncherAqua = RGB(70, 245, 218);
constexpr COLORREF LauncherBlack = RGB(7, 11, 13);
constexpr COLORREF LauncherSurface = RGB(12, 20, 22);

struct DiscLauncherState {
    HWND window = nullptr;
    std::filesystem::path root;
    std::optional<std::filesystem::path> selected;
    std::wstring status;
    bool accepted = false;
    bool cancelled = false;
    bool busy = false;
    bool multipleFound = false;
    bool glass = false;
    unsigned progress = 0;
};

DiscLauncherState* g_discLauncher = nullptr;

void LauncherText(HDC dc, const RECT& rect, const wchar_t* value, int size, COLORREF color, int weight = FW_NORMAL, UINT flags = DT_LEFT | DT_VCENTER | DT_SINGLELINE) {
    HFONT font = CreateFontW(-size, 0, 0, 0, weight, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                             CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
    if (!font)
        return;
    const HGDIOBJ oldFont = SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, color);
    RECT drawRect = rect;
    DrawTextW(dc, value, -1, &drawRect, flags);
    SelectObject(dc, oldFont);
    DeleteObject(font);
}

void LauncherCard(HDC dc, RECT rect, COLORREF fill, COLORREF edge) {
    HBRUSH brush = CreateSolidBrush(fill);
    HPEN pen = CreatePen(PS_SOLID, 1, edge);
    if (!brush || !pen) {
        if (brush) DeleteObject(brush);
        if (pen) DeleteObject(pen);
        return;
    }
    HGDIOBJ oldBrush = SelectObject(dc, brush);
    HGDIOBJ oldPen = SelectObject(dc, pen);
    RoundRect(dc, rect.left, rect.top, rect.right, rect.bottom, 16, 16);
    SelectObject(dc, oldBrush);
    SelectObject(dc, oldPen);
    DeleteObject(brush);
    DeleteObject(pen);
}

bool ApplyLauncherGlass(HWND window) {
    if (!window)
        return false;
    struct AccentPolicy { int state; int flags; DWORD gradientColor; int animationId; };
    enum { ACCENT_ENABLE_ACRYLICBLURBEHIND = 4, WCA_ACCENT_POLICY = 19 };
    struct WindowCompositionAttributeData { int attribute; void* data; size_t size; };
    using SetWindowCompositionAttributeFn = BOOL(WINAPI*)(HWND, WindowCompositionAttributeData*);
    HMODULE user32 = GetModuleHandleW(L"user32.dll");
    auto setComposition = user32 ? reinterpret_cast<SetWindowCompositionAttributeFn>(GetProcAddress(user32, "SetWindowCompositionAttribute")) : nullptr;
    if (setComposition) {
        AccentPolicy policy{};
        policy.state = ACCENT_ENABLE_ACRYLICBLURBEHIND;
        policy.flags = 2;
        policy.gradientColor = 0xD9080D0F;
        WindowCompositionAttributeData data{WCA_ACCENT_POLICY, &policy, sizeof(policy)};
        if (setComposition(window, &data))
            return true;
    }
    const int backdrop = 3; // Windows 11 transient acrylic backdrop
    if (SUCCEEDED(DwmSetWindowAttribute(window, static_cast<DWMWINDOWATTRIBUTE>(38), &backdrop, sizeof(backdrop))))
        return true;
    MARGINS margins{-1, -1, -1, -1};
    DwmExtendFrameIntoClientArea(window, &margins);
    DWM_BLURBEHIND blur{};
    blur.dwFlags = DWM_BB_ENABLE;
    blur.fEnable = TRUE;
    DwmEnableBlurBehindWindow(window, &blur);
    return false; // The paint handler supplies an opaque black fallback on older Windows.
}

void PaintDiscLauncher(HWND window) {
    PAINTSTRUCT ps{};
    HDC dc = BeginPaint(window, &ps);
    if (!dc)
        return;
    RECT client{};
    GetClientRect(window, &client);
    if (!g_discLauncher || !g_discLauncher->glass) {
        HBRUSH background = CreateSolidBrush(LauncherBlack);
        if (background) {
            FillRect(dc, &client, background);
            DeleteObject(background);
        }
    }
    HPEN edge = CreatePen(PS_SOLID, 2, LauncherAqua);
    if (edge) {
        HGDIOBJ old = SelectObject(dc, edge);
        HGDIOBJ oldBrush = SelectObject(dc, GetStockObject(HOLLOW_BRUSH));
        RoundRect(dc, 8, 8, client.right - 8, client.bottom - 8, 20, 20);
        SelectObject(dc, oldBrush);
        SelectObject(dc, old);
        DeleteObject(edge);
    }
    RECT r{30, 25, client.right - 30, 54};
    LauncherText(dc, r, L"MONSTER HUNTER TRI  /  RECOMP", 14, LauncherAqua, FW_BOLD);
    r = RECT{30, 62, client.right - 30, 105};
    LauncherText(dc, r, L"Preparar y ejecutar el juego", 26, LauncherInk, FW_SEMIBOLD);
    r = RECT{32, 110, client.right - 32, 154};
    const wchar_t* hint = g_discLauncher && g_discLauncher->busy
        ? L"La ROM estÃ¡ lista. Preparando los datos necesarios y abriendo el juego automÃ¡ticamente."
        : g_discLauncher && g_discLauncher->selected
            ? L"ROM seleccionada. Pulsa Copiar e iniciar para guardarla junto a MH3.exe."
            : g_discLauncher && g_discLauncher->multipleFound
                ? L"Se encontraron varias ROM en la carpeta del ejecutable. Selecciona la que quieres iniciar."
                : L"No hay una ROM junto a MH3.exe. Selecciona tu archivo ISO, RVZ o WIA; se copiarÃ¡ junto al ejecutable.";
    LauncherText(dc, r, hint, 12, LauncherMuted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);

    LauncherCard(dc, RECT{30, 164, client.right - 30, 204}, LauncherSurface, RGB(39, 224, 204));
    std::wstring selectedLabel = L"ROM: ninguna seleccionada";
    if (g_discLauncher && g_discLauncher->selected)
        selectedLabel = L"ROM: " + g_discLauncher->selected->filename().wstring();
    r = RECT{45, 166, client.right - 45, 202};
    LauncherText(dc, r, selectedLabel.c_str(), 12, LauncherInk, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);

    const bool hasSelection = g_discLauncher && g_discLauncher->selected.has_value();
    if (g_discLauncher && g_discLauncher->busy) {
        LauncherCard(dc, RECT{30, 224, client.right - 30, 282}, LauncherSurface, LauncherAqua);
        r = RECT{46, 228, client.right - 46, 250};
        LauncherText(dc, r, L"Copiando y preparando los datos del juegoâ€¦", 12, LauncherInk, FW_SEMIBOLD);
        RECT progressTrack{46, 257, client.right - 46, 271};
        HBRUSH track = CreateSolidBrush(RGB(20, 32, 33));
        if (track) { FillRect(dc, &progressTrack, track); DeleteObject(track); }
        const int fullWidth = std::max(0, static_cast<int>(progressTrack.right - progressTrack.left));
        const int fillWidth = static_cast<int>((static_cast<uint64_t>(fullWidth) * std::min(100u, g_discLauncher->progress)) / 100u);
        if (fillWidth > 0) {
            RECT progressFill{progressTrack.left, progressTrack.top, progressTrack.left + fillWidth, progressTrack.bottom};
            HBRUSH fill = CreateSolidBrush(LauncherAqua);
            if (fill) { FillRect(dc, &progressFill, fill); DeleteObject(fill); }
        }
    } else {
        LauncherCard(dc, RECT{30, 224, 238, 282}, RGB(11, 27, 29), LauncherAqua);
        r = RECT{30, 224, 238, 282};
        LauncherText(dc, r, L"Seleccionar ROMâ€¦", 13, LauncherAqua, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        LauncherCard(dc, RECT{252, 224, 470, 282}, hasSelection ? RGB(12, 67, 61) : RGB(16, 21, 22), hasSelection ? LauncherAqua : RGB(49, 68, 67));
        r = RECT{252, 224, 470, 282};
        LauncherText(dc, r, L"Copiar e iniciar", 13, hasSelection ? LauncherInk : LauncherMuted, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        LauncherCard(dc, RECT{484, 224, client.right - 30, 282}, RGB(12, 20, 22), RGB(60, 91, 89));
        r = RECT{484, 224, client.right - 30, 282};
        LauncherText(dc, r, L"Cancelar", 13, LauncherMuted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    }

    r = RECT{32, 292, client.right - 32, 330};
    const std::wstring status = g_discLauncher ? g_discLauncher->status : L"";
    LauncherText(dc, r, status.c_str(), 11, LauncherMuted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
    r = RECT{32, client.bottom - 34, client.right - 32, client.bottom - 12};
    LauncherText(dc, r, L"Compatible: ISO Â· RVZ Â· WIA   |   Esc para salir", 10, LauncherMuted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    EndPaint(window, &ps);
}

void PumpDiscLauncherMessages() {
    MSG msg{};
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) {
            if (g_discLauncher) g_discLauncher->cancelled = true;
            continue;
        }
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
}

LRESULT CALLBACK DiscLauncherProc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT:
        PaintDiscLauncher(window);
        return 0;
    case WM_LBUTTONUP: {
        if (!g_discLauncher || g_discLauncher->busy)
            return 0;
        const POINT p{GET_X_LPARAM(lparam), GET_Y_LPARAM(lparam)};
        if (p.y >= 224 && p.y < 282 && p.x >= 30 && p.x < 238) {
            auto choice = SelectDiscImage(g_discLauncher->root, window);
            if (choice) {
                g_discLauncher->selected = *choice;
                g_discLauncher->status = L"Seleccionada: " + choice->filename().wstring() + L". Pulsa Copiar e iniciar.";
                InvalidateRect(window, nullptr, TRUE);
                UpdateWindow(window);
            }
        } else if (p.y >= 224 && p.y < 282 && p.x >= 252 && p.x < 470) {
            if (g_discLauncher->selected) {
                g_discLauncher->accepted = true;
                g_discLauncher->busy = true;
                g_discLauncher->status = L"Iniciando preparacion...";
                InvalidateRect(window, nullptr, TRUE);
                UpdateWindow(window);
            }
        } else if (p.y >= 224 && p.y < 282 && p.x >= 484 && p.x < 650) {
            g_discLauncher->cancelled = true;
            DestroyWindow(window);
        }
        return 0;
    }
    case WM_KEYDOWN:
        if (wparam == VK_ESCAPE) {
            if (g_discLauncher) g_discLauncher->cancelled = true;
            DestroyWindow(window);
            return 0;
        }
        if (wparam == VK_RETURN && g_discLauncher && g_discLauncher->selected && !g_discLauncher->busy) {
            g_discLauncher->accepted = true;
            g_discLauncher->busy = true;
            return 0;
        }
        return 0;
    case WM_CLOSE:
        if (g_discLauncher && g_discLauncher->busy)
            return 0;
        if (g_discLauncher) g_discLauncher->cancelled = true;
        DestroyWindow(window);
        return 0;
    case WM_DESTROY:
        if (g_discLauncher && g_discLauncher->window == window)
            g_discLauncher->window = nullptr;
        return 0;
    default:
        return DefWindowProcW(window, message, wparam, lparam);
    }
}

std::optional<std::filesystem::path> RunDiscLauncher(const std::filesystem::path& root, bool multipleFound,
                                                       std::optional<std::filesystem::path> initialSelection = std::nullopt,
                                                       bool autoStart = false) {
    // Keep state alive while ProcessDisc/CopyFileEx reports progress after this function returns.
    static DiscLauncherState state;
    state = DiscLauncherState{};
    state.root = root;
    state.selected = std::move(initialSelection);
    state.multipleFound = multipleFound;
    state.busy = autoStart;
    state.accepted = autoStart;
    state.progress = 0;
    state.status = autoStart ? L"ROM detectada. Preparando para iniciar automÃ¡ticamente."
                             : multipleFound ? L"Hay varias ROM. Selecciona una para continuar." : L"Esperando que selecciones una ROM.";
    g_discLauncher = &state;

    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = DiscLauncherProc;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));
    wc.lpszClassName = DiscLauncherClassName;
    if (!RegisterClassExW(&wc) && GetLastError() != ERROR_CLASS_ALREADY_EXISTS) {
        g_discLauncher = nullptr;
        MH3_THROW(std::runtime_error("Cannot create the MH3 launcher window"));
    }

    state.window = CreateWindowExW(WS_EX_APPWINDOW, DiscLauncherClassName, L"Monster Hunter Tri Recomp - Launcher",
                                   WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
                                   DiscLauncherWidth, DiscLauncherHeight, nullptr, nullptr, wc.hInstance, nullptr);
    if (!state.window) {
        g_discLauncher = nullptr;
        MH3_THROW(std::runtime_error("Cannot open the MH3 launcher window"));
    }
    const BOOL darkTitleBar = TRUE;
    const COLORREF launcherBorder = RGB(70, 245, 218);
    const int roundedCorners = 2;
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(20), &darkTitleBar, sizeof(darkTitleBar));
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(34), &launcherBorder, sizeof(launcherBorder));
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(33), &roundedCorners, sizeof(roundedCorners));
    state.glass = ApplyLauncherGlass(state.window);
    RECT windowRect{};
    GetWindowRect(state.window, &windowRect);
    const int x = (GetSystemMetrics(SM_CXSCREEN) - (windowRect.right - windowRect.left)) / 2;
    const int y = (GetSystemMetrics(SM_CYSCREEN) - (windowRect.bottom - windowRect.top)) / 2;
    SetWindowPos(state.window, nullptr, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
    ShowWindow(state.window, SW_SHOW);
    UpdateWindow(state.window);
    SetForegroundWindow(state.window);

    while (!state.accepted && !state.cancelled) {
        MSG msg{};
        const BOOL result = GetMessageW(&msg, nullptr, 0, 0);
        if (result <= 0) {
            state.cancelled = true;
            break;
        }
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }

    if (state.cancelled || !state.selected) {
        if (state.window) DestroyWindow(state.window);
        g_discLauncher = nullptr;
        return std::nullopt;
    }
    return state.selected; // Keep the launcher visible while the ROM is copied and prepared.
}

void UpdateDiscLauncherProgress(const std::string& stage, unsigned percent) {
    if (!g_discLauncher || !g_discLauncher->window)
        return;
    std::wstring stageWide;
    if (!stage.empty()) {
        const int count = MultiByteToWideChar(CP_UTF8, 0, stage.c_str(), -1, nullptr, 0);
        if (count > 1) {
            stageWide.resize(static_cast<size_t>(count));
            const int converted = MultiByteToWideChar(CP_UTF8, 0, stage.c_str(), -1, stageWide.data(), count);
            if (converted > 0 && !stageWide.empty() && stageWide.back() == L'\0')
                stageWide.pop_back();
        } else {
            stageWide.assign(stage.begin(), stage.end());
        }
    }
    g_discLauncher->progress = std::min(100u, percent);
    g_discLauncher->status = stageWide + L"  " + std::to_wstring(percent) + L"%";
    InvalidateRect(g_discLauncher->window, nullptr, TRUE);
    UpdateWindow(g_discLauncher->window);
    PumpDiscLauncherMessages();
}

void CloseDiscLauncher() {
    if (g_discLauncher && g_discLauncher->window && IsWindow(g_discLauncher->window))
        DestroyWindow(g_discLauncher->window);
    g_discLauncher = nullptr;
}

DWORD CALLBACK CopyDiscProgressRoutine(LARGE_INTEGER total, LARGE_INTEGER transferred, LARGE_INTEGER, LARGE_INTEGER,
                                       DWORD, DWORD, HANDLE, HANDLE, LPVOID) {
    const unsigned percent = total.QuadPart > 0 ? static_cast<unsigned>((transferred.QuadPart * 100) / total.QuadPart) : 100;
    UpdateDiscLauncherProgress("Copiando ROM", percent);
    return PROGRESS_CONTINUE;
}

std::optional<std::filesystem::path> ResolveDiscImage(const std::filesystem::path& root, bool& userSelected) {
    const auto nearby = FindNearbyDiscImages(root);
    userSelected = false;
    if (nearby.size() == 1)
        return nearby.front(); // Exactly one ROM beside the EXE: boot automatically.

    auto selected = RunDiscLauncher(root, nearby.size() > 1);
    userSelected = selected.has_value();
    return selected;
}

std::filesystem::path StoreDiscImagePortable(std::filesystem::path source, const std::filesystem::path& root) {
    source = std::filesystem::absolute(source).lexically_normal();
    const auto absoluteRoot = std::filesystem::absolute(root).lexically_normal();
    // Keep the user's ROM directly beside MH3.exe. A selection from ROMs/ or
    // another folder is copied to the EXE root, not buried in a subdirectory.
    if (source.parent_path() == absoluteRoot)
        return source;

    const auto target = absoluteRoot / source.filename();
    if (std::filesystem::exists(target)) {
        std::error_code sameError;
        if (std::filesystem::equivalent(source, target, sameError) && !sameError)
            return target;
    }
    UpdateDiscLauncherProgress("Copiando ROM", 0);
    if (!CopyFileExW(source.c_str(), target.c_str(), CopyDiscProgressRoutine, nullptr, nullptr, 0))
        MH3_THROW(std::runtime_error("Cannot copy ROM beside MH3.exe (Windows error " + std::to_string(GetLastError()) + "): " + target.string()));
    UpdateDiscLauncherProgress("ROM copiada; preparando archivos", 100);
    std::cout << "MH3: ROM copied to " << target.string() << '\n';
    return target;
}
} // namespace
#else
void UpdateDiscLauncherProgress(const std::string&, unsigned) {}
void CloseDiscLauncher() {}
#endif

// Disc metadata and converted assets live in disc/ next to MH3.exe. One ROM
// in the EXE root boots automatically. Otherwise the integrated launcher lets
// the user select a ROM, copies it beside MH3.exe, and prepares the game data.
bool PrepareGameData(const char* rom) {
    if (std::getenv("MH3_DISC_DIR")) {
        if (rom)
            std::cerr << "MH3: MH3_DISC_DIR is set; --rom is ignored\n";
        return true;
    }

#if defined(__ANDROID__)
    std::filesystem::path root;
    const char* extFiles = SDL_GetAndroidExternalStoragePath();
    const char* intFiles = SDL_GetAndroidInternalStoragePath();
    if (extFiles && extFiles[0]) {
        root = std::filesystem::path(extFiles);
    } else if (intFiles && intFiles[0]) {
        root = std::filesystem::path(intFiles);
    } else {
        root = std::filesystem::path("/storage/emulated/0/MH3");
    }
    std::error_code rootEc;
    std::filesystem::create_directories(root, rootEc);
    const auto data = root / "disc";
#else
    // MH3_DATA_ROOT replaces the executable's directory as the place for disc/
    // (the Linux AppImage runs from a read-only mount).
    const char* dataRootOverride = std::getenv("MH3_DATA_ROOT");
    const auto root = (dataRootOverride && *dataRootOverride) ? std::filesystem::path(dataRootOverride)
                                                              : mh3_self_exe().parent_path();
    const auto data = root / "disc";
#endif
    std::optional<std::filesystem::path> image;
    bool userSelectedRom = false;
    const bool dataReady = VitaLauncher::DiscReady(data);

    if (rom) {
        image = std::filesystem::path(rom);
#ifdef _WIN32
        image = StoreDiscImagePortable(*image, root);
#endif
    } else {
#ifdef _WIN32
        // Require a ROM beside the executable or let the integrated launcher
        // choose and copy one, even if converted assets from an earlier run exist.
        image = ResolveDiscImage(root, userSelectedRom);
        if (!image)
            return false;
        image = StoreDiscImagePortable(*image, root);
#else
        if (!dataReady) {
            std::vector<std::string> searchPaths;
#if defined(__ANDROID__)
            searchPaths = {
                "/storage/emulated/0/Download",
                "/storage/emulated/0/MH3",
                "/storage/emulated/0/OceanTri",
                "/storage/emulated/0/ROMs",
                "/storage/emulated/0/Games",
                "/storage/emulated/0",
                "/sdcard/Download",
                "/sdcard/MH3",
                "/sdcard/OceanTri",
                "/sdcard/ROMs",
                "/sdcard/Games",
                "/sdcard"
            };
            if (extFiles && extFiles[0]) searchPaths.push_back(extFiles);
            if (intFiles && intFiles[0]) searchPaths.push_back(intFiles);
#else
            searchPaths.push_back(root.string());
            searchPaths.push_back(root.parent_path().string());
            if (const char* appdir = std::getenv("APPIMAGE")) {
                std::error_code ec;
                searchPaths.push_back(std::filesystem::path(appdir).parent_path().string());
            }
            if (const char* home = std::getenv("HOME")) {
                searchPaths.push_back(std::string(home) + "/Downloads");
                searchPaths.push_back(std::string(home) + "/Descargas");
                searchPaths.push_back(std::string(home) + "/Games");
                searchPaths.push_back(std::string(home) + "/ROMs");
                searchPaths.push_back(std::string(home));
            }
            searchPaths.push_back("/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.2");
            searchPaths.push_back("/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3");
            searchPaths.push_back("/var/mnt/juegos_sdb2");
#endif

            auto isRomExtension = [](const std::string& ext) {
                std::string lower = ext;
                std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
                return lower == ".rvz" || lower == ".iso" || lower == ".wia";
            };

            for (const auto& dirPath : searchPaths) {
                std::error_code ec;
                if (!std::filesystem::exists(dirPath, ec))
                    continue;

                for (const auto& entry : std::filesystem::directory_iterator(dirPath, ec)) {
                    if (ec) break;
                    if (entry.is_regular_file(ec)) {
                        if (isRomExtension(entry.path().extension().string())) {
                            image = entry.path();
#if defined(__ANDROID__)
                            __android_log_print(ANDROID_LOG_INFO, "MH3", "MH3: Auto-detected ROM at %s", image->string().c_str());
#else
                            std::cout << "MH3: Auto-detected ROM at " << image->string() << std::endl;
#endif
                            break;
                        }
                    } else if (entry.is_directory(ec)) {
                        std::error_code subEc;
                        for (const auto& subEntry : std::filesystem::directory_iterator(entry.path(), subEc)) {
                            if (subEc) break;
                            if (subEntry.is_regular_file(subEc) && isRomExtension(subEntry.path().extension().string())) {
                                image = subEntry.path();
#if defined(__ANDROID__)
                                __android_log_print(ANDROID_LOG_INFO, "MH3", "MH3: Auto-detected ROM at %s", image->string().c_str());
#else
                                std::cout << "MH3: Auto-detected ROM at " << image->string() << std::endl;
#endif
                                break;
                            }
                        }
                        if (image) break;
                    }
                }
                if (image) break;
            }
        }

        if (!dataReady && !image) {
#if defined(__ANDROID__)
            __android_log_print(ANDROID_LOG_ERROR, "MH3", "No se encontro la ROM de Monster Hunter Tri");
            SDL_ShowSimpleMessageBox(
                SDL_MESSAGEBOX_ERROR,
                "Monster Hunter Tri",
                "No se encontró el archivo del juego (ROM).\n\n"
                "Por favor copia tu juego Monster Hunter Tri Europeo (.rvz, .iso o .wia)\n"
                "en la carpeta 'Download' o 'MH3' de la memoria de tu teléfono y vuelve a abrir la app.",
                nullptr
            );
            return false;
#else
            std::cerr << "MH3: No se encontro la ROM de Monster Hunter Tri (PAL)\n";
            SDL_ShowSimpleMessageBox(
                SDL_MESSAGEBOX_ERROR,
                "Monster Hunter Tri",
                "No se encontró el archivo del juego (ROM).\n\n"
                "Por favor copia tu juego Monster Hunter Tri Europeo (.rvz, .iso o .wia)\n"
                "en tu carpeta de Descargas o junto a la AppImage, o ejecuta con --rom <ruta>.",
                nullptr
            );
            return false;
#endif
        }
#endif
    }

    const bool shouldPrepare = image.has_value() && (rom != nullptr || userSelectedRom || !dataReady);
#ifdef _WIN32
    if (shouldPrepare && image && !g_discLauncher && rom == nullptr && !userSelectedRom) {
        // Boot remains automatic; this window simply exposes copy/preparation progress
        // instead of leaving a GUI-subsystem build looking as if nothing happened.
        RunDiscLauncher(root, false, image, true);
    }
#endif
    if (shouldPrepare) {
        if (!std::filesystem::is_regular_file(*image))
            MH3_THROW(std::runtime_error("ROM image does not exist: " + image->string()));
        std::string phase;
        unsigned shown = 101;
        CheckStatus(VitaLauncher::ProcessDisc(*image, data, [&](const std::string& stage, uint64_t done, uint64_t total) {
            const unsigned percent = total ? unsigned(done * 100 / total) : 100;
            if (stage == phase && percent == shown)
                return;
            phase = stage;
            shown = percent;
            std::cerr << "MH3 prepare: " << stage << " " << percent << "%\n";
            UpdateDiscLauncherProgress(stage, percent);
        }));
    }

    UpdateDiscLauncherProgress("Listo. Abriendo el juego", 100);
    CloseDiscLauncher();
    setenv("MH3_DISC_DIR", data.string().c_str(), 1);
    return true;
}
#endif

// --quest <id>|free [--area <n>|camp] [--area-index <n>] [--spawn <x,y,z>|exit:<n>[,<m>...]|exit:tour].
// The quest sets' ids don't overlap (village 1000.., arena 9000.., online
// 10000..): the id picks the set. --area and exit:<n> take the number the
// quest's map shows for the area (QuestCatalog::AreaIndex), --area-index the
// game's index.
void StartQuestBoot(int argc, char** argv) {
    using QuestCatalog::Set;
    const std::string_view id = argv[2];
    int area = -1, number = -1;
    std::vector<int> exitNumbers;
    std::string monster, small;

    for (int i = 3; i < argc; ++i) {
        const std::string_view option = argv[i];
        float x, y, z;

        if (option == "--area" && i + 1 < argc) {
            const std::string_view value = argv[++i];
            number = value == "camp" ? 0 : std::stoi(argv[i]);
        } else if (option == "--area-index" && i + 1 < argc)
            area = std::stoi(argv[++i]);
        else if (option == "--quest-monster" && i + 1 < argc)
            monster = argv[++i];
        else if (option == "--quest-small" && i + 1 < argc)
            small = argv[++i];
        else if (option == "--spawn" && i + 1 < argc && std::string_view(argv[i + 1]) == "exit:tour")
            ++i, RequestQuestTour();
        else if (option == "--spawn" && i + 1 < argc && std::string_view(argv[i + 1]).starts_with("exit:"))
            for (std::string_view numbers = argv[++i] + 5; !numbers.empty();) {
                const size_t comma = std::min(numbers.find(','), numbers.size());
                exitNumbers.push_back(std::stoi(std::string(numbers.substr(0, comma))));
                numbers.remove_prefix(std::min(comma + 1, numbers.size()));
            }
        else if (option == "--spawn" && i + 1 < argc && std::sscanf(argv[++i], "%f,%f,%f", &x, &y, &z) == 3)
            RequestQuestSpawn(x, y, z);
        else
            MH3_THROW(std::runtime_error(kUsage));
    }

    Set set = Set::Village;
    uint32_t quest = 0;
    uint8_t map = 1; // the free roam's

    // custom:PATH: a custom quest's record (USER/custom-quests/NAME.mh3quest).
    if (id.starts_with("custom:")) {
        const std::filesystem::path path(id.substr(7));
        std::vector<VitaLauncher::CustomQuest> custom;
        CheckStatus(VitaLauncher::LoadCustomQuests(path.parent_path().parent_path(), custom));
        const auto it = std::find_if(custom.begin(), custom.end(), [&](const auto& q) { return q.storageKey == path.stem().string(); });

        if (it == custom.end())
            MH3_THROW(std::runtime_error("No valid custom quest " + path.string()));

        CheckStatus(VitaLauncher::ActivateCustomQuest(*it));
        set = it->set;
        quest = it->base;
        map = it->map;

        // A template quest is on its base quest's map.
        for (const auto& q : map ? std::vector<QuestCatalog::Quest>{} : QuestCatalog::Load(set))
            if (q.id == quest)
                map = q.map;

        std::cerr << "MH3 quest: custom " << it->name << " over " << quest << " (" << QuestCatalog::MapName(map) << ")\n";
    } else if (id != "free") {
        quest = uint32_t(std::stoul(std::string(id)));
        bool found = false;

        for (const Set candidate : {Set::Village, Set::Arena, Set::Online}) {
            const auto quests = QuestCatalog::Load(candidate);
            const auto it = std::find_if(quests.begin(), quests.end(), [&](const auto& q) { return q.id == quest; });

            if (it == quests.end())
                continue;

            set = candidate;
            map = it->map;
            found = true;
            std::cerr << "MH3 quest: " << it->id << " " << it->name << " (" << QuestCatalog::MapName(it->map) << ")\n";
            break;
        }

        if (!found)
            MH3_THROW(std::runtime_error("No quest " + std::string(id) + "; see --list"));

        // --quest-monster NAME|ID: the quest's large monster replaced (any
        // monster in the arena pit: --quest 9004 --spawn 0,300,0);
        // --quest-small NAME|ID: its small monsters (--quest 9000's four
        // Jaggi; docs/monster-control.md).
        const auto monsterId = [](const std::string& name) {
            const auto names = QuestCatalog::MonsterNames();
            uint32_t chosen = 0;

            for (uint32_t m = 1; m < names.size() && !chosen; ++m)
                if (strcasecmp(names[m].c_str(), name.c_str()) == 0)
                    chosen = m;

            if (!chosen && std::isdigit(static_cast<unsigned char>(name[0])))
                chosen = uint32_t(std::stoul(name));

            if (!chosen || chosen > 255)
                MH3_THROW(std::runtime_error("No monster " + name));

            return uint8_t(chosen);
        };

        if (!monster.empty())
            CheckStatus(VitaLauncher::ReplaceQuestMonster(set, uint16_t(quest), monsterId(monster)));

        if (!small.empty())
            CheckStatus(VitaLauncher::ReplaceQuestSmallMonsters(set, uint16_t(quest), monsterId(small)));
    }

    const auto index = [&](int shown) {
        const int i = QuestCatalog::AreaIndex(map, shown);

        if (i < 0)
            MH3_THROW(std::runtime_error(QuestCatalog::MapName(map) + " has no area " + std::to_string(shown) + " on its map (areas: " + QuestCatalog::AreaNumbersText(map) +
                                         "; --area-index takes the game's own index)"));

        return i;
    };

    if (number >= 0) {
        area = index(number);
        std::cerr << "MH3 quest: " << QuestCatalog::AreaName(map, area) << "\n";
    }

    if (!exitNumbers.empty()) {
        std::vector<int> exits;

        for (const int n : exitNumbers)
            exits.push_back(index(n));

        RequestQuestExit(std::move(exits));
    }

    RequestQuestJump(quest, set, area);
    StartVillageBoot();
}

#if defined(__vita__) && defined(MH3_DEVELOPMENT)
void PrepareVitaGameData() {
    const char* dir = std::getenv("MH3_DISC_DIR");

    if (!dir)
        return;

    const std::filesystem::path data = dir;

    if (VitaLauncher::DiscReady(data))
        return;

    std::filesystem::path image;

    for (const auto& entry : std::filesystem::directory_iterator(data.parent_path()))
        if (entry.is_regular_file() && (entry.path().extension() == ".iso" || entry.path().extension() == ".rvz" || entry.path().extension() == ".wia")) {
            if (!image.empty())
                MH3_THROW(std::runtime_error("More than one disc image in " + data.parent_path().string()));

            image = entry.path();
        }
    if (image.empty())
        MH3_THROW(std::runtime_error("No game data in " + data.string() + " and no disc image beside it"));

    CheckStatus(VitaLauncher::ProcessDisc(image, data, [](const std::string& stage, uint64_t, uint64_t) { std::fprintf(stderr, "MH3 prepare: %s\n", stage.c_str()); }));
}
#endif

#ifdef __EMSCRIPTEN__
void MountWebFiles();
#endif
int main(int argc, char** argv) {
#if !defined(_WIN32)
    setenv("OPENSSL_ENABLE_SHA1_SIGNATURES", "1", 1);
#endif
#if defined(ANDROID) || defined(__ANDROID__)
    // Redirect stdout and stderr to Android logcat
    {
        static int pfd[2];
        static pthread_t thr;
        pipe(pfd);
        dup2(pfd[1], STDOUT_FILENO);
        dup2(pfd[1], STDERR_FILENO);
        pthread_create(&thr, nullptr, [](void* p) -> void* {
            int fd = (int)(intptr_t)p;
            char buf[1024];
            ssize_t r;
            std::error_code ec;
            std::filesystem::create_directories("/storage/emulated/0/MH3/logs", ec);
            std::filesystem::create_directories("/storage/emulated/0/MH3/textures", ec);
            {
                std::string readmePath = "/storage/emulated/0/MH3/textures/INSTRUCCIONES.txt";
                if (!std::filesystem::exists(readmePath)) {
                    if (FILE* rf = fopen(readmePath.c_str(), "w")) {
                        fputs("=== MONSTER HUNTER TRI - TEXTURAS HD ===\n"
                              "Coloca aqui tu carpeta de texturas HD de Dolphin (ejemplo: RMHE08 o RMHP08)\n"
                              "o directamente los archivos de textura .png / .dds con formato tex1_*.\n"
                              "El juego las cargara automaticamente al iniciar.\n", rf);
                        fclose(rf);
                    }
                }
            }
            FILE* logFile = fopen("/storage/emulated/0/MH3/logs/game_log.txt", "a");
            while ((r = read(fd, buf, sizeof(buf) - 1)) > 0) {
                if (r > 0 && buf[r - 1] == '\n') --r;
                buf[r] = '\0';
                __android_log_print(ANDROID_LOG_INFO, "MH3", "%s", buf);
                if (logFile) {
                    fprintf(logFile, "%s\n", buf);
                    fflush(logFile);
                }
            }
            if (logFile) fclose(logFile);
            return nullptr;
        }, (void*)(intptr_t)pfd[0]);
        pthread_detach(thr);
        setvbuf(stdout, nullptr, _IOLBF, 0);
        setvbuf(stderr, nullptr, _IONBF, 0);
        __android_log_print(ANDROID_LOG_INFO, "MH3", "=== MH3 Android main() started (argc=%d) ===", argc);
        for (int a = 0; a < argc; ++a) {
            __android_log_print(ANDROID_LOG_INFO, "MH3", "  argv[%d] = %s", a, argv[a]);
        }

    }
#endif

    {
        std::string userDirStr;
#if defined(ANDROID) || defined(__ANDROID__)
        userDirStr = "/storage/emulated/0/MH3";
#else
        const char* envUser = std::getenv("MH3_USER_DIR");
        if (envUser && *envUser) {
            userDirStr = envUser;
        } else {
            const char* dataRoot = std::getenv("MH3_DATA_ROOT");
            if (dataRoot && *dataRoot) {
                userDirStr = std::string(dataRoot) + "/saves";
            } else {
                userDirStr = (mh3_self_exe().parent_path() / "saves").string();
            }
        }
#endif
        const char* userDir = userDirStr.c_str();
        std::error_code uec;
        std::filesystem::create_directories(userDir, uec);
        std::filesystem::create_directories(std::string(userDir) + "/saves", uec);
        std::filesystem::create_directories(std::string(userDir) + "/nand", uec);
        std::filesystem::create_directories(std::string(userDir) + "/graphics", uec);
        std::filesystem::create_directories(std::string(userDir) + "/logs", uec);
        setenv("MH3_USER_DIR", userDir, 1);
#if defined(ANDROID) || defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "MH3", "MH3_USER_DIR set to: %s", userDir);
#else
        std::cout << "MH3: MH3_USER_DIR set to: " << userDir << "\n";
#endif

        // Language setting: Default to Spanish ('es')
        std::string langPath = std::string(userDir) + "/MH3UI.language";
        std::string langCode = "es";
        {
            std::ifstream in(langPath);
            std::string code;
            if (in >> code && !code.empty()) {
                langCode = code;
            } else {
                std::ofstream out(langPath);
                if (out) out << "es\n";
            }
        }
        setenv("MH3_LANGUAGE", langCode.c_str(), 1);
        uint8_t sysLang = 4; // default Spanish
        if (langCode == "en") sysLang = 1;
        else if (langCode == "de") sysLang = 2;
        else if (langCode == "fr") sysLang = 3;
        else if (langCode == "es") sysLang = 4;
        else if (langCode == "it") sysLang = 5;
        SetLanguageSetting(sysLang);
#if defined(ANDROID) || defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "MH3", "Language set to %s (sys=%u)", langCode.c_str(), sysLang);
#else
        std::cout << "MH3: Language set to " << langCode << " (sys=" << unsigned(sysLang) << ")\n";
#endif

        // Graphics setting: Default to Wii Original (scale 1.0x, resIdx=0, VSync=1)
        std::string gfxPath = std::string(userDir) + "/MH3UI.graphics";
        int msaa = 1, vsync = 1, resIdx = 0, fpsLimit = 60, aspect = 0, showFps = 1, fullscreen = 0;
        {
            std::ifstream in(gfxPath);
            if (in >> msaa >> vsync >> resIdx >> fpsLimit >> aspect >> showFps) {
                in >> fullscreen;
                resIdx = std::clamp(resIdx, 0, 5);
                MH3FrameRateControl::SetTargetFPS(fpsLimit);
            } else {
                std::ofstream out(gfxPath);
                if (out) out << "1 1 0 60 0 1 0\n";
                resIdx = 0;
                MH3FrameRateControl::SetTargetFPS(60);
            }
        }
        constexpr const char* scales[] = { "1.0", "1.6071429", "2.4107143", "3.2142857", "4.8214286", "0.0" };
        setenv("MH3_RENDER_SCALE", scales[resIdx], 1);
        if (fullscreen != 0) {
            setenv("MH3_START_FULLSCREEN", "1", 1);
        }
#if defined(ANDROID) || defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "MH3", "Graphics init: resIdx=%d scale=%s vsync=%d fpsLimit=%d fullscreen=%d",
                            resIdx, scales[resIdx], vsync, fpsLimit, fullscreen);
#else
        std::cout << "MH3: Graphics init: resIdx=" << resIdx << " scale=" << scales[resIdx]
                  << " vsync=" << vsync << " fpsLimit=" << fpsLimit << " fullscreen=" << fullscreen << "\n";
#endif
    }
#ifdef _WIN32
    {
        // Sin consola: la salida estandar se guarda en MH3.log junto al exe.
        wchar_t exePath[MAX_PATH] = {};
        if (GetModuleFileNameW(nullptr, exePath, MAX_PATH)) {
            std::wstring logPath(exePath);
            logPath = logPath.substr(0, logPath.find_last_of(L"\\/") + 1) + L"MH3.log";
            _wfreopen(logPath.c_str(), L"w", stdout);
            _wfreopen(logPath.c_str(), L"a", stderr);
        }
    }
#endif
#ifdef __EMSCRIPTEN__
    MountWebFiles();
#endif
    // A failure that stops the game reports the guest CPU state.
    fatalReportHook = [](const char* what) {
        SystemBridge::DumpCpuState(&GetPersistentCpuContext());
        RuntimeCrash::AppendCrashLog(what, &GetPersistentCpuContext());
    };

    aurora::fatal_handler = [](const char* what) { MH3Fatal(what); };
    InstallLegacyGxPanicHandler();
    TouchControls_Init();
#ifdef __vita__
    InitializeVitaPlatform(argc, argv);
#endif
    // Ctrl-C ends the process at once (the default action); SDL would turn it
    // into a quit event the game only sees at its next event check.
    setenv("SDL_NO_SIGNAL_HANDLERS", "1", 0);

    // With exceptions (development builds) a failure on the game thread comes
    // to the report below; without them (release builds) MH3Fatal makes the
    // same report where it happens.
#if defined(__cpp_exceptions)
    try {
#else
    {
#endif
#ifdef __vita__
        if (argc == 1 && !VitaLauncher::Run())
            return 0;
#endif
#if defined(__vita__) && defined(MH3_DEVELOPMENT)
        // Development launches skip the launcher: prepare MH3_DISC_DIR from
        // the one disc image in its parent directory.
        if (argc > 1)
            PrepareVitaGameData();
#endif
#ifndef __vita__
        // --rom <image> goes with any other option.
        const char* rom = nullptr;

        for (int i = 1; i + 1 < argc; ++i)
            if (std::string_view(argv[i]) == "--rom") {
                rom = argv[i + 1];
                std::copy(argv + i + 2, argv + argc, argv + i);
                argc -= 2;
                break;
            }
#endif
        // --no-damage and --cheat go with any other option.
        const auto noDamage = std::remove_if(argv + 1, argv + argc, [](const char* a) { return std::string_view(a) == "--no-damage"; });

        if (noDamage != argv + argc) {
            LauncherCheats::EnableByName("No damage", "");
            std::cerr << "MH3: no damage\n";
            argc = int(noDamage - argv);
        }

        for (int i = 1; i + 1 < argc;) {
            if (std::string_view(argv[i]) != "--cheat") {
                ++i;
                continue;
            }

            const std::string_view cheat = argv[i + 1];
            const size_t equals = cheat.find('=');
            const std::string_view name = cheat.substr(0, equals);
            const std::string_view value = equals == std::string_view::npos ? std::string_view() : cheat.substr(equals + 1);

            if (!LauncherCheats::EnableByName(name, value))
                MH3_THROW(std::runtime_error("Unknown cheat or value: " + std::string(cheat)));

            std::cerr << "MH3: cheat " << cheat << "\n";
            std::copy(argv + i + 2, argv + argc, argv + i);
            argc -= 2;
        }
#ifdef MH3_HAS_AURORA
        if (argc == 2 && std::string_view(argv[1]) == "--efb-check")
            return RunEfbCheck(argc, argv);

        if (argc == 2 && std::string_view(argv[1]) == "--graphics-check")
            return RunGraphicsCheck(argc, argv);
#if defined(MH3_DEVELOPMENT) && !defined(__vita__)
        // The Vita launcher's renderer use and hand-off to the game, on the host.
        if (argc == 2 && std::string_view(argv[1]) == "--launcher-screen-check")
            return VitaLauncher::RunLauncherScreenCheck();
#endif
#endif
        if (argc == 6 && std::string_view(argv[1]) == "--disc-read") {
            DiscImage disc(argv[2]);
            const auto size = std::stoull(argv[4], nullptr, 0);

            if (size > 64 * 1024 * 1024)
                MH3_THROW(std::runtime_error("Disc read too large"));

            auto bytes = disc.Read(std::stoull(argv[3], nullptr, 0), static_cast<uint32_t>(size));
            std::ofstream output(argv[5], std::ios::binary);
            output.write(reinterpret_cast<const char*>(bytes.data()), bytes.size());

            if (!output)
                MH3_THROW(std::runtime_error("Disc read output failed"));

            return 0;
        }
#ifndef __vita__
        if (!PrepareGameData(rom))
            return 0; // The user cancelled Insert ROM / Exit.
#endif
        if (argc == 3 && std::string_view(argv[1]) == "--list") {
            const std::string_view what = argv[2];

            if (what == "quests")
                QuestCatalog::Print(QuestCatalog::Set::Village);
            else if (what == "online-quests")
                QuestCatalog::Print(QuestCatalog::Set::Online);
            else if (what == "arena-quests")
                QuestCatalog::Print(QuestCatalog::Set::Arena);
            else
                MH3_THROW(std::runtime_error(kUsage));

            return 0;
        }

        Memory::Init(24 * 1024 * 1024);
        InitializePersistentCpuContext();
        auto& cpu = GetPersistentCpuContext();
        CpuContextScope scope(&cpu);

        if (argc == 2 && std::string_view(argv[1]) == "--self-test") {
            Memory::Write32(0x80001000, 0x12345678);

            if (Memory::Read32(0xC0001000) != 0x12345678 || Memory::Read16(0xC0001000) != 0x1234)
                MH3_THROW(std::runtime_error("RAM alias or big-endian access failed"));

            MemoryInline::FlatWriteRam32(0x80001004, 0xABCDEF01);

            if (MemoryInline::FlatLoad<uint32_t>(0xC0001004) != 0xABCDEF01)
                MH3_THROW(std::runtime_error("Translated stack-store mapping failed"));

            // GX MMIO now terminates with a backtrace; an unrelated unclaimed
            // device address still reports an ordinary access violation.
            uint32_t unclaimed;

            if (Memory::TryRead32(0xCC009000, unclaimed))
                MH3_THROW(std::runtime_error("MMIO must not silently read as RAM"));

            MH3_OSExceptionInit(&cpu);

            if (Memory::Read32(0x80797798) != 0x80003000 || Memory::Read32(0x80003038) != 0x804CB930)
                MH3_THROW(std::runtime_error("MH3 exception table initialization failed"));

            Memory::Write32(0x800030BC, 0xFFFFFFFF);
            MH3_OSInterruptInit(&cpu);

            if (Memory::Read32(0x80797828) != 0x80003040 || Memory::Read32(0x800030BC) != 0 || Memory::Read32(0x800000C4) != 0xFFFFFFF0 || Memory::Read32(0x80003010) != 0x804D1A70)
                MH3_THROW(std::runtime_error("MH3 interrupt initialization failed"));

            RunDeviceSelfTests(&cpu);
            std::cout << "MH3 runtime self-test passed\n";
            return 0;
        }

        InitializeDataSections();
        LocalOnlineServer::Configure();
        ApplyOnlinePatches();
#ifdef MH3_ENABLE_COLLISION_CHECK
        if (argc == 2 && std::string_view(argv[1]) == "--collision-check")
            return RunCollisionCheck(&cpu);
#endif
#ifdef MH3_HAS_AURORA
        if (argc == 2 && std::string_view(argv[1]) == "--audio-output-check") {
            RunAudioSelfTests(&cpu);

            // Check the real playback device with silence, without requiring
            // game boot or claiming that an in-game mix has been rendered.
            const std::vector<uint8_t> silence(12800, 0);
            QueueHostPcm(silence.data(), silence.size(), 32000);
            std::this_thread::sleep_for(std::chrono::milliseconds(150));
            std::cout << "MH3 host audio playback check passed\n";
            return 0;
        }
#endif
        if (argc == 2 && std::string_view(argv[1]) == "--audio-self-test") {
            RunAudioSelfTests(&cpu);
            return 0;
        }

        if (argc == 2 && std::string_view(argv[1]) == "--village")
            StartVillageBoot();
        else if (argc == 2 && std::string_view(argv[1]) == "--city")
            StartVillageBoot(0, 0, true);
        else if (argc >= 3 && std::string_view(argv[1]) == "--quest")
            StartQuestBoot(argc, argv);
        else if (argc != 1)
            MH3_THROW(std::runtime_error(kUsage));

        RecompMod::RegisterExecutableRange(0x80004000, 0x800066E0, ".init");
        RecompMod::RegisterExecutableRange(0x8003F260, 0x8056FAA0, ".text");

        // The apploader normally installs the FST in reserved high MEM1.
        // The SDK's DVDOpen walks this guest table, independently of the host
        // partition reader. Keep it outside both advertised MEM1 arenas.
        const char* discOverride = std::getenv("MH3_DISC_DIR");
        const auto fstPath = std::filesystem::path(discOverride ? discOverride : "Assets/DATA") / "sys/fst.bin";
        std::ifstream fst(fstPath, std::ios::binary | std::ios::ate);
        const auto fstLength = fst ? fst.tellg() : std::streampos(-1);

        if (fstLength < 12 || fstLength > 1024 * 1024)
            MH3_THROW(std::runtime_error("Invalid or missing boot FST"));

        const uint32_t fstSize = static_cast<uint32_t>(fstLength);
        const uint32_t arenaHi = (0x81800000u - fstSize) & ~31u;
        fst.seekg(0);
        fst.read(reinterpret_cast<char*>(Memory::GetPointer(arenaHi, fstSize)), fstSize);

        if (!fst || Memory::Read8(arenaHi) != 1 || Memory::Read32(arenaHi + 8) < 1 || uint64_t(Memory::Read32(arenaHi + 8)) * 12 > fstSize)
            MH3_THROW(std::runtime_error("Invalid boot FST root"));

        Memory::Write32(0x80000038, arenaHi);
        Memory::Write32(0x8000003C, fstSize);

        // The guest worker's stack sits below the FST, the draw thread's below
        // it; the game's arena ends under them.
        const uint32_t workerStack = arenaHi - GuestWorker::kGuestStackBytes;
        GuestWorker::ReserveGuestStack(workerStack);
        const uint32_t gameArenaHi = workerStack - DrawThread::kGuestStackBytes;
        DrawThread::Thread().ReserveGuestStack(gameArenaHi, DrawThread::kGuestStackBytes);

        // Standard Wii boot information, with MH3's own arena boundary.
        Memory::Write32(0x80000000, 0x524D4850); // RMHP
        Memory::Write16(0x80000004, 0x3038);     // 08
        Memory::Write32(0x80000020, 0x0D15EA5E);
        Memory::Write32(0x80000028, 24 * 1024 * 1024);
        Memory::Write32(0x8000002C, 0x23);
        Memory::Write32(0x80000030, 0x807B1CC0); // __ArenaLo, from OSInit
        Memory::Write32(0x80000034, gameArenaHi);

        // TV mode EuRGB60 (PAL console set to 60 Hz). MH3's logic assumes 60 Hz
        // retraces in every region (RenderInit's frame rate is 60.0 / vcnt), and
        // VIInit reports format 5 for this value, so RenderInit picks the 480-line
        // 60 Hz mode instead of the 574-line PAL50 one.
        Memory::Write32(0x800000CC, 5);
        Memory::Write32(0x800000F8, 243000000);
        Memory::Write32(0x800000FC, 729000000);

        // This disc's TMD requests IOS55 (system title 00000001-00000037).
        // IOS metadata and arena limits follow Dolphin's IOS/VersionInfo.cpp.
        // https://github.com/dolphin-emu/dolphin/blob/master/Source/Core/Core/IOS/VersionInfo.cpp
        Memory::Write32(0x800000F0, 0x01800000);
        Memory::Write32(0x80003100, 0x01800000);
        Memory::Write32(0x80003104, 0x01800000);
        Memory::Write32(0x80003108, 0x81800000);
        Memory::Write32(0x8000310C, 0x807B1CC0);
        Memory::Write32(0x80003110, gameArenaHi);
        Memory::Write32(0x80003118, 0x04000000);
        Memory::Write32(0x8000311C, 0x04000000);
        Memory::Write32(0x80003120, 0x93600000);
        Memory::Write32(0x80003124, 0x90000800);

        // The guest worker's and the draw thread's copies of the g3d scratch
        // end the MEM2 arena.
        const uint32_t workerArea = 0x935E0000 - GuestWorker::kWorkAreaBytes;
        GuestWorker::ReserveWorkArea(workerArea);
        const uint32_t drawArea = workerArea - GuestWorker::kWorkAreaBytes;
        DrawThread::Thread().ReserveWorkArea(drawArea);

        // Then the spawn lists of monsters a quest puts on maps they have no
        // placement for (custom quests, --quest-monster).
        const uint32_t mem2ArenaHi = drawArea - QuestPlacement::kBytes;
        QuestPlacement::Apply(mem2ArenaHi);
        Memory::Write32(0x80003128, mem2ArenaHi);
        Memory::Write32(0x80003130, 0x935E0000);
        Memory::Write32(0x80003134, 0x93600000);
        Memory::Write32(0x80003138, 0x11);
        Memory::Write32(0x8000313C, 0xFF01);
        Memory::Write32(0x80003140, 0x0037161F);
        Memory::Write32(0x80003144, 0x00030110);
        Memory::Write32(0x80003148, 0x93600000);
        Memory::Write32(0x8000314C, 0x93620000);
        Memory::Write32(0x80003180, 0x524D4850);
        Memory::Write32(0x80003188, 0x0037161F);
        Memory::Write32(0x80003194, 0x524D4850);
        cpu.gpr[1] = 0x807AFCB8;
        cpu.msr = 0x8000;
        TranslatedFunctionRegistry::Finalize();
        std::cout << "Starting statically recompiled MH3 at 0x80006310\n";
#if defined(ANDROID) || defined(__ANDROID__)
        std::thread([&cpu]() {
            for (int i = 0; i < 300; ++i) {
                std::this_thread::sleep_for(std::chrono::seconds(2));
                __android_log_print(ANDROID_LOG_INFO, "MH3_WATCHDOG",
                    "Tick %d: execAddr=0x%08X lr=0x%08X sp=0x%08X gpr3=0x%08X",
                    i, PpcThread::Of(&cpu).executionAddress, cpu.lr, cpu.gpr[1], cpu.gpr[3]);
            }
        }).detach();
#endif
        InvokeIndirectCpu(0x80006310, &cpu);
        std::cout << "MH3 entry returned\n";
        return 0;
    }
#if defined(__cpp_exceptions)
    catch (const std::exception& error) {
#if defined(ANDROID) || defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_FATAL, "MH3", "FATAL EXCEPTION in main(): %s", error.what());
        if (FILE* f = fopen("/sdcard/Download/oceantri_crash.txt", "a")) {
            fprintf(f, "FATAL EXCEPTION: %s\n", error.what());
            fclose(f);
        }
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "MH3 Error", error.what(), nullptr);
        std::this_thread::sleep_for(std::chrono::seconds(3));
#endif
        std::cerr << "MH3 runtime stopped: " << error.what() << '\n';
#ifdef _WIN32
        CloseDiscLauncher();
        MessageBoxA(nullptr, error.what(), "Monster Hunter Tri Recomp - Error", MB_OK | MB_ICONERROR | MB_SETFOREGROUND);
#endif
        SystemBridge::DumpCpuState(&GetPersistentCpuContext());
        RuntimeCrash::AppendCrashLog(error.what(), &GetPersistentCpuContext());
#if defined(ANDROID) || defined(__ANDROID__)
        std::_Exit(1);
#endif
        return 1;
    }
#endif
}

#if defined(ANDROID) || defined(__ANDROID__)
extern "C" __attribute__((visibility("default"))) int SDL_main(int argc, char* argv[]) {
    return main(argc, argv);
}
#endif
