#include "touch_controls.h"
#include "android_keyboard.h"
#include "droid_sans_atlas.h"
#include "language.h"
#include "save_manager.h"
#include "mh3_frame_rate_control.h"
#include "widescreen.h"
#include "memory.h"
#include "net/local_server.h"
#include "net/lan_beacon.h"
#include "recomp_mod_loader.h"
#include "efb_host.h"
#include "disc_image.h"

#include <SDL3/SDL.h>
#include <GLES3/gl3.h>
#include <png.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <chrono>
#include <atomic>
#include <mutex>
#include <functional>
#include "cheats.h"
#include <unordered_map>
#include <cstdio>
#include <cstring>

// Set to 1 for Project-Moga native ROM language hot-swap menu; 0 for standard OceanTri
#define MH3_ENABLE_NATIVE_LANG_MENU 0
#include <cstdlib>
#include <cctype>
#include "pointer_controls.h"
#include "memory.h"

#if defined(__ANDROID__)
#include <android/log.h>
#include <SDL3/SDL_system.h>
#include <jni.h>
#define LOG_TAG "MH3_TOUCH"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#else
#define LOGI(...) std::printf(__VA_ARGS__)
#define LOGE(...) std::fprintf(stderr, __VA_ARGS__)
#endif

// External engine hooks
extern void QueueTouchCameraDelta(float dx, float dy);
extern "C" void VISetFrameBufferScale(float scale);
extern void aurora_enable_vsync(bool enabled);
extern "C" void aurora_set_skip_unready_pipelines(bool enabled);
extern "C" bool aurora_get_skip_unready_pipelines();
extern "C" void aurora_set_native_target_aspect(int aspect);
extern "C" void aurora_set_fullscreen(bool fullscreen);
extern "C" bool aurora_get_fullscreen(void);
extern "C" struct SDL_Window* aurora_get_window(void);
extern "C" void aurora_set_bloom_level(int level);
extern "C" int aurora_get_bloom_level(void);

extern "C" {
int Gamepad_GetLayout();
void Gamepad_SetLayout(int layout);
bool Gamepad_GetSwapTriggers();
void Gamepad_SetSwapTriggers(bool swap);
void Gamepad_SaveConfig();
void Gamepad_LoadConfig();
int Gamepad_GetBinding(int action);
void Gamepad_SetBinding(int action, int inputCode);
void Gamepad_ResetToPreset(int layout, bool swapTriggers);
int Gamepad_DetectPressedInput();
const char* Gamepad_GetActionName(int action, int lang);
const char* Gamepad_GetActionDesc(int action, int lang);
const char* Gamepad_GetInputName(int inputCode, int layout, int lang);
bool Gamepad_IsConnected();
}

namespace aurora::gfx::texture_replacement {
size_t get_replacement_count() noexcept;
void set_enabled(bool enabled) noexcept;
bool is_enabled() noexcept;
void reload() noexcept;
}

namespace {

struct Vec2 {
    float x = 0.0f;
    float y = 0.0f;
};

struct Color {
    float r = 1.0f, g = 1.0f, b = 1.0f, a = 1.0f;
};

// Laguna de Moga Theme Palette (Matches PC port screenshot)
constexpr Color COL_WHITE         { 1.0f, 1.0f, 1.0f, 1.0f };
constexpr Color COL_MUTED         { 0.486f, 0.698f, 0.753f, 1.0f };
constexpr Color COL_CYAN          { 0.10f, 0.82f, 0.84f, 1.0f };
constexpr Color COL_BG_DARK       { 0.027f, 0.098f, 0.137f, 0.96f };
constexpr Color COL_PANEL_CARD    { 0.035f, 0.125f, 0.176f, 0.92f };
constexpr Color COL_PANEL_BORDER  { 0.086f, 0.282f, 0.353f, 1.0f };
constexpr Color COL_ACTIVE_CHIP   { 0.10f, 0.82f, 0.84f, 1.0f };
constexpr Color COL_ACTIVE_TEXT   { 0.027f, 0.098f, 0.137f, 1.0f };
constexpr Color COL_INACTIVE_CHIP { 0.043f, 0.145f, 0.200f, 0.90f };
constexpr Color COL_CHIP_BORDER   { 0.106f, 0.345f, 0.431f, 1.0f };

struct ConfigurableButton {
    std::string id;
    const char* label;
    uint16_t mask;
    Vec2 defaultNormPos;
    float defaultNormRadius;
    Vec2 normPos;
    float scale = 1.0f;
    Vec2 pos;
    float radius = 0.0f;
    bool isPressed = false;
    int fingerId = -1;
    Color baseColor;
    Color borderColor;
};

struct CustomSkinTex {
    GLuint tex = 0;
    GLuint pressedTex = 0;
    float aspect = 1.0f; // width / height after transparent crop
    std::string path;
};

struct PngBrowserEntry {
    std::string name;
    std::string fullPath;
    bool isDir = false;
};

struct HitZone {
    float x = 0.0f, y = 0.0f, w = 0.0f, h = 0.0f;
    float clipX = 0.0f, clipY = 0.0f, clipW = 99999.0f, clipH = 99999.0f;
    std::function<void()> onClick;
};

struct DamagePopup {
    float worldX = 0.0f;
    float worldY = 0.0f;
    float worldZ = 0.0f;
    int damage = 0;
    float timer = 0.0f;
    float lifetime = 0.95f;
    bool isWeakspot = false;
    bool isMassive = false;
    float floatSpeedY = 65.0f;
    float driftX = 0.0f;
    float driftZ = 0.0f;
};

struct UIVertex {
    float x, y;
    float u, v;          // Local offset in pixels [-halfW, halfW] for SDF, or UV for texture
    float r, g, b, a;
    float br, bg, bb, ba;
    float type;          // 0: AA disc, 1: AA ring, 2: AA rounded rect (pixel SDF), 3: Font text, 4: Plain, 5: RGBA Texture
    float thickness;     // Ring/border thickness
    float feather;       // corner radius (for type 2) or feather
    float extra;         // half width (for type 2)
};

class TouchSettingsEngine {
public:
    TouchSettingsEngine() {
        m_enabled = true;
#if defined(__ANDROID__)
        m_touchVisible = true;
#else
        m_touchVisible = false;
#endif
    }

    void Init() {
        if (m_initialized) return;
        m_initialized = true;

        SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
        SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");

        LoadSettings();
        LoadLayoutConfig();
        LoadSkinConfig();
        NoteTouchActivity();
    }

    static int64_t NowMs() {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count();
    }

    void NoteTouchActivity() { m_lastTouchMs.store(NowMs(), std::memory_order_relaxed); }

    // Factor de opacidad del botón de rueda ⚙: se desvanece suavemente en 0.4s
    // tras transcurrir m_gearAutoHideSec segundos sin actividad táctil en pantalla.
    float GearAlpha() const {
        if (m_gearAutoHideSec <= 0) return 1.0f;
        float idle = float(NowMs() - m_lastTouchMs.load(std::memory_order_relaxed)) / 1000.0f;
        float over = idle - float(m_gearAutoHideSec);
        if (over <= 0.0f) return 1.0f;
        return std::clamp(1.0f - over / 0.4f, 0.0f, 1.0f);
    }

    void SetEnabled(bool enabled) { m_enabled = enabled; }
    bool IsEnabled() const { return m_enabled; }

    void SetDamageNumbersEnabled(bool enabled) {
        m_damageNumbersEnabled = enabled;
        SaveLayoutConfig();
    }
    bool IsDamageNumbersEnabled() const { return m_damageNumbersEnabled; }

    bool IsMenuOpen() const { return m_menuOpen || m_langSubmenuOpen; }
    void ToggleMenu() { SetMenuOpen(!m_menuOpen); }
    void SetMenuOpen(bool open) {
        m_menuOpen = open;
        if (!open) {
            m_langSubmenuOpen = false;
        }
        NoteTouchActivity();
#if !defined(__ANDROID__)
        if (SDL_Window* win = aurora_get_window()) {
            if (m_menuOpen || m_langSubmenuOpen) {
                SDL_ShowCursor();
                SDL_SetWindowRelativeMouseMode(win, false);
            } else {
                SDL_HideCursor();
                SDL_SetWindowRelativeMouseMode(win, true);
            }
        }
#endif
    }

    void OpenLanguageSubmenu() {
        m_langSubmenuOpen = true;
        m_langSubmenuCursor = m_langChoice;
#if !defined(__ANDROID__)
        if (SDL_Window* win = aurora_get_window()) {
            SDL_ShowCursor();
            SDL_SetWindowRelativeMouseMode(win, false);
        }
#endif
    }

    void CloseLanguageSubmenu() {
        m_langSubmenuOpen = false;
#if !defined(__ANDROID__)
        if (SDL_Window* win = aurora_get_window()) {
            if (!m_menuOpen) {
                SDL_HideCursor();
                SDL_SetWindowRelativeMouseMode(win, true);
            }
        }
#endif
    }

    bool IsLanguageSubmenuOpen() const {
#if MH3_ENABLE_NATIVE_LANG_MENU
        return m_langSubmenuOpen;
#else
        return false;
#endif
    }
    bool IsTitleOptionsMenuActive() const {
#if MH3_ENABLE_NATIVE_LANG_MENU
        if (!Memory::Contains(0x809D3568, 4)) return false;
        uint32_t titleWork = Memory::Read32(0x809D3568);
        if (!titleWork || !Memory::Contains(titleWork, 8)) return false;
        uint8_t state = Memory::Read8(titleWork);
        uint8_t substate = Memory::Read8(titleWork + 1);
        return (state == 24 && (substate == 0 || m_langSubmenuOpen));
#else
        return false;
#endif
    }
    bool IsTitleCursorOnLanguage() const { return m_titleCursorIdx == 5; }
    void CheckTitleOptionsKeyNav(int dir) {
        if (!IsTitleOptionsMenuActive()) return;
        uint32_t titleWork = Memory::Contains(0x809D3568, 4) ? Memory::Read32(0x809D3568) : 0;
        if (!titleWork || !Memory::Contains(titleWork, 4440)) return;
        uint8_t gameCursor = Memory::Read8(titleWork + 4430);
        if (dir > 0 && gameCursor == 4) {
            m_titleCursorIdx = 5;
        } else if (dir < 0 && m_titleCursorIdx == 5) {
            m_titleCursorIdx = -1;
        }
    }
    void LanguageSubmenuNav(int dir) {
        if (!m_langSubmenuOpen) return;
        m_langSubmenuCursor = (m_langSubmenuCursor + dir + 6) % 6;
    }
    void LanguageSubmenuConfirm() {
        if (!m_langSubmenuOpen) return;
        if (m_langSubmenuCursor >= 0 && m_langSubmenuCursor < 5) {
            ApplyLanguageHotSwap(m_langSubmenuCursor);
        } else {
            CloseLanguageSubmenu();
        }
    }

    void ApplyFullscreen(bool enabled) {
        m_fullscreen = enabled;
        aurora_set_fullscreen(enabled);
        ApplyAspectRatio(m_aspectIndex);
        SaveSettings();
    }

    void ToggleFullscreen() {
        ApplyFullscreen(!m_fullscreen);
    }

    void UpdateLayout(int width, int height) {
        if (width <= 0 || height <= 0) return;
        if (width == m_width && height == m_height) return;

        m_width = width;
        m_height = height;
        m_unit = float(height);

        RecalculateButtonPositions();
    }

    void RecalculateButtonPositions() {
        if (m_buttons.empty()) {
            InitDefaultButtons();
        }

        for (auto& btn : m_buttons) {
            btn.pos.x = btn.normPos.x * float(m_width);
            btn.pos.y = btn.normPos.y * float(m_height);
            btn.radius = btn.defaultNormRadius * m_unit * btn.scale;
        }

        // Left stick
        m_leftStickCenter = { m_normLeftStickPos.x * float(m_width), m_normLeftStickPos.y * float(m_height) };
        m_leftStickRadius = m_unit * 0.15f * m_leftStickScale;
        m_leftStickKnobRadius = m_unit * 0.075f * m_leftStickScale;
        m_leftStickPos = m_leftStickCenter;

        // Gear / Settings button
        m_gearPos = { float(m_width) * 0.5f + m_unit * 0.22f, m_unit * 0.075f };
        m_gearRadius = m_unit * 0.040f;
    }

    void InitDefaultButtons() {
        m_buttons.clear();

        // 1. Action Diamond (Lower-right corner)
        float diamondNormX = 0.90f;
        float diamondNormY = 0.77f;
        float spreadX = 0.055f;
        float spreadY = 0.10f;
        float btnR = 0.058f;

        // Macro Buttons FIRST (checked before individual buttons for collision priority)
        AddBtn("M1", "1", (MH3_CL_A | MH3_CL_X), { diamondNormX - spreadX * 1.8f, diamondNormY - spreadY * 0.8f }, btnR * 0.95f,
               { 0.85f, 0.30f, 0.60f, 0.60f }, { 1.0f, 0.45f, 0.80f, 0.95f });
        AddBtn("M2", "2", (MH3_CL_B | MH3_CL_Y), { diamondNormX - spreadX * 1.8f, diamondNormY + spreadY * 0.8f }, btnR * 0.95f,
               { 0.30f, 0.75f, 0.75f, 0.60f }, { 0.45f, 0.95f, 0.95f, 0.95f });
        AddBtn("M3", "3", (MH3_CL_L | MH3_CL_R), { 0.50f, 0.15f }, btnR * 0.85f,
               { 0.55f, 0.35f, 0.85f, 0.60f }, { 0.75f, 0.55f, 1.00f, 0.95f });
        AddBtn("M4", "A+B", (MH3_CL_A | MH3_CL_B), { diamondNormX + spreadX * 0.5f, diamondNormY + spreadY * 1.15f }, btnR * 0.95f,
               { 0.85f, 0.48f, 0.18f, 0.60f }, { 1.0f, 0.70f, 0.30f, 0.95f });

        // A, B, X, Y (after macros so macros win collision priority)
        AddBtn("A", "A", MH3_CL_A, { diamondNormX + spreadX, diamondNormY }, btnR,
               { 0.85f, 0.25f, 0.25f, 0.55f }, { 1.0f, 0.40f, 0.40f, 0.90f });
        AddBtn("B", "B", MH3_CL_B, { diamondNormX, diamondNormY + spreadY }, btnR,
               { 0.25f, 0.65f, 0.30f, 0.55f }, { 0.35f, 0.95f, 0.45f, 0.90f });
        AddBtn("X", "X", MH3_CL_X, { diamondNormX, diamondNormY - spreadY }, btnR,
               { 0.25f, 0.45f, 0.85f, 0.55f }, { 0.40f, 0.70f, 1.00f, 0.90f });
        AddBtn("Y", "Y", MH3_CL_Y, { diamondNormX - spreadX, diamondNormY }, btnR,
               { 0.75f, 0.65f, 0.20f, 0.55f }, { 0.95f, 0.85f, 0.30f, 0.90f });

        // Shoulders (Top corners)
        float topY = 0.10f;
        float shoulderR = 0.052f;
        AddBtn("L",  "L",  MH3_CL_L,  { 0.055f, topY }, shoulderR * 1.25f,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("ZL", "ZL", MH3_CL_ZL, { 0.125f, topY }, shoulderR * 1.10f,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("ZR", "ZR", MH3_CL_ZR, { 0.875f, topY }, shoulderR * 1.10f,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("R",  "R",  MH3_CL_R,  { 0.945f, topY }, shoulderR * 1.25f,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });

        // D-Pad (Clean arrows)
        float dpadX = 0.11f;
        float dpadY = 0.44f;
        float dpadSpreadX = 0.038f;
        float dpadSpreadY = 0.075f;
        float dpadR = 0.048f;
        AddBtn("UP",    "▲", MH3_CL_UP,    { dpadX, dpadY - dpadSpreadY }, dpadR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("DOWN",  "▼", MH3_CL_DOWN,  { dpadX, dpadY + dpadSpreadY }, dpadR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("LEFT",  "◀", MH3_CL_LEFT,  { dpadX - dpadSpreadX, dpadY }, dpadR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("RIGHT", "▶", MH3_CL_RIGHT, { dpadX + dpadSpreadX, dpadY }, dpadR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });

        // Menu Buttons (Top Center)
        float menuR = 0.040f;
        float menuY = 0.075f;
        AddBtn("MINUS", "-", MH3_CL_MINUS, { 0.46f, menuY }, menuR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
        AddBtn("PLUS",  "+", MH3_CL_PLUS,  { 0.54f, menuY }, menuR,
               { 0.15f, 0.22f, 0.28f, 0.55f }, { 0.65f, 0.85f, 1.00f, 0.85f });
    }

    void AddBtn(const std::string& id, const char* label, uint16_t mask, Vec2 normPos, float normRadius,
                Color base, Color border) {
        ConfigurableButton b;
        b.id = id;
        b.label = label;
        b.mask = mask;
        b.defaultNormPos = normPos;
        b.defaultNormRadius = normRadius;
        b.normPos = normPos;
        b.scale = 1.0f;
        b.baseColor = base;
        b.borderColor = border;
        m_buttons.push_back(b);
    }

    void HandleTouchDown(SDL_FingerID id, float normX, float normY) {
        if (!m_enabled) return;
        float px = normX * float(m_width);
        float py = normY * float(m_height);
        LOGI("TouchDown id=%lld norm=(%.3f, %.3f) px=(%.1f, %.1f) m_width=%d m_height=%d",
             (long long)id, normX, normY, px, py, m_width, m_height);

        // Si la rueda ⚙ está oculta por inactividad, este toque la revela sin pulsarla
        const bool gearHidden = GearAlpha() <= 0.0f;
        NoteTouchActivity();

        if (m_editMode) {
            HandleEditModeTouchDown(id, px, py);
            return;
        }

        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen) {
            BeginUiPointerDown(int(id), px, py);
            return;
        }

        if (IsTitleOptionsMenuActive()) {
            float bx, by, bw, bh;
            GetTitleLanguageButtonRect(&bx, &by, &bw, &bh);
            if (px >= bx && px <= bx + bw && py >= by && py <= by + bh) {
                BeginUiPointerDown(int(id), px, py);
                return;
            }
        }

        // Gameplay: Check Gear button tap
        float gdx = px - m_gearPos.x;
        float gdy = py - m_gearPos.y;
        if (gdx * gdx + gdy * gdy <= (m_gearRadius * 1.8f) * (m_gearRadius * 1.8f)) {
            if (gearHidden) return;
            SetMenuOpen(true);
            return;
        }

        if (!m_touchVisible) {
            if (PointerControls::IsActive()) {
                if (m_pointerFingerId < 0) {
                    m_pointerFingerId = int(id);
                    float gx = 0.0f, gy = 0.0f;
                    WindowToGameCoords(px, py, &gx, &gy);
                    PointerControls::SetTouchPosition(gx, gy);
                    PointerControls::SetTouchActive(true);
                    return;
                }
            }
            // Touch controls are hidden; still allow free swipe camera look on right side
            if (m_cameraFingerId < 0 && px >= float(m_width) * 0.40f) {
                m_cameraFingerId = int(id);
                m_cameraLastPos = { px, py };
                m_cameraTouchActive = true;
            }
            return;
        }

        // Buttons
        for (auto& btn : m_buttons) {
            if (!IsButtonActive(btn)) continue;
            float dx = px - btn.pos.x;
            float dy = py - btn.pos.y;
            if (dx * dx + dy * dy <= (btn.radius * 1.35f) * (btn.radius * 1.35f)) {
                btn.isPressed = true;
                btn.fingerId = int(id);
                m_latchedMask.fetch_or(uint32_t(btn.mask), std::memory_order_relaxed);
                if (btn.mask & MH3_CL_B) {
                    PointerControls::SetHoldingB(true);
                }
                LOGI("Hit Button '%s' (label=%s, mask=0x%04x)!", btn.id.c_str(), btn.label, btn.mask);
                return;
            }
        }

        // Pointer control when pointer is active
        if (PointerControls::IsActive()) {
            if (m_pointerFingerId < 0) {
                m_pointerFingerId = int(id);
                float gx = 0.0f, gy = 0.0f;
                WindowToGameCoords(px, py, &gx, &gy);
                PointerControls::SetTouchPosition(gx, gy);
                PointerControls::SetTouchActive(true);
                return;
            }
        }

        // Left Stick (Movement)
        if (px < float(m_width) * 0.45f) {
            if (m_leftFingerId < 0) {
                float dx = px - m_leftStickCenter.x;
                float dy = py - m_leftStickCenter.y;
                float distSq = dx * dx + dy * dy;
                if (distSq <= (m_leftStickRadius * 2.2f) * (m_leftStickRadius * 2.2f) || py > float(m_height) * 0.5f) {
                    m_leftFingerId = int(id);
                    UpdateLeftStickPosition(px, py);
                    return;
                }
            }
        }

        // Free Swipe Camera (Direct touch gesture without joystick limits)
        if (px >= float(m_width) * 0.40f) {
            if (m_cameraFingerId < 0) {
                m_cameraFingerId = int(id);
                m_cameraLastPos = { px, py };
                m_cameraTouchActive = true;
                return;
            }
        }
    }

    void HandleTouchMove(SDL_FingerID id, float normX, float normY) {
        if (!m_enabled) return;
        NoteTouchActivity();
        float px = normX * float(m_width);
        float py = normY * float(m_height);

        if (m_editMode) {
            if (m_editDragging && m_editFingerId == int(id)) {
                if (m_selectedButtonIndex >= 0 && m_selectedButtonIndex < int(m_buttons.size())) {
                    m_buttons[m_selectedButtonIndex].pos = { px, py };
                    m_buttons[m_selectedButtonIndex].normPos = { px / float(m_width), py / float(m_height) };
                } else if (m_selectedButtonIndex == -2) {
                    m_leftStickCenter = { px, py };
                    m_normLeftStickPos = { px / float(m_width), py / float(m_height) };
                    m_leftStickPos = m_leftStickCenter;
                }
            }
            return;
        }

        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen) {
            UpdateUiPointerMove(int(id), px, py);
            return;
        }

        if (m_pointerFingerId >= 0 && int(id) == m_pointerFingerId) {
            float gx = 0.0f, gy = 0.0f;
            WindowToGameCoords(px, py, &gx, &gy);
            PointerControls::SetTouchPosition(gx, gy);
            return;
        }

        if (PointerControls::IsActive()) {
            for (const auto& btn : m_buttons) {
                if ((btn.mask & MH3_CL_B) && btn.fingerId == int(id)) {
                    float dx = px - btn.pos.x;
                    float dy = py - btn.pos.y;
                    if (dx * dx + dy * dy > (btn.radius * 0.35f) * (btn.radius * 0.35f)) {
                        float gx = 0.0f, gy = 0.0f;
                        WindowToGameCoords(px, py, &gx, &gy);
                        PointerControls::SetTouchPosition(gx, gy);
                        PointerControls::SetTouchActive(true);
                    }
                    return;
                }
            }
        }

        if (int(id) == m_leftFingerId) {
            UpdateLeftStickPosition(px, py);
            return;
        }

        if (int(id) == m_cameraFingerId && m_cameraTouchActive) {
            float dx = px - m_cameraLastPos.x;
            float dy = py - m_cameraLastPos.y;
            m_cameraLastPos = { px, py };

            if (!PointerControls::IsActive()) {
                // Apply camera sensitivity multiplier
                m_cameraDeltaX += dx * m_cameraSensitivity;
                m_cameraDeltaY += dy * m_cameraSensitivity;
            }
            return;
        }
    }

    void HandleTouchUp(SDL_FingerID id) {
        if (!m_enabled) return;

        if (m_editMode) {
            if (m_editFingerId == int(id)) {
                m_editDragging = false;
                m_editFingerId = -1;
            }
            return;
        }

        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen || m_uiPointerId == int(id)) {
            EndUiPointerUp(int(id));
            return;
        }

        if (int(id) == m_pointerFingerId) {
            m_pointerFingerId = -1;
            PointerControls::SetTouchActive(false);
        }

        for (auto& btn : m_buttons) {
            if (btn.fingerId == int(id)) {
                btn.isPressed = false;
                btn.fingerId = -1;
                if (btn.mask & MH3_CL_B) {
                    PointerControls::SetHoldingB(false);
                    PointerControls::SetTouchActive(false);
                }
            }
        }

        if (int(id) == m_leftFingerId) {
            m_leftFingerId = -1;
            m_leftStickPos = m_leftStickCenter;
            m_leftX = 0;
            m_leftY = 0;
        }

        if (int(id) == m_cameraFingerId) {
            m_cameraFingerId = -1;
            m_cameraTouchActive = false;
        }
    }

    void HandleMouseDown(float px, float py) {
        if (!m_enabled) return;
        const bool gearHidden = GearAlpha() <= 0.0f;
        NoteTouchActivity();
        if (m_editMode) {
            HandleEditModeTouchDown(1, px, py);
            return;
        }
        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen) {
            BeginUiPointerDown(-99, px, py);
            return;
        }
        if (IsTitleOptionsMenuActive()) {
            float bx, by, bw, bh;
            GetTitleLanguageButtonRect(&bx, &by, &bw, &bh);
            if (px >= bx && px <= bx + bw && py >= by && py <= by + bh) {
                BeginUiPointerDown(-99, px, py);
                return;
            }
        }
        float gdx = px - m_gearPos.x;
        float gdy = py - m_gearPos.y;
        if (gdx * gdx + gdy * gdy <= (m_gearRadius * 2.0f) * (m_gearRadius * 2.0f)) {
            if (gearHidden) return;
            ToggleMenu();
            return;
        }
    }

    void HandleMouseUp(float px, float py) {
        (void)px; (void)py;
        if (m_editMode) {
            m_editDragging = false;
            m_editFingerId = -1;
            return;
        }
        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen || m_uiPointerId == -99) {
            EndUiPointerUp(-99);
            return;
        }
    }

    void HandleMouseMove(float px, float py) {
        if (m_editMode && m_editDragging) {
            if (m_selectedButtonIndex >= 0 && m_selectedButtonIndex < int(m_buttons.size())) {
                m_buttons[m_selectedButtonIndex].pos = { px, py };
                m_buttons[m_selectedButtonIndex].normPos = { px / float(m_width), py / float(m_height) };
            } else if (m_selectedButtonIndex == -2) {
                m_leftStickCenter = { px, py };
                m_normLeftStickPos = { px / float(m_width), py / float(m_height) };
                m_leftStickPos = m_leftStickCenter;
            }
            return;
        }
        if (m_skinEditMode || m_menuOpen || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen) {
            UpdateUiPointerMove(-99, px, py);
        } else if (IsTitleOptionsMenuActive()) {
            float bx, by, bw, bh;
            GetTitleLanguageButtonRect(&bx, &by, &bw, &bh);
            m_langBtnHovered = (px >= bx && px <= bx + bw && py >= by && py <= by + bh);
        }
    }

