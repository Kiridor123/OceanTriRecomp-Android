#include "settings_overlay.h"
#include "mh3_graphics_settings.h"
#include "mod_manager.h"
#include "texture_replacer.h"
#include "post_process.h"

#include <cwchar>
#include "mh3_mouse_look_sensitivity.h"
#include "runtime_config.h"
#include "mh3_frame_rate_control.h"
#include "language.h"

#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "save_manager.h"
#include "net/local_server.h"
#include <sstream>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <commdlg.h>
#include <shlobj.h>
#include <shobjidl.h>
#include <objbase.h>
#include <windowsx.h>
#include <dwmapi.h>
#include <shellapi.h>
#include <gdiplus.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_video.h>
#include <SDL3/SDL_gamepad.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_keyboard.h>
#include <SDL3/SDL_mouse.h>
#include <SDL3/SDL_scancode.h>
#include <cwctype>
#include "mh3_control_map.h"
#include <dolphin/vi.h>

void aurora_enable_vsync(bool enabled);
void SetMsaaSetting(uint32_t samples);

namespace settings_overlay {
namespace {

constexpr wchar_t OverlayClassName[] = L"MH3RecompSettingsStudioV6";
constexpr wchar_t HudClassName[] = L"MH3RecompFpsHudV6";
constexpr int PanelW = 960, PanelH = 640;
constexpr int SidebarW = 232;
constexpr int ContentX = SidebarW + 24, ContentR = PanelW - 24;
constexpr int HudW = 166, HudH = 42;
constexpr std::array<const wchar_t*, 5> FontFaces{{L"Segoe UI", L"Consolas", L"Bahnschrift", L"Arial", L"Verdana"}};
constexpr std::array<int, 5> FrameRateValues{{30, 45, 60, 90, 120}};
constexpr std::array<float, 6> RenderScales{{540.0f/448.0f, 720.0f/448.0f, 900.0f/448.0f, 1080.0f/448.0f, 1440.0f/448.0f, 2160.0f/448.0f}};
constexpr std::array<const char*, 6> RenderScaleEnvironmentValues{{"1.2053571", "1.6071429", "2.0089286", "2.4107143", "3.2142857", "4.8214286"}};

struct Theme {
    const wchar_t* name;
    const wchar_t* tag;
    COLORREF bgTop, bgBot, sidebar, card, hover, ink, muted, accent, accent2, border;
    int motif; // 0 MogaGuild, 1 Tri, 2 MogaLagoon, 3 Rathalos, 4 Lagiacrus, 5 Alatreon, 6 Zinogre, 7 Barioth, 8 Deviljho, 9 LocLac, 10 Obsidian, 11 Halloween
    bool light;
};

constexpr std::array<Theme, 12> Themes{{
    {L"Gremio de Moga", L"Bronce Real y Pergamino",
     RGB(26,19,14), RGB(42,30,21), RGB(20,14,10), RGB(48,35,25), RGB(66,48,34),
     RGB(250,240,216), RGB(194,168,128), RGB(236,168,56), RGB(255,212,110), RGB(108,80,50), 0, false},
    {L"Tri Experience", L"Forja Volcánica y Ámbar",
     RGB(18,13,11), RGB(34,23,17), RGB(14,10,8), RGB(40,28,21), RGB(58,41,30),
     RGB(252,242,224), RGB(188,162,134), RGB(255,146,42), RGB(255,198,92), RGB(98,68,46), 1, false},
    {L"Laguna de Moga", L"Arrecife Bioluminiscente",
     RGB(6,22,34), RGB(11,44,62), RGB(5,17,27), RGB(14,46,66), RGB(22,64,90),
     RGB(232,252,255), RGB(138,196,214), RGB(24,226,216), RGB(110,255,238), RGB(32,102,126), 2, false},
    {L"Rathalos Carmesí", L"Cielo de Ceniza y Fuego",
     RGB(24,8,12), RGB(46,14,20), RGB(17,6,9), RGB(48,18,24), RGB(68,26,35),
     RGB(255,238,234), RGB(212,152,148), RGB(255,78,52), RGB(255,164,68), RGB(122,42,50), 3, false},
    {L"Lagiacrus Abisal", L"Tormenta Bioeléctrica",
     RGB(6,11,26), RGB(12,26,56), RGB(5,9,20), RGB(16,29,60), RGB(26,45,90),
     RGB(234,244,255), RGB(142,174,220), RGB(0,198,255), RGB(96,238,255), RGB(38,72,136), 4, false},
    {L"Alatreon Crepuscular", L"Eclipse Elemental",
     RGB(14,9,28), RGB(32,16,54), RGB(10,7,20), RGB(34,22,58), RGB(50,32,84),
     RGB(246,238,255), RGB(182,158,218), RGB(196,98,255), RGB(255,112,188), RGB(92,58,148), 5, false},
    {L"Zinogre Fulgor", L"Relámpago de Jade",
     RGB(7,20,24), RGB(13,38,46), RGB(5,15,18), RGB(18,44,52), RGB(28,64,74),
     RGB(234,254,250), RGB(146,202,196), RGB(72,246,212), RGB(250,224,98), RGB(42,114,118), 6, false},
    {L"Barioth Ártico", L"Aurora Boreal Helada",
     RGB(14,24,38), RGB(24,44,68), RGB(10,18,30), RGB(28,48,74), RGB(40,66,98),
     RGB(238,248,255), RGB(158,192,222), RGB(88,204,255), RGB(178,238,255), RGB(64,112,158), 7, false},
    {L"Deviljho Voraz", L"Furia Draco Abisal",
     RGB(8,16,11), RGB(18,34,22), RGB(6,12,8), RGB(20,38,25), RGB(30,56,38),
     RGB(232,255,236), RGB(138,188,148), RGB(88,242,96), RGB(255,72,92), RGB(46,104,58), 8, false},
    {L"Loc Lac Arena", L"Ocaso del Gran Desierto",
     RGB(26,18,14), RGB(48,34,24), RGB(19,14,10), RGB(52,38,28), RGB(72,54,40),
     RGB(252,242,226), RGB(196,174,146), RGB(246,184,72), RGB(255,128,64), RGB(112,86,62), 9, false},
    {L"Obsidiana Real", L"Carbono y Oro Imperial",
     RGB(9,10,13), RGB(19,21,28), RGB(7,8,10), RGB(24,26,34), RGB(36,39,50),
     RGB(246,246,250), RGB(158,162,176), RGB(242,196,84), RGB(255,228,144), RGB(62,66,82), 10, false},
    {L"Halloween", L"Noche de Brujas 🎃",
     RGB(11,5,20), RGB(28,11,44), RGB(8,4,15), RGB(32,15,50), RGB(48,23,74),
     RGB(255,242,226), RGB(198,162,224), RGB(255,117,24), RGB(186,85,255), RGB(118,56,156), 11, false}
}};

enum class Page : uint8_t { Graphics = 0, Mods = 1, System = 2, Controls = 3, Appearance = 4, SaveManager = 5, Online = 6 };
struct Hit { RECT r; int id; };

SDL_Window* g_sdlWindow = nullptr;
bool g_fullscreen = false;
HWND g_hostWindow = nullptr, g_panelWindow = nullptr, g_hudWindow = nullptr;
bool g_panelVisible = false, g_showFps = true, g_wide = true, g_fitScreen = false;
bool g_rounded = true;
bool g_modalDialogOpen = false;
Page g_page = Page::Graphics;
int g_hover = -1, g_themeIndex = 4, g_fontIndex = 0; // Default to Lagiacrus Abisal
int g_msaaSamples = 1;
int g_rendererIndex = 0;
bool g_vsync = true;
int g_fpsLimit = 60;
size_t g_resolutionIndex = 0;
double g_fps = 0.0;
std::vector<Hit> g_hits;

int g_detectedScreenWidth = 1920;
int g_detectedScreenHeight = 1080;

RECT g_mouseSensitivityHitRect{0, 0, 0, 0};
bool g_mouseSensitivityDragging = false;

RECT g_fovHitRect{};
bool g_fovDragging = false;

int g_controlsTab = 0;
struct BindingCapture {
    bool active = false;
    bool pad = false;
    bool add = false;
    bool padArmed = false;
    int action = 0;
    ULONGLONG startTick = 0;
};
BindingCapture g_capture;
bool g_swallowLeftUp = false, g_swallowRightUp = false;

ULONG_PTR g_gdiplusToken = 0;
bool g_gdiplusReady = false;
void EnsureGdiPlus() {
    if (!g_gdiplusReady) {
        Gdiplus::GdiplusStartupInput input;
        if (Gdiplus::GdiplusStartup(&g_gdiplusToken, &input, nullptr) == Gdiplus::Ok)
            g_gdiplusReady = true;
    }
}

Gdiplus::Color GDICol(COLORREF c, BYTE a = 255) {
    return Gdiplus::Color(a, GetRValue(c), GetGValue(c), GetBValue(c));
}

COLORREF Mix(COLORREF a, COLORREF b, int pct) {
    const auto m = [pct](int x, int y) { return (x * (100 - pct) + y * pct) / 100; };
    return RGB(m(GetRValue(a), GetRValue(b)), m(GetGValue(a), GetGValue(b)), m(GetBValue(a), GetBValue(b)));
}

COLORREF OnAccent(const Theme& t) {
    const int l = (299 * GetRValue(t.accent) + 587 * GetGValue(t.accent) + 114 * GetBValue(t.accent)) / 1000;
    return l > 145 ? RGB(18, 14, 12) : RGB(255, 255, 255);
}

bool IsHostWindowActive() {
    if (!g_hostWindow || !IsWindow(g_hostWindow)) return false;
    if (IsIconic(g_hostWindow) || !IsWindowVisible(g_hostWindow)) return false;
    if (g_modalDialogOpen) return false;
    HWND fg = GetForegroundWindow();
    if (!fg) return false;
    if (fg == g_hostWindow || fg == g_panelWindow || fg == g_hudWindow) return true;
    DWORD fgPid = 0, hostPid = 0;
    GetWindowThreadProcessId(fg, &fgPid);
    GetWindowThreadProcessId(g_hostWindow, &hostPid);
    return fgPid == hostPid && hostPid != 0;
}

void UpdateMouseSensitivityFromX(LONG x, HWND hwnd) {
    const int left = g_mouseSensitivityHitRect.left + 12;
    const int right = g_mouseSensitivityHitRect.right - 12;
    if (right <= left) return;
    const int clampedX = std::clamp<int>(static_cast<int>(x), left, right);
    const int percent = 5 + ((clampedX - left) * 95 + (right - left) / 2) / (right - left);
    mh3_mouse_look_sensitivity::SetPercent(percent);
    InvalidateRect(hwnd, nullptr, FALSE);
}

void DetectScreenResolution() {
    g_detectedScreenWidth = GetSystemMetrics(SM_CXSCREEN);
    g_detectedScreenHeight = GetSystemMetrics(SM_CYSCREEN);
    if (g_detectedScreenWidth <= 0) g_detectedScreenWidth = 1920;
    if (g_detectedScreenHeight <= 0) g_detectedScreenHeight = 1080;
}

void ApplyRenderResolution(int index);
void PositionPanel();
void SetVisible(bool visible);

void ApplyNativeScreenResolution() {
    DetectScreenResolution();
    if (g_detectedScreenHeight >= 2000) ApplyRenderResolution(5);
    else if (g_detectedScreenHeight >= 1350) ApplyRenderResolution(4);
    else if (g_detectedScreenHeight >= 1000) ApplyRenderResolution(3);
    else if (g_detectedScreenHeight >= 850) ApplyRenderResolution(2);
    else if (g_detectedScreenHeight >= 700) ApplyRenderResolution(1);
    else ApplyRenderResolution(0);
    PositionPanel();
}

std::wstring Utf8ToWide(const char* text) {
    if (!text || !*text) return L"";
    const int n = MultiByteToWideChar(CP_UTF8, 0, text, -1, nullptr, 0);
    if (n <= 1) return L"";
    std::wstring wide(static_cast<size_t>(n - 1), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, text, -1, wide.data(), n);
    return wide;
}

int FrameRateIndex() {
    const auto it = std::find(FrameRateValues.begin(), FrameRateValues.end(), g_fpsLimit);
    return it == FrameRateValues.end() ? 2 : static_cast<int>(it - FrameRateValues.begin());
}
const wchar_t* CurrentFontFace() { return FontFaces[static_cast<size_t>(std::clamp(g_fontIndex, 0, int(FontFaces.size()) - 1))]; }
const Theme& CurrentTheme() { return Themes[static_cast<size_t>(std::clamp(g_themeIndex, 0, int(Themes.size()) - 1))]; }

// ---------------------------------------------------------------- ajustes en disco
std::filesystem::path ExecutableDirectory() {
    wchar_t modulePath[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, modulePath, static_cast<DWORD>(32768));
    if (length > 0 && length < 32768)
        return std::filesystem::path(std::wstring(modulePath, length)).parent_path();
    return std::filesystem::current_path();
}
std::filesystem::path ThemeSettingsPath() { return ExecutableDirectory() / L"MH3UI.theme.v4"; }
std::filesystem::path GraphicsSettingsPath() { return ExecutableDirectory() / L"MH3UI.graphics"; }

void LoadGraphicsSettings() {
    DetectScreenResolution();
    int samples = 1, vsync = 1, renderResolution = 0, fpsLimit = 60, rendererIndex = 0;
    std::ifstream in(GraphicsSettingsPath());
    if (in >> samples >> vsync) {
        g_msaaSamples = (samples == 4 ? 4 : 1);
        g_vsync = vsync != 0;
        if (in >> renderResolution) g_resolutionIndex = static_cast<size_t>(std::clamp(renderResolution, 0, 5));
        if (in >> fpsLimit && std::find(FrameRateValues.begin(), FrameRateValues.end(), fpsLimit) != FrameRateValues.end())
            g_fpsLimit = fpsLimit;
        if (in >> rendererIndex) g_rendererIndex = std::clamp(rendererIndex, 0, 1);
        { int fullscreen = 0; if (in >> fullscreen) g_fullscreen = fullscreen != 0; }
        { int bloom = 1; if (in >> bloom) g_bloomEnabled = (bloom != 0); }
        { float fov = 45.0f; if (in >> fov) g_hunterFov = std::clamp(fov, 35.0f, 90.0f); }
        { int textures = 0; if (in >> textures) { g_customTexturesEnabled = (textures != 0); TextureReplacer::SetEnabled(g_customTexturesEnabled); } }
        {
            int mh3uMode = 1;
            if (in >> mh3uMode) {
                MH3PostProcess::SetMh3uMode(mh3uMode != 0);
            }
        }
    }
    MH3FrameRateControl::SetTargetFPS(g_fpsLimit);
    aurora_enable_vsync(g_vsync);
    SetMsaaSetting(g_msaaSamples);
}

void SaveGraphicsSettings() {
    std::ofstream out(GraphicsSettingsPath(), std::ios::trunc);
    if (out) {
        out << g_msaaSamples << ' '
            << (g_vsync ? 1 : 0) << ' '
            << g_resolutionIndex << ' '
            << g_fpsLimit << ' '
            << g_rendererIndex << ' '
            << (g_fullscreen ? 1 : 0) << ' '
            << (g_bloomEnabled ? 1 : 0) << ' '
            << g_hunterFov << ' '
            << (g_customTexturesEnabled ? 1 : 0) << ' '
            << (MH3PostProcess::GetMh3uMode() ? 1 : 0) << '\n';
    }
}

void LoadTheme() {
    std::ifstream in(ThemeSettingsPath());
    int theme = 4, font = 0, rounded = 1;
    if (in >> theme && theme >= 0 && theme < int(Themes.size())) g_themeIndex = theme;
    if (in >> font && font >= 0 && font < int(FontFaces.size())) g_fontIndex = font;
    if (in >> rounded) g_rounded = rounded != 0;
}

void SaveTheme() {
    std::ofstream out(ThemeSettingsPath(), std::ios::trunc);
    if (out) out << g_themeIndex << ' ' << g_fontIndex << ' ' << (g_rounded ? 1 : 0) << '\n';
}

// ---------------------------------------------------------------- idioma
struct LangChoice { const wchar_t* label; const char* code; };
constexpr std::array<LangChoice, 5> LangChoices{{
    {L"Español", "es"}, {L"English", "en"}, {L"Français", "fr"}, {L"Deutsch", "de"}, {L"Italiano", "it"}
}};
int g_langChoice = -1, g_langAtLaunch = -1;
std::filesystem::path LanguageSettingsPath() { return ExecutableDirectory() / L"MH3UI.language"; }
void LoadLanguage() {
    std::ifstream in(LanguageSettingsPath());
    std::string code;
    if (in >> code)
        for (size_t i = 0; i < LangChoices.size(); ++i)
            if (code == LangChoices[i].code) { g_langChoice = int(i); break; }
    g_langAtLaunch = g_langChoice;
}
void SaveLanguage() {
    if (g_langChoice < 0 || g_langChoice >= int(LangChoices.size())) return;
    std::ofstream out(LanguageSettingsPath(), std::ios::trunc);
    if (out) out << LangChoices[static_cast<size_t>(g_langChoice)].code << '\n';
}
void ApplyLanguageToGame() {
    if (g_langChoice < 0 || g_langChoice >= int(LangChoices.size())) return;
    const std::string_view code = LangChoices[static_cast<size_t>(g_langChoice)].code;
    for (const auto& language : GameLanguages())
        if (code == language.code) { SetLanguageSetting(language.system); break; }
}
struct EarlyLanguage { EarlyLanguage() { LoadLanguage(); ApplyLanguageToGame(); } };
const EarlyLanguage g_earlyLanguage;
void ChooseLanguage(int i) {
    if (i < 0 || i >= int(LangChoices.size())) return;
    g_langChoice = i;
    SaveLanguage();
}
bool RestartPending() { return g_langChoice != g_langAtLaunch; }

std::filesystem::path SavesDirectory() {
    if (const char* user = std::getenv("MH3_USER_DIR"); user && *user) return std::filesystem::path(user);
    return ExecutableDirectory() / L"Saves";
}
void OpenFolder(const std::filesystem::path& folder) {
    std::error_code ec;
    std::filesystem::create_directories(folder, ec);
    // Hide the overlay before launching Windows Explorer so it never overlaps the external window
    SetVisible(false);
    const std::wstring target = folder.wstring();
    ShellExecuteW(nullptr, L"open", target.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
}
void RestartPort() {
    SaveGraphicsSettings(); SaveTheme(); SaveLanguage();
    wchar_t exe[32768]{};
    const DWORD n = GetModuleFileNameW(nullptr, exe, 32768);
    if (n == 0 || n >= 32768) return;
    const wchar_t* args = GetCommandLineW();
    if (!args) args = L"";
    if (*args == L'"') { ++args; while (*args && *args != L'"') ++args; if (*args) ++args; }
    else { while (*args && *args != L' ') ++args; }
    std::wstring command = L"cmd.exe /c ping -n 3 127.0.0.1 >nul & \"" + std::wstring(exe, n) + L"\"" + args;
    std::vector<wchar_t> buffer(command.begin(), command.end());
    buffer.push_back(L'\0');
    const std::wstring dir = ExecutableDirectory().wstring();
    STARTUPINFOW si{};
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi{};
    if (!CreateProcessW(nullptr, buffer.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW, nullptr, dir.c_str(), &si, &pi)) return;
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    std::fflush(nullptr);
    std::_Exit(0);
}

// ---------------------------------------------------------------- GDI+ Anti-Aliased Vector Engine
void AddHit(RECT r, int id) { g_hits.push_back({r, id}); }
struct SaveManagerHit { RECT rect; int id; };
std::vector<SaveManagerHit> g_saveManagerHits;
void SaveManagerResetHits() { g_saveManagerHits.clear(); }
void SaveManagerAddHit(RECT rect, int id) { g_saveManagerHits.push_back(SaveManagerHit{rect, id}); }
int SaveManagerHitTest(POINT p) {
    for (auto it = g_saveManagerHits.rbegin(); it != g_saveManagerHits.rend(); ++it) {
        if (PtInRect(&it->rect, p)) return it->id;
    }
    return -1;
}
int HitTest(POINT p) {
    if (g_page == Page::SaveManager) { const int saveHit = SaveManagerHitTest(p); if (saveHit != -1) return saveHit; }
    for (auto it = g_hits.rbegin(); it != g_hits.rend(); ++it)
        if (PtInRect(&it->r, p)) return it->id;
    return -1;
}

void BuildRoundRectPath(Gdiplus::GraphicsPath& path, Gdiplus::RectF r, float radius) {
    if (!g_rounded || radius <= 0.5f) {
        path.AddRectangle(r);
        return;
    }
    const float d = std::min({radius * 2.0f, r.Width, r.Height});
    if (d <= 1.0f) {
        path.AddRectangle(r);
        return;
    }
    path.AddArc(r.X, r.Y, d, d, 180.0f, 90.0f);
    path.AddArc(r.GetRight() - d, r.Y, d, d, 270.0f, 90.0f);
    path.AddArc(r.GetRight() - d, r.GetBottom() - d, d, d, 0.0f, 90.0f);
    path.AddArc(r.X, r.GetBottom() - d, d, d, 90.0f, 90.0f);
    path.CloseFigure();
}

void FillSolid(HDC dc, RECT r, COLORREF color) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    Gdiplus::SolidBrush b(GDICol(color, 255));
    g.FillRectangle(&b, INT(r.left), INT(r.top), INT(r.right - r.left), INT(r.bottom - r.top));
}

void Line(HDC dc, int x1, int y1, int x2, int y2, COLORREF color, int width = 1, BYTE alpha = 255) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);
    Gdiplus::Pen p(GDICol(color, alpha), Gdiplus::REAL(width));
    g.DrawLine(&p, x1, y1, x2, y2);
}

