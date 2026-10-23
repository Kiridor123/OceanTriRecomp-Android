#include "mh3sp_native_server.h"
#include "mod_manager.h"
#include "texture_replacer.h"
#include "post_process.h"
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
#include "native_launcher.h"
#include "launcher_screen.h"
#ifndef __EMSCRIPTEN__
#include <execinfo.h>
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
#if !defined(__EMSCRIPTEN__) && !defined(MH3_NO_UNWIND_TABLES)
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
// crash.txt (appended) and, on the host, through hostClibPrintf, which the
// console shows in any build: ux0:/data/mh3-wii/crash.txt there, beside the
// saves elsewhere (MH3_USER_DIR, default saves/). Host crashes that report
// nothing (a data abort) leave the system's core dump instead.
void AppendCrashLog(std::string_view what, const CpuContext* cpu) noexcept {
    std::ostringstream report;
    report << "MH3 runtime stopped: " << what << '\n';
    SystemBridge::DumpCpuState(report, cpu);
    const std::string text = report.str();
    const char* user = std::getenv("MH3_USER_DIR");
    const std::string path = std::string(user ? user : "saves") + "/crash.txt";
    std::ofstream out(path, std::ios::app);

    if (out)
        out << text << '\n';
}

void WriteCrashArtifacts(std::string_view reason, std::string_view details, const uint32_t*) noexcept {
    std::cerr << reason << ": " << details << '\n';
    SystemBridge::DumpCpuState(TryGetCpuContext());
    AppendCrashLog(std::string(reason) + ": " + std::string(details), TryGetCpuContext());
}

[[noreturn]] void FatalMissingGuestTarget(uint32_t target, CpuContext* cpu) noexcept {
    char what[64];
    std::snprintf(what, sizeof what, "Missing translated target 0x%08x", target);
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

// MH3_LAUNCHER_UI: launcher oscuro y limpio, a juego con el menu del juego.
// Paleta y medidas: se ajustan desde las constantes de aqui.
constexpr wchar_t DiscLauncherClassName[] = L"MH3RecompDiscLauncher";
constexpr int DiscLauncherWidth = 680;
constexpr int DiscLauncherHeight = 380;
constexpr int LauncherMargin = 32;
constexpr COLORREF LauncherBg = RGB(10, 14, 16);
constexpr COLORREF LauncherSurface = RGB(17, 24, 27);
constexpr COLORREF LauncherSurfaceHover = RGB(24, 34, 37);
constexpr COLORREF LauncherEdge = RGB(37, 51, 54);
constexpr COLORREF LauncherInk = RGB(232, 244, 242);
constexpr COLORREF LauncherMuted = RGB(124, 152, 149);
constexpr COLORREF LauncherAqua = RGB(70, 245, 218);
constexpr COLORREF LauncherAquaHover = RGB(118, 250, 232);
constexpr COLORREF LauncherAquaDim = RGB(30, 104, 96);
constexpr COLORREF LauncherTrack = RGB(24, 34, 37);
constexpr COLORREF LauncherBlack = RGB(7, 11, 13);

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
    int hover = 0; // 0 nada, 1 seleccionar, 2 iniciar, 3 cancelar
};

DiscLauncherState* g_discLauncher = nullptr;