    void HandleMouseWheel(float wheelY) {
        if (!m_enabled) return;
        float step = 64.0f * std::clamp(float(m_height) / 720.0f, 0.85f, 2.2f);
        if (m_gamepadMappingOpen) {
            m_gamepadMapScrollY = std::clamp(m_gamepadMapScrollY - wheelY * step, 0.0f, m_gamepadMapMaxScrollY);
        } else if (m_skinEditMode && m_pngPickerOpen) {
            m_pngPickerScrollY = std::clamp(m_pngPickerScrollY - wheelY * step, 0.0f, m_pngPickerMaxScrollY);
        } else if (m_menuOpen) {
            m_menuScrollY = std::clamp(m_menuScrollY - wheelY * step, 0.0f, m_menuMaxScrollY);
        }
    }

    void UpdateLeftStickPosition(float px, float py) {
        float dx = px - m_leftStickCenter.x;
        float dy = py - m_leftStickCenter.y;
        float dist = std::sqrt(dx * dx + dy * dy);

        if (dist > m_leftStickRadius) {
            dx = (dx / dist) * m_leftStickRadius;
            dy = (dy / dist) * m_leftStickRadius;
        }

        m_leftStickPos = { m_leftStickCenter.x + dx, m_leftStickCenter.y + dy };

        float nx = dx / m_leftStickRadius;
        float ny = dy / m_leftStickRadius;
        mh3_classic_stick(nx, -ny, &mh3_gamepad_stick_curve, &m_leftX, &m_leftY);
    }

    bool IsButtonActive(const ConfigurableButton& btn) const {
        if (btn.id == "M1") return m_macro1Enabled;
        if (btn.id == "M2") return m_macro2Enabled;
        if (btn.id == "M3") return m_macro3Enabled;
        if (btn.id == "M4") return m_macro4Enabled;
        return true;
    }

    void WindowToGameCoords(float px, float py, float* outX, float* outY) const {
        float screen_w = 854.0f;
        float screen_h = 448.0f;
        if (Memory::Contains(0x8065B4C0, 8)) {
            float w = Memory::ReadFloat32(0x8065B4C0);
            float h = Memory::ReadFloat32(0x8065B4C4);
            if (w > 100.0f && h > 100.0f) {
                screen_w = w;
                screen_h = h;
            }
        }

        if (m_width <= 0 || m_height <= 0) {
            *outX = screen_w * 0.5f;
            *outY = screen_h * 0.5f;
            return;
        }

        if (m_aspectIndex == 1) {
            *outX = std::clamp(px / float(m_width), 0.0f, 1.0f) * screen_w;
            *outY = std::clamp(py / float(m_height), 0.0f, 1.0f) * screen_h;
            return;
        }

        float content_aspect = screen_w / screen_h;
        float vp_w = float(m_width);
        float vp_h = std::min(float(m_height), std::max(1.0f, float(std::lround(vp_w / content_aspect))));
        if (vp_h == float(m_height)) {
            vp_w = std::min(float(m_width), std::max(1.0f, float(std::lround(vp_h * content_aspect))));
        }
        float left = (float(m_width) - vp_w) * 0.5f;
        float top = (float(m_height) - vp_h) * 0.5f;

        float normX = std::clamp((px - left) / vp_w, 0.0f, 1.0f);
        float normY = std::clamp((py - top) / vp_h, 0.0f, 1.0f);

        *outX = normX * screen_w;
        *outY = normY * screen_h;
    }

    void UpdateSample(uint16_t* buttons, int16_t* leftX, int16_t* leftY,
                      int16_t* rightX, int16_t* rightY,
                      uint8_t* triggerL, uint8_t* triggerR) {
        if (!m_enabled || m_menuOpen || m_editMode || m_skinEditMode || m_gamepadMappingOpen || m_ipEditModalOpen || m_langSubmenuOpen) return;

        uint32_t latched = m_latchedMask.exchange(0, std::memory_order_relaxed);
        *buttons |= uint16_t(latched);

        for (const auto& btn : m_buttons) {
            if (btn.isPressed && IsButtonActive(btn)) {
                *buttons |= btn.mask;
            }
        }

        if (*buttons) {
            LOGI("UpdateSample buttons active: 0x%04x", *buttons);
        }

        if (m_leftFingerId >= 0) {
            *leftX = m_leftX;
            *leftY = m_leftY;
        }

        if (*buttons & MH3_CL_L)  *triggerL = 255;
        if (*buttons & MH3_CL_ZL) *triggerL = 255;
        if (*buttons & MH3_CL_R)  *triggerR = 255;
        if (*buttons & MH3_CL_ZR) *triggerR = 255;

        if (PointerControls::IsActive()) {
            if (rightX && rightY) {
                float rx = float(*rightX) / 511.0f;
                float ry = float(*rightY) / 511.0f;
                PointerControls::SetRightStick(rx, ry);
                *rightX = 0;
                *rightY = 0;
            }
            m_cameraDeltaX.store(0.0f, std::memory_order_relaxed);
            m_cameraDeltaY.store(0.0f, std::memory_order_relaxed);
        } else {
            PointerControls::SetRightStick(0.0f, 0.0f);
            float camX = m_cameraDeltaX.exchange(0.0f);
            float camY = m_cameraDeltaY.exchange(0.0f);
            if (std::abs(camX) > 0.01f || std::abs(camY) > 0.01f) {
                QueueTouchCameraDelta(camX, camY);
            }
        }
    }

    static float GetDeviceTemperature() {
        static float s_cachedTemp = 0.0f;
        static auto s_lastRead = std::chrono::steady_clock::now();
        auto now = std::chrono::steady_clock::now();
        if (s_cachedTemp > 0.0f && std::chrono::duration_cast<std::chrono::milliseconds>(now - s_lastRead).count() < 1500) {
            return s_cachedTemp;
        }
        s_lastRead = now;

        std::ifstream battFile("/sys/class/power_supply/battery/temp");
        if (battFile.is_open()) {
            int val = 0;
            if (battFile >> val && val > 0) {
                if (val > 1000) s_cachedTemp = float(val) / 1000.0f;
                else if (val > 100) s_cachedTemp = float(val) / 10.0f;
                else s_cachedTemp = float(val);
                return s_cachedTemp;
            }
        }

        for (int i = 0; i < 16; ++i) {
            char path[64];
            std::snprintf(path, sizeof(path), "/sys/class/thermal/thermal_zone%d/temp", i);
            std::ifstream tzFile(path);
            if (tzFile.is_open()) {
                int val = 0;
                if (tzFile >> val && val > 15000 && val < 110000) {
                    s_cachedTemp = float(val) / 1000.0f;
                    return s_cachedTemp;
                }
            }
        }
        return s_cachedTemp;
    }

    // -------------------------------------------------------------
    // Damage Numbers (World / Rise Style Floating Numbers)
    // -------------------------------------------------------------
    void OnMonsterDamage(uint32_t monster, int32_t damage) {
        if (!m_damageNumbersEnabled || damage <= 0 || monster == 0) return;
        if (!Memory::Contains(monster, 0x800)) return;

        float mx = Memory::ReadFloat32(monster + 0x188);
        float my = Memory::ReadFloat32(monster + 0x188 + 4);
        float mz = Memory::ReadFloat32(monster + 0x188 + 8);

        if (!std::isfinite(mx) || !std::isfinite(my) || !std::isfinite(mz)) return;

        float s1 = Memory::ReadFloat32(monster + 0x1CC);
        float s2 = Memory::ReadFloat32(monster + 0x1D0);
        float scale = (s1 > 0.0f && s2 > 0.0f && std::isfinite(s1) && std::isfinite(s2)) ? (s1 * s2) : 1.0f;
        if (scale < 0.2f || scale > 8.0f) scale = 1.0f;

        int32_t maxHp = int32_t(Memory::Read32(monster + 0x7A4));
        bool isLarge = (maxHp >= 400);
        bool isWeakspot = isLarge ? (damage >= 35) : (damage >= 22);
        bool isMassive = isLarge ? (damage >= 70) : (damage >= 45);

        float spawnX = mx;
        float spawnY = my + 130.0f * scale;
        float spawnZ = mz;

        uint32_t plw = Cheats::LocalPlayer();
        if (plw != 0 && Memory::Contains(plw, 0x100)) {
            float hx = Memory::ReadFloat32(plw + 0x3C);
            float hy = Memory::ReadFloat32(plw + 0x3C + 4);
            float hz = Memory::ReadFloat32(plw + 0x3C + 8);
            if (std::isfinite(hx) && std::isfinite(hy) && std::isfinite(hz)) {
                float dx = hx - mx;
                float dz = hz - mz;
                float distXZ = std::sqrt(dx * dx + dz * dz);
                if (distXZ > 1.0f) {
                    float shift = std::min(distXZ * 0.35f, 150.0f * scale);
                    spawnX += (dx / distXZ) * shift;
                    spawnZ += (dz / distXZ) * shift;
                }
                float targetY = std::max(my + 110.0f * scale, hy + 60.0f);
                spawnY = std::min(targetY, my + 300.0f * scale);
            }
        }

        static std::atomic<unsigned> s_seed{1337};
        unsigned s = s_seed.fetch_add(12345, std::memory_order_relaxed);
        s ^= s << 13; s ^= s >> 17; s ^= s << 5;
        float jx = float(int(s % 51) - 25) * 1.4f;
        float jz = float(int((s >> 8) % 51) - 25) * 1.4f;
        float jy = float(int((s >> 16) % 31) - 15) * 0.9f;

        spawnX += jx;
        spawnZ += jz;
        spawnY += jy;

        DamagePopup pop;
        pop.worldX = spawnX;
        pop.worldY = spawnY;
        pop.worldZ = spawnZ;
        pop.damage = damage;
        pop.timer = 0.0f;
        pop.lifetime = 0.95f;
        pop.isWeakspot = isWeakspot;
        pop.isMassive = isMassive;
        pop.floatSpeedY = 65.0f + float(s % 25);
        pop.driftX = jx * 0.35f;
        pop.driftZ = jz * 0.35f;

        std::lock_guard<std::mutex> lock(m_damageMutex);
        if (m_damagePopups.size() >= 48) {
            m_damagePopups.erase(m_damagePopups.begin());
        }
        m_damagePopups.push_back(pop);
    }

    bool ProjectWorldToScreen(float wx, float wy, float wz, float& outX, float& outY, float& outDist,
                              float vpX, float vpY, float vpW, float vpH, int winH) {
        if (!Memory::Contains(0x80688D94, 0x1A00)) {
            return false;
        }

        uint16_t cur = Memory::Read16(0x80688D94 + 2);
        if (cur >= 32) cur = 0;

        uint32_t viewAddr = 0x80688D94 + 0x34 + cur * 48;
        uint32_t projAddr = 0x80688D94 + 0x634 + cur * 64;

        float p0 = Memory::ReadFloat32(projAddr + 0);
        float p5 = Memory::ReadFloat32(projAddr + 20);
        float p2 = Memory::ReadFloat32(projAddr + 8);
        float p6 = Memory::ReadFloat32(projAddr + 24);

        if (p0 <= 0.0f || p5 <= 0.0f || !std::isfinite(p0) || !std::isfinite(p5)) {
            return false;
        }

        float v00 = Memory::ReadFloat32(viewAddr + 0);
        float v01 = Memory::ReadFloat32(viewAddr + 4);
        float v02 = Memory::ReadFloat32(viewAddr + 8);
        float v03 = Memory::ReadFloat32(viewAddr + 12);

        float v10 = Memory::ReadFloat32(viewAddr + 16);
        float v11 = Memory::ReadFloat32(viewAddr + 20);
        float v12 = Memory::ReadFloat32(viewAddr + 24);
        float v13 = Memory::ReadFloat32(viewAddr + 28);

        float v20 = Memory::ReadFloat32(viewAddr + 32);
        float v21 = Memory::ReadFloat32(viewAddr + 36);
        float v22 = Memory::ReadFloat32(viewAddr + 40);
        float v23 = Memory::ReadFloat32(viewAddr + 44);

        float vx = v00 * wx + v01 * wy + v02 * wz + v03;
        float vy = v10 * wx + v11 * wy + v12 * wz + v13;
        float vz = v20 * wx + v21 * wy + v22 * wz + v23;

        float w = -vz;
        if (w <= 20.0f) {
            return false; // Behind camera or closer than 20cm
        }

        float px = vx * p0 + vz * p2;
        float py = vy * p5 + vz * p6;

        float ndcX = px / w;
        float ndcY = py / w;

        if (ndcX < -1.4f || ndcX > 1.4f || ndcY < -1.4f || ndcY > 1.4f) {
            return false;
        }

        outX = vpX + (0.5f + 0.5f * ndcX) * vpW;
        float topOffset = float(winH) - (vpY + vpH);
        outY = topOffset + (0.5f - 0.5f * ndcY) * vpH;
        outDist = w;
        return true;
    }

    void RenderDamageNumbers(const int lastViewport[4]) {
        if (!m_damageNumbersEnabled) return;

        static auto s_lastTime = std::chrono::steady_clock::now();
        auto now = std::chrono::steady_clock::now();
        float dt = std::chrono::duration<float>(now - s_lastTime).count();
        s_lastTime = now;
        if (dt <= 0.0f || dt > 0.1f) dt = 0.01666f;

        std::vector<DamagePopup> active;
        {
            std::lock_guard<std::mutex> lock(m_damageMutex);
            for (auto& p : m_damagePopups) {
                p.timer += dt;
                p.worldY += p.floatSpeedY * dt;
                p.worldX += p.driftX * dt;
                p.worldZ += p.driftZ * dt;
                if (p.timer < p.lifetime) {
                    active.push_back(p);
                }
            }
            m_damagePopups = active;
        }

        if (active.empty()) return;

        float vpX = 0.0f, vpY = 0.0f, vpW = float(m_width), vpH = float(m_height);
        if (lastViewport[2] > 0 && lastViewport[3] > 0) {
            vpX = float(lastViewport[0]);
            vpY = float(lastViewport[1]);
            vpW = float(lastViewport[2]);
            vpH = float(lastViewport[3]);
        }

        const float S = UiScale();
        for (const auto& p : active) {
            float screenX = 0.0f, screenY = 0.0f, dist = 0.0f;
            if (!ProjectWorldToScreen(p.worldX, p.worldY, p.worldZ, screenX, screenY, dist, vpX, vpY, vpW, vpH, m_height)) {
                continue;
            }

            float popScale = 1.0f;
            if (p.timer < 0.12f) {
                float tNorm = p.timer / 0.12f;
                popScale = 0.55f + 0.80f * std::sin(tNorm * 3.14159f * 0.70f);
            }

            float distScale = std::clamp(650.0f / dist, 0.65f, 1.40f);
            float baseSize = p.isMassive ? 34.0f : (p.isWeakspot ? 29.0f : 24.0f);
            float finalSize = baseSize * popScale * distScale * S;

            float alpha = 1.0f;
            if (p.timer > 0.65f) {
                alpha = std::clamp(1.0f - (p.timer - 0.65f) / (p.lifetime - 0.65f), 0.0f, 1.0f);
            }

            float extraFloatY = (p.timer / p.lifetime) * (20.0f * S);
            float drawX = screenX;
            float drawY = screenY - extraFloatY;

            char numStr[16];
            std::snprintf(numStr, sizeof(numStr), "%d", p.damage);

            DrawDamageNumberLabel(drawX, drawY, numStr, finalSize, p.isWeakspot, p.isMassive, alpha);
        }
    }

    // -------------------------------------------------------------
    // OpenGL ES Rendering
    // -------------------------------------------------------------
    void RenderGL(int windowWidth, int windowHeight) {
        if (!m_enabled) return;
        UpdateLayout(windowWidth, windowHeight);

        static bool s_firstFrameApplied = false;
        if (!s_firstFrameApplied) {
            s_firstFrameApplied = true;
            ApplyResolutionScale(m_resolutionIndex);
            if (m_fullscreen) {
                ApplyFullscreen(true);
            } else {
                ApplyAspectRatio(m_aspectIndex);
            }
        }

        InitGL();
        if (!m_shaderProgram) return;

        // Compute Live FPS
        const auto now = std::chrono::steady_clock::now();
        static uint64_t lastCount = MH3FrameRateControl::LogicalFrameCount();
        static auto lastStamp = now;
        const double elapsed = std::chrono::duration<double>(now - lastStamp).count();
        if (elapsed >= 0.5) {
            const uint64_t count = MH3FrameRateControl::LogicalFrameCount();
            m_liveFps = double(count - lastCount) / elapsed;
            lastCount = count;
            lastStamp = now;
        }

        static bool s_firstFpsApplied = false;
        if (!s_firstFpsApplied) {
            s_firstFpsApplied = true;
            MH3FrameRateControl::SetTargetFPS(m_fpsLimit);
        }

        // Save OpenGL State
        GLint lastViewport[4]; glGetIntegerv(GL_VIEWPORT, lastViewport);
        GLboolean scissorEnabled = glIsEnabled(GL_SCISSOR_TEST);
        GLint lastScissor[4]; glGetIntegerv(GL_SCISSOR_BOX, lastScissor);
        GLboolean blendEnabled = glIsEnabled(GL_BLEND);
        GLboolean depthEnabled = glIsEnabled(GL_DEPTH_TEST);
        GLboolean cullEnabled = glIsEnabled(GL_CULL_FACE);
        GLint lastProgram = 0; glGetIntegerv(GL_CURRENT_PROGRAM, &lastProgram);
        GLint lastVAO = 0; glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &lastVAO);
        GLint lastVBO = 0; glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &lastVBO);
        GLint lastActiveTex = 0; glGetIntegerv(GL_ACTIVE_TEXTURE, &lastActiveTex);
        GLint lastTex = 0; glGetIntegerv(GL_TEXTURE_BINDING_2D, &lastTex);
        GLint lastSrcRgb = 0, lastDstRgb = 0, lastSrcAlpha = 0, lastDstAlpha = 0;
        glGetIntegerv(GL_BLEND_SRC_RGB, &lastSrcRgb);
        glGetIntegerv(GL_BLEND_DST_RGB, &lastDstRgb);
        glGetIntegerv(GL_BLEND_SRC_ALPHA, &lastSrcAlpha);
        glGetIntegerv(GL_BLEND_DST_ALPHA, &lastDstAlpha);

        glViewport(0, 0, windowWidth, windowHeight);
        glDisable(GL_SCISSOR_TEST);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_CULL_FACE);

        glUseProgram(m_shaderProgram);
        glUniform2f(m_uScreenSize, float(m_width), float(m_height));
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, m_fontTex);
        glUniform1i(m_uFontTex, 0);

        glBindVertexArray(m_vao);
        glBindBuffer(GL_ARRAY_BUFFER, m_vbo);

        m_verts.clear();
        m_hitZones.clear();
        m_activeClipX = 0.0f;
        m_activeClipY = 0.0f;
        m_activeClipW = float(m_width);
        m_activeClipH = float(m_height);

        if (m_editMode) {
            RenderEditMode();
        } else if (m_skinEditMode) {
            RenderSkinEditMode();
        } else if (m_gamepadMappingOpen) {
            RenderGamepadMappingModal();
        } else if (m_menuOpen) {
            RenderSettingsMenu();
            if (m_ipEditModalOpen) {
                RenderIpEditModal();
            }
        } else if (AndroidKeyboard_IsImeShowing()) {
            RenderFpsHud();
        } else {
            RenderDamageNumbers(lastViewport);

            if (m_touchVisible) {
                RenderGameplayOverlay();
            } else {
                // Controls hidden: render subtle floating gear icon to allow reopening settings
                float gAlpha = GearAlpha();
                if (gAlpha > 0.001f) {
                    const CustomSkinTex* gearSkin = GetSkinTex("GEAR");
                    if (gearSkin && gearSkin->tex) {
                        DrawCustomSkin(*gearSkin, false, m_gearPos.x, m_gearPos.y, m_gearRadius, 0.55f * gAlpha);
                    } else {
                        DrawAADisc(m_gearPos.x, m_gearPos.y, m_gearRadius,
                                   { 0.08f, 0.40f, 0.48f, 0.35f * gAlpha }, { 0.25f, 0.90f, 0.95f, 0.55f * gAlpha }, 0.10f);
                        DrawButtonLabel(m_gearPos.x, m_gearPos.y, "⚙", m_gearRadius * 1.05f, { 1.0f, 1.0f, 1.0f, 0.65f * gAlpha });
                    }
                }

                RenderFpsHud();
            }
        }

        RenderTitleLanguageOption();

        FlushVerts();

        // Restore OpenGL State
        glViewport(lastViewport[0], lastViewport[1], lastViewport[2], lastViewport[3]);
        if (scissorEnabled) { glEnable(GL_SCISSOR_TEST); glScissor(lastScissor[0], lastScissor[1], lastScissor[2], lastScissor[3]); }
        else { glDisable(GL_SCISSOR_TEST); }
        if (blendEnabled) {
            glEnable(GL_BLEND);
            glBlendFuncSeparate(lastSrcRgb, lastDstRgb, lastSrcAlpha, lastDstAlpha);
        } else {
            glDisable(GL_BLEND);
        }
        if (depthEnabled) glEnable(GL_DEPTH_TEST); else glDisable(GL_DEPTH_TEST);
        if (cullEnabled) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE);
        glUseProgram(lastProgram);
        glActiveTexture(lastActiveTex);
        glBindTexture(GL_TEXTURE_2D, lastTex);
        glBindVertexArray(lastVAO);
        glBindBuffer(GL_ARRAY_BUFFER, lastVBO);
    }