void DrawTextLine(HDC dc, RECT r, const wchar_t* text, int size, COLORREF color, int weight, UINT fmt, const wchar_t* face) {
    if (!text || !*text) return;
    size = std::max(size, 9);
    HFONT f = CreateFontW(-size, 0, 0, 0, weight, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                          CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_DONTCARE, face ? face : CurrentFontFace());
    if (!f) return;
    HGDIOBJ old = SelectObject(dc, f);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, color);
    DrawTextW(dc, text, -1, &r, fmt | DT_NOPREFIX);
    SelectObject(dc, old);
    DeleteObject(f);
}

void Text(HDC dc, int x, int y, int w, int h, const wchar_t* value, int size, COLORREF color, int weight = FW_NORMAL,
          UINT fmt = DT_LEFT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS, const wchar_t* face = nullptr) {
    DrawTextLine(dc, RECT{x, y, x + w, y + h}, value, size, color, weight, fmt, face);
}

void RRAlpha(HDC dc, RECT r, int radius, COLORREF fillTop, COLORREF fillBot, BYTE fillAlpha, COLORREF edge, BYTE edgeAlpha = 210, float penWidth = 1.0f) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);
    Gdiplus::RectF rf(Gdiplus::REAL(r.left), Gdiplus::REAL(r.top), Gdiplus::REAL(r.right - r.left), Gdiplus::REAL(r.bottom - r.top));
    if (rf.Width <= 0 || rf.Height <= 0) return;
    Gdiplus::GraphicsPath path;
    BuildRoundRectPath(path, rf, float(radius));
    if (fillAlpha > 0) {
        Gdiplus::LinearGradientBrush grad(
            Gdiplus::PointF(rf.X, rf.Y),
            Gdiplus::PointF(rf.X, rf.GetBottom()),
            GDICol(fillTop, fillAlpha),
            GDICol(fillBot, fillAlpha));
        g.FillPath(&grad, &path);
    }
    if (edgeAlpha > 0 && penWidth > 0.0f) {
        Gdiplus::Pen pen(GDICol(edge, edgeAlpha), penWidth);
        g.DrawPath(&pen, &path);
    }
}

void RR(HDC dc, RECT r, int radius, COLORREF fill, COLORREF edge, bool border = true, int penWidth = 1) {
    COLORREF topFill = Mix(fill, RGB(255, 255, 255), 6);
    COLORREF botFill = Mix(fill, RGB(0, 0, 0), 10);
    RRAlpha(dc, r, radius, topFill, botFill, 240, edge, border ? 225 : 0, float(penWidth));
}

void Outline(HDC dc, RECT r, int radius, COLORREF edge, int penWidth = 1, BYTE alpha = 230) {
    RRAlpha(dc, r, radius, 0, 0, 0, edge, alpha, float(penWidth));
}

void DrawGlowCircle(Gdiplus::Graphics& g, float cx, float cy, float radius, COLORREF col, BYTE centerAlpha) {
    for (int ring = 4; ring >= 1; --ring) {
        const float rr = radius * (float(ring) / 4.0f);
        const BYTE a = BYTE((int(centerAlpha) * (5 - ring)) / 10);
        Gdiplus::SolidBrush b(GDICol(col, a));
        g.FillEllipse(&b, cx - rr, cy - rr, rr * 2.0f, rr * 2.0f);
    }
}

void DrawCard(HDC dc, RECT r, COLORREF fill, COLORREF edge, int radius = 12, bool shadow = true) {
    const Theme& t = CurrentTheme();
    if (shadow) {
        RECT s = r;
        OffsetRect(&s, 0, 3);
        RRAlpha(dc, s, radius, RGB(0, 0, 0), RGB(0, 0, 0), 95, 0, 0, 0.0f);
    }
    const bool isHoveredOrAccent = (edge == t.accent);
    COLORREF topFill = Mix(fill, t.accent, isHoveredOrAccent ? 12 : 4);
    COLORREF botFill = Mix(fill, t.bgBot, 28);
    RRAlpha(dc, r, radius, topFill, botFill, 208, edge, isHoveredOrAccent ? 235 : 145, isHoveredOrAccent ? 1.5f : 1.0f);

    // Subtle top specular glass highlight
    if (r.right - r.left > 30 && r.bottom - r.top > 24) {
        Line(dc, r.left + radius, r.top + 1, r.right - radius, r.top + 1, Mix(edge, RGB(255, 255, 255), 35), 1, 75);
    }
    // Theme-specific signature corner accents on large cards
    if (shadow && (r.bottom - r.top) >= 56) {
        const COLORREF cAcc = Mix(edge, t.accent, 65);
        if (t.motif == 11 || t.motif == 0 || t.motif == 4) {
            Line(dc, r.left + 6, r.top + 6, r.left + 16, r.top + 6, cAcc, 1, 130);
            Line(dc, r.left + 6, r.top + 6, r.left + 6, r.top + 16, cAcc, 1, 130);
            Line(dc, r.right - 16, r.bottom - 6, r.right - 6, r.bottom - 6, cAcc, 1, 130);
            Line(dc, r.right - 6, r.bottom - 16, r.right - 6, r.bottom - 6, cAcc, 1, 130);
        }
    }
}

void DrawSwitch(HDC dc, RECT r, bool on, const Theme& t) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);
    const int h = r.bottom - r.top;
    if (on) {
        RECT glow = r;
        InflateRect(&glow, 2, 2);
        RRAlpha(dc, glow, (h + 4) / 2, t.accent, t.accent2, 55, 0, 0, 0.0f);
        RRAlpha(dc, r, h / 2, t.accent, Mix(t.accent, t.accent2, 45), 255, Mix(t.accent, RGB(255,255,255), 30), 220, 1.2f);
    } else {
        RRAlpha(dc, r, h / 2, Mix(t.bgTop, t.card, 50), Mix(t.bgBot, t.card, 50), 235, t.border, 180, 1.0f);
    }
    const float d = float(h - 6);
    const float x = on ? float(r.right) - d - 3.0f : float(r.left) + 3.0f;
    const float y = float(r.top) + 3.0f;
    Gdiplus::SolidBrush shadowB(Gdiplus::Color(90, 0, 0, 0));
    g.FillEllipse(&shadowB, x, y + 1.0f, d, d);
    Gdiplus::SolidBrush thumbB(GDICol(on ? OnAccent(t) : Mix(t.ink, t.muted, 40), 255));
    g.FillEllipse(&thumbB, x, y, d, d);
}

// Custom vector nav icons (0=Graphics, 1=Mods, 2=System, 3=Controls, 4=Appearance, 5=Saves, 6=Online)
void DrawNavIcon(Gdiplus::Graphics& g, int pageIdx, float cx, float cy, COLORREF col) {
    Gdiplus::Pen pen(GDICol(col, 245), 1.7f);
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    switch (pageIdx) {
    case 0: // Monitor / GPU
        g.DrawRectangle(&pen, cx - 7.5f, cy - 6.0f, 15.0f, 9.5f);
        g.DrawLine(&pen, cx - 3.5f, cy + 6.5f, cx + 3.5f, cy + 6.5f);
        g.DrawLine(&pen, cx, cy + 3.5f, cx, cy + 6.5f);
        break;
    case 1: // Cube / Mod package
        g.DrawPolygon(&pen, std::array<Gdiplus::PointF, 6>{{
            {cx, cy - 7.5f}, {cx + 7.0f, cy - 3.8f}, {cx + 7.0f, cy + 3.8f},
            {cx, cy + 7.5f}, {cx - 7.0f, cy + 3.8f}, {cx - 7.0f, cy - 3.8f}
        }}.data(), 6);
        g.DrawLine(&pen, cx - 7.0f, cy - 3.8f, cx, cy);
        g.DrawLine(&pen, cx + 7.0f, cy - 3.8f, cx, cy);
        g.DrawLine(&pen, cx, cy, cx, cy + 7.5f);
        break;
    case 2: // Sliders / System
        g.DrawLine(&pen, cx - 7.0f, cy - 4.5f, cx + 7.0f, cy - 4.5f);
        g.DrawLine(&pen, cx - 7.0f, cy, cx + 7.0f, cy);
        g.DrawLine(&pen, cx - 7.0f, cy + 4.5f, cx + 7.0f, cy + 4.5f);
        g.DrawEllipse(&pen, cx - 3.5f, cy - 6.5f, 4.0f, 4.0f);
        g.DrawEllipse(&pen, cx + 1.5f, cy - 2.0f, 4.0f, 4.0f);
        g.DrawEllipse(&pen, cx - 4.5f, cy + 2.5f, 4.0f, 4.0f);
        break;
    case 3: // Gamepad
        g.DrawRectangle(&pen, cx - 7.5f, cy - 4.5f, 15.0f, 9.0f);
        g.DrawLine(&pen, cx - 5.0f, cy, cx - 2.0f, cy);
        g.DrawLine(&pen, cx - 3.5f, cy - 1.5f, cx - 3.5f, cy + 1.5f);
        g.DrawEllipse(&pen, cx + 2.5f, cy - 2.0f, 2.2f, 2.2f);
        g.DrawEllipse(&pen, cx + 4.5f, cy + 0.5f, 2.2f, 2.2f);
        break;
    case 4: // Sparkle / Theme Palette
        g.DrawPolygon(&pen, std::array<Gdiplus::PointF, 8>{{
            {cx, cy - 7.5f}, {cx + 2.2f, cy - 2.2f}, {cx + 7.5f, cy}, {cx + 2.2f, cy + 2.2f},
            {cx, cy + 7.5f}, {cx - 2.2f, cy + 2.2f}, {cx - 7.5f, cy}, {cx - 2.2f, cy - 2.2f}
        }}.data(), 8);
        break;
    case 5: // Vault / Save Shield
        g.DrawPolygon(&pen, std::array<Gdiplus::PointF, 5>{{
            {cx, cy - 7.5f}, {cx + 6.5f, cy - 4.5f}, {cx + 5.5f, cy + 3.0f},
            {cx, cy + 7.5f}, {cx - 5.5f, cy + 3.0f}
        }}.data(), 5);
        g.DrawLine(&pen, cx - 6.5f, cy - 4.5f, cx, cy - 7.5f);
        g.DrawLine(&pen, cx - 5.5f, cy + 3.0f, cx - 6.5f, cy - 4.5f);
        break;
    default: // Globe / Online Network
        g.DrawEllipse(&pen, cx - 7.0f, cy - 7.0f, 14.0f, 14.0f);
        g.DrawEllipse(&pen, cx - 3.5f, cy - 7.0f, 7.0f, 14.0f);
        g.DrawLine(&pen, cx - 7.0f, cy, cx + 7.0f, cy);
        break;
    }
}

// Bespoke full-canvas atmospheric background per theme
void DrawThemeAtmosphere(HDC dc, const Theme& t) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);

    // 1. Rich multi-stop backdrop gradient across the entire window
    Gdiplus::LinearGradientBrush bgBrush(
        Gdiplus::Point(0, 0), Gdiplus::Point(PanelW, PanelH),
        GDICol(t.bgTop, 255), GDICol(t.bgBot, 255));
    g.FillRectangle(&bgBrush, 0, 0, PanelW, PanelH);

    // 2. Ambient radial glows in the content canvas
    DrawGlowCircle(g, float(PanelW - 140), 110.0f, 260.0f, t.accent, 34);
    DrawGlowCircle(g, float(SidebarW + 140), float(PanelH - 90), 240.0f, t.accent2, 24);

    // Clip decorative vector scenery to the content canvas
    g.SetClip(Gdiplus::Rect(SidebarW, 0, PanelW - SidebarW, PanelH));

    switch (t.motif) {
    case 11: { // HALLOWEEN — Harvest Blood Moon, soaring bats, cobwebs, haunted ridge & Jack-o'-Lantern
        const float mx = float(PanelW - 115), my = 96.0f;
        DrawGlowCircle(g, mx, my, 120.0f, RGB(255, 110, 20), 65);
        DrawGlowCircle(g, mx, my, 72.0f, RGB(255, 165, 50), 85);
        Gdiplus::SolidBrush moonBrush(Gdiplus::Color(68, 255, 195, 95));
        g.FillEllipse(&moonBrush, mx - 44.0f, my - 44.0f, 88.0f, 88.0f);
        Gdiplus::SolidBrush craterBrush(Gdiplus::Color(28, 160, 65, 20));
        g.FillEllipse(&craterBrush, mx - 24.0f, my - 18.0f, 18.0f, 18.0f);
        g.FillEllipse(&craterBrush, mx + 6.0f, my + 4.0f, 24.0f, 20.0f);

        // Corner cobweb in top-right
        Gdiplus::Pen webPen(Gdiplus::Color(48, 255, 155, 70), 1.1f);
        const float wx = float(PanelW), wy = 0.0f;
        for (int a = 0; a < 7; ++a) {
            const float ang = 1.5708f + a * 0.26f;
            g.DrawLine(&webPen, wx, wy, wx + 165.0f * std::cos(ang), wy + 165.0f * std::sin(ang));
        }
        for (int r = 28; r <= 140; r += 28) {
            g.DrawArc(&webPen, wx - float(r), wy - float(r), float(r * 2), float(r * 2), 90.0f, 90.0f);
        }

        // Flying bat silhouettes near the moon
        Gdiplus::SolidBrush batBrush(Gdiplus::Color(95, 18, 6, 28));
        const float bx[4] = {mx - 95.0f, mx - 42.0f, mx + 52.0f, mx - 155.0f};
        const float by[4] = {my - 22.0f, my + 28.0f, my - 34.0f, my + 12.0f};
        const float bs[4] = {1.1f, 0.85f, 0.75f, 0.7f};
        for (int i = 0; i < 4; ++i) {
            const float x = bx[i], y = by[i], s = bs[i];
            std::array<Gdiplus::PointF, 7> pts{{
                {x, y - 2.0f * s}, {x - 10.0f * s, y - 9.0f * s}, {x - 18.0f * s, y - 1.0f * s},
                {x - 7.0f * s, y + 3.0f * s}, {x, y + 6.0f * s}, {x + 7.0f * s, y + 3.0f * s},
                {x + 18.0f * s, y - 1.0f * s}
            }};
            g.FillPolygon(&batBrush, pts.data(), 7);
        }

        // Floating spectral embers
        for (int i = 0; i < 18; ++i) {
            const float ex = float(SidebarW + 40 + (i * 79) % (PanelW - SidebarW - 70));
            const float ey = float(80 + (i * 67) % (PanelH - 120));
            const float er = float(2 + (i % 3));
            Gdiplus::SolidBrush eb((i % 2 == 0) ? Gdiplus::Color(55, 255, 130, 30) : Gdiplus::Color(50, 195, 95, 255));
            g.FillEllipse(&eb, ex, ey, er * 2.0f, er * 2.0f);
        }
        break;
    }
    case 4: // LAGIACRUS ABISAL — Bioelectric vortex rings & lightning arcs
    case 2: { // LAGUNA DE MOGA — Ocean caustics & rising bioluminescent bubbles
        Gdiplus::Pen ringPen(GDICol(t.accent, 34), 1.4f);
        const float cx = float(PanelW - 110), cy = 120.0f;
        for (int r = 36; r <= 220; r += 36) {
            g.DrawEllipse(&ringPen, cx - float(r), cy - float(r) * 0.65f, float(r * 2), float(r * 2) * 0.65f);
        }
        // Sunlit underwater god-rays from top-right
        for (int i = 0; i < 5; ++i) {
            std::array<Gdiplus::PointF, 4> ray{{
                {float(SidebarW + 180 + i * 110), 0.0f},
                {float(SidebarW + 235 + i * 110), 0.0f},
                {float(SidebarW + 80 + i * 130), float(PanelH)},
                {float(SidebarW + 10 + i * 130), float(PanelH)}
            }};
            Gdiplus::SolidBrush rayB(GDICol(t.accent, 11));
            g.FillPolygon(&rayB, ray.data(), 4);
        }
        for (int i = 0; i < 22; ++i) {
            const float bx = float(SidebarW + 30 + (i * 83) % (PanelW - SidebarW - 60));
            const float by = float(40 + (i * 59) % (PanelH - 80));
            const float br = float(3 + (i % 4) * 2);
            Gdiplus::Pen bp(GDICol(t.accent2, 42), 1.2f);
            g.DrawEllipse(&bp, bx, by, br * 2.0f, br * 2.0f);
        }
        break;
    }
    case 3: // RATHALOS CARMESI — Volcanic embers & dragon scale geometry
    case 1: { // TRI EXPERIENCE — Tribal forge rings & warm sparks
        Gdiplus::Pen hexPen(GDICol(t.accent, 32), 1.3f);
        const float cx = float(PanelW - 120), cy = 130.0f;
        for (int r = 40; r <= 200; r += 40) {
            std::array<Gdiplus::PointF, 6> hex{};
            for (int k = 0; k < 6; ++k) {
                const float a = k * 1.0471975f;
                hex[static_cast<size_t>(k)] = {cx + r * std::cos(a), cy + r * std::sin(a)};
            }
            g.DrawPolygon(&hexPen, hex.data(), 6);
        }
        for (int i = 0; i < 24; ++i) {
            const float ex = float(SidebarW + 36 + (i * 71) % (PanelW - SidebarW - 60));
            const float ey = float(60 + (i * 53) % (PanelH - 90));
            Gdiplus::SolidBrush sb(GDICol((i % 3 == 0) ? t.accent2 : t.accent, 52));
            g.FillEllipse(&sb, ex, ey, 4.0f, 4.0f);
        }
        break;
    }
    case 0: // GREMIO DE MOGA — Ornate Monster Hunter Guild Compass Rose
    case 9: // LOC LAC ARENA — Desert Sun & Astrolabe
    case 10: { // OBSIDIANA REAL — Imperial Geometric Crest
        const float cx = float(PanelW - 130), cy = 140.0f;
        Gdiplus::Pen compassPen(GDICol(t.accent, 40), 1.4f);
        g.DrawEllipse(&compassPen, cx - 140.0f, cy - 140.0f, 280.0f, 280.0f);
        g.DrawEllipse(&compassPen, cx - 105.0f, cy - 105.0f, 210.0f, 210.0f);
        g.DrawEllipse(&compassPen, cx - 55.0f, cy - 55.0f, 110.0f, 110.0f);
        for (int k = 0; k < 12; ++k) {
            const float a = k * 0.5235988f;
            const float r0 = (k % 3 == 0) ? 20.0f : 55.0f;
            const float r1 = (k % 3 == 0) ? 155.0f : 125.0f;
            g.DrawLine(&compassPen, cx + r0 * std::cos(a), cy + r0 * std::sin(a), cx + r1 * std::cos(a), cy + r1 * std::sin(a));
        }
        break;
    }
    default: { // ALATREON, ZINOGRE, BARIOTH, DEVILJHO — Crystalline elemental shards & energy arcs
        Gdiplus::Pen shardPen(GDICol(t.accent, 38), 1.5f);
        Gdiplus::Pen shardPen2(GDICol(t.accent2, 32), 1.2f);
        for (int i = 0; i < 9; ++i) {
            const float sx = float(SidebarW + 70 + i * 76);
            const float sy = float(70 + ((i * 97) % (PanelH - 160)));
            std::array<Gdiplus::PointF, 4> diamond{{
                {sx, sy - 22.0f}, {sx + 14.0f, sy}, {sx, sy + 22.0f}, {sx - 14.0f, sy}
            }};
            g.DrawPolygon((i % 2 == 0) ? &shardPen : &shardPen2, diamond.data(), 4);
        }
        break;
    }
    }

    g.ResetClip();
}

