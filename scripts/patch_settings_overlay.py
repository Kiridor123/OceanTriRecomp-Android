import sys

with open(r'c:\mh3src\runtime\src\settings_overlay.cpp', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Slider rects & dragging globals
old_rects = '''RECT g_fovHitRect{};
RECT g_gammaHitRect{};
RECT g_contrastHitRect{};
RECT g_brightnessHitRect{};

bool g_fovDragging = false;
bool g_gammaDragging = false;
bool g_contrastDragging = false;
bool g_brightnessDragging = false;'''

new_rects = '''RECT g_fovHitRect{};
bool g_fovDragging = false;'''

# 2. Load / Save graphics settings
old_load = '''        {
            int fakeHdr = 0, preset = 0;
            float gamma = 2.2f, contrast = 1.0f, brightness = 0.0f;
            if (in >> fakeHdr >> preset >> gamma >> contrast >> brightness) {
                MH3PostProcess::Settings ps;
                ps.fakeHdr = (fakeHdr != 0);
                ps.preset = std::clamp(preset, 0, 6);
                ps.gamma = std::clamp(gamma, 1.4f, 3.0f);
                ps.contrast = std::clamp(contrast, 0.5f, 1.8f);
                ps.brightness = std::clamp(brightness, -0.4f, 0.4f);
                const auto& presets = MH3PostProcess::GetPresets();
                if (ps.preset >= 0 && ps.preset < int(presets.size())) {
                    ps.saturation = presets[static_cast<size_t>(ps.preset)].saturation;
                } else {
                    ps.saturation = 1.0f;
                }
                MH3PostProcess::SetSettings(ps);
            }
        }'''

new_load = '''        {
            int mh3uMode = 1;
            if (in >> mh3uMode) {
                MH3PostProcess::SetMh3uMode(mh3uMode != 0);
            }
        }'''

old_save = '''        const auto ps = MH3PostProcess::GetSettings();
        out << g_msaaSamples << ' '
            << (g_vsync ? 1 : 0) << ' '
            << g_resolutionIndex << ' '
            << g_fpsLimit << ' '
            << g_rendererIndex << ' '
            << (g_fullscreen ? 1 : 0) << ' '
            << (g_bloomEnabled ? 1 : 0) << ' '
            << g_hunterFov << ' '
            << (g_customTexturesEnabled ? 1 : 0) << ' '
            << (ps.fakeHdr ? 1 : 0) << ' '
            << ps.preset << ' '
            << ps.gamma << ' '
            << ps.contrast << ' '
            << ps.brightness << '\\n';'''

new_save = '''        out << g_msaaSamples << ' '
            << (g_vsync ? 1 : 0) << ' '
            << g_resolutionIndex << ' '
            << g_fpsLimit << ' '
            << g_rendererIndex << ' '
            << (g_fullscreen ? 1 : 0) << ' '
            << (g_bloomEnabled ? 1 : 0) << ' '
            << g_hunterFov << ' '
            << (g_customTexturesEnabled ? 1 : 0) << ' '
            << (MH3PostProcess::GetMh3uMode() ? 1 : 0) << '\\n';'''

# 3. DrawGraphicsPage Row 4
old_row4 = '''    // Fila 4: Mejora Visual, Fake HDR y Color (ACES Filmic)
    RECT rCol{ContentX, 428, ContentR, 616};
    DrawCard(dc, rCol, t.card, t.border, 12);

    // Header row inside card
    Text(dc, ContentX + 16, 434, 320, 18, L"Calibraci\\u00f3n de Color y Mapeo F\\u00edlmico ACES", 13, t.ink, FW_BOLD);

    // Bloom switch [30]
    RECT rBloom{ContentR - 300, 432, ContentR - 165, 454};
    Text(dc, rBloom.left, rBloom.top + 2, 85, 18, L"Bloom Nativo", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rBloom.right - 44, rBloom.top, rBloom.right, rBloom.top + 18}, g_bloomEnabled, t);
    AddHit(rBloom, 30);

    // Fake HDR switch [31]
    const auto ppSettings = MH3PostProcess::GetSettings();
    RECT rHdr{ContentR - 150, 432, ContentR - 14, 454};
    Text(dc, rHdr.left, rHdr.top + 2, 85, 18, L"Fake HDR ACES", 10, t.ink, FW_SEMIBOLD);
    DrawSwitch(dc, RECT{rHdr.right - 44, rHdr.top, rHdr.right, rHdr.top + 18}, ppSettings.fakeHdr, t);
    AddHit(rHdr, 31);

    // Presets chips
    const wchar_t* presetLabels[] = {L"Original (Wii)", L"Tri V\\u00edvido HD", L"Cine ACES HDR", L"Cazador C\\u00e1lido", L"Tundra Fr\\u00eda", L"Alto Impacto", L"Personalizado"};
    DrawChips(dc, t, ContentX + 14, 460, ContentR - ContentX - 28, 28, presetLabels, 7, ppSettings.preset, 240);

    // Sliders: Gamma, Contrast, Brightness
    // Gama
    Text(dc, ContentX + 16, 498, 70, 22, L"Gama:", 11, t.muted, FW_SEMIBOLD);
    wchar_t gBuf[16]; swprintf_s(gBuf, L"%.2f", ppSettings.gamma);
    g_gammaHitRect = RECT{ContentX + 90, 494, ContentR - 16, 524};
    DrawSlider(dc, t, g_gammaHitRect, 250, ppSettings.gamma, 1.4f, 3.0f, gBuf);

    // Contraste
    Text(dc, ContentX + 16, 536, 70, 22, L"Contraste:", 11, t.muted, FW_SEMIBOLD);
    wchar_t cBuf[16]; swprintf_s(cBuf, L"%d%%", int(ppSettings.contrast * 100.0f + 0.5f));
    g_contrastHitRect = RECT{ContentX + 90, 532, ContentR - 16, 562};
    DrawSlider(dc, t, g_contrastHitRect, 254, ppSettings.contrast, 0.5f, 1.8f, cBuf);

    // Brillo
    Text(dc, ContentX + 16, 574, 70, 22, L"Brillo:", 11, t.muted, FW_SEMIBOLD);
    wchar_t bBuf[16]; swprintf_s(bBuf, L"%+d%%", int(ppSettings.brightness * 100.0f));
    g_brightnessHitRect = RECT{ContentX + 90, 570, ContentR - 16, 600};
    DrawSlider(dc, t, g_brightnessHitRect, 260, ppSettings.brightness, -0.4f, 0.4f, bBuf);'''

new_row4 = '''    // Fila 4: Estilo Visual y Efectos (2 columnas)
    // Col 1: Modo MH3U (Monster Hunter 3 Ultimate) [31]
    RECT rMh3u{col1L, 428, col1R, 532};
    DrawCard(dc, rMh3u, g_hover == 31 ? t.hover : t.card, t.border, 12);
    Text(dc, col1L + 14, 436, colW - 74, 18, L"Modo MH3U (Monster Hunter 3 Ultimate)", 12, t.accent, FW_BOLD);
    Text(dc, col1L + 14, 458, colW - 74, 16, L"Colores vivos y ricos basados en la remasterizaci\\u00f3n 3U.", 9, t.ink, FW_SEMIBOLD);
    Text(dc, col1L + 14, 476, colW - 74, 30, L"Aguas turquesas vibrantes, vegetaci\\u00f3n esmeralda y mapeo tonal f\\u00edlmico ACES.", 8, t.muted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);
    DrawSwitch(dc, RECT{col1R - 58, 444, col1R - 14, 468}, MH3PostProcess::GetMh3uMode(), t);
    AddHit(rMh3u, 31);

    // Col 2: Bloom y Resplandor Nativo [30]
    RECT rBloom{col2L, 428, col2R, 532};
    DrawCard(dc, rBloom, g_hover == 30 ? t.hover : t.card, t.border, 12);
    Text(dc, col2L + 14, 436, colW - 74, 18, L"Bloom Nativo (Resplandor)", 12, t.accent, FW_BOLD);
    Text(dc, col2L + 14, 458, colW - 74, 16, L"Efecto de resplandor atmosf\\u00e9rico y dispersi\\u00f3n de luz de Wii.", 9, t.ink, FW_SEMIBOLD);
    Text(dc, col2L + 14, 476, colW - 74, 30, L"Halos de iluminaci\\u00f3n solar, antorchas y fuentes de lava originales de Wii.", 8, t.muted, FW_NORMAL, DT_LEFT | DT_WORDBREAK);
    DrawSwitch(dc, RECT{col2R - 58, 444, col2R - 14, 468}, g_bloomEnabled, t);
    AddHit(rBloom, 30);'''

# 4. PaintPanel optimization (1:1 persistent memory DC, no CPU 3x halftone downsampling)
old_paint = '''void PaintPanel(HWND w) {
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
    DrawTopNav(dc, t);
    DrawTexture(dc, t);
    switch (g_page) {
    case Page::Graphics: DrawGraphicsPage(dc, t); break;
    case Page::Mods: DrawModsPage(dc, t); break;
    case Page::System: DrawSystemPage(dc, t); break;
    case Page::Controls: DrawControlsPage(dc, t); break;
    case Page::Appearance: DrawAppearancePage(dc, t); break;
    case Page::SaveManager: DrawSaveManagerPage(dc, t); break;
    }
    Outline(dc, RECT{0, 0, PanelW, PanelH}, 24, t.border, 2);
    SetStretchBltMode(target, HALFTONE);
    SetBrushOrgEx(target, 0, 0, nullptr);
    StretchBlt(target, 0, 0, PanelW, PanelH, dc, 0, 0, PanelW, PanelH, SRCCOPY);
    SelectObject(dc, oldBitmap); DeleteObject(bitmap); DeleteDC(dc);
    EndPaint(w, &ps);
}'''

new_paint = '''void PaintPanel(HWND w) {
    PAINTSTRUCT ps{};
    HDC target = BeginPaint(w, &ps);
    if (!target) return;
    static HDC memDC = nullptr;
    static HBITMAP memBmp = nullptr;
    static HGDIOBJ oldBmp = nullptr;
    if (!memDC) {
        memDC = CreateCompatibleDC(target);
        memBmp = CreateCompatibleBitmap(target, PanelW, PanelH);
        oldBmp = SelectObject(memDC, memBmp);
    }
    g_hits.clear();
    const Theme& t = CurrentTheme();
    FillSolid(memDC, RECT{0, 0, PanelW, PanelH}, t.panel);
    DrawTopNav(memDC, t);
    DrawTexture(memDC, t);
    switch (g_page) {
    case Page::Graphics: DrawGraphicsPage(memDC, t); break;
    case Page::Mods: DrawModsPage(memDC, t); break;
    case Page::System: DrawSystemPage(memDC, t); break;
    case Page::Controls: DrawControlsPage(memDC, t); break;
    case Page::Appearance: DrawAppearancePage(memDC, t); break;
    case Page::SaveManager: DrawSaveManagerPage(memDC, t); break;
    }
    Outline(memDC, RECT{0, 0, PanelW, PanelH}, 24, t.border, 2);
    BitBlt(target, 0, 0, PanelW, PanelH, memDC, 0, 0, SRCCOPY);
    EndPaint(w, &ps);
}'''

# 5. PositionPanel optimization
old_pos = '''void PositionPanel() {
    if (!g_hostWindow || !IsWindow(g_hostWindow) || !g_panelWindow || !g_panelVisible) return;
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int aw = static_cast<int>(c.right - c.left), ah = static_cast<int>(c.bottom - c.top);
    const int x = o.x + std::max(0, (aw - PanelW) / 2), y = o.y + std::max(0, (ah - PanelH) / 2);
    SetWindowPos(g_panelWindow, HWND_TOP, x, y, PanelW, PanelH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
}'''

new_pos = '''void PositionPanel() {
    if (!g_hostWindow || !IsWindow(g_hostWindow) || !g_panelWindow || !g_panelVisible) return;
    RECT c{};
    if (!GetClientRect(g_hostWindow, &c)) return;
    POINT o{0, 0};
    ClientToScreen(g_hostWindow, &o);
    const int aw = static_cast<int>(c.right - c.left), ah = static_cast<int>(c.bottom - c.top);
    const int x = o.x + std::max(0, (aw - PanelW) / 2), y = o.y + std::max(0, (ah - PanelH) / 2);
    static int lastX = -9999, lastY = -9999, lastW = -9999, lastH = -9999;
    if (x != lastX || y != lastY || aw != lastW || ah != lastH) {
        lastX = x; lastY = y; lastW = aw; lastH = ah;
        SetWindowPos(g_panelWindow, HWND_TOP, x, y, PanelW, PanelH, SWP_NOACTIVATE | SWP_SHOWWINDOW);
    }
}'''

# 6. Slider update functions removal
old_sliders_fn = '''void UpdateGammaFromX(LONG x) {
    const int trackL = g_gammaHitRect.left + 34;
    const int trackR = g_gammaHitRect.right - 92;
    if (trackR <= trackL) return;
    const float ratio = std::clamp(float(x - trackL) / float(trackR - trackL), 0.0f, 1.0f);
    MH3PostProcess::SetGamma(1.4f + ratio * (3.0f - 1.4f));
    SaveGraphicsSettings();
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
}

void UpdateContrastFromX(LONG x) {
    const int trackL = g_contrastHitRect.left + 34;
    const int trackR = g_contrastHitRect.right - 92;
    if (trackR <= trackL) return;
    const float ratio = std::clamp(float(x - trackL) / float(trackR - trackL), 0.0f, 1.0f);
    MH3PostProcess::SetContrast(0.5f + ratio * (1.8f - 0.5f));
    SaveGraphicsSettings();
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
}

void UpdateBrightnessFromX(LONG x) {
    const int trackL = g_brightnessHitRect.left + 34;
    const int trackR = g_brightnessHitRect.right - 92;
    if (trackR <= trackL) return;
    const float ratio = std::clamp(float(x - trackL) / float(trackR - trackL), 0.0f, 1.0f);
    MH3PostProcess::SetBrightness(-0.4f + ratio * 0.8f);
    SaveGraphicsSettings();
    if (g_panelWindow) InvalidateRect(g_panelWindow, nullptr, FALSE);
}'''

new_sliders_fn = ''''''

# 7. Hit 31 activation
old_hit31 = '''        case 31:
            MH3PostProcess::SetFakeHdr(!MH3PostProcess::GetFakeHdr());
            SaveGraphicsSettings();
            break;'''

new_hit31 = '''        case 31:
            MH3PostProcess::SetMh3uMode(!MH3PostProcess::GetMh3uMode());
            SaveGraphicsSettings();
            break;'''

# 8. PanelProc dragging cleanup
old_proc_drag = '''        g_mouseSensitivityDragging = false;
        g_fovDragging = false;
        g_gammaDragging = false;
        g_contrastDragging = false;
        g_brightnessDragging = false;'''

new_proc_drag = '''        g_mouseSensitivityDragging = false;
        g_fovDragging = false;'''

old_proc_lbutton = '''            if (PtInRect(&g_gammaHitRect, p)) {
                g_gammaDragging = true;
                SetCapture(w);
                UpdateGammaFromX(p.x);
                return 0;
            }
            if (PtInRect(&g_contrastHitRect, p)) {
                g_contrastDragging = true;
                SetCapture(w);
                UpdateContrastFromX(p.x);
                return 0;
            }
            if (PtInRect(&g_brightnessHitRect, p)) {
                g_brightnessDragging = true;
                SetCapture(w);
                UpdateBrightnessFromX(p.x);
                return 0;
            }
        } else if (m == WM_MOUSEMOVE && (g_fovDragging || g_gammaDragging || g_contrastDragging || g_brightnessDragging)) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            if (g_fovDragging) UpdateFovFromX(x);
            else if (g_gammaDragging) UpdateGammaFromX(x);
            else if (g_contrastDragging) UpdateContrastFromX(x);
            else if (g_brightnessDragging) UpdateBrightnessFromX(x);
            return 0;
        } else if (m == WM_LBUTTONUP && (g_fovDragging || g_gammaDragging || g_contrastDragging || g_brightnessDragging)) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            if (g_fovDragging) UpdateFovFromX(x);
            else if (g_gammaDragging) UpdateGammaFromX(x);
            else if (g_contrastDragging) UpdateContrastFromX(x);
            else if (g_brightnessDragging) UpdateBrightnessFromX(x);
            g_fovDragging = g_gammaDragging = g_contrastDragging = g_brightnessDragging = false;
            if (GetCapture() == w) ReleaseCapture();
            return 0;
        }'''

new_proc_lbutton = '''        } else if (m == WM_MOUSEMOVE && g_fovDragging) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            UpdateFovFromX(x);
            return 0;
        } else if (m == WM_LBUTTONUP && g_fovDragging) {
            const LONG x = static_cast<LONG>(static_cast<short>(LOWORD(lp)));
            UpdateFovFromX(x);
            g_fovDragging = false;
            if (GetCapture() == w) ReleaseCapture();
            return 0;
        }'''

# 9. Draw() optimization: avoid redundant invalidates every frame
old_draw = '''void Draw() noexcept { if (g_panelWindow && g_panelVisible) InvalidateRect(g_panelWindow, nullptr, FALSE); }'''
new_draw = '''void Draw() noexcept {}'''

text = text.replace('\r\n', '\n')

replacements = [
    (old_rects, new_rects),
    (old_load, new_load),
    (old_save, new_save),
    (old_row4, new_row4),
    (old_paint, new_paint),
    (old_pos, new_pos),
    (old_sliders_fn, new_sliders_fn),
    (old_hit31, new_hit31),
    (old_proc_drag, new_proc_drag),
    (old_proc_lbutton, new_proc_lbutton),
    (old_draw, new_draw),
]

all_ok = True
for o, n in replacements:
    o_norm = o.replace('\r\n', '\n')
    n_norm = n.replace('\r\n', '\n')
    if o_norm not in text:
        print(f"Target not found: {repr(o_norm[:80])}...", file=sys.stderr)
        all_ok = False
    else:
        text = text.replace(o_norm, n_norm)

if all_ok:
    with open(r'c:\mh3src\runtime\src\settings_overlay.cpp', 'w', newline="\n", encoding='utf-8') as f:
        f.write(text)
    print("settings_overlay.cpp updated successfully!")
else:
    print("Failed to replace some targets in settings_overlay.cpp", file=sys.stderr)
    sys.exit(1)
