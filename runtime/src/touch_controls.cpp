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

#include <SDL3/SDL.h>
#include <GLES3/gl3.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <chrono>
#include <atomic>
#include <cstdio>
#include <cstring>
#include <cstdlib>

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

struct UIVertex {
    float x, y;
    float u, v;          // Local offset in pixels [-halfW, halfW] for SDF, or UV for texture
    float r, g, b, a;
    float br, bg, bb, ba;
    float type;          // 0: AA disc, 1: AA ring, 2: AA rounded rect (pixel SDF), 3: Font text, 4: Plain
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

    bool IsMenuOpen() const { return m_menuOpen; }
    void ToggleMenu() { SetMenuOpen(!m_menuOpen); }
    void SetMenuOpen(bool open) {
        m_menuOpen = open;
        NoteTouchActivity();
        if (m_menuOpen) {
            SDL_ShowCursor();
            if (SDL_Window* win = aurora_get_window()) {
                SDL_SetWindowRelativeMouseMode(win, false);
            }
        } else {
            if (SDL_Window* win = aurora_get_window()) {
#if !defined(__ANDROID__)
                SDL_HideCursor();
#endif
            }
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

        // Right stick
        m_rightStickRadius = m_unit * 0.15f;
        m_rightStickKnobRadius = m_unit * 0.075f;

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

        if (m_menuOpen) {
            HandleMenuTouchDown(px, py);
            return;
        }

        // Gameplay: Check Gear button tap
        float gdx = px - m_gearPos.x;
        float gdy = py - m_gearPos.y;
        if (gdx * gdx + gdy * gdy <= (m_gearRadius * 1.8f) * (m_gearRadius * 1.8f)) {
            if (gearHidden) return;
            m_menuOpen = true;
            m_menuTab = 0; // Gráficos
            return;
        }

        if (!m_touchVisible) {
            // Touch controls are hidden; ignore touches to prevent accidental inputs
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
                LOGI("Hit Button '%s' (label=%s, mask=0x%04x)!", btn.id.c_str(), btn.label, btn.mask);
                return;
            }
        }

        // Left Stick
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

        // Right Stick (Free floating camera look)
        if (px >= float(m_width) * 0.45f) {
            if (m_rightFingerId < 0) {
                m_rightFingerId = int(id);
                m_rightFloatingOrigin = { px, py };
                m_rightStickPos = { px, py };
                m_rightLastPos = { px, py };
                m_rightStickActive = true;
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

        if (m_menuOpen) return;

        if (int(id) == m_leftFingerId) {
            UpdateLeftStickPosition(px, py);
            return;
        }

        if (int(id) == m_rightFingerId && m_rightStickActive) {
            float dx = px - m_rightLastPos.x;
            float dy = py - m_rightLastPos.y;
            m_rightLastPos = { px, py };

            m_cameraDeltaX += dx;
            m_cameraDeltaY += dy;

            float relX = px - m_rightFloatingOrigin.x;
            float relY = py - m_rightFloatingOrigin.y;
            float dist = std::sqrt(relX * relX + relY * relY);
            if (dist > m_rightStickRadius) {
                m_rightStickPos.x = m_rightFloatingOrigin.x + (relX / dist) * m_rightStickRadius;
                m_rightStickPos.y = m_rightFloatingOrigin.y + (relY / dist) * m_rightStickRadius;
            } else {
                m_rightStickPos = { px, py };
            }

            float nx = std::clamp(relX / m_rightStickRadius, -1.0f, 1.0f);
            float ny = std::clamp(relY / m_rightStickRadius, -1.0f, 1.0f);
            mh3_classic_stick(nx, -ny, &mh3_gamepad_stick_curve, &m_rightX, &m_rightY);
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

        if (m_menuOpen) return;

        for (auto& btn : m_buttons) {
            if (btn.fingerId == int(id)) {
                btn.isPressed = false;
                btn.fingerId = -1;
            }
        }

        if (int(id) == m_leftFingerId) {
            m_leftFingerId = -1;
            m_leftStickPos = m_leftStickCenter;
            m_leftX = 0;
            m_leftY = 0;
        }

        if (int(id) == m_rightFingerId) {
            m_rightFingerId = -1;
            m_rightStickActive = false;
            m_rightX = 0;
            m_rightY = 0;
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
        if (m_menuOpen) {
            HandleMenuTouchDown(px, py);
            return;
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

    void UpdateSample(uint16_t* buttons, int16_t* leftX, int16_t* leftY,
                      int16_t* rightX, int16_t* rightY,
                      uint8_t* triggerL, uint8_t* triggerR) {
        if (!m_enabled || m_menuOpen || m_editMode) return;

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

        if (m_rightStickActive) {
            if (m_rightX != 0 || m_rightY != 0) {
                *rightX = m_rightX;
                *rightY = m_rightY;
            }
        }

        if (*buttons & MH3_CL_L)  *triggerL = 255;
        if (*buttons & MH3_CL_ZL) *triggerL = 255;
        if (*buttons & MH3_CL_R)  *triggerR = 255;
        if (*buttons & MH3_CL_ZR) *triggerR = 255;

        float camX = m_cameraDeltaX.exchange(0.0f);
        float camY = m_cameraDeltaY.exchange(0.0f);
        if (std::abs(camX) > 0.01f || std::abs(camY) > 0.01f) {
            QueueTouchCameraDelta(camX, camY);
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

        // Enforce guest camera aspect ratio matches user setting
#if defined(__cpp_exceptions)
        try {
#endif
            if (Memory::Contains(0x8065B4C8, 4)) {
                float curAspect = Memory::ReadFloat32(0x8065B4C8);
                float desiredAspect = GetTargetAspect(m_aspectIndex);
                if (std::abs(curAspect - desiredAspect) > 0.005f) {
                    ApplyGuestAspect(m_aspectIndex);
                }
            }
#if defined(__cpp_exceptions)
        } catch (...) {}
#endif

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
        GLint lastTex = 0; glGetIntegerv(GL_TEXTURE_BINDING_2D, &lastTex);

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

        if (m_editMode) {
            RenderEditMode();
        } else if (m_menuOpen) {
            RenderSettingsMenu();
        } else if (AndroidKeyboard_IsImeShowing()) {
            RenderFpsHud();
        } else {
            if (m_touchVisible) {
                RenderGameplayOverlay();
            } else {
                // Controls hidden: render subtle floating gear icon to allow reopening settings
                float gAlpha = GearAlpha();
                if (gAlpha > 0.001f) {
                    DrawAADisc(m_gearPos.x, m_gearPos.y, m_gearRadius,
                               { 0.08f, 0.40f, 0.48f, 0.35f * gAlpha }, { 0.25f, 0.90f, 0.95f, 0.55f * gAlpha }, 0.10f);
                    DrawButtonLabel(m_gearPos.x, m_gearPos.y, "⚙", m_gearRadius * 1.05f, { 1.0f, 1.0f, 1.0f, 0.65f * gAlpha });
                }

                RenderFpsHud();
            }
        }

        if (!m_verts.empty()) {
            glBufferData(GL_ARRAY_BUFFER, m_verts.size() * sizeof(UIVertex), m_verts.data(), GL_STREAM_DRAW);
            glDrawArrays(GL_TRIANGLES, 0, GLsizei(m_verts.size()));
        }

        // Restore OpenGL State
        glViewport(lastViewport[0], lastViewport[1], lastViewport[2], lastViewport[3]);
        if (scissorEnabled) { glEnable(GL_SCISSOR_TEST); glScissor(lastScissor[0], lastScissor[1], lastScissor[2], lastScissor[3]); }
        if (!blendEnabled) glDisable(GL_BLEND);
        if (depthEnabled) glEnable(GL_DEPTH_TEST);
        if (cullEnabled) glEnable(GL_CULL_FACE);
        glUseProgram(lastProgram);
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
            "    } else {\n" // 4: Plain
            "        FragColor = vColor;\n"
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

    void DrawQuadTextured(float x, float y, float w, float h, float u0, float v0, float u1, float v1, Color col) {
        m_verts.push_back({ x,     y,     u0, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y,     u1, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, u0, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });

        m_verts.push_back({ x + w, y,     u1, v0, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x + w, y + h, u1, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
        m_verts.push_back({ x,     y + h, u0, v1, col.r, col.g, col.b, col.a, 0, 0, 0, 0, 3.0f, 0, 0, 0 });
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
                float gy = y + g->offY * scale + shadowOffset;
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
                float gy = y + g->offY * scale;
                float gw = g->w * scale;
                float gh = g->h * scale;
                DrawQuadTextured(gx, gy, gw, gh, g->u0, g->v0, g->u1, g->v1, col);
            }
            curX += (g ? g->advance : (BASE_FONT_SIZE * 0.5f)) * scale;
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
        DrawText(pillX + pillW * 0.5f, pillY + pillH * 0.20f, hudStr, pillH * 0.52f, COL_CYAN, true);
    }

    void RenderGameplayOverlay() {
        float op = std::clamp(m_buttonOpacity, 0.10f, 1.0f);

        // 1. Fixed Left Stick
        DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, 3.5f, { 0.30f, 0.70f, 0.88f, 0.55f * op });
        DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius * 0.50f, 1.5f, { 0.20f, 0.50f, 0.70f, 0.25f * op });

        float dotR = 3.0f;
        Color dotCol = { 0.45f, 0.85f, 1.00f, 0.70f * op };
        DrawAADisc(m_leftStickCenter.x, m_leftStickCenter.y - m_leftStickRadius, dotR, dotCol, dotCol);
        DrawAADisc(m_leftStickCenter.x, m_leftStickCenter.y + m_leftStickRadius, dotR, dotCol, dotCol);
        DrawAADisc(m_leftStickCenter.x - m_leftStickRadius, m_leftStickCenter.y, dotR, dotCol, dotCol);
        DrawAADisc(m_leftStickCenter.x + m_leftStickRadius, m_leftStickCenter.y, dotR, dotCol, dotCol);

        bool leftHeld = (m_leftFingerId >= 0);
        DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius,
                   leftHeld ? Color{ 0.15f, 0.50f, 0.70f, 0.90f * op } : Color{ 0.10f, 0.32f, 0.45f, 0.80f * op },
                   leftHeld ? Color{ 1.0f, 1.0f, 1.0f, 0.98f * op } : Color{ 0.50f, 0.88f, 1.00f, 0.95f * op }, 0.12f);
        DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius * 0.35f,
                   { 0.05f, 0.18f, 0.28f, 0.90f * op }, { 0.35f, 0.75f, 0.95f, 0.85f * op }, 0.20f);

        // 2. Free Right Stick (Camera Look)
        if (m_rightStickActive) {
            DrawAARing(m_rightFloatingOrigin.x, m_rightFloatingOrigin.y, m_rightStickRadius, 2.5f, { 0.25f, 0.65f, 0.85f, 0.35f * op });
            DrawAADisc(m_rightStickPos.x, m_rightStickPos.y, m_rightStickKnobRadius * 0.75f,
                       { 0.15f, 0.45f, 0.60f, 0.45f * op }, { 0.40f, 0.80f, 1.00f, 0.70f * op }, 0.10f);
        }

        // 3. Gameplay Buttons (ABXY, Shoulders, D-pad, Menu, Macros)
        for (const auto& btn : m_buttons) {
            if (!IsButtonActive(btn)) continue;
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

        // 4. Gear / Menu Button
        float gAlpha = GearAlpha();
        if (gAlpha > 0.001f) {
            DrawAADisc(m_gearPos.x, m_gearPos.y, m_gearRadius,
                       { 0.08f, 0.40f, 0.48f, 0.75f * op * gAlpha }, { 0.25f, 0.90f, 0.95f, 0.95f * op * gAlpha }, 0.10f);
            Color gearText = COL_WHITE;
            gearText.a *= op * gAlpha;
            DrawButtonLabel(m_gearPos.x, m_gearPos.y, "⚙", m_gearRadius * 1.05f, gearText);
        }

        // 5. FPS HUD Pill (if enabled)
        RenderFpsHud();
    }

    inline const char* Tr(const char* es, const char* en) const {
        return (m_menuLang == 1) ? en : es;
    }

    void RenderSettingsMenu() {
        // Semi-transparent Scrim
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.72f });

        // Container Window (Laguna de Moga dark ocean aesthetic)
        float padX = float(m_width) * 0.05f;
        float padY = float(m_height) * 0.04f;
        float panW = float(m_width) - padX * 2.0f;
        float panH = float(m_height) - padY * 2.0f;

        DrawRoundedRect(padX, padY, panW, panH, 16.0f, COL_BG_DARK, COL_PANEL_BORDER);

        // Soft Wavy Lines motif in background
        for (int w = 0; w < 3; ++w) {
            float waveBaseY = padY + panH * (0.16f + float(w) * 0.14f);
            Color waveCol = { 0.06f, 0.22f, 0.29f, 0.40f };
            float step = 16.0f;
            for (float x = padX + 8.0f; x < padX + panW - 8.0f; x += step) {
                float y1 = waveBaseY + std::sin((x + float(w) * 55.0f) * 0.022f) * 6.5f;
                DrawRectSolid(x, y1, step, 1.5f, waveCol);
            }
        }

        // Header Title & Subtitle (Larger readable fonts)
        const char* titles_es[] = { "Gráficos", "Sistema", "Guardados", "Controles", "Online" };
        const char* titles_en[] = { "Graphics", "System", "Saves", "Controls", "Online" };
        const char* const* titles = (m_menuLang == 1) ? titles_en : titles_es;

        const char* subtitles_es[] = {
            "Pantalla, resolución y presentación",
            "Idioma del menú, juego y reinicio",
            "Gestor de partidas Dolphin / Wii NAND",
            "Visibilidad en pantalla, mando gamepad y macros",
            "Multijugador local, ZeroTier y servidores comunitarios"
        };
        const char* subtitles_en[] = {
            "Display, resolution and presentation",
            "Menu language, game language and restart",
            "Dolphin / Wii NAND save file manager",
            "On-screen controls, gamepad and macros",
            "Multiplayer, ZeroTier and community servers"
        };
        const char* const* subtitles = (m_menuLang == 1) ? subtitles_en : subtitles_es;
        DrawText(padX + 24.0f, padY + 16.0f, titles[m_menuTab], 28.0f, COL_WHITE);
        DrawText(padX + 24.0f, padY + 48.0f, subtitles[m_menuTab], 14.5f, COL_MUTED);

        // Header Right: FPS Badge & Close Button
        char fpsStr[32];
        std::snprintf(fpsStr, sizeof(fpsStr), "FPS  %u", unsigned(m_liveFps + 0.5));
        float fpsW = 115.0f, fpsH = 38.0f;
        float fpsX = padX + panW - 185.0f;
        float fpsY = padY + 18.0f;
        DrawRoundedRect(fpsX, fpsY, fpsW, fpsH, fpsH * 0.5f, { 0.035f, 0.125f, 0.176f, 0.95f }, COL_CYAN);
        DrawText(fpsX + fpsW * 0.5f, fpsY + 10.0f, fpsStr, 15.0f, COL_CYAN, true);

        // Close Button [✕]
        float closeX = padX + panW - 56.0f;
        float closeY = padY + 18.0f;
        float closeS = 38.0f;
        DrawRoundedRect(closeX, closeY, closeS, closeS, 8.0f, { 0.05f, 0.18f, 0.24f, 0.95f }, COL_PANEL_BORDER);
        DrawText(closeX + closeS * 0.5f, closeY + 8.0f, "✕", 20.0f, COL_WHITE, true);

        // Horizontal divider line
        DrawRectSolid(padX + 20.0f, padY + 76.0f, panW - 40.0f, 1.0f, COL_PANEL_BORDER);

        // Tab Navigation Bar
        float tabY = padY + 86.0f;
        float tabW = (panW - 40.0f - 40.0f) / 5.0f;
        float tabH = 44.0f;
        for (int i = 0; i < 5; ++i) {
            float tx = padX + 20.0f + float(i) * (tabW + 10.0f);
            bool active = (m_menuTab == i);
            DrawRoundedRect(tx, tabY, tabW, tabH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(tx + tabW * 0.5f, tabY + 12.0f, titles[i], 16.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Tab Content
        float contentY = tabY + tabH + 16.0f;
        float contentW = panW - 40.0f;

        if (m_menuTab == 0) RenderTabGraphics(padX + 20.0f, contentY, contentW);
        else if (m_menuTab == 1) RenderTabSystem(padX + 20.0f, contentY, contentW);
        else if (m_menuTab == 2) RenderTabSaves(padX + 20.0f, contentY, contentW);
        else if (m_menuTab == 3) RenderTabControls(padX + 20.0f, contentY, contentW);
        else if (m_menuTab == 4) RenderTabOnline(padX + 20.0f, contentY, contentW);
    }

    void RenderTabGraphics(float x, float y, float w) {
        // Card 1: Internal Resolution
        float c1H = 96.0f;
        DrawRoundedRect(x, y, w, c1H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, y + 14.0f, Tr("Resolución interna", "Internal Resolution"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, y + 33.0f, Tr("Wii Original (1x por defecto) | Mayor resolución = mayor nitidez y detalle gráfico",
                                         "Original Wii (1x default) | Higher resolution = crisper image & visual detail"), 12.5f, COL_MUTED);

        const char* resLabels_es[] = { "Wii Original", "720p", "1080p", "1440p", "4K (2160p)", "Nativa" };
        const char* resLabels_en[] = { "Original Wii", "720p", "1080p", "1440p", "4K (2160p)", "Native" };
        const char* const* resLabels = (m_menuLang == 1) ? resLabels_en : resLabels_es;
        float chipW = (w - 36.0f - 25.0f) / 6.0f;
        float chipH = 38.0f;
        float chipY = y + 46.0f;
        for (int i = 0; i < 6; ++i) {
            float cx = x + 18.0f + float(i) * (chipW + 5.0f);
            bool active = (m_resolutionIndex == i);
            DrawRoundedRect(cx, chipY, chipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(cx + chipW * 0.5f, chipY + 11.0f, resLabels[i], 13.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Card 2: Relación de aspecto
        float c2Y = y + c1H + 10.0f;
        float c2H = 96.0f;
        DrawRoundedRect(x, c2Y, w, c2H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);

        DrawText(x + 18.0f, c2Y + 14.0f, Tr("Relación de aspecto", "Aspect Ratio"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c2Y + 33.0f, Tr("Panorámica 16:9, Pantalla Completa adaptable o 4:3 Clásica",
                                            "16:9 Widescreen, Adaptive Full Screen or 4:3 Classic"), 12.0f, COL_MUTED);

        const char* aspectLabels_es[] = { "16:9 Panorámica", "Pantalla Completa", "4:3 Clásica" };
        const char* aspectLabels_en[] = { "16:9 Widescreen", "Full Screen", "4:3 Classic" };
        const char* const* aspectLabels = (m_menuLang == 1) ? aspectLabels_en : aspectLabels_es;
        float aChipW = (w - 36.0f - 20.0f) / 3.0f;
        float aChipY = c2Y + 46.0f;
        for (int i = 0; i < 3; ++i) {
            float ax = x + 18.0f + float(i) * (aChipW + 10.0f);
            bool active = (m_aspectIndex == i);
            DrawRoundedRect(ax, aChipY, aChipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(ax + aChipW * 0.5f, aChipY + 11.0f, aspectLabels[i], 12.0f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Card 3: Límite de fotogramas (FPS: 30, 60, 90, 120) & V-Sync / HUD
        float c3Y = c2Y + c2H + 10.0f;
        float c3H = 98.0f;
        DrawRoundedRect(x, c3Y, w, c3H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);

        float fpsColW = (w - 36.0f - 16.0f) * 0.52f;
        DrawText(x + 18.0f, c3Y + 14.0f, Tr("Límite de fotogramas (FPS)", "Framerate Limit (FPS)"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c3Y + 33.0f, Tr("30, 60, 90 o 120 FPS (Ajusta la tasa a tu gusto)",
                                            "30, 60, 90 or 120 FPS (Select target framerate)"), 12.0f, COL_MUTED);

        const char* fpsLabels[] = { "30 FPS", "60 FPS", "90 FPS", "120 FPS" };
        const int fpsValues[] = { 30, 60, 90, 120 };
        float fChipW = (fpsColW - 15.0f) / 4.0f;
        float fChipY = c3Y + 48.0f;
        for (int i = 0; i < 4; ++i) {
            float fx = x + 18.0f + float(i) * (fChipW + 5.0f);
            bool active = (m_fpsLimit == fpsValues[i]);
            DrawRoundedRect(fx, fChipY, fChipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(fx + fChipW * 0.5f, fChipY + 11.0f, fpsLabels[i], 13.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Right side: Sincronización y HUD
        float syncColX = x + 18.0f + fpsColW + 16.0f;
        float syncColW = (w - 36.0f - 16.0f) * 0.50f;
        DrawText(syncColX, c3Y + 14.0f, Tr("Sincronización y HUD", "Sync & HUD"), 18.0f, COL_WHITE);
        DrawText(syncColX, c3Y + 33.0f, Tr("V-Sync anti-tearing y monitor FPS en pantalla", "Anti-tearing V-Sync & on-screen FPS HUD"), 12.0f, COL_MUTED);

        float sChipW = (syncColW - 10.0f) * 0.5f;
        // VSync chip
        DrawRoundedRect(syncColX, fChipY, sChipW, chipH, 8.0f,
                        m_vsync ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_vsync ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(syncColX + sChipW * 0.5f, fChipY + 11.0f, m_vsync ? "V-Sync: ON" : "V-Sync: OFF", 13.5f,
                 m_vsync ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // HUD FPS chip
        float hudX = syncColX + sChipW + 10.0f;
        DrawRoundedRect(hudX, fChipY, sChipW, chipH, 8.0f,
                        m_showFpsHud ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_showFpsHud ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(hudX + sChipW * 0.5f, fChipY + 11.0f,
                 m_showFpsHud ? Tr("HUD: VISIBLE", "HUD: VISIBLE") : Tr("HUD: OCULTO", "HUD: HIDDEN"), 13.5f,
                 m_showFpsHud ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Card 4: Reemplazo de Texturas HD (Dolphin Texture Pack)
        float c4Y = c3Y + c3H + 10.0f;
        float c4H = 96.0f;
        DrawRoundedRect(x, c4Y, w, c4H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);

        bool texEnabled = aurora::gfx::texture_replacement::is_enabled();
        size_t texCount = aurora::gfx::texture_replacement::get_replacement_count();
        char texSub[140];
        std::snprintf(texSub, sizeof(texSub),
                      (m_menuLang == 1) ? "Loaded textures: %zu | Folder: /storage/emulated/0/MH3/textures/ (RMHE08 or RMHP08)"
                                        : "Texturas cargadas: %zu | Carpeta: /storage/emulated/0/MH3/textures/ (RMHE08 o RMHP08)",
                      texCount);

        DrawText(x + 18.0f, c4Y + 14.0f, Tr("Texturas HD personalizadas (Pack Dolphin)", "Custom HD Textures (Dolphin Pack)"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c4Y + 33.0f, texSub, 12.5f, (texCount > 0) ? COL_CYAN : COL_MUTED);

        float tBtnW = (w - 36.0f - 15.0f) * 0.50f;
        float tBtnY = c4Y + 46.0f;

        // Toggle button
        DrawRoundedRect(x + 18.0f, tBtnY, tBtnW, chipH, 8.0f,
                        texEnabled ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        texEnabled ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(x + 18.0f + tBtnW * 0.5f, tBtnY + 11.0f,
                 texEnabled ? Tr("Texturas HD: ACTIVADAS", "HD Textures: ENABLED") : Tr("Texturas HD: DESACTIVADAS", "HD Textures: DISABLED"), 14.0f,
                 texEnabled ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Reload button
        float reloadX = x + 18.0f + tBtnW + 15.0f;
        DrawRoundedRect(reloadX, tBtnY, tBtnW, chipH, 8.0f,
                        { 0.12f, 0.35f, 0.45f, 0.90f }, { 0.25f, 0.75f, 0.95f, 1.0f });
        DrawText(reloadX + tBtnW * 0.5f, tBtnY + 11.0f, Tr("🔄 Recargar texturas", "🔄 Reload Textures"), 14.0f, COL_WHITE, true);

        // Card 5: Iluminación y Bloom (Resplandor solar)
        float c5Y = c4Y + c4H + 10.0f;
        float c5H = 96.0f;
        DrawRoundedRect(x, c5Y, w, c5H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);

        DrawText(x + 18.0f, c5Y + 14.0f, Tr("Iluminación y Bloom (Resplandor solar)", "Lighting & Bloom (Sunlight Glare)"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c5Y + 33.0f, Tr("Intensidad del resplandor de luz y sol estilo consola Wii (Dolphin)",
                                            "Wii-style sunlight glow and atmospheric bloom intensity (Dolphin)"), 12.0f, COL_MUTED);

        const char* bloomLabels_es[] = { "Desactivado", "Suave", "Original (Wii)", "Intenso" };
        const char* bloomLabels_en[] = { "Disabled", "Soft", "Original (Wii)", "Intense" };
        const char* const* bloomLabels = (m_menuLang == 1) ? bloomLabels_en : bloomLabels_es;
        float bChipW = (w - 36.0f - 30.0f) / 4.0f;
        float bChipY = c5Y + 46.0f;
        for (int i = 0; i < 4; ++i) {
            float bx = x + 18.0f + float(i) * (bChipW + 10.0f);
            bool active = (m_bloomLevel == i);
            DrawRoundedRect(bx, bChipY, bChipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(bx + bChipW * 0.5f, bChipY + 11.0f, bloomLabels[i], 13.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }
    }

    void RenderTabSystem(float x, float y, float w) {
        // Card 1: Menu Language
        float c1H = 96.0f;
        DrawRoundedRect(x, y, w, c1H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, y + 14.0f, Tr("Idioma del menú", "Menu Language"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, y + 33.0f, Tr("Idioma de la interfaz y opciones de la app (cambio inmediato).",
                                         "In-app overlay and settings menu language (applies immediately)."), 12.5f, COL_MUTED);

        const char* menuLangLabels[] = { "Español", "English" };
        float menuChipW = (w - 36.0f - 15.0f) / 2.0f;
        float chipH = 38.0f;
        float menuChipY = y + 46.0f;
        for (int i = 0; i < 2; ++i) {
            float mx = x + 18.0f + float(i) * (menuChipW + 15.0f);
            bool active = (m_menuLang == i);
            DrawRoundedRect(mx, menuChipY, menuChipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(mx + menuChipW * 0.5f, menuChipY + 11.0f, menuLangLabels[i], 14.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Card 2: Game ROM Language
        float c2Y = y + c1H + 10.0f;
        float c2H = 120.0f;
        DrawRoundedRect(x, c2Y, w, c2H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, c2Y + 14.0f, Tr("Idioma del juego (ROM)", "Game Language (ROM)"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c2Y + 33.0f, Tr("Texto y menús del disco europeo. Requiere reiniciar para aplicar cambios.",
                                            "In-game text and dialogues from European ROM. Requires restart to apply."), 12.5f, COL_MUTED);

        const char* langLabels[] = { "Español", "English", "Français", "Deutsch", "Italiano" };
        float chipW = (w - 36.0f - 20.0f) / 5.0f;
        float chipY2 = c2Y + 52.0f;
        for (int i = 0; i < 5; ++i) {
            float lx = x + 18.0f + float(i) * (chipW + 5.0f);
            bool active = (m_langChoice == i);
            DrawRoundedRect(lx, chipY2, chipW, chipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(lx + chipW * 0.5f, chipY2 + 11.0f, langLabels[i], 14.0f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Active Language status text
        float statusY = c2Y + c2H + 8.0f;
        std::string statStr = std::string(Tr("Idioma del juego seleccionado: ", "Selected game language: ")) + langLabels[std::clamp(m_langChoice, 0, 4)];
        DrawText(x + 18.0f, statusY, statStr.c_str(), 13.5f, COL_MUTED);

        // Card 3: Restart Action Card
        float c3Y = statusY + 24.0f;
        float c3H = 84.0f;
        DrawRoundedRect(x, c3Y, w, c3H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, c3Y + 16.0f, Tr("Reiniciar el juego", "Restart Game"), 18.0f, COL_WHITE);
        DrawText(x + 18.0f, c3Y + 40.0f, Tr("Aplica cambios de idioma del juego y ajustes pendientes de inmediato.",
                                            "Applies game language changes and pending settings immediately."), 12.5f, COL_MUTED);

        float rBtnW = 200.0f;
        float rBtnX = x + w - rBtnW - 18.0f;
        float rBtnY = c3Y + 20.0f;
        DrawRoundedRect(rBtnX, rBtnY, rBtnW, 44.0f, 8.0f, { 0.15f, 0.50f, 0.65f, 0.95f }, COL_CYAN);
        DrawText(rBtnX + rBtnW * 0.5f, rBtnY + 13.0f,
                 m_restarting ? Tr("Reiniciando...", "Restarting...") : Tr("Reiniciar Ahora", "Restart Now"),
                 16.0f, COL_WHITE, true);
    }

    void RenderTabSaves(float x, float y, float w) {
        float c1H = 224.0f;
        DrawRoundedRect(x, y, w, c1H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, y + 14.0f, Tr("Gestor de Guardados (Dolphin / Wii NAND)", "Save File Manager (Dolphin / Wii NAND)"), 19.0f, COL_WHITE);
        DrawText(x + 18.0f, y + 38.0f, Tr("Ubicación: /storage/emulated/0/MH3/nand/title/00010000/524d4850/data/nocopy",
                                         "Location: /storage/emulated/0/MH3/nand/title/00010000/524d4850/data/nocopy"), 13.5f, COL_MUTED);

        // Action Buttons
        float btnW = (w - 36.0f - 20.0f) / 3.0f;
        float btnH = 50.0f;
        float btnY = y + 70.0f;

        // 1. Export
        float b1X = x + 18.0f;
        DrawRoundedRect(b1X, btnY, btnW, btnH, 8.0f, { 0.08f, 0.35f, 0.45f, 0.95f }, COL_CYAN);
        DrawText(b1X + btnW * 0.5f, btnY + 15.0f, Tr("📁 Exportar a Descargas", "📁 Export to Downloads"), 15.0f, COL_WHITE, true);

        // 2. Import
        float b2X = b1X + btnW + 10.0f;
        DrawRoundedRect(b2X, btnY, btnW, btnH, 8.0f, { 0.12f, 0.45f, 0.35f, 0.95f }, { 0.30f, 0.85f, 0.60f, 1.0f });
        DrawText(b2X + btnW * 0.5f, btnY + 15.0f, Tr("📥 Importar de Dolphin", "📥 Import from Dolphin"), 15.0f, COL_WHITE, true);

        // 3. Quick Backup
        float b3X = b2X + btnW + 10.0f;
        DrawRoundedRect(b3X, btnY, btnW, btnH, 8.0f, { 0.35f, 0.30f, 0.15f, 0.95f }, { 0.90f, 0.75f, 0.30f, 1.0f });
        DrawText(b3X + btnW * 0.5f, btnY + 15.0f, Tr("💾 Crear Respaldo", "💾 Quick Backup"), 15.0f, COL_WHITE, true);

        // Status Banner
        float bannerY = y + 138.0f;
        float bannerH = 68.0f;
        DrawRoundedRect(x + 18.0f, bannerY, w - 36.0f, bannerH, 8.0f, { 0.02f, 0.08f, 0.12f, 0.90f }, COL_PANEL_BORDER);
        DrawText(x + 30.0f, bannerY + 12.0f, Tr("Estado:", "Status:"), 14.0f, COL_CYAN);
        DrawText(x + 30.0f, bannerY + 36.0f, m_saveStatusMsg.c_str(), 14.0f, COL_WHITE);
    }

    void RenderTabControls(float x, float y, float w) {
        // Card 1: Visibilidad y Opacidad de controles táctiles en pantalla
        float c1H = 176.0f;
        DrawRoundedRect(x, y, w, c1H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, y + 14.0f, Tr("Controles táctiles en pantalla", "On-Screen Touch Controls"), 19.0f, COL_WHITE);
        DrawText(x + 18.0f, y + 34.0f, Tr("Oculta los botones virtuales si juegas con mando o ajusta su transparencia.",
                                         "Hide virtual on-screen buttons when playing with a gamepad or adjust opacity."), 13.0f, COL_MUTED);

        float tvChipW = (w - 36.0f - 15.0f) / 2.0f;
        float tvChipH = 38.0f;
        float tvChipY = y + 54.0f;

        // Visible chip
        float tv1X = x + 18.0f;
        DrawRoundedRect(tv1X, tvChipY, tvChipW, tvChipH, 8.0f,
                        m_touchVisible ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_touchVisible ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(tv1X + tvChipW * 0.5f, tvChipY + 10.0f, Tr("Botones táctiles: VISIBLES", "Touch buttons: VISIBLE"), 14.5f,
                 m_touchVisible ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Hidden chip
        float tv2X = tv1X + tvChipW + 15.0f;
        DrawRoundedRect(tv2X, tvChipY, tvChipW, tvChipH, 8.0f,
                        !m_touchVisible ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        !m_touchVisible ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(tv2X + tvChipW * 0.5f, tvChipY + 10.0f, Tr("Botones táctiles: OCULTOS (Solo Mando)", "Touch buttons: HIDDEN (Gamepad only)"), 14.5f,
                 !m_touchVisible ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Row 2: Opacity selector (left) & Gear auto-hide (right)
        float opAreaW = (w - 36.0f) * 0.54f;
        DrawText(x + 18.0f, y + 102.0f, Tr("Opacidad de botones:", "Button opacity:"), 14.5f, COL_WHITE);
        const char* opLabels[] = { "25%", "50%", "75%", "100%" };
        const float opValues[] = { 0.25f, 0.50f, 0.75f, 1.00f };
        float opChipW = (opAreaW - 30.0f) / 4.0f;
        float opChipH = 36.0f;
        float opChipY = y + 124.0f;
        for (int i = 0; i < 4; ++i) {
            float ox = x + 18.0f + float(i) * (opChipW + 10.0f);
            bool active = (std::abs(m_buttonOpacity - opValues[i]) < 0.10f);
            DrawRoundedRect(ox, opChipY, opChipW, opChipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(ox + opChipW * 0.5f, opChipY + 9.0f, opLabels[i], 13.5f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Right side: Auto-ocultar rueda ⚙
        float ahX = x + 18.0f + opAreaW + 16.0f;
        float ahAreaW = (w - 36.0f) - opAreaW - 16.0f;
        DrawText(ahX, y + 102.0f, Tr("Auto-ocultar rueda ⚙:", "Auto-hide gear ⚙:"), 14.5f, COL_WHITE);
        const char* ahLabels_es[] = { "Nunca", "3 s", "5 s", "10 s" };
        const char* ahLabels_en[] = { "Never", "3 s", "5 s", "10 s" };
        const char* const* ahLabels = (m_menuLang == 1) ? ahLabels_en : ahLabels_es;
        const int ahValues[] = { 0, 3, 5, 10 };
        float ahChipW = (ahAreaW - 24.0f) / 4.0f;
        for (int i = 0; i < 4; ++i) {
            float ax = ahX + float(i) * (ahChipW + 8.0f);
            bool active = (m_gearAutoHideSec == ahValues[i]);
            DrawRoundedRect(ax, opChipY, ahChipW, opChipH, 8.0f,
                            active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                            active ? COL_CYAN : COL_CHIP_BORDER);
            DrawText(ax + ahChipW * 0.5f, opChipY + 9.0f, ahLabels[i], 13.0f,
                     active ? COL_ACTIVE_TEXT : COL_WHITE, true);
        }

        // Card 2: Mando Gamepad (Distribución / Keymapper)
        float c2Y = y + c1H + 12.0f;
        float c2H = 116.0f;
        DrawRoundedRect(x, c2Y, w, c2H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, c2Y + 14.0f, Tr("Distribución de botones del Mando (Gamepad)", "Gamepad Button Layout"), 19.0f, COL_WHITE);
        DrawText(x + 18.0f, c2Y + 36.0f, Tr("Para mandos Bluetooth/USB (Xbox, PlayStation, Nintendo o genéricos):",
                                            "For Bluetooth/USB gamepads (Xbox, PlayStation, Nintendo or generic):"), 13.5f, COL_MUTED);

        const int gpLayout = Gamepad_GetLayout();
        const bool swapTrig = Gamepad_GetSwapTriggers();

        float lChipW = (w * 0.60f - 36.0f - 10.0f) / 2.0f;
        float gpChipH = 42.0f;
        float gpChipY = c2Y + 58.0f;

        // Nintendo layout
        float l1X = x + 18.0f;
        DrawRoundedRect(l1X, gpChipY, lChipW, gpChipH, 8.0f,
                        (gpLayout == 0) ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        (gpLayout == 0) ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(l1X + lChipW * 0.5f, gpChipY + 12.0f, Tr("Estilo Nintendo (A=Der, B=Abajo)", "Nintendo Style (A=Right, B=Down)"), 13.5f,
                 (gpLayout == 0) ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Xbox/Generic layout
        float l2X = l1X + lChipW + 10.0f;
        DrawRoundedRect(l2X, gpChipY, lChipW, gpChipH, 8.0f,
                        (gpLayout == 1) ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        (gpLayout == 1) ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(l2X + lChipW * 0.5f, gpChipY + 12.0f, Tr("Estilo Xbox / Genérico (A=Abajo, B=Der)", "Xbox / Generic Style (A=Down, B=Right)"), 13.5f,
                 (gpLayout == 1) ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Swap triggers
        float trigX = x + w * 0.62f;
        float trigW = w * 0.38f - 18.0f;
        DrawRoundedRect(trigX, gpChipY, trigW, gpChipH, 8.0f,
                        swapTrig ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        swapTrig ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(trigX + trigW * 0.5f, gpChipY + 12.0f,
                 swapTrig ? Tr("Gatillos: INVERTIDOS", "Triggers: SWAPPED") : Tr("Gatillos: NORMALES", "Triggers: DEFAULT"), 14.5f,
                 swapTrig ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Card 3: Macros y Personalización
        float c3Y = c2Y + c2H + 12.0f;
        float c3H = 154.0f;
        DrawRoundedRect(x, c3Y, w, c3H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, c3Y + 14.0f, Tr("Botones especiales (Macros) y Editor de pantalla", "Special Macro Buttons & Layout Editor"), 19.0f, COL_WHITE);
        DrawText(x + 18.0f, c3Y + 36.0f, Tr("Activa combinaciones de botones simultáneos para armas o reposiciona controles:",
                                            "Enable simultaneous button combinations for weapons or customize layout:"), 13.5f, COL_MUTED);

        float mChipW = (w - 36.0f - 30.0f) / 4.0f;
        float mChipH = 40.0f;
        float mChipY = c3Y + 56.0f;

        // Macro 1 (A+X)
        float m1X = x + 18.0f;
        DrawRoundedRect(m1X, mChipY, mChipW, mChipH, 8.0f,
                        m_macro1Enabled ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_macro1Enabled ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(m1X + mChipW * 0.5f, mChipY + 11.0f, m_macro1Enabled ? Tr("M1 (A+X): SÍ", "M1 (A+X): ON") : Tr("M1 (A+X): NO", "M1 (A+X): OFF"), 13.5f,
                 m_macro1Enabled ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Macro 2 (B+Y)
        float m2X = m1X + mChipW + 10.0f;
        DrawRoundedRect(m2X, mChipY, mChipW, mChipH, 8.0f,
                        m_macro2Enabled ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_macro2Enabled ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(m2X + mChipW * 0.5f, mChipY + 11.0f, m_macro2Enabled ? Tr("M2 (B+Y): SÍ", "M2 (B+Y): ON") : Tr("M2 (B+Y): NO", "M2 (B+Y): OFF"), 13.5f,
                 m_macro2Enabled ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Macro 3 (L+R)
        float m3X = m2X + mChipW + 10.0f;
        DrawRoundedRect(m3X, mChipY, mChipW, mChipH, 8.0f,
                        m_macro3Enabled ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_macro3Enabled ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(m3X + mChipW * 0.5f, mChipY + 11.0f, m_macro3Enabled ? Tr("M3 (L+R): SÍ", "M3 (L+R): ON") : Tr("M3 (L+R): NO", "M3 (L+R): OFF"), 13.5f,
                 m_macro3Enabled ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Macro 4 (A+B)
        float m4X = m3X + mChipW + 10.0f;
        DrawRoundedRect(m4X, mChipY, mChipW, mChipH, 8.0f,
                        m_macro4Enabled ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        m_macro4Enabled ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(m4X + mChipW * 0.5f, mChipY + 11.0f, m_macro4Enabled ? Tr("M4 (A+B): SÍ", "M4 (A+B): ON") : Tr("M4 (A+B): NO", "M4 (A+B): OFF"), 13.5f,
                 m_macro4Enabled ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Row 2: Action Buttons
        float actBtnY = mChipY + mChipH + 10.0f;
        float actBtnH = 42.0f;
        float editBtnW = (w - 36.0f - 15.0f) * 0.58f;
        float editBtnX = x + 18.0f;
        DrawRoundedRect(editBtnX, actBtnY, editBtnW, actBtnH, 8.0f, { 0.10f, 0.50f, 0.65f, 0.95f }, COL_CYAN);
        DrawText(editBtnX + editBtnW * 0.5f, actBtnY + 12.0f, Tr("✏ Modificar Posición y Tamaño Táctil", "✏ Customize Touch Position & Size"), 15.0f, COL_WHITE, true);

        float rstBtnW = (w - 36.0f - 15.0f) * 0.42f;
        float rstBtnX = editBtnX + editBtnW + 15.0f;
        DrawRoundedRect(rstBtnX, actBtnY, rstBtnW, actBtnH, 8.0f, { 0.40f, 0.15f, 0.18f, 0.85f }, { 0.90f, 0.35f, 0.40f, 1.0f });
        DrawText(rstBtnX + rstBtnW * 0.5f, actBtnY + 12.0f, Tr("Restablecer Diseño", "Reset Layout"), 15.0f, COL_WHITE, true);
    }

    void RenderEditMode() {
        DrawRectSolid(0, 0, float(m_width), float(m_height), { 0.0f, 0.0f, 0.0f, 0.40f });

        // Buttons with editor bounding rings
        for (size_t i = 0; i < m_buttons.size(); ++i) {
            const auto& btn = m_buttons[i];
            if (!IsButtonActive(btn)) continue;
            bool isSel = (int(i) == m_selectedButtonIndex);
            DrawAADisc(btn.pos.x, btn.pos.y, btn.radius,
                       isSel ? Color{ 0.95f, 0.85f, 0.20f, 0.65f } : btn.baseColor,
                       isSel ? Color{ 1.0f, 1.0f, 0.40f, 1.0f } : btn.borderColor, isSel ? 0.14f : 0.09f);
            DrawAARing(btn.pos.x, btn.pos.y, btn.radius * 1.15f, 2.0f, isSel ? Color{ 1.0f, 0.9f, 0.2f, 0.9f } : Color{ 0.3f, 0.8f, 1.0f, 0.5f });
            DrawButtonLabel(btn.pos.x, btn.pos.y, btn.label, btn.radius * 0.95f, isSel ? COL_CYAN : COL_WHITE);
        }

        // Left Stick
        bool stickSel = (m_selectedButtonIndex == -2);
        DrawAARing(m_leftStickCenter.x, m_leftStickCenter.y, m_leftStickRadius, stickSel ? 5.0f : 3.5f, stickSel ? COL_CYAN : Color{ 0.30f, 0.70f, 0.88f, 0.55f });
        DrawAADisc(m_leftStickPos.x, m_leftStickPos.y, m_leftStickKnobRadius,
                   stickSel ? Color{ 0.95f, 0.85f, 0.20f, 0.65f } : Color{ 0.10f, 0.32f, 0.45f, 0.80f },
                   stickSel ? Color{ 1.0f, 1.0f, 0.40f, 1.0f } : Color{ 0.50f, 0.88f, 1.00f, 0.95f }, 0.12f);

        // Top Banner Instructions
        float banW = float(m_width) * 0.70f;
        float banH = 40.0f;
        float banX = (float(m_width) - banW) * 0.5f;
        float banY = 12.0f;
        DrawRoundedRect(banX, banY, banW, banH, 8.0f, COL_BG_DARK, COL_CYAN);
        DrawText(banX + banW * 0.5f, banY + 11.0f,
                 Tr("MODO EDICIÓN: Arrastra para mover | Usa [-] y [+] para cambiar tamaño",
                    "EDIT MODE: Drag to move | Use [-] and [+] to resize"), 14.0f, COL_CYAN, true);

        // Bottom Toolbar
        float barW = float(m_width) * 0.80f;
        float barH = 52.0f;
        float barX = (float(m_width) - barW) * 0.5f;
        float barY = float(m_height) - barH - 12.0f;
        DrawRoundedRect(barX, barY, barW, barH, 10.0f, COL_BG_DARK, COL_PANEL_BORDER);

        float bw = (barW - 60.0f) / 5.0f;
        float bh = 36.0f;
        float by = barY + 8.0f;

        // Button 1: [- Tamaño]
        DrawRoundedRect(barX + 10.0f, by, bw, bh, 6.0f, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawText(barX + 10.0f + bw * 0.5f, by + 9.0f, Tr("[-] Tamaño", "[-] Size"), 13.0f, COL_WHITE, true);

        // Button 2: [+ Tamaño]
        DrawRoundedRect(barX + 20.0f + bw, by, bw, bh, 6.0f, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawText(barX + 20.0f + bw * 1.5f, by + 9.0f, Tr("[+] Tamaño", "[+] Size"), 13.0f, COL_WHITE, true);

        // Button 3: [Restablecer]
        DrawRoundedRect(barX + 30.0f + bw * 2.0f, by, bw, bh, 6.0f, { 0.35f, 0.15f, 0.15f, 0.85f }, { 0.80f, 0.30f, 0.30f, 0.90f });
        DrawText(barX + 30.0f + bw * 2.5f, by + 9.0f, Tr("Restablecer", "Reset"), 13.0f, COL_WHITE, true);

        // Button 4: [Guardar y Salir]
        DrawRoundedRect(barX + 40.0f + bw * 3.0f, by, bw, bh, 6.0f, COL_ACTIVE_CHIP, COL_CYAN);
        DrawText(barX + 40.0f + bw * 3.5f, by + 9.0f, Tr("Guardar", "Save"), 13.0f, COL_ACTIVE_TEXT, true);

        // Button 5: [Cancelar]
        DrawRoundedRect(barX + 50.0f + bw * 4.0f, by, bw, bh, 6.0f, COL_INACTIVE_CHIP, COL_CHIP_BORDER);
        DrawText(barX + 50.0f + bw * 4.5f, by + 9.0f, Tr("Cancelar", "Cancel"), 13.0f, COL_MUTED, true);
    }

    void RenderTabOnline(float x, float y, float w) {
        // Card 1: Modo de Conexión
        float c1H = 108.0f;
        DrawRoundedRect(x, y, w, c1H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);
        DrawText(x + 18.0f, y + 14.0f, Tr("Conexión Multijugador Online", "Online Multiplayer Connection"), 19.0f, COL_WHITE);
        DrawText(x + 18.0f, y + 36.0f, Tr("Conexión directa a los servidores comunitarios de Monster Hunter 3 (MH3SP).",
                                         "Direct connection to Monster Hunter 3 community servers (MH3SP)."), 13.5f, COL_MUTED);

        float mChipW = (w - 36.0f - 12.0f) / 2.0f;
        float mChipH = 42.0f;
        float mChipY = y + 54.0f;

        // Chip 0: Comunidad MH3SP
        bool c0Active = (m_onlineMode == 3);
        float c0X = x + 18.0f;
        DrawRoundedRect(c0X, mChipY, mChipW, mChipH, 8.0f,
                        c0Active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        c0Active ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(c0X + mChipW * 0.5f, mChipY + 12.0f, Tr("Comunidad MH3SP (mh3sp.com)", "MH3SP Community (mh3sp.com)"), 14.0f,
                 c0Active ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Chip 1: Desconectado
        bool c1Active = (m_onlineMode == 0);
        float c1X = c0X + mChipW + 12.0f;
        DrawRoundedRect(c1X, mChipY, mChipW, mChipH, 8.0f,
                        c1Active ? COL_ACTIVE_CHIP : COL_INACTIVE_CHIP,
                        c1Active ? COL_CYAN : COL_CHIP_BORDER);
        DrawText(c1X + mChipW * 0.5f, mChipY + 12.0f, Tr("Desconectado", "Offline"), 14.0f,
                 c1Active ? COL_ACTIVE_TEXT : COL_WHITE, true);

        // Card 2: Detalles
        float c2Y = y + c1H + 12.0f;
        float c2H = 224.0f;
        DrawRoundedRect(x, c2Y, w, c2H, 12.0f, COL_PANEL_CARD, COL_PANEL_BORDER);

        if (m_onlineMode == 3) { // Community
            DrawText(x + 18.0f, c2Y + 14.0f, Tr("Servidor de la Comunidad: mh3sp.com (SSL/TLS)", "Community Server: mh3sp.com (SSL/TLS)"), 19.0f, COL_CYAN);
            DrawText(x + 18.0f, c2Y + 44.0f, Tr("• Conexión directa a los servidores globales de Monster Hunter 3 (MH3SP).", "• Direct connection to Monster Hunter 3 global servers (MH3SP)."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 74.0f, Tr("• Eventos rotativos, misiones de evento y salas de cazadores en todo el mundo.", "• Rotating events, event quests, and hunter hubs worldwide."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 104.0f, Tr("• Certificado CA oficial de MH3SP integrado para validar la conexión.", "• Built-in official MH3SP CA certificate to validate connection."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 134.0f, Tr("• Conexión optimizada directa a OPN (8200), NAS (80) y GameSpy.", "• Direct optimized connection to OPN (8200), NAS (80), and GameSpy."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 174.0f, Tr("Entra a la Ciudad (Loc Lac) desde la puerta de la Aldea de Moga para jugar.", "Enter the City (Loc Lac) through Moga Village gate to play online."), 13.5f, COL_MUTED);
        } else { // Offline
            DrawText(x + 18.0f, c2Y + 14.0f, Tr("Modo Desconectado (Aldea de Moga)", "Offline Mode (Moga Village)"), 19.0f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 44.0f, Tr("• La red está desactivada.", "• Network features are disabled."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 74.0f, Tr("• Juega las misiones de la historia individual en la Aldea de Moga sin conexión.", "• Play solo story quests in Moga Village without an internet connection."), 14.5f, COL_WHITE);
            DrawText(x + 18.0f, c2Y + 104.0f, Tr("• No se realizarán conexiones a la red ni consumirá batería adicional.", "• No network activity is performed, saving battery power."), 14.5f, COL_WHITE);
        }

        // Status Banner at bottom
        float bannerY = c2Y + c2H + 12.0f;
        float bannerH = 44.0f;
        DrawRoundedRect(x, bannerY, w, bannerH, 8.0f, { 0.02f, 0.08f, 0.12f, 0.90f }, COL_PANEL_BORDER);
        DrawText(x + 18.0f, bannerY + 12.0f, Tr("Estado:", "Status:"), 14.0f, COL_CYAN);
        DrawText(x + 85.0f, bannerY + 12.0f, m_onlineStatusMsg.c_str(), 14.0f, COL_WHITE);
    }

    // -------------------------------------------------------------
    // Menu & Edit Touch Handlers
    // -------------------------------------------------------------
    void HandleMenuTouchDown(float px, float py) {
        float padX = float(m_width) * 0.05f;
        float padY = float(m_height) * 0.04f;
        float panW = float(m_width) - padX * 2.0f;
        float panH = float(m_height) - padY * 2.0f;

        // Close button [✕] or click outside panel
        float closeX = padX + panW - 56.0f;
        float closeY = padY + 18.0f;
        float closeS = 38.0f;
        if (px >= closeX && px <= closeX + closeS + 10.0f && py >= closeY && py <= closeY + closeS + 10.0f) {
            m_menuOpen = false;
            return;
        }
        if (px < padX || px > padX + panW || py < padY || py > padY + panH) {
            m_menuOpen = false;
            return;
        }

        // Tabs
        float tabY = padY + 86.0f;
        float tabW = (panW - 40.0f - 40.0f) / 5.0f;
        float tabH = 44.0f;
        if (py >= tabY && py <= tabY + tabH) {
            for (int i = 0; i < 5; ++i) {
                float tx = padX + 20.0f + float(i) * (tabW + 10.0f);
                if (px >= tx && px <= tx + tabW) {
                    m_menuTab = i;
                    if (m_menuTab == 4) {
                        LanBeacon::StartScanner();
                        LanBeacon::TriggerScan();
                    }
                    return;
                }
            }
        }

        float contentY = tabY + tabH + 16.0f;
        float contentW = panW - 40.0f;
        float x = padX + 20.0f;

        if (m_menuTab == 0) { // Gráficos
            float chipH = 38.0f;

            // Card 1: Resolution chips
            float chipY = contentY + 46.0f;
            float chipW = (contentW - 36.0f - 25.0f) / 6.0f;
            if (py >= chipY && py <= chipY + chipH) {
                for (int i = 0; i < 6; ++i) {
                    float cx = x + 18.0f + float(i) * (chipW + 5.0f);
                    if (px >= cx && px <= cx + chipW) {
                        m_resolutionIndex = i;
                        ApplyResolutionScale(m_resolutionIndex);
                        SaveSettings();
                        return;
                    }
                }
            }

            // Card 2: Relación de aspecto
            float c2Y = contentY + 96.0f + 10.0f;
            float aChipW = (contentW - 36.0f - 20.0f) / 3.0f;
            float aChipY = c2Y + 46.0f;
            if (py >= aChipY && py <= aChipY + chipH) {
                for (int i = 0; i < 3; ++i) {
                    float ax = x + 18.0f + float(i) * (aChipW + 10.0f);
                    if (px >= ax && px <= ax + aChipW) {
                        m_aspectIndex = i;
                        ApplyAspectRatio(m_aspectIndex);
                        SaveSettings();
                        return;
                    }
                }
            }

            // Card 3: FPS Limit (30, 60, 90, 120) & V-Sync / HUD
            float c3Y = c2Y + 96.0f + 10.0f;
            float fpsColW = (contentW - 36.0f - 16.0f) * 0.52f;
            float fChipY = c3Y + 48.0f;
            if (py >= fChipY && py <= fChipY + chipH) {
                float fChipW = (fpsColW - 15.0f) / 4.0f;
                for (int i = 0; i < 4; ++i) {
                    float fx = x + 18.0f + float(i) * (fChipW + 5.0f);
                    if (px >= fx && px <= fx + fChipW) {
                        const int fpsValues[] = { 30, 60, 90, 120 };
                        m_fpsLimit = fpsValues[i];
                        MH3FrameRateControl::SetTargetFPS(m_fpsLimit);
                        SaveSettings();
                        return;
                    }
                }

                float syncColX = x + 18.0f + fpsColW + 16.0f;
                float syncColW = (contentW - 36.0f - 16.0f) * 0.50f;
                float sChipW = (syncColW - 10.0f) * 0.5f;
                // VSync click
                if (px >= syncColX && px <= syncColX + sChipW) {
                    m_vsync = !m_vsync;
                    if (!m_vsync && m_fpsLimit == 60) {
                        m_fpsLimit = 120;
                        MH3FrameRateControl::SetTargetFPS(120);
                    }
                    aurora_enable_vsync(m_vsync);
                    SaveSettings();
                    return;
                }
                // HUD FPS click
                float hudX = syncColX + sChipW + 10.0f;
                if (px >= hudX && px <= hudX + sChipW) {
                    m_showFpsHud = !m_showFpsHud;
                    SaveSettings();
                    return;
                }
            }

            // Card 4: HD Textures click
            float c4Y = c3Y + 98.0f + 10.0f;
            float tBtnW = (contentW - 36.0f - 15.0f) * 0.50f;
            float tBtnY = c4Y + 46.0f;
            if (py >= tBtnY && py <= tBtnY + chipH) {
                if (px >= x + 18.0f && px <= x + 18.0f + tBtnW) {
                    bool cur = aurora::gfx::texture_replacement::is_enabled();
                    aurora::gfx::texture_replacement::set_enabled(!cur);
                    return;
                } else if (px >= x + 18.0f + tBtnW + 15.0f && px <= x + 18.0f + tBtnW * 2.0f + 15.0f) {
                    aurora::gfx::texture_replacement::reload();
                    return;
                }
            }

            // Card 5: Bloom Level chips click
            float c5Y = c4Y + 96.0f + 10.0f;
            float bChipW = (contentW - 36.0f - 30.0f) / 4.0f;
            float bChipY = c5Y + 46.0f;
            if (py >= bChipY && py <= bChipY + chipH) {
                for (int i = 0; i < 4; ++i) {
                    float bx = x + 18.0f + float(i) * (bChipW + 10.0f);
                    if (px >= bx && px <= bx + bChipW) {
                        m_bloomLevel = i;
                        aurora_set_bloom_level(m_bloomLevel);
                        SaveSettings();
                        return;
                    }
                }
            }
        } else if (m_menuTab == 1) { // Sistema
            // Card 1: Idioma del menú
            float chipH = 38.0f;
            float menuChipW = (contentW - 36.0f - 15.0f) / 2.0f;
            float menuChipY = contentY + 46.0f;
            if (py >= menuChipY && py <= menuChipY + chipH) {
                for (int i = 0; i < 2; ++i) {
                    float mx = x + 18.0f + float(i) * (menuChipW + 15.0f);
                    if (px >= mx && px <= mx + menuChipW) {
                        m_menuLang = i;
                        SaveMenuLanguage();
                        m_saveStatusMsg = (m_menuLang == 1) ? "Ready to export or import save files." : "Listo para exportar o importar partidas guardadas.";
                        m_onlineStatusMsg = (m_onlineMode == 0)
                            ? ((m_menuLang == 1) ? "Offline mode. Play in Moga Village." : "Modo desconectado. Juega en la Aldea de Moga.")
                            : ((m_menuLang == 1) ? "Official mh3sp.com community server enabled." : "Servidor oficial de la comunidad mh3sp.com activado.");
                        return;
                    }
                }
            }

            // Card 2: Idioma del juego
            float c2Y = contentY + 96.0f + 10.0f;
            float chipW = (contentW - 36.0f - 20.0f) / 5.0f;
            float chipY2 = c2Y + 52.0f;
            if (py >= chipY2 && py <= chipY2 + chipH) {
                for (int i = 0; i < 5; ++i) {
                    float lx = x + 18.0f + float(i) * (chipW + 5.0f);
                    if (px >= lx && px <= lx + chipW) {
                        m_langChoice = i;
                        SaveLanguage();
                        return;
                    }
                }
            }

            // Card 3: Restart Button
            float c2H = 120.0f;
            float statusY = c2Y + c2H + 8.0f;
            float c3Y = statusY + 24.0f;
            float rBtnW = 200.0f;
            float rBtnX = x + contentW - rBtnW - 18.0f;
            float rBtnY = c3Y + 20.0f;
            if (px >= rBtnX && px <= rBtnX + rBtnW && py >= rBtnY && py <= rBtnY + 44.0f) {
                RestartApplication();
                return;
            }
        } else if (m_menuTab == 2) { // Guardados
            float btnW = (contentW - 36.0f - 20.0f) / 3.0f;
            float btnH = 50.0f;
            float btnY = contentY + 70.0f;

            float b1X = x + 18.0f;
            float b2X = b1X + btnW + 10.0f;
            float b3X = b2X + btnW + 10.0f;

            if (py >= btnY && py <= btnY + btnH) {
                if (px >= b1X && px <= b1X + btnW) {
                    ExportSaveFiles();
                    return;
                } else if (px >= b2X && px <= b2X + btnW) {
                    ImportSaveFiles();
                    return;
                } else if (px >= b3X && px <= b3X + btnW) {
                    CreateQuickBackup();
                    return;
                }
            }
        } else if (m_menuTab == 3) { // Controles
            // Card 1: Touch Visibility & Opacity
            float c1H = 176.0f;
            float tvChipW = (contentW - 36.0f - 15.0f) / 2.0f;
            float tvChipH = 38.0f;
            float tvChipY = contentY + 54.0f;

            float tv1X = x + 18.0f;
            float tv2X = tv1X + tvChipW + 15.0f;
            if (py >= tvChipY && py <= tvChipY + tvChipH) {
                if (px >= tv1X && px <= tv1X + tvChipW) {
                    m_touchVisible = true;
                    SaveLayoutConfig();
                    return;
                } else if (px >= tv2X && px <= tv2X + tvChipW) {
                    m_touchVisible = false;
                    SaveLayoutConfig();
                    return;
                }
            }

            // Opacity chips (left) & Auto-hide gear (right)
            float opAreaW = (contentW - 36.0f) * 0.54f;
            float opChipW = (opAreaW - 30.0f) / 4.0f;
            float opChipH = 36.0f;
            float opChipY = contentY + 124.0f;
            const float opValues[] = { 0.25f, 0.50f, 0.75f, 1.00f };
            if (py >= opChipY && py <= opChipY + opChipH) {
                for (int i = 0; i < 4; ++i) {
                    float ox = x + 18.0f + float(i) * (opChipW + 10.0f);
                    if (px >= ox && px <= ox + opChipW) {
                        m_buttonOpacity = opValues[i];
                        SaveLayoutConfig();
                        return;
                    }
                }

                float ahX = x + 18.0f + opAreaW + 16.0f;
                float ahAreaW = (contentW - 36.0f) - opAreaW - 16.0f;
                float ahChipW = (ahAreaW - 24.0f) / 4.0f;
                const int ahValues[] = { 0, 3, 5, 10 };
                for (int i = 0; i < 4; ++i) {
                    float ax = ahX + float(i) * (ahChipW + 8.0f);
                    if (px >= ax && px <= ax + ahChipW) {
                        m_gearAutoHideSec = ahValues[i];
                        SaveLayoutConfig();
                        return;
                    }
                }
            }

            // Card 2: Gamepad Layout & Swap Triggers
            float c2Y = contentY + c1H + 12.0f;
            float c2H = 116.0f;
            float lChipW = (contentW * 0.60f - 36.0f - 10.0f) / 2.0f;
            float gpChipH = 42.0f;
            float gpChipY = c2Y + 58.0f;

            float l1X = x + 18.0f;
            float l2X = l1X + lChipW + 10.0f;
            float trigX = x + contentW * 0.62f;
            float trigW = contentW * 0.38f - 18.0f;

            if (py >= gpChipY && py <= gpChipY + gpChipH) {
                if (px >= l1X && px <= l1X + lChipW) {
                    Gamepad_SetLayout(0);
                    return;
                } else if (px >= l2X && px <= l2X + lChipW) {
                    Gamepad_SetLayout(1);
                    return;
                } else if (px >= trigX && px <= trigX + trigW) {
                    Gamepad_SetSwapTriggers(!Gamepad_GetSwapTriggers());
                    return;
                }
            }

            // Card 3: Macros & Edit & Reset
            float c3Y = c2Y + c2H + 12.0f;
            float mChipW = (contentW - 36.0f - 30.0f) / 4.0f;
            float mChipH = 40.0f;
            float mChipY = c3Y + 56.0f;

            float m1X = x + 18.0f;
            float m2X = m1X + mChipW + 10.0f;
            float m3X = m2X + mChipW + 10.0f;
            float m4X = m3X + mChipW + 10.0f;

            if (py >= mChipY && py <= mChipY + mChipH) {
                if (px >= m1X && px <= m1X + mChipW) {
                    m_macro1Enabled = !m_macro1Enabled;
                    SaveLayoutConfig();
                    return;
                } else if (px >= m2X && px <= m2X + mChipW) {
                    m_macro2Enabled = !m_macro2Enabled;
                    SaveLayoutConfig();
                    return;
                } else if (px >= m3X && px <= m3X + mChipW) {
                    m_macro3Enabled = !m_macro3Enabled;
                    SaveLayoutConfig();
                    return;
                } else if (px >= m4X && px <= m4X + mChipW) {
                    m_macro4Enabled = !m_macro4Enabled;
                    SaveLayoutConfig();
                    return;
                }
            }

            // Row 2: Edit mode & Reset buttons
            float actBtnY = mChipY + mChipH + 10.0f;
            float actBtnH = 42.0f;
            float editBtnW = (contentW - 36.0f - 15.0f) * 0.58f;
            float editBtnX = x + 18.0f;
            float rstBtnW = (contentW - 36.0f - 15.0f) * 0.42f;
            float rstBtnX = editBtnX + editBtnW + 15.0f;

            if (py >= actBtnY && py <= actBtnY + actBtnH) {
                if (px >= editBtnX && px <= editBtnX + editBtnW) {
                    m_menuOpen = false;
                    m_editMode = true;
                    m_selectedButtonIndex = -1;
                    return;
                } else if (px >= rstBtnX && px <= rstBtnX + rstBtnW) {
                    InitDefaultButtons();
                    m_normLeftStickPos = { 0.12f, 0.76f };
                    m_leftStickScale = 1.0f;
                    RecalculateButtonPositions();
                    SaveLayoutConfig();
                    return;
                }
            }
        } else if (m_menuTab == 4) { // Online / Multijugador
            HandleTabOnlineTouch(px, py, x, contentY, contentW);
        }
    }

    void HandleTabOnlineTouch(float px, float py, float x, float contentY, float contentW) {
        float mChipW = (contentW - 36.0f - 12.0f) / 2.0f;
        float mChipH = 42.0f;
        float mChipY = contentY + 54.0f;
        if (py >= mChipY && py <= mChipY + mChipH) {
            float c0X = x + 18.0f;
            float c1X = c0X + mChipW + 12.0f;
            if (px >= c0X && px <= c0X + mChipW) {
                m_onlineMode = 3;
                LocalOnlineServer::SetMode(LocalOnlineServer::Mode::Community, "mh3sp.com");
                m_onlineStatusMsg = (m_menuLang == 1)
                    ? "Official mh3sp.com community server enabled."
                    : "Servidor oficial de la comunidad mh3sp.com activado.";
                return;
            }
            if (px >= c1X && px <= c1X + mChipW) {
                m_onlineMode = 0;
                LocalOnlineServer::SetMode(LocalOnlineServer::Mode::Offline);
                m_onlineStatusMsg = (m_menuLang == 1)
                    ? "Offline mode. Play in Moga Village."
                    : "Modo desconectado. Juega en la Aldea de Moga.";
                return;
            }
        }
    }

    void HandleEditModeTouchDown(SDL_FingerID id, float px, float py) {
        float barW = float(m_width) * 0.80f;
        float barH = 52.0f;
        float barX = (float(m_width) - barW) * 0.5f;
        float barY = float(m_height) - barH - 12.0f;

        // Toolbar clicks
        if (py >= barY && py <= barY + barH) {
            float bw = (barW - 60.0f) / 5.0f;
            float by = barY + 8.0f;
            float bh = 36.0f;

            // 1. [- Tamaño]
            float b1X = barX + 10.0f;
            if (px >= b1X && px <= b1X + bw) {
                AdjustSelectedButtonScale(-0.10f);
                return;
            }
            // 2. [+ Tamaño]
            float b2X = barX + 20.0f + bw;
            if (px >= b2X && px <= b2X + bw) {
                AdjustSelectedButtonScale(+0.10f);
                return;
            }
            // 3. [Restablecer]
            float b3X = barX + 30.0f + bw * 2.0f;
            if (px >= b3X && px <= b3X + bw) {
                InitDefaultButtons();
                m_normLeftStickPos = { 0.12f, 0.76f };
                m_leftStickScale = 1.0f;
                RecalculateButtonPositions();
                return;
            }
            // 4. [Guardar]
            float b4X = barX + 40.0f + bw * 3.0f;
            if (px >= b4X && px <= b4X + bw) {
                SaveLayoutConfig();
                m_editMode = false;
                m_selectedButtonIndex = -1;
                return;
            }
            // 5. [Cancelar]
            float b5X = barX + 50.0f + bw * 4.0f;
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
            if (Memory::Contains(0x8065B504, 8)) {
                Memory::WriteFloat32(0x8065B504, targetAspect);
                Memory::WriteFloat32(0x8065B508, targetAspect);
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
        if (m_onlineMode != 0) m_onlineMode = 3;
        m_onlineHostIp = "mh3sp.com";
        m_onlineStatusMsg = (m_onlineMode == 0)
            ? ((m_menuLang == 1) ? "Offline mode. Play in Moga Village." : "Modo desconectado. Juega en la Aldea de Moga.")
            : ((m_menuLang == 1) ? "Official mh3sp.com community server enabled." : "Servidor oficial de la comunidad mh3sp.com activado.");
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
                << (m_asyncShaders ? 1 : 0) << ' ' << m_bloomLevel << '\n';
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

    // Free Floating Right Stick
    bool m_rightStickActive = false;
    Vec2 m_rightFloatingOrigin{ 0, 0 };
    Vec2 m_rightStickPos{ 0, 0 };
    Vec2 m_rightLastPos{ 0, 0 };
    float m_rightStickRadius = 0.0f;
    float m_rightStickKnobRadius = 0.0f;
    int m_rightFingerId = -1;
    int16_t m_rightX = 0;
    int16_t m_rightY = 0;
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
    float m_buttonOpacity = 1.0f;
    int m_gearAutoHideSec = 0;
    std::atomic<int64_t> m_lastTouchMs{0};
    int m_menuLang = 0;        // 0: Español (default), 1: English
    int m_langChoice = 0;      // 0: Español
    double m_liveFps = 60.0;
    std::string m_saveStatusMsg = "Listo para exportar o importar partidas guardadas.";
    int m_onlineMode = 3;
    std::string m_onlineHostIp = "mh3sp.com";
    std::string m_onlineStatusMsg = "Servidor oficial de la comunidad mh3sp.com activado.";

    // Macros & Edit Mode
    bool m_macro1Enabled = true;
    bool m_macro2Enabled = false;
    bool m_macro3Enabled = false;
    bool m_macro4Enabled = false;
    bool m_editMode = false;
    int m_selectedButtonIndex = -1;
    bool m_editDragging = false;
    int m_editFingerId = -1;

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

} // extern "C"