void DrawSidebar(HDC dc, const Theme& t) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);

    // Sidebar glass backdrop
    Gdiplus::LinearGradientBrush sideGrad(
        Gdiplus::Point(0, 0), Gdiplus::Point(0, PanelH),
        GDICol(t.sidebar, 242), GDICol(Mix(t.sidebar, RGB(0, 0, 0), 35), 248));
    g.FillRectangle(&sideGrad, 0, 0, SidebarW, PanelH);

    // Glowing vertical divider line
    Gdiplus::LinearGradientBrush divGrad(
        Gdiplus::Point(SidebarW, 0), Gdiplus::Point(SidebarW, PanelH),
        GDICol(t.accent, 140), GDICol(t.border, 90));
    Gdiplus::Pen divPen(&divGrad, 1.5f);
    g.DrawLine(&divPen, SidebarW - 1, 0, SidebarW - 1, PanelH);

    // Brand Header Card
    DrawGlowCircle(g, 42.0f, 46.0f, 36.0f, t.accent, 55);
    RECT emblemRect{18, 22, 64, 68};
    RRAlpha(dc, emblemRect, 13, t.accent, t.accent2, 255, Mix(t.accent, RGB(255,255,255), 40), 235, 1.5f);
    const wchar_t* emblemGlyph = (t.motif == 11) ? L"🎃" : (t.motif == 4 || t.motif == 2) ? L"🌊" : (t.motif == 3) ? L"🔥" : L"⚔";
    Text(dc, 18, 22, 46, 46, emblemGlyph, 17, OnAccent(t), FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    Text(dc, 74, 21, 146, 16, L"OCEAN TRI", 10, t.accent, FW_BOLD);
    Text(dc, 74, 36, 146, 20, L"RECOMP STUDIO", 13, t.ink, FW_BOLD);
    Text(dc, 74, 55, 146, 14, t.name, 9, t.muted, FW_SEMIBOLD);

    Line(dc, 18, 82, SidebarW - 18, 82, t.border, 1, 110);

    // 7 Vertical Navigation Tabs
    const wchar_t* names[] = {L"Gráficos", L"Mods", L"Sistema", L"Controles", L"Aspecto", L"Guardados", L"Online"};
    std::wstring badges[7];
    badges[0] = std::to_wstring(g_fpsLimit) + L"Hz";
    badges[1] = ModManager::IsMasterEnabled() ? L"ON" : L"OFF";
    badges[2] = (g_langChoice >= 0 && g_langChoice < 5) ? Utf8ToWide(LangChoices[static_cast<size_t>(g_langChoice)].code) : L"AUTO";
    badges[3] = (g_controlsTab == 0) ? L"PAD" : L"KBM";
    badges[4] = L"#" + std::to_wstring(g_themeIndex + 1);
    badges[5] = L"NAND";
    const int netMode = static_cast<int>(LocalOnlineServer::GetMode());
    badges[6] = (netMode == 0) ? L"SOLO" : (netMode == 1) ? L"HOST" : (netMode == 2) ? L"LAN" : L"MH3SP";

    const int navStartY = 94, navH = 44, navGap = 7;
    for (int i = 0; i < 7; ++i) {
        const int y = navStartY + i * (navH + navGap);
        const RECT r{14, y, SidebarW - 14, y + navH};
        const bool active = int(g_page) == i;
        const bool over = g_hover == 100 + i;

        if (active) {
            RRAlpha(dc, r, 11, Mix(t.card, t.accent, 28), Mix(t.card, t.accent2, 14), 235, t.accent, 235, 1.5f);
            // Active neon left indicator bar
            RRAlpha(dc, RECT{r.left + 4, r.top + 9, r.left + 8, r.bottom - 9}, 2, t.accent, t.accent2, 255, 0, 0, 0.0f);
        } else if (over) {
            RRAlpha(dc, r, 11, t.hover, t.card, 200, Mix(t.border, t.accent, 45), 185, 1.0f);
        } else {
            RRAlpha(dc, r, 11, t.card, t.sidebar, 110, t.border, 85, 1.0f);
        }

        DrawNavIcon(g, i, float(r.left + 26), float(y + navH / 2), active ? t.accent : (over ? t.ink : t.muted));
        Text(dc, r.left + 44, y, 108, navH, names[i], 12, active ? t.ink : (over ? t.ink : t.muted), active ? FW_BOLD : FW_SEMIBOLD);

        // Mini status pill on the right of each nav item
        RECT badgeR{r.right - 52, y + 12, r.right - 8, y + navH - 12};
        RRAlpha(dc, badgeR, 6, active ? t.accent : t.sidebar, active ? t.accent2 : t.sidebar, active ? 235 : 170, active ? t.accent : t.border, 140, 1.0f);
        Text(dc, badgeR.left, badgeR.top, badgeR.right - badgeR.left, badgeR.bottom - badgeR.top, badges[i].c_str(), 8,
             active ? OnAccent(t) : t.muted, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

        AddHit(r, 100 + i);
    }

    // Bottom Live Telemetry Card inside Sidebar
    RECT teleRect{14, 462, SidebarW - 14, 574};
    RRAlpha(dc, teleRect, 12, t.card, t.sidebar, 215, t.border, 165, 1.0f);
    Text(dc, teleRect.left + 12, teleRect.top + 8, 120, 14, L"TELEMETRÍA EN VIVO", 8, t.muted, FW_BOLD);

    const unsigned liveFps = g_fps > 0.0 ? static_cast<unsigned>(g_fps + 0.5) : static_cast<unsigned>(g_fpsLimit);
    std::wstring fpsBig = std::to_wstring(liveFps) + L" FPS";
    Text(dc, teleRect.left + 12, teleRect.top + 24, 110, 24, fpsBig.c_str(), 16, t.accent, FW_BOLD);

    const wchar_t* resShort[] = {L"540p", L"720p", L"900p", L"1080p", L"1440p", L"4K"};
    std::wstring apiBadge = std::wstring(g_rendererIndex == 0 ? L"VULKAN · " : L"GLES · ") + resShort[std::min<size_t>(g_resolutionIndex, 5)];
    Text(dc, teleRect.left + 12, teleRect.top + 48, 180, 16, apiBadge.c_str(), 9, t.ink, FW_SEMIBOLD);

    // Smooth FPS ratio bar
    RECT barBg{teleRect.left + 12, teleRect.top + 70, teleRect.right - 12, teleRect.top + 78};
    RRAlpha(dc, barBg, 4, t.sidebar, t.sidebar, 230, t.border, 120, 1.0f);
    const float fpsRatio = std::clamp(float(liveFps) / float(std::max(30, g_fpsLimit)), 0.08f, 1.0f);
    const int fillW = int(fpsRatio * float(barBg.right - barBg.left));
    if (fillW > 4) {
        RRAlpha(dc, RECT{barBg.left, barBg.top, barBg.left + fillW, barBg.bottom}, 4, t.accent, t.accent2, 255, 0, 0, 0.0f);
    }
    Text(dc, teleRect.left + 12, teleRect.top + 84, 180, 18,
         g_vsync ? L"V-Sync Activo · Paso Asíncrono" : L"V-Sync Off · Paso Asíncrono", 8, t.muted);

    // Close / Resume Game button at bottom of sidebar [90]
    const RECT closeRect{14, 584, SidebarW - 14, 624};
    const bool closeOver = g_hover == 90;
    RRAlpha(dc, closeRect, 10, closeOver ? t.accent : t.card, closeOver ? t.accent2 : t.sidebar, 235, closeOver ? t.accent : t.border, 200, 1.2f);
    Text(dc, closeRect.left, closeRect.top, closeRect.right - closeRect.left, closeRect.bottom - closeRect.top,
         L"VOLVER AL JUEGO  [ESC]", 10, closeOver ? OnAccent(t) : t.ink, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(closeRect, 90);
}

void DrawSlider(HDC dc, const Theme& t, RECT r, int trackHitId, float currentVal, float minVal, float maxVal, const wchar_t* displayVal) {
    RECT btnMinus{r.left, r.top, r.left + 26, r.bottom};
    DrawCard(dc, btnMinus, g_hover == trackHitId + 1 ? t.hover : t.sidebar, t.border, 7, false);
    Text(dc, btnMinus.left, btnMinus.top, 26, r.bottom - r.top, L"-", 13, t.ink, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnMinus, trackHitId + 1);

    const int trackL = r.left + 34, trackR = r.right - 88;
    const int midY = (r.top + r.bottom) / 2;
    const float ratio = std::clamp((currentVal - minVal) / (maxVal - minVal), 0.0f, 1.0f);
    const int thumbX = trackL + int(ratio * (trackR - trackL));

    RRAlpha(dc, RECT{trackL, midY - 3, trackR, midY + 3}, 3, t.sidebar, t.sidebar, 230, t.border, 150, 1.0f);
    if (thumbX > trackL + 2) {
        RRAlpha(dc, RECT{trackL, midY - 3, thumbX, midY + 3}, 3, t.accent, t.accent2, 255, 0, 0, 0.0f);
    }
    RRAlpha(dc, RECT{thumbX - 7, midY - 7, thumbX + 7, midY + 7}, 7, t.accent, t.accent2, 255, OnAccent(t), 240, 1.5f);

    RECT trackHitRect{trackL - 4, r.top, trackR + 4, r.bottom};
    AddHit(trackHitRect, trackHitId);

    RECT btnPlus{r.right - 80, r.top, r.right - 54, r.bottom};
    DrawCard(dc, btnPlus, g_hover == trackHitId + 2 ? t.hover : t.sidebar, t.border, 7, false);
    Text(dc, btnPlus.left, btnPlus.top, 26, r.bottom - r.top, L"+", 13, t.ink, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnPlus, trackHitId + 2);

    Text(dc, r.right - 50, r.top, 50, r.bottom - r.top, displayVal, 10, t.accent, FW_BOLD, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
}

void DrawHeader(HDC dc, const Theme& t, const wchar_t* title, const wchar_t* sub) {
    RECT banner{ContentX, 18, ContentR, 94};
    RRAlpha(dc, banner, 14, Mix(t.card, t.accent, 14), Mix(t.card, t.bgBot, 35), 215, Mix(t.border, t.accent, 45), 195, 1.2f);
    RRAlpha(dc, RECT{ContentX + 14, 32, ContentX + 19, 80}, 3, t.accent, t.accent2, 255, 0, 0, 0.0f);
    Text(dc, ContentX + 28, 28, 460, 26, title, 18, t.ink, FW_BOLD);
    Text(dc, ContentX + 28, 56, 520, 18, sub, 10, t.muted);

    RECT pill{ContentR - 148, 34, ContentR - 16, 76};
    RRAlpha(dc, pill, 10, t.sidebar, t.card, 225, t.accent, 180, 1.0f);
    Text(dc, pill.left, pill.top + 4, pill.right - pill.left, 16, L"TEMA ACTIVO", 8, t.muted, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    Text(dc, pill.left + 4, pill.top + 19, pill.right - pill.left - 8, 18, t.name, 9, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

void DrawChips(HDC dc, const Theme& t, int x, int y, int w, int h, const wchar_t* const* labels, int count, int selected, int idBase,
               const wchar_t* const* faces = nullptr) {
    // Unified dark glass track behind the segmented chips
    RECT trackR{x - 2, y - 2, x + w + 2, y + h + 2};
    RRAlpha(dc, trackR, 10, t.sidebar, t.bgTop, 190, t.border, 120, 1.0f);

    const int gap = 5, cw = (w - gap * (count - 1)) / count;
    for (int i = 0; i < count; ++i) {
        const RECT r{x + i * (cw + gap), y, x + i * (cw + gap) + cw, y + h};
        const bool sel = i == selected, over = g_hover == idBase + i;
        if (sel) {
            RRAlpha(dc, r, 8, t.accent, Mix(t.accent, t.accent2, 50), 255, Mix(t.accent, RGB(255,255,255), 35), 240, 1.2f);
        } else if (over) {
            RRAlpha(dc, r, 8, t.hover, t.card, 215, Mix(t.border, t.accent, 50), 190, 1.0f);
        }
        Text(dc, r.left + 2, r.top, cw - 4, h, labels[i], 11, sel ? OnAccent(t) : (over ? t.ink : t.muted), sel ? FW_BOLD : FW_SEMIBOLD,
             DT_CENTER | DT_VCENTER | DT_SINGLELINE, faces ? faces[i] : nullptr);
        AddHit(r, idBase + i);
    }
}

// ---------------------------------------------------------------- paginas
void DrawGraphicsPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Motor Gráfico y Pantalla", L"Renderizado asíncrono, escalado interno, efectos post-proceso y texturas HD");

    const int colW = (ContentR - ContentX - 14) / 2;
    const int col1L = ContentX, col1R = ContentX + colW;
    const int col2L = col1R + 14, col2R = ContentR;

    // Fila 1: Motor Gráfico y Rendimiento | Pantalla y Ventana
    RECT rPerf{col1L, 108, col1R, 240};
    DrawCard(dc, rPerf, t.card, t.border, 13);
    Text(dc, col1L + 14, 114, colW - 28, 16, L"MOTOR GRÁFICO Y CADENCIA", 9, t.accent, FW_BOLD);

    Text(dc, col1L + 14, 136, 62, 18, L"API:", 9, t.muted, FW_SEMIBOLD);
    const wchar_t* rendererLabels[] = {L"Vulkan (ANGLE)", L"OpenGL ES"};
    DrawChips(dc, t, col1L + 78, 134, colW - 92, 24, rendererLabels, 2, g_rendererIndex, 350);

    Text(dc, col1L + 14, 166, 62, 18, L"Límite:", 9, t.muted, FW_SEMIBOLD);
    const wchar_t* fpsLabels[] = {L"30", L"45", L"60", L"90", L"120"};
    DrawChips(dc, t, col1L + 78, 164, colW - 92, 24, fpsLabels, 5, FrameRateIndex(), 270);

    RECT rVsync{col1L + 14, 196, col1L + (colW / 2) - 4, 222};
    Text(dc, rVsync.left, rVsync.top + 2, rVsync.right - rVsync.left - 44, 16, L"V-Sync", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rVsync.right - 42, rVsync.top, rVsync.right, rVsync.top + 20}, g_vsync, t);
    AddHit(rVsync, 22);

    RECT rMsaa{col1L + (colW / 2) + 6, 196, col1R - 14, 222};
    Text(dc, rMsaa.left, rMsaa.top + 2, rMsaa.right - rMsaa.left - 44, 16, L"MSAA 4x", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rMsaa.right - 42, rMsaa.top, rMsaa.right, rMsaa.top + 20}, g_msaaSamples == 4, t);
    AddHit(rMsaa, 27);

    Text(dc, col1L + 14, 222, colW - 28, 14, L"Interpolación asíncrona de alta precisión activa.", 8, t.muted);

    // Card 2: Pantalla y Ventana
    RECT rScr{col2L, 108, col2R, 240};
    DrawCard(dc, rScr, t.card, t.border, 13);
    Text(dc, col2L + 14, 114, colW - 28, 16, L"VENTANA Y VISUALIZACIÓN", 9, t.accent, FW_BOLD);

    RECT rFull{col2L + 14, 134, col2R - 14, 158};
    Text(dc, rFull.left, rFull.top + 2, colW - 72, 16, L"Pantalla completa sin bordes", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rFull.right - 42, rFull.top, rFull.right, rFull.top + 20}, g_fullscreen, t);
    AddHit(rFull, 26);

    RECT rWide{col2L + 14, 161, col2R - 14, 185};
    Text(dc, rWide.left, rWide.top + 2, colW - 72, 16, L"Formato panorámico (16:9)", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rWide.right - 42, rWide.top, rWide.right, rWide.top + 20}, g_wide, t);
    AddHit(rWide, 23);

    RECT rFps{col2L + 14, 188, col2R - 14, 212};
    Text(dc, rFps.left, rFps.top + 2, colW - 72, 16, L"Indicador de FPS en esquina", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rFps.right - 42, rFps.top, rFps.right, rFps.top + 20}, g_showFps, t);
    AddHit(rFps, 20);

    RECT rFit{col2L + 14, 214, col2R - 14, 236};
    Text(dc, rFit.left, rFit.top + 1, colW - 72, 14, L"Maximizar ventana al escritorio", 9, t.muted);
    DrawSwitch(dc, RECT{rFit.right - 42, rFit.top - 1, rFit.right, rFit.top + 19}, g_fitScreen, t);
    AddHit(rFit, 24);

    // Fila 2: Resolución interna (Supersampling)
    RECT res{ContentX, 250, ContentR, 334};
    DrawCard(dc, res, t.card, t.border, 13);
    Text(dc, ContentX + 16, 258, 280, 18, L"ESCALADO DE RESOLUCIÓN INTERNA", 10, t.accent, FW_BOLD);

    std::wstring detStr = L"Monitor: " + std::to_wstring(g_detectedScreenWidth) + L"×" + std::to_wstring(g_detectedScreenHeight);
    Text(dc, ContentX + 290, 258, 180, 18, detStr.c_str(), 10, t.muted, FW_SEMIBOLD);

    RECT btnNat{ContentR - 196, 255, ContentR - 14, 281};
    const bool natOver = g_hover == 209;
    RRAlpha(dc, btnNat, 8, natOver ? t.accent : t.sidebar, natOver ? t.accent2 : t.card, 235, t.accent, 210, 1.2f);
    Text(dc, btnNat.left, btnNat.top, btnNat.right - btnNat.left, btnNat.bottom - btnNat.top,
         L"⚡ Auto-Ajustar Nativa", 9, natOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnNat, 209);

    const wchar_t* resLabels[] = {L"540p", L"720p HD", L"900p", L"1080p FHD", L"1440p 2K", L"2160p 4K"};
    DrawChips(dc, t, ContentX + 14, 290, ContentR - ContentX - 28, 32, resLabels, 6, int(g_resolutionIndex), 210);

    // Fila 3: Cámara FOV y Texturas HD (2 columnas)
    RECT rFov{col1L, 344, col1R, 436};
    DrawCard(dc, rFov, t.card, t.border, 13);
    Text(dc, col1L + 14, 352, colW - 28, 16, L"CAMPO DE VISIÓN (FOV EN MISIÓN)", 9, t.accent, FW_BOLD);
    Text(dc, col1L + 14, 370, colW - 28, 14, L"Amplía el ángulo visual en cacerías sin alterar la aldea.", 8, t.muted);
    std::wstring fovValStr = std::to_wstring(int(g_hunterFov + 0.5f)) + L"°";
    g_fovHitRect = RECT{col1L + 14, 392, col1R - 14, 424};
    DrawSlider(dc, t, g_fovHitRect, 220, g_hunterFov, 35.0f, 90.0f, fovValStr.c_str());

    RECT rTex{col2L, 344, col2R, 436};
    DrawCard(dc, rTex, t.card, t.border, 13);
    Text(dc, col2L + 14, 352, colW - 28, 16, L"PAQUETES DE TEXTURAS HD (RMHP08)", 9, t.accent, FW_BOLD);

    RECT rTexToggle{col2L + 14, 372, col2R - 14, 396};
    Text(dc, rTexToggle.left, rTexToggle.top + 2, colW - 72, 16, L"Reemplazo de Texturas Custom", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rTexToggle.right - 42, rTexToggle.top, rTexToggle.right, rTexToggle.top + 20}, g_customTexturesEnabled, t);
    AddHit(rTexToggle, 28);

    RECT rTexBtn{col2L + 14, 400, col2R - 14, 426};
    const bool texOver = g_hover == 29;
    RRAlpha(dc, rTexBtn, 7, texOver ? t.accent : t.sidebar, texOver ? t.accent2 : t.card, 230, texOver ? t.accent : t.border, 185, 1.0f);
    std::wstring texCountStr = L"Abrir textures/RMHP08 (" + std::to_wstring(TextureReplacer::GetLoadedTextureCount()) + L" activas)";
    Text(dc, rTexBtn.left, rTexBtn.top, rTexBtn.right - rTexBtn.left, rTexBtn.bottom - rTexBtn.top,
         texCountStr.c_str(), 9, texOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(rTexBtn, 29);

    // Fila 4: Estilo Visual MH3U y Bloom
    RECT rMh3u{col1L, 446, col1R, 560};
    DrawCard(dc, rMh3u, g_hover == 31 ? t.hover : t.card, MH3PostProcess::GetMh3uMode() ? t.accent : t.border, 13);
    Text(dc, col1L + 14, 456, colW - 72, 18, L"GRADACIÓN CROMÁTICA MH3U", 10, t.accent, FW_BOLD);
    Text(dc, col1L + 14, 478, colW - 72, 16, L"Paleta vibrante inspirada en 3 Ultimate HD.", 10, t.ink, FW_SEMIBOLD);
    Text(dc, col1L + 14, 498, colW - 72, 44, L"Aguas turquesas profundas, vegetación esmeralda y curva fílmica ACES sin pérdida de contraste en el chat online.", 8, t.muted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);
    DrawSwitch(dc, RECT{col1R - 56, 458, col1R - 14, 480}, MH3PostProcess::GetMh3uMode(), t);
    AddHit(rMh3u, 31);

    RECT rBloom{col2L, 446, col2R, 560};
    DrawCard(dc, rBloom, g_hover == 30 ? t.hover : t.card, g_bloomEnabled ? t.accent : t.border, 13);
    Text(dc, col2L + 14, 456, colW - 72, 18, L"RESPLANDOR ATMOSFÉRICO (BLOOM)", 10, t.accent, FW_BOLD);
    Text(dc, col2L + 14, 478, colW - 72, 16, L"Dispersión lumínica original de hardware Wii.", 10, t.ink, FW_SEMIBOLD);
    Text(dc, col2L + 14, 498, colW - 72, 44, L"Realza los reflejos solares de Moga, antorchas en cuevas y el magma del volcán.", 8, t.muted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);
    DrawSwitch(dc, RECT{col2R - 56, 458, col2R - 14, 480}, g_bloomEnabled, t);
    AddHit(rBloom, 30);

    // Status bar footer
    RECT foot{ContentX, 572, ContentR, 616};
    DrawCard(dc, foot, t.sidebar, t.border, 11, false);
    Text(dc, foot.left + 16, foot.top, foot.right - foot.left - 32, 44,
         L"✔  Temporizador de alta resolución (0.5 ms) y caché VRAM con límite automático de 64 MB activos.", 10, t.accent, FW_SEMIBOLD);
}

void DrawModsPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Gestor de Mods", L"Cargador en vivo de modificaciones compatibles con Riivolution y Dolphin (RMHP08)");

    RECT rCtrl{ContentX, 108, ContentR, 174};
    DrawCard(dc, rCtrl, t.card, t.border, 13);

    const bool masterOn = ModManager::IsMasterEnabled();
    Text(dc, ContentX + 16, 118, 190, 20, L"Sistema de Mods", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 16, 140, 230, 16, masterOn ? L"Reemplazo de archivos activo." : L"Mods desactivados temporalmente.", 9, masterOn ? t.accent : t.muted);
    RECT rMasterSwitch{ContentX + 216, 128, ContentX + 260, 150};
    DrawSwitch(dc, rMasterSwitch, masterOn, t);
    AddHit(RECT{ContentX + 10, 114, ContentX + 268, 168}, 8000);

    RECT btnImp{ContentR - 366, 123, ContentR - 244, 159};
    const bool impOver = g_hover == 8001;
    RRAlpha(dc, btnImp, 9, impOver ? t.accent : t.sidebar, impOver ? t.accent2 : t.card, 235, t.accent, 220, 1.2f);
    Text(dc, btnImp.left, btnImp.top, btnImp.right - btnImp.left, btnImp.bottom - btnImp.top,
         L"+ Importar ZIP...", 10, impOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnImp, 8001);

    RECT btnFolder{ContentR - 236, 123, ContentR - 110, 159};
    const bool foldOver = g_hover == 8002;
    RRAlpha(dc, btnFolder, 9, foldOver ? t.accent : t.sidebar, foldOver ? t.accent2 : t.card, 235, t.border, 185, 1.0f);
    Text(dc, btnFolder.left, btnFolder.top, btnFolder.right - btnFolder.left, btnFolder.bottom - btnFolder.top,
         L"Carpeta mods/", 10, foldOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnFolder, 8002);

    RECT btnRef{ContentR - 102, 123, ContentR - 14, 159};
    const bool refOver = g_hover == 8003;
    RRAlpha(dc, btnRef, 9, refOver ? t.accent : t.sidebar, refOver ? t.accent2 : t.card, 235, t.border, 185, 1.0f);
    Text(dc, btnRef.left, btnRef.top, btnRef.right - btnRef.left, btnRef.bottom - btnRef.top,
         L"Recargar", 10, refOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(btnRef, 8003);

    const auto& mods = ModManager::GetMods();
    if (mods.empty()) {
        RECT rEmpty{ContentX, 186, ContentR, 562};
        DrawCard(dc, rEmpty, t.card, t.border, 14);

        const int midX = (ContentX + ContentR) / 2;
        RECT iconBox{midX - 32, 238, midX + 32, 302};
        RRAlpha(dc, iconBox, 16, t.sidebar, t.card, 230, t.accent, 210, 1.5f);
        Text(dc, iconBox.left, iconBox.top, 64, 64, L"📦", 22, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

        Text(dc, ContentX + 20, 320, ContentR - ContentX - 40, 26, L"No hay mods instalados en la carpeta mods/", 16, t.ink, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        Text(dc, ContentX + 20, 352, ContentR - ContentX - 40, 20, L"Usa '+ Importar ZIP...' para instalar paquetes de misiones, armas, armaduras o modelos.", 11, t.muted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        Text(dc, ContentX + 20, 376, ContentR - ContentX - 40, 20, L"El menú se oculta automáticamente al abrir el selector de archivos de Windows.", 10, t.muted, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

        RECT btnOpenEmpty{midX - 115, 420, midX + 115, 460};
        const bool eOver = g_hover == 8002;
        RRAlpha(dc, btnOpenEmpty, 10, eOver ? t.accent : t.sidebar, eOver ? t.accent2 : t.card, 240, t.accent, 225, 1.5f);
        Text(dc, btnOpenEmpty.left, btnOpenEmpty.top, btnOpenEmpty.right - btnOpenEmpty.left, btnOpenEmpty.bottom - btnOpenEmpty.top,
             L"Explorar Carpeta mods/", 11, eOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(btnOpenEmpty, 8002);
    } else {
        const int cardH = 70, gap = 7;
        const int maxDisplay = std::min<int>(static_cast<int>(mods.size()), 5);
        for (int i = 0; i < maxDisplay; ++i) {
            const auto& mod = mods[static_cast<size_t>(i)];
            const int y = 186 + i * (cardH + gap);
            RECT rMod{ContentX, y, ContentR, y + cardH};
            DrawCard(dc, rMod, g_hover == 8100 + i ? t.hover : t.card, (mod.enabled && masterOn) ? t.accent : t.border, 11);

            RRAlpha(dc, RECT{ContentX + 12, y + 15, ContentX + 50, y + 53}, 9, t.sidebar, t.card, 230, t.border, 170, 1.0f);
            Text(dc, ContentX + 12, y + 15, 38, 38, L"📦", 14, t.accent, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

            std::wstring modTitle = Utf8ToWide(mod.name.c_str());
            Text(dc, ContentX + 60, y + 11, 370, 20, modTitle.c_str(), 13, t.ink, FW_BOLD);

            std::wstring infoStr = std::to_wstring(mod.fileCount) + L" archivos";
            if (!mod.version.empty()) infoStr += L" · v" + Utf8ToWide(mod.version.c_str());
            if (!mod.author.empty()) infoStr += L" · por " + Utf8ToWide(mod.author.c_str());
            Text(dc, ContentX + 60, y + 31, 410, 16, infoStr.c_str(), 9, t.accent);

            std::wstring desc = Utf8ToWide(mod.description.c_str());
            Text(dc, ContentX + 60, y + 48, 430, 16, desc.c_str(), 9, t.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);

            RECT rModSwitch{ContentR - 148, y + 24, ContentR - 104, y + 46};
            DrawSwitch(dc, rModSwitch, mod.enabled && masterOn, t);
            AddHit(RECT{ContentR - 156, y + 10, ContentR - 98, y + 60}, 8100 + i);

            RECT rOpenMod{ContentR - 88, y + 20, ContentR - 14, y + 50};
            const bool mOver = g_hover == 8200 + i;
            RRAlpha(dc, rOpenMod, 7, mOver ? t.accent : t.sidebar, mOver ? t.accent2 : t.card, 230, t.border, 180, 1.0f);
            Text(dc, rOpenMod.left, rOpenMod.top, rOpenMod.right - rOpenMod.left, rOpenMod.bottom - rOpenMod.top,
                 L"Carpeta", 9, mOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
            AddHit(rOpenMod, 8200 + i);
        }
    }

    size_t activeCount = 0;
    for (const auto& m : mods) if (m.enabled) ++activeCount;
    std::wstring footStr = L"Estado: " + std::to_wstring(activeCount) + L" mod(s) activo(s) de " + std::to_wstring(mods.size()) + L" instalados sobre la ROM europea RMHP08.";
    Text(dc, ContentX + 4, 578, ContentR - ContentX - 8, 22, footStr.c_str(), 10, t.muted);
}

RECT ThemeCardRect(int i) {
    const int cols = 4;
    const int gapX = 12, gapY = 10;
    const int w = (ContentR - ContentX - gapX * (cols - 1)) / cols;
    const int h = 84;
    const int c = i % cols, row = i / cols;
    const int x = ContentX + c * (w + gapX), y = 108 + row * (h + gapY);
    return RECT{x, y, x + w, y + h};
}

void DrawAppearancePage(HDC dc, const Theme& t) {
    EnsureGdiPlus();
    Gdiplus::Graphics g(dc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);

    DrawHeader(dc, t, L"Estudio de Aspecto y Temas", L"12 atmósferas exclusivas con fondos vectoriales, iluminación dinámica y edición Halloween");

    for (int i = 0; i < int(Themes.size()); ++i) {
        const Theme& th = Themes[static_cast<size_t>(i)];
        const RECT r = ThemeCardRect(i);
        const bool sel = i == g_themeIndex;
        const bool over = g_hover == 300 + i;

        DrawCard(dc, r, over ? t.hover : t.card, sel ? t.accent : t.border, 12);
        if (sel) Outline(dc, r, 12, t.accent, 2, 255);

        // Mini atmospheric preview banner inside each theme card
        const RECT pv{r.left + 8, r.top + 8, r.right - 8, r.top + 44};
        RRAlpha(dc, pv, 8, th.bgTop, th.bgBot, 255, th.border, 180, 1.0f);

        // Mini sidebar swatch + glowing orb preview inside banner
        RRAlpha(dc, RECT{pv.left + 2, pv.top + 2, pv.left + 20, pv.bottom - 2}, 6, th.sidebar, th.sidebar, 240, 0, 0, 0.0f);
        DrawGlowCircle(g, float(pv.right - 22), float(pv.top + 18), 14.0f, th.accent, 140);
        Gdiplus::SolidBrush dot1(GDICol(th.accent, 255));
        Gdiplus::SolidBrush dot2(GDICol(th.accent2, 255));
        g.FillEllipse(&dot1, float(pv.left + 28), float(pv.top + 10), 12.0f, 12.0f);
        g.FillEllipse(&dot2, float(pv.left + 44), float(pv.top + 10), 12.0f, 12.0f);

        if (sel) {
            RECT chk{pv.right - 24, pv.top + 6, pv.right - 6, pv.top + 24};
            RRAlpha(dc, chk, 9, th.accent, th.accent2, 255, RGB(255,255,255), 220, 1.0f);
            Text(dc, chk.left, chk.top, 18, 18, L"✓", 10, OnAccent(th), FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        }

        Text(dc, r.left + 10, r.top + 48, r.right - r.left - 16, 16, th.name, 10, sel ? t.accent : t.ink, FW_BOLD);
        Text(dc, r.left + 10, r.top + 64, r.right - r.left - 16, 14, th.tag, 8, t.muted);
        AddHit(r, 300 + i);
    }

    RECT corners{ContentX, 392, ContentR, 462};
    DrawCard(dc, corners, t.card, t.border, 13);
    Text(dc, ContentX + 18, 404, 280, 20, L"Geometría de Paneles y Tarjetas", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 18, 426, 320, 18, L"Curvatura suave glassmórfica o corte recto industrial", 10, t.muted);
    const wchar_t* cornerLabels[] = {L"Redondeado Suave", L"Corte Recto"};
    DrawChips(dc, t, ContentR - 18 - 270, 412, 270, 30, cornerLabels, 2, g_rounded ? 0 : 1, 330);

    RECT font{ContentX, 474, ContentR, 568};
    DrawCard(dc, font, t.card, t.border, 13);
    Text(dc, ContentX + 18, 486, 320, 20, L"Familia Tipográfica del Estudio", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 18, 506, 460, 16, L"Renderizado ClearType de alta nitidez en todos los menús y telemetría.", 10, t.muted);
    DrawChips(dc, t, ContentX + 18, 528, ContentR - ContentX - 36, 28, FontFaces.data(), 5, g_fontIndex, 340, FontFaces.data());
}

void DrawSystemPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Sistema y Región Europea", L"Idioma oficial del disco RMHP08, reinicio en caliente y acceso rápido a directorios");

    RECT lang{ContentX, 108, ContentR, 224};
    DrawCard(dc, lang, t.card, t.border, 13);
    Text(dc, ContentX + 18, 118, 320, 20, L"Idioma Interno del Juego (RMHP08)", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 18, 139, 520, 16, L"Selecciona el idioma de textos, diálogos y misiones del disco europeo.", 10, t.muted);
    const wchar_t* labels[5];
    for (size_t i = 0; i < LangChoices.size(); ++i) labels[i] = LangChoices[i].label;
    DrawChips(dc, t, ContentX + 18, 162, ContentR - ContentX - 36, 32, labels, 5, g_langChoice, 50);

    std::wstring status;
    COLORREF statusColor = t.muted;
    if (RestartPending()) { status = L"⚠ Reinicia el port para aplicar el nuevo idioma."; statusColor = t.accent; }
    else if (g_langChoice >= 0) status = std::wstring(L"✔ Idioma activo: ") + LangChoices[static_cast<size_t>(g_langChoice)].label;
    else status = L"✔ Idioma activo: Automático del sistema.";
    Text(dc, ContentX + 18, 200, 520, 18, status.c_str(), 10, statusColor, FW_SEMIBOLD);

    RECT restart{ContentX, 236, ContentR, 310};
    DrawCard(dc, restart, t.card, t.border, 13);
    Text(dc, ContentX + 18, 248, 300, 20, L"Reinicio Rápido del Port", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 18, 270, 420, 18, L"Guarda todos los cambios y relanza MH3.exe automáticamente.", 10, t.muted);
    const RECT button{ContentR - 196, 253, ContentR - 18, 293};
    const bool pending = RestartPending();
    const bool rOver = g_hover == 60;
    RRAlpha(dc, button, 10, (pending || rOver) ? t.accent : t.sidebar, (pending || rOver) ? t.accent2 : t.card, 240, t.accent, 225, 1.3f);
    Text(dc, button.left, button.top, button.right - button.left, 40, L"Reiniciar Ahora", 11,
         (pending || rOver) ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(button, 60);

    const int colW = (ContentR - ContentX - 14) / 2;
    const RECT saves{ContentX, 322, ContentX + colW, 402};
    const RECT port{ContentX + colW + 14, 322, ContentR, 402};

    DrawCard(dc, saves, g_hover == 61 ? t.hover : t.card, g_hover == 61 ? t.accent : t.border, 13);
    Text(dc, saves.left + 18, saves.top + 16, colW - 60, 20, L"Directorio de Guardados", 13, t.ink, FW_BOLD);
    Text(dc, saves.left + 18, saves.top + 40, colW - 60, 18, L"Abrir carpeta Saves en Windows Explorer", 10, t.muted);
    Text(dc, saves.right - 38, saves.top, 24, 80, L"›", 22, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(saves, 61);

    DrawCard(dc, port, g_hover == 62 ? t.hover : t.card, g_hover == 62 ? t.accent : t.border, 13);
    Text(dc, port.left + 18, port.top + 16, colW - 60, 20, L"Directorio Raíz del Port", 13, t.ink, FW_BOLD);
    Text(dc, port.left + 18, port.top + 40, colW - 60, 18, L"Abrir ubicación de MH3.exe y archivos", 10, t.muted);
    Text(dc, port.right - 38, port.top, 24, 80, L"›", 22, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(port, 62);

    RECT reset{ContentX, 414, ContentR, 490};
    DrawCard(dc, reset, t.card, t.border, 13);
    Text(dc, ContentX + 18, 428, 360, 20, L"Restablecer Valores de Fábrica", 13, t.ink, FW_BOLD);
    Text(dc, ContentX + 18, 450, 440, 18, L"Devuelve gráficos, ventana, controles y aspecto a su estado original.", 10, t.muted);
    const RECT resetBtn{ContentR - 196, 432, ContentR - 18, 472};
    const bool resOver = g_hover == 25;
    RRAlpha(dc, resetBtn, 10, resOver ? t.accent : t.sidebar, resOver ? t.accent2 : t.card, 235, resOver ? t.accent : t.border, 195, 1.0f);
    Text(dc, resetBtn.left, resetBtn.top, resetBtn.right - resetBtn.left, 40, L"Restablecer Todo", 11,
         resOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(resetBtn, 25);
}

// ---------------------------------------------------------------- controles: mapeo
constexpr int ControlTabMando = 400, ControlTabTeclado = 401;
constexpr int ControlKeyBase = 410;
constexpr int ControlPadBase = 450;
constexpr int ControlResetKeys = 470, ControlResetPad = 471;
constexpr int ControlCellW = 329, ControlCellH = 26, ControlCellGapX = 14, ControlCellGapY = 4, ControlCellsTop = 152;
constexpr int ControlKeysPerColumn = 10, ControlPadPerColumn = 8;

RECT ControlCell(int index, int perColumn) {
    const int col = index / perColumn, row = index % perColumn;
    const int x = ContentX + col * (ControlCellW + ControlCellGapX);
    const int y = ControlCellsTop + row * (ControlCellH + ControlCellGapY);
    return RECT{x, y, x + ControlCellW, y + ControlCellH};
}
RECT CaptureCellRect() {
    return ControlCell(g_capture.action, g_capture.pad ? ControlPadPerColumn : ControlKeysPerColumn);
}

const wchar_t* ControlActionLabel(int action) {
    static const wchar_t* const labels[mh3_control_map::kActionCount] = {
        L"A (Confirmar)", L"B (Cancelar)", L"X (Objeto)", L"Y (Arma)", L"L (Cámara)", L"R (Correr)", L"ZL", L"ZR",
        L"Start (+)", L"Select (-)", L"Home",
        L"Cruceta arriba", L"Cruceta abajo", L"Cruceta izq.", L"Cruceta der.",
        L"Mover arriba", L"Mover abajo", L"Mover izq.", L"Mover der."};
    return labels[std::clamp(action, 0, mh3_control_map::kActionCount - 1)];
}

std::wstring ControlBindingName(bool pad, int v) {
    if (!pad) {
        if (v >= mh3_control_map::kMouseBase) {
            switch (v - mh3_control_map::kMouseBase) {
            case SDL_BUTTON_LEFT: return L"Clic izq.";
            case SDL_BUTTON_MIDDLE: return L"Clic med.";
            case SDL_BUTTON_RIGHT: return L"Clic der.";
            case SDL_BUTTON_X1: return L"Ratón 4";
            case SDL_BUTTON_X2: return L"Ratón 5";
            default: return L"Ratón";
            }
        }
        switch (v) {
        case SDL_SCANCODE_SPACE: return L"Espacio";
        case SDL_SCANCODE_RETURN: return L"Intro";
        case SDL_SCANCODE_KP_ENTER: return L"Intro (num.)";
        case SDL_SCANCODE_BACKSPACE: return L"Retroceso";
        case SDL_SCANCODE_TAB: return L"Tab";
        case SDL_SCANCODE_ESCAPE: return L"Esc";
        case SDL_SCANCODE_LSHIFT: return L"LShift";
        case SDL_SCANCODE_RSHIFT: return L"RShift";
        case SDL_SCANCODE_LCTRL: return L"LCtrl";
        case SDL_SCANCODE_RCTRL: return L"RCtrl";
        case SDL_SCANCODE_LALT: return L"LAlt";
        case SDL_SCANCODE_RALT: return L"RAlt";
        case SDL_SCANCODE_UP: return L"Flecha ↑";
        case SDL_SCANCODE_DOWN: return L"Flecha ↓";
        case SDL_SCANCODE_LEFT: return L"Flecha ←";
        case SDL_SCANCODE_RIGHT: return L"Flecha →";
        case SDL_SCANCODE_HOME: return L"Inicio";
        case SDL_SCANCODE_END: return L"Fin";
        case SDL_SCANCODE_PAGEUP: return L"Re Pág";
        case SDL_SCANCODE_PAGEDOWN: return L"Av Pág";
        case SDL_SCANCODE_INSERT: return L"Insertar";
        case SDL_SCANCODE_DELETE: return L"Suprimir";
        case SDL_SCANCODE_CAPSLOCK: return L"Bloq Mayús";
        default: break;
        }
        const std::wstring name = Utf8ToWide(SDL_GetScancodeName(static_cast<SDL_Scancode>(v)));
        return name.empty() ? L"Tecla " + std::to_wstring(v) : name;
    }
    if (v >= mh3_control_map::kAxisBase)
        return v - mh3_control_map::kAxisBase == SDL_GAMEPAD_AXIS_LEFT_TRIGGER ? L"LT / L2" : L"RT / R2";
    switch (v) {
    case SDL_GAMEPAD_BUTTON_SOUTH: return L"Sur (A / ✕)";
    case SDL_GAMEPAD_BUTTON_EAST: return L"Este (B / ○)";
    case SDL_GAMEPAD_BUTTON_WEST: return L"Oeste (X / □)";
    case SDL_GAMEPAD_BUTTON_NORTH: return L"Norte (Y / △)";
    case SDL_GAMEPAD_BUTTON_BACK: return L"Select / Back";
    case SDL_GAMEPAD_BUTTON_GUIDE: return L"Guía";
    case SDL_GAMEPAD_BUTTON_START: return L"Start";
    case SDL_GAMEPAD_BUTTON_LEFT_STICK: return L"L3";
    case SDL_GAMEPAD_BUTTON_RIGHT_STICK: return L"R3";
    case SDL_GAMEPAD_BUTTON_LEFT_SHOULDER: return L"LB / L1";
    case SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER: return L"RB / R1";
    case SDL_GAMEPAD_BUTTON_DPAD_UP: return L"Cruceta ↑";
    case SDL_GAMEPAD_BUTTON_DPAD_DOWN: return L"Cruceta ↓";
    case SDL_GAMEPAD_BUTTON_DPAD_LEFT: return L"Cruceta ←";
    case SDL_GAMEPAD_BUTTON_DPAD_RIGHT: return L"Cruceta →";
    default: return L"Botón " + std::to_wstring(v);
    }
}

std::wstring ControlBindingText(bool pad, int action) {
    const std::vector<int> list = mh3_control_map::Bindings(pad, action);
    if (list.empty()) return L"Sin asignar";
    std::wstring text;
    for (size_t i = 0; i < list.size(); ++i) {
        if (i) text += L", ";
        text += ControlBindingName(pad, list[i]);
    }
    return text;
}

std::wstring GamepadStatusText() {
    if (!SDL_WasInit(SDL_INIT_GAMEPAD)) return L"Mando: ninguno detectado todavía";
    int count = 0;
    SDL_JoystickID* ids = SDL_GetGamepads(&count);
    std::wstring text = L"Mando: ninguno conectado";
    if (ids && count > 0) {
        const char* name = SDL_GetGamepadNameForID(ids[0]);
        text = L"Mando activo: " + Utf8ToWide(name ? name : "Gamepad");
    }
    SDL_free(ids);
    return text;
}

void DrawControlCell(HDC dc, const Theme& t, RECT r, int id, const wchar_t* label, const std::wstring& value, bool capturing,
                     const wchar_t* capturePrompt) {
    const bool over = g_hover == id;
    RRAlpha(dc, r, 7, capturing ? Mix(t.card, t.accent, 32) : (over ? t.hover : t.card),
            capturing ? Mix(t.card, t.accent2, 20) : t.sidebar, 215,
            capturing ? t.accent : (over ? Mix(t.border, t.accent, 50) : t.border), 200, capturing ? 1.6f : 1.0f);
    Text(dc, r.left + 10, r.top, 128, r.bottom - r.top, label, 10, t.ink, FW_SEMIBOLD);
    const bool empty = !capturing && value == L"Sin asignar";
    Text(dc, r.left + 140, r.top, r.right - r.left - 150, r.bottom - r.top, capturing ? capturePrompt : value.c_str(), 10,
         capturing ? t.accent : (empty ? t.muted : t.accent), FW_BOLD, DT_RIGHT | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
    AddHit(r, id);
}

void DrawMouseSensitivityCard(HDC dc, const Theme& t, int top) {
    const int percent = mh3_mouse_look_sensitivity::GetPercent();
    DrawCard(dc, RECT{ContentX, top, ContentR, top + 46}, t.card, t.border, 11);
    wchar_t label[96]{};
    std::swprintf(label, 96, L"Sensibilidad cámara ratón: %d%%", percent);
    Text(dc, ContentX + 16, top + 12, 240, 22, label, 10, t.ink, FW_SEMIBOLD);
    const int trackLeft = ContentX + 270, trackRight = ContentR - 24, trackY = top + 23;
    const int knobX = trackLeft + ((percent - 5) * (trackRight - trackLeft) + 47) / 95;
    RRAlpha(dc, RECT{trackLeft, trackY - 3, trackRight, trackY + 3}, 3, t.sidebar, t.sidebar, 230, t.border, 150, 1.0f);
    if (knobX > trackLeft + 2) RRAlpha(dc, RECT{trackLeft, trackY - 3, knobX, trackY + 3}, 3, t.accent, t.accent2, 255, 0, 0, 0.0f);
    RRAlpha(dc, RECT{knobX - 7, trackY - 7, knobX + 7, trackY + 7}, 7, t.accent, t.accent2, 255, OnAccent(t), 240, 1.5f);
    g_mouseSensitivityHitRect = RECT{trackLeft - 10, top + 8, trackRight + 10, top + 38};
}

void DrawControlsPage(HDC dc, const Theme& t) {
    g_mouseSensitivityHitRect = RECT{0, 0, 0, 0};
    DrawHeader(dc, t, L"Controles y Periféricos", L"Asignación personalizada de botones de mando, teclado y cámara con ratón");

    const wchar_t* tabLabels[] = {L"Mando (Gamepad)", L"Teclado y Ratón"};
    DrawChips(dc, t, ContentX, 108, ContentR - ContentX, 32, tabLabels, 2, g_controlsTab, ControlTabMando);

    if (g_controlsTab == 0) {
        for (int a = 0; a < mh3_control_map::kPadActionCount; ++a) {
            const bool capturing = g_capture.active && g_capture.pad && g_capture.action == a;
            DrawControlCell(dc, t, ControlCell(a, ControlPadPerColumn), ControlPadBase + a, ControlActionLabel(a),
                            ControlBindingText(true, a), capturing, L"Pulsa botón…");
        }
        Text(dc, ContentX, 400, ContentR - ContentX, 16,
             L"Clic: reasignar · Ctrl+clic: añadir otro · Clic derecho: restaurar · Esc: cancelar", 9, t.muted);
        const RECT info{ContentX, 422, ContentR, 512};
        DrawCard(dc, info, t.card, t.border, 13);
        const std::wstring status = GamepadStatusText();
        Text(dc, info.left + 16, info.top + 12, info.right - info.left - 32, 20, status.c_str(), 12, t.accent, FW_BOLD);
        Text(dc, info.left + 16, info.top + 38, info.right - info.left - 32, 18,
             L"Stick izquierdo: movimiento del cazador · Stick derecho: control libre de cámara.", 10, t.ink);
        Text(dc, info.left + 16, info.top + 60, info.right - info.left - 32, 18,
             L"Atajos del estudio: ESC / F1 abre o cierra el menú · TAB alterna entre secciones.", 9, t.muted);
        const RECT reset{ContentX, 524, ContentR, 560};
        const bool rOver = g_hover == ControlResetPad;
        RRAlpha(dc, reset, 10, rOver ? t.accent : t.sidebar, rOver ? t.accent2 : t.card, 235, t.accent, 200, 1.2f);
        Text(dc, reset.left, reset.top, reset.right - reset.left, reset.bottom - reset.top,
             L"Restaurar mando a los valores originales", 11, rOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(reset, ControlResetPad);
    } else {
        for (int a = 0; a < mh3_control_map::kActionCount; ++a) {
            const bool capturing = g_capture.active && !g_capture.pad && g_capture.action == a;
            DrawControlCell(dc, t, ControlCell(a, ControlKeysPerColumn), ControlKeyBase + a, ControlActionLabel(a),
                            ControlBindingText(false, a), capturing, L"Tecla o clic…");
        }
        Text(dc, ContentX, 456, ContentR - ContentX, 16,
             L"Clic: reasignar · Ctrl+clic: añadir otra · Clic derecho: restaurar · Esc: cancelar", 9, t.muted);
        DrawMouseSensitivityCard(dc, t, 476);
        const RECT reset{ContentX, 530, ContentR, 564};
        const bool rOver = g_hover == ControlResetKeys;
        RRAlpha(dc, reset, 10, rOver ? t.accent : t.sidebar, rOver ? t.accent2 : t.card, 235, t.accent, 200, 1.2f);
        Text(dc, reset.left, reset.top, reset.right - reset.left, reset.bottom - reset.top,
             L"Restaurar teclado y ratón a los valores originales", 11, rOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(reset, ControlResetKeys);
    }
}

// ---------------------------------------------------------------- Save Manager & Online
void SaveManagerDrawCard(HDC dc, RECT r, COLORREF fill, COLORREF borderColor, int radius) {
    DrawCard(dc, r, fill, borderColor, radius, false);
}
void SaveManagerText(HDC dc, int x, int y, int width, int height, const wchar_t* value,
                     int fontSize, COLORREF color, int weight = FW_NORMAL,
                     UINT format = DT_LEFT | DT_VCENTER | DT_SINGLELINE) {
    Text(dc, x, y, width, height, value, fontSize, color, weight, format);
}
std::wstring g_saveManagerStatus = L"Crea una copia de data en UserData/SaveBackups; no modifica la partida activa.";

std::filesystem::path SaveManagerExecutableDirectory() {
    wchar_t path[32768]{};
    const DWORD n = GetModuleFileNameW(nullptr, path, 32768);
    if (n > 0 && n < 32768) return std::filesystem::path(std::wstring(path, n)).parent_path();
    std::error_code currentError;
    const auto current = std::filesystem::current_path(currentError);
    return currentError ? std::filesystem::path(L".") : current;
}
std::filesystem::path SaveManagerUserDataDirectory() {
    namespace fs = std::filesystem;
    auto current = SaveManagerExecutableDirectory();
    for (int i = 0; i < 7 && !current.empty(); ++i) {
        std::error_code markerError;
        if (fs::exists(current / L"portable.txt", markerError) && !markerError) return current / L"UserData";
        const auto parent = current.parent_path();
        if (parent == current) break;
        current = parent;
    }
    const DWORD envLength = GetEnvironmentVariableW(L"LOCALAPPDATA", nullptr, 0);
    if (envLength > 1) {
        std::vector<wchar_t> localAppData(static_cast<size_t>(envLength));
        const DWORD written = GetEnvironmentVariableW(L"LOCALAPPDATA", localAppData.data(), envLength);
        if (written > 0 && written < envLength) return fs::path(std::wstring(localAppData.data(), written)) / L"WiiCompiled";
    }
    return SaveManagerExecutableDirectory() / L"UserData";
}
std::filesystem::path SaveManagerPathFromUtf8(const std::string& value) {
#if defined(__cpp_char8_t)
    std::u8string encoded;
    encoded.reserve(value.size());
    for (unsigned char c : value) encoded.push_back(static_cast<char8_t>(c));
    return std::filesystem::path(encoded);
#else
    return std::filesystem::path(value);
#endif
}
std::filesystem::path SaveManagerNandRoot() {
    namespace fs = std::filesystem;
    const fs::path userData = SaveManagerUserDataDirectory();
    const fs::path configPath = userData / L"Config.toml";
    std::ifstream config(configPath);
    std::string line;
    while (std::getline(config, line)) {
        const auto first = line.find_first_not_of(" \t");
        if (first == std::string::npos || line.compare(first, 9, "nand_root") != 0) continue;
        const auto equals = line.find('=', first + 9);
        if (equals == std::string::npos) continue;
        auto value = line.substr(equals + 1);
        const auto begin = value.find_first_not_of(" \t");
        if (begin == std::string::npos) continue;
        value.erase(0, begin);
        if (!value.empty() && (value[0] == '"' || value[0] == '\'')) {
            const char quote = value[0];
            std::string decoded;
            bool escaped = false;
            for (size_t i = 1; i < value.size(); ++i) {
                const char c = value[i];
                if (escaped) { decoded.push_back(c); escaped = false; continue; }
                if (quote == '"' && c == '\\') { escaped = true; continue; }
                if (c == quote) break;
                decoded.push_back(c);
            }
            value = decoded;
        } else {
            const auto hash = value.find('#');
            if (hash != std::string::npos) value.resize(hash);
            const auto last = value.find_last_not_of(" \t\r\n");
            if (last == std::string::npos) continue;
            value.resize(last + 1);
        }
        if (value.empty()) continue;
        const fs::path configured = SaveManagerPathFromUtf8(value);
        return configured.is_absolute() ? configured : (userData / configured).lexically_normal();
    }
    return userData / L"NAND";
}
std::filesystem::path SaveManagerDataPath() {
    return mh3_save_manager::ResolveSaveDataDirectory(SaveManagerNandRoot());
}
std::filesystem::path SaveManagerPendingPath() { return SaveManagerUserDataDirectory() / L"SaveManager" / L"PendingImport"; }
std::filesystem::path SaveManagerBackupsPath() { return SaveManagerUserDataDirectory() / L"SaveBackups"; }
void SaveManagerRefreshPanel() { if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE); }
enum class SaveManagerMode { Home, BrowseImport, BrowseExport, ConfirmImport };
SaveManagerMode g_saveManagerMode = SaveManagerMode::Home;
std::filesystem::path g_saveManagerBrowsePath;
std::filesystem::path g_saveManagerSelectedImport;
std::vector<std::filesystem::path> g_saveManagerDirectories;
size_t g_saveManagerBrowseOffset = 0;
bool g_saveManagerBackupRequested = false;
bool g_saveManagerExportRequested = false;
std::filesystem::path g_saveManagerExportTarget;

std::filesystem::path SaveManagerStartDirectory() {
#if defined(_WIN32)
    wchar_t home[32768]{};
    const DWORD n = GetEnvironmentVariableW(L"USERPROFILE", home, 32768);
    if (n > 0 && n < 32768) return std::filesystem::path(std::wstring(home, n));
#endif
    if (const char* home = std::getenv("HOME"); home && *home) return SaveManagerPathFromUtf8(std::string(home));
    return SaveManagerExecutableDirectory();
}
void SaveManagerRefreshDirectories() {
    namespace fs = std::filesystem;
    g_saveManagerDirectories.clear();
    std::error_code ec;
    if (!fs::is_directory(g_saveManagerBrowsePath, ec) || ec) {
        g_saveManagerStatus = L"No se puede leer esta carpeta. Vuelve a la carpeta superior y elige otra.";
        return;
    }
    fs::directory_iterator it(g_saveManagerBrowsePath, fs::directory_options::skip_permission_denied, ec), end;
    while (!ec && it != end) {
        std::error_code entryError;
        if (it->is_directory(entryError) && !entryError) g_saveManagerDirectories.push_back(it->path());
        it.increment(ec);
    }
    std::sort(g_saveManagerDirectories.begin(), g_saveManagerDirectories.end(), [](const fs::path& a, const fs::path& b) {
        return a.filename().wstring() < b.filename().wstring();
    });
    g_saveManagerBrowseOffset = 0;
}

std::filesystem::path SaveManagerSelectFolderNative(bool importing) {
#ifdef _WIN32
    using CoInitializeExFn = HRESULT (WINAPI*)(LPVOID, DWORD);
    using CoUninitializeFn = void (WINAPI*)();
    using CoCreateInstanceFn = HRESULT (WINAPI*)(REFCLSID, LPUNKNOWN, DWORD, REFIID, LPVOID*);
    using CoTaskMemFreeFn = void (WINAPI*)(LPVOID);
    using SHGetKnownFolderPathFn = HRESULT (WINAPI*)(const GUID&, DWORD, HANDLE, PWSTR*);
    using SHCreateItemFromParsingNameFn = HRESULT (WINAPI*)(PCWSTR, IBindCtx*, REFIID, void**);

    HMODULE ole32 = LoadLibraryW(L"ole32.dll");
    HMODULE shell32 = LoadLibraryW(L"shell32.dll");
    if (!ole32 || !shell32) {
        g_saveManagerStatus = L"Windows no pudo cargar los componentes del selector de carpetas.";
        if (shell32) FreeLibrary(shell32);
        if (ole32) FreeLibrary(ole32);
        return {};
    }

    const auto pCoInitializeEx = reinterpret_cast<CoInitializeExFn>(GetProcAddress(ole32, "CoInitializeEx"));
    const auto pCoUninitialize = reinterpret_cast<CoUninitializeFn>(GetProcAddress(ole32, "CoUninitialize"));
    const auto pCoCreateInstance = reinterpret_cast<CoCreateInstanceFn>(GetProcAddress(ole32, "CoCreateInstance"));
    const auto pCoTaskMemFree = reinterpret_cast<CoTaskMemFreeFn>(GetProcAddress(ole32, "CoTaskMemFree"));
    const auto pSHGetKnownFolderPath = reinterpret_cast<SHGetKnownFolderPathFn>(GetProcAddress(shell32, "SHGetKnownFolderPath"));
    const auto pSHCreateItemFromParsingName = reinterpret_cast<SHCreateItemFromParsingNameFn>(GetProcAddress(shell32, "SHCreateItemFromParsingName"));
    if (!pCoInitializeEx || !pCoUninitialize || !pCoCreateInstance || !pCoTaskMemFree ||
        !pSHGetKnownFolderPath || !pSHCreateItemFromParsingName) {
        g_saveManagerStatus = L"Windows no expone las funciones necesarias para el selector de carpetas.";
        FreeLibrary(shell32);
        FreeLibrary(ole32);
        return {};
    }

    const GUID clsidFileOpenDialog = {0xDC1C5A9C, 0xE88A, 0x4DDE, {0xA5, 0xA1, 0x60, 0xF8, 0x2A, 0x20, 0xAE, 0xF7}};
    const GUID iidFileOpenDialog = {0xD57C7288, 0xD4AD, 0x4768, {0xBE, 0x02, 0x9D, 0x96, 0x95, 0x32, 0xD9, 0x60}};
    const GUID iidShellItem = {0x43826D1E, 0xE718, 0x42EE, {0xBC, 0x55, 0xA1, 0xE2, 0x61, 0xC3, 0x7B, 0xFE}};
    const GUID folderIdDesktop = {0xB4BFCC3A, 0xDB2C, 0x424C, {0xB0, 0x29, 0x7F, 0xE9, 0x9A, 0x87, 0xC6, 0x41}};

    const HRESULT initResult = pCoInitializeEx(nullptr, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);
    const bool uninitializeCom = SUCCEEDED(initResult);
    if (FAILED(initResult) && initResult != RPC_E_CHANGED_MODE) {
        g_saveManagerStatus = L"Windows no pudo inicializar el selector de carpetas.";
        FreeLibrary(shell32);
        FreeLibrary(ole32);
        return {};
    }

    IFileOpenDialog* dialog = nullptr;
    HRESULT hr = pCoCreateInstance(clsidFileOpenDialog, nullptr, CLSCTX_INPROC_SERVER,
                                   iidFileOpenDialog, reinterpret_cast<void**>(&dialog));
    if (FAILED(hr) || !dialog) {
        g_saveManagerStatus = L"Windows no pudo crear el selector de carpetas.";
        if (uninitializeCom) pCoUninitialize();
        FreeLibrary(shell32);
        FreeLibrary(ole32);
        return {};
    }

    DWORD options = 0;
    hr = dialog->GetOptions(&options);
    if (SUCCEEDED(hr)) {
        options |= FOS_PICKFOLDERS | FOS_FORCEFILESYSTEM | FOS_PATHMUSTEXIST | FOS_NOCHANGEDIR;
        hr = dialog->SetOptions(options);
    }
    if (SUCCEEDED(hr)) hr = dialog->SetTitle(importing ? L"Selecciona la carpeta de la partida exportada" : L"Elige dónde exportar la partida");
    if (SUCCEEDED(hr)) hr = dialog->SetOkButtonLabel(importing ? L"Elegir carpeta" : L"Exportar aquí");

    // Temporarily hide the overlay while the modal Windows dialog is open so they never overlap
    g_modalDialogOpen = true;
    if (g_panelWindow) ShowWindow(g_panelWindow, SW_HIDE);

    if (SUCCEEDED(hr)) {
        PWSTR desktopPath = nullptr;
        if (SUCCEEDED(pSHGetKnownFolderPath(folderIdDesktop, KF_FLAG_DEFAULT, nullptr, &desktopPath)) && desktopPath) {
            IShellItem* desktopItem = nullptr;
            if (SUCCEEDED(pSHCreateItemFromParsingName(desktopPath, nullptr, iidShellItem, reinterpret_cast<void**>(&desktopItem))) && desktopItem) {
                dialog->SetFolder(desktopItem);
                desktopItem->Release();
            }
            pCoTaskMemFree(desktopPath);
        } else {
            const std::filesystem::path fallback = SaveManagerStartDirectory();
            IShellItem* startItem = nullptr;
            if (SUCCEEDED(pSHCreateItemFromParsingName(fallback.c_str(), nullptr, iidShellItem, reinterpret_cast<void**>(&startItem))) && startItem) {
                dialog->SetFolder(startItem);
                startItem->Release();
            }
        }
        hr = dialog->Show(g_hostWindow ? g_hostWindow : g_panelWindow);
    }

    g_modalDialogOpen = false;
    if (g_panelVisible && g_panelWindow) {
        ShowWindow(g_panelWindow, SW_SHOWNORMAL);
        SetForegroundWindow(g_panelWindow);
    }

    std::filesystem::path selected;
    if (SUCCEEDED(hr)) {
        IShellItem* resultItem = nullptr;
        if (SUCCEEDED(dialog->GetResult(&resultItem)) && resultItem) {
            PWSTR selectedPath = nullptr;
            if (SUCCEEDED(resultItem->GetDisplayName(SIGDN_FILESYSPATH, &selectedPath)) && selectedPath) {
                selected = std::filesystem::path(selectedPath);
                pCoTaskMemFree(selectedPath);
            }
            resultItem->Release();
        }
    } else if (hr == HRESULT_FROM_WIN32(ERROR_CANCELLED)) {
        g_saveManagerStatus = L"Selección cancelada. No se modificó la partida.";
    } else {
        g_saveManagerStatus = L"No se pudo abrir el selector nativo de carpetas de Windows.";
    }

    dialog->Release();
    if (uninitializeCom) pCoUninitialize();
    FreeLibrary(shell32);
    FreeLibrary(ole32);

    if (!selected.empty()) {
        std::error_code ec;
        if (!std::filesystem::is_directory(selected, ec) || ec) {
            g_saveManagerStatus = L"La ruta seleccionada no es una carpeta válida.";
            return {};
        }
    }
    return selected;
#else
    (void)importing;
    return {};
#endif
}

void SaveManagerBeginBrowse(bool importing) {
    const std::filesystem::path selected = SaveManagerSelectFolderNative(importing);
    if (selected.empty()) {
        g_saveManagerMode = SaveManagerMode::Home;
        SaveManagerRefreshPanel();
        return;
    }
    if (importing) {
        g_saveManagerSelectedImport = selected;
        g_saveManagerMode = SaveManagerMode::ConfirmImport;
        g_saveManagerStatus = L"Revisa la ruta elegida antes de preparar la importación.";
    } else {
        g_saveManagerExportTarget = selected;
        g_saveManagerExportRequested = true;
        g_saveManagerMode = SaveManagerMode::Home;
        g_saveManagerStatus = L"Exportación programada. Cierra MH3: después de guardar la sesión se copiará la partida al destino elegido.";
    }
    SaveManagerRefreshPanel();
}
void SaveManagerBrowseParent() {
    const auto parent = g_saveManagerBrowsePath.parent_path();
    if (parent.empty() || parent == g_saveManagerBrowsePath) {
        g_saveManagerStatus = L"Ya estás en la carpeta raíz de esta unidad.";
    } else {
        g_saveManagerBrowsePath = parent;
        SaveManagerRefreshDirectories();
        g_saveManagerStatus = L"Carpeta actual: " + g_saveManagerBrowsePath.wstring();
    }
    SaveManagerRefreshPanel();
}
void SaveManagerChooseCurrentFolder() {
    if (g_saveManagerMode == SaveManagerMode::BrowseExport) {
        g_saveManagerExportTarget = g_saveManagerBrowsePath;
        g_saveManagerExportRequested = true;
        g_saveManagerStatus = L"Exportación programada. Cierra MH3: después de guardar la sesión se copiará la partida al destino elegido.";
        g_saveManagerMode = SaveManagerMode::Home;
    } else if (g_saveManagerMode == SaveManagerMode::BrowseImport) {
        g_saveManagerSelectedImport = g_saveManagerBrowsePath;
        g_saveManagerMode = SaveManagerMode::ConfirmImport;
        g_saveManagerStatus = L"Revisa la ruta elegida antes de preparar la importación.";
    }
    SaveManagerRefreshPanel();
}
void SaveManagerConfirmImport() {
    const auto result = mh3_save_manager::StageImport(g_saveManagerSelectedImport, SaveManagerPendingPath());
    if (result.success) {
        g_saveManagerStatus = L"Importación preparada. Al cerrar MH3, se respalda la partida actual y después se sustituye.";
        g_saveManagerMode = SaveManagerMode::Home;
    } else if (result.detail == "invalid-import-folder") {
        g_saveManagerStatus = L"La carpeta elegida no contiene data con archivos de guardado. No se ha cambiado la partida.";
    } else {
        g_saveManagerStatus = L"No se pudo preparar la importación. La partida actual no se modificó.";
    }
    SaveManagerRefreshPanel();
}
void SaveManagerCreateBackup() {
    if (!mh3_save_manager::HasSaveData(SaveManagerDataPath())) {
        g_saveManagerStatus = L"No hay datos de partida. Abre MH3 y guarda la partida antes de pedir el backup.";
    } else if (g_saveManagerBackupRequested) {
        g_saveManagerStatus = L"Ya hay un backup programado. Se creará al cerrar MH3, después de guardar la sesión.";
    } else {
        g_saveManagerBackupRequested = true;
        g_saveManagerStatus = L"Backup programado. Cierra MH3 para crearlo después de que el juego termine de guardar la sesión.";
    }
    SaveManagerRefreshPanel();
}
void SaveManagerExport() {
    if (!mh3_save_manager::HasSaveData(SaveManagerDataPath())) {
        g_saveManagerStatus = L"No hay una partida guardada que exportar. Abre MH3 y guarda la partida primero.";
        SaveManagerRefreshPanel();
        return;
    }
    SaveManagerBeginBrowse(false);
}
void SaveManagerImport() {
    const auto pending = SaveManagerPendingPath();
    if (mh3_save_manager::HasPendingImport(pending)) {
        g_saveManagerStatus = L"Ya existe una importación pendiente. Cierra MH3 para aplicarla antes de preparar otra.";
        SaveManagerRefreshPanel();
        return;
    }
    SaveManagerBeginBrowse(true);
}
void SaveManagerHandleHit(int hit) {
    if (hit == 9062) { SaveManagerCreateBackup(); return; }
    if (hit == 9063) { SaveManagerImport(); return; }
    if (hit == 9064) { SaveManagerExport(); return; }
    if (hit == 9067) { SaveManagerBrowseParent(); return; }
    if (hit == 9068) { SaveManagerChooseCurrentFolder(); return; }
    if (hit == 9069) { g_saveManagerMode = SaveManagerMode::Home; g_saveManagerStatus = L"Operación cancelada. La partida actual no se ha modificado."; SaveManagerRefreshPanel(); return; }
    if (hit == 9070) {
        g_saveManagerBrowseOffset = g_saveManagerBrowseOffset >= 5 ? g_saveManagerBrowseOffset - 5 : 0;
        SaveManagerRefreshPanel(); return;
    }
    if (hit == 9071) {
        if (g_saveManagerBrowseOffset + 5 < g_saveManagerDirectories.size()) g_saveManagerBrowseOffset += 5;
        SaveManagerRefreshPanel(); return;
    }
    if (hit == 9072) { SaveManagerConfirmImport(); return; }
    if (hit == 9073) { g_saveManagerMode = SaveManagerMode::Home; g_saveManagerStatus = L"Importación cancelada. La partida actual no se ha modificado."; SaveManagerRefreshPanel(); return; }
    if (hit >= 9100 && hit < 9105 && (g_saveManagerMode == SaveManagerMode::BrowseImport || g_saveManagerMode == SaveManagerMode::BrowseExport)) {
        const size_t index = g_saveManagerBrowseOffset + static_cast<size_t>(hit - 9100);
        if (index < g_saveManagerDirectories.size()) {
            g_saveManagerBrowsePath = g_saveManagerDirectories[index];
            SaveManagerRefreshDirectories();
            g_saveManagerStatus = L"Carpeta actual: " + g_saveManagerBrowsePath.wstring();
        }
        SaveManagerRefreshPanel();
        return;
    }
}

void SaveManagerApplyPendingAtExit() {
    const auto pending = SaveManagerPendingPath();
    const bool importPending = mh3_save_manager::HasPendingImport(pending);
    if (!g_saveManagerBackupRequested && !g_saveManagerExportRequested && !importPending) return;

    const auto dataPath = SaveManagerDataPath();
    const auto backupPath = SaveManagerBackupsPath();
    const auto logDir = SaveManagerUserDataDirectory() / L"SaveManager";
    std::error_code ec;
    std::filesystem::create_directories(logDir, ec);
    if (ec) return;
    std::ofstream log(logDir / L"ultima-operacion.txt", std::ios::binary | std::ios::trunc);
    if (!log) return;
    log << "Registro de operaciones de guardado al cerrar MH3.\n";

    if (g_saveManagerBackupRequested) {
        const auto result = mh3_save_manager::CreateBackup(dataPath, backupPath);
        log << (result.success ? "Backup creado correctamente.\n" : "No se pudo crear el backup.\n");
        if (!result.detail.empty()) log << result.detail << '\n';
        if (result.success) log << result.output.string() << '\n';
    }
    if (g_saveManagerExportRequested) {
        const auto result = mh3_save_manager::ExportSave(dataPath, g_saveManagerExportTarget);
        log << (result.success ? "Exportación creada correctamente.\n" : "No se pudo crear la exportación.\n");
        if (!result.detail.empty()) log << result.detail << '\n';
        if (result.success) log << result.output.string() << '\n';
    }
    if (importPending) {
        const auto result = mh3_save_manager::ApplyPendingImport(dataPath, pending, backupPath);
        log << (result.success ? "Importación aplicada correctamente.\n" : "No se pudo aplicar la importación pendiente; se conserva en SaveManager/PendingImport.\n");
        if (!result.detail.empty()) log << result.detail << '\n';
        if (result.success && !result.output.empty()) log << result.output.string() << '\n';
    }
}
struct SaveManagerExitFinalizer { ~SaveManagerExitFinalizer() noexcept { try { SaveManagerApplyPendingAtExit(); } catch (...) {} } };
SaveManagerExitFinalizer g_saveManagerExitFinalizer;

// ---------------------------------------------------------------- pagina Online
void DrawOnlinePage(HDC dc, const Theme& t) {
    const OnlineNetMode mode = LocalOnlineServer::GetMode();
    const int modeIdx = static_cast<int>(mode);

    DrawHeader(dc, t, L"Centro Online y Multijugador", L"Loc Lac sin conexión (Solo), salas LAN / VPN y servidores comunitarios MH3SP");

    const wchar_t* modeLabels[] = {L"Offline (Loc Lac Solo)", L"Crear Sala (Host LAN)", L"Unirse (Cliente IP)", L"Comunidad MH3SP"};
    DrawChips(dc, t, ContentX, 108, ContentR - ContentX, 36, modeLabels, 4, modeIdx, 7000);

    const int cardTop = 158;
    RECT card{ContentX, cardTop, ContentR, cardTop + 318};
    DrawCard(dc, card, t.card, t.border, 14);

    if (modeIdx == 0) {
        Text(dc, ContentX + 20, cardTop + 18, ContentR - ContentX - 40, 22,
             L"Modo Offline · Loc Lac en Solitario (Sin Internet)", 14, t.accent, FW_BOLD);
        Text(dc, ContentX + 20, cardTop + 46, ContentR - ContentX - 40, 18,
             L"El servidor interno integrado (127.0.0.1:18080) emula la red de Monster Hunter Tri localmente.", 11, t.ink, FW_SEMIBOLD);
        Text(dc, ContentX + 20, cardTop + 76, ContentR - ContentX - 40, 18,
             L"• Entra a la Ciudad (Loc Lac) y juega todas las misiones de Rango Alto, Jhen Mohran y Alatreon solo.", 10, t.muted);
        Text(dc, ContentX + 20, cardTop + 102, ContentR - ContentX - 40, 18,
             L"• Funciona 100% sin conexión a Internet ni cuentas externas.", 10, t.muted);
        Text(dc, ContentX + 20, cardTop + 128, ContentR - ContentX - 40, 18,
             L"• Velocidad de monstruos e interpolación sincronizadas a 60, 90 y 120 FPS sin desync.", 10, t.muted);

        RECT btnRestart{ContentX + 20, cardTop + 252, ContentX + 228, cardTop + 292};
        const bool restOver = g_hover == 7010;
        RRAlpha(dc, btnRestart, 9, restOver ? t.accent : t.sidebar, restOver ? t.accent2 : t.card, 235, t.accent, 215, 1.3f);
        Text(dc, btnRestart.left, btnRestart.top, btnRestart.right - btnRestart.left,
             btnRestart.bottom - btnRestart.top, L"Reiniciar Servidor Interno", 10,
             restOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(btnRestart, 7010);

    } else if (modeIdx == 1) {
        Text(dc, ContentX + 20, cardTop + 18, ContentR - ContentX - 40, 22,
             L"Sala Local Activa · Hospedando en 0.0.0.0:18080 (TCP) / 8200 (SSL)", 13, t.accent, FW_BOLD);
        Text(dc, ContentX + 20, cardTop + 44, ContentR - ContentX - 40, 18,
             L"Tus amigos en la misma red Wi-Fi, Radmin VPN, Tailscale o ZeroTier pueden unirse a tu IP:", 10, t.muted);

        const auto ips = LocalOnlineServer::GetLocalNetworkIPs();
        int ipY = cardTop + 72;
        if (ips.empty()) {
            Text(dc, ContentX + 26, ipY, ContentR - ContentX - 52, 18,
                 L"No se detectaron adaptadores activos (puedes usar 127.0.0.1 localmente).", 10, t.muted);
        }
        for (size_t i = 0; i < ips.size() && ipY < cardTop + 220; ++i) {
            const std::wstring wip = Utf8ToWide(ips[i].c_str());
            Text(dc, ContentX + 26, ipY, ContentR - ContentX - 52, 20,
                 (L"•  " + wip + L"  (Puerto 18080)").c_str(), 11, t.ink, FW_BOLD);
            ipY += 22;
        }

        RECT btnRestart{ContentX + 20, cardTop + 252, ContentX + 190, cardTop + 292};
        const bool restOver = g_hover == 7010;
        RRAlpha(dc, btnRestart, 9, restOver ? t.accent : t.sidebar, restOver ? t.accent2 : t.card, 235, t.border, 185, 1.0f);
        Text(dc, btnRestart.left, btnRestart.top, btnRestart.right - btnRestart.left,
             btnRestart.bottom - btnRestart.top, L"Reiniciar Servidor", 10,
             restOver ? OnAccent(t) : t.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(btnRestart, 7010);

        RECT btnCopy{ContentX + 200, cardTop + 252, ContentX + 398, cardTop + 292};
        const bool copyOver = g_hover == 7011;
        RRAlpha(dc, btnCopy, 9, copyOver ? t.accent : t.sidebar, copyOver ? t.accent2 : t.card, 235, t.accent, 215, 1.3f);
        Text(dc, btnCopy.left, btnCopy.top, btnCopy.right - btnCopy.left,
             btnCopy.bottom - btnCopy.top, L"Copiar mi IP al Portapapeles", 10,
             copyOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        AddHit(btnCopy, 7011);

    } else if (modeIdx == 2) {
        Text(dc, ContentX + 20, cardTop + 18, ContentR - ContentX - 40, 22,
             L"Unirse a Sala en Red Local / ZeroTier / Radmin VPN", 13, t.accent, FW_BOLD);
        Text(dc, ContentX + 20, cardTop + 42, ContentR - ContentX - 40, 18,
             L"Introduce o pega la dirección IP del anfitrión ('Crear Sala Host LAN'):", 10, t.muted);

        const std::string curIp = LocalOnlineServer::GetClientTarget();
        const int curPort = LocalOnlineServer::GetClientPort();
        char ipPortBuf[64];
        std::snprintf(ipPortBuf, sizeof(ipPortBuf), "Destino actual:  %s : %d", curIp.c_str(), curPort);
        const std::wstring ipLabel = Utf8ToWide(ipPortBuf);
        Text(dc, ContentX + 20, cardTop + 68, 420, 20, ipLabel.c_str(), 12, t.ink, FW_BOLD);

        int a = 192, b = 168, c = 1, d = 1;
        std::sscanf(curIp.c_str(), "%d.%d.%d.%d", &a, &b, &c, &d);
        int parts[4] = {a, b, c, d};

        const int btnY = cardTop + 98;
        const int btnH = 26;
        int bx = ContentX + 18;

        for (int oct = 0; oct < 4; ++oct) {
            wchar_t val[8]; std::swprintf(val, 8, L"%d", parts[oct]);
            RECT bm10{bx, btnY, bx+26, btnY+btnH};
            DrawCard(dc, bm10, g_hover==(7020+oct)?t.hover:t.sidebar, t.border, 5, false);
            Text(dc, bm10.left, bm10.top, 26, btnH, L"-10", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
            AddHit(bm10, 7020+oct);
            bx += 28;

            RECT bm1{bx, btnY, bx+20, btnY+btnH};
            DrawCard(dc, bm1, g_hover==(7024+oct)?t.hover:t.sidebar, t.border, 5, false);
            Text(dc, bm1.left, bm1.top, 20, btnH, L"-1", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
            AddHit(bm1, 7024+oct);
            bx += 22;

            RECT bval{bx, btnY, bx+34, btnY+btnH};
            DrawCard(dc, bval, t.card, t.accent, 5, false);
            Text(dc, bval.left, bval.top, 34, btnH, val, 10, t.accent, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
            bx += 36;

            RECT bp1{bx, btnY, bx+20, btnY+btnH};
            DrawCard(dc, bp1, g_hover==(7028+oct)?t.hover:t.sidebar, t.border, 5, false);
            Text(dc, bp1.left, bp1.top, 20, btnH, L"+1", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
            AddHit(bp1, 7028+oct);
            bx += 22;

            RECT bp10{bx, btnY, bx+26, btnY+btnH};
            DrawCard(dc, bp10, g_hover==(7032+oct)?t.hover:t.sidebar, t.border, 5, false);
            Text(dc, bp10.left, bp10.top, 26, btnH, L"+10", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
            AddHit(bp10, 7032+oct);
            bx += 28;

            if (oct < 3) {
                Text(dc, bx, btnY, 10, btnH, L".", 12, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
                bx += 10;
            }
        }

        int px = ContentX + 20;
        const int py = cardTop + 138;
        Text(dc, px, py, 52, 24, L"Puerto:", 10, t.muted, FW_SEMIBOLD);
        px += 56;
        RECT pbt1{px, py, px+32, py+24}; DrawCard(dc, pbt1, g_hover==7040?t.hover:t.sidebar, t.border, 5, false);
        Text(dc, pbt1.left, pbt1.top, 32, 24, L"-100", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pbt1, 7040); px+=34;
        RECT pbt2{px, py, px+24, py+24}; DrawCard(dc, pbt2, g_hover==7041?t.hover:t.sidebar, t.border, 5, false);
        Text(dc, pbt2.left, pbt2.top, 24, 24, L"-1", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pbt2, 7041); px+=26;
        wchar_t portBuf[12]; std::swprintf(portBuf, 12, L"%d", curPort);
        RECT pval{px, py, px+56, py+24}; DrawCard(dc, pval, t.card, t.accent, 5, false);
        Text(dc, pval.left, pval.top, 56, 24, portBuf, 10, t.accent, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); px+=58;
        RECT pbt3{px, py, px+24, py+24}; DrawCard(dc, pbt3, g_hover==7042?t.hover:t.sidebar, t.border, 5, false);
        Text(dc, pbt3.left, pbt3.top, 24, 24, L"+1", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pbt3, 7042); px+=26;
        RECT pbt4{px, py, px+34, py+24}; DrawCard(dc, pbt4, g_hover==7043?t.hover:t.sidebar, t.border, 5, false);
        Text(dc, pbt4.left, pbt4.top, 34, 24, L"+100", 8, t.ink, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pbt4, 7043);

        const int prY = cardTop + 180;
        RECT pr1{ContentX+20, prY, ContentX+116, prY+28};
        DrawCard(dc, pr1, g_hover==7051?t.hover:t.sidebar, t.border, 7, false);
        Text(dc, pr1.left, pr1.top, 96, 28, L"127.0.0.1", 10, t.ink, FW_SEMIBOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pr1, 7051);

        RECT pr2{ContentX+124, prY, ContentX+230, prY+28};
        DrawCard(dc, pr2, g_hover==7052?t.hover:t.sidebar, t.border, 7, false);
        Text(dc, pr2.left, pr2.top, 106, 28, L"192.168.1.1", 10, t.ink, FW_SEMIBOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pr2, 7052);

        RECT pr3{ContentX+238, prY, ContentX+344, prY+28};
        DrawCard(dc, pr3, g_hover==7053?t.hover:t.sidebar, t.border, 7, false);
        Text(dc, pr3.left, pr3.top, 106, 28, L"192.168.0.1", 10, t.ink, FW_SEMIBOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE); AddHit(pr3, 7053);

        RECT prPaste{ContentX+354, prY, ContentR-20, prY+28};
        const bool pasteOver = g_hover == 7054;
        RRAlpha(dc, prPaste, 7, pasteOver ? t.accent : t.sidebar, pasteOver ? t.accent2 : t.card, 235, t.accent, 210, 1.2f);
        Text(dc, prPaste.left, prPaste.top, prPaste.right - prPaste.left, 28, L"Pegar IP (Ctrl+V)", 10,
             pasteOver ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
        AddHit(prPaste, 7054);

        Text(dc, ContentX + 20, cardTop + 226, ContentR - ContentX - 40, 18,
             L"Consejo: copia la IP del Host y pulsa 'Pegar IP (Ctrl+V)' para conectarte al instante.", 9, t.muted);

    } else {
        Text(dc, ContentX + 20, cardTop + 18, ContentR - ContentX - 40, 22,
             L"Servidores Comunitarios MH3SP (mh3sp.com)", 14, t.accent, FW_BOLD);
        Text(dc, ContentX + 20, cardTop + 46, ContentR - ContentX - 40, 18,
             L"Conecta con cazadores de todo el mundo en los servidores públicos de MH3SP.", 11, t.ink, FW_SEMIBOLD);
        Text(dc, ContentX + 20, cardTop + 76, ContentR - ContentX - 40, 18,
             L"1. Requiere conexión a Internet activa.", 10, t.muted);
        Text(dc, ContentX + 20, cardTop + 100, ContentR - ContentX - 40, 18,
             L"2. El parcheador europeo RMHP08 integrado redirige automáticamente a opn.mh3sp.com.", 10, t.muted);
        Text(dc, ContentX + 20, cardTop + 124, ContentR - ContentX - 40, 18,
             L"3. Entra a 'Loc Lac' (Modo Ciudad) para ver los servidores y salas abiertas.", 10, t.muted);
        Text(dc, ContentX + 20, cardTop + 162, ContentR - ContentX - 40, 18,
             L"Endpoint activo: opn.mh3sp.com:8200 (TLS) · nas.mh3sp.com:80", 10, t.accent, FW_BOLD);
    }

    const int statusY = cardTop + 332;
    RECT statusBar{ContentX, statusY, ContentR, statusY + 42};
    DrawCard(dc, statusBar, t.sidebar, t.border, 11, false);
    const std::string statusStr = LocalOnlineServer::GetStatusText();
    const std::wstring statusW = Utf8ToWide(statusStr.c_str());
    Text(dc, statusBar.left + 16, statusBar.top, statusBar.right - statusBar.left - 32,
         42, (L"Estado de Red:   " + statusW).c_str(), 10, t.accent, FW_BOLD, DT_LEFT|DT_VCENTER|DT_SINGLELINE);
}

void DrawSaveManagerPage(HDC dc, const Theme& theme) {
    SaveManagerResetHits();
    const int smLeft = ContentX;
    const int smRight = ContentR;
    const int smWidth = smRight - smLeft;
    if (g_saveManagerMode == SaveManagerMode::BrowseImport || g_saveManagerMode == SaveManagerMode::BrowseExport) {
        const bool importing = g_saveManagerMode == SaveManagerMode::BrowseImport;
        DrawHeader(dc, theme, importing ? L"Importar Partida" : L"Exportar Partida", L"Explorador de directorios de partida");
        SaveManagerDrawCard(dc, RECT{smLeft, 110, smRight, 144}, theme.sidebar, theme.border, 9);
        SaveManagerText(dc, smLeft + 10, 114, smWidth - 20, 24, g_saveManagerBrowsePath.wstring().c_str(), 10, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);

        const int smGap = 8;
        const int smCol = (smWidth - smGap * 2) / 3;
        const RECT upRect{smLeft, 154, smLeft + smCol, 190};
        const RECT chooseRect{smLeft + smCol + smGap, 154, smLeft + smCol * 2 + smGap, 190};
        const RECT cancelRect{smLeft + smCol * 2 + smGap * 2, 154, smRight, 190};
        SaveManagerDrawCard(dc, upRect, g_hover == 9067 ? theme.hover : theme.card, theme.border, 9);
        SaveManagerText(dc, upRect.left + 5, 160, upRect.right - upRect.left - 10, 23, L"Carpeta superior", 10, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(upRect, 9067);
        SaveManagerDrawCard(dc, chooseRect, g_hover == 9068 ? theme.hover : theme.card, theme.accent, 9);
        SaveManagerText(dc, chooseRect.left + 5, 160, chooseRect.right - chooseRect.left - 10, 23, importing ? L"Elegir carpeta" : L"Guardar aquí", 10, theme.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(chooseRect, 9068);
        SaveManagerDrawCard(dc, cancelRect, g_hover == 9069 ? theme.hover : theme.card, theme.border, 9);
        SaveManagerText(dc, cancelRect.left + 5, 160, cancelRect.right - cancelRect.left - 10, 23, L"Cancelar", 10, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(cancelRect, 9069);

        for (int row = 0; row < 5; ++row) {
            const size_t index = g_saveManagerBrowseOffset + static_cast<size_t>(row);
            const int top = 200 + row * 40;
            const RECT r{smLeft, top, smRight, top + 34};
            const bool valid = index < g_saveManagerDirectories.size();
            SaveManagerDrawCard(dc, r, valid && g_hover == 9100 + row ? theme.hover : theme.card, theme.border, 8);
            if (valid) {
                const std::wstring name = g_saveManagerDirectories[index].filename().wstring();
                SaveManagerText(dc, smLeft + 13, top + 5, smWidth - 48, 24, name.c_str(), 10, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
                SaveManagerText(dc, smRight - 31, top + 4, 22, 25, L"›", 17, theme.accent, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
                SaveManagerAddHit(r, 9100 + row);
            } else {
                SaveManagerText(dc, smLeft + 13, top + 5, smWidth - 28, 24, L"—", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
            }
        }
        const RECT prevRect{smLeft, 410, smLeft + 96, 442};
        const RECT nextRect{smLeft + 102, 410, smLeft + 198, 442};
        SaveManagerDrawCard(dc, prevRect, theme.sidebar, theme.border, 8);
        SaveManagerText(dc, prevRect.left + 5, 415, prevRect.right - prevRect.left - 10, 22, L"Anterior", 10, theme.ink, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(prevRect, 9070);
        SaveManagerDrawCard(dc, nextRect, theme.sidebar, theme.border, 8);
        SaveManagerText(dc, nextRect.left + 5, 415, nextRect.right - nextRect.left - 10, 22, L"Siguiente", 10, theme.ink, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(nextRect, 9071);
        return;
    }
    if (g_saveManagerMode == SaveManagerMode::ConfirmImport) {
        DrawHeader(dc, theme, L"Confirmar Importación", L"Verifica la ruta antes de programar el reemplazo seguro");
        SaveManagerDrawCard(dc, RECT{smLeft, 120, smRight, 168}, theme.sidebar, theme.border, 9);
        SaveManagerText(dc, smLeft + 12, 126, smWidth - 24, 34, g_saveManagerSelectedImport.wstring().c_str(), 10, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
        SaveManagerDrawCard(dc, RECT{smLeft, 182, smRight, 264}, theme.card, theme.border, 11);
        SaveManagerText(dc, smLeft + 16, 190, smWidth - 32, 64, L"Al confirmar, la carpeta queda preparada. Al cerrar MH3 se crea primero un backup automático de tu partida actual y después se aplica la importación.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
        const int smHalf = (smWidth - 12) / 2;
        const RECT confirmRect{smLeft, 280, smLeft + smHalf, 328};
        const RECT cancelRect{smLeft + smHalf + 12, 280, smRight, 328};
        SaveManagerDrawCard(dc, confirmRect, g_hover == 9072 ? theme.hover : theme.card, theme.accent, 10);
        SaveManagerText(dc, confirmRect.left + 6, 290, confirmRect.right - confirmRect.left - 12, 28, L"Confirmar Importación", 11, theme.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(confirmRect, 9072);
        SaveManagerDrawCard(dc, cancelRect, g_hover == 9073 ? theme.hover : theme.card, theme.border, 10);
        SaveManagerText(dc, cancelRect.left + 6, 290, cancelRect.right - cancelRect.left - 12, 28, L"Cancelar", 11, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(cancelRect, 9073);
        return;
    }

    DrawHeader(dc, theme, L"Bóveda de Guardados", L"Copias de seguridad, importación y exportación segura de partidas NAND");

    const RECT backupRect{smLeft, 112, smRight, 190};
    DrawCard(dc, backupRect, g_hover == 9062 ? theme.hover : theme.card, g_hover == 9062 ? theme.accent : theme.border, 13);
    Text(dc, smLeft + 18, 124, smWidth - 56, 22, L"Crear Copia de Seguridad (Backup)", 13, theme.ink, FW_BOLD);
    Text(dc, smLeft + 18, 148, smWidth - 56, 30, L"Programa una copia fechada en UserData/SaveBackups que se ejecutará automáticamente al cerrar MH3.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    Text(dc, smRight - 38, 112, 24, 78, L"›", 22, theme.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    SaveManagerAddHit(backupRect, 9062);

    const RECT importRect{smLeft, 202, smRight, 280};
    DrawCard(dc, importRect, g_hover == 9063 ? theme.hover : theme.card, g_hover == 9063 ? theme.accent : theme.border, 13);
    Text(dc, smLeft + 18, 214, smWidth - 56, 22, L"Importar Partida Externa", 13, theme.ink, FW_BOLD);
    Text(dc, smLeft + 18, 238, smWidth - 56, 30, L"Abre el selector de Windows (el menú se oculta mientras eliges). Respalda tu partida antes de importar.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    Text(dc, smRight - 38, 202, 24, 78, L"›", 22, theme.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    SaveManagerAddHit(importRect, 9063);

    const RECT exportRect{smLeft, 292, smRight, 370};
    DrawCard(dc, exportRect, g_hover == 9064 ? theme.hover : theme.card, g_hover == 9064 ? theme.accent : theme.border, 13);
    Text(dc, smLeft + 18, 304, smWidth - 56, 22, L"Exportar Partida Actual", 13, theme.ink, FW_BOLD);
    Text(dc, smLeft + 18, 328, smWidth - 56, 30, L"Exporta tu progreso de MH3-RMHP08 a cualquier carpeta de tu PC al cerrar la sesión.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    Text(dc, smRight - 38, 292, 24, 78, L"›", 22, theme.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    SaveManagerAddHit(exportRect, 9064);

    DrawCard(dc, RECT{smLeft, 386, smRight, 448}, theme.sidebar, theme.border, 11, false);
    Text(dc, smLeft + 16, 392, smWidth - 32, 50, g_saveManagerStatus.c_str(), 10, theme.accent, FW_SEMIBOLD, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
}

void PaintPanel(HWND w) {
    PAINTSTRUCT ps{};
    HDC target = BeginPaint(w, &ps);
    if (!target) return;
    static HDC memDC = nullptr;
    static HBITMAP memBmp = nullptr;
    static HGDIOBJ oldBmp = nullptr;
    if (!memDC) {
        memDC = CreateCompatibleDC(target);
        BITMAPINFO bmi{};
        bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bmi.bmiHeader.biWidth = PanelW;
        bmi.bmiHeader.biHeight = -PanelH; // top-down 32-bit DIB for fast GDI+ alpha rendering
        bmi.bmiHeader.biPlanes = 1;
        bmi.bmiHeader.biBitCount = 32;
        bmi.bmiHeader.biCompression = BI_RGB;
        void* bits = nullptr;
        memBmp = CreateDIBSection(target, &bmi, DIB_RGB_COLORS, &bits, nullptr, 0);
        oldBmp = SelectObject(memDC, memBmp);
    }
    g_hits.clear();
    const Theme& t = CurrentTheme();
    DrawThemeAtmosphere(memDC, t);
    DrawSidebar(memDC, t);
    switch (g_page) {
    case Page::Graphics: DrawGraphicsPage(memDC, t); break;
    case Page::Mods: DrawModsPage(memDC, t); break;
    case Page::System: DrawSystemPage(memDC, t); break;
    case Page::Controls: DrawControlsPage(memDC, t); break;
    case Page::Appearance: DrawAppearancePage(memDC, t); break;
    case Page::SaveManager: DrawSaveManagerPage(memDC, t); break;
    case Page::Online: DrawOnlinePage(memDC, t); break;
    }
    Outline(memDC, RECT{1, 1, PanelW - 1, PanelH - 1}, 20, Mix(t.border, t.accent, 40), 2, 225);
    BitBlt(target, 0, 0, PanelW, PanelH, memDC, 0, 0, SRCCOPY);
    EndPaint(w, &ps);
}

// ---------------------------------------------------------------- Ventanas y Z-Order seguro (Sin solapamiento con Windows UI)
void ApplyCornerStyle(HWND window, int diameter, int width, int height) {
    if (!window) return;
    const DWORD preference = g_rounded ? 2 : 1; // DWMWCP_ROUND / DWMWCP_DONOTROUND
    const HRESULT status = DwmSetWindowAttribute(window, 33, &preference, sizeof(preference));
    if (SUCCEEDED(status) || !g_rounded) SetWindowRgn(window, nullptr, TRUE);
    else SetWindowRgn(window, CreateRoundRectRgn(0, 0, width + 1, height + 1, diameter, diameter), TRUE);
}
void ApplyWindowStyle() {
    if (g_panelWindow) {
        SetLayeredWindowAttributes(g_panelWindow, 0, 250, LWA_ALPHA);
        ApplyCornerStyle(g_panelWindow, 40, PanelW, PanelH);
    }
    if (g_hudWindow) ApplyCornerStyle(g_hudWindow, 26, HudW, HudH);
}
void PositionPanel() {
    if (!g_hostWindow || !IsWindow(g_hostWindow) || !g_panelWindow || !g_panelVisible) return;
    if (!IsHostWindowActive()) {
        if (IsWindowVisible(g_panelWindow)) ShowWindow(g_panelWindow, SW_HIDE);
        return;
    }
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int aw = static_cast<int>(c.right - c.left), ah = static_cast<int>(c.bottom - c.top);
    const int x = o.x + std::max(0, (aw - PanelW) / 2), y = o.y + std::max(0, (ah - PanelH) / 2);
    static int lastX = -9999, lastY = -9999, lastW = -9999, lastH = -9999;
    const bool wasHidden = !IsWindowVisible(g_panelWindow);
    if (wasHidden || x != lastX || y != lastY || aw != lastW || ah != lastH) {
        lastX = x; lastY = y; lastW = aw; lastH = ah;
        SetWindowPos(g_panelWindow, HWND_TOP, x, y, PanelW, PanelH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
    }
}
void PositionHud() {
    if (!g_showFps || !g_hostWindow || !IsWindow(g_hostWindow) || !g_hudWindow) return;
    if (g_panelVisible || !IsHostWindowActive()) {
        if (IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_HIDE);
        return;
    }
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int x = o.x + std::max(8, static_cast<int>(c.right) - HudW - 18), y = o.y + 14;
    SetWindowPos(g_hudWindow, HWND_TOP, x, y, HudW, HudH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
}
void Repaint() {
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
    if (g_hudWindow) InvalidateRect(g_hudWindow, nullptr, TRUE);
}
void SetVisible(bool visible) {
    g_panelVisible = visible;
    g_capture.active = false; g_swallowLeftUp = false; g_swallowRightUp = false;
    if (!g_panelWindow) return;
    if (visible) {
        g_hover = -1;
        if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
        ApplyWindowStyle(); PositionPanel();
        ShowWindow(g_panelWindow, SW_SHOWNORMAL);
        SetWindowPos(g_panelWindow, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
        SetForegroundWindow(g_panelWindow); SetFocus(g_panelWindow);
        InvalidateRect(g_panelWindow, nullptr, FALSE);
    } else {
        ShowWindow(g_panelWindow, SW_HIDE);
        if (g_hostWindow && IsWindow(g_hostWindow) && !IsIconic(g_hostWindow)) SetForegroundWindow(g_hostWindow);
        if (g_showFps && g_hudWindow && IsHostWindowActive()) {
            PositionHud();
            InvalidateRect(g_hudWindow, nullptr, TRUE);
        }
    }
}
void ApplyRenderResolution(int idx) {
    g_resolutionIndex = static_cast<size_t>(std::clamp(idx, 0, int(RenderScales.size()) - 1));
    VISetFrameBufferScale(RenderScales[g_resolutionIndex]);
    _putenv_s("MH3_RENDER_SCALE", RenderScaleEnvironmentValues[g_resolutionIndex]);
    SaveGraphicsSettings();
}
void ChangeFrameLimitTo(int idx) {
    if (idx < 0 || idx >= int(FrameRateValues.size())) return;
    g_fpsLimit = FrameRateValues[static_cast<size_t>(idx)];
    MH3FrameRateControl::SetTargetFPS(g_fpsLimit);
    SaveGraphicsSettings();
}
void ToggleFps() {
    g_showFps = !g_showFps;
    RuntimeConfigFile::SetShowFps(g_showFps);
    if (g_showFps) {
        if (g_hudWindow && !g_panelVisible && IsHostWindowActive()) {
            PositionHud();
        }
    } else if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
}
void ToggleWide() {
    g_wide = !g_wide;
    if (g_sdlWindow) { if (g_wide) SDL_SetWindowAspectRatio(g_sdlWindow, 16.0f / 9.0f, 16.0f / 9.0f); else SDL_SetWindowAspectRatio(g_sdlWindow, 0.0f, 0.0f); }
}
void ToggleFit() {
    g_fitScreen = !g_fitScreen;
    if (g_sdlWindow) { if (g_fitScreen) SDL_MaximizeWindow(g_sdlWindow); else SDL_RestoreWindow(g_sdlWindow); }
}
void ToggleFullscreen() {
    g_fullscreen = !g_fullscreen;
    if (g_sdlWindow) {
        SDL_SetWindowFullscreenMode(g_sdlWindow, nullptr);
        SDL_SetWindowFullscreen(g_sdlWindow, g_fullscreen);
    }
    SaveGraphicsSettings();
    PositionPanel(); PositionHud();
}
void ChooseRenderer(int index) {
    if (index < 0 || index > 1) return;
    g_rendererIndex = index;
    SaveGraphicsSettings();
}
void ToggleVsync() {
    g_vsync = !g_vsync;
    aurora_enable_vsync(g_vsync);
    SaveGraphicsSettings();
}
void SetRounded(bool rounded) {
    g_rounded = rounded;
    SaveTheme();
    ApplyWindowStyle();
}
void ApplyThemeSelection(int idx) {
    if (idx < 0 || idx >= int(Themes.size())) return;
    g_themeIndex = idx;
    SaveTheme();
}
void ResetSettings() {
    g_rendererIndex = 0;
    g_themeIndex = 4; g_fontIndex = 0; g_rounded = true; SaveTheme();
    g_showFps = true; RuntimeConfigFile::SetShowFps(true);
    g_vsync = true; aurora_enable_vsync(true);
    g_fpsLimit = 60; MH3FrameRateControl::SetTargetFPS(60);
    ApplyRenderResolution(0);
    g_wide = true; g_fitScreen = false;
    RuntimeConfigFile::SetWindowSize(960, 544);
    if (g_sdlWindow) {
        SDL_SetWindowFullscreen(g_sdlWindow, false);
        SDL_RestoreWindow(g_sdlWindow);
        SDL_SetWindowSize(g_sdlWindow, 960, 544);
        SDL_SetWindowPosition(g_sdlWindow, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
        SDL_SetWindowAspectRatio(g_sdlWindow, 16.0f / 9.0f, 16.0f / 9.0f);
    }
    g_fullscreen = false;
    SaveGraphicsSettings();
    g_page = Page::Graphics;
    ApplyWindowStyle();
    PositionPanel(); PositionHud();
}

// ---------------------------------------------------------------- controles: captura de teclas
void CancelCapture() {
    if (!g_capture.active) return;
    g_capture.active = false;
    Repaint();
}
void BindCapture(int value) {
    if (!g_capture.active) return;
    mh3_control_map::SetBinding(g_capture.pad, g_capture.action, value, g_capture.add);
    g_capture.active = false;
    Repaint();
}
void StartCapture(bool pad, int action) {
    g_capture.active = true;
    g_capture.pad = pad;
    g_capture.action = action;
    g_capture.add = (GetKeyState(VK_CONTROL) & 0x8000) != 0;
    g_capture.padArmed = false;
    g_capture.startTick = GetTickCount64();
    Repaint();
}
int ScancodeFromKeyMessage(WPARAM wp, LPARAM lp) {
    UINT vk = static_cast<UINT>(wp);
    const UINT sc = static_cast<UINT>((lp >> 16) & 0xFF);
    const bool extended = (lp & (1 << 24)) != 0;
    if (vk == VK_SHIFT) vk = MapVirtualKeyW(sc, MAPVK_VSC_TO_VK_EX);
    else if (vk == VK_CONTROL) vk = extended ? VK_RCONTROL : VK_LCONTROL;
    else if (vk == VK_MENU) vk = extended ? VK_RMENU : VK_LMENU;
    switch (vk) {
    case VK_LSHIFT: return SDL_SCANCODE_LSHIFT;
    case VK_RSHIFT: return SDL_SCANCODE_RSHIFT;
    case VK_LCONTROL: return SDL_SCANCODE_LCTRL;
    case VK_RCONTROL: return SDL_SCANCODE_RCTRL;
    case VK_LMENU: return SDL_SCANCODE_LALT;
    case VK_RMENU: return SDL_SCANCODE_RALT;
    case VK_SPACE: return SDL_SCANCODE_SPACE;
    case VK_RETURN: return extended ? SDL_SCANCODE_KP_ENTER : SDL_SCANCODE_RETURN;
    case VK_BACK: return SDL_SCANCODE_BACKSPACE;
    case VK_TAB: return SDL_SCANCODE_TAB;
    case VK_UP: return SDL_SCANCODE_UP;
    case VK_DOWN: return SDL_SCANCODE_DOWN;
    case VK_LEFT: return SDL_SCANCODE_LEFT;
    case VK_RIGHT: return SDL_SCANCODE_RIGHT;
    case VK_HOME: return SDL_SCANCODE_HOME;
    case VK_END: return SDL_SCANCODE_END;
    case VK_PRIOR: return SDL_SCANCODE_PAGEUP;
    case VK_NEXT: return SDL_SCANCODE_PAGEDOWN;
    case VK_INSERT: return SDL_SCANCODE_INSERT;
    case VK_DELETE: return SDL_SCANCODE_DELETE;
    case VK_CAPITAL: return SDL_SCANCODE_CAPSLOCK;
    case VK_ADD: return SDL_SCANCODE_KP_PLUS;
    case VK_SUBTRACT: return SDL_SCANCODE_KP_MINUS;
    case VK_MULTIPLY: return SDL_SCANCODE_KP_MULTIPLY;
    case VK_DIVIDE: return SDL_SCANCODE_KP_DIVIDE;
    case VK_DECIMAL: return SDL_SCANCODE_KP_PERIOD;
    case VK_NUMPAD0: return SDL_SCANCODE_KP_0;
    default: break;
    }
    if (vk >= VK_F1 && vk <= VK_F12) return static_cast<int>(SDL_SCANCODE_F1) + static_cast<int>(vk - VK_F1);
    if (vk >= VK_NUMPAD1 && vk <= VK_NUMPAD9) return static_cast<int>(SDL_SCANCODE_KP_1) + static_cast<int>(vk - VK_NUMPAD1);
    const UINT ch = MapVirtualKeyW(vk, MAPVK_VK_TO_CHAR) & 0x7FFFFFFF;
    if (ch >= 0x20)
        return static_cast<int>(SDL_GetScancodeFromKey(static_cast<SDL_Keycode>(std::towlower(static_cast<wint_t>(ch))), nullptr));
    return 0;
}
int PollGamepadBinding() {
    if (!SDL_WasInit(SDL_INIT_GAMEPAD)) return -1;
    int count = 0, found = -1;
    SDL_JoystickID* ids = SDL_GetGamepads(&count);
    for (int i = 0; ids && i < count && found < 0; ++i) {
        SDL_Gamepad* pad = SDL_OpenGamepad(ids[i]);
        if (!pad) continue;
        for (int b = 0; b < SDL_GAMEPAD_BUTTON_COUNT && found < 0; ++b)
            if (SDL_GetGamepadButton(pad, static_cast<SDL_GamepadButton>(b)) && mh3_control_map::IsValidPadValue(b)) found = b;
        const SDL_GamepadAxis triggers[] = {SDL_GAMEPAD_AXIS_LEFT_TRIGGER, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER};
        for (const SDL_GamepadAxis axis : triggers)
            if (found < 0 && SDL_GetGamepadAxis(pad, axis) > 16383) found = mh3_control_map::kAxisBase + static_cast<int>(axis);
        SDL_CloseGamepad(pad);
    }
    SDL_free(ids);
    return found;
}
void UpdateFovFromX(LONG x) {
    const int trackL = g_fovHitRect.left + 34;
    const int trackR = g_fovHitRect.right - 88;
    if (trackR <= trackL) return;
    const float ratio = std::clamp(float(x - trackL) / float(trackR - trackL), 0.0f, 1.0f);
    g_hunterFov = 35.0f + ratio * (90.0f - 35.0f);
    SaveGraphicsSettings();
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
}

void ImportModDialog() {
    HMODULE comdlg = LoadLibraryW(L"comdlg32.dll");
    if (!comdlg) return;
    using GetOpenFileNameFn = BOOL (WINAPI*)(LPOPENFILENAMEW);
    auto pGetOpenFileName = reinterpret_cast<GetOpenFileNameFn>(GetProcAddress(comdlg, "GetOpenFileNameW"));
    if (!pGetOpenFileName) {
        FreeLibrary(comdlg);
        return;
    }
    // Hide the overlay before opening the modal file dialog so they never overlap
    g_modalDialogOpen = true;
    if (g_panelWindow) ShowWindow(g_panelWindow, SW_HIDE);

    wchar_t filename[1024] = {0};
    OPENFILENAMEW ofn{};
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = g_hostWindow ? g_hostWindow : g_panelWindow;
    ofn.lpstrFilter = L"Archivos de Mod (*.zip)\0*.zip\0Todos los archivos (*.*)\0*.*\0";
    ofn.lpstrFile = filename;
    ofn.nMaxFile = 1024;
    ofn.lpstrTitle = L"Seleccionar archivo ZIP del Mod para Monster Hunter Tri";
    ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_NOCHANGEDIR;
    if (pGetOpenFileName(&ofn)) {
        std::string err;
        ModManager::ImportMod(filename, err);
    }
    FreeLibrary(comdlg);

    g_modalDialogOpen = false;
    if (g_panelVisible && g_panelWindow) {
        ShowWindow(g_panelWindow, SW_SHOWNORMAL);
        SetForegroundWindow(g_panelWindow);
        InvalidateRect(g_panelWindow, nullptr, FALSE);
    }
}

void Activate(int hit) {
    if (hit < 0) return;
    if (hit >= 100 && hit <= 106) {
        g_page = static_cast<Page>(hit - 100);
        g_hover = -1;
        g_capture.active = false;
        Repaint();
        return;
    }
    if (hit >= 9062 && hit <= 9073) { SaveManagerHandleHit(hit); return; }
    if (hit >= 9100 && hit < 9105) { SaveManagerHandleHit(hit); return; }

    if (hit == 8000) { ModManager::SetMasterEnabled(!ModManager::IsMasterEnabled()); Repaint(); return; }
    if (hit == 8001) { ImportModDialog(); Repaint(); return; }
    if (hit == 8002) { OpenFolder(ModManager::GetModsDirectory()); return; }
    if (hit == 8003) { ModManager::RefreshMods(); Repaint(); return; }
    if (hit >= 8100 && hit < 8200) {
        ModManager::ToggleMod(static_cast<size_t>(hit - 8100));
        Repaint();
        return;
    }
    if (hit >= 8200 && hit < 8300) {
        const size_t idx = static_cast<size_t>(hit - 8200);
        const auto& mods = ModManager::GetMods();
        if (idx < mods.size()) {
            OpenFolder(mods[idx].path);
        }
        return;
    }

    if (hit == ControlTabMando || hit == ControlTabTeclado) { g_controlsTab = hit - ControlTabMando; g_capture.active = false; g_hover = -1; Repaint(); return; }
    if (hit >= ControlKeyBase && hit < ControlKeyBase + mh3_control_map::kActionCount) { StartCapture(false, hit - ControlKeyBase); return; }
    if (hit >= ControlPadBase && hit < ControlPadBase + mh3_control_map::kPadActionCount) { StartCapture(true, hit - ControlPadBase); return; }
    if (hit == ControlResetKeys) { g_capture.active = false; mh3_control_map::ResetDevice(false); Repaint(); return; }
    if (hit == ControlResetPad) { g_capture.active = false; mh3_control_map::ResetDevice(true); Repaint(); return; }

    if (hit >= 210 && hit < 216) { ApplyRenderResolution(hit - 210); PositionPanel(); }
    else if (hit == 209) { ApplyNativeScreenResolution(); PositionPanel(); }
    else if (hit >= 270 && hit < 275) ChangeFrameLimitTo(hit - 270);
    else if (hit >= 350 && hit < 352) ChooseRenderer(hit - 350);

    else if (hit == 221) { g_hunterFov = std::clamp(g_hunterFov - 5.0f, 35.0f, 90.0f); SaveGraphicsSettings(); }
    else if (hit == 222) { g_hunterFov = std::clamp(g_hunterFov + 5.0f, 35.0f, 90.0f); SaveGraphicsSettings(); }

    else if (hit >= 300 && hit < 300 + int(Themes.size())) ApplyThemeSelection(hit - 300);
    else if (hit == 330) SetRounded(true);
    else if (hit == 331) SetRounded(false);
    else if (hit >= 340 && hit < 345) { g_fontIndex = hit - 340; SaveTheme(); }

    else if (hit >= 50 && hit < 55) ChooseLanguage(hit - 50);
    else if (hit >= 7000 && hit <= 7003) {
        LocalOnlineServer::SetMode(static_cast<OnlineNetMode>(hit - 7000));
        Repaint(); return;
    }
    else if (hit == 7010) { LocalOnlineServer::RestartServer(); Repaint(); return; }
    else if (hit >= 7020 && hit <= 7023) { LocalOnlineServer::AdjustClientIpOctet(hit - 7020, -10); Repaint(); return; }
    else if (hit >= 7024 && hit <= 7027) { LocalOnlineServer::AdjustClientIpOctet(hit - 7024, -1);  Repaint(); return; }
    else if (hit >= 7028 && hit <= 7031) { LocalOnlineServer::AdjustClientIpOctet(hit - 7028, +1);  Repaint(); return; }
    else if (hit >= 7032 && hit <= 7035) { LocalOnlineServer::AdjustClientIpOctet(hit - 7032, +10); Repaint(); return; }
    else if (hit == 7040) { LocalOnlineServer::AdjustClientPort(-100); Repaint(); return; }
    else if (hit == 7041) { LocalOnlineServer::AdjustClientPort(-1);   Repaint(); return; }
    else if (hit == 7042) { LocalOnlineServer::AdjustClientPort(+1);   Repaint(); return; }
    else if (hit == 7043) { LocalOnlineServer::AdjustClientPort(+100); Repaint(); return; }
    else if (hit == 7011) {
        const auto ips = LocalOnlineServer::GetLocalNetworkIPs();
        std::string clipIp = "127.0.0.1";
        for (const auto& entry : ips) {
            const auto pos = entry.find(' ');
            clipIp = (pos != std::string::npos) ? entry.substr(0, pos) : entry;
            if (clipIp != "127.0.0.1") break;
        }
        if (OpenClipboard(g_panelWindow)) {
            EmptyClipboard();
            HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, clipIp.size() + 1);
            if (hMem) {
                char* dst = static_cast<char*>(GlobalLock(hMem));
                if (dst) {
                    std::memcpy(dst, clipIp.c_str(), clipIp.size() + 1);
                    GlobalUnlock(hMem);
                    SetClipboardData(CF_TEXT, hMem);
                } else {
                    GlobalFree(hMem);
                }
            }
            CloseClipboard();
        }
        Repaint(); return;
    }
    else if (hit == 7051) { LocalOnlineServer::SetClientTarget("127.0.0.1", 18080); Repaint(); return; }
    else if (hit == 7052) { LocalOnlineServer::SetClientTarget("192.168.1.1", 18080); Repaint(); return; }
    else if (hit == 7053) { LocalOnlineServer::SetClientTarget("192.168.0.1", 18080); Repaint(); return; }
    else if (hit == 7054) {
        if (OpenClipboard(g_panelWindow)) {
            HANDLE hData = GetClipboardData(CF_TEXT);
            if (hData) {
                const char* text = static_cast<const char*>(GlobalLock(hData));
                if (text) {
                    int pa = 0, pb = 0, pc = 0, pd = 0, pport = LocalOnlineServer::GetClientPort();
                    const int matched = std::sscanf(text, " %d.%d.%d.%d:%d", &pa, &pb, &pc, &pd, &pport);
                    if (matched >= 4 && pa >= 0 && pa <= 255 && pb >= 0 && pb <= 255 && pc >= 0 && pc <= 255 && pd >= 0 && pd <= 255) {
                        char formatted[32];
                        std::snprintf(formatted, sizeof(formatted), "%d.%d.%d.%d", pa, pb, pc, pd);
                        LocalOnlineServer::SetClientTarget(formatted, (matched == 5 && pport > 0 && pport <= 65535) ? pport : LocalOnlineServer::GetClientPort());
                    }
                    GlobalUnlock(hData);
                }
            }
            CloseClipboard();
        }
        Repaint(); return;
    }
    else switch (hit) {
        case 20: ToggleFps(); break;
        case 22: ToggleVsync(); break;
        case 23: ToggleWide(); break;
        case 24: ToggleFit(); break;
        case 25: ResetSettings(); break;
        case 26: ToggleFullscreen(); break;
        case 27:
            g_msaaSamples = (g_msaaSamples == 1 ? 4 : 1);
            SetMsaaSetting(g_msaaSamples);
            SaveGraphicsSettings();
            break;
        case 28:
            g_customTexturesEnabled = !g_customTexturesEnabled;
            TextureReplacer::SetEnabled(g_customTexturesEnabled);
            SaveGraphicsSettings();
            break;
        case 29:
            OpenFolder(ExecutableDirectory() / L"textures" / L"RMHP08");
            break;
        case 30:
            g_bloomEnabled = !g_bloomEnabled;
            SaveGraphicsSettings();
            break;
        case 31:
            MH3PostProcess::SetMh3uMode(!MH3PostProcess::GetMh3uMode());
            SaveGraphicsSettings();
            break;
        case 60: RestartPort(); return;
        case 61: OpenFolder(SavesDirectory()); break;
        case 62: OpenFolder(ExecutableDirectory()); break;
        case 90: SetVisible(false); return;
        default: return;
    }
    Repaint();
}

LRESULT CALLBACK PanelProc(HWND w, UINT m, WPARAM wp, LPARAM lp) {
    if (m == WM_CAPTURECHANGED) {
        g_mouseSensitivityDragging = false;
        g_fovDragging = false;
    }
    if (m == WM_ACTIVATEAPP && wp == FALSE && !g_modalDialogOpen) {
        ShowWindow(w, SW_HIDE);
        if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
        return 0;
    }
    if (g_capture.active && g_page == Page::Controls) {
        if (m == WM_KEYDOWN || m == WM_SYSKEYDOWN) {
            if (wp == VK_ESCAPE) { CancelCapture(); return 0; }
            if (!g_capture.pad) {
                const int scancode = ScancodeFromKeyMessage(wp, lp);
                if (scancode > 0) BindCapture(scancode);
            }
            return 0;
        }
        if (m == WM_KEYUP || m == WM_SYSKEYUP || m == WM_CHAR || m == WM_SYSCHAR) return 0;
        if (!g_capture.pad) {
            int button = 0;
            if (m == WM_MBUTTONDOWN) button = mh3_control_map::kMouseBase + SDL_BUTTON_MIDDLE;
            else if (m == WM_RBUTTONDOWN) { button = mh3_control_map::kMouseBase + SDL_BUTTON_RIGHT; g_swallowRightUp = true; }
            else if (m == WM_XBUTTONDOWN) button = mh3_control_map::kMouseBase + (GET_XBUTTON_WPARAM(wp) == XBUTTON1 ? SDL_BUTTON_X1 : SDL_BUTTON_X2);
            else if (m == WM_LBUTTONDOWN) {
                const POINT p{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
                const RECT cell = CaptureCellRect();
                if (PtInRect(&cell, p)) {
                    if (GetTickCount64() - g_capture.startTick <= 250) return 0;
                    button = mh3_control_map::kMouseBase + SDL_BUTTON_LEFT;
                    g_swallowLeftUp = true;
                } else {
                    CancelCapture();
                }
            }
            if (button) {
                BindCapture(button);
                return m == WM_XBUTTONDOWN ? TRUE : 0;
            }
        }
    }
    if (g_page == Page::Controls && g_controlsTab == 1) {
        if (m == WM_LBUTTONDOWN) {
            POINT mousePoint{static_cast<LONG>(static_cast<short>(LOWORD(lp))), static_cast<LONG>(static_cast<short>(HIWORD(lp)))};
            if (PtInRect(&g_mouseSensitivityHitRect, mousePoint)) {
                g_mouseSensitivityDragging = true;
                SetCapture(w);
                UpdateMouseSensitivityFromX(mousePoint.x, w);
                return 0;
            }
        } else if (m == WM_MOUSEMOVE && g_mouseSensitivityDragging) {
            POINT mousePoint{static_cast<LONG>(static_cast<short>(LOWORD(lp))), static_cast<LONG>(static_cast<short>(HIWORD(lp)))};
            UpdateMouseSensitivityFromX(mousePoint.x, w);
            return 0;
        } else if (m == WM_LBUTTONUP && g_mouseSensitivityDragging) {
            POINT mousePoint{static_cast<LONG>(static_cast<short>(LOWORD(lp))), static_cast<LONG>(static_cast<short>(HIWORD(lp)))};
            UpdateMouseSensitivityFromX(mousePoint.x, w);
            g_mouseSensitivityDragging = false;
            if (GetCapture() == w) ReleaseCapture();
            (void)mh3_mouse_look_sensitivity::Save();
            return 0;
        }
    }
    if (g_page == Page::Graphics) {
        if (m == WM_LBUTTONDOWN) {
            POINT p{static_cast<LONG>(static_cast<short>(LOWORD(lp))), static_cast<LONG>(static_cast<short>(HIWORD(lp)))};
            if (PtInRect(&g_fovHitRect, p)) {
                g_fovDragging = true;
                SetCapture(w);
                UpdateFovFromX(p.x);
                return 0;
            }
        } else if (m == WM_MOUSEMOVE && g_fovDragging) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            UpdateFovFromX(x);
            return 0;
        } else if (m == WM_LBUTTONUP && g_fovDragging) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            UpdateFovFromX(x);
            g_fovDragging = false;
            if (GetCapture() == w) ReleaseCapture();
            return 0;
        }
    }
    switch (m) {
    case WM_ERASEBKGND: return 1;
    case WM_PAINT: PaintPanel(w); return 0;
    case WM_MOUSEMOVE: {
        TRACKMOUSEEVENT track{sizeof(track), TME_LEAVE, w, 0};
        TrackMouseEvent(&track);
        const POINT p{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        const int h = HitTest(p);
        if (h != g_hover) { g_hover = h; InvalidateRect(w, nullptr, FALSE); }
        return 0;
    }
    case WM_MOUSELEAVE: g_hover = -1; InvalidateRect(w, nullptr, FALSE); return 0;
    case WM_LBUTTONUP: {
        if (g_swallowLeftUp) { g_swallowLeftUp = false; return 0; }
        const POINT p{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        Activate(HitTest(p));
        return 0;
    }
    case WM_RBUTTONUP: {
        if (g_swallowRightUp) { g_swallowRightUp = false; return 0; }
        if (g_page == Page::Controls) {
            const POINT p{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
            const int h = HitTest(p);
            if (h >= ControlKeyBase && h < ControlKeyBase + mh3_control_map::kActionCount) {
                g_capture.active = false; mh3_control_map::ResetAction(false, h - ControlKeyBase); Repaint();
            } else if (h >= ControlPadBase && h < ControlPadBase + mh3_control_map::kPadActionCount) {
                g_capture.active = false; mh3_control_map::ResetAction(true, h - ControlPadBase); Repaint();
            }
        }
        return 0;
    }
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE || wp == VK_F1) { SetVisible(false); return 0; }
        if (wp == VK_TAB) { g_page = static_cast<Page>((int(g_page) + 1) % 7); InvalidateRect(w, nullptr, FALSE); return 0; }
        if (g_page == Page::Online && wp == 'V' && (GetKeyState(VK_CONTROL) & 0x8000)) { Activate(7054); return 0; }
        return 0;
    case WM_CLOSE: SetVisible(false); return 0;
    case WM_DPICHANGED: InvalidateRect(w, nullptr, FALSE); return 0;
    default: return DefWindowProcW(w, m, wp, lp);
    }
}

LRESULT CALLBACK HudProc(HWND w, UINT m, WPARAM wp, LPARAM lp) {
    (void)wp; (void)lp;
    switch (m) {
    case WM_NCHITTEST: return HTTRANSPARENT;
    case WM_ERASEBKGND: return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps{};
        HDC dc = BeginPaint(w, &ps);
        if (dc) {
            EnsureGdiPlus();
            const Theme& t = CurrentTheme();
            RRAlpha(dc, RECT{0, 0, HudW, HudH}, 20, t.sidebar, t.bgBot, 245, t.accent, 230, 1.8f);
            Gdiplus::Graphics g(dc);
            g.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);
            DrawGlowCircle(g, 19.0f, 21.0f, 10.0f, t.accent, 120);
            Gdiplus::SolidBrush dotB(GDICol(t.accent, 255));
            g.FillEllipse(&dotB, 14.0f, 16.0f, 10.0f, 10.0f);
            std::wstring label = L"FPS  --";
            if (g_fps > 0.0) label = L"FPS  " + std::to_wstring(static_cast<unsigned>(g_fps + 0.5));
            Text(dc, 32, 1, HudW - 38, HudH - 2, label.c_str(), 13, t.ink, FW_BOLD, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
            EndPaint(w, &ps);
        }
        return 0;
    }
    case WM_MOUSEACTIVATE: return MA_NOACTIVATE;
    default: return DefWindowProcW(w, m, wp, lp);
    }
}

bool RegisterWindowClass(const wchar_t* name, WNDPROC proc) {
    WNDCLASSEXW c{};
    c.cbSize = sizeof(c); c.lpfnWndProc = proc; c.hInstance = GetModuleHandleW(nullptr);
    c.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512)); c.hbrBackground = nullptr; c.lpszClassName = name;
    if (RegisterClassExW(&c)) return true;
    return GetLastError() == ERROR_CLASS_ALREADY_EXISTS;
}

void EnsureWindows() {
    if (!g_hostWindow || !IsWindow(g_hostWindow)) return;
    HINSTANCE inst = GetModuleHandleW(nullptr);
    // Owned by g_hostWindow WITHOUT WS_EX_TOPMOST so it never overlaps external Windows apps or dialogs
    if (!g_panelWindow && RegisterWindowClass(OverlayClassName, PanelProc)) {
        g_panelWindow = CreateWindowExW(WS_EX_TOOLWINDOW | WS_EX_LAYERED, OverlayClassName, L"OceanTriRecomp Studio", WS_POPUP,
                                        CW_USEDEFAULT, CW_USEDEFAULT, PanelW, PanelH, g_hostWindow, nullptr, inst, nullptr);
        if (g_panelWindow) { ShowWindow(g_panelWindow, SW_HIDE); ApplyWindowStyle(); }
    }
    if (!g_hudWindow && RegisterWindowClass(HudClassName, HudProc)) {
        g_hudWindow = CreateWindowExW(WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE, HudClassName, L"MH3 FPS", WS_POPUP,
                                      CW_USEDEFAULT, CW_USEDEFAULT, HudW, HudH, g_hostWindow, nullptr, inst, nullptr);
        if (g_hudWindow) { ApplyWindowStyle(); ShowWindow(g_hudWindow, SW_HIDE); }
    }
}

void DispatchWindowMessages(HWND w) {
    if (!w) return;
    MSG m{};
    while (PeekMessageW(&m, w, 0, 0, PM_REMOVE)) { TranslateMessage(&m); DispatchMessageW(&m); }
}
} // namespace

void AttachWindow(SDL_Window* window) noexcept {
    g_sdlWindow = window; g_hostWindow = nullptr;
    if (window) {
        SDL_PropertiesID p = SDL_GetWindowProperties(window);
        g_hostWindow = static_cast<HWND>(SDL_GetPointerProperty(p, SDL_PROP_WINDOW_WIN32_HWND_POINTER, nullptr));
    }
}
void InitializeRuntimeSettings() noexcept {
    EnsureGdiPlus();
    g_showFps = RuntimeConfigFile::ShowFps(true);
    LoadTheme(); LoadGraphicsSettings(); EnsureWindows();
    if (g_hudWindow) {
        if (g_showFps && IsHostWindowActive()) {
            PositionHud();
            InvalidateRect(g_hudWindow, nullptr, TRUE);
        } else ShowWindow(g_hudWindow, SW_HIDE);
    }
}
void HandleEvents(const AuroraEvent* events) noexcept {
    if (!events) return;
    for (const AuroraEvent* e = events; e->type != AURORA_NONE; ++e) {
        if (e->type != AURORA_SDL_EVENT || e->sdl.type != SDL_EVENT_KEY_DOWN || e->sdl.key.repeat) continue;
        const SDL_Keycode k = e->sdl.key.key;
        if (k == SDLK_ESCAPE || k == SDLK_F1) { EnsureWindows(); SetVisible(!g_panelVisible); }
    }
}
void Pump() noexcept {
    EnsureWindows();
    DispatchWindowMessages(g_panelWindow);
    DispatchWindowMessages(g_hudWindow);

    const bool hostActive = IsHostWindowActive();
    if (!hostActive) {
        if (g_panelWindow && IsWindowVisible(g_panelWindow)) ShowWindow(g_panelWindow, SW_HIDE);
        if (g_hudWindow && IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_HIDE);
        return;
    }

    if (g_panelVisible && g_panelWindow && !IsWindowVisible(g_panelWindow)) {
        ShowWindow(g_panelWindow, SW_SHOWNORMAL);
        PositionPanel();
        InvalidateRect(g_panelWindow, nullptr, FALSE);
    }

    if (g_panelVisible && g_capture.active && g_capture.pad) {
        const int binding = PollGamepadBinding();
        if (binding < 0) g_capture.padArmed = true;
        else if (g_capture.padArmed) BindCapture(binding);
    }
    if (g_showFps && g_hudWindow) {
        if (g_panelVisible) {
            if (IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_HIDE);
        } else {
            PositionHud();
        }
    } else if (g_hudWindow && IsWindowVisible(g_hudWindow)) {
        ShowWindow(g_hudWindow, SW_HIDE);
    }

    const auto now = std::chrono::steady_clock::now();
    static uint64_t lastCount = MH3FrameRateControl::LogicalFrameCount();
    static auto lastStamp = now;
    const double elapsed = std::chrono::duration<double>(now - lastStamp).count();
    if (elapsed >= 0.5) {
        const uint64_t count = MH3FrameRateControl::LogicalFrameCount();
        g_fps = double(count - lastCount) / elapsed;
        lastCount = count; lastStamp = now;
        if (g_showFps && g_hudWindow && !g_panelVisible) { PositionHud(); InvalidateRect(g_hudWindow, nullptr, TRUE); UpdateWindow(g_hudWindow); }
        else if (g_panelVisible && g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
    }
    if (g_panelVisible) PositionPanel();
}
bool IsOpen() noexcept { return g_panelVisible; }
void Draw() noexcept {}
bool StartupScreenVisible() noexcept { return false; }
void NotifyStrapInputAccepted() noexcept {}
void AdvancePresentedFrame() noexcept { EnsureWindows(); }
void ReleaseControllers() noexcept {
    if (g_panelWindow) ShowWindow(g_panelWindow, SW_HIDE);
    if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
    g_panelVisible = false;
}
} // namespace settings_overlay
#endif