private:
    void InitGL() {
        if (m_shaderProgram) return;

        const char* vertShaderSrc =
            "#version 300 es\n"
            "precision highp float;\n"
            "layout(location = 0) in vec2 aPos;\n"
            "layout(location = 1) in vec2 aUV;\n"
            "layout(location = 2) in vec4 aColor;\n"
            "layout(location = 3) in vec4 aBorderColor;\n"
            "layout(location = 4) in vec4 aParams;\n"
            "uniform vec2 uScreenSize;\n"
            "out vec2 vUV;\n"
            "out vec4 vColor;\n"
            "out vec4 vBorderColor;\n"
            "out vec4 vParams;\n"
            "void main() {\n"
            "    vUV = aUV;\n"
            "    vColor = aColor;\n"
            "    vBorderColor = aBorderColor;\n"
            "    vParams = aParams;\n"
            "    vec2 clip = vec2(2.0 * aPos.x / uScreenSize.x - 1.0, 1.0 - 2.0 * aPos.y / uScreenSize.y);\n"
            "    gl_Position = vec4(clip, 0.0, 1.0);\n"
            "}\n";

        const char* fragShaderSrc =
            "#version 300 es\n"
            "precision highp float;\n"
            "in vec2 vUV;\n"
            "in vec4 vColor;\n"
            "in vec4 vBorderColor;\n"
            "in vec4 vParams;\n"
            "uniform sampler2D uFontTex;\n"
            "out vec4 FragColor;\n"
            "void main() {\n"
            "    float type = vParams.x;\n"
            "    if (type < 0.5) {\n" // 0: Anti-aliased Disc (Button/Stick)
            "        float d = length(vUV);\n"
            "        float f = vParams.z;\n"
            "        float alpha = smoothstep(1.0, 1.0 - f, d);\n"
            "        if (alpha <= 0.0) discard;\n"
            "        float dome = 1.0 - d * d * 0.35;\n"
            "        float topLight = clamp(0.75 - vUV.y * 0.40, 0.0, 1.2);\n"
            "        float spec = pow(clamp(1.0 - length(vUV - vec2(0.0, -0.40)), 0.0, 1.0), 3.0) * 0.30;\n"
            "        vec4 bodyCol = vec4(vColor.rgb * (dome * 0.70 + topLight * 0.30) + vec3(spec), vColor.a);\n"
            "        float ringThick = vParams.y;\n"
            "        float isBorder = smoothstep(1.0 - ringThick - f, 1.0 - ringThick, d);\n"
            "        float rimGrad = smoothstep(1.0 - ringThick, 1.0, d);\n"
            "        vec4 rimCol = vec4(vBorderColor.rgb * (0.85 + 0.35 * rimGrad), vBorderColor.a);\n"
            "        vec4 col = mix(bodyCol, rimCol, isBorder);\n"
            "        FragColor = vec4(col.rgb, col.a * alpha);\n"
            "    } else if (type < 1.5) {\n" // 1: Anti-aliased Ring
            "        float d = length(vUV);\n"
            "        float f = vParams.z;\n"
            "        float outer = smoothstep(1.0, 1.0 - f, d);\n"
            "        float inner = smoothstep(1.0 - vParams.y - f, 1.0 - vParams.y, d);\n"
            "        float alpha = outer * inner;\n"
            "        if (alpha <= 0.0) discard;\n"
            "        FragColor = vec4(vColor.rgb, vColor.a * alpha);\n"
            "    } else if (type < 2.5) {\n" // 2: Rounded Rect (Exact Pixel SDF)
            "        vec2 halfSize = vec2(vParams.w, vParams.y);\n"
            "        float rad = vParams.z;\n"
            "        vec2 q = abs(vUV) - (halfSize - vec2(rad));\n"
            "        float d = length(max(q, vec2(0.0))) + min(max(q.x, q.y), 0.0) - rad;\n"
            "        float alpha = smoothstep(1.0, -1.0, d);\n"
            "        if (alpha <= 0.0) discard;\n"
            "        float borderT = 1.5;\n"
            "        float isBorder = smoothstep(-borderT - 1.0, -borderT + 0.5, d);\n"
            "        vec3 col = mix(vColor.rgb, vBorderColor.rgb, isBorder);\n"
            "        FragColor = vec4(col, vColor.a * alpha);\n"
            "    } else if (type < 3.5) {\n" // 3: Font text
            "        float texA = texture(uFontTex, vUV).r;\n"
            "        if (texA < 0.02) discard;\n"
            "        FragColor = vec4(vColor.rgb, vColor.a * texA);\n"
            "    } else if (type < 4.5) {\n" // 4: Plain
            "        FragColor = vColor;\n"
            "    } else {\n" // 5: Custom RGBA PNG Texture
            "        vec4 texCol = texture(uFontTex, vUV);\n"
            "        if (texCol.a < 0.01) discard;\n"
            "        FragColor = texCol * vColor;\n"
            "    }\n"
            "}\n";

        GLuint vs = CompileShader(GL_VERTEX_SHADER, vertShaderSrc);
        GLuint fs = CompileShader(GL_FRAGMENT_SHADER, fragShaderSrc);
        if (!vs || !fs) return;

        m_shaderProgram = glCreateProgram();
        glAttachShader(m_shaderProgram, vs);
        glAttachShader(m_shaderProgram, fs);
        glLinkProgram(m_shaderProgram);
        glDeleteShader(vs);
        glDeleteShader(fs);

        m_uScreenSize = glGetUniformLocation(m_shaderProgram, "uScreenSize");
        m_uFontTex = glGetUniformLocation(m_shaderProgram, "uFontTex");

        glGenVertexArrays(1, &m_vao);
        glGenBuffers(1, &m_vbo);

        glBindVertexArray(m_vao);
        glBindBuffer(GL_ARRAY_BUFFER, m_vbo);

        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(UIVertex), (void*)offsetof(UIVertex, x));
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(UIVertex), (void*)offsetof(UIVertex, u));
        glEnableVertexAttribArray(2);
        glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(UIVertex), (void*)offsetof(UIVertex, r));
        glEnableVertexAttribArray(3);
        glVertexAttribPointer(3, 4, GL_FLOAT, GL_FALSE, sizeof(UIVertex), (void*)offsetof(UIVertex, br));
        glEnableVertexAttribArray(4);
        glVertexAttribPointer(4, 4, GL_FLOAT, GL_FALSE, sizeof(UIVertex), (void*)offsetof(UIVertex, type));

        glBindVertexArray(0);

        // Upload Font Atlas
        std::vector<uint8_t> fontPixels(FONT_RAW_SIZE);
        DecompressFontAtlas(fontPixels.data());

        glGenTextures(1, &m_fontTex);
        glBindTexture(GL_TEXTURE_2D, m_fontTex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, FONT_ATLAS_WIDTH, FONT_ATLAS_HEIGHT, 0, GL_RED, GL_UNSIGNED_BYTE, fontPixels.data());
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glBindTexture(GL_TEXTURE_2D, 0);
    }

    GLuint CompileShader(GLenum type, const char* src) {
        GLuint s = glCreateShader(type);
        glShaderSource(s, 1, &src, nullptr);
        glCompileShader(s);
        GLint ok = 0;
        glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
        if (!ok) {
            char log[512];
            glGetShaderInfoLog(s, sizeof(log), nullptr, log);
            LOGE("Touch Shader Compile Error: %s", log);
            glDeleteShader(s);
            return 0;
        }
        return s;
    }

    // Geometry Helpers
    void DrawAADisc(float cx, float cy, float radius, Color col, Color border, float borderThick = 0.08f) {
        float x0 = cx - radius, y0 = cy - radius;
        float x1 = cx + radius, y1 = cy + radius;
        float feather = 1.5f / std::max(radius, 1.0f);

        m_verts.push_back({ x0, y0, -1.0f, -1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });
        m_verts.push_back({ x1, y0,  1.0f, -1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });
        m_verts.push_back({ x0, y1, -1.0f,  1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });

        m_verts.push_back({ x1, y0,  1.0f, -1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });
        m_verts.push_back({ x1, y1,  1.0f,  1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });
        m_verts.push_back({ x0, y1, -1.0f,  1.0f, col.r, col.g, col.b, col.a, border.r, border.g, border.b, border.a, 0.0f, borderThick, feather, 0.0f });
    }

    void DrawAARing(float cx, float cy, float radius, float thickness, Color col) {
        float x0 = cx - radius, y0 = cy - radius;
        float x1 = cx + radius, y1 = cy + radius;
        float feather = 1.5f / std::max(radius, 1.0f);
        float normThick = thickness / radius;

        m_verts.push_back({ x0, y0, -1.0f, -1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });
        m_verts.push_back({ x1, y0,  1.0f, -1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });
        m_verts.push_back({ x0, y1, -1.0f,  1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });

        m_verts.push_back({ x1, y0,  1.0f, -1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });
        m_verts.push_back({ x1, y1,  1.0f,  1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });
        m_verts.push_back({ x0, y1, -1.0f,  1.0f, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 1.0f, normThick, feather, 0.0f });
    }

    void DrawRoundedRect(float x, float y, float w, float h, float radius, Color fill, Color border) {
        float halfW = w * 0.5f;
        float halfH = h * 0.5f;
        radius = std::min(radius, std::min(halfW, halfH));

        // u, v are local offsets in pixels [-halfW, halfW], [-halfH, halfH]
        // vParams: x = 2.0f, y = halfH, z = radius, w = halfW
        m_verts.push_back({ x,     y,     -halfW, -halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });
        m_verts.push_back({ x + w, y,      halfW, -halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });
        m_verts.push_back({ x,     y + h, -halfW,  halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });

        m_verts.push_back({ x + w, y,      halfW, -halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });
        m_verts.push_back({ x + w, y + h,  halfW,  halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });
        m_verts.push_back({ x,     y + h, -halfW,  halfH, fill.r, fill.g, fill.b, fill.a, border.r, border.g, border.b, border.a, 2.0f, halfH, radius, halfW });
    }

    void DrawRectSolid(float x, float y, float w, float h, Color col) {
        m_verts.push_back({ x,     y,     0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y,     0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, 0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });

        m_verts.push_back({ x + w, y,     0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y + h, 0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, 0, 0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 4.0f, 0, 0, 0 });
    }

    void FlushVerts() {
        if (m_verts.empty()) return;
        glBufferData(GL_ARRAY_BUFFER, m_verts.size() * sizeof(UIVertex), m_verts.data(), GL_STREAM_DRAW);
        glDrawArrays(GL_TRIANGLES, 0, GLsizei(m_verts.size()));
        m_verts.clear();
    }

    void SetScissorClip(float x, float y, float w, float h) {
        FlushVerts();
        m_activeClipX = x;
        m_activeClipY = y;
        m_activeClipW = std::max(0.0f, w);
        m_activeClipH = std::max(0.0f, h);
        glEnable(GL_SCISSOR_TEST);
        int sx = int(std::floor(x));
        int sy = int(std::floor(float(m_height) - (y + h)));
        int sw = std::max(0, int(std::ceil(w)));
        int sh = std::max(0, int(std::ceil(h)));
        glScissor(sx, sy, sw, sh);
    }

    void ClearScissorClip() {
        FlushVerts();
        glDisable(GL_SCISSOR_TEST);
        m_activeClipX = 0.0f;
        m_activeClipY = 0.0f;
        m_activeClipW = float(m_width);
        m_activeClipH = float(m_height);
    }

    void RegisterHitZone(float x, float y, float w, float h, std::function<void()> onClick) {
        m_hitZones.push_back({ x, y, w, h, m_activeClipX, m_activeClipY, m_activeClipW, m_activeClipH, std::move(onClick) });
    }

    void DrawQuadTextured(float x, float y, float w, float h, float u0, float v0, float u1, float v1, Color col) {
        m_verts.push_back({ x,     y,     u0, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y,     u1, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, u0, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });

        m_verts.push_back({ x + w, y,     u1, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y + h, u1, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, u0, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
    }

    void DrawCustomTexQuad(GLuint tex, float cx, float cy, float w, float h, Color tint) {
        if (!tex) return;
        FlushVerts();
        glBindTexture(GL_TEXTURE_2D, tex);
        float x = cx - w * 0.5f;
        float y = cy - h * 0.5f;
        m_verts.push_back({ x,     y,     0.0f, 0.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y,     1.0f, 0.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, 0.0f, 1.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });

        m_verts.push_back({ x + w, y,     1.0f, 0.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y + h, 1.0f, 1.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, 0.0f, 1.0f, tint.r, tint.g, tint.b, tint.a, 0, 0, 0, 0, 5.0f, 0, 0, 0 });
        FlushVerts();
        glBindTexture(GL_TEXTURE_2D, m_fontTex);
    }

    void DrawCustomSkin(const CustomSkinTex& skin, bool isPressed, float cx, float cy, float r, float alpha) {
        GLuint tex = (isPressed && skin.pressedTex) ? skin.pressedTex : skin.tex;
        if (!tex) return;
        float w = r * 2.12f;
        float h = r * 2.12f;
        if (skin.aspect >= 1.0f) {
            w = r * 2.12f * (skin.aspect > 1.25f ? 1.12f : 1.0f);
            h = w / std::max(skin.aspect, 0.1f);
        } else {
            h = r * 2.12f;
            w = h * std::max(skin.aspect, 0.1f);
        }
        if (isPressed && !skin.pressedTex) {
            w *= 0.93f;
            h *= 0.93f;
        }
        Color tint = (isPressed && !skin.pressedTex)
            ? Color{ 0.85f, 0.95f, 1.0f, alpha }
            : Color{ 1.0f, 1.0f, 1.0f, alpha };
        DrawCustomTexQuad(tex, cx, cy, w, h, tint);
    }

    uint32_t DecodeUtf8(const char*& p) {
        uint8_t c = (uint8_t)*p++;
        if (c < 0x80) return c;
        if ((c & 0xE0) == 0xC0) {
            uint8_t c2 = (uint8_t)*p++;
            return ((c & 0x1F) << 6) | (c2 & 0x3F);
        }
        if ((c & 0xF0) == 0xE0) {
            uint8_t c2 = (uint8_t)*p++;
            uint8_t c3 = (uint8_t)*p++;
            return ((c & 0x0F) << 12) | ((c2 & 0x3F) << 6) | (c3 & 0x3F);
        }
        return c;
    }

    float MeasureText(const char* text, float size) {
        if (!text) return 0.0f;
        float scale = size / BASE_FONT_SIZE;
        float totalW = 0.0f;
        const char* p = text;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            totalW += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }
        return totalW;
    }

    void DrawText(float x, float y, const char* text, float size, Color col, bool center = false) {
        if (!text) return;
        float scale = size / BASE_FONT_SIZE;
        if (center) {
            float w = MeasureText(text, size);
            x -= w * 0.5f;
        }

        // Align top of uppercase glyphs with y (atlas glyphs have ~15px top ascender margin)
        float baseOffset = -14.5f * scale;

        // Drop shadow for crisp readability
        float shadowOffset = std::max(1.0f, size * 0.05f);
        Color shadowCol = { 0.0f, 0.0f, 0.0f, col.a * 0.85f };
        const char* p = text;
        float curX = x;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                float gx = curX + g->offX * scale + shadowOffset;
                float gy = y + baseOffset + g->offY * scale + shadowOffset;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, shadowCol);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }

        p = text;
        curX = x;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                float gx = curX + g->offX * scale;
                float gy = y + baseOffset + g->offY * scale;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, col);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }
    }

    void DrawTextRaw(float x, float y, const char* text, float size, Color col) {
        if (!text || col.a <= 0.001f) return;
        float scale = size / BASE_FONT_SIZE;
        float baseOffset = -14.5f * scale;
        const char* p = text;
        float curX = x;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                float gx = curX + g->offX * scale;
                float gy = y + baseOffset + g->offY * scale;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, col);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }
    }

    void DrawDamageNumberLabel(float cx, float cy, const char* text, float size, bool isWeakspot, bool isMassive, float alpha) {
        if (!text || size <= 0.0f || alpha <= 0.001f) return;

        float totalW = MeasureText(text, size);
        float x = cx - totalW * 0.5f;
        float y = cy;

        float outlineDist = std::max(1.8f, size * 0.065f);
        Color outlineCol = { 0.02f, 0.02f, 0.02f, alpha * 0.95f };

        // 8-direction thick outline for crisp contrast against any terrain
        const float offsets[8][2] = {
            { -outlineDist, 0.0f },
            {  outlineDist, 0.0f },
            { 0.0f, -outlineDist },
            { 0.0f,  outlineDist },
            { -outlineDist * 0.707f, -outlineDist * 0.707f },
            {  outlineDist * 0.707f, -outlineDist * 0.707f },
            { -outlineDist * 0.707f,  outlineDist * 0.707f },
            {  outlineDist * 0.707f,  outlineDist * 0.707f }
        };

        for (int i = 0; i < 8; ++i) {
            DrawTextRaw(x + offsets[i][0], y + offsets[i][1], text, size, outlineCol);
        }

        // Secondary drop shadow for depth
        float shadowOffset = outlineDist * 1.5f;
        Color deepShadow = { 0.0f, 0.0f, 0.0f, alpha * 0.70f };
        DrawTextRaw(x + shadowOffset, y + shadowOffset, text, size, deepShadow);

        // Core fill color
        Color mainCol;
        if (isMassive) {
            mainCol = { 1.0f, 0.84f, 0.18f, alpha }; // Radiant amber-gold
        } else if (isWeakspot) {
            mainCol = { 1.0f, 0.68f, 0.08f, alpha }; // Iconic MHW/Rise Orange-Gold
        } else {
            mainCol = { 1.0f, 1.0f, 1.0f, alpha }; // Crisp Pure White
        }

        DrawTextRaw(x, y, text, size, mainCol);

        // Top specular highlight core for weakspots and massive hits
        if (isWeakspot || isMassive) {
            Color highlightCol = { 1.0f, 0.96f, 0.65f, alpha * 0.70f };
            float innerSize = size * 0.90f;
            float innerW = MeasureText(text, innerSize);
            float innerX = cx - innerW * 0.5f;
            float innerY = cy - (size - innerSize) * 0.35f;
            DrawTextRaw(innerX, innerY, text, innerSize, highlightCol);
        }
    }

    void DrawButtonLabel(float cx, float cy, const char* label, float size, Color col) {
        if (!label) return;
        float scale = size / BASE_FONT_SIZE;
        float totalW = MeasureText(label, size);

        float minOffY = 9999.0f;
        float maxBottomY = -9999.0f;
        const char* pCheck = label;
        while (*pCheck) {
            uint32_t cp = DecodeUtf8(pCheck);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                minOffY = std::min(minOffY, g->offY);
                maxBottomY = std::max(maxBottomY, g->offY + g->h);
            }
        }
        if (minOffY > 9000.0f) {
            minOffY = 0.0f;
            maxBottomY = BASE_FONT_SIZE;
        }

        float visualCenterY = (minOffY + maxBottomY) * 0.5f * scale;
        float startX = cx - totalW * 0.5f;
        float startY = cy - visualCenterY;

        // Shadow pass for crisp contrast
        float shadowOffset = std::max(1.5f, size * 0.045f);
        Color shadowCol = { 0.0f, 0.0f, 0.0f, col.a * 0.75f };
        const char* p = label;
        float curX = startX;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                float gx = curX + g->offX * scale + shadowOffset;
                float gy = startY + g->offY * scale + shadowOffset;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, shadowCol);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }

        // Foreground glyph pass
        p = label;
        curX = startX;
        while (*p) {
            uint32_t cp = DecodeUtf8(p);
            const auto* g = FindFontGlyph(cp);
            if (g && g->w > 0 && g->h > 0) {
                float gx = curX + g->offX * scale;
                float gy = startY + g->offY * scale;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, col);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
        }
    }

    // -------------------------------------------------------------
    // Screen Rendering Modes
    // -------------------------------------------------------------
    void RenderFpsHud() {
        if (!m_showFpsHud) return;

        float temp = GetDeviceTemperature();
        char hudStr[48];
        if (temp > 0.0f) {
            std::snprintf(hudStr, sizeof(hudStr), "%u FPS | %.1f°C", unsigned(m_liveFps + 0.5), temp);
        } else {
            std::snprintf(hudStr, sizeof(hudStr), "%u FPS", unsigned(m_liveFps + 0.5));
        }

        float pillW = (temp > 0.0f) ? (m_unit * 0.22f) : (m_unit * 0.16f);
        float pillH = m_unit * 0.052f;
        float pillX = m_unit * 0.025f;
        float pillY = float(m_height) - pillH - m_unit * 0.025f;

        DrawRoundedRect(pillX, pillY, pillW, pillH, pillH * 0.5f,
                        { 0.035f, 0.125f, 0.176f, 0.88f }, COL_CYAN);
        DrawButtonLabel(pillX + pillW * 0.5f, pillY + pillH * 0.5f, hudStr, pillH * 0.52f, COL_CYAN);
    }

    void GetDpadBounds(Vec2& outCenter, float& outRadius, bool& outAnyPressed) const {
        float minX = 99999.0f, minY = 99999.0f;
        float maxX = -99999.0f, maxY = -99999.0f;
        outAnyPressed = false;
        for (const auto& btn : m_buttons) {
            if (btn.id == "UP" || btn.id == "DOWN" || btn.id == "LEFT" || btn.id == "RIGHT") {
                minX = std::min(minX, btn.pos.x - btn.radius);
                minY = std::min(minY, btn.pos.y - btn.radius);
                maxX = std::max(maxX, btn.pos.x + btn.radius);
                maxY = std::max(maxY, btn.pos.y + btn.radius);
                if (btn.isPressed) outAnyPressed = true;
            }
        }
        if (minX > maxX) {
            outCenter = { float(m_width) * 0.11f, float(m_height) * 0.44f };
            outRadius = m_unit * 0.12f;
        } else {
            outCenter = { (minX + maxX) * 0.5f, (minY + maxY) * 0.5f };
            outRadius = std::max(maxX - minX, maxY - minY) * 0.5f;
        }
    }

    void RenderGameplayOverlay() {
        float op = std::clamp(m_buttonOpacity, 0.10f, 1.0f);

        // 1. Fixed Left Stick
        const CustomSkinTex* stickBaseSkin = GetSkinTex("STICK_BASE");
        const CustomSkinTex* stickKnobSkin = GetSkinTex("STICK_KNOB");
        bool leftHeld = (m_leftFingerId >= 0);

        if (stickBaseSkin && stickBaseSkin->tex) {
            DrawCustomSkin(*stickBaseSkin, false, m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, op);
        } else {
            DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, 3.5f, { 0.30f, 0.70f, 0.88f, 0.55f * op });
            DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius * 0.50f, 1.5f, { 0.20f, 0.50f, 0.70f, 0.25f * op });

            float dotR = 3.0f;
            Color dotCol = { 0.45f, 0.85f, 1.00f, 0.70f * op };
            DrawAADisc(m_leftStickCenter.x, m_leftStickCenter.y - m_leftStickRadius, dotR, dotCol, dotCol);
            DrawAADisc(m_leftStickCenter.x, m_leftStickCenter.y + m_leftStickRadius, dotR, dotCol, dotCol);
            DrawAADisc(m_leftStickCenter.x - m_leftStickRadius, m_leftStickCenter.y, dotR, dotCol, dotCol);
            DrawAADisc(m_leftStickCenter.x + m_leftStickRadius, m_leftStickCenter.y, dotR, dotCol, dotCol);
        }

        if (stickKnobSkin && stickKnobSkin->tex) {
            DrawCustomSkin(*stickKnobSkin, leftHeld, m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius * 1.15f, op);
        } else {
            DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius,
                       leftHeld ? Color{ 0.15f, 0.50f, 0.70f, 0.90f * op } : Color{ 0.10f, 0.32f, 0.45f, 0.80f * op },
                       leftHeld ? Color{ 1.0f, 1.0f, 1.0f, 0.98f * op } : Color{ 0.50f, 0.88f, 1.00f, 0.95f * op }, 0.12f);
            DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius * 0.35f,
                       { 0.05f, 0.18f, 0.28f, 0.90f * op }, { 0.35f, 0.75f, 0.95f, 0.85f * op }, 0.20f);
        }

        // 2. Unified D-Pad skin check
        const CustomSkinTex* dpadSkin = GetSkinTex("DPAD");
        bool hasUnifiedDpad = (dpadSkin && dpadSkin->tex != 0);
        if (hasUnifiedDpad) {
            Vec2 dpadCenter;
            float dpadRad = 0.0f;
            bool dpadPressed = false;
            GetDpadBounds(dpadCenter, dpadRad, dpadPressed);
            DrawCustomSkin(*dpadSkin, dpadPressed, dpadCenter.x, dpadCenter.y, dpadRad * 0.96f, op);
        }

        // 4. Gameplay Buttons (ABXY, Shoulders, D-pad, Menu, Macros)
        for (const auto& btn : m_buttons) {
            if (!IsButtonActive(btn)) continue;
            bool isDpadBtn = (btn.id == "UP" || btn.id == "DOWN" || btn.id == "LEFT" || btn.id == "RIGHT");
            const CustomSkinTex* btnSkin = GetSkinTex(btn.id);
            if (btnSkin && btnSkin->tex) {
                DrawCustomSkin(*btnSkin, btn.isPressed, btn.pos.x, btn.pos.y, btn.radius, op);
                continue;
            }
            if (isDpadBtn && hasUnifiedDpad) {
                if (btn.isPressed) {
                    DrawAADisc(btn.pos.x, btn.pos.y, btn.radius * 0.75f,
                               { 0.25f, 0.85f, 0.95f, 0.35f * op }, { 1.0f, 1.0f, 1.0f, 0.65f * op }, 0.10f);
                }
                continue;
            }

            Color base = btn.isPressed ? Color{ std::min(1.0f, btn.baseColor.r * 1.4f), std::min(1.0f, btn.baseColor.g * 1.4f), std::min(1.0f, btn.baseColor.b * 1.4f), 0.90f } : btn.baseColor;
            Color border = btn.isPressed ? Color{ 1.0f, 1.0f, 1.0f, 1.0f } : btn.borderColor;
            base.a *= op;
            border.a *= op;

            DrawAADisc(btn.pos.x, btn.pos.y, btn.radius, base, border, 0.09f);

            float textSize = btn.radius * 0.95f;
            Color textCol = COL_WHITE;
            textCol.a *= op;
            DrawButtonLabel(btn.pos.x, btn.pos.y, btn.label, textSize, textCol);
        }

        // 5. Gear / Menu Button
        float gAlpha = GearAlpha();
        if (gAlpha > 0.001f) {
            const CustomSkinTex* gearSkin = GetSkinTex("GEAR");
            if (gearSkin && gearSkin->tex) {
                DrawCustomSkin(*gearSkin, false, m_gearPos.x, m_gearPos.y, m_gearRadius, op * gAlpha);
            } else {
                DrawAADisc(m_gearPos.x, m_gearPos.y, m_gearRadius,
                           { 0.08f, 0.40f, 0.48f, 0.75f * op * gAlpha }, { 0.25f, 0.90f, 0.95f, 0.95f * op * gAlpha }, 0.10f);
                Color gearText = COL_WHITE;
                gearText.a *= op * gAlpha;
                DrawButtonLabel(m_gearPos.x, m_gearPos.y, "⚙", m_gearRadius * 1.05f, gearText);
            }
        }

        // 6. FPS HUD Pill (if enabled)
        RenderFpsHud();
    }

    inline const char* Tr(const char* es, const char* en) const {
        return (m_menuLang == 1) ? en : es;
    }

    float UiScale() const {
        return std::clamp(float(m_height) / 720.0f, 0.85f, 2.2f);
    }

    void DrawModernCard(float x, float y, float w, float h, float S, const char* title, const char* subtitle, Color subCol = COL_MUTED) {
        DrawRoundedRect(x, y, w, h, 14.0f * S, { 0.032f, 0.118f, 0.168f, 0.95f }, { 0.11f, 0.36f, 0.45f, 1.0f });
        // Left cyan accent bar for modern visual hierarchy
        DrawRoundedRect(x + 8.0f * S, y + 12.0f * S, 4.5f * S, h - 24.0f * S, 2.2f * S, COL_CYAN, COL_CYAN);
        DrawText(x + 24.0f * S, y + 14.0f * S, title, 21.0f * S, COL_WHITE);
        if (subtitle && *subtitle) {
            DrawText(x + 24.0f * S, y + 43.0f * S, subtitle, 14.5f * S, subCol);
        }
    }

    void DrawInteractiveButton(float x, float y, float w, float h, float S, const char* label, bool active,
                               std::function<void()> onClick, float fontSize = 0.0f,
                               Color customFill = {0,0,0,0}, Color customBorder = {0,0,0,0}) {
        Color fill = (customFill.a > 0.0f) ? customFill : (active ? COL_ACTIVE_CHIP : Color{ 0.05f, 0.165f, 0.23f, 0.95f });
        Color border = (customBorder.a > 0.0f) ? customBorder : (active ? COL_CYAN : Color{ 0.13f, 0.40f, 0.50f, 1.0f });
        Color textCol = (customFill.a > 0.0f) ? COL_WHITE : (active ? COL_ACTIVE_TEXT : COL_WHITE);
        float fSize = (fontSize > 0.0f) ? fontSize : (16.0f * S);

        DrawRoundedRect(x, y, w, h, 10.0f * S, fill, border);
        DrawButtonLabel(x + w * 0.5f, y + h * 0.5f, label, fSize, textCol);
        if (onClick) {
            RegisterHitZone(x, y, w, h, std::move(onClick));
        }
    }

    void RenderSettingsMenu() {
        const float S = UiScale();

        // Semi-transparent Scrim
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.76f });

        // Container Window (Modern Laguna de Moga dark ocean aesthetic)
        float padX = float(m_width) * 0.045f;
        float padY = float(m_height) * 0.035f;
        float panW = float(m_width) - padX * 2.0f;
        float panH = float(m_height) - padY * 2.0f;

        DrawRoundedRect(padX, padY, panW, panH, 18.0f * S, COL_BG_DARK, COL_PANEL_BORDER);

        // Header Title & Subtitle
        const char* titles_es[] = { "Gráficos", "Sistema", "Guardados", "Controles", "Online" };
        const char* titles_en[] = { "Graphics", "System", "Saves", "Controls", "Online" };
        const char* const* titles = (m_menuLang == 1) ? titles_en : titles_es;

        const char* subtitles_es[] = {
            "Pantalla, resolución, fotogramas e iluminación",
            "Idioma del menú, idioma del juego y reinicio rápido",
            "Gestor de partidas guardadas (Dolphin / Wii NAND)",
            "Controles táctiles, diseño de botones (.PNG), mando y macros",
            "Multijugador online en servidores comunitarios MH3SP"
        };
        const char* subtitles_en[] = {
            "Display, resolution, framerate and lighting",
            "Menu language, game language and quick restart",
            "Save file manager (Dolphin / Wii NAND)",
            "Touch controls, custom button skins (.PNG), gamepad and macros",
            "Online multiplayer on MH3SP community servers"
        };
        const char* const* subtitles = (m_menuLang == 1) ? subtitles_en : subtitles_es;

        DrawText(padX + 26.0f * S, padY + 14.0f * S, titles[m_menuTab], 28.0f * S, COL_WHITE);
        DrawText(padX + 26.0f * S, padY + 48.0f * S, subtitles[m_menuTab], 15.0f * S, COL_MUTED);

        // Header Right: FPS Badge & Close Button
        char fpsStr[32];
        std::snprintf(fpsStr, sizeof(fpsStr), "FPS  %u", unsigned(m_liveFps + 0.5));
        float closeS = 44.0f * S;
        float closeX = padX + panW - closeS - 22.0f * S;
        float closeY = padY + 18.0f * S;

        float fpsW = 128.0f * S, fpsH = 44.0f * S;
        float fpsX = closeX - fpsW - 12.0f * S;
        float fpsY = closeY;
        DrawRoundedRect(fpsX, fpsY, fpsW, fpsH, fpsH * 0.5f, { 0.035f, 0.125f, 0.176f, 0.95f }, COL_CYAN);
        DrawButtonLabel(fpsX + fpsW * 0.5f, fpsY + fpsH * 0.5f, fpsStr, 16.0f * S, COL_CYAN);

        // Close Button [✕]
        DrawInteractiveButton(closeX, closeY, closeS, closeS, S, "✕", false,
                              [this]() { SetMenuOpen(false); }, 21.0f * S,
                              { 0.35f, 0.12f, 0.16f, 0.95f }, { 0.85f, 0.32f, 0.38f, 1.0f });

        // Horizontal divider line
        float divY = padY + 76.0f * S;
        DrawRectSolid(padX + 22.0f * S, divY, panW - 44.0f * S, 1.5f * S, COL_PANEL_BORDER);

        // Tab Navigation Bar
        float tabY = divY + 10.0f * S;
        float tabGap = 10.0f * S;
        float tabW = (panW - 44.0f * S - tabGap * 4.0f) / 5.0f;
        float tabH = 50.0f * S;
        for (int i = 0; i < 5; ++i) {
            float tx = padX + 22.0f * S + float(i) * (tabW + tabGap);
            bool active = (m_menuTab == i);
            DrawInteractiveButton(tx, tabY, tabW, tabH, S, titles[i], active, [this, i]() {
                if (m_menuTab != i) {
                    m_menuTab = i;
                    m_menuScrollY = 0.0f;
                    if (m_menuTab == 4) {
                        LanBeacon::StartScanner();
                        LanBeacon::TriggerScan();
                    }
                }
            }, 17.5f * S);
        }

        // Scrollable Tab Content Area
        float contentTop = tabY + tabH + 14.0f * S;
        float contentBottom = padY + panH - 14.0f * S;
        float viewportH = std::max(60.0f * S, contentBottom - contentTop);
        float contentX = padX + 22.0f * S;
        float contentW = panW - 44.0f * S - 14.0f * S; // Leave room on right for scrollbar

        m_scrollAreaX = padX;
        m_scrollAreaY = contentTop;
        m_scrollAreaW = panW;
        m_scrollAreaH = viewportH;

        m_menuScrollY = std::clamp(m_menuScrollY, 0.0f, m_menuMaxScrollY);
        float startY = contentTop - m_menuScrollY;

        SetScissorClip(padX + 6.0f * S, contentTop, panW - 12.0f * S, viewportH);

        float totalContentH = 0.0f;
        if (m_menuTab == 0) totalContentH = RenderTabGraphics(contentX, startY, contentW, S);
        else if (m_menuTab == 1) totalContentH = RenderTabSystem(contentX, startY, contentW, S);
        else if (m_menuTab == 2) totalContentH = RenderTabSaves(contentX, startY, contentW, S);
        else if (m_menuTab == 3) totalContentH = RenderTabControls(contentX, startY, contentW, S);
        else if (m_menuTab == 4) totalContentH = RenderTabOnline(contentX, startY, contentW, S);

        ClearScissorClip();

        m_menuMaxScrollY = std::max(0.0f, totalContentH - viewportH + 12.0f * S);
        m_menuScrollY = std::clamp(m_menuScrollY, 0.0f, m_menuMaxScrollY);

        // Draw Scrollbar Indicator on Right if content overflows
        if (m_menuMaxScrollY > 1.0f) {
            float sbX = padX + panW - 18.0f * S;
            float sbW = 6.0f * S;
            DrawRoundedRect(sbX, contentTop, sbW, viewportH, sbW * 0.5f,
                            { 0.02f, 0.07f, 0.10f, 0.80f }, { 0.08f, 0.25f, 0.32f, 0.60f });
            float thumbRatio = std::clamp(viewportH / (viewportH + m_menuMaxScrollY), 0.15f, 0.90f);
            float thumbH = viewportH * thumbRatio;
            float scrollNorm = std::clamp(m_menuScrollY / m_menuMaxScrollY, 0.0f, 1.0f);
            float thumbY = contentTop + scrollNorm * (viewportH - thumbH);
            DrawRoundedRect(sbX, thumbY, sbW, thumbH, sbW * 0.5f, COL_CYAN, COL_CYAN);
        }
    }

    float RenderTabGraphics(float x, float y, float w, float S) {
        float curY = y;
        float gap = 16.0f * S;
        float btnH = 48.0f * S;

        // Card 1: Internal Resolution (2 rows of 3 large legible buttons)
        float c1H = 196.0f * S;
        DrawModernCard(x, curY, w, c1H, S,
                       Tr("Resolución interna", "Internal Resolution"),
                       Tr("Wii Original (1x por defecto) | Mayor resolución = mayor nitidez y detalle gráfico",
                          "Original Wii (1x default) | Higher resolution = crisper image & visual detail"));

        const char* resLabels_es[] = { "Wii Original (1x)", "HD 720p (2x)", "Full HD 1080p (3x)", "QHD 1440p (4x)", "4K UHD (2160p)", "Nativa (Pantalla)" };
        const char* resLabels_en[] = { "Original Wii (1x)", "HD 720p (2x)", "Full HD 1080p (3x)", "QHD 1440p (4x)", "4K UHD (2160p)", "Native (Screen)" };
        const char* const* resLabels = (m_menuLang == 1) ? resLabels_en : resLabels_es;

        float rChipW = (w - 48.0f * S - 24.0f * S) / 3.0f;
        for (int i = 0; i < 6; ++i) {
            int row = i / 3;
            int col = i % 3;
            float rx = x + 24.0f * S + float(col) * (rChipW + 12.0f * S);
            float ry = curY + 74.0f * S + float(row) * (btnH + 10.0f * S);
            DrawInteractiveButton(rx, ry, rChipW, btnH, S, resLabels[i], (m_resolutionIndex == i), [this, i]() {
                m_resolutionIndex = i;
                ApplyResolutionScale(m_resolutionIndex);
                SaveSettings();
            });
        }
        curY += c1H + gap;

        // Card 2: Relación de aspecto
        float c2H = 138.0f * S;
        DrawModernCard(x, curY, w, c2H, S,
                       Tr("Relación de aspecto", "Aspect Ratio"),
                       Tr("Panorámica 16:9, Pantalla Completa adaptable al teléfono o 4:3 Clásica",
                          "16:9 Widescreen, Adaptive Full Screen or 4:3 Classic"));

        const char* aspectLabels_es[] = { "16:9 Panorámica", "Pantalla Completa", "4:3 Clásica" };
        const char* aspectLabels_en[] = { "16:9 Widescreen", "Full Screen", "4:3 Classic" };
        const char* const* aspectLabels = (m_menuLang == 1) ? aspectLabels_en : aspectLabels_es;
        float aChipW = (w - 48.0f * S - 24.0f * S) / 3.0f;
        for (int i = 0; i < 3; ++i) {
            float ax = x + 24.0f * S + float(i) * (aChipW + 12.0f * S);
            DrawInteractiveButton(ax, curY + 74.0f * S, aChipW, btnH, S, aspectLabels[i], (m_aspectIndex == i), [this, i]() {
                m_aspectIndex = i;
                ApplyAspectRatio(m_aspectIndex);
                SaveSettings();
            });
        }
        curY += c2H + gap;

        // Card 3: Límite de fotogramas (FPS)
        float c3H = 138.0f * S;
        DrawModernCard(x, curY, w, c3H, S,
                       Tr("Límite de fotogramas (FPS)", "Framerate Limit (FPS)"),
                       Tr("Selecciona la fluidez máxima de animación (30, 60, 90 o 120 FPS)",
                          "Select target maximum framerate (30, 60, 90 or 120 FPS)"));

        const char* fpsLabels[] = { "30 FPS", "60 FPS", "90 FPS", "120 FPS" };
        const int fpsValues[] = { 30, 60, 90, 120 };
        float fChipW = (w - 48.0f * S - 36.0f * S) / 4.0f;
        for (int i = 0; i < 4; ++i) {
            float fx = x + 24.0f * S + float(i) * (fChipW + 12.0f * S);
            int val = fpsValues[i];
            DrawInteractiveButton(fx, curY + 74.0f * S, fChipW, btnH, S, fpsLabels[i], (m_fpsLimit == val), [this, val]() {
                m_fpsLimit = val;
                MH3FrameRateControl::SetTargetFPS(m_fpsLimit);
                SaveSettings();
            });
        }
        curY += c3H + gap;

        // Card 4: Sincronización vertical (V-Sync) y Monitor FPS
        float c4H = 138.0f * S;
        DrawModernCard(x, curY, w, c4H, S,
                       Tr("Sincronización y Monitor de Rendimiento", "Vertical Sync & Performance Monitor"),
                       Tr("V-Sync evita cortes de imagen y el HUD muestra FPS y temperatura en tiempo real",
                          "V-Sync prevents screen tearing and HUD displays live FPS and temperature"));

        float sChipW = (w - 48.0f * S - 14.0f * S) / 2.0f;
        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, sChipW, btnH, S,
                              m_vsync ? Tr("V-Sync: ACTIVADO", "V-Sync: ENABLED") : Tr("V-Sync: DESACTIVADO", "V-Sync: DISABLED"),
                              m_vsync, [this]() {
            m_vsync = !m_vsync;
            aurora_enable_vsync(m_vsync);
            SaveSettings();
        });
        DrawInteractiveButton(x + 24.0f * S + sChipW + 14.0f * S, curY + 74.0f * S, sChipW, btnH, S,
                              m_showFpsHud ? Tr("Monitor FPS: VISIBLE", "FPS HUD: VISIBLE") : Tr("Monitor FPS: OCULTO", "FPS HUD: HIDDEN"),
                              m_showFpsHud, [this]() {
            m_showFpsHud = !m_showFpsHud;
            SaveSettings();
        });
        curY += c4H + gap;

        // Card 5: Texturas HD personalizadas (Pack Dolphin)
        float c5H = 138.0f * S;
        bool texEnabled = aurora::gfx::texture_replacement::is_enabled();
        size_t texCount = aurora::gfx::texture_replacement::get_replacement_count();
        char texSub[160];
        std::snprintf(texSub, sizeof(texSub),
                      (m_menuLang == 1) ? "Loaded textures: %zu | Folder: /storage/emulated/0/MH3/textures/ (RMHE08 / RMHP08)"
                                        : "Texturas cargadas: %zu | Carpeta: /storage/emulated/0/MH3/textures/ (RMHE08 / RMHP08)",
                      texCount);
        DrawModernCard(x, curY, w, c5H, S,
                       Tr("Texturas HD personalizadas (Pack Dolphin)", "Custom HD Textures (Dolphin Pack)"),
                       texSub, (texCount > 0) ? COL_CYAN : COL_MUTED);

        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, sChipW, btnH, S,
                              texEnabled ? Tr("Texturas HD: ACTIVADAS", "HD Textures: ENABLED") : Tr("Texturas HD: DESACTIVADAS", "HD Textures: DISABLED"),
                              texEnabled, []() {
            bool cur = aurora::gfx::texture_replacement::is_enabled();
            aurora::gfx::texture_replacement::set_enabled(!cur);
        });
        DrawInteractiveButton(x + 24.0f * S + sChipW + 14.0f * S, curY + 74.0f * S, sChipW, btnH, S,
                              Tr("🔄 Recargar texturas ahora", "🔄 Reload Textures Now"),
                              false, []() {
            aurora::gfx::texture_replacement::reload();
        }, 16.0f * S, { 0.12f, 0.36f, 0.46f, 0.95f }, { 0.25f, 0.78f, 0.96f, 1.0f });
        curY += c5H + gap;

        // Card 6: Iluminación y Bloom (Resplandor solar)
        float c6H = 138.0f * S;
        DrawModernCard(x, curY, w, c6H, S,
                       Tr("Iluminación y Resplandor Solar (Bloom)", "Lighting & Sunlight Bloom"),
                       Tr("Intensidad del resplandor atmosférico y luz solar estilo consola Wii",
                          "Wii-style atmospheric sunlight glow and bloom intensity"));

        const char* bloomLabels_es[] = { "Desactivado", "Suave", "Original (Wii)", "Intenso" };
        const char* bloomLabels_en[] = { "Disabled", "Soft", "Original (Wii)", "Intense" };
        const char* const* bloomLabels = (m_menuLang == 1) ? bloomLabels_en : bloomLabels_es;
        for (int i = 0; i < 4; ++i) {
            float bx = x + 24.0f * S + float(i) * (fChipW + 12.0f * S);
            DrawInteractiveButton(bx, curY + 74.0f * S, fChipW, btnH, S, bloomLabels[i], (m_bloomLevel == i), [this, i]() {
                m_bloomLevel = i;
                aurora_set_bloom_level(m_bloomLevel);
                SaveSettings();
            });
        }
        curY += c6H;

        return curY - y;
    }

    float RenderTabSystem(float x, float y, float w, float S) {
        float curY = y;
        float gap = 16.0f * S;
        float btnH = 50.0f * S;

        // Card 1: Menu Language
        float c1H = 140.0f * S;
        DrawModernCard(x, curY, w, c1H, S,
                       Tr("Idioma del menú de configuración", "Settings Menu Language"),
                       Tr("Cambia al instante el idioma de todos los menús y controles de la aplicación.",
                          "Immediately changes the language of all in-app menus and controls."));

        const char* menuLangLabels[] = { "Español", "English" };
        float menuChipW = (w - 48.0f * S - 16.0f * S) / 2.0f;
        for (int i = 0; i < 2; ++i) {
            float mx = x + 24.0f * S + float(i) * (menuChipW + 16.0f * S);
            DrawInteractiveButton(mx, curY + 74.0f * S, menuChipW, btnH, S, menuLangLabels[i], (m_menuLang == i), [this, i]() {
                m_menuLang = i;
                SaveMenuLanguage();
                m_saveStatusMsg = (m_menuLang == 1) ? "Ready to export or import save files." : "Listo para exportar o importar partidas guardadas.";
                m_onlineStatusMsg = (m_onlineMode == 0)
                    ? ((m_menuLang == 1) ? "Offline mode. Play in Moga Village." : "Modo desconectado. Juega en la Aldea de Moga.")
                    : ((m_menuLang == 1) ? "Official mh3sp.com community server enabled." : "Servidor oficial de la comunidad mh3sp.com activado.");
            });
        }
        curY += c1H + gap;

        // Card 2: Game ROM Language
        float c2H = 172.0f * S;
        DrawModernCard(x, curY, w, c2H, S,
                       Tr("Idioma del juego (ROM Europea)", "In-Game Language (European ROM)"),
                       Tr("Selecciona el idioma de textos y diálogos del juego. Cambio instantáneo sin reiniciar.",
                          "Selects in-game text and dialogue language. Instant hot-swap without restart."));

        const char* langLabels[] = { "Español", "English", "Français", "Deutsch", "Italiano" };
        float lChipW = (w - 48.0f * S - 40.0f * S) / 5.0f;
        for (int i = 0; i < 5; ++i) {
            float lx = x + 24.0f * S + float(i) * (lChipW + 10.0f * S);
            DrawInteractiveButton(lx, curY + 74.0f * S, lChipW, btnH, S, langLabels[i], (m_langChoice == i), [this, i]() {
                ApplyLanguageHotSwap(i);
            });
        }
        std::string statStr = std::string(Tr("✓ Idioma activo (cambio en caliente aplicado): ", "✓ Active language (hot-swap applied): ")) +
                              langLabels[std::clamp(m_langChoice, 0, 4)];
        DrawText(x + 24.0f * S, curY + 136.0f * S, statStr.c_str(), 14.5f * S, COL_CYAN);
        curY += c2H + gap;

        // Card 3: Floating Damage Numbers (Modern MH style: World / Rise / Wilds)
        float cDmgH = 138.0f * S;
        DrawModernCard(x, curY, w, cDmgH, S,
                       Tr("Números de daño en combate", "In-Combat Damage Numbers"),
                       Tr("Muestra números de daño flotantes sobre los monstruos al golpearlos (estilo MHW / Rise).",
                          "Shows floating damage numbers above monsters upon landing hits (MHW / Rise style)."));

        float dmgHalfW = (w - 48.0f * S - 14.0f * S) / 2.0f;
        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, dmgHalfW, btnH, S,
                              Tr("Números de daño: ACTIVADOS", "Damage numbers: ENABLED"),
                              m_damageNumbersEnabled, [this]() {
            m_damageNumbersEnabled = true;
            SaveLayoutConfig();
        });
        DrawInteractiveButton(x + 24.0f * S + dmgHalfW + 14.0f * S, curY + 74.0f * S, dmgHalfW, btnH, S,
                              Tr("Números de daño: DESACTIVADOS", "Damage numbers: DISABLED"),
                              !m_damageNumbersEnabled, [this]() {
            m_damageNumbersEnabled = false;
            SaveLayoutConfig();
        });
        curY += cDmgH + gap;

        // Card 4: Restart Action Card
        float c3H = 140.0f * S;
        DrawModernCard(x, curY, w, c3H, S,
                       Tr("Reiniciar el juego", "Restart Game"),
                       Tr("Guarda todos los ajustes pendientes y reinicia la aplicación automáticamente.",
                          "Saves all pending settings and restarts the application automatically."));

        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, w - 48.0f * S, btnH, S,
                              m_restarting ? Tr("⏳ Reiniciando el juego...", "⏳ Restarting game...") : Tr("🔄 Reiniciar el Juego Ahora", "🔄 Restart Game Now"),
                              false, [this]() { RestartApplication(); }, 17.0f * S,
                              { 0.14f, 0.48f, 0.62f, 0.96f }, COL_CYAN);
        curY += c3H;

        return curY - y;
    }

    float RenderTabSaves(float x, float y, float w, float S) {
        float curY = y;
        float btnH = 54.0f * S;

        float c1H = 260.0f * S;
        DrawModernCard(x, curY, w, c1H, S,
                       Tr("Gestor de Partidas Guardadas (Dolphin / Wii NAND)", "Save File Manager (Dolphin / Wii NAND)"),
                       Tr("Ruta interna: /storage/emulated/0/MH3/nand/title/00010000/524d4850/data/nocopy",
                          "Internal path: /storage/emulated/0/MH3/nand/title/00010000/524d4850/data/nocopy"));

        float btnW = (w - 48.0f * S - 24.0f * S) / 3.0f;
        float btnY = curY + 78.0f * S;

        // 1. Export
        DrawInteractiveButton(x + 24.0f * S, btnY, btnW, btnH, S,
                              Tr("📁 Exportar a Descargas", "📁 Export to Downloads"), false,
                              [this]() { ExportSaveFiles(); }, 16.0f * S,
                              { 0.08f, 0.36f, 0.46f, 0.96f }, COL_CYAN);

        // 2. Import
        DrawInteractiveButton(x + 24.0f * S + btnW + 12.0f * S, btnY, btnW, btnH, S,
                              Tr("📥 Importar de Dolphin", "📥 Import from Dolphin"), false,
                              [this]() { ImportSaveFiles(); }, 16.0f * S,
                              { 0.12f, 0.44f, 0.34f, 0.96f }, { 0.30f, 0.86f, 0.62f, 1.0f });

        // 3. Quick Backup
        DrawInteractiveButton(x + 24.0f * S + (btnW + 12.0f * S) * 2.0f, btnY, btnW, btnH, S,
                              Tr("💾 Crear Respaldo", "💾 Quick Backup"), false,
                              [this]() { CreateQuickBackup(); }, 16.0f * S,
                              { 0.36f, 0.30f, 0.14f, 0.96f }, { 0.92f, 0.76f, 0.30f, 1.0f });

        // Status Banner
        float bannerY = curY + 150.0f * S;
        float bannerH = 88.0f * S;
        DrawRoundedRect(x + 24.0f * S, bannerY, w - 48.0f * S, bannerH, 10.0f * S,
                        { 0.02f, 0.075f, 0.115f, 0.94f }, COL_PANEL_BORDER);
        DrawText(x + 40.0f * S, bannerY + 16.0f * S, Tr("Estado de la operación:", "Operation status:"), 15.0f * S, COL_CYAN);
        DrawText(x + 40.0f * S, bannerY + 46.0f * S, m_saveStatusMsg.c_str(), 15.5f * S, COL_WHITE);

        curY += c1H;
        return curY - y;
    }

    float RenderTabControls(float x, float y, float w, float S) {
        float curY = y;
        float gap = 16.0f * S;
        float btnH = 48.0f * S;

        // Card 1: Personalización y Diseño de Botones (.PNG) y Posición
        float cSkinH = 202.0f * S;
        DrawModernCard(x, curY, w, cSkinH, S,
                       Tr("Diseño y Posición de Botones en Pantalla", "On-Screen Button Design & Layout"),
                       Tr("Cambia la imagen de cada botón uno por uno con archivos .PNG o mueve su posición y tamaño",
                          "Replace each button's appearance one by one using .PNG images or adjust position and size"));

        // Big Primary Button: Cambiar diseño de botones
        float skinBtnY = curY + 74.0f * S;
        DrawInteractiveButton(x + 24.0f * S, skinBtnY, w - 48.0f * S, 52.0f * S, S,
                              Tr("🎨 Cambiar diseño de botones (Elegir imágenes .PNG por botón)",
                                 "🎨 Change Button Design (Pick custom .PNG image per button)"),
                              false, [this]() {
            m_menuOpen = false;
            m_skinEditMode = true;
            m_pngPickerOpen = false;
            m_pendingSkins = m_activeSkins;
            m_selectedSkinSlot.clear();
            m_skinBannerMsg = Tr("Toca cualquier botón en pantalla para buscar su imagen .PNG",
                                 "Tap any button on screen to browse for its .PNG image");
        }, 17.0f * S, { 0.12f, 0.46f, 0.58f, 0.98f }, COL_CYAN);

        // Second row: Modificar Posición y Tamaño + Restablecer Posición
        float posRowY = skinBtnY + 52.0f * S + 12.0f * S;
        float editBtnW = (w - 48.0f * S - 14.0f * S) * 0.62f;
        float rstBtnW = (w - 48.0f * S - 14.0f * S) * 0.38f;

        DrawInteractiveButton(x + 24.0f * S, posRowY, editBtnW, btnH, S,
                              Tr("✏ Modificar Posición y Tamaño Táctil", "✏ Edit Touch Position & Size"),
                              false, [this]() {
            m_menuOpen = false;
            m_editMode = true;
            m_selectedButtonIndex = -1;
        }, 16.0f * S, { 0.08f, 0.34f, 0.46f, 0.95f }, COL_CHIP_BORDER);

        DrawInteractiveButton(x + 24.0f * S + editBtnW + 14.0f * S, posRowY, rstBtnW, btnH, S,
                              Tr("↺ Restablecer Posición", "↺ Reset Position"),
                              false, [this]() {
            InitDefaultButtons();
            m_normLeftStickPos = { 0.12f, 0.76f };
            m_leftStickScale = 1.0f;
            RecalculateButtonPositions();
            SaveLayoutConfig();
        }, 16.0f * S, { 0.38f, 0.14f, 0.18f, 0.92f }, { 0.88f, 0.34f, 0.40f, 1.0f });
        curY += cSkinH + gap;

        // Card 2: Visibilidad de Controles Táctiles
        float cVisH = 138.0f * S;
        DrawModernCard(x, curY, w, cVisH, S,
                       Tr("Visibilidad de controles táctiles", "Touch Controls Visibility"),
                       Tr("Muestra los botones táctiles o escóndelos si juegas con un mando físico",
                          "Show on-screen touch buttons or hide them when playing with a controller"));

        float halfW = (w - 48.0f * S - 14.0f * S) / 2.0f;
        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, halfW, btnH, S,
                              Tr("Botones táctiles: VISIBLES", "Touch buttons: VISIBLE"),
                              m_touchVisible, [this]() {
            m_touchVisible = true;
            SaveLayoutConfig();
        });
        DrawInteractiveButton(x + 24.0f * S + halfW + 14.0f * S, curY + 74.0f * S, halfW, btnH, S,
                              Tr("Botones táctiles: OCULTOS (Mando)", "Touch buttons: HIDDEN (Gamepad)"),
                              !m_touchVisible, [this]() {
            m_touchVisible = false;
            SaveLayoutConfig();
        });
        curY += cVisH + gap;

        // Card 3: Opacidad de Botones
        float cOpH = 138.0f * S;
        DrawModernCard(x, curY, w, cOpH, S,
                       Tr("Opacidad y transparencia de botones", "Button Opacity & Transparency"),
                       Tr("Ajusta qué tan visibles se muestran los botones sobre el juego",
                          "Adjust how transparent the on-screen controls appear during gameplay"));

        const char* opLabels[] = { "25%", "50%", "75%", "100%" };
        const float opValues[] = { 0.25f, 0.50f, 0.75f, 1.00f };
        float qChipW = (w - 48.0f * S - 36.0f * S) / 4.0f;
        for (int i = 0; i < 4; ++i) {
            float ox = x + 24.0f * S + float(i) * (qChipW + 12.0f * S);
            float val = opValues[i];
            bool active = (std::abs(m_buttonOpacity - val) < 0.08f);
            DrawInteractiveButton(ox, curY + 74.0f * S, qChipW, btnH, S, opLabels[i], active, [this, val]() {
                m_buttonOpacity = val;
                SaveLayoutConfig();
            });
        }
        curY += cOpH + gap;

        // Card 4: Auto-ocultar botón de engranaje ⚙
        float cAhH = 138.0f * S;
        DrawModernCard(x, curY, w, cAhH, S,
                       Tr("Auto-ocultar botón de ajustes (⚙)", "Auto-Hide Settings Gear (⚙)"),
                       Tr("Oculta automáticamente el icono ⚙ tras unos segundos sin tocar la pantalla",
                          "Automatically hides the ⚙ icon after a few seconds of touch inactivity"));

        const char* ahLabels_es[] = { "Nunca", "3 segundos", "5 segundos", "10 segundos" };
        const char* ahLabels_en[] = { "Never", "3 seconds", "5 seconds", "10 seconds" };
        const char* const* ahLabels = (m_menuLang == 1) ? ahLabels_en : ahLabels_es;
        const int ahValues[] = { 0, 3, 5, 10 };
        for (int i = 0; i < 4; ++i) {
            float ax = x + 24.0f * S + float(i) * (qChipW + 12.0f * S);
            int val = ahValues[i];
            DrawInteractiveButton(ax, curY + 74.0f * S, qChipW, btnH, S, ahLabels[i], (m_gearAutoHideSec == val), [this, val]() {
                m_gearAutoHideSec = val;
                SaveLayoutConfig();
            });
        }
        curY += cAhH + gap;

        // Card 5: Sensibilidad de Cámara Táctil (Giro libre)
        float cSensH = 138.0f * S;
        DrawModernCard(x, curY, w, cSensH, S,
                       Tr("Sensibilidad de Cámara Táctil", "Touch Camera Sensitivity"),
                       Tr("Velocidad de giro de la cámara libre al deslizar el dedo en pantalla",
                          "Free camera rotation speed when swiping on the touchscreen"));

        const char* sensLabels[] = { "0.5x", "1.0x (Normal)", "1.5x", "2.0x" };
        for (int i = 0; i < 4; ++i) {
            float sx = x + 24.0f * S + float(i) * (qChipW + 12.0f * S);
            DrawInteractiveButton(sx, curY + 74.0f * S, qChipW, btnH, S, sensLabels[i], (m_cameraSensitivityIndex == i), [this, i]() {
                SetCameraSensitivityIndex(i);
                SaveSettings();
            });
        }
        curY += cSensH + gap;

        // Card 6: Botones Especiales (Macros)
        float cMacH = 138.0f * S;
        DrawModernCard(x, curY, w, cMacH, S,
                       Tr("Botones Especiales (Macros de Armas)", "Special Weapon Macro Buttons"),
                       Tr("Activa botones de pulsación simultánea en pantalla (M1, M2, M3, M4)",
                          "Enable simultaneous combo buttons on screen (M1, M2, M3, M4)"));

        DrawInteractiveButton(x + 24.0f * S + 0.0f * (qChipW + 12.0f * S), curY + 74.0f * S, qChipW, btnH, S,
                              m_macro1Enabled ? Tr("M1 (A+X): SÍ", "M1 (A+X): ON") : Tr("M1 (A+X): NO", "M1 (A+X): OFF"),
                              m_macro1Enabled, [this]() { m_macro1Enabled = !m_macro1Enabled; SaveLayoutConfig(); });
        DrawInteractiveButton(x + 24.0f * S + 1.0f * (qChipW + 12.0f * S), curY + 74.0f * S, qChipW, btnH, S,
                              m_macro2Enabled ? Tr("M2 (B+Y): SÍ", "M2 (B+Y): ON") : Tr("M2 (B+Y): NO", "M2 (B+Y): OFF"),
                              m_macro2Enabled, [this]() { m_macro2Enabled = !m_macro2Enabled; SaveLayoutConfig(); });
        DrawInteractiveButton(x + 24.0f * S + 2.0f * (qChipW + 12.0f * S), curY + 74.0f * S, qChipW, btnH, S,
                              m_macro3Enabled ? Tr("M3 (L+R): SÍ", "M3 (L+R): ON") : Tr("M3 (L+R): NO", "M3 (L+R): OFF"),
                              m_macro3Enabled, [this]() { m_macro3Enabled = !m_macro3Enabled; SaveLayoutConfig(); });
        DrawInteractiveButton(x + 24.0f * S + 3.0f * (qChipW + 12.0f * S), curY + 74.0f * S, qChipW, btnH, S,
                              m_macro4Enabled ? Tr("M4 (A+B): SÍ", "M4 (A+B): ON") : Tr("M4 (A+B): NO", "M4 (A+B): OFF"),
                              m_macro4Enabled, [this]() { m_macro4Enabled = !m_macro4Enabled; SaveLayoutConfig(); });
        curY += cMacH + gap;

        // Card 6: Mando Gamepad físico
        float cGpH = 252.0f * S;
        DrawModernCard(x, curY, w, cGpH, S,
                       Tr("Distribución de Botones del Mando (Gamepad)", "Physical Gamepad Button Layout"),
                       Tr("Para mandos Bluetooth o USB (Xbox, PlayStation, Nintendo Switch o genéricos)",
                          "For Bluetooth or USB controllers (Xbox, PlayStation, Nintendo Switch or generic)"));

        const int gpLayout = Gamepad_GetLayout();
        const bool swapTrig = Gamepad_GetSwapTriggers();
        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S, halfW, btnH, S,
                              Tr("Estilo Nintendo (A=Der, B=Abajo)", "Nintendo Style (A=Right, B=Down)"),
                              (gpLayout == 0), [this]() {
            Gamepad_SetLayout(0);
            Gamepad_ResetToPreset(0, Gamepad_GetSwapTriggers());
        });
        DrawInteractiveButton(x + 24.0f * S + halfW + 14.0f * S, curY + 74.0f * S, halfW, btnH, S,
                              Tr("Estilo Xbox / PC (A=Abajo, B=Der)", "Xbox / PC Style (A=Down, B=Right)"),
                              (gpLayout == 1), [this]() {
            Gamepad_SetLayout(1);
            Gamepad_ResetToPreset(1, Gamepad_GetSwapTriggers());
        });

        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S + btnH + 10.0f * S, w - 48.0f * S, btnH, S,
                              swapTrig ? Tr("Gatillos L/R y ZL/ZR: INVERTIDOS", "Triggers L/R & ZL/ZR: SWAPPED")
                                       : Tr("Gatillos L/R y ZL/ZR: NORMALES", "Triggers L/R & ZL/ZR: DEFAULT"),
                              swapTrig, [this]() {
            bool nextSwap = !Gamepad_GetSwapTriggers();
            Gamepad_SetSwapTriggers(nextSwap);
            Gamepad_ResetToPreset(Gamepad_GetLayout(), nextSwap);
        });

        DrawInteractiveButton(x + 24.0f * S, curY + 74.0f * S + (btnH + 10.0f * S) * 2.0f, w - 48.0f * S, btnH, S,
                              Tr("🎮 Personalizar Asignación de Botones...", "🎮 Customize Gamepad Button Mapping..."),
                              false, [this]() {
            m_gamepadMappingOpen = true;
            m_listeningAction = -1;
            m_gamepadMapScrollY = 0.0f;
        }, 16.5f * S, { 0.10f, 0.32f, 0.42f, 0.95f }, { 0.25f, 0.75f, 0.92f, 1.0f });
        curY += cGpH;

        return curY - y;
    }

    float RenderTabOnline(float x, float y, float w, float S) {
        float curY = y;
        float gap = 16.0f * S;
        float btnH = 48.0f * S;

        // Card 1: Selector de Modo de Conexión (Comunidad MH3SP o Desconectado)
        float c1H = 140.0f * S;
        DrawModernCard(x, curY, w, c1H, S,
                       Tr("Modo de Conexión Multijugador", "Multiplayer Connection Mode"),
                       Tr("Selecciona el modo de red para acceder a la Ciudad (Loc Lac) y misiones online",
                          "Choose network mode to access the City (Loc Lac) and online quests"));

        float mChipW = (w - 48.0f * S - 14.0f * S) / 2.0f;
        float r1Y = curY + 74.0f * S;

        // Opción 1: [ 🌐 Comunidad MH3SP ]
        DrawInteractiveButton(x + 24.0f * S, r1Y, mChipW, btnH, S,
                              Tr("🌐 Comunidad MH3SP (mh3sp.com)", "🌐 MH3SP Community (mh3sp.com)"),
                              (m_onlineMode != 0), [this]() {
            m_onlineMode = 3;
            LocalOnlineServer::SetMode(LocalOnlineServer::Mode::Community, "mh3sp.com");
            m_onlineStatusMsg = Tr("Servidor oficial de la comunidad mh3sp.com seleccionado.",
                                   "Official mh3sp.com community server selected.");
        });

        // Opción 2: [ 🚫 Desconectado ]
        DrawInteractiveButton(x + 24.0f * S + mChipW + 14.0f * S, r1Y, mChipW, btnH, S,
                              Tr("🚫 Desconectado (Aldea de Moga)", "🚫 Offline (Moga Village)"),
                              (m_onlineMode == 0), [this]() {
            m_onlineMode = 0;
            LocalOnlineServer::SetMode(LocalOnlineServer::Mode::Offline);
            m_onlineStatusMsg = Tr("Modo desconectado. Juega en la Aldea de Moga sin conexión.",
                                   "Offline mode. Play in Moga Village without network.");
        });
        curY += c1H + gap;

        // Card 2: Detalles según el modo
        float c2H = 190.0f * S;
        if (m_onlineMode != 0) {
            DrawModernCard(x, curY, w, c2H, S,
                           Tr("Servidor de la Comunidad: mh3sp.com (SSL/TLS)", "Community Server: mh3sp.com (SSL/TLS)"),
                           Tr("Certificado CA oficial de MH3SP integrado y preconfigurado",
                              "Built-in official MH3SP CA certificate preconfigured"), COL_CYAN);
            DrawText(x + 24.0f * S, curY + 76.0f * S, Tr("• Servidores globales oficiales de la comunidad Monster Hunter 3.", "• Official global Monster Hunter 3 community servers."), 15.0f * S, COL_WHITE);
            DrawText(x + 24.0f * S, curY + 106.0f * S, Tr("• Eventos rotativos semanales, misiones de evento y salas públicas.", "• Weekly rotating events, event quests, and public lobbies."), 15.0f * S, COL_WHITE);
            DrawText(x + 24.0f * S, curY + 136.0f * S, Tr("• Entra a la Ciudad (Loc Lac) desde la puerta este de la Aldea de Moga.", "• Enter the City (Loc Lac) via Moga Village east gate."), 15.0f * S, COL_WHITE);
        } else {
            DrawModernCard(x, curY, w, c2H, S,
                           Tr("Modo Desconectado (Aldea de Moga)", "Offline Mode (Moga Village)"),
                           Tr("Funciones de red desactivadas para ahorrar batería y recursos",
                              "Network features disabled to conserve battery and CPU"));
            DrawText(x + 24.0f * S, curY + 78.0f * S, Tr("• Juega la historia individual en la Aldea de Moga sin conexión a red.", "• Play single player campaign in Moga Village without network."), 15.5f * S, COL_WHITE);
            DrawText(x + 24.0f * S, curY + 112.0f * S, Tr("• Puedes cambiar a servidor de comunidad mh3sp.com en cualquier momento.", "• You can switch to community server mh3sp.com at any time."), 15.5f * S, COL_WHITE);
        }
        curY += c2H + gap;

        // Card 3: Botón de Aplicar y Reiniciar Juego
        float c3H = 156.0f * S;
        DrawModernCard(x, curY, w, c3H, S,
                       Tr("Aplicar Cambios de Red y Reiniciar", "Apply Network Changes & Restart"),
                       Tr("Los parches de red (DNS, certificados CA y sockets) requieren reinicio del juego",
                          "Network patches (DNS, CA certificates, and sockets) require a game restart"), { 0.85f, 0.55f, 0.15f, 0.90f });

        DrawText(x + 24.0f * S, curY + 74.0f * S,
                 Tr("⚠️ Toca el botón para guardar la configuración y reiniciar el juego automáticamente:",
                    "⚠️ Tap the button to save configuration and restart the game automatically:"),
                 14.0f * S, { 1.0f, 0.85f, 0.40f, 1.0f });

        DrawInteractiveButton(x + 24.0f * S, curY + 98.0f * S, w - 48.0f * S, 48.0f * S, S,
                              Tr("🔄 Aplicar y Reiniciar Juego Ahora", "🔄 Apply & Restart Game Now"),
                              false, [this]() {
            LocalOnlineServer::SaveOnlineConfig();
            RestartApplication();
        }, 16.5f * S, { 0.55f, 0.22f, 0.08f, 0.98f }, { 0.95f, 0.65f, 0.20f, 1.0f });
        curY += c3H + gap;

        // Status Banner at bottom
        float bannerH = 54.0f * S;
        DrawRoundedRect(x, curY, w, bannerH, 10.0f * S, { 0.02f, 0.08f, 0.12f, 0.94f }, COL_PANEL_BORDER);
        DrawText(x + 24.0f * S, curY + 17.0f * S, Tr("Estado:", "Status:"), 15.5f * S, COL_CYAN);
        DrawText(x + 95.0f * S, curY + 17.0f * S, m_onlineStatusMsg.c_str(), 15.5f * S, COL_WHITE);
        curY += bannerH;

        return curY - y;
    }

    void RenderIpEditModal() {
        m_ipEditModalOpen = false;
    }

    void RenderEditMode() {
        const float S = UiScale();
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.45f });

        // Unified D-Pad preview if active
        const CustomSkinTex* dpadSkin = GetSkinTex("DPAD");
        if (dpadSkin && dpadSkin->tex) {
            Vec2 dpadCenter;
            float dpadRad = 0.0f;
            bool dpadPressed = false;
            GetDpadBounds(dpadCenter, dpadRad, dpadPressed);
            DrawCustomSkin(*dpadSkin, false, dpadCenter.x, dpadCenter.y, dpadRad * 0.96f, 0.85f);
        }

        // Buttons with editor bounding rings
        for (size_t i = 0; i < m_buttons.size(); ++i) {
            const auto& btn = m_buttons[i];
            if (!IsButtonActive(btn)) continue;
            bool isSel = (int(i) == m_selectedButtonIndex);
            const CustomSkinTex* btnSkin = GetSkinTex(btn.id);
            if (btnSkin && btnSkin->tex) {
                DrawCustomSkin(*btnSkin, false, btn.pos.x, btn.pos.y, btn.radius, 0.92f);
            } else {
                DrawAADisc(btn.pos.x, btn.pos.y, btn.radius,
                           isSel ? Color{ 0.95f, 0.85f, 0.20f, 0.65f } : btn.baseColor,
                           isSel ? Color{ 1.0f, 1.0f, 0.40f, 1.0f } : btn.borderColor, isSel ? 0.14f : 0.09f);
                DrawButtonLabel(btn.pos.x, btn.pos.y, btn.label, btn.radius * 0.95f, isSel ? COL_CYAN : COL_WHITE);
            }
            DrawAARing(btn.pos.x, btn.pos.y, btn.radius * 1.15f, 2.5f, isSel ? Color{ 1.0f, 0.9f, 0.2f, 0.95f } : Color{ 0.3f, 0.8f, 1.0f, 0.55f });
        }

        // Left Stick
        bool stickSel = (m_selectedButtonIndex == -2);
        DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, stickSel ? 5.0f : 3.5f, stickSel ? COL_CYAN : Color{ 0.30f, 0.70f, 0.88f, 0.55f });
        DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius,
                   stickSel ? Color{ 0.95f, 0.85f, 0.20f, 0.65f } : Color{ 0.10f, 0.32f, 0.45f, 0.80f },
                   stickSel ? Color{ 1.0f, 1.0f, 0.40f, 1.0f } : Color{ 0.50f, 0.88f, 1.00f, 0.95f }, 0.12f);

        // Top Banner Instructions
        float banW = float(m_width) * 0.74f;
        float banH = 44.0f * S;
        float banX = (float(m_width) - banW) * 0.5f;
        float banY = 12.0f * S;
        DrawRoundedRect(banX, banY, banW, banH, 10.0f * S, COL_BG_DARK, COL_CYAN);
        DrawButtonLabel(banX + banW * 0.5f, banY + banH * 0.5f,
                        Tr("MODO EDICIÓN: Arrastra para mover | Usa [-] y [+] para cambiar tamaño",
                           "EDIT MODE: Drag to move | Use [-] and [+] to resize"), 15.0f * S, COL_CYAN);

        // Bottom Toolbar
        float barW = float(m_width) * 0.82f;
        float barH = 56.0f * S;
        float barX = (float(m_width) - barW) * 0.5f;
        float barY = float(m_height) - barH - 12.0f * S;
        DrawRoundedRect(barX, barY, barW, barH, 12.0f * S, COL_BG_DARK, COL_PANEL_BORDER);

        float bw = (barW - 60.0f * S) / 5.0f;
        float bh = 40.0f * S;
        float by = barY + 8.0f * S;

        // Button 1: [- Tamaño]
        DrawRoundedRect(barX + 10.0f * S, by, bw, bh, 8.0f * S, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawButtonLabel(barX + 10.0f * S + bw * 0.5f, by + bh * 0.5f, Tr("[-] Tamaño", "[-] Size"), 14.5f * S, COL_WHITE);

        // Button 2: [+ Tamaño]
        DrawRoundedRect(barX + 20.0f * S + bw, by, bw, bh, 8.0f * S, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawButtonLabel(barX + 20.0f * S + bw * 1.5f, by + bh * 0.5f, Tr("[+] Tamaño", "[+] Size"), 14.5f * S, COL_WHITE);

        // Button 3: [Restablecer]
        DrawRoundedRect(barX + 30.0f * S + bw * 2.0f, by, bw, bh, 8.0f * S, { 0.35f, 0.15f, 0.15f, 0.85f }, { 0.80f, 0.30f, 0.30f, 0.90f });
        DrawButtonLabel(barX + 30.0f * S + bw * 2.5f, by + bh * 0.5f, Tr("Restablecer", "Reset"), 14.5f * S, COL_WHITE);

        // Button 4: [Guardar y Salir]
        DrawRoundedRect(barX + 40.0f * S + bw * 3.0f, by, bw, bh, 8.0f * S, COL_ACTIVE_CHIP, COL_CYAN);
        DrawButtonLabel(barX + 40.0f * S + bw * 3.5f, by + bh * 0.5f, Tr("Guardar", "Save"), 14.5f * S, COL_ACTIVE_TEXT);

        // Button 5: [Cancelar]
        DrawRoundedRect(barX + 50.0f * S + bw * 4.0f, by, bw, bh, 8.0f * S, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawButtonLabel(barX + 50.0f * S + bw * 4.5f, by + bh * 0.5f, Tr("Cancelar", "Cancel"), 14.5f * S, COL_MUTED);
    }

    // -------------------------------------------------------------
    // Cambiar Diseño de Botones (.PNG por botón) + Selector de Archivos
    // -------------------------------------------------------------
    void OpenPngPickerForSlot(const std::string& slotId) {
        m_selectedSkinSlot = slotId;
        m_pngPickerOpen = true;
        m_pngPickerScrollY = 0.0f;
        if (m_currentBrowseDir.empty() || !std::filesystem::exists(m_currentBrowseDir)) {
            m_currentBrowseDir = GetDefaultBrowseDir();
        }
        RefreshPngBrowser();
    }

    void RenderSkinEditMode() {
        const float S = UiScale();
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.52f });

        // 1. Left Stick (Stick Base + Stick Knob)
        const CustomSkinTex* stickBaseSkin = GetSkinTex("STICK_BASE");
        const CustomSkinTex* stickKnobSkin = GetSkinTex("STICK_KNOB");
        if (stickBaseSkin && stickBaseSkin->tex) {
            DrawCustomSkin(*stickBaseSkin, false, m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, 0.95f);
        } else {
            DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, 3.5f, { 0.30f, 0.70f, 0.88f, 0.75f });
        }
        if (stickKnobSkin && stickKnobSkin->tex) {
            DrawCustomSkin(*stickKnobSkin, false, m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius * 1.15f, 0.98f);
        } else {
            DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius,
                       { 0.10f, 0.32f, 0.45f, 0.88f }, { 0.50f, 0.88f, 1.00f, 0.98f }, 0.12f);
        }
        bool stickSelected = (m_selectedSkinSlot == "STICK_KNOB" || m_selectedSkinSlot == "STICK_BASE");
        DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius * 1.08f, 2.5f * S,
                   stickSelected ? Color{ 1.0f, 0.90f, 0.25f, 0.95f } : COL_CYAN);
        DrawButtonLabel(m_leftStickCenter.x, m_leftStickCenter.y + m_leftStickRadius + 14.0f * S,
                        Tr("Joystick", "Joystick"), 13.0f * S, COL_CYAN);

        if (!m_pngPickerOpen) {
            RegisterHitZone(m_leftStickCenter.x - m_leftStickRadius * 1.1f,
                            m_leftStickCenter.y - m_leftStickRadius * 1.1f,
                            m_leftStickRadius * 2.2f, m_leftStickRadius * 2.2f, [this]() {
                OpenPngPickerForSlot("STICK_KNOB");
            });
        }

        // 2. Unified D-Pad check
        const CustomSkinTex* dpadSkin = GetSkinTex("DPAD");
        bool hasUnifiedDpad = (dpadSkin && dpadSkin->tex != 0);
        Vec2 dpadCenter;
        float dpadRad = 0.0f;
        bool dpadPressed = false;
        GetDpadBounds(dpadCenter, dpadRad, dpadPressed);
        if (hasUnifiedDpad) {
            DrawCustomSkin(*dpadSkin, false, dpadCenter.x, dpadCenter.y, dpadRad * 0.96f, 0.96f);
        }

        // 3. All Gameplay Buttons (including Macros so user can skin any button on screen)
        for (const auto& btn : m_buttons) {
            bool isDpadBtn = (btn.id == "UP" || btn.id == "DOWN" || btn.id == "LEFT" || btn.id == "RIGHT");
            const CustomSkinTex* btnSkin = GetSkinTex(btn.id);
            bool isSel = (m_selectedSkinSlot == btn.id) || (isDpadBtn && m_selectedSkinSlot == "DPAD");

            if (btnSkin && btnSkin->tex) {
                DrawCustomSkin(*btnSkin, false, btn.pos.x, btn.pos.y, btn.radius, 0.96f);
            } else if (!(isDpadBtn && hasUnifiedDpad)) {
                DrawAADisc(btn.pos.x, btn.pos.y, btn.radius, btn.baseColor, btn.borderColor, 0.09f);
                DrawButtonLabel(btn.pos.x, btn.pos.y, btn.label, btn.radius * 0.95f, COL_WHITE);
            }

            // Selection / interactive ring
            DrawAARing(btn.pos.x, btn.pos.y, btn.radius * 1.14f, 2.2f * S,
                       isSel ? Color{ 1.0f, 0.90f, 0.25f, 0.98f } : Color{ 0.15f, 0.85f, 0.92f, 0.65f });

            if (!m_pngPickerOpen) {
                std::string idCopy = isDpadBtn ? "DPAD" : btn.id;
                RegisterHitZone(btn.pos.x - btn.radius * 1.25f, btn.pos.y - btn.radius * 1.25f,
                                btn.radius * 2.5f, btn.radius * 2.5f, [this, idCopy]() {
                    OpenPngPickerForSlot(idCopy);
                });
            }
        }

        // 4. Gear / Settings Button
        const CustomSkinTex* gearSkin = GetSkinTex("GEAR");
        if (gearSkin && gearSkin->tex) {
            DrawCustomSkin(*gearSkin, false, m_gearPos.x, m_gearPos.y, m_gearRadius, 0.96f);
        } else {
            DrawAADisc(m_gearPos.x, m_gearPos.y, m_gearRadius,
                       { 0.08f, 0.40f, 0.48f, 0.85f }, { 0.25f, 0.90f, 0.95f, 0.95f }, 0.10f);
            DrawButtonLabel(m_gearPos.x, m_gearPos.y, "⚙", m_gearRadius * 1.05f, COL_WHITE);
        }
        DrawAARing(m_gearPos.x, m_gearPos.y, m_gearRadius * 1.18f, 2.2f * S,
                   (m_selectedSkinSlot == "GEAR") ? Color{ 1.0f, 0.90f, 0.25f, 0.98f } : COL_CYAN);
        if (!m_pngPickerOpen) {
            RegisterHitZone(m_gearPos.x - m_gearRadius * 1.4f, m_gearPos.y - m_gearRadius * 1.4f,
                            m_gearRadius * 2.8f, m_gearRadius * 2.8f, [this]() {
                OpenPngPickerForSlot("GEAR");
            });
        }

        // 5. Top Instruction Banner
        float banW = float(m_width) * 0.78f;
        float banH = 44.0f * S;
        float banX = (float(m_width) - banW) * 0.5f;
        float banY = 10.0f * S;
        DrawRoundedRect(banX, banY, banW, banH, 10.0f * S, COL_BG_DARK, COL_CYAN);
        const char* bannerTxt = m_skinBannerMsg.empty()
            ? Tr("DISEÑO DE BOTONES: Toca cualquier botón en pantalla para elegir su imagen (.PNG)",
                 "BUTTON DESIGN: Tap any button on screen to choose its (.PNG) image")
            : m_skinBannerMsg.c_str();
        DrawButtonLabel(banX + banW * 0.5f, banY + banH * 0.5f, bannerTxt, 15.0f * S, COL_CYAN);

        // 6. Bottom Action Toolbar: [Aceptar] [Aplicar] [Restablecer] [Cancelar]
        float barW = float(m_width) * 0.84f;
        float barH = 60.0f * S;
        float barX = (float(m_width) - barW) * 0.5f;
        float barY = float(m_height) - barH - 12.0f * S;
        DrawRoundedRect(barX, barY, barW, barH, 14.0f * S, COL_BG_DARK, COL_PANEL_BORDER);

        float gap = 12.0f * S;
        float bw = (barW - 28.0f * S - gap * 3.0f) / 4.0f;
        float bh = 44.0f * S;
        float by = barY + 8.0f * S;

        if (!m_pngPickerOpen) {
            // 1. Aceptar (applies, saves, exits editor)
            DrawInteractiveButton(barX + 14.0f * S, by, bw, bh, S,
                                  Tr("✓ Aceptar", "✓ Accept"), true, [this]() {
                m_activeSkins = m_pendingSkins;
                SaveSkinConfig();
                m_skinEditMode = false;
                m_pngPickerOpen = false;
            }, 16.0f * S);

            // 2. Aplicar (applies live without restart, saves, stays in editor)
            DrawInteractiveButton(barX + 14.0f * S + (bw + gap) * 1.0f, by, bw, bh, S,
                                  Tr("⚡ Aplicar", "⚡ Apply"), false, [this]() {
                m_activeSkins = m_pendingSkins;
                SaveSkinConfig();
                m_skinBannerMsg = Tr("✓ ¡Cambios aplicados al instante sin reiniciar!",
                                     "✓ Changes applied live without restarting!");
            }, 16.0f * S, { 0.12f, 0.46f, 0.36f, 0.96f }, { 0.30f, 0.88f, 0.65f, 1.0f });

            // 3. Restablecer (restores original procedural buttons)
            DrawInteractiveButton(barX + 14.0f * S + (bw + gap) * 2.0f, by, bw, bh, S,
                                  Tr("↺ Restablecer", "↺ Reset All"), false, [this]() {
                m_pendingSkins.clear();
                m_activeSkins.clear();
                SaveSkinConfig();
                m_skinBannerMsg = Tr("↺ Todos los botones han vuelto a su diseño original.",
                                     "↺ All buttons restored to their original design.");
            }, 16.0f * S, { 0.42f, 0.15f, 0.18f, 0.94f }, { 0.90f, 0.35f, 0.40f, 1.0f });

            // 4. Cancelar
            DrawInteractiveButton(barX + 14.0f * S + (bw + gap) * 3.0f, by, bw, bh, S,
                                  Tr("✕ Cancelar", "✕ Cancel"), false, [this]() {
                m_pendingSkins = m_activeSkins;
                m_skinEditMode = false;
                m_pngPickerOpen = false;
            }, 16.0f * S, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        }

        // 7. If PNG File Browser Modal is open, render it on top
        if (m_pngPickerOpen) {
            RenderPngPickerModal(S);
        }
    }

    void RenderPngPickerModal(float S) {
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.72f });

        float modW = float(m_width) * 0.88f;
        float modH = float(m_height) * 0.88f;
        float modX = (float(m_width) - modW) * 0.5f;
        float modY = (float(m_height) - modH) * 0.5f;

        DrawRoundedRect(modX, modY, modW, modH, 16.0f * S, COL_BG_DARK, COL_CYAN);

        // Header: Selected Button Name + Close [✕]
        std::string titleStr = std::string(Tr("Seleccionar imagen .PNG para el botón: [ ",
                                              "Select .PNG image for button: [ ")) + m_selectedSkinSlot + " ]";
        DrawText(modX + 22.0f * S, modY + 14.0f * S, titleStr.c_str(), 21.0f * S, COL_WHITE);
        DrawText(modX + 22.0f * S, modY + 42.0f * S, m_currentBrowseDir.c_str(), 13.5f * S, COL_CYAN);

        float closeS = 42.0f * S;
        DrawInteractiveButton(modX + modW - closeS - 18.0f * S, modY + 14.0f * S, closeS, closeS, S, "✕", false,
                              [this]() { m_pngPickerOpen = false; }, 20.0f * S,
                              { 0.38f, 0.14f, 0.18f, 0.95f }, { 0.88f, 0.34f, 0.40f, 1.0f });

        float curTopY = modY + 68.0f * S;

        // Sub-slot selector tabs for D-Pad (Cruceta completa vs flechas individuales) or Left Stick (Palanca vs Base)
        bool isDpadFamily = (m_selectedSkinSlot == "DPAD" || m_selectedSkinSlot == "UP" ||
                             m_selectedSkinSlot == "DOWN" || m_selectedSkinSlot == "LEFT" || m_selectedSkinSlot == "RIGHT");
        bool isStickFamily = (m_selectedSkinSlot == "STICK_KNOB" || m_selectedSkinSlot == "STICK_BASE");

        if (isDpadFamily) {
            const char* slots[] = { "DPAD", "UP", "DOWN", "LEFT", "RIGHT" };
            const char* labels_es[] = { "Cruceta Completa (DPAD)", "▲ Arriba", "▼ Abajo", "◀ Izquierda", "▶ Derecha" };
            const char* labels_en[] = { "Full D-Pad Cross", "▲ Up", "▼ Down", "◀ Left", "▶ Right" };
            const char* const* labels = (m_menuLang == 1) ? labels_en : labels_es;
            float sw = (modW - 44.0f * S - 32.0f * S) / 5.0f;
            float sh = 38.0f * S;
            for (int i = 0; i < 5; ++i) {
                std::string sId = slots[i];
                DrawInteractiveButton(modX + 22.0f * S + float(i) * (sw + 8.0f * S), curTopY, sw, sh, S,
                                      labels[i], (m_selectedSkinSlot == sId), [this, sId]() {
                    m_selectedSkinSlot = sId;
                }, 13.5f * S);
            }
            curTopY += sh + 10.0f * S;
        } else if (isStickFamily) {
            const char* slots[] = { "STICK_KNOB", "STICK_BASE" };
            const char* labels_es[] = { "Palanca Central (Joystick)", "Base / Aro Exterior (Range)" };
            const char* labels_en[] = { "Stick Center Knob", "Stick Outer Base Ring" };
            const char* const* labels = (m_menuLang == 1) ? labels_en : labels_es;
            float sw = (modW - 44.0f * S - 10.0f * S) / 2.0f;
            float sh = 38.0f * S;
            for (int i = 0; i < 2; ++i) {
                std::string sId = slots[i];
                DrawInteractiveButton(modX + 22.0f * S + float(i) * (sw + 10.0f * S), curTopY, sw, sh, S,
                                      labels[i], (m_selectedSkinSlot == sId), [this, sId]() {
                    m_selectedSkinSlot = sId;
                }, 14.5f * S);
            }
            curTopY += sh + 10.0f * S;
        }

        // Navigation & Action Bar: [⬆ Subir carpeta] [Carpeta Botones Custom] [Descargar/MH3] [↺ Usar botón original]
        float navH = 42.0f * S;
        float navW = (modW - 44.0f * S - 24.0f * S) / 3.0f;

        DrawInteractiveButton(modX + 22.0f * S, curTopY, navW, navH, S,
                              Tr("⬆ Subir a carpeta superior", "⬆ Parent Folder"), false, [this]() {
            std::filesystem::path p(m_currentBrowseDir);
            if (p.has_parent_path() && p.parent_path() != p) {
                m_currentBrowseDir = p.parent_path().string();
                m_pngPickerScrollY = 0.0f;
                RefreshPngBrowser();
            }
        }, 14.5f * S, { 0.08f, 0.28f, 0.36f, 0.95f }, COL_CHIP_BORDER);

        DrawInteractiveButton(modX + 22.0f * S + navW + 12.0f * S, curTopY, navW, navH, S,
                              Tr("📁 Ir a carpeta Botones Custom", "📁 Go to Custom Buttons Folder"), false, [this]() {
            m_currentBrowseDir = GetDefaultBrowseDir();
            m_pngPickerScrollY = 0.0f;
            RefreshPngBrowser();
        }, 14.5f * S, { 0.10f, 0.36f, 0.46f, 0.95f }, COL_CYAN);

        DrawInteractiveButton(modX + 22.0f * S + (navW + 12.0f * S) * 2.0f, curTopY, navW, navH, S,
                              Tr("↺ Usar botón original en este botón", "↺ Restore Original for This Button"), false, [this]() {
            m_pendingSkins.erase(m_selectedSkinSlot);
            m_pngPickerOpen = false;
            m_skinBannerMsg = std::string(Tr("Botón ", "Button ")) + m_selectedSkinSlot +
                              Tr(" restablecido a su diseño original.", " restored to original design.");
        }, 14.5f * S, { 0.38f, 0.15f, 0.18f, 0.95f }, { 0.88f, 0.35f, 0.40f, 1.0f });

        curTopY += navH + 12.0f * S;

        // Scrollable File & Directory Grid (2 columns for fast browsing with live PNG thumbnails!)
        float listBottom = modY + modH - 16.0f * S;
        float listH = std::max(60.0f * S, listBottom - curTopY);
        float listX = modX + 22.0f * S;
        float listW = modW - 44.0f * S - 14.0f * S;

        m_scrollAreaX = modX;
        m_scrollAreaY = curTopY;
        m_scrollAreaW = modW;
        m_scrollAreaH = listH;

        int cols = 2;
        float itemGapX = 12.0f * S;
        float itemGapY = 10.0f * S;
        float itemW = (listW - itemGapX) / 2.0f;
        float itemH = 60.0f * S;
        int totalRows = int((m_pngBrowserEntries.size() + cols - 1) / cols);
        float totalListH = float(totalRows) * (itemH + itemGapY);

        m_pngPickerMaxScrollY = std::max(0.0f, totalListH - listH + 10.0f * S);
        m_pngPickerScrollY = std::clamp(m_pngPickerScrollY, 0.0f, m_pngPickerMaxScrollY);

        SetScissorClip(modX + 6.0f * S, curTopY, modW - 12.0f * S, listH);

        if (m_pngBrowserEntries.empty()) {
            DrawText(listX + 12.0f * S, curTopY + 24.0f * S,
                     Tr("No hay archivos .PNG ni subcarpetas en esta ubicación. Usa [⬆ Subir a carpeta superior].",
                        "No .PNG files or subfolders found here. Use [⬆ Parent Folder]."),
                     16.0f * S, COL_MUTED);
        }

        for (size_t i = 0; i < m_pngBrowserEntries.size(); ++i) {
            int row = int(i) / cols;
            int col = int(i) % cols;
            float ix = listX + float(col) * (itemW + itemGapX);
            float iy = curTopY - m_pngPickerScrollY + float(row) * (itemH + itemGapY);

            if (iy + itemH < curTopY || iy > listBottom) continue;

            const auto& entry = m_pngBrowserEntries[i];
            if (entry.isDir) {
                std::string label = "📁  " + entry.name;
                DrawRoundedRect(ix, iy, itemW, itemH, 10.0f * S,
                                { 0.06f, 0.22f, 0.30f, 0.95f }, { 0.18f, 0.55f, 0.68f, 1.0f });
                DrawText(ix + 16.0f * S, iy + 19.0f * S, label.c_str(), 16.0f * S, COL_CYAN);
                std::string targetDir = entry.fullPath;
                RegisterHitZone(ix, iy, itemW, itemH, [this, targetDir]() {
                    m_currentBrowseDir = targetDir;
                    m_pngPickerScrollY = 0.0f;
                    RefreshPngBrowser();
                });
            } else {
                bool isCurrent = (m_pendingSkins[m_selectedSkinSlot] == entry.fullPath);
                DrawRoundedRect(ix, iy, itemW, itemH, 10.0f * S,
                                isCurrent ? Color{ 0.08f, 0.38f, 0.46f, 0.98f } : Color{ 0.04f, 0.14f, 0.20f, 0.95f },
                                isCurrent ? COL_CYAN : COL_CHIP_BORDER);

                // Render live PNG thumbnail preview on the left of the card
                const CustomSkinTex* thumb = GetOrLoadSkinFile(entry.fullPath);
                float thumbCx = ix + 34.0f * S;
                float thumbCy = iy + itemH * 0.5f;
                if (thumb && thumb->tex) {
                    DrawCustomSkin(*thumb, false, thumbCx, thumbCy, 21.0f * S, 1.0f);
                }

                DrawText(ix + 68.0f * S, iy + 19.0f * S, entry.name.c_str(), 16.0f * S,
                         isCurrent ? COL_CYAN : COL_WHITE);

                std::string chosenPath = entry.fullPath;
                std::string chosenName = entry.name;
                RegisterHitZone(ix, iy, itemW, itemH, [this, chosenPath, chosenName]() {
                    m_pendingSkins[m_selectedSkinSlot] = chosenPath;
                    if (m_selectedSkinSlot == "DPAD") {
                        m_pendingSkins.erase("UP");
                        m_pendingSkins.erase("DOWN");
                        m_pendingSkins.erase("LEFT");
                        m_pendingSkins.erase("RIGHT");
                    } else if (m_selectedSkinSlot == "UP" || m_selectedSkinSlot == "DOWN" ||
                               m_selectedSkinSlot == "LEFT" || m_selectedSkinSlot == "RIGHT") {
                        m_pendingSkins.erase("DPAD");
                    }
                    m_pngPickerOpen = false;
                    m_skinBannerMsg = std::string(Tr("Imagen '", "Image '")) + chosenName +
                                      Tr("' asignada a [", "' assigned to [") + m_selectedSkinSlot +
                                      Tr("]. Pulsa Aplicar o Aceptar.", "]. Press Apply or Accept.");
                });
            }
        }

        ClearScissorClip();

        // Scrollbar for PNG picker
        if (m_pngPickerMaxScrollY > 1.0f) {
            float sbX = modX + modW - 16.0f * S;
            float sbW = 6.0f * S;
            DrawRoundedRect(sbX, curTopY, sbW, listH, sbW * 0.5f,
                            { 0.02f, 0.07f, 0.10f, 0.80f }, { 0.08f, 0.25f, 0.32f, 0.60f });
            float thumbRatio = std::clamp(listH / (listH + m_pngPickerMaxScrollY), 0.15f, 0.90f);
            float thumbH = listH * thumbRatio;
            float scrollNorm = std::clamp(m_pngPickerScrollY / m_pngPickerMaxScrollY, 0.0f, 1.0f);
            float thumbY = curTopY + scrollNorm * (listH - thumbH);
            DrawRoundedRect(sbX, thumbY, sbW, thumbH, sbW * 0.5f, COL_CYAN, COL_CYAN);
        }
    }

    void RenderGamepadMappingModal() {
        const float S = UiScale();

        // 1. Check for physical input detection if listening
        if (m_listeningAction >= 0) {
            int detected = Gamepad_DetectPressedInput();
            if (detected >= 0) {
                Gamepad_SetBinding(m_listeningAction, detected);
                m_listeningAction = -1;
            }
        }

        // Semi-transparent scrim
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.82f });

        // Container Window
        float padX = float(m_width) * 0.05f;
        float padY = float(m_height) * 0.04f;
        float panW = float(m_width) - padX * 2.0f;
        float panH = float(m_height) - padY * 2.0f;

        DrawRoundedRect(padX, padY, panW, panH, 18.0f * S, COL_BG_DARK, COL_CYAN);

        // Header Title & Subtitle
        DrawText(padX + 24.0f * S, padY + 16.0f * S,
                 Tr("🎮 Personalizar Mapeo de Botones del Mando", "🎮 Customize Gamepad Button Mapping"),
                 24.0f * S, COL_WHITE);

        const char* statusSub = (m_listeningAction >= 0)
            ? Tr("▶ ¡PRESIONA UN BOTÓN EN TU MANDO AHORA! (o toca la pantalla para cancelar)",
                 "▶ PRESS A BUTTON ON YOUR CONTROLLER NOW! (or tap screen to cancel)")
            : Tr("Toca cualquier botón de la lista y presiona el botón deseado en tu mando para asignarlo",
                 "Tap any action from the list and press the desired button on your controller to rebind it");
        Color subCol = (m_listeningAction >= 0) ? Color{ 1.0f, 0.85f, 0.25f, 1.0f } : COL_MUTED;
        DrawText(padX + 24.0f * S, padY + 46.0f * S, statusSub, 14.5f * S, subCol);

        // Header Right: Close Button [✕]
        float closeS = 42.0f * S;
        float closeX = padX + panW - closeS - 20.0f * S;
        float closeY = padY + 14.0f * S;
        DrawInteractiveButton(closeX, closeY, closeS, closeS, S, "✕", false,
                              [this]() {
            m_gamepadMappingOpen = false;
            m_listeningAction = -1;
            Gamepad_SaveConfig();
        }, 20.0f * S, { 0.38f, 0.14f, 0.18f, 0.95f }, { 0.88f, 0.34f, 0.40f, 1.0f });

        // Divider
        float divY = padY + 70.0f * S;
        DrawRectSolid(padX + 20.0f * S, divY, panW - 40.0f * S, 1.5f * S, COL_PANEL_BORDER);

        // Bottom Action Bar: [↺ Restaurar Nintendo] [↺ Restaurar Xbox/PC] [✓ Guardar y Salir]
        float bBarH = 50.0f * S;
        float bBarY = padY + panH - bBarH - 16.0f * S;
        float bBarGap = 12.0f * S;
        float bBarW = (panW - 44.0f * S - bBarGap * 2.0f) / 3.0f;

        DrawInteractiveButton(padX + 22.0f * S, bBarY, bBarW, bBarH, S,
                              Tr("↺ Por Defecto Nintendo", "↺ Default Nintendo"), false, [this]() {
            Gamepad_ResetToPreset(0, Gamepad_GetSwapTriggers());
            Gamepad_SaveConfig();
            m_listeningAction = -1;
        }, 15.0f * S, { 0.08f, 0.22f, 0.30f, 0.95f }, COL_CHIP_BORDER);

        DrawInteractiveButton(padX + 22.0f * S + bBarW + bBarGap, bBarY, bBarW, bBarH, S,
                              Tr("↺ Por Defecto Xbox / PC", "↺ Default Xbox / PC"), false, [this]() {
            Gamepad_ResetToPreset(1, Gamepad_GetSwapTriggers());
            Gamepad_SaveConfig();
            m_listeningAction = -1;
        }, 15.0f * S, { 0.08f, 0.22f, 0.30f, 0.95f }, COL_CHIP_BORDER);

        DrawInteractiveButton(padX + 22.0f * S + (bBarW + bBarGap) * 2.0f, bBarY, bBarW, bBarH, S,
                              Tr("✓ Guardar y Salir", "✓ Save & Close"), false, [this]() {
            m_gamepadMappingOpen = false;
            m_listeningAction = -1;
            Gamepad_SaveConfig();
        }, 15.5f * S, { 0.10f, 0.36f, 0.46f, 0.95f }, COL_CYAN);

        // Scrollable List Area
        float listTop = divY + 10.0f * S;
        float listBottom = bBarY - 12.0f * S;
        float listH = std::max(60.0f * S, listBottom - listTop);
        float listX = padX + 22.0f * S;
        float listW = panW - 44.0f * S - 14.0f * S;

        m_scrollAreaX = padX;
        m_scrollAreaY = listTop;
        m_scrollAreaW = panW;
        m_scrollAreaH = listH;

        // 2 columns for 14 buttons (7 rows each)
        int cols = 2;
        float itemGapX = 14.0f * S;
        float itemGapY = 8.0f * S;
        float itemW = (listW - itemGapX) / 2.0f;
        float itemH = 56.0f * S;
        int totalRows = 7;
        float totalListH = float(totalRows) * (itemH + itemGapY);

        m_gamepadMapMaxScrollY = std::max(0.0f, totalListH - listH + 8.0f * S);
        m_gamepadMapScrollY = std::clamp(m_gamepadMapScrollY, 0.0f, m_gamepadMapMaxScrollY);

        SetScissorClip(padX + 6.0f * S, listTop, panW - 12.0f * S, listH);

        for (int i = 0; i < 14; ++i) {
            int col = i % cols;
            int row = i / cols;
            float ix = listX + float(col) * (itemW + itemGapX);
            float iy = listTop - m_gamepadMapScrollY + float(row) * (itemH + itemGapY);

            if (iy + itemH < listTop || iy > listBottom) continue;

            bool isListening = (m_listeningAction == i);
            int currentBinding = Gamepad_GetBinding(i);

            Color rowFill = isListening ? Color{ 0.18f, 0.32f, 0.46f, 0.98f } : Color{ 0.04f, 0.12f, 0.18f, 0.92f };
            Color rowBorder = isListening ? Color{ 0.95f, 0.85f, 0.25f, 1.0f } : (currentBinding >= 0 ? COL_PANEL_BORDER : COL_CHIP_BORDER);

            DrawRoundedRect(ix, iy, itemW, itemH, 10.0f * S, rowFill, rowBorder);

            // Left: Action Name & Desc
            const char* actName = Gamepad_GetActionName(i, m_menuLang);
            const char* actDesc = Gamepad_GetActionDesc(i, m_menuLang);
            DrawText(ix + 14.0f * S, iy + 10.0f * S, actName, 15.5f * S, isListening ? Color{ 0.95f, 0.85f, 0.25f, 1.0f } : COL_WHITE);
            DrawText(ix + 14.0f * S, iy + 32.0f * S, actDesc, 12.0f * S, COL_MUTED);

            // Right: Bound button badge / chip
            float chipW = itemW * 0.44f;
            float chipH = 36.0f * S;
            float chipX = ix + itemW - chipW - 10.0f * S;
            float chipY = iy + (itemH - chipH) * 0.5f;

            if (isListening) {
                DrawRoundedRect(chipX, chipY, chipW, chipH, 8.0f * S,
                                { 0.30f, 0.40f, 0.10f, 0.95f }, { 1.0f, 0.85f, 0.25f, 1.0f });
                DrawButtonLabel(chipX + chipW * 0.5f, chipY + chipH * 0.5f,
                                Tr("¡PULSA BOTÓN!", "PRESS BUTTON!"), 13.0f * S, { 1.0f, 0.95f, 0.40f, 1.0f });
            } else {
                const char* inpName = Gamepad_GetInputName(currentBinding, Gamepad_GetLayout(), m_menuLang);
                DrawRoundedRect(chipX, chipY, chipW, chipH, 8.0f * S,
                                { 0.02f, 0.07f, 0.11f, 0.90f }, COL_CYAN);
                DrawButtonLabel(chipX + chipW * 0.5f, chipY + chipH * 0.5f,
                                inpName, 12.5f * S, COL_CYAN);
            }

            // Click zone to rebind
            RegisterHitZone(ix, iy, itemW, itemH, [this, i]() {
                if (m_listeningAction == i) {
                    m_listeningAction = -1;
                } else {
                    m_listeningAction = i;
                }
            });
        }

        ClearScissorClip();

        // Scrollbar if needed
        if (m_gamepadMapMaxScrollY > 1.0f) {
            float sbX = padX + panW - 16.0f * S;
            float sbW = 6.0f * S;
            DrawRoundedRect(sbX, listTop, sbW, listH, sbW * 0.5f,
                            { 0.02f, 0.07f, 0.10f, 0.80f }, { 0.08f, 0.25f, 0.32f, 0.60f });
            float thumbRatio = std::clamp(listH / (listH + m_gamepadMapMaxScrollY), 0.15f, 0.90f);
            float thumbH = listH * thumbRatio;
            float scrollNorm = std::clamp(m_gamepadMapScrollY / m_gamepadMapMaxScrollY, 0.0f, 1.0f);
            float thumbY = listTop + scrollNorm * (listH - thumbH);
            DrawRoundedRect(sbX, thumbY, sbW, thumbH, sbW * 0.5f, COL_CYAN, COL_CYAN);
        }
    }

    // -------------------------------------------------------------
    // Unified UI Pointer & Drag-Scroll Handling
    // -------------------------------------------------------------
    void BeginUiPointerDown(int pointerId, float px, float py) {
        m_uiPointerId = pointerId;
        m_uiDownX = px;
        m_uiDownY = py;
        m_uiLastY = py;
        m_uiDraggingScroll = false;
    }

    void UpdateUiPointerMove(int pointerId, float px, float py) {
        if (pointerId != m_uiPointerId) return;
        const float S = UiScale();
        float totalDy = py - m_uiDownY;
        float stepDy = py - m_uiLastY;
        m_uiLastY = py;

        bool insideScrollArea = (px >= m_scrollAreaX && px <= m_scrollAreaX + m_scrollAreaW &&
                                 m_uiDownY >= m_scrollAreaY && m_uiDownY <= m_scrollAreaY + m_scrollAreaH);

        if (!m_uiDraggingScroll && insideScrollArea && std::abs(totalDy) > 10.0f * S) {
            m_uiDraggingScroll = true;
        }

        if (m_uiDraggingScroll) {
            if (m_gamepadMappingOpen) {
                m_gamepadMapScrollY = std::clamp(m_gamepadMapScrollY - stepDy, 0.0f, m_gamepadMapMaxScrollY);
            } else if (m_skinEditMode && m_pngPickerOpen) {
                m_pngPickerScrollY = std::clamp(m_pngPickerScrollY - stepDy, 0.0f, m_pngPickerMaxScrollY);
            } else if (m_menuOpen) {
                m_menuScrollY = std::clamp(m_menuScrollY - stepDy, 0.0f, m_menuMaxScrollY);
            }
        }
    }

    void EndUiPointerUp(int pointerId) {
        if (pointerId != m_uiPointerId) return;
        bool wasDragging = m_uiDraggingScroll;
        float tapX = m_uiDownX;
        float tapY = m_uiDownY;
        m_uiPointerId = -1;
        m_uiDraggingScroll = false;

        if (wasDragging) return;

        // Dispatch tap against registered HitZones (reverse order so top-most wins)
        for (int i = int(m_hitZones.size()) - 1; i >= 0; --i) {
            const auto& hz = m_hitZones[i];
            if (tapX >= hz.clipX && tapX <= hz.clipX + hz.clipW &&
                tapY >= hz.clipY && tapY <= hz.clipY + hz.clipH &&
                tapX >= hz.x && tapX <= hz.x + hz.w &&
                tapY >= hz.y && tapY <= hz.y + hz.h) {
                auto cb = hz.onClick;
                if (cb) cb();
                return;
            }
        }

        // Tap outside settings panel closes the menu
        if (m_menuOpen) {
            float padX = float(m_width) * 0.045f;
            float padY = float(m_height) * 0.035f;
            float panW = float(m_width) - padX * 2.0f;
            float panH = float(m_height) - padY * 2.0f;
            if (tapX < padX || tapX > padX + panW || tapY < padY || tapY > padY + panH) {
                SetMenuOpen(false);
            }
        }
    }

    void HandleEditModeTouchDown(SDL_FingerID id, float px, float py) {
        const float S = UiScale();
        float barW = float(m_width) * 0.82f;
        float barH = 56.0f * S;
        float barX = (float(m_width) - barW) * 0.5f;
        float barY = float(m_height) - barH - 12.0f * S;

        // Toolbar clicks
        if (py >= barY && py <= barY + barH) {
            float bw = (barW - 60.0f * S) / 5.0f;

            // 1. [- Tamaño]
            float b1X = barX + 10.0f * S;
            if (px >= b1X && px <= b1X + bw) {
                AdjustSelectedButtonScale(-0.10f);
                return;
            }
            // 2. [+ Tamaño]
            float b2X = barX + 20.0f * S + bw;
            if (px >= b2X && px <= b2X + bw) {
                AdjustSelectedButtonScale(+0.10f);
                return;
            }
            // 3. [Restablecer]
            float b3X = barX + 30.0f * S + bw * 2.0f;
            if (px >= b3X && px <= b3X + bw) {
                InitDefaultButtons();
                m_normLeftStickPos = { 0.12f, 0.76f };
                m_leftStickScale = 1.0f;
                RecalculateButtonPositions();
                return;
            }
            // 4. [Guardar]
            float b4X = barX + 40.0f * S + bw * 3.0f;
            if (px >= b4X && px <= b4X + bw) {
                SaveLayoutConfig();
                m_editMode = false;
                m_selectedButtonIndex = -1;
                return;
            }
            // 5. [Cancelar]
            float b5X = barX + 50.0f * S + bw * 4.0f;
            if (px >= b5X && px <= b5X + bw) {
                LoadLayoutConfig();
                RecalculateButtonPositions();
                m_editMode = false;
                m_selectedButtonIndex = -1;
                return;
            }
        }

        // Left Stick touched
        float ldx = px - m_leftStickCenter.x;
        float ldy = py - m_leftStickCenter.y;
        if (ldx * ldx + ldy * ldy <= (m_leftStickRadius * 1.3f) * (m_leftStickRadius * 1.3f)) {
            m_selectedButtonIndex = -2;
            m_editDragging = true;
            m_editFingerId = int(id);
            return;
        }

        // Check which button was touched
        for (size_t i = 0; i < m_buttons.size(); ++i) {
            auto& btn = m_buttons[i];
            if (!IsButtonActive(btn)) continue;
            float dx = px - btn.pos.x;
            float dy = py - btn.pos.y;
            if (dx * dx + dy * dy <= (btn.radius * 1.4f) * (btn.radius * 1.4f)) {
                m_selectedButtonIndex = int(i);
                m_editDragging = true;
                m_editFingerId = int(id);
                return;
            }
        }
    }

    void AdjustSelectedButtonScale(float delta) {
        if (m_selectedButtonIndex >= 0 && m_selectedButtonIndex < int(m_buttons.size())) {
            auto& btn = m_buttons[m_selectedButtonIndex];
            btn.scale = std::clamp(btn.scale + delta, 0.50f, 2.0f);
            btn.radius = btn.defaultNormRadius * m_unit * btn.scale;
        } else if (m_selectedButtonIndex == -2) {
            m_leftStickScale = std::clamp(m_leftStickScale + delta, 0.50f, 2.0f);
            m_leftStickRadius = m_unit * 0.15f * m_leftStickScale;
            m_leftStickKnobRadius = m_unit * 0.075f * m_leftStickScale;
        }
    }

    // -------------------------------------------------------------
    // Save, Language, & Graphics Management
    // -------------------------------------------------------------
    static constexpr float kCameraSensScales[4] = { 0.5f, 1.0f, 1.5f, 2.0f };

    void SetCameraSensitivityIndex(int idx) {
        m_cameraSensitivityIndex = std::clamp(idx, 0, 3);
        m_cameraSensitivity = kCameraSensScales[m_cameraSensitivityIndex];
    }

    void ApplyResolutionScale(int idx) {
        constexpr float scales[] = { 1.0f, 720.0f / 448.0f, 1080.0f / 448.0f, 1440.0f / 448.0f, 2160.0f / 448.0f, 0.0f };
        idx = std::clamp(idx, 0, 5);
        VISetFrameBufferScale(scales[idx]);
    }

    float GetScreenAspect() const {
        SDL_Window* win = aurora_get_window();
        int winW = 0, winH = 0;
        if (win && SDL_GetWindowSizeInPixels(win, &winW, &winH) && winW > 0 && winH > 0) {
            return float(winW) / float(winH);
        }
        if (m_width > 0 && m_height > 0) {
            return float(m_width) / float(m_height);
        }
        return 21.0f / 9.0f;
    }

    float GetTargetAspect(int idx) const {
        if (idx == 0) return 16.0f / 9.0f;
        if (idx == 1) return GetScreenAspect();
        return 4.0f / 3.0f;
    }

    void ApplyAspectRatio(int idx) {
        idx = std::clamp(idx, 0, 2);
        m_aspectIndex = idx;
        if (idx == 0) aurora_set_native_target_aspect(2); // AURORA_NATIVE_TARGET_ASPECT_16_9
        else if (idx == 1) aurora_set_native_target_aspect(1); // AURORA_NATIVE_TARGET_FILL (Pantalla Completa Adaptable)
        else if (idx == 2) aurora_set_native_target_aspect(0); // AURORA_NATIVE_TARGET_FIT (4:3)

        SetWidescreenSetting(idx != 2);
        ApplyGuestAspect(idx);
    }

    void ApplyGuestAspect(int idx) {
        float targetAspect = GetTargetAspect(idx);
        bool isWide = (idx != 2);
#if defined(__cpp_exceptions)
        try {
#endif
            if (Memory::Contains(0x8065B4C8, 4)) {
                Memory::WriteFloat32(0x8065B4C8, targetAspect);
            }
            if (Memory::Contains(0x80797F68, 4)) {
                if (isWide) {
                    Memory::WriteFloat32(0x80797F68, targetAspect);
                } else {
                    Memory::WriteFloat32(0x80797F68, 16.0f / 9.0f);
                }
            }
            if (Memory::Contains(0x8065B4C0, 4)) {
                Memory::WriteFloat32(0x8065B4C0, isWide ? 854.0f : 640.0f);
            }
            if (Memory::Contains(0x8065B4F8, 2)) {
                Memory::Write16(0x8065B4F8, isWide ? 854 : 640);
            }
            if (Memory::Contains(0x8065B4F0, 4)) {
                Memory::WriteFloat32(0x8065B4F0, (isWide ? 854.0f : 640.0f) - 16.0f);
            }
            if (Memory::Contains(0x8065B4D5, 1)) {
                Memory::Write8(0x8065B4D5, isWide ? 1 : 0);
            }
            if (Memory::Contains(0x8065B4D6, 1)) {
                // Ensure split cameras is NEVER enabled during aspect changes
                Memory::Write8(0x8065B4D6, 0);
            }
#if defined(__cpp_exceptions)
        } catch (...) {}
#endif
    }

    void LoadSettings() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string gfxPath = dir + "/MH3UI.graphics";

        std::ifstream in(gfxPath);
        int msaa = 1, vsync = 1, resIdx = 0, fpsLimit = 60, aspect = 0, showFps = 1, fullscreen = 0;
        int skipEfb = 1, asyncShd = 1, bloomLvl = 2;
        if (in >> msaa >> vsync >> resIdx >> fpsLimit >> aspect >> showFps) {
            if (in >> fullscreen) {
                m_fullscreen = (fullscreen != 0);
            }
            if (in >> skipEfb) {
                m_skipEfbCpu = (skipEfb != 0);
            }
            if (in >> asyncShd) {
                m_asyncShaders = (asyncShd != 0);
            }
            if (in >> bloomLvl) {
                m_bloomLevel = std::clamp(bloomLvl, 0, 3);
            }
            int dummyAA = 0, camSens = 1;
            if (in >> dummyAA) {}
            if (in >> camSens) {
                SetCameraSensitivityIndex(camSens);
            }
            m_vsync = (vsync != 0);
            m_resolutionIndex = std::clamp(resIdx, 0, 5);
            m_aspectIndex = std::clamp(aspect, 0, 2);
            if (fpsLimit == 30 || fpsLimit == 60 || fpsLimit == 90 || fpsLimit == 120) {
                m_fpsLimit = fpsLimit;
            } else {
                m_fpsLimit = 60;
            }
            m_showFpsHud = (showFps != 0);
        } else {
            m_vsync = true;
            m_resolutionIndex = 0; // 0: Original Wii by default!
            m_aspectIndex = 0;      // 0: 16:9 Panorámica by default!
            m_fpsLimit = 60;
            m_showFpsHud = true;
            m_fullscreen = false;
            m_skipEfbCpu = true;
            m_asyncShaders = true;
            m_bloomLevel = 2; // 2: Original (Wii) by default!
        }

        SetSkipEfbAccessFromCpu(m_skipEfbCpu);
        aurora_set_skip_unready_pipelines(m_asyncShaders);
        aurora_set_bloom_level(m_bloomLevel);

        ApplyResolutionScale(m_resolutionIndex);
        if (m_fullscreen) {
            ApplyFullscreen(true);
        } else {
            ApplyAspectRatio(m_aspectIndex);
        }
        MH3FrameRateControl::SetTargetFPS(m_fpsLimit);
        aurora_enable_vsync(m_vsync);

        std::string menuLangPath = dir + "/MH3UI.menu_lang";
        std::ifstream menuLangIn(menuLangPath);
        std::string menuCode;
        if (menuLangIn >> menuCode && !menuCode.empty()) {
            if (menuCode == "en") m_menuLang = 1;
            else m_menuLang = 0;
        } else {
            m_menuLang = 0; // Spanish default!
        }

        std::string langPath = dir + "/MH3UI.language";
        std::ifstream langIn(langPath);
        std::string code;
        if (langIn >> code && !code.empty()) {
            if (code == "es") m_langChoice = 0;
            else if (code == "en") m_langChoice = 1;
            else if (code == "fr") m_langChoice = 2;
            else if (code == "de") m_langChoice = 3;
            else if (code == "it") m_langChoice = 4;
            else m_langChoice = 0;
        } else {
            m_langChoice = 0; // Spanish default!
        }

        m_onlineMode = static_cast<int>(LocalOnlineServer::GetMode());
        if (m_onlineMode == 0) {
            m_onlineStatusMsg = (m_menuLang == 1) ? "Offline mode. Play in Moga Village." : "Modo desconectado. Juega en la Aldea de Moga.";
        } else {
            m_onlineMode = 3;
            m_onlineStatusMsg = (m_menuLang == 1) ? "Official mh3sp.com community server enabled." : "Servidor oficial de la comunidad mh3sp.com activado.";
        }
        m_saveStatusMsg = (m_menuLang == 1) ? "Ready to export or import save files." : "Listo para exportar o importar partidas guardadas.";
    }

    void SaveSettings() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string gfxPath = dir + "/MH3UI.graphics";

        std::ofstream out(gfxPath, std::ios::trunc);
        if (out) {
            out << "1 " << (m_vsync ? 1 : 0) << ' ' << m_resolutionIndex << ' '
                << m_fpsLimit << ' ' << m_aspectIndex << ' ' << (m_showFpsHud ? 1 : 0) << ' '
                << (m_fullscreen ? 1 : 0) << ' ' << (m_skipEfbCpu ? 1 : 0) << ' '
                << (m_asyncShaders ? 1 : 0) << ' ' << m_bloomLevel << " 0 "
                << m_cameraSensitivityIndex << '\n';
        }
    }

    void SaveLanguage() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string langPath = dir + "/MH3UI.language";

        const char* codes[] = { "es", "en", "fr", "de", "it" };
        std::ofstream out(langPath, std::ios::trunc);
        if (out && m_langChoice >= 0 && m_langChoice < 5) {
            out << codes[m_langChoice] << '\n';
        }
    }

    void GetTitleLanguageButtonRect(float* outX, float* outY, float* outW, float* outH) const {
        float gameAspect = 16.0f / 9.0f;
        float winAspect = float(m_width) / float(m_height);
        float gameW, gameH, gameX, gameY;
        if (m_aspectIndex == 1) {
            gameX = 0; gameY = 0; gameW = float(m_width); gameH = float(m_height);
        } else if (winAspect >= gameAspect) {
            gameH = float(m_height);
            gameW = gameH * gameAspect;
            gameX = (float(m_width) - gameW) * 0.5f;
            gameY = 0.0f;
        } else {
            gameW = float(m_width);
            gameH = gameW / gameAspect;
            gameX = 0.0f;
            gameY = (float(m_height) - gameH) * 0.5f;
        }
        float S = gameH / 576.0f;
        if (outX) *outX = gameX + 79.0f * S;
        if (outY) *outY = gameY + 386.0f * S;
        if (outW) *outW = 371.0f * S;
        if (outH) *outH = 48.0f * S;
    }

    const char* GetTitleLanguageOptionLabel() const {
        switch (m_langChoice) {
        case 1: return "Language Settings";
        case 2: return "Paramètres de langue";
        case 3: return "Spracheinstellungen";
        case 4: return "Impostazioni lingua";
        default: return "Ajustes de idioma";
        }
    }

    const char* GetTitleLanguageOptionDescription() const {
        switch (m_langChoice) {
        case 1: return "Change the language of in-game text and dialogues.";
        case 2: return "Modifier la langue des textes et des dialogues du jeu.";
        case 3: return "Ändert die Sprache der Texte und Dialoge im Spiel.";
        case 4: return "Modifica la lingua dei testi e dei dialoghi del juego.";
        default: return "Cambia el idioma de los textos y diálogos del juego.";
        }
    }

    void DrawMhPlaque(float x, float y, float w, float h, float S, const char* label, bool hovered, bool activeMark = false) {
        if (hovered) {
            DrawRoundedRect(x - 3.5f * S, y - 3.5f * S, w + 7.0f * S, h + 7.0f * S, 6.0f * S,
                            { 0.92f, 0.60f, 0.15f, 0.45f }, { 0.98f, 0.78f, 0.22f, 0.95f });
            DrawRoundedRect(x, y, w, h, 4.0f * S,
                            { 0.28f, 0.20f, 0.10f, 0.98f }, { 0.98f, 0.82f, 0.28f, 1.0f });
            DrawRoundedRect(x + 1.5f * S, y + 1.5f * S, w - 3.0f * S, h - 3.0f * S, 3.0f * S,
                            { 0.0f, 0.0f, 0.0f, 0.0f }, { 0.98f, 0.88f, 0.48f, 0.60f });
            DrawRectSolid(x + 3.0f * S, y + h * 0.20f, 3.5f * S, h * 0.60f, { 0.98f, 0.88f, 0.45f, 1.0f });
        } else {
            DrawRoundedRect(x, y, w, h, 4.0f * S,
                            { 0.12f, 0.10f, 0.08f, 0.95f }, { 0.45f, 0.38f, 0.26f, 0.90f });
            DrawRoundedRect(x + 1.5f * S, y + 1.5f * S, w - 3.0f * S, h - 3.0f * S, 3.0f * S,
                            { 0.0f, 0.0f, 0.0f, 0.0f }, { 0.07f, 0.06f, 0.05f, 0.80f });
            DrawRectSolid(x + 3.0f * S, y + h * 0.20f, 2.5f * S, h * 0.60f, { 0.48f, 0.40f, 0.25f, 0.80f });
        }

        Color textCol = hovered ? Color{ 1.0f, 0.96f, 0.82f, 1.0f } : Color{ 0.86f, 0.82f, 0.74f, 0.95f };
        DrawText(x + 32.0f * S, y + h * 0.5f, label, 18.0f * S, textCol);

        if (activeMark) {
            DrawText(x + w - 30.0f * S, y + h * 0.5f, "✓", 20.0f * S, { 0.96f, 0.84f, 0.32f, 1.0f }, true);
        }
    }

    void ApplyLanguageHotSwap(int choice) {
        if (choice < 0 || choice > 4) return;
        m_langChoice = choice;

        const char* codes[] = { "es", "en", "fr", "de", "it" };
        const uint8_t sysLangs[] = { 4, 1, 3, 2, 5 };
        const uint8_t gameLangs[] = { 5, 1, 2, 3, 4 };
        const char* suffixes[] = { "spa", "eng", "fre", "ger", "ita" };

        uint8_t sys = sysLangs[choice];
        uint8_t gameL = gameLangs[choice];
        const char* sfx = suffixes[choice];

        SetLanguageSetting(sys);
        setenv("MH3_LANGUAGE", codes[choice], 1);
        SaveLanguage();

        if (Memory::Contains(0x8065AA61, 1)) {
            Memory::Write8(0x8065AA61, sys);
        }
        if (Memory::Contains(0x8065AA69, 1)) {
            Memory::Write8(0x8065AA69, gameL);
        }

        try {
            std::string path = std::string("00/data00_") + sfx + ".bin";
            const auto bytes = GameDiscImage().ReadFile(path);
            if (!bytes.empty()) {
                if (Memory::Contains(0x90F49000, bytes.size())) {
                    std::memcpy(Memory::GetPointer(0x90F49000, bytes.size()), bytes.data(), bytes.size());
                }
                if (Memory::Contains(0x80796FAC, 4)) {
                    uint32_t tableArray = Memory::Read32(0x80796FAC);
                    if (tableArray && Memory::Contains(tableArray, 4)) {
                        uint32_t table0 = Memory::Read32(tableArray);
                        if (table0 && Memory::Contains(table0, bytes.size())) {
                            std::memcpy(Memory::GetPointer(table0, bytes.size()), bytes.data(), bytes.size());
                        }
                    }
                }
            }
        } catch (const std::exception& e) {
            LOGE("ApplyLanguageHotSwap exception: %s", e.what());
        } catch (...) {
            LOGE("ApplyLanguageHotSwap unknown exception");
        }

        for (const char* prefix : { "00/data10_", "00/data11_", "00/data20_" }) {
            try {
                std::string p = std::string(prefix) + sfx + ".bin";
                (void)GameDiscImage().ReadFile(p);
            } catch (...) {}
        }

        LOGI("Applied Language Hot-Swap: %s (sys=%u, game=%u)", codes[choice], sys, gameL);
    }

    void PollTitleOptionsMenuGamepad() {
        int count = 0;
        SDL_JoystickID* gamepads = SDL_GetGamepads(&count);
        if (!gamepads || count <= 0) {
            SDL_free(gamepads);
            return;
        }
        SDL_Gamepad* pad = SDL_OpenGamepad(gamepads[0]);
        SDL_free(gamepads);
        if (!pad) return;

        static bool lastUp = false, lastDown = false, lastA = false, lastB = false;
        bool up = SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_UP);
        bool down = SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_DOWN);
        bool a = SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_SOUTH);
        bool b = SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_EAST);

        int16_t stickY = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY);
        if (stickY < -18000) up = true;
        if (stickY > 18000) down = true;

        if (m_langSubmenuOpen) {
            if (down && !lastDown) {
                m_langSubmenuCursor = (m_langSubmenuCursor + 1) % 6;
            } else if (up && !lastUp) {
                m_langSubmenuCursor = (m_langSubmenuCursor + 5) % 6;
            } else if (a && !lastA) {
                if (m_langSubmenuCursor >= 0 && m_langSubmenuCursor < 5) {
                    ApplyLanguageHotSwap(m_langSubmenuCursor);
                } else {
                    CloseLanguageSubmenu();
                }
            } else if (b && !lastB) {
                CloseLanguageSubmenu();
            }
        } else {
            uint32_t titleWork = Memory::Contains(0x809D3568, 4) ? Memory::Read32(0x809D3568) : 0;
            if (titleWork && Memory::Contains(titleWork, 4440)) {
                uint8_t gameCursor = Memory::Read8(titleWork + 4430);
                if (gameCursor == 4 && down && !lastDown) {
                    m_titleCursorIdx = 5;
                } else if (m_titleCursorIdx == 5) {
                    if (up && !lastUp) {
                        m_titleCursorIdx = -1;
                    } else if (a && !lastA) {
                        OpenLanguageSubmenu();
                    }
                } else if (gameCursor != 4 && m_titleCursorIdx == 5 && !down) {
                    m_titleCursorIdx = -1;
                }
            }
        }

        lastUp = up;
        lastDown = down;
        lastA = a;
        lastB = b;
    }

    void RenderTitleLanguageOption() {
        if (m_menuOpen || m_gamepadMappingOpen || m_skinEditMode || m_editMode) {
            return;
        }
        if (!IsTitleOptionsMenuActive()) {
            m_langSubmenuOpen = false;
            m_titleCursorIdx = -1;
            m_langBtnHovered = false;
            return;
        }

        float gameAspect = 16.0f / 9.0f;
        float winAspect = float(m_width) / float(m_height);
        float gameW, gameH, gameX, gameY;
        if (m_aspectIndex == 1) { // Fill
            gameX = 0; gameY = 0; gameW = float(m_width); gameH = float(m_height);
        } else if (winAspect >= gameAspect) {
            gameH = float(m_height);
            gameW = gameH * gameAspect;
            gameX = (float(m_width) - gameW) * 0.5f;
            gameY = 0.0f;
        } else {
            gameW = float(m_width);
            gameH = gameW / gameAspect;
            gameX = 0.0f;
            gameY = (float(m_height) - gameH) * 0.5f;
        }
        float S = gameH / 576.0f;

        float btnX = gameX + 79.0f * S;
        float btnY = gameY + 386.0f * S;
        float btnW = 371.0f * S;
        float btnH = 48.0f * S;

        PollTitleOptionsMenuGamepad();

        bool isHovered = (m_titleCursorIdx == 5) || m_langBtnHovered;

        DrawMhPlaque(btnX, btnY, btnW, btnH, S, GetTitleLanguageOptionLabel(), isHovered, false);

        RegisterHitZone(btnX, btnY, btnW, btnH, [this]() {
            OpenLanguageSubmenu();
        });

        if (isHovered && !m_langSubmenuOpen) {
            float descBoxX = gameX + 110.0f * S;
            float descBoxY = gameY + 466.0f * S;
            float descBoxW = 750.0f * S;
            float descBoxH = 34.0f * S;
            DrawRoundedRect(descBoxX, descBoxY, descBoxW, descBoxH, 4.0f * S,
                            { 0.07f, 0.06f, 0.05f, 0.98f }, { 0.22f, 0.18f, 0.14f, 0.80f });
            DrawText(gameX + 118.0f * S, gameY + 472.0f * S,
                     GetTitleLanguageOptionDescription(), 15.0f * S, { 0.98f, 0.95f, 0.88f, 1.0f });
        }

        if (m_langSubmenuOpen) {
            DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.65f });

            RegisterHitZone(0, 0, float(m_width), float(m_height), [this]() {
                CloseLanguageSubmenu();
            });

            float modalW = 460.0f * S;
            float modalH = 390.0f * S;
            float modalX = gameX + (gameW - modalW) * 0.5f;
            float modalY = gameY + (gameH - modalH) * 0.5f;

            DrawRoundedRect(modalX, modalY, modalW, modalH, 12.0f * S,
                            { 0.10f, 0.08f, 0.07f, 0.97f }, { 0.65f, 0.52f, 0.28f, 0.95f });
            DrawRoundedRect(modalX + 3.0f * S, modalY + 3.0f * S, modalW - 6.0f * S, modalH - 6.0f * S, 10.0f * S,
                            { 0.0f, 0.0f, 0.0f, 0.0f }, { 0.25f, 0.20f, 0.12f, 0.80f });

            float headH = 46.0f * S;
            DrawRoundedRect(modalX + 16.0f * S, modalY + 14.0f * S, modalW - 32.0f * S, headH, 6.0f * S,
                            { 0.18f, 0.14f, 0.09f, 0.95f }, { 0.80f, 0.65f, 0.32f, 0.95f });
            DrawText(modalX + modalW * 0.5f, modalY + 14.0f * S + headH * 0.5f,
                     GetTitleLanguageOptionLabel(), 20.0f * S, { 1.0f, 0.94f, 0.75f, 1.0f }, true);

            const char* subTitles[] = {
                "Cambio instantáneo en caliente sin reiniciar",
                "Instant hot-swap without restarting game",
                "Changement instantané sans redémarrer le jeu",
                "Sofortiger Sprachwechsel ohne Neustart",
                "Cambio immediato senza riavviare il gioco"
            };
            DrawText(modalX + modalW * 0.5f, modalY + 70.0f * S,
                     subTitles[std::clamp(m_langChoice, 0, 4)], 13.5f * S, { 0.75f, 0.70f, 0.60f, 0.85f }, true);

            const char* langNames[] = { "Español", "English", "Français", "Deutsch", "Italiano" };
            float itemH = 38.0f * S;
            float itemGap = 10.0f * S;
            float startY = modalY + 92.0f * S;

            for (int i = 0; i < 5; ++i) {
                float ly = startY + float(i) * (itemH + itemGap);
                bool isSelected = (m_langChoice == i);
                bool isHover = (m_langSubmenuCursor == i) || isSelected;

                DrawMhPlaque(modalX + 24.0f * S, ly, modalW - 48.0f * S, itemH, S, langNames[i], isHover, isSelected);

                RegisterHitZone(modalX + 24.0f * S, ly, modalW - 48.0f * S, itemH, [this, i]() {
                    ApplyLanguageHotSwap(i);
                    m_langSubmenuCursor = i;
                });
            }

            float backY = modalY + modalH - 46.0f * S;
            bool backHover = (m_langSubmenuCursor == 5);
            DrawMhPlaque(modalX + 24.0f * S, backY, modalW - 48.0f * S, 36.0f * S, S,
                         (m_langChoice == 1 ? "Back" : (m_langChoice == 2 ? "Retour" : (m_langChoice == 3 ? "Zurück" : (m_langChoice == 4 ? "Indietro" : "Volver")))),
                         backHover, false);

            RegisterHitZone(modalX + 24.0f * S, backY, modalW - 48.0f * S, 36.0f * S, [this]() {
                CloseLanguageSubmenu();
            });
        }
    }

    void SaveMenuLanguage() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string menuLangPath = dir + "/MH3UI.menu_lang";

        std::ofstream out(menuLangPath, std::ios::trunc);
        if (out) {
            out << (m_menuLang == 1 ? "en" : "es") << '\n';
        }
    }

    void RestartApplication() {
        if (m_restarting) return;
        m_restarting = true;
        SaveSettings();
        SaveLanguage();
        SaveMenuLanguage();
#if defined(__ANDROID__)
        LOGI("RestartApplication: sending COMMAND_RESTART (0x8001) to SDLActivity");
        if (!SDL_SendAndroidMessage(0x8001, 0)) {
            LOGE("SDL_SendAndroidMessage failed, attempting JNI call to ProcessPhoenix...");
            JNIEnv* env = reinterpret_cast<JNIEnv*>(SDL_GetAndroidJNIEnv());
            if (env) {
                jclass cls = env->FindClass("com/oceantri/mh3/ProcessPhoenix");
                if (cls) {
                    jmethodID mid = env->GetStaticMethodID(cls, "triggerRebirth", "(Landroid/content/Context;)V");
                    jobject act = reinterpret_cast<jobject>(SDL_GetAndroidActivity());
                    if (mid && act) {
                        env->CallStaticVoidMethod(cls, mid, act);
                        env->DeleteLocalRef(act);
                        return;
                    }
                }
            }
            std::exit(0);
        }
#else
        std::exit(0);
#endif
    }

    void SaveLayoutConfig() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string cfgPath = dir + "/touch_layout.cfg";

        std::ofstream out(cfgPath, std::ios::trunc);
        if (!out) return;

        out << "VERSION 1\n";
        out << "TOUCH_VISIBLE " << (m_touchVisible ? 1 : 0) << '\n';
        out << "DAMAGE_NUMBERS " << (m_damageNumbersEnabled ? 1 : 0) << '\n';
        out << "OPACITY " << m_buttonOpacity << '\n';
        out << "GEAR_AUTOHIDE " << m_gearAutoHideSec << '\n';
        out << "MACRO1 " << (m_macro1Enabled ? 1 : 0) << '\n';
        out << "MACRO2 " << (m_macro2Enabled ? 1 : 0) << '\n';
        out << "MACRO3 " << (m_macro3Enabled ? 1 : 0) << '\n';
        out << "MACRO4 " << (m_macro4Enabled ? 1 : 0) << '\n';
        out << "LEFT_STICK " << m_normLeftStickPos.x << ' ' << m_normLeftStickPos.y << ' ' << m_leftStickScale << '\n';

        for (const auto& btn : m_buttons) {
            out << "BTN " << btn.id << ' ' << btn.normPos.x << ' ' << btn.normPos.y << ' ' << btn.scale << '\n';
        }
    }

    void LoadLayoutConfig() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string cfgPath = dir + "/touch_layout.cfg";

        std::ifstream in(cfgPath);
        if (!in) {
            InitDefaultButtons();
            m_normLeftStickPos = { 0.12f, 0.76f };
            m_leftStickScale = 1.0f;
            return;
        }

        InitDefaultButtons();
        std::string line;
        while (std::getline(in, line)) {
            std::istringstream iss(line);
            std::string tag;
            if (!(iss >> tag)) continue;
            if (tag == "TOUCH_VISIBLE") { int v; iss >> v; m_touchVisible = (v != 0); }
            else if (tag == "DAMAGE_NUMBERS") { int v; iss >> v; m_damageNumbersEnabled = (v != 0); }
            else if (tag == "OPACITY") { iss >> m_buttonOpacity; m_buttonOpacity = std::clamp(m_buttonOpacity, 0.10f, 1.0f); }
            else if (tag == "GEAR_AUTOHIDE") { int v = 0; iss >> v; m_gearAutoHideSec = std::clamp(v, 0, 60); }
            else if (tag == "MACRO1") { int v; iss >> v; m_macro1Enabled = (v != 0); }
            else if (tag == "MACRO2") { int v; iss >> v; m_macro2Enabled = (v != 0); }
            else if (tag == "MACRO3") { int v; iss >> v; m_macro3Enabled = (v != 0); }
            else if (tag == "MACRO4") { int v; iss >> v; m_macro4Enabled = (v != 0); }
            else if (tag == "LEFT_STICK") {
                iss >> m_normLeftStickPos.x >> m_normLeftStickPos.y >> m_leftStickScale;
            } else if (tag == "BTN") {
                std::string id;
                float nx, ny, sc;
                if (iss >> id >> nx >> ny >> sc) {
                    for (auto& btn : m_buttons) {
                        if (btn.id == id) {
                            btn.normPos = { nx, ny };
                            btn.scale = sc;
                            break;
                        }
                    }
                }
            }
        }
    }

    void ExportSaveFiles() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::filesystem::path userDir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::filesystem::path saveData = userDir / "nand/title/00010000/524d4850/data";
        std::filesystem::path exportParent = "/storage/emulated/0/Download/MH3_Saves";

        std::error_code ec;
        std::filesystem::create_directories(exportParent, ec);

        auto res = mh3_save_manager::ExportSave(saveData, exportParent);
        if (res.success) {
            m_saveStatusMsg = (m_menuLang == 1)
                ? ("Exported: " + res.output.filename().string() + " (in Download/MH3_Saves)")
                : ("Exportado: " + res.output.filename().string() + " (en Download/MH3_Saves)");
        } else {
            m_saveStatusMsg = (m_menuLang == 1 ? "Error exporting: " : "Error al exportar: ") + res.detail;
        }
    }

    void ImportSaveFiles() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::filesystem::path userDir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::filesystem::path saveData = userDir / "nand/title/00010000/524d4850/data";
        std::filesystem::path backupsRoot = userDir / "saves";

        std::filesystem::path searchRoots[] = {
            "/storage/emulated/0/Download/MH3_Saves",
            "/storage/emulated/0/Download",
            userDir / "saves"
        };

        std::filesystem::path candidateFolder;
        for (const auto& root : searchRoots) {
            std::error_code ec;
            if (!std::filesystem::exists(root, ec)) continue;
            for (const auto& entry : std::filesystem::directory_iterator(root, ec)) {
                if (entry.is_directory()) {
                    if (std::filesystem::exists(entry.path() / "title/00010000/524d4850/data") ||
                        std::filesystem::exists(entry.path() / "nocopy/data00") ||
                        std::filesystem::exists(entry.path() / "data/nocopy/data00") ||
                        std::filesystem::exists(entry.path() / "data00")) {
                        candidateFolder = entry.path();
                        break;
                    }
                }
            }
            if (!candidateFolder.empty()) break;
        }

        if (candidateFolder.empty()) {
            m_saveStatusMsg = (m_menuLang == 1)
                ? "No Dolphin save found in Download/. Copy your save folder there."
                : "No se halló partida Dolphin en Download/. Copia tu carpeta ahí.";
            return;
        }

        mh3_save_manager::CreateBackup(saveData, backupsRoot);

        std::filesystem::path pendingRoot = userDir / "PendingImport";
        auto stageRes = mh3_save_manager::StageImport(candidateFolder, pendingRoot);
        if (!stageRes.success) {
            m_saveStatusMsg = (m_menuLang == 1 ? "Error importing: " : "Error importando: ") + stageRes.detail;
            return;
        }
        auto applyRes = mh3_save_manager::ApplyPendingImport(saveData, pendingRoot, backupsRoot);
        if (applyRes.success) {
            m_saveStatusMsg = (m_menuLang == 1)
                ? "Dolphin save imported successfully! (Safety backup created)."
                : "¡Partida Dolphin importada con éxito! (Backup de seguridad creado).";
        } else {
            m_saveStatusMsg = (m_menuLang == 1 ? "Error applying save: " : "Error al aplicar: ") + applyRes.detail;
        }
    }

    void CreateQuickBackup() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::filesystem::path userDir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::filesystem::path saveData = userDir / "nand/title/00010000/524d4850/data";
        std::filesystem::path backupsRoot = userDir / "saves";

        auto res = mh3_save_manager::CreateBackup(saveData, backupsRoot);
        if (res.success) {
            m_saveStatusMsg = (m_menuLang == 1)
                ? ("Backup saved: " + res.output.filename().string())
                : ("Copia guardada: " + res.output.filename().string());
        } else {
            m_saveStatusMsg = (m_menuLang == 1 ? "Error creating backup: " : "Error creando copia: ") + res.detail;
        }
    }

    void SaveSkinConfig() {
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::error_code ec;
        std::filesystem::create_directories(dir, ec);
        std::string cfgPath = dir + "/touch_skins.cfg";

        std::ofstream out(cfgPath, std::ios::trunc);
        if (!out) return;
        out << "VERSION 1\n";
        if (!m_currentBrowseDir.empty()) {
            out << "BROWSE_DIR\t" << m_currentBrowseDir << '\n';
        }
        for (const auto& kv : m_activeSkins) {
            if (!kv.first.empty() && !kv.second.empty()) {
                out << "SKIN\t" << kv.first << '\t' << kv.second << '\n';
            }
        }
    }

    void LoadSkinConfig() {
        m_activeSkins.clear();
        m_pendingSkins.clear();
        const char* user = std::getenv("MH3_USER_DIR");
        std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
        std::string cfgPath = dir + "/touch_skins.cfg";

        std::ifstream in(cfgPath);
        if (!in) {
            m_currentBrowseDir = GetDefaultBrowseDir();
            return;
        }
        std::string line;
        while (std::getline(in, line)) {
            if (line.rfind("BROWSE_DIR\t", 0) == 0) {
                m_currentBrowseDir = line.substr(11);
            } else if (line.rfind("SKIN\t", 0) == 0) {
                size_t tab2 = line.find('\t', 5);
                if (tab2 != std::string::npos) {
                    std::string slot = line.substr(5, tab2 - 5);
                    std::string path = line.substr(tab2 + 1);
                    if (!slot.empty() && !path.empty()) {
                        m_activeSkins[slot] = path;
                    }
                }
            }
        }
        m_pendingSkins = m_activeSkins;
        if (m_currentBrowseDir.empty()) {
            m_currentBrowseDir = GetDefaultBrowseDir();
        }
    }

    static std::string GetDefaultBrowseDir() {
        const char* candidates[] = {
            "/var/mnt/juegos_sdb2/Botones custom/Zax MHXX Theme Citra MMJ",
            "/var/mnt/juegos_sdb2/Botones custom",
            "/storage/emulated/0/MH3/Botones custom/Zax MHXX Theme Citra MMJ",
            "/storage/emulated/0/MH3/Botones custom",
            "/storage/emulated/0/Download",
            "/storage/emulated/0/MH3",
            "/storage/emulated/0"
        };
        std::error_code ec;
        for (const char* c : candidates) {
            if (std::filesystem::exists(c, ec) && std::filesystem::is_directory(c, ec)) {
                return c;
            }
        }
        const char* user = std::getenv("MH3_USER_DIR");
        if (user && *user && std::filesystem::exists(user, ec)) {
            return user;
        }
        return ".";
    }

    void RefreshPngBrowser() {
        m_pngBrowserEntries.clear();
        std::error_code ec;
        if (m_currentBrowseDir.empty() || !std::filesystem::exists(m_currentBrowseDir, ec)) {
            m_currentBrowseDir = GetDefaultBrowseDir();
        }

        std::vector<PngBrowserEntry> dirs;
        std::vector<PngBrowserEntry> files;
        for (const auto& entry : std::filesystem::directory_iterator(m_currentBrowseDir, std::filesystem::directory_options::skip_permission_denied, ec)) {
            std::error_code ec2;
            std::string name = entry.path().filename().string();
            if (name.empty() || name[0] == '.') continue;
            if (entry.is_directory(ec2)) {
                dirs.push_back({ name, entry.path().string(), true });
            } else if (entry.is_regular_file(ec2)) {
                std::string ext = entry.path().extension().string();
                std::transform(ext.begin(), ext.end(), ext.begin(),
                               [](unsigned char c) { return char(std::tolower(c)); });
                if (ext == ".png") {
                    files.push_back({ name, entry.path().string(), false });
                }
            }
        }

        auto cmpName = [](const PngBrowserEntry& a, const PngBrowserEntry& b) {
            return a.name < b.name;
        };
        std::sort(dirs.begin(), dirs.end(), cmpName);
        std::sort(files.begin(), files.end(), cmpName);

        m_pngBrowserEntries.insert(m_pngBrowserEntries.end(), dirs.begin(), dirs.end());
        m_pngBrowserEntries.insert(m_pngBrowserEntries.end(), files.begin(), files.end());
    }

    static bool LoadRawPngTexture(const std::string& path, GLuint& outTex, float& outAspect) {
        outTex = 0;
        outAspect = 1.0f;
        FILE* fp = std::fopen(path.c_str(), "rb");
        if (!fp) return false;

        png_structp png = png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
        if (!png) {
            std::fclose(fp);
            return false;
        }
        png_infop info = png_create_info_struct(png);
        if (!info) {
            png_destroy_read_struct(&png, nullptr, nullptr);
            std::fclose(fp);
            return false;
        }
        if (setjmp(png_jmpbuf(png))) {
            png_destroy_read_struct(&png, &info, nullptr);
            std::fclose(fp);
            return false;
        }

        png_init_io(png, fp);
        png_read_info(png, info);

        png_uint_32 width = png_get_image_width(png, info);
        png_uint_32 height = png_get_image_height(png, info);
        png_byte colorType = png_get_color_type(png, info);
        png_byte bitDepth = png_get_bit_depth(png, info);

        if (width == 0 || height == 0 || width > 8192 || height > 8192) {
            png_destroy_read_struct(&png, &info, nullptr);
            std::fclose(fp);
            return false;
        }

        if (bitDepth == 16) png_set_strip_16(png);
        if (colorType == PNG_COLOR_TYPE_PALETTE) png_set_palette_to_rgb(png);
        if (colorType == PNG_COLOR_TYPE_GRAY && bitDepth < 8) png_set_expand_gray_1_2_4_to_8(png);
        if (png_get_valid(png, info, PNG_INFO_tRNS)) png_set_tRNS_to_alpha(png);
        if (colorType == PNG_COLOR_TYPE_RGB || colorType == PNG_COLOR_TYPE_GRAY || colorType == PNG_COLOR_TYPE_PALETTE) {
            png_set_filler(png, 0xFF, PNG_FILLER_AFTER);
        }
        if (colorType == PNG_COLOR_TYPE_GRAY || colorType == PNG_COLOR_TYPE_GRAY_ALPHA) {
            png_set_gray_to_rgb(png);
        }

        png_read_update_info(png, info);

        std::vector<uint8_t> rawPixels(size_t(width) * size_t(height) * 4);
        std::vector<png_bytep> rowPointers(height);
        for (png_uint_32 y = 0; y < height; ++y) {
            rowPointers[y] = rawPixels.data() + size_t(y) * size_t(width) * 4;
        }
        png_read_image(png, rowPointers.data());
        png_destroy_read_struct(&png, &info, nullptr);
        std::fclose(fp);

        // Find non-transparent bounding box and crop symmetrically around image center
        int minX = int(width), minY = int(height), maxX = -1, maxY = -1;
        for (int y = 0; y < int(height); ++y) {
            const uint8_t* row = rawPixels.data() + size_t(y) * size_t(width) * 4;
            for (int x = 0; x < int(width); ++x) {
                if (row[x * 4 + 3] > 8) {
                    if (x < minX) minX = x;
                    if (x > maxX) maxX = x;
                    if (y < minY) minY = y;
                    if (y > maxY) maxY = y;
                }
            }
        }

        int cMinX = 0, cMaxX = int(width) - 1, cMinY = 0, cMaxY = int(height) - 1;
        if (maxX >= minX && maxY >= minY) {
            float cx = float(width - 1) * 0.5f;
            float cy = float(height - 1) * 0.5f;
            float halfW = std::max(cx - float(minX), float(maxX) - cx) + 2.0f;
            float halfH = std::max(cy - float(minY), float(maxY) - cy) + 2.0f;
            cMinX = std::clamp(int(std::floor(cx - halfW)), 0, int(width) - 1);
            cMaxX = std::clamp(int(std::ceil(cx + halfW)), 0, int(width) - 1);
            cMinY = std::clamp(int(std::floor(cy - halfH)), 0, int(height) - 1);
            cMaxY = std::clamp(int(std::ceil(cy + halfH)), 0, int(height) - 1);
        }

        int cropW = std::max(1, cMaxX - cMinX + 1);
        int cropH = std::max(1, cMaxY - cMinY + 1);
        outAspect = float(cropW) / float(cropH);

        // Downsample to at most 256x256 on CPU so VRAM & GPU bandwidth stay minimal
        const int maxDim = 256;
        int dstW = cropW;
        int dstH = cropH;
        if (cropW > maxDim || cropH > maxDim) {
            if (cropW >= cropH) {
                dstW = maxDim;
                dstH = std::max(1, int(std::round(float(maxDim) / outAspect)));
            } else {
                dstH = maxDim;
                dstW = std::max(1, int(std::round(float(maxDim) * outAspect)));
            }
        }

        std::vector<uint8_t> finalPixels(size_t(dstW) * size_t(dstH) * 4);
        for (int dy = 0; dy < dstH; ++dy) {
            float sy0 = float(cMinY) + (float(dy) / float(dstH)) * float(cropH);
            float sy1 = float(cMinY) + (float(dy + 1) / float(dstH)) * float(cropH);
            int iy0 = std::clamp(int(sy0), cMinY, cMaxY);
            int iy1 = std::clamp(int(std::ceil(sy1)) - 1, iy0, cMaxY);

            for (int dx = 0; dx < dstW; ++dx) {
                float sx0 = float(cMinX) + (float(dx) / float(dstW)) * float(cropW);
                float sx1 = float(cMinX) + (float(dx + 1) / float(dstW)) * float(cropW);
                int ix0 = std::clamp(int(sx0), cMinX, cMaxX);
                int ix1 = std::clamp(int(std::ceil(sx1)) - 1, ix0, cMaxX);

                uint32_t sumR = 0, sumG = 0, sumB = 0, sumA = 0, count = 0;
                for (int sy = iy0; sy <= iy1; ++sy) {
                    const uint8_t* srow = rawPixels.data() + size_t(sy) * size_t(width) * 4;
                    for (int sx = ix0; sx <= ix1; ++sx) {
                        uint8_t a = srow[sx * 4 + 3];
                        sumR += uint32_t(srow[sx * 4 + 0]) * uint32_t(a);
                        sumG += uint32_t(srow[sx * 4 + 1]) * uint32_t(a);
                        sumB += uint32_t(srow[sx * 4 + 2]) * uint32_t(a);
                        sumA += uint32_t(a);
                        ++count;
                    }
                }
                uint8_t* dst = finalPixels.data() + (size_t(dy) * size_t(dstW) + size_t(dx)) * 4;
                if (sumA > 0 && count > 0) {
                    dst[0] = uint8_t(std::min<uint32_t>(255, sumR / sumA));
                    dst[1] = uint8_t(std::min<uint32_t>(255, sumG / sumA));
                    dst[2] = uint8_t(std::min<uint32_t>(255, sumB / sumA));
                    dst[3] = uint8_t(std::min<uint32_t>(255, sumA / count));
                } else {
                    dst[0] = dst[1] = dst[2] = dst[3] = 0;
                }
            }
        }

        GLint prevTex = 0;
        glGetIntegerv(GL_TEXTURE_BINDING_2D, &prevTex);
        glGenTextures(1, &outTex);
        glBindTexture(GL_TEXTURE_2D, outTex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, dstW, dstH, 0, GL_RGBA, GL_UNSIGNED_BYTE, finalPixels.data());
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glBindTexture(GL_TEXTURE_2D, prevTex);
        return true;
    }

    const CustomSkinTex* GetOrLoadSkinFile(const std::string& filePath) {
        if (filePath.empty()) return nullptr;
        auto it = m_skinTexCache.find(filePath);
        if (it != m_skinTexCache.end()) {
            return &it->second;
        }

        CustomSkinTex loaded;
        loaded.path = filePath;
        if (LoadRawPngTexture(filePath, loaded.tex, loaded.aspect)) {
            // Check for optional companion *_pressed.png in the same folder
            std::filesystem::path p(filePath);
            std::string stem = p.stem().string();
            std::string ext = p.extension().string();
            if (stem.find("_pressed") == std::string::npos) {
                std::filesystem::path cand1 = p.parent_path() / (stem + "_pressed" + ext);
                std::filesystem::path cand2 = p.parent_path() / (stem + "_pressed_one" + ext);
                std::error_code ec;
                float dummyAspect = 1.0f;
                if (std::filesystem::exists(cand1, ec)) {
                    LoadRawPngTexture(cand1.string(), loaded.pressedTex, dummyAspect);
                } else if (std::filesystem::exists(cand2, ec)) {
                    LoadRawPngTexture(cand2.string(), loaded.pressedTex, dummyAspect);
                }
            }
        }
        auto res = m_skinTexCache.emplace(filePath, loaded);
        return &res.first->second;
    }

    const CustomSkinTex* GetSkinTex(const std::string& slotId) {
        const auto& activeMap = m_skinEditMode ? m_pendingSkins : m_activeSkins;
        auto it = activeMap.find(slotId);
        if (it == activeMap.end() || it->second.empty()) return nullptr;
        return GetOrLoadSkinFile(it->second);
    }

    // State Variables
    bool m_initialized = false;
    bool m_enabled = false;
    int m_width = 0;
    int m_height = 0;
    float m_unit = 0.0f;

    // Fixed Left Stick
    Vec2 m_normLeftStickPos{ 0.12f, 0.76f };
    float m_leftStickScale = 1.0f;
    Vec2 m_leftStickCenter{ 0, 0 };
    Vec2 m_leftStickPos{ 0, 0 };
    float m_leftStickRadius = 0.0f;
    float m_leftStickKnobRadius = 0.0f;
    int m_leftFingerId = -1;
    int16_t m_leftX = 0;
    int16_t m_leftY = 0;

    // Yakumo-style Free Swipe Camera (Direct touch gesture without joystick limits)
    bool m_cameraTouchActive = false;
    int m_cameraFingerId = -1;
    int m_pointerFingerId = -1;
    Vec2 m_cameraLastPos{ 0, 0 };
    int m_cameraSensitivityIndex = 1; // 0: 0.5x, 1: 1.0x (default), 2: 1.5x, 3: 2.0x
    float m_cameraSensitivity = 1.0f;
    std::atomic<float> m_cameraDeltaX{ 0.0f };
    std::atomic<float> m_cameraDeltaY{ 0.0f };
    std::atomic<uint32_t> m_latchedMask{ 0 };

    // Buttons
    std::vector<ConfigurableButton> m_buttons;
    Vec2 m_gearPos{ 0, 0 };
    float m_gearRadius = 0.0f;

    // Settings Menu & Options State
    bool m_menuOpen = false;
    bool m_restarting = false;
    int m_menuTab = 0;
    int m_resolutionIndex = 0; // 0: Wii Original (1x)
    int m_aspectIndex = 0;     // 16:9 Panorámica (default)
    bool m_fullscreen = false;
    bool m_vsync = true;
    int m_fpsLimit = 60;
    bool m_showFpsHud = true;
    bool m_skipEfbCpu = true;
    bool m_asyncShaders = true;
    int m_bloomLevel = 2; // 0: Desactivado, 1: Suave, 2: Original (Wii), 3: Intenso
    bool m_touchVisible = true;
    bool m_damageNumbersEnabled = true;
    std::vector<DamagePopup> m_damagePopups;
    std::mutex m_damageMutex;
    float m_buttonOpacity = 1.0f;
    int m_gearAutoHideSec = 0;
    std::atomic<int64_t> m_lastTouchMs{0};
    int m_menuLang = 0;        // 0: Español (default), 1: English
    int m_langChoice = 0;      // 0: Español
    bool m_langSubmenuOpen = false;
    int m_langSubmenuCursor = 0;
    int m_titleCursorIdx = -1;
    bool m_langBtnHovered = false;
    double m_liveFps = 60.0;
    std::string m_saveStatusMsg = "Listo para exportar o importar partidas guardadas.";
    int m_onlineMode = 3;
    std::string m_onlineHostIp = "mh3sp.com";
    uint16_t m_onlineHostPort = 18080;
    std::string m_onlineStatusMsg = "Servidor oficial de la comunidad mh3sp.com activado.";
    bool m_ipEditModalOpen = false;
    int m_ipEditField = 0; // 0: IP, 1: Port
    std::string m_ipInputBuffer = "192.168.1.";
    std::string m_portInputBuffer = "18080";

    // Macros & Edit Mode
    bool m_macro1Enabled = true;
    bool m_macro2Enabled = false;
    bool m_macro3Enabled = false;
    bool m_macro4Enabled = false;
    bool m_editMode = false;
    int m_selectedButtonIndex = -1;
    bool m_editDragging = false;
    int m_editFingerId = -1;

    // Custom Button Skins (.PNG) & File Browser State
    bool m_skinEditMode = false;
    bool m_pngPickerOpen = false;
    std::string m_selectedSkinSlot;
    std::string m_currentBrowseDir;
    std::string m_skinBannerMsg;
    std::unordered_map<std::string, std::string> m_activeSkins;
    std::unordered_map<std::string, std::string> m_pendingSkins;
    std::unordered_map<std::string, CustomSkinTex> m_skinTexCache;
    std::vector<PngBrowserEntry> m_pngBrowserEntries;

    // Gamepad Custom Mapping Modal State
    bool m_gamepadMappingOpen = false;
    int m_listeningAction = -1;
    float m_gamepadMapScrollY = 0.0f;
    float m_gamepadMapMaxScrollY = 0.0f;

    // Scroll & Hit-Test State
    std::vector<HitZone> m_hitZones;
    float m_activeClipX = 0.0f;
    float m_activeClipY = 0.0f;
    float m_activeClipW = 0.0f;
    float m_activeClipH = 0.0f;
    float m_scrollAreaX = 0.0f;
    float m_scrollAreaY = 0.0f;
    float m_scrollAreaW = 0.0f;
    float m_scrollAreaH = 0.0f;
    float m_menuScrollY = 0.0f;
    float m_menuMaxScrollY = 0.0f;
    float m_pngPickerScrollY = 0.0f;
    float m_pngPickerMaxScrollY = 0.0f;
    int m_uiPointerId = -1;
    float m_uiDownX = 0.0f;
    float m_uiDownY = 0.0f;
    float m_uiLastY = 0.0f;
    bool m_uiDraggingScroll = false;

    // GL Resources
    GLuint m_shaderProgram = 0;
    GLint m_uScreenSize = -1;
    GLint m_uFontTex = -1;
    GLuint m_vao = 0;
    GLuint m_vbo = 0;
    GLuint m_fontTex = 0;

    std::vector<UIVertex> m_verts;
};

