#include "settings_overlay.h"


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
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "save_manager.h"
#include <sstream>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <shlobj.h>
#include <shobjidl.h>
#include <objbase.h>
#include <windowsx.h>
#include <dwmapi.h>
#include <shellapi.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_video.h>
#include <dolphin/vi.h>

void aurora_enable_vsync(bool enabled);
namespace settings_overlay {
namespace {
constexpr wchar_t OverlayClassName[] = L"MH3RecompSettingsOverlayV4";
constexpr wchar_t HudClassName[] = L"MH3RecompFpsHudV4";
constexpr int PanelW = 760, PanelH = 548, SidebarW = 196;
constexpr int ContentX = 224, ContentR = 736;
constexpr int HudW = 148, HudH = 42;
constexpr std::array<const wchar_t*, 5> FontFaces{{L"Segoe UI", L"Consolas", L"Bahnschrift", L"Arial", L"Verdana"}};
constexpr std::array<int, 5> FrameRateValues{{30, 45, 60, 90, 120}};
constexpr std::array<float, 6> RenderScales{{540.0f/448.0f, 720.0f/448.0f, 900.0f/448.0f, 1080.0f/448.0f, 1440.0f/448.0f, 2160.0f/448.0f}};
constexpr std::array<const char*, 6> RenderScaleEnvironmentValues{{"1.2053571", "1.6071429", "2.0089286", "2.4107143", "3.2142857", "4.8214286"}};

struct Theme {
    const wchar_t* name;
    const wchar_t* tag;
    COLORREF bg, panel, card, hover, ink, muted, accent, border;
    int motif; // 0 pergamino, 1 tribal, 2 olas, 3 escamas, 4 puntos, 5 rejilla, 6 plumas, 7 anillos, 8 garras, 9 burbujas, 10 minimal
    bool light;
};

constexpr std::array<Theme, 11> Themes{{
    {L"Default", L"Pergamino Guilda", RGB(230,214,171), RGB(246,233,195), RGB(236,219,177), RGB(220,197,145), RGB(73,49,25), RGB(130,96,54), RGB(143,81,31), RGB(188,151,86), 0, true},
    {L"Tri Experience", L"Tribal de Tri", RGB(34,25,18), RGB(48,36,26), RGB(74,70,46), RGB(98,93,58), RGB(246,234,190), RGB(194,178,124), RGB(236,152,44), RGB(122,100,54), 1, false},
    {L"Laguna de Moga", L"Aguas cristalinas", RGB(7,27,38), RGB(11,40,55), RGB(17,55,73), RGB(26,76,98), RGB(226,248,252), RGB(130,185,200), RGB(44,212,214), RGB(32,102,124), 2, false},
    {L"Rathalos", L"Brasas y escamas", RGB(30,12,16), RGB(44,18,24), RGB(64,26,34), RGB(88,36,44), RGB(255,236,226), RGB(214,160,146), RGB(255,112,60), RGB(128,56,60), 3, false},
    {L"Barroth", L"Barro y hueso", RGB(41,34,28), RGB(55,47,39), RGB(75,65,54), RGB(98,85,70), RGB(240,232,214), RGB(184,170,146), RGB(222,198,150), RGB(112,98,80), 4, false},
    {L"Lagiacrus", L"Abismo electrico", RGB(8,14,30), RGB(12,22,46), RGB(18,32,64), RGB(28,48,94), RGB(228,240,255), RGB(140,164,205), RGB(0,200,255), RGB(36,64,120), 5, false},
    {L"Qurupeco", L"Selva y plumas", RGB(14,32,24), RGB(20,45,34), RGB(29,63,47), RGB(40,86,64), RGB(232,250,232), RGB(150,196,160), RGB(244,210,60), RGB(62,122,86), 6, false},
    {L"Ceadeus", L"Aurora cosmica", RGB(15,9,30), RGB(23,14,46), RGB(34,21,68), RGB(50,32,98), RGB(246,236,255), RGB(180,160,214), RGB(236,96,222), RGB(94,62,150), 7, false},
    {L"Deviljho", L"Voraz y acido", RGB(8,16,10), RGB(13,26,16), RGB(20,40,25), RGB(30,60,36), RGB(222,255,226), RGB(124,178,134), RGB(112,255,74), RGB(44,100,52), 8, false},
    {L"Espuma Marina", L"Brisa clara", RGB(214,236,238), RGB(238,249,249), RGB(222,241,243), RGB(196,226,230), RGB(20,56,66), RGB(76,118,128), RGB(0,150,168), RGB(150,198,206), 9, true},
    {L"Obsidiana", L"Negro y oro", RGB(10,10,11), RGB(17,17,19), RGB(28,28,31), RGB(42,42,47), RGB(240,240,242), RGB(150,150,158), RGB(232,190,92), RGB(60,60,66), 10, false}
}};

enum class Page : uint8_t { Graphics, Appearance, System, Controls, SaveManager };
struct Hit { RECT r; int id; };

SDL_Window* g_sdlWindow = nullptr;
HWND g_hostWindow = nullptr, g_panelWindow = nullptr, g_hudWindow = nullptr;
bool g_panelVisible = false, g_showFps = true, g_wide = true, g_fitScreen = false;
bool g_rounded = true;
Page g_page = Page::Graphics;
int g_hover = -1, g_themeIndex = 0, g_fontIndex = 0;
int g_msaaSamples = 1;
int g_rendererIndex = 0; // 0 = Vulkan (ANGLE), 1 = OpenGL ES
bool g_vsync = true;
int g_fpsLimit = 60;
size_t g_resolutionIndex = 0;
double g_fps = 0.0;
std::vector<Hit> g_hits;
RECT g_mouseSensitivityHitRect{268, 470, 692, 502};
bool g_mouseSensitivityDragging = false;
void UpdateMouseSensitivityFromX(LONG x, HWND hwnd) {
    const int clampedX = std::clamp<int>(static_cast<int>(x), 280, 680);
    const int percent = 5 + ((clampedX - 280) * 95 + 200) / 400;
    mh3_mouse_look_sensitivity::SetPercent(percent);
    InvalidateRect(hwnd, nullptr, FALSE);
}

int FrameRateIndex() {
    const auto it = std::find(FrameRateValues.begin(), FrameRateValues.end(), g_fpsLimit);
    return it == FrameRateValues.end() ? 2 : static_cast<int>(it - FrameRateValues.begin());
}
const wchar_t* CurrentFontFace() { return FontFaces[static_cast<size_t>(std::clamp(g_fontIndex, 0, int(FontFaces.size()) - 1))]; }
const Theme& CurrentTheme() { return Themes[static_cast<size_t>(std::clamp(g_themeIndex, 0, int(Themes.size()) - 1))]; }

COLORREF Mix(COLORREF a, COLORREF b, int pct) {
    const auto m = [pct](int x, int y) { return (x * (100 - pct) + y * pct) / 100; };
    return RGB(m(GetRValue(a), GetRValue(b)), m(GetGValue(a), GetGValue(b)), m(GetBValue(a), GetBValue(b)));
}
COLORREF OnAccent(const Theme& t) {
    const int l = (299 * GetRValue(t.accent) + 587 * GetGValue(t.accent) + 114 * GetBValue(t.accent)) / 1000;
    return l > 150 ? RGB(28, 22, 16) : RGB(255, 255, 255);
}

// ---------------------------------------------------------------- ajustes en disco
std::filesystem::path ExecutableDirectory() {
    wchar_t modulePath[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, modulePath, static_cast<DWORD>(32768));
    if (length > 0 && length < 32768)
        return std::filesystem::path(std::wstring(modulePath, length)).parent_path();
    return std::filesystem::current_path();
}
std::filesystem::path ThemeSettingsPath() { return ExecutableDirectory() / L"MH3UI.theme.v3"; }
std::filesystem::path GraphicsSettingsPath() { return ExecutableDirectory() / L"MH3UI.graphics"; }
void LoadGraphicsSettings() {
    int samples = 1, vsync = 1, renderResolution = 0, fpsLimit = 60, rendererIndex = 0;
    std::ifstream in(GraphicsSettingsPath());
    if (in >> samples >> vsync) {
        g_msaaSamples = 1;
        g_vsync = vsync != 0;
        if (in >> renderResolution) g_resolutionIndex = static_cast<size_t>(std::clamp(renderResolution, 0, 5));
        if (in >> fpsLimit && std::find(FrameRateValues.begin(), FrameRateValues.end(), fpsLimit) != FrameRateValues.end())
            g_fpsLimit = fpsLimit;
        if (in >> rendererIndex) g_rendererIndex = std::clamp(rendererIndex, 0, 1);
    }
    MH3FrameRateControl::SetTargetFPS(g_fpsLimit);
    aurora_enable_vsync(g_vsync);
}
void SaveGraphicsSettings() {
    std::ofstream out(GraphicsSettingsPath(), std::ios::trunc);
    if (out) out << g_msaaSamples << ' ' << (g_vsync ? 1 : 0) << ' ' << g_resolutionIndex << ' ' << g_fpsLimit << ' ' << g_rendererIndex << '\n';
}
void LoadTheme() {
    std::ifstream in(ThemeSettingsPath());
    int theme = 0, font = 0, rounded = 1;
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
// Se ejecuta antes de main(): el juego lee el idioma una sola vez al arrancar.
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
    // Espera ~2 s a que este proceso termine y vuelve a abrir el port con los mismos argumentos.
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

// ---------------------------------------------------------------- dibujo base
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
void FillSolid(HDC dc, RECT r, COLORREF color) {
    HBRUSH b = CreateSolidBrush(color);
    if (b) { ::FillRect(dc, &r, b); DeleteObject(b); }
}
void Line(HDC dc, int x1, int y1, int x2, int y2, COLORREF color, int width = 1) {
    HPEN p = CreatePen(PS_SOLID, width, color);
    if (!p) return;
    HGDIOBJ old = SelectObject(dc, p);
    MoveToEx(dc, x1, y1, nullptr);
    LineTo(dc, x2, y2);
    SelectObject(dc, old);
    DeleteObject(p);
}
void DrawTextLine(HDC dc, RECT r, const wchar_t* text, int size, COLORREF color, int weight, UINT fmt, const wchar_t* face) {
    size = std::max(size, 10);
    HFONT f = CreateFontW(-size, 0, 0, 0, weight, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                          ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, face ? face : CurrentFontFace());
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
// Rectangulo con esquinas segun el estilo de bordes elegido.
void RR(HDC dc, RECT r, int radius, COLORREF fill, COLORREF edge, bool border = true, int penWidth = 1) {
    HBRUSH b = CreateSolidBrush(fill);
    HPEN p = border ? CreatePen(PS_SOLID, penWidth, edge) : static_cast<HPEN>(GetStockObject(NULL_PEN));
    if (!b || !p) { if (b) DeleteObject(b); if (border && p) DeleteObject(p); return; }
    HGDIOBJ ob = SelectObject(dc, b), op = SelectObject(dc, p);
    const int d = g_rounded ? radius * 2 : 0;
    RoundRect(dc, r.left, r.top, r.right, r.bottom, d, d);
    SelectObject(dc, ob); SelectObject(dc, op);
    DeleteObject(b);
    if (border) DeleteObject(p);
}
void Outline(HDC dc, RECT r, int radius, COLORREF edge, int penWidth = 1) {
    HPEN p = CreatePen(PS_SOLID, penWidth, edge);
    if (!p) return;
    HGDIOBJ ob = SelectObject(dc, GetStockObject(NULL_BRUSH)), op = SelectObject(dc, p);
    const int d = g_rounded ? radius * 2 : 0;
    RoundRect(dc, r.left, r.top, r.right, r.bottom, d, d);
    SelectObject(dc, ob); SelectObject(dc, op);
    DeleteObject(p);
}
void DrawCard(HDC dc, RECT r, COLORREF fill, COLORREF edge, int radius = 14, bool shadow = true) {
    const Theme& t = CurrentTheme();
    if (shadow) {
        RECT s = r;
        OffsetRect(&s, 0, 2);
        RR(dc, s, radius, Mix(t.panel, RGB(0, 0, 0), t.light ? 9 : 34), 0, false);
    }
    RR(dc, r, radius, fill, edge, true);
    if (t.motif <= 1) { // pergamino y Tri: doble filete interior
        RECT in = r;
        InflateRect(&in, -3, -3);
        Outline(dc, in, std::max(2, radius - 3), Mix(fill, edge, 55));
    }
}
void DrawSwitch(HDC dc, RECT r, bool on, const Theme& t) {
    const int h = r.bottom - r.top;
    RR(dc, r, h / 2, on ? t.accent : Mix(t.card, t.border, 70), on ? t.accent : t.border);
    const int d = h - 6;
    const int x = on ? r.right - d - 3 : r.left + 3;
    RR(dc, RECT{x, r.top + 3, x + d, r.top + 3 + d}, d / 2, on ? OnAccent(t) : t.panel, on ? OnAccent(t) : t.muted);
}
void DrawIcon(HDC dc, int kind, int cx, int cy, COLORREF c) {
    HPEN pen = CreatePen(PS_SOLID, 2, c);
    if (!pen) return;
    HGDIOBJ op = SelectObject(dc, pen), ob = SelectObject(dc, GetStockObject(NULL_BRUSH));
    switch (kind) {
    case 0: // pantalla
        Rectangle(dc, cx - 9, cy - 8, cx + 9, cy + 4);
        MoveToEx(dc, cx, cy + 4, nullptr); LineTo(dc, cx, cy + 9);
        MoveToEx(dc, cx - 5, cy + 9, nullptr); LineTo(dc, cx + 5, cy + 9);
        break;
    case 1: // paleta
        Ellipse(dc, cx - 9, cy - 9, cx + 9, cy + 9);
        for (int k = 0; k < 3; ++k) {
            const int dx = int(5 * std::cos(0.9 + k * 1.6)), dy = int(5 * std::sin(0.9 + k * 1.6));
            Ellipse(dc, cx + dx - 1, cy + dy - 1, cx + dx + 1, cy + dy + 1);
        }
        break;
    case 2: // engranaje
        Ellipse(dc, cx - 4, cy - 4, cx + 4, cy + 4);
        for (int k = 0; k < 8; ++k) {
            const double a = k * 0.7854;
            MoveToEx(dc, cx + int(7 * std::cos(a)), cy + int(7 * std::sin(a)), nullptr);
            LineTo(dc, cx + int(10 * std::cos(a)), cy + int(10 * std::sin(a)));
        }
        break;
    default: // mando
        Rectangle(dc, cx - 10, cy - 6, cx + 10, cy + 6);
        MoveToEx(dc, cx - 6, cy, nullptr); LineTo(dc, cx - 2, cy);
        MoveToEx(dc, cx - 4, cy - 2, nullptr); LineTo(dc, cx - 4, cy + 2);
        Ellipse(dc, cx + 3, cy - 3, cx + 5, cy - 1);
        Ellipse(dc, cx + 6, cy, cx + 8, cy + 2);
        break;
    }
    SelectObject(dc, ob); SelectObject(dc, op);
    DeleteObject(pen);
}
void DrawDiamond(HDC dc, int cx, int cy, int r, COLORREF c) {
    Line(dc, cx - r, cy, cx, cy - r, c); Line(dc, cx, cy - r, cx + r, cy, c);
    Line(dc, cx + r, cy, cx, cy + r, c); Line(dc, cx, cy + r, cx - r, cy, c);
}

// Textura propia de cada tema (solo en la zona de contenido).
void DrawTexture(HDC dc, const Theme& t) {
    const COLORREF ink = Mix(t.panel, t.border, t.light ? 42 : 38);
    const COLORREF soft = Mix(t.panel, t.border, 22);
    IntersectClipRect(dc, SidebarW + 1, 1, PanelW - 1, PanelH - 1);
    HPEN pen = CreatePen(PS_SOLID, 1, ink);
    if (!pen) { SelectClipRgn(dc, nullptr); return; }
    HGDIOBJ op = SelectObject(dc, pen), ob = SelectObject(dc, GetStockObject(NULL_BRUSH));
    switch (t.motif) {
    case 0: // pergamino: renglones y sello circular
        for (int y = 14; y < PanelH - 8; y += 13) {
            const int d = (y * 7) % 19;
            MoveToEx(dc, SidebarW + 14 + d, y, nullptr); LineTo(dc, PanelW - 14 - d / 3, y);
        }
        for (int i = 0; i < 8; ++i) { const int x = 250 + (i % 4) * 110, y = 120 + (i / 4) * 200; Arc(dc, x, y, x + 31, y + 31, x + 4, y + 16, x + 16, y + 3); }
        Ellipse(dc, 596, 20, 726, 150); Ellipse(dc, 606, 30, 716, 140);
        MoveToEx(dc, 661, 33, nullptr); LineTo(dc, 661, 137);
        MoveToEx(dc, 609, 85, nullptr); LineTo(dc, 713, 85);
        break;
    case 1: // tribal: rombos entrelazados
        for (int x = SidebarW - PanelH; x < PanelW; x += 44) {
            MoveToEx(dc, x, 0, nullptr); LineTo(dc, x + PanelH, PanelH);
            MoveToEx(dc, x, PanelH, nullptr); LineTo(dc, x + PanelH, 0);
        }
        break;
    case 2: // olas
        for (int y = 30; y < PanelH; y += 28) {
            MoveToEx(dc, SidebarW, y, nullptr);
            for (int x = SidebarW; x <= PanelW; x += 6) LineTo(dc, x, y + int(4 * std::sin((x + y) * 0.12)));
        }
        break;
    case 3: // escamas
        for (int y = 10; y < PanelH; y += 18)
            for (int x = SidebarW + ((y / 18) % 2) * 12; x < PanelW; x += 24)
                Arc(dc, x, y, x + 24, y + 22, x, y + 11, x + 12, y);
        break;
    case 4: // barro: puntos irregulares
        for (int y = 12; y < PanelH; y += 22)
            for (int x = SidebarW + 10 + ((y / 22) % 2) * 11; x < PanelW; x += 22) {
                const int r = 1 + ((x * 7 + y * 13) % 3);
                Ellipse(dc, x, y, x + r * 2, y + r * 2);
            }
        break;
    case 5: // rejilla tecnica
        for (int x = SidebarW + 12; x < PanelW; x += 34) Line(dc, x, 0, x, PanelH, soft);
        for (int y = 10; y < PanelH; y += 34) Line(dc, SidebarW, y, PanelW, y, soft);
        for (int x = SidebarW + 12; x < PanelW; x += 68)
            for (int y = 10; y < PanelH; y += 68) Rectangle(dc, x - 2, y - 2, x + 3, y + 3);
        break;
    case 6: // plumas
        for (int x = SidebarW - PanelH / 2; x < PanelW; x += 20) {
            MoveToEx(dc, x, PanelH, nullptr); LineTo(dc, x + PanelH / 2, 0);
            if ((x / 20) % 3 == 0) for (int k = 0; k < 6; ++k) { const int yy = 40 + k * 80; const int xx = x + (PanelH - yy) / 2; Line(dc, xx, yy, xx + 10, yy + 6, ink); }
        }
        break;
    case 7: // anillos cosmicos
        for (int i = 0; i < 11; ++i) {
            const int rx = 30 + i * 28, ry = 20 + i * 18;
            Ellipse(dc, 690 - rx, 90 - ry, 690 + rx, 90 + ry);
        }
        for (int i = 0; i < 6; ++i) { const int rx = 20 + i * 24, ry = 14 + i * 14; Ellipse(dc, 270 - rx, 520 - ry, 270 + rx, 520 + ry); }
        break;
    case 8: { // garras
        HPEN claw = CreatePen(PS_SOLID, 3, ink);
        if (claw) {
            HGDIOBJ prev = SelectObject(dc, claw);
            const int sx[] = {640, 420, 300}, sy[] = {50, 300, 80};
            for (int c = 0; c < 3; ++c)
                for (int j = 0; j < 4; ++j) { MoveToEx(dc, sx[c] + j * 16, sy[c], nullptr); LineTo(dc, sx[c] + j * 16 - 44, sy[c] + 150); }
            SelectObject(dc, prev);
            DeleteObject(claw);
        }
        break;
    }
    case 9: // burbujas
        for (int i = 0; i < 46; ++i) {
            const int r = 4 + (i % 4) * 3;
            const int x = SidebarW + 12 + (i * 97) % 500, y = 12 + (i * 53) % (PanelH - 30);
            Ellipse(dc, x, y, x + r * 2, y + r * 2);
            Line(dc, x + 3, y + r - 1, x + 3, y + r + 2, soft);
        }
        break;
    default: { // minimal: esquinas
        const COLORREF a = Mix(t.panel, t.accent, 55);
        const int x0 = SidebarW + 12, x1 = PanelW - 12, y0 = 12, y1 = PanelH - 12;
        Line(dc, x0, y0, x0 + 26, y0, a, 2); Line(dc, x0, y0, x0, y0 + 26, a, 2);
        Line(dc, x1, y0, x1 - 26, y0, a, 2); Line(dc, x1, y0, x1, y0 + 26, a, 2);
        Line(dc, x0, y1, x0 + 26, y1, a, 2); Line(dc, x0, y1, x0, y1 - 26, a, 2);
        Line(dc, x1, y1, x1 - 26, y1, a, 2); Line(dc, x1, y1, x1, y1 - 26, a, 2);
        break;
    }
    }
    SelectObject(dc, ob); SelectObject(dc, op);
    DeleteObject(pen);
    SelectClipRgn(dc, nullptr);
}

void DrawKeyChip(HDC dc, RECT r, const wchar_t* label, const Theme& t) {
    RR(dc, r, 8, t.card, t.border);
    Text(dc, r.left + 4, r.top, r.right - r.left - 8, r.bottom - r.top, label, 11, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}
void DrawSidebar(HDC dc, const Theme& t) {
    FillSolid(dc, RECT{0, 0, SidebarW, PanelH}, t.bg);
    Line(dc, SidebarW, 0, SidebarW, PanelH, t.border, 1);
    RR(dc, RECT{22, 22, 66, 66}, 22, t.accent, t.accent);
    Text(dc, 22, 22, 44, 44, L"MH", 15, OnAccent(t), FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    Text(dc, 76, 24, 114, 16, L"MONSTER HUNTER", 10, t.accent, FW_BOLD);
    Text(dc, 76, 40, 114, 26, L"Tri · Recomp", 16, t.ink, FW_SEMIBOLD);
    const wchar_t* names[] = {L"Gráficos", L"Apariencia", L"Sistema", L"Controles", L"Gestor de Guardados" };
    for (int i = 0; i < 5; ++i) {
        const RECT r{14, 104 + i * 68, SidebarW - 14, 104 + i * 68 + 52};
        const bool active = int(g_page) == i, over = g_hover == 100 + i;
        const int mid = (r.top + r.bottom) / 2;
        if (t.motif == 1) { // barra olivo con rombo, como el menu de Tri
            RR(dc, r, 6, active ? t.hover : t.card, active ? t.accent : t.border, true, active ? 2 : 1);
            FillSolid(dc, RECT{r.left + 1, r.top + 1, r.left + 9, r.bottom - 1}, Mix(t.card, RGB(0, 0, 0), 45));
            DrawDiamond(dc, r.right - 16, mid, 5, t.accent);
                    if (i == 4) {
            const COLORREF iconColor = active ? t.accent : t.muted;
            HPEN saveIconPen = CreatePen(PS_SOLID, 2, iconColor);
            HGDIOBJ saveIconOldPen = SelectObject(dc, saveIconPen);
            HGDIOBJ saveIconOldBrush = SelectObject(dc, GetStockObject(NULL_BRUSH));
            Rectangle(dc, r.left + 20, mid - 8, r.left + 36, mid + 8);
            Line(dc, r.left + 23, mid - 6, r.left + 23, mid - 1, iconColor, 2);
            Line(dc, r.left + 24, mid + 2, r.left + 32, mid + 2, iconColor, 2);
            Line(dc, r.left + 24, mid + 5, r.left + 32, mid + 5, iconColor, 2);
            SelectObject(dc, saveIconOldBrush);
            SelectObject(dc, saveIconOldPen);
            DeleteObject(saveIconPen);
        } else {
            DrawIcon(dc, i, r.left + 28, mid, active ? t.accent : t.muted);
        }
        } else {
            if (active) {
                RR(dc, r, 12, Mix(t.bg, t.accent, 20), 0, false);
                RR(dc, RECT{r.left, r.top + 10, r.left + 4, r.bottom - 10}, 2, t.accent, t.accent);
            } else if (over) {
                RR(dc, r, 12, Mix(t.bg, t.accent, 9), 0, false);
            }
                    if (i == 4) {
            const COLORREF iconColor = active ? t.accent : t.muted;
            HPEN saveIconPen = CreatePen(PS_SOLID, 2, iconColor);
            HGDIOBJ saveIconOldPen = SelectObject(dc, saveIconPen);
            HGDIOBJ saveIconOldBrush = SelectObject(dc, GetStockObject(NULL_BRUSH));
            Rectangle(dc, r.left + 20, mid - 8, r.left + 36, mid + 8);
            Line(dc, r.left + 23, mid - 6, r.left + 23, mid - 1, iconColor, 2);
            Line(dc, r.left + 24, mid + 2, r.left + 32, mid + 2, iconColor, 2);
            Line(dc, r.left + 24, mid + 5, r.left + 32, mid + 5, iconColor, 2);
            SelectObject(dc, saveIconOldBrush);
            SelectObject(dc, saveIconOldPen);
            DeleteObject(saveIconPen);
        } else {
            DrawIcon(dc, i, r.left + 28, mid, active ? t.accent : t.muted);
        }
        }
        Text(dc, r.left + 50, r.top, r.right - r.left - 66, r.bottom - r.top, names[i], 13, active || over ? t.ink : t.muted, active ? FW_BOLD : FW_SEMIBOLD);
        AddHit(r, 100 + i);
    }
    DrawKeyChip(dc, RECT{20, 478, 104, 502}, L"ESC / F1", t);
    Text(dc, 20, 508, 160, 18, L"Volver al juego", 11, t.muted);
}
void DrawHeader(HDC dc, const Theme& t, const wchar_t* title, const wchar_t* sub) {
    Text(dc, ContentX, 18, 360, 34, title, 26, t.ink, FW_BOLD);
    Text(dc, ContentX, 54, 380, 20, sub, 12, t.muted);
    if (g_showFps) {
        RECT chip{ContentR - 144, 26, ContentR - 44, 50};
        DrawCard(dc, chip, t.card, t.border, 12, false);
        std::wstring label = L"FPS  --";
        if (g_fps > 0.0) label = L"FPS  " + std::to_wstring(static_cast<unsigned>(g_fps + 0.5));
        Text(dc, chip.left, chip.top, chip.right - chip.left, 24, label.c_str(), 12, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    }
    const RECT close{ContentR - 32, 22, ContentR, 54};
    RR(dc, close, 10, g_hover == 90 ? t.hover : t.card, t.border);
    Line(dc, close.left + 11, close.top + 11, close.right - 11, close.bottom - 11, t.ink, 2);
    Line(dc, close.right - 11, close.top + 11, close.left + 11, close.bottom - 11, t.ink, 2);
    AddHit(close, 90);
    // Filete inferior: en Tri, una cadena de rombos.
    Line(dc, ContentX, 86, ContentR, 86, t.border, 1);
    if (t.motif == 1)
        for (int x = ContentX + 8; x < ContentR; x += 22) DrawDiamond(dc, x, 86, 4, t.accent);
}
void DrawToggleCard(HDC dc, const Theme& t, RECT r, int id, const wchar_t* title, const wchar_t* sub, bool on) {
    DrawCard(dc, r, g_hover == id ? t.hover : t.card, t.border, 14);
    const int h = r.bottom - r.top;
    Text(dc, r.left + 18, r.top + 11, r.right - r.left - 92, 20, title, 14, t.ink, FW_SEMIBOLD);
    Text(dc, r.left + 18, r.top + 33, r.right - r.left - 92, 18, sub, 11, t.muted);
    DrawSwitch(dc, RECT{r.right - 66, r.top + (h - 24) / 2, r.right - 18, r.top + (h - 24) / 2 + 24}, on, t);
    AddHit(r, id);
}
void DrawChips(HDC dc, const Theme& t, int x, int y, int w, int h, const wchar_t* const* labels, int count, int selected, int idBase,
               const wchar_t* const* faces = nullptr) {
    const int gap = 6, cw = (w - gap * (count - 1)) / count;
    for (int i = 0; i < count; ++i) {
        const RECT r{x + i * (cw + gap), y, x + i * (cw + gap) + cw, y + h};
        const bool sel = i == selected, over = g_hover == idBase + i;
        RR(dc, r, 10, sel ? t.accent : (over ? t.hover : t.panel), sel ? t.accent : t.border);
        Text(dc, r.left + 2, r.top, cw - 4, h, labels[i], 12, sel ? OnAccent(t) : t.ink, sel ? FW_BOLD : FW_SEMIBOLD,
             DT_CENTER | DT_VCENTER | DT_SINGLELINE, faces ? faces[i] : nullptr);
        AddHit(r, idBase + i);
    }
}

// ---------------------------------------------------------------- paginas
void DrawGraphicsPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Gráficos", L"Pantalla, rendimiento y presentación");
    const int W = 250, G = 12;
    DrawToggleCard(dc, t, RECT{ContentX, 100, ContentX + W, 154}, 20, L"Contador de FPS", L"Rendimiento en pantalla", g_showFps);
    DrawToggleCard(dc, t, RECT{ContentX + W + G, 100, ContentR, 154}, 22, L"V-Sync", L"Sincroniza con el monitor", g_vsync);

    RECT res{ContentX, 164, ContentR, 244};
    DrawCard(dc, res, t.card, t.border, 14);
    Text(dc, ContentX + 18, 172, 400, 20, L"Resolución interna", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 194, 480, 16, L"Más alta = imagen más nítida y suave (supersampling).", 11, t.muted);
    const wchar_t* resLabels[] = {L"540p", L"720p", L"900p", L"1080p", L"1440p", L"2160p"};
    DrawChips(dc, t, ContentX + 18, 212, ContentR - ContentX - 36, 28, resLabels, 6, int(g_resolutionIndex), 210);

    RECT fps{ContentX, 252, ContentR, 332};
    DrawCard(dc, fps, t.card, t.border, 14);
    Text(dc, ContentX + 18, 260, 400, 20, L"Límite de FPS", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 282, 480, 16, L"La simulación conserva el tiempo real.", 11, t.muted);
    const wchar_t* fpsLabels[] = {L"30 FPS", L"45 FPS", L"60 FPS", L"90 FPS", L"120 FPS"};
    DrawChips(dc, t, ContentX + 18, 300, ContentR - ContentX - 36, 28, fpsLabels, 5, FrameRateIndex(), 270);

    RECT renderer{ContentX, 340, ContentR, 394};
    DrawCard(dc, renderer, g_hover >= 350 && g_hover < 352 ? t.hover : t.card, t.border, 14);
    Text(dc, ContentX + 18, 348, 210, 20, L"Renderizador gráfico", 13, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 371, 220, 16, L"Se aplica al reiniciar el juego", 10, t.muted);
    const wchar_t* rendererLabels[] = {L"Vulkan (ANGLE)", L"OpenGL ES"};
    DrawChips(dc, t, ContentR - 240, 353, 222, 28, rendererLabels, 2, g_rendererIndex, 350);

    DrawToggleCard(dc, t, RECT{ContentX, 402, ContentX + W, 456}, 23, L"Relación 16:9", L"Proporción panorámica", g_wide);
    DrawToggleCard(dc, t, RECT{ContentX + W + G, 402, ContentR, 456}, 24, L"Maximizar ventana", L"Ajustar a la pantalla", g_fitScreen);

    RECT reset{ContentX, 464, ContentR, 508};
    DrawCard(dc, reset, g_hover == 25 ? t.hover : t.panel, t.border, 14);
    Text(dc, reset.left, reset.top, reset.right - reset.left, 44, L"Restaurar ajustes predeterminados", 13, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(reset, 25);
}
RECT ThemeCardRect(int i) {
    const int c = i % 4, row = i / 4, w = 121, h = 80;
    const int x = ContentX + c * (w + 9), y = 100 + row * (h + 8);
    return RECT{x, y, x + w, y + h};
}
void DrawAppearancePage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Apariencia", L"Tema, bordes y tipografía");
    for (int i = 0; i < int(Themes.size()); ++i) {
        const Theme& th = Themes[static_cast<size_t>(i)];
        const RECT r = ThemeCardRect(i);
        const bool sel = i == g_themeIndex;
        DrawCard(dc, r, g_hover == 300 + i ? t.hover : t.card, t.border, 12);
        if (sel) Outline(dc, r, 12, t.accent, 2);
        const RECT pv{r.left + 8, r.top + 8, r.right - 8, r.top + 44};
        RR(dc, pv, 6, th.panel, th.border);
        FillSolid(dc, RECT{pv.left + 1, pv.top + 1, pv.left + 14, pv.bottom - 1}, th.bg);
        RR(dc, RECT{pv.left + 20, pv.top + 7, pv.left + 44, pv.top + 13}, 3, th.accent, th.accent, false);
        RR(dc, RECT{pv.left + 20, pv.top + 18, pv.right - 8, pv.top + 24}, 3, th.card, th.card, false);
        RR(dc, RECT{pv.left + 20, pv.top + 27, pv.right - 22, pv.top + 32}, 3, th.card, th.card, false);
        if (sel) RR(dc, RECT{r.right - 24, r.top + 12, r.right - 14, r.top + 22}, 5, t.accent, t.accent);
        Text(dc, r.left + 10, r.top + 48, r.right - r.left - 20, 18, th.name, 12, t.ink, FW_BOLD);
        Text(dc, r.left + 10, r.top + 64, r.right - r.left - 20, 14, th.tag, 10, t.muted);
        AddHit(r, 300 + i);
    }
    RECT corners{ContentX, 366, ContentR, 428};
    DrawCard(dc, corners, t.card, t.border, 14);
    Text(dc, ContentX + 18, 376, 200, 20, L"Bordes", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 398, 200, 18, L"Redondeados o rectos", 11, t.muted);
    const wchar_t* cornerLabels[] = {L"Redondeados", L"Rectos"};
    DrawChips(dc, t, ContentR - 18 - 264, 382, 264, 30, cornerLabels, 2, g_rounded ? 0 : 1, 330);

    RECT font{ContentX, 438, ContentR, 522};
    DrawCard(dc, font, t.card, t.border, 14);
    Text(dc, ContentX + 18, 446, 300, 20, L"Fuente de interfaz", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 466, 400, 16, L"Tipografía del panel y del contador de FPS.", 11, t.muted);
    DrawChips(dc, t, ContentX + 18, 484, ContentR - ContentX - 36, 28, FontFaces.data(), 5, g_fontIndex, 340, FontFaces.data());
}
void DrawSystemPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Sistema", L"Idioma, guardados y reinicio");
    RECT lang{ContentX, 100, ContentR, 216};
    DrawCard(dc, lang, t.card, t.border, 14);
    Text(dc, ContentX + 18, 110, 300, 20, L"Idioma del juego", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 132, 480, 16, L"Texto y menús del disco europeo. Requiere reiniciar.", 11, t.muted);
    const wchar_t* labels[5];
    for (size_t i = 0; i < LangChoices.size(); ++i) labels[i] = LangChoices[i].label;
    DrawChips(dc, t, ContentX + 18, 154, ContentR - ContentX - 36, 34, labels, 5, g_langChoice, 50);
    std::wstring status;
    COLORREF statusColor = t.muted;
    if (RestartPending()) { status = L"Reinicia el port para aplicar el cambio de idioma."; statusColor = t.accent; }
    else if (g_langChoice >= 0) status = std::wstring(L"Idioma activo: ") + LangChoices[static_cast<size_t>(g_langChoice)].label;
    else status = L"Idioma activo: el del sistema (automático).";
    Text(dc, ContentX + 18, 192, 470, 18, status.c_str(), 11, statusColor, RestartPending() ? FW_BOLD : FW_NORMAL);

    RECT restart{ContentX, 228, ContentR, 304};
    DrawCard(dc, restart, t.card, t.border, 14);
    Text(dc, ContentX + 18, 240, 280, 20, L"Reiniciar el port", 14, t.ink, FW_SEMIBOLD);
    Text(dc, ContentX + 18, 262, 280, 18, L"Aplica el idioma y otros cambios.", 11, t.muted);
    const RECT button{ContentR - 200, 246, ContentR - 18, 286};
    const bool pending = RestartPending();
    RR(dc, button, 12, pending ? t.accent : (g_hover == 60 ? t.hover : t.panel), t.accent);
    Text(dc, button.left, button.top, button.right - button.left, 40, L"Reiniciar ahora", 13, pending ? OnAccent(t) : t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(button, 60);

    const RECT saves{ContentX, 316, ContentX + 250, 392}, port{ContentX + 262, 316, ContentR, 392};
    DrawCard(dc, saves, g_hover == 61 ? t.hover : t.card, t.border, 14);
    Text(dc, saves.left + 18, saves.top + 14, 180, 20, L"Guardados", 14, t.ink, FW_SEMIBOLD);
    Text(dc, saves.left + 18, saves.top + 38, 190, 18, L"Abrir la carpeta Saves", 11, t.muted);
    Text(dc, saves.right - 40, saves.top, 24, 76, L"›", 24, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(saves, 61);
    DrawCard(dc, port, g_hover == 62 ? t.hover : t.card, t.border, 14);
    Text(dc, port.left + 18, port.top + 14, 180, 20, L"Carpeta del port", 14, t.ink, FW_SEMIBOLD);
    Text(dc, port.left + 18, port.top + 38, 190, 18, L"Donde está MH3.exe", 11, t.muted);
    Text(dc, port.right - 40, port.top, 24, 76, L"›", 24, t.accent, FW_BOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    AddHit(port, 62);
    Text(dc, ContentX, 406, ContentR - ContentX, 20, L"Consejo: haz una copia de Saves antes de actualizar el port.", 11, t.muted);


}
void DrawControlsPage(HDC dc, const Theme& t) {
    DrawHeader(dc, t, L"Controles", L"Atajos y navegación del panel");
    const wchar_t* titles[] = {L"Abrir o cerrar ajustes", L"Cambiar de pestaña", L"Elegir una opción", L"Salir del panel"};
    const wchar_t* desc[] = {L"Alterna este panel mientras juegas.", L"Recorre las secciones del panel.", L"Usa el ratón sobre botones y tarjetas.", L"Vuelve al juego."};
    const wchar_t* chips[] = {L"ESC / F1", L"TAB", L"CLIC", L"ESC"};
    for (int i = 0; i < 4; ++i) {
        const RECT r{ContentX, 100 + i * 76, ContentR, 100 + i * 76 + 64};
        DrawCard(dc, r, t.card, t.border, 14);
        Text(dc, r.left + 18, r.top + 11, 330, 20, titles[i], 14, t.ink, FW_SEMIBOLD);
        Text(dc, r.left + 18, r.top + 33, 330, 18, desc[i], 11, t.muted);
        DrawKeyChip(dc, RECT{r.right - 118, r.top + 18, r.right - 18, r.top + 46}, chips[i], t);
    }
    Text(dc, ContentX, 410, ContentR - ContentX, 20, L"Los cambios se guardan al instante. El idioma y el reinicio están en Sistema.", 11, t.muted);

    // Deslizador de sensibilidad del raton, dentro de Opciones > Controles.
    {
        const int sensitivityPercent = mh3_mouse_look_sensitivity::GetPercent();
        g_mouseSensitivityHitRect = RECT{272, 470, 688, 502};

        HBRUSH cardBrush = CreateSolidBrush(RGB(13, 24, 32));
        HPEN cardPen = CreatePen(PS_SOLID, 1, RGB(46, 184, 182));
        HGDIOBJ oldBrush = SelectObject(dc, cardBrush);
        HGDIOBJ oldPen = SelectObject(dc, cardPen);
        RoundRect(dc, 240, 432, 720, 520, 18, 18);
        SelectObject(dc, oldBrush);
        SelectObject(dc, oldPen);
        DeleteObject(cardBrush);
        DeleteObject(cardPen);

        const int oldBkMode = SetBkMode(dc, TRANSPARENT);
        const COLORREF oldTextColor = SetTextColor(dc, RGB(225, 243, 246));
        HFONT labelFont = CreateFontW(-16, 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE, FALSE,
            DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
            DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
        HGDIOBJ oldFont = SelectObject(dc, labelFont);
        wchar_t sensitivityLabel[96]{};
        std::swprintf(sensitivityLabel, 96, L"Sensibilidad del raton: %d%%", sensitivityPercent);
        RECT labelRect{260, 438, 700, 465};
        DrawTextW(dc, sensitivityLabel, -1, &labelRect, DT_LEFT | DT_VCENTER | DT_SINGLELINE);

        const int trackLeft = 280;
        const int trackRight = 680;
        const int knobX = trackLeft + ((sensitivityPercent - 5) * (trackRight - trackLeft) + 47) / 95;
        HBRUSH trackBrush = CreateSolidBrush(RGB(39, 58, 66));
        HPEN trackPen = CreatePen(PS_SOLID, 1, RGB(63, 91, 99));
        HGDIOBJ oldTrackBrush = SelectObject(dc, trackBrush);
        HGDIOBJ oldTrackPen = SelectObject(dc, trackPen);
        RoundRect(dc, trackLeft, 478, trackRight, 488, 8, 8);
        SelectObject(dc, oldTrackBrush);
        SelectObject(dc, oldTrackPen);
        DeleteObject(trackBrush);
        DeleteObject(trackPen);

        HBRUSH fillBrush = CreateSolidBrush(RGB(63, 220, 200));
        HPEN fillPen = CreatePen(PS_SOLID, 1, RGB(63, 220, 200));
        HGDIOBJ oldFillBrush = SelectObject(dc, fillBrush);
        HGDIOBJ oldFillPen = SelectObject(dc, fillPen);
        if (knobX > trackLeft + 2) RoundRect(dc, trackLeft, 478, knobX, 488, 8, 8);
        SelectObject(dc, oldFillBrush);
        SelectObject(dc, oldFillPen);
        DeleteObject(fillBrush);
        DeleteObject(fillPen);

        HBRUSH knobBrush = CreateSolidBrush(RGB(225, 250, 247));
        HPEN knobPen = CreatePen(PS_SOLID, 2, RGB(63, 220, 200));
        HGDIOBJ oldKnobBrush = SelectObject(dc, knobBrush);
        HGDIOBJ oldKnobPen = SelectObject(dc, knobPen);
        Ellipse(dc, knobX - 8, 472, knobX + 8, 494);
        SelectObject(dc, oldKnobBrush);
        SelectObject(dc, oldKnobPen);
        DeleteObject(knobBrush);
        DeleteObject(knobPen);

        SelectObject(dc, oldFont);
        SetTextColor(dc, oldTextColor);
        SetBkMode(dc, oldBkMode);
        DeleteObject(labelFont);
    }}

// MH3_SAVE_MANAGER_NATIVE_V1
// Drawing helpers are local to this page so it works with the overlay's existing
// navigation/hit-test API without depending on a separate widget or dialog API.
void SaveManagerDrawCard(HDC dc, RECT r, COLORREF fill, COLORREF borderColor, int radius) {
    HBRUSH brush = CreateSolidBrush(fill);
    HPEN pen = CreatePen(PS_SOLID, 1, borderColor);
    if (!brush || !pen) {
        if (brush) DeleteObject(brush);
        if (pen) DeleteObject(pen);
        return;
    }
    HGDIOBJ oldBrush = SelectObject(dc, brush);
    HGDIOBJ oldPen = SelectObject(dc, pen);
    RoundRect(dc, r.left, r.top, r.right, r.bottom, radius * 2, radius * 2);
    SelectObject(dc, oldBrush);
    SelectObject(dc, oldPen);
    DeleteObject(brush);
    DeleteObject(pen);
}
void SaveManagerText(HDC dc, int x, int y, int width, int height, const wchar_t* value,
                     int fontSize, COLORREF color, int weight = FW_NORMAL,
                     UINT format = DT_LEFT | DT_VCENTER | DT_SINGLELINE) {
    if (!value) return;
    RECT r{x, y, x + width, y + height};
    const int oldMode = SetBkMode(dc, TRANSPARENT);
    const COLORREF oldColor = SetTextColor(dc, color);
    HFONT font = CreateFontW(-std::max(9, fontSize), 0, 0, 0, weight, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
    if (font) {
        HGDIOBJ oldFont = SelectObject(dc, font);
        DrawTextW(dc, value, -1, &r, format);
        SelectObject(dc, oldFont);
        DeleteObject(font);
    } else {
        DrawTextW(dc, value, -1, &r, format);
    }
    SetTextColor(dc, oldColor);
    SetBkMode(dc, oldMode);
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
// MH3_SAVE_MANAGER_NATIVE_FOLDER_DIALOG_V3
// Uses Windows' native Explorer folder dialog. Win32 APIs are loaded dynamically,
// so this change does not require editing CMake or linking additional libraries.
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

    // Local GUID values avoid unresolved external GUID symbols and additional linker dependencies.
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

    // Start at the actual Desktop, including redirected/OneDrive Desktop when configured.
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
        hr = dialog->Show(g_panelWindow);
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
    g_saveManagerStatus = L"El selector de carpetas nativo no está disponible en esta plataforma.";
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
        g_saveManagerStatus = L"Ya existe una importacion pendiente. Cierra MH3 para aplicarla antes de preparar otra.";
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
    if (hit == 9069) { g_saveManagerMode = SaveManagerMode::Home; g_saveManagerStatus = L"Operacion cancelada. La partida actual no se ha modificado."; SaveManagerRefreshPanel(); return; }
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

    // Backup y exportación se ejecutan cuando MH3 ya ha terminado de guardar los archivos.
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

void DrawSaveManagerPage(HDC dc, const Theme& theme) {
    SaveManagerResetHits();
    const int smLeft = ContentX + 18;
    const int smRight = PanelW - 24;
    const int smWidth = smRight - smLeft;
    if (g_saveManagerMode == SaveManagerMode::BrowseImport || g_saveManagerMode == SaveManagerMode::BrowseExport) {
        const bool importing = g_saveManagerMode == SaveManagerMode::BrowseImport;
        SaveManagerText(dc, smLeft, 91, smWidth, 27, importing ? L"Importar partida" : L"Exportar partida", 22, theme.ink, FW_SEMIBOLD);
        SaveManagerText(dc, smLeft, 119, smWidth, 20, importing ? L"Selecciona una exportación descomprimida: carpeta data o title\\00010000\\524d4850\\data." : L"Selecciona la carpeta donde se guardará la exportación.", 11, theme.muted);
        SaveManagerDrawCard(dc, RECT{smLeft, 142, smRight, 174}, theme.panel, theme.border, 9);
        SaveManagerText(dc, smLeft + 10, 146, smWidth - 20, 24, g_saveManagerBrowsePath.wstring().c_str(), 10, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);

        const int smGap = 8;
        const int smCol = (smWidth - smGap * 2) / 3;
        const RECT upRect{smLeft, 181, smLeft + smCol, 216};
        const RECT chooseRect{smLeft + smCol + smGap, 181, smLeft + smCol * 2 + smGap, 216};
        const RECT cancelRect{smLeft + smCol * 2 + smGap * 2, 181, smRight, 216};
        SaveManagerDrawCard(dc, upRect, g_hover == 9067 ? theme.hover : theme.card, theme.border, 9);
        SaveManagerText(dc, upRect.left + 5, 186, upRect.right - upRect.left - 10, 23, L"Carpeta superior", 11, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(upRect, 9067);
        SaveManagerDrawCard(dc, chooseRect, g_hover == 9068 ? theme.hover : theme.card, theme.border, 9);
        SaveManagerText(dc, chooseRect.left + 5, 186, chooseRect.right - chooseRect.left - 10, 23, importing ? L"Elegir esta carpeta" : L"Guardar aquí", 11, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(chooseRect, 9068);
        SaveManagerDrawCard(dc, cancelRect, g_hover == 9069 ? theme.hover : theme.card, theme.border, 9);
        SaveManagerText(dc, cancelRect.left + 5, 186, cancelRect.right - cancelRect.left - 10, 23, L"Cancelar", 11, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(cancelRect, 9069);

        for (int row = 0; row < 5; ++row) {
            const size_t index = g_saveManagerBrowseOffset + static_cast<size_t>(row);
            const int top = 223 + row * 38;
            const RECT r{smLeft, top, smRight, top + 33};
            const bool valid = index < g_saveManagerDirectories.size();
            SaveManagerDrawCard(dc, r, valid && g_hover == 9100 + row ? theme.hover : theme.card, theme.border, 8);
            if (valid) {
                const std::wstring name = g_saveManagerDirectories[index].filename().wstring();
                SaveManagerText(dc, smLeft + 13, top + 4, smWidth - 48, 24, name.c_str(), 11, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
                SaveManagerText(dc, smRight - 31, top + 3, 22, 25, L"›", 17, theme.accent, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
                SaveManagerAddHit(r, 9100 + row);
            } else {
                SaveManagerText(dc, smLeft + 13, top + 4, smWidth - 28, 24, L"—", 11, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
            }
        }
        const RECT prevRect{smLeft, 416, smLeft + 96, 446};
        const RECT nextRect{smLeft + 102, 416, smLeft + 198, 446};
        SaveManagerDrawCard(dc, prevRect, theme.panel, theme.border, 8);
        SaveManagerText(dc, prevRect.left + 5, 419, prevRect.right - prevRect.left - 10, 22, L"Anterior", 10, theme.ink, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(prevRect, 9070);
        SaveManagerDrawCard(dc, nextRect, theme.panel, theme.border, 8);
        SaveManagerText(dc, nextRect.left + 5, 419, nextRect.right - nextRect.left - 10, 22, L"Siguiente", 10, theme.ink, FW_NORMAL, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(nextRect, 9071);
        SaveManagerDrawCard(dc, RECT{smLeft + 206, 416, smRight, 446}, theme.panel, theme.border, 8);
        SaveManagerText(dc, smLeft + 215, 419, smWidth - 225, 22, g_saveManagerStatus.c_str(), 9, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
        return;
    }
    if (g_saveManagerMode == SaveManagerMode::ConfirmImport) {
        SaveManagerText(dc, smLeft, 91, smWidth, 28, L"Confirmar importación", 22, theme.ink, FW_SEMIBOLD);
        SaveManagerText(dc, smLeft, 126, smWidth, 20, L"Carpeta seleccionada:", 11, theme.muted);
        SaveManagerDrawCard(dc, RECT{smLeft, 151, smRight, 197}, theme.panel, theme.border, 9);
        SaveManagerText(dc, smLeft + 11, 157, smWidth - 22, 34, g_saveManagerSelectedImport.wstring().c_str(), 10, theme.ink, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_END_ELLIPSIS);
        SaveManagerDrawCard(dc, RECT{smLeft, 211, smRight, 291}, theme.panel, theme.border, 11);
        SaveManagerText(dc, smLeft + 15, 219, smWidth - 30, 63, L"Al confirmar, la carpeta queda preparada. La partida actual no se reemplaza ahora: al cerrar MH3 se crea primero un backup y después se aplica la importación.", 11, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
        const int smHalf = (smWidth - 10) / 2;
        const RECT confirmRect{smLeft, 305, smLeft + smHalf, 354};
        const RECT cancelRect{smLeft + smHalf + 10, 305, smRight, 354};
        SaveManagerDrawCard(dc, confirmRect, g_hover == 9072 ? theme.hover : theme.card, theme.border, 10);
        SaveManagerText(dc, confirmRect.left + 6, 314, confirmRect.right - confirmRect.left - 12, 30, L"Confirmar importación", 12, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(confirmRect, 9072);
        SaveManagerDrawCard(dc, cancelRect, g_hover == 9073 ? theme.hover : theme.card, theme.border, 10);
        SaveManagerText(dc, cancelRect.left + 6, 314, cancelRect.right - cancelRect.left - 12, 30, L"Cancelar", 12, theme.ink, FW_SEMIBOLD, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SaveManagerAddHit(cancelRect, 9073);
        SaveManagerDrawCard(dc, RECT{smLeft, 370, smRight, 425}, theme.panel, theme.border, 10);
        SaveManagerText(dc, smLeft + 12, 378, smWidth - 24, 39, g_saveManagerStatus.c_str(), 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
        return;
    }

    SaveManagerText(dc, smLeft, 91, smWidth, 28, L"Gestor de Guardados", 22, theme.ink, FW_SEMIBOLD);
    SaveManagerText(dc, smLeft, 119, smWidth, 22, L"Backup y Exportar se ejecutan al cerrar MH3, después de guardar. Importar también se aplica al cerrar.", 11, theme.muted);

    const RECT backupRect{smLeft, 150, smRight, 215};
    SaveManagerDrawCard(dc, backupRect, g_hover == 9062 ? theme.hover : theme.card, theme.border, 13);
    SaveManagerText(dc, smLeft + 18, 158, smWidth - 36, 22, L"Backup", 14, theme.ink, FW_SEMIBOLD);
    SaveManagerText(dc, smLeft + 18, 182, smWidth - 36, 20, L"Programa una copia fechada en SaveBackups para crearla al cerrar MH3, después del guardado.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    SaveManagerAddHit(backupRect, 9062);

    const RECT importRect{smLeft, 225, smRight, 290};
    SaveManagerDrawCard(dc, importRect, g_hover == 9063 ? theme.hover : theme.card, theme.border, 13);
    SaveManagerText(dc, smLeft + 18, 233, smWidth - 36, 22, L"Importar", 14, theme.ink, FW_SEMIBOLD);
    SaveManagerText(dc, smLeft + 18, 257, smWidth - 36, 24, L"Elige una carpeta exportada con data. Al cerrar, crea un backup y después reemplaza la partida.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    SaveManagerAddHit(importRect, 9063);

    const RECT exportRect{smLeft, 300, smRight, 365};
    SaveManagerDrawCard(dc, exportRect, g_hover == 9064 ? theme.hover : theme.card, theme.border, 13);
    SaveManagerText(dc, smLeft + 18, 308, smWidth - 36, 22, L"Exportar", 14, theme.ink, FW_SEMIBOLD);
    SaveManagerText(dc, smLeft + 18, 332, smWidth - 36, 20, L"Programa MH3-RMHP08 con data y LEEME.txt en el destino; se crea al cerrar MH3.", 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
    SaveManagerAddHit(exportRect, 9064);

    SaveManagerDrawCard(dc, RECT{smLeft, 378, smRight, 444}, theme.panel, theme.border, 11);
    SaveManagerText(dc, smLeft + 13, 384, smWidth - 26, 51, g_saveManagerStatus.c_str(), 10, theme.muted, FW_NORMAL, DT_LEFT | DT_VCENTER | DT_WORDBREAK);
}
void PaintPanel(HWND w) {
    PAINTSTRUCT ps{};
    HDC target = BeginPaint(w, &ps);
    if (!target) return;
    HDC dc = CreateCompatibleDC(target);
    HBITMAP bitmap = CreateCompatibleBitmap(target, PanelW * 3, PanelH * 3);
    if (!dc || !bitmap) { if (bitmap) DeleteObject(bitmap); if (dc) DeleteDC(dc); EndPaint(w, &ps); return; }
    HGDIOBJ oldBitmap = SelectObject(dc, bitmap);
    SetMapMode(dc, MM_ANISOTROPIC);
    SetWindowExtEx(dc, PanelW, PanelH, nullptr);
    SetViewportExtEx(dc, PanelW * 3, PanelH * 3, nullptr);
    g_hits.clear();
    const Theme& t = CurrentTheme();
    FillSolid(dc, RECT{0, 0, PanelW, PanelH}, t.panel);
    DrawSidebar(dc, t);
    DrawTexture(dc, t);
    switch (g_page) {
    case Page::Graphics: DrawGraphicsPage(dc, t); break;
    case Page::Appearance: DrawAppearancePage(dc, t); break;
    case Page::System: DrawSystemPage(dc, t); break;
    case Page::Controls: DrawControlsPage(dc, t); break;
    
        case Page::SaveManager: DrawSaveManagerPage(dc, t); break;
    }
    Outline(dc, RECT{0, 0, PanelW, PanelH}, 24, t.border, 2);
    SetStretchBltMode(target, HALFTONE);
    SetBrushOrgEx(target, 0, 0, nullptr);
    StretchBlt(target, 0, 0, PanelW, PanelH, dc, 0, 0, PanelW, PanelH, SRCCOPY);
    SelectObject(dc, oldBitmap); DeleteObject(bitmap); DeleteDC(dc);
    EndPaint(w, &ps);
}

// ---------------------------------------------------------------- ventanas
void ApplyCornerStyle(HWND window, int diameter, int width, int height) {
    if (!window) return;
    const DWORD preference = g_rounded ? 2 : 1; // DWMWCP_ROUND / DWMWCP_DONOTROUND
    const HRESULT status = DwmSetWindowAttribute(window, 33, &preference, sizeof(preference));
    if (SUCCEEDED(status) || !g_rounded) SetWindowRgn(window, nullptr, TRUE);
    else SetWindowRgn(window, CreateRoundRectRgn(0, 0, width + 1, height + 1, diameter, diameter), TRUE);
}
void ApplyWindowStyle() {
    if (g_panelWindow) {
        SetLayeredWindowAttributes(g_panelWindow, 0, 255, LWA_ALPHA);
        ApplyCornerStyle(g_panelWindow, 48, PanelW, PanelH);
    }
    if (g_hudWindow) ApplyCornerStyle(g_hudWindow, 28, HudW, HudH);
}
void PositionPanel() {
    if (!g_hostWindow || !IsWindow(g_hostWindow) || !g_panelWindow || !g_panelVisible) return;
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int aw = static_cast<int>(c.right - c.left), ah = static_cast<int>(c.bottom - c.top);
    const int x = o.x + std::max(0, (aw - PanelW) / 2), y = o.y + std::max(0, (ah - PanelH) / 2);
    SetWindowPos(g_panelWindow, HWND_TOP, x, y, PanelW, PanelH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
}
void PositionHud() {
    if (!g_showFps || !g_hostWindow || !IsWindow(g_hostWindow) || !g_hudWindow) return;
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int x = o.x + std::max(8, static_cast<int>(c.right) - HudW - 18), y = o.y + 14;
    SetWindowPos(g_hudWindow, HWND_TOPMOST, x, y, HudW, HudH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
}
void Repaint() {
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
    if (g_hudWindow) InvalidateRect(g_hudWindow, nullptr, TRUE);
}
void SetVisible(bool visible) {
    g_panelVisible = visible;
    if (!g_panelWindow) return;
    if (visible) {
        g_page = Page::Graphics; g_hover = -1;
        if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
        ApplyWindowStyle(); PositionPanel();
        ShowWindow(g_panelWindow, SW_SHOWNORMAL);
        SetWindowPos(g_panelWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
        SetForegroundWindow(g_panelWindow); SetFocus(g_panelWindow);
        InvalidateRect(g_panelWindow, nullptr, FALSE);
    } else {
        ShowWindow(g_panelWindow, SW_HIDE);
        if (g_hostWindow && IsWindow(g_hostWindow)) SetForegroundWindow(g_hostWindow);
        if (g_showFps && g_hudWindow) {
            ShowWindow(g_hudWindow, SW_SHOWNOACTIVATE); PositionHud();
            SetWindowPos(g_hudWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE | SWP_SHOWWINDOW);
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
        if (g_hudWindow && !g_panelVisible) {
            ShowWindow(g_hudWindow, SW_SHOWNOACTIVATE); PositionHud();
            SetWindowPos(g_hudWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE | SWP_SHOWWINDOW);
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
    g_themeIndex = 0; g_fontIndex = 0; g_rounded = true; SaveTheme();
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
    SaveGraphicsSettings();
    g_page = Page::Graphics;
    ApplyWindowStyle();
    if (g_hudWindow && g_showFps && !g_panelVisible) ShowWindow(g_hudWindow, SW_SHOWNOACTIVATE);
    PositionPanel(); PositionHud();
}
void Activate(int hit) {
    if (hit == 104) { g_page = Page::SaveManager; g_hover = -1; if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE); return; }
    if (hit >= 9062 && hit <= 9073) { SaveManagerHandleHit(hit); return; }
    if (hit >= 9100 && hit < 9105) { SaveManagerHandleHit(hit); return; }




    if (hit < 0) return;
    if (hit >= 100 && hit <= 103) { g_page = static_cast<Page>(hit - 100); g_hover = -1; }
    else if (hit >= 210 && hit < 216) { ApplyRenderResolution(hit - 210); PositionPanel(); }
    else if (hit >= 270 && hit < 275) ChangeFrameLimitTo(hit - 270);
    else if (hit >= 350 && hit < 352) ChooseRenderer(hit - 350);
    else if (hit >= 300 && hit < 300 + int(Themes.size())) ApplyThemeSelection(hit - 300);
    else if (hit == 330) SetRounded(true);
    else if (hit == 331) SetRounded(false);
    else if (hit >= 340 && hit < 345) { g_fontIndex = hit - 340; SaveTheme(); }
    else if (hit >= 50 && hit < 55) ChooseLanguage(hit - 50);
    else switch (hit) {
        case 20: ToggleFps(); break;
        case 22: ToggleVsync(); break;
        case 23: ToggleWide(); break;
        case 24: ToggleFit(); break;
        case 25: ResetSettings(); break;
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
    }
    if (g_page == Page::Controls) {
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
        const POINT p{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        Activate(HitTest(p));
        return 0;
    }
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE || wp == VK_F1) { SetVisible(false); return 0; }
        if (wp == VK_TAB) { g_page = static_cast<Page>((int(g_page) + 1) % 4); InvalidateRect(w, nullptr, FALSE); return 0; }
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
            const Theme& t = CurrentTheme();
            FillSolid(dc, RECT{0, 0, HudW, HudH}, t.panel);
            RR(dc, RECT{0, 0, HudW, HudH}, 21, t.panel, t.accent, true, 2);
            HBRUSH dot = CreateSolidBrush(t.accent);
            if (dot) {
                HGDIOBJ old = SelectObject(dc, dot), pen = SelectObject(dc, GetStockObject(NULL_PEN));
                Ellipse(dc, 14, 16, 24, 26);
                SelectObject(dc, pen); SelectObject(dc, old); DeleteObject(dot);
            }
            std::wstring label = L"FPS  --";
            if (g_fps > 0.0) label = L"FPS  " + std::to_wstring(static_cast<unsigned>(g_fps + 0.5));
            Text(dc, 32, 1, HudW - 40, HudH - 2, label.c_str(), 14, t.ink, FW_SEMIBOLD, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
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
    if (!g_panelWindow && RegisterWindowClass(OverlayClassName, PanelProc)) {
        g_panelWindow = CreateWindowExW(WS_EX_TOOLWINDOW | WS_EX_LAYERED | WS_EX_TOPMOST, OverlayClassName, L"Monster Hunter Tri - Ajustes", WS_POPUP,
                                        CW_USEDEFAULT, CW_USEDEFAULT, PanelW, PanelH, g_hostWindow, nullptr, inst, nullptr);
        if (g_panelWindow) { ShowWindow(g_panelWindow, SW_HIDE); ApplyWindowStyle(); }
    }
    if (!g_hudWindow && RegisterWindowClass(HudClassName, HudProc)) {
        g_hudWindow = CreateWindowExW(WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST, HudClassName, L"MH3 FPS", WS_POPUP,
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
    g_showFps = RuntimeConfigFile::ShowFps(true);
    LoadTheme(); LoadGraphicsSettings(); EnsureWindows();
    if (g_hudWindow) {
        if (g_showFps) {
            ShowWindow(g_hudWindow, SW_SHOWNOACTIVATE); PositionHud();
            SetWindowPos(g_hudWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE | SWP_SHOWWINDOW);
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
    if (g_showFps && g_hudWindow) {
        if (g_panelVisible) { if (IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_HIDE); }
        else { if (!IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_SHOWNOACTIVATE); PositionHud(); }
    } else if (g_hudWindow && IsWindowVisible(g_hudWindow)) ShowWindow(g_hudWindow, SW_HIDE);
    // FPS real: fotogramas logicos del juego por segundo (los cuenta el frame pacer).
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
void Draw() noexcept { if (g_panelWindow && g_panelVisible) InvalidateRect(g_panelWindow, nullptr, FALSE); }
bool StartupScreenVisible() noexcept { return false; }
void NotifyStrapInputAccepted() noexcept {}
void AdvancePresentedFrame() noexcept { EnsureWindows(); }
void ReleaseControllers() noexcept {
    if (g_panelWindow) ShowWindow(g_panelWindow, SW_HIDE);
    if (g_hudWindow) ShowWindow(g_hudWindow, SW_HIDE);
    g_panelVisible = false;
}
} // namespace settings_overlay
#else
namespace settings_overlay {
void AttachWindow(SDL_Window*) noexcept {}
void InitializeRuntimeSettings() noexcept {}
void HandleEvents(const AuroraEvent*) noexcept {}
void Pump() noexcept {}
bool IsOpen() noexcept { return false; }
void Draw() noexcept {}
bool StartupScreenVisible() noexcept { return false; }
void NotifyStrapInputAccepted() noexcept {}
void AdvancePresentedFrame() noexcept {}
void ReleaseControllers() noexcept {}
} // namespace settings_overlay
#endif