void LauncherText(HDC dc, const RECT& rect, const wchar_t* value, int size, COLORREF color, int weight = FW_NORMAL, UINT flags = DT_LEFT | DT_VCENTER | DT_SINGLELINE) {
    HFONT font = CreateFontW(-size, 0, 0, 0, weight, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                             CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
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

// Rectangulo redondeado con borde de 1 px: dos rellenos, sin plumas (queda nitido al reducir).
void LauncherRound(HDC dc, const RECT& rect, int radius, COLORREF fill, COLORREF edge) {
    HBRUSH edgeBrush = CreateSolidBrush(edge);
    HBRUSH fillBrush = CreateSolidBrush(fill);
    if (!edgeBrush || !fillBrush) {
        if (edgeBrush) DeleteObject(edgeBrush);
        if (fillBrush) DeleteObject(fillBrush);
        return;
    }
    const HGDIOBJ oldPen = SelectObject(dc, GetStockObject(NULL_PEN));
    const HGDIOBJ oldBrush = SelectObject(dc, edgeBrush);
    RoundRect(dc, rect.left, rect.top, rect.right, rect.bottom, radius * 2, radius * 2);
    if (fill != edge) {
        SelectObject(dc, fillBrush);
        RoundRect(dc, rect.left + 1, rect.top + 1, rect.right - 1, rect.bottom - 1, radius * 2 - 2, radius * 2 - 2);
    }
    SelectObject(dc, oldBrush);
    SelectObject(dc, oldPen);
    DeleteObject(edgeBrush);
    DeleteObject(fillBrush);
}

void LauncherRule(HDC dc, int x1, int x2, int y, COLORREF color) {
    HBRUSH brush = CreateSolidBrush(color);
    if (!brush)
        return;
    const RECT line{x1, y, x2, y + 1};
    FillRect(dc, &line, brush);
    DeleteObject(brush);
}

void LauncherDiamond(HDC dc, int cx, int cy, int r, COLORREF color) {
    HBRUSH brush = CreateSolidBrush(color);
    if (!brush)
        return;
    const POINT points[4] = {{cx, cy - r}, {cx + r, cy}, {cx, cy + r}, {cx - r, cy}};
    const HGDIOBJ oldPen = SelectObject(dc, GetStockObject(NULL_PEN));
    const HGDIOBJ oldBrush = SelectObject(dc, brush);
    Polygon(dc, points, 4);
    SelectObject(dc, oldBrush);
    SelectObject(dc, oldPen);
    DeleteObject(brush);
}

// "1.4 GB  ·  ISO"
std::wstring LauncherFileInfo(const std::filesystem::path& path) {
    std::error_code ec;
    const auto bytes = std::filesystem::file_size(path, ec);
    std::wstring ext = path.extension().wstring();
    if (!ext.empty() && ext.front() == L'.')
        ext.erase(ext.begin());
    for (auto& ch : ext)
        if (ch >= L'a' && ch <= L'z')
            ch = static_cast<wchar_t>(ch - L'a' + L'A');
    std::wstring out;
    if (!ec) {
        const double mb = static_cast<double>(bytes) / (1024.0 * 1024.0);
        if (mb >= 1024.0) {
            const int tenths = static_cast<int>(mb / 1024.0 * 10.0 + 0.5);
            out = std::to_wstring(tenths / 10) + L"." + std::to_wstring(tenths % 10) + L" GB";
        } else {
            out = std::to_wstring(static_cast<int>(mb + 0.5)) + L" MB";
        }
    }
    if (!ext.empty()) {
        if (!out.empty())
            out += L"  \u00b7  ";
        out += ext;
    }
    return out;
}

struct LauncherLayout {
    RECT card;
    RECT selectBtn;
    RECT startBtn;
    RECT cancelBtn;
};

LauncherLayout ComputeLauncherLayout(const RECT& client) {
    const int left = LauncherMargin;
    const int right = static_cast<int>(client.right) - LauncherMargin;
    LauncherLayout l{};
    l.card = RECT{left, 152, right, 206};
    l.selectBtn = RECT{left, 226, left + 190, 270};
    l.startBtn = RECT{right - 200, 226, right, 270};
    l.cancelBtn = RECT{right - 200 - 10 - 110, 226, right - 200 - 10, 270};
    return l;
}

// 0 nada, 1 seleccionar, 2 iniciar (solo con ROM elegida), 3 cancelar
int LauncherHit(HWND window, POINT p) {
    if (!g_discLauncher || g_discLauncher->busy)
        return 0;
    RECT client{};
    GetClientRect(window, &client);
    const LauncherLayout l = ComputeLauncherLayout(client);
    if (PtInRect(&l.selectBtn, p)) return 1;
    if (g_discLauncher->selected.has_value() && PtInRect(&l.startBtn, p)) return 2;
    if (PtInRect(&l.cancelBtn, p)) return 3;
    return 0;
}

bool ApplyLauncherGlass(HWND window) {
    (void)window; // Fondo solido: el pintado rellena todo con LauncherBg.
    return false;
}

void DrawDiscLauncher(HDC dc, const RECT& client) {
    const int W = static_cast<int>(client.right), H = static_cast<int>(client.bottom);
    const int M = LauncherMargin;
    const DiscLauncherState* s = g_discLauncher;
    const bool busy = s && s->busy;
    const bool hasSelection = s && s->selected.has_value();
    const int hover = s ? s->hover : 0;

    if (HBRUSH background = CreateSolidBrush(LauncherBg)) {
        FillRect(dc, &client, background);
        DeleteObject(background);
    }

    // Cabecera, como en el menu del juego: titulo grande, subtitulo apagado y filete de rombos.
    LauncherText(dc, RECT{M, 22, W - M, 40}, L"MONSTER HUNTER TRI  \u00b7  RECOMP", 11, LauncherAqua, FW_BOLD);
    LauncherText(dc, RECT{M, 42, W - M, 80}, L"Preparar el juego", 26, LauncherInk, FW_BOLD);
    const wchar_t* hint = busy
        ? L"Preparando los datos necesarios. El juego se abrir\u00e1 solo al terminar."
        : hasSelection
            ? L"ROM lista. Pulsa Copiar e iniciar para guardarla junto a MH3.exe."
            : s && s->multipleFound
                ? L"Hay varias ROM junto a MH3.exe. Elige la que quieres iniciar."
                : L"No hay ninguna ROM junto a MH3.exe. Elige tu archivo ISO, RVZ o WIA; se copiar\u00e1 junto al ejecutable.";
    LauncherText(dc, RECT{M, 84, W - M, 124}, hint, 12, LauncherMuted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);
    LauncherRule(dc, M, W - M, 134, LauncherEdge);
    for (int x = M + 8; x < W - M; x += 22)
        LauncherDiamond(dc, x, 134, 3, LauncherAquaDim);

    // ROM elegida
    const LauncherLayout l = ComputeLauncherLayout(client);
    LauncherRound(dc, l.card, 12, LauncherSurface, LauncherEdge);
    std::wstring title = L"Ninguna ROM seleccionada";
    std::wstring detail = L"Admite ISO, RVZ y WIA";
    if (hasSelection) {
        title = s->selected->filename().wstring();
        detail = LauncherFileInfo(*s->selected);
    }
    LauncherText(dc, RECT{l.card.left + 18, l.card.top + 7, l.card.right - 18, l.card.top + 29}, title.c_str(), 13,
                 hasSelection ? LauncherInk : LauncherMuted, FW_SEMIBOLD, DT_LEFT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
    LauncherText(dc, RECT{l.card.left + 18, l.card.top + 29, l.card.right - 18, l.card.top + 47}, detail.c_str(), 11,
                 LauncherMuted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);

    if (busy) {
        LauncherText(dc, RECT{M, 226, W - M, 248}, s->status.c_str(), 13, LauncherInk, FW_SEMIBOLD,
                     DT_LEFT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        const RECT track{M, 258, W - M, 264};
        LauncherRound(dc, track, 3, LauncherTrack, LauncherTrack);
        const int fullWidth = std::max(0, static_cast<int>(track.right - track.left));
        const int fillWidth = static_cast<int>((static_cast<uint64_t>(fullWidth) * std::min(100u, s->progress)) / 100u);
        if (fillWidth > 0) {
            const RECT bar{track.left, track.top, track.left + fillWidth, track.bottom};
            LauncherRound(dc, bar, 3, LauncherAqua, LauncherAqua);
        }
    } else {
        // Secundario: seleccionar
        LauncherRound(dc, l.selectBtn, 12, hover == 1 ? LauncherSurfaceHover : LauncherSurface, hover == 1 ? LauncherAquaDim : LauncherEdge);
        LauncherText(dc, l.selectBtn, L"Seleccionar ROM\u2026", 13, LauncherInk, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        // Terciario: cancelar (solo texto)
        if (hover == 3)
            LauncherRound(dc, l.cancelBtn, 12, LauncherSurface, LauncherSurface);
        LauncherText(dc, l.cancelBtn, L"Cancelar", 13, hover == 3 ? LauncherInk : LauncherMuted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        // Principal: copiar e iniciar
        if (hasSelection) {
            const COLORREF accent = hover == 2 ? LauncherAquaHover : LauncherAqua;
            LauncherRound(dc, l.startBtn, 12, accent, accent);
            LauncherText(dc, l.startBtn, L"Copiar e iniciar", 13, LauncherBlack, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        } else {
            LauncherRound(dc, l.startBtn, 12, LauncherSurface, LauncherEdge);
            LauncherText(dc, l.startBtn, L"Copiar e iniciar", 13, LauncherMuted, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        }
    }

    const wchar_t* footer = busy ? L"La primera vez puede tardar un poco." : L"Esc para salir";
    LauncherText(dc, RECT{M, H - 34, W - M, H - 12}, footer, 10, LauncherMuted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

// Se dibuja al triple de tamano y se reduce (como el panel del menu) para suavizar los bordes.
void PaintDiscLauncher(HWND window) {
    PAINTSTRUCT ps{};
    HDC dc = BeginPaint(window, &ps);
    if (!dc)
        return;
    RECT client{};
    GetClientRect(window, &client);
    const int W = static_cast<int>(client.right), H = static_cast<int>(client.bottom);
    constexpr int Scale = 3;
    HDC mem = (W > 0 && H > 0) ? CreateCompatibleDC(dc) : nullptr;
    HBITMAP bitmap = mem ? CreateCompatibleBitmap(dc, W * Scale, H * Scale) : nullptr;
    if (mem && bitmap) {
        const HGDIOBJ oldBitmap = SelectObject(mem, bitmap);
        SetMapMode(mem, MM_ANISOTROPIC);
        SetWindowExtEx(mem, W, H, nullptr);
        SetViewportExtEx(mem, W * Scale, H * Scale, nullptr);
        DrawDiscLauncher(mem, client);
        SetStretchBltMode(dc, HALFTONE);
        SetBrushOrgEx(dc, 0, 0, nullptr);
        StretchBlt(dc, 0, 0, W, H, mem, 0, 0, W, H, SRCCOPY);
        SelectObject(mem, oldBitmap);
    } else {
        DrawDiscLauncher(dc, client);
    }
    if (bitmap) DeleteObject(bitmap);
    if (mem) DeleteDC(mem);
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
    case WM_MOUSEMOVE: {
        if (!g_discLauncher)
            return 0;
        TRACKMOUSEEVENT track{sizeof(track), TME_LEAVE, window, 0};
        TrackMouseEvent(&track);
        const POINT p{GET_X_LPARAM(lparam), GET_Y_LPARAM(lparam)};
        const int hit = LauncherHit(window, p);
        if (hit != g_discLauncher->hover) {
            g_discLauncher->hover = hit;
            InvalidateRect(window, nullptr, FALSE);
        }
        return 0;
    }
    case WM_MOUSELEAVE:
        if (g_discLauncher && g_discLauncher->hover != 0) {
            g_discLauncher->hover = 0;
            InvalidateRect(window, nullptr, FALSE);
        }
        return 0;
    case WM_SETCURSOR:
        if (LOWORD(lparam) == HTCLIENT && g_discLauncher && g_discLauncher->hover != 0) {
            SetCursor(LoadCursorW(nullptr, MAKEINTRESOURCEW(32649))); // mano
            return TRUE;
        }
        return DefWindowProcW(window, message, wparam, lparam);
    case WM_LBUTTONUP: {
        const POINT p{GET_X_LPARAM(lparam), GET_Y_LPARAM(lparam)};
        const int hit = LauncherHit(window, p);
        if (hit == 1) {
            auto choice = SelectDiscImage(g_discLauncher->root, window);
            if (choice) {
                g_discLauncher->selected = *choice;
                g_discLauncher->status = L"Seleccionada: " + choice->filename().wstring();
                InvalidateRect(window, nullptr, FALSE);
                UpdateWindow(window);
            }
        } else if (hit == 2) {
            g_discLauncher->accepted = true;
            g_discLauncher->busy = true;
            g_discLauncher->hover = 0;
            g_discLauncher->status = L"Iniciando preparaci\u00f3n\u2026";
            InvalidateRect(window, nullptr, FALSE);
            UpdateWindow(window);
        } else if (hit == 3) {
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
            g_discLauncher->hover = 0;
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
    state.status = autoStart ? L"ROM detectada. Preparando para iniciar automáticamente."
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
    const COLORREF launcherBorder = LauncherEdge;
    const int roundedCorners = 2;
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(20), &darkTitleBar, sizeof(darkTitleBar));
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(34), &launcherBorder, sizeof(launcherBorder));
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(33), &roundedCorners, sizeof(roundedCorners));
    const COLORREF launcherCaption = LauncherBg;  // DWMWA_CAPTION_COLOR (Windows 11)
    const COLORREF launcherCaptionText = LauncherInk; // DWMWA_TEXT_COLOR
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(35), &launcherCaption, sizeof(launcherCaption));
    DwmSetWindowAttribute(state.window, static_cast<DWMWINDOWATTRIBUTE>(36), &launcherCaptionText, sizeof(launcherCaptionText));
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
    { // MH3_LAUNCHER_UI: solo se repinta cuando cambia el texto/porcentaje (el repintado es suave pero no barato)
        static std::wstring lastStatus;
        if (g_discLauncher->status != lastStatus) {
            lastStatus = g_discLauncher->status;
            InvalidateRect(g_discLauncher->window, nullptr, TRUE);
            UpdateWindow(g_discLauncher->window);
        }
    }
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

    const auto root = mh3_self_exe().parent_path();
    const auto data = root / "disc";
    std::optional<std::filesystem::path> image;
    bool userSelectedRom = false;
    const bool dataReady = NativeLauncher::DiscReady(data);

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
        if (!dataReady)
            MH3_THROW(std::runtime_error("Game data in " + data.string() + " is missing. Pass --rom <European Monster Hunter Tri RVZ/WIA/ISO> to prepare it."));
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
        CheckStatus(NativeLauncher::ProcessDisc(*image, data, [&](const std::string& stage, uint64_t done, uint64_t total) {
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
        std::vector<NativeLauncher::CustomQuest> custom;
        CheckStatus(NativeLauncher::LoadCustomQuests(path.parent_path().parent_path(), custom));
        const auto it = std::find_if(custom.begin(), custom.end(), [&](const auto& q) { return q.storageKey == path.stem().string(); });

        if (it == custom.end())
            MH3_THROW(std::runtime_error("No valid custom quest " + path.string()));

        CheckStatus(NativeLauncher::ActivateCustomQuest(*it));
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
            CheckStatus(NativeLauncher::ReplaceQuestMonster(set, uint16_t(quest), monsterId(monster)));

        if (!small.empty())
            CheckStatus(NativeLauncher::ReplaceQuestSmallMonsters(set, uint16_t(quest), monsterId(small)));
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


#ifdef __EMSCRIPTEN__
void MountWebFiles();
#endif
int main(int argc, char** argv) {
    mh3sp_native::Start();
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
        // --rom <image> goes with any other option.
        const char* rom = nullptr;

        for (int i = 1; i + 1 < argc; ++i)
            if (std::string_view(argv[i]) == "--rom") {
                rom = argv[i + 1];
                std::copy(argv + i + 2, argv + argc, argv + i);
                argc -= 2;
                break;
            }
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
#if defined(MH3_DEVELOPMENT)
        // The host launcher's renderer use and hand-off to the game, on the host.
        if (argc == 2 && std::string_view(argv[1]) == "--launcher-screen-check")
            return NativeLauncher::RunLauncherScreenCheck();
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
        if (!PrepareGameData(rom))
            return 0; // The user cancelled Insert ROM / Exit.
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
        ModManager::Init();
        TextureReplacer::Init();
        MH3PostProcess::Init();
        std::cout << "Starting statically recompiled MH3 at 0x80006310\n";
        InvokeIndirectCpu(0x80006310, &cpu);
        std::cout << "MH3 entry returned\n";
        return 0;
    }
#if defined(__cpp_exceptions)
    catch (const std::exception& error) {
        std::cerr << "MH3 runtime stopped: " << error.what() << '\n';
#ifdef _WIN32
        CloseDiscLauncher();
        MessageBoxA(nullptr, error.what(), "Monster Hunter Tri Recomp - Error", MB_OK | MB_ICONERROR | MB_SETFOREGROUND);
#endif
        SystemBridge::DumpCpuState(&GetPersistentCpuContext());
        RuntimeCrash::AppendCrashLog(error.what(), &GetPersistentCpuContext());
        return 1;
    }
#endif
}