TouchSettingsEngine g_touchSettingsEngine;

bool SDLCALL TouchSettingsEventWatcher(void* userdata, SDL_Event* event) {
    (void)userdata;
    TouchControls_HandleSdlEvent(event);
    return true;
}

} // namespace

extern "C" {

void TouchControls_Init(void) {
    SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
    SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
    g_touchSettingsEngine.Init();
    static bool watcherAdded = false;
    if (!watcherAdded) {
        SDL_AddEventWatch(TouchSettingsEventWatcher, nullptr);
        watcherAdded = true;
    }
}

void TouchControls_SetEnabled(bool enabled) {
    g_touchSettingsEngine.SetEnabled(enabled);
}

bool TouchControls_IsEnabled(void) {
    return g_touchSettingsEngine.IsEnabled();
}

void TouchControls_HandleSdlEvent(const void* sdlEvent) {
    if (!sdlEvent) return;

    if (AndroidKeyboard_HandleSdlEvent(sdlEvent)) {
        return;
    }

    const SDL_Event* event = reinterpret_cast<const SDL_Event*>(sdlEvent);

    switch (event->type) {
    case SDL_EVENT_KEY_DOWN: {
        if (g_touchSettingsEngine.IsLanguageSubmenuOpen()) {
            if (event->key.key == SDLK_UP) {
                g_touchSettingsEngine.LanguageSubmenuNav(-1);
                break;
            } else if (event->key.key == SDLK_DOWN) {
                g_touchSettingsEngine.LanguageSubmenuNav(1);
                break;
            } else if (event->key.key == SDLK_RETURN || event->key.key == SDLK_KP_ENTER || event->key.key == SDLK_SPACE) {
                g_touchSettingsEngine.LanguageSubmenuConfirm();
                break;
            } else if (event->key.key == SDLK_ESCAPE || event->key.key == SDLK_BACKSPACE) {
                g_touchSettingsEngine.CloseLanguageSubmenu();
                break;
            }
        } else if (g_touchSettingsEngine.IsTitleOptionsMenuActive()) {
            if (event->key.key == SDLK_DOWN) {
                g_touchSettingsEngine.CheckTitleOptionsKeyNav(1);
            } else if (event->key.key == SDLK_UP) {
                g_touchSettingsEngine.CheckTitleOptionsKeyNav(-1);
            } else if (event->key.key == SDLK_RETURN || event->key.key == SDLK_KP_ENTER || event->key.key == SDLK_SPACE) {
                if (g_touchSettingsEngine.IsTitleCursorOnLanguage()) {
                    g_touchSettingsEngine.OpenLanguageSubmenu();
                    break;
                }
            }
        }
        if (event->key.key == SDLK_F1) {
            g_touchSettingsEngine.ToggleMenu();
        } else if (event->key.key == SDLK_ESCAPE) {
            if (g_touchSettingsEngine.IsMenuOpen()) {
                g_touchSettingsEngine.SetMenuOpen(false);
            }
        } else if (event->key.key == SDLK_F11 ||
                   ((event->key.mod & SDL_KMOD_ALT) && (event->key.key == SDLK_RETURN || event->key.key == SDLK_KP_ENTER))) {
            g_touchSettingsEngine.ToggleFullscreen();
        }
        break;
    }
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
        if (event->button.button == SDL_BUTTON_LEFT) {
            g_touchSettingsEngine.HandleMouseDown(event->button.x, event->button.y);
        }
        break;
    case SDL_EVENT_MOUSE_BUTTON_UP:
        if (event->button.button == SDL_BUTTON_LEFT) {
            g_touchSettingsEngine.HandleMouseUp(event->button.x, event->button.y);
        }
        break;
    case SDL_EVENT_MOUSE_MOTION:
        g_touchSettingsEngine.HandleMouseMove(event->motion.x, event->motion.y);
        break;
    case SDL_EVENT_MOUSE_WHEEL:
        g_touchSettingsEngine.HandleMouseWheel(event->wheel.y);
        break;
    case SDL_EVENT_FINGER_DOWN:
        if (AndroidKeyboard_ShouldBeActive() && event->tfinger.y < 0.65f) {
            AndroidKeyboard_OnScreenTouch();
        }
        g_touchSettingsEngine.HandleTouchDown(event->tfinger.fingerID, event->tfinger.x, event->tfinger.y);
        break;
    case SDL_EVENT_FINGER_MOTION:
        g_touchSettingsEngine.HandleTouchMove(event->tfinger.fingerID, event->tfinger.x, event->tfinger.y);
        break;
    case SDL_EVENT_FINGER_UP:
    case SDL_EVENT_FINGER_CANCELED:
        g_touchSettingsEngine.HandleTouchUp(event->tfinger.fingerID);
        break;
    case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED:
    case SDL_EVENT_WINDOW_RESIZED:
        g_touchSettingsEngine.UpdateLayout(event->window.data1, event->window.data2);
        break;
    default:
        break;
    }
}

void TouchControls_UpdateSample(uint16_t* buttons, int16_t* leftX, int16_t* leftY,
                                int16_t* rightX, int16_t* rightY,
                                uint8_t* triggerL, uint8_t* triggerR) {
    AndroidKeyboard_UpdatePerFrame();
    if (AndroidKeyboard_IsImeShowing()) {
        return;
    }
    g_touchSettingsEngine.UpdateSample(buttons, leftX, leftY, rightX, rightY, triggerL, triggerR);
}

void TouchControls_RenderGL(int windowWidth, int windowHeight) {
    g_touchSettingsEngine.RenderGL(windowWidth, windowHeight);
}

bool TouchControls_IsMenuOpen(void) {
    return g_touchSettingsEngine.IsMenuOpen();
}

void TouchControls_ToggleMenu(void) {
    g_touchSettingsEngine.ToggleMenu();
}

void TouchControls_SetMenuOpen(bool open) {
    g_touchSettingsEngine.SetMenuOpen(open);
}

void TouchControls_OnMonsterDamage(uint32_t monster, int32_t damage) {
    g_touchSettingsEngine.OnMonsterDamage(monster, damage);
}

void TouchControls_SetDamageNumbersEnabled(bool enabled) {
    g_touchSettingsEngine.SetDamageNumbersEnabled(enabled);
}

bool TouchControls_IsDamageNumbersEnabled(void) {
    return g_touchSettingsEngine.IsDamageNumbersEnabled();
}

} // extern "C"
