#include "controller_host.h"
#include "touch_controls.h"
#include "android_keyboard.h"
#include "pointer_controls.h"
#include "mh3_mouse_look_sensitivity.h"
#include "fatal.h"
#include "dev_options.h"
#include "../native/mh3_classic_map.h"
#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdexcept>
#include <cstdio>
#include <string>
#include <vector>
#if defined(MH3_HAS_AURORA) && !defined(__vita__)
#include <SDL3/SDL.h>
#endif
namespace {
std::optional<ClassicControllerSample> testSample;
uint64_t inputFrame = 0;
bool playbackHeld = false;
std::atomic<int32_t> pendingMouseLookX{0};
std::atomic<int32_t> pendingMouseLookY{0};

void QueueMouseDelta(std::atomic<int32_t>& target, int32_t delta) {
    if (delta == 0)
        return;

    int32_t current = target.load(std::memory_order_relaxed);

    for (;;) {
        const int32_t next = std::clamp<int32_t>(current + delta, -512, 512);

        if (target.compare_exchange_weak(current, next, std::memory_order_relaxed, std::memory_order_relaxed))
            return;
    }
}

int g_gamepadLayout = 0; // 0 = Nintendo, 1 = Xbox / Generic
bool g_gamepadSwapTriggers = false; // true = Swap L/R with ZL/ZR
bool g_gamepadConfigLoaded = false;
int8_t g_gamepadBindings[14] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
SDL_Gamepad* g_activeGamepad = nullptr;

SDL_Gamepad* GetActiveGamepad() {
    if (g_activeGamepad && !SDL_GamepadConnected(g_activeGamepad)) {
        SDL_CloseGamepad(g_activeGamepad);
        g_activeGamepad = nullptr;
    }
    if (!g_activeGamepad) {
        int count = 0;
        auto* ids = SDL_GetGamepads(&count);
        if (ids && count > 0) {
            g_activeGamepad = SDL_OpenGamepad(ids[0]);
        }
        SDL_free(ids);
    }
    return g_activeGamepad;
}

} // namespace

extern "C" {

void Gamepad_ResetToPreset(int layout, bool swapTriggers) {
    g_gamepadLayout = (layout == 1) ? 1 : 0;
    g_gamepadSwapTriggers = swapTriggers;

    int8_t btnA = (g_gamepadLayout == 1) ? SDL_GAMEPAD_BUTTON_SOUTH : SDL_GAMEPAD_BUTTON_EAST;
    int8_t btnB = (g_gamepadLayout == 1) ? SDL_GAMEPAD_BUTTON_EAST : SDL_GAMEPAD_BUTTON_SOUTH;
    int8_t btnX = (g_gamepadLayout == 1) ? SDL_GAMEPAD_BUTTON_WEST : SDL_GAMEPAD_BUTTON_NORTH;
    int8_t btnY = (g_gamepadLayout == 1) ? SDL_GAMEPAD_BUTTON_NORTH : SDL_GAMEPAD_BUTTON_WEST;

    int8_t btnL  = swapTriggers ? 20 : SDL_GAMEPAD_BUTTON_LEFT_SHOULDER;
    int8_t btnR  = swapTriggers ? 21 : SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER;
    int8_t btnZL = swapTriggers ? SDL_GAMEPAD_BUTTON_LEFT_SHOULDER : 20;
    int8_t btnZR = swapTriggers ? SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER : 21;

    g_gamepadBindings[0]  = btnA;
    g_gamepadBindings[1]  = btnB;
    g_gamepadBindings[2]  = btnX;
    g_gamepadBindings[3]  = btnY;
    g_gamepadBindings[4]  = btnL;
    g_gamepadBindings[5]  = btnR;
    g_gamepadBindings[6]  = btnZL;
    g_gamepadBindings[7]  = btnZR;
    g_gamepadBindings[8]  = SDL_GAMEPAD_BUTTON_DPAD_UP;
    g_gamepadBindings[9]  = SDL_GAMEPAD_BUTTON_DPAD_DOWN;
    g_gamepadBindings[10] = SDL_GAMEPAD_BUTTON_DPAD_LEFT;
    g_gamepadBindings[11] = SDL_GAMEPAD_BUTTON_DPAD_RIGHT;
    g_gamepadBindings[12] = SDL_GAMEPAD_BUTTON_BACK;
    g_gamepadBindings[13] = SDL_GAMEPAD_BUTTON_START;
}

void Gamepad_LoadConfig() {
    if (g_gamepadConfigLoaded) return;
    g_gamepadConfigLoaded = true;

    Gamepad_ResetToPreset(g_gamepadLayout, g_gamepadSwapTriggers);

    const char* user = std::getenv("MH3_USER_DIR");
    std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
    std::string path = dir + "/gamepad.cfg";
    std::ifstream in(path);
    if (in) {
        int layout = 0, swap = 0;
        if (in >> layout >> swap) {
            g_gamepadLayout = (layout == 1) ? 1 : 0;
            g_gamepadSwapTriggers = (swap != 0);
            Gamepad_ResetToPreset(g_gamepadLayout, g_gamepadSwapTriggers);
            for (int i = 0; i < 14; ++i) {
                int b = 0;
                if (in >> b) {
                    g_gamepadBindings[i] = (int8_t)b;
                }
            }
        }
    }
}

void Gamepad_SaveConfig() {
    const char* user = std::getenv("MH3_USER_DIR");
    std::string dir = (user && *user) ? user : "/storage/emulated/0/MH3";
    std::string path = dir + "/gamepad.cfg";
    std::ofstream out(path, std::ios::trunc);
    if (out) {
        out << g_gamepadLayout << ' ' << (g_gamepadSwapTriggers ? 1 : 0);
        for (int i = 0; i < 14; ++i) {
            out << ' ' << int(g_gamepadBindings[i]);
        }
        out << '\n';
    }
}

int Gamepad_GetLayout() {
    Gamepad_LoadConfig();
    return g_gamepadLayout;
}

void Gamepad_SetLayout(int layout) {
    g_gamepadLayout = (layout == 1) ? 1 : 0;
    Gamepad_ResetToPreset(g_gamepadLayout, g_gamepadSwapTriggers);
    Gamepad_SaveConfig();
}

bool Gamepad_GetSwapTriggers() {
    Gamepad_LoadConfig();
    return g_gamepadSwapTriggers;
}

void Gamepad_SetSwapTriggers(bool swap) {
    g_gamepadSwapTriggers = swap;
    Gamepad_ResetToPreset(g_gamepadLayout, g_gamepadSwapTriggers);
    Gamepad_SaveConfig();
}

int Gamepad_GetBinding(int action) {
    Gamepad_LoadConfig();
    if (action < 0 || action >= 14) return -1;
    return g_gamepadBindings[action];
}

void Gamepad_SetBinding(int action, int inputCode) {
    Gamepad_LoadConfig();
    if (action < 0 || action >= 14) return;
    g_gamepadBindings[action] = (int8_t)inputCode;
    Gamepad_SaveConfig();
}

bool Gamepad_IsConnected() {
    return GetActiveGamepad() != nullptr;
}

int Gamepad_DetectPressedInput() {
    SDL_Gamepad* pad = GetActiveGamepad();
    if (!pad) return -1;

    for (int b = 0; b < SDL_GAMEPAD_BUTTON_COUNT; ++b) {
        if (SDL_GetGamepadButton(pad, (SDL_GamepadButton)b)) {
            return b;
        }
    }

    const auto axis = [&](SDL_GamepadAxis source) {
        return std::clamp(SDL_GetGamepadAxis(pad, source) / 32767.0f, -1.0f, 1.0f);
    };

    if (axis(SDL_GAMEPAD_AXIS_LEFT_TRIGGER) > 0.5f) {
        return 20; // Trigger L / LT
    }
    if (axis(SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) > 0.5f) {
        return 21; // Trigger R / RT
    }

    return -1;
}

const char* Gamepad_GetActionName(int action, int lang) {
    static const char* s_names_es[14] = {
        "Botón A", "Botón B", "Botón X", "Botón Y",
        "Botón L", "Botón R", "Botón ZL", "Botón ZR",
        "Cruceta Arriba ▲", "Cruceta Abajo ▼", "Cruceta Izquierda ◀", "Cruceta Derecha ▶",
        "Botón Menú (-)", "Botón Inicio (+)"
    };
    static const char* s_names_en[14] = {
        "A Button", "B Button", "X Button", "Y Button",
        "L Button", "R Button", "ZL Button", "ZR Button",
        "D-Pad Up ▲", "D-Pad Down ▼", "D-Pad Left ◀", "D-Pad Right ▶",
        "Minus Button (-)", "Plus Button (+)"
    };
    if (action < 0 || action >= 14) return "?";
    return (lang == 1) ? s_names_en[action] : s_names_es[action];
}

const char* Gamepad_GetActionDesc(int action, int lang) {
    static const char* s_desc_es[14] = {
        "Aceptar / Interactuar / Ataque",
        "Cancelar / Esquivar / Rodar",
        "Ataque / Desenvainar arma",
        "Usar objeto / Envainar arma",
        "Centrar cámara / Rueda de objetos",
        "Correr / Guardia / Transformar arma",
        "Fijar objetivo de cámara (Lock-on)",
        "Ataque especial / Disparo de ballesta",
        "Cámara arriba / Seleccionar objeto",
        "Cámara abajo / Seleccionar objeto",
        "Cámara izquierda / Seleccionar objeto",
        "Cámara derecha / Seleccionar objeto",
        "Menú de chat / Patada de cazador",
        "Pausa / Opciones / Menú principal"
    };
    static const char* s_desc_en[14] = {
        "Confirm / Interact / Attack",
        "Cancel / Evade / Roll",
        "Attack / Draw weapon",
        "Use item / Sheathe weapon",
        "Center camera / Item menu",
        "Sprint / Guard / Transform weapon",
        "Target camera lock-on",
        "Special attack / Bowgun fire",
        "Camera up / Select item",
        "Camera down / Select item",
        "Camera left / Select item",
        "Camera right / Select item",
        "Chat menu / Hunter kick",
        "Pause / Options / Main menu"
    };
    if (action < 0 || action >= 14) return "";
    return (lang == 1) ? s_desc_en[action] : s_desc_es[action];
}

const char* Gamepad_GetInputName(int inputCode, int layout, int lang) {
    switch (inputCode) {
        case SDL_GAMEPAD_BUTTON_SOUTH:
            return (layout == 1) ? "A (Xbox/PC) / B (Switch) / ✕" : "B (Inferior) / A (Xbox) / ✕";
        case SDL_GAMEPAD_BUTTON_EAST:
            return (layout == 1) ? "B (Xbox/PC) / A (Switch) / ◯" : "A (Derecha) / B (Xbox) / ◯";
        case SDL_GAMEPAD_BUTTON_WEST:
            return (layout == 1) ? "X (Xbox/PC) / Y (Switch) / □" : "Y (Izquierda) / X (Xbox) / □";
        case SDL_GAMEPAD_BUTTON_NORTH:
            return (layout == 1) ? "Y (Xbox/PC) / X (Switch) / △" : "X (Superior) / Y (Xbox) / △";
        case SDL_GAMEPAD_BUTTON_BACK:
            return "Back / Select / Share / (-)";
        case SDL_GAMEPAD_BUTTON_GUIDE:
            return "Guía / Home / PS";
        case SDL_GAMEPAD_BUTTON_START:
            return "Start / Options / (+)";
        case SDL_GAMEPAD_BUTTON_LEFT_STICK:
            return (lang == 1) ? "L3 (Left Stick Click)" : "L3 (Pulsar Stick Izq)";
        case SDL_GAMEPAD_BUTTON_RIGHT_STICK:
            return (lang == 1) ? "R3 (Right Stick Click)" : "R3 (Pulsar Stick Der)";
        case SDL_GAMEPAD_BUTTON_LEFT_SHOULDER:
            return "LB / L1 (Hombro Izq)";
        case SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER:
            return "RB / R1 (Hombro Der)";
        case SDL_GAMEPAD_BUTTON_DPAD_UP:
            return (lang == 1) ? "D-Pad Up ▲" : "Cruceta Arriba ▲";
        case SDL_GAMEPAD_BUTTON_DPAD_DOWN:
            return (lang == 1) ? "D-Pad Down ▼" : "Cruceta Abajo ▼";
        case SDL_GAMEPAD_BUTTON_DPAD_LEFT:
            return (lang == 1) ? "D-Pad Left ◀" : "Cruceta Izquierda ◀";
        case SDL_GAMEPAD_BUTTON_DPAD_RIGHT:
            return (lang == 1) ? "D-Pad Right ▶" : "Cruceta Derecha ▶";
        case 20:
            return "LT / L2 / ZL (Gatillo Izq)";
        case 21:
            return "RT / R2 / ZR (Gatillo Der)";
        default:
            return (lang == 1) ? "(Unassigned)" : "(Sin asignar)";
    }
}

} // extern "C"

void QueueTouchCameraDelta(float dx, float dy) {
    const double sensitivity = mh3_mouse_look_sensitivity::GetSensitivity();
    int32_t adjX = int32_t(std::clamp(-double(dx) * sensitivity * 1.5, -512.0, 512.0));
    int32_t adjY = int32_t(std::clamp(double(dy) * sensitivity * 1.5, -512.0, 512.0));
    QueueMouseDelta(pendingMouseLookX, adjX);
    QueueMouseDelta(pendingMouseLookY, adjY);
}

namespace {

// MH3_INPUT=[file=PATH][,record=PATH][,playback=PATH][,camera=N]: scripted controller
// input. file: a one-sample control file, read every frame, replaces the host
// controller. record and playback: frame-indexed input logs for repeatable
// runs; each line is "frame buttons(hex) lx ly rx ry", the sample in effect
// from that paced frame on. record writes one line per change of the host
// input; playback replaces the host input with a log. camera=N[:D]
// (development builds): the field camera looks at monster N, from D units
// away (field_camera.cpp).
const DevOptions& InputOptions() {
    static const DevOptions options("MH3_INPUT", {"file", "record", "playback", "camera"});
    return options;
}

bool SameInput(const ClassicControllerSample& a, const ClassicControllerSample& b) {
    return a.buttons == b.buttons && a.leftX == b.leftX && a.leftY == b.leftY && a.rightX == b.rightX && a.rightY == b.rightY;
}

void RecordInput(const ClassicControllerSample& sample) {
    static const char* path = InputOptions().Value("record");

    if (!path)
        return;

    static std::ofstream log(path);
    static std::optional<ClassicControllerSample> last;

    if (last && SameInput(*last, sample))
        return;

    last = sample;
    log << inputFrame << ' ' << std::hex << sample.buttons << std::dec << ' ' << sample.leftX << ' ' << sample.leftY << ' ' << sample.rightX << ' ' << sample.rightY << std::endl;
}

std::optional<ClassicControllerSample> PlaybackInput() {
    static const char* path = InputOptions().Value("playback");

    if (!path)
        return std::nullopt;

    struct Entry {
        uint64_t frame;
        ClassicControllerSample sample;
    };

    static const std::vector<Entry> entries = [] {
        std::vector<Entry> result;
        std::ifstream input(path);
        uint64_t frame;
        unsigned buttons;
        int lx, ly, rx, ry;

        while (input >> frame >> std::hex >> buttons >> std::dec >> lx >> ly >> rx >> ry) {
            if (!result.empty() && frame < result.back().frame)
                MH3_THROW(std::runtime_error("MH3_INPUT playback frames must not decrease"));

            result.push_back({frame, {true, uint16_t(buttons), int16_t(lx), int16_t(ly), int16_t(rx), int16_t(ry)}});
        }

        if (!input.eof() || result.empty())
            MH3_THROW(std::runtime_error("Invalid MH3_INPUT playback log"));

        return result;
    }();
    static size_t next = 0;

    // While held (the village shortcut still navigating), the log does not
    // reach its next entry; it resumes from there, later by the time held.
    static uint64_t delay = 0;
    uint64_t frame = inputFrame - delay;

    if (playbackHeld && next < entries.size() && entries[next].frame != 0 && entries[next].frame <= frame) {
        delay += frame - (entries[next].frame - 1);
        frame = entries[next].frame - 1;
    }

    static uint64_t reportedDelay = 0;

    if (!playbackHeld && delay != reportedDelay) {
        std::fprintf(stderr, "MH3 input playback: held %llu frames for the village shortcut\n", (unsigned long long)(delay - reportedDelay));
        reportedDelay = delay;
    }
    while (next < entries.size() && entries[next].frame <= frame)
        ++next;

    if (next == entries.size()) {
        static bool reported = false;

        if (!reported)
            std::fprintf(stderr, "MH3 input playback: finished at frame %llu\n", (unsigned long long)frame);

        reported = true;
    }

    if (next == 0)
        return ClassicControllerSample{true};

    return entries[next - 1].sample;
}
} // namespace

int32_t TakeMouseLookXDelta() {
    return pendingMouseLookX.exchange(0, std::memory_order_relaxed);
}

int32_t TakeMouseLookYDelta() {
    return pendingMouseLookY.exchange(0, std::memory_order_relaxed);
}

#ifdef MH3_DEVELOPMENT
int DebugCameraMonster(float* distance) {
    static float eyeDistance = 0.0f;
    static const int monster = [] {
        const char* value = InputOptions().Value("camera");

        if (!value)
            return -1;

        if (const char* colon = std::strchr(value, ':'))
            eyeDistance = float(std::atof(colon + 1));

        return std::atoi(value);
    }();

    if (distance)
        *distance = eyeDistance;

    return monster;
}
#endif

void SetControllerTestSample(std::optional<ClassicControllerSample> sample) {
    testSample = sample;
}

void SetInputFrame(uint64_t frame) {
    inputFrame = frame;
}

void HoldInputPlayback(bool hold) {
    playbackHeld = hold;
}

ClassicControllerSample ReadHostController() {
    if (testSample)
        return *testSample;

    if (auto played = PlaybackInput()) {
        RecordInput(*played);
        return *played;
    }

    const ClassicControllerSample sample = ReadLiveController();
    RecordInput(sample);
    return sample;
}

ClassicControllerSample ReadLiveController() {
    ClassicControllerSample sample;

    if (const char* path = InputOptions().Value("file")) {
        // Explicit diagnostic controller; the normal source is SDL. This lets
        // unattended runs exercise the same guest input path while macOS is locked.
        std::ifstream input(path);
        unsigned buttons;
        int lx, ly, rx, ry;

        if (!(input >> std::hex >> buttons >> std::dec >> lx >> ly >> rx >> ry) || buttons > 0xFFFF || lx < -512 || lx > 511 || ly < -512 || ly > 511 || rx < -512 || rx > 511 || ry < -512 || ry > 511)
            MH3_THROW(std::runtime_error("Invalid MH3_INPUT file: expected hex buttons and four signed axes (-512..511)"));

        sample = {true, uint16_t(buttons), int16_t(lx), int16_t(ly), int16_t(rx), int16_t(ry)};
        return sample;
    }
#if defined(__vita__)
    (void)sample;
    return ReadVitaController();
#elif defined(MH3_HAS_AURORA)
    // The keyboard and the first SDL gamepad, as the Classic Controller on
    // channel 0 (docs/optimizations/system/controller-input.md, docs/vita-controls.md).
    sample.connected = true;

    if (!SDL_WasInit(SDL_INIT_VIDEO))
        return sample;

    if (!SDL_WasInit(SDL_INIT_GAMEPAD) && !SDL_InitSubSystem(SDL_INIT_GAMEPAD))
        MH3_THROW(std::runtime_error(std::string("SDL controller initialization: ") + SDL_GetError()));

    SDL_Window* focusedWindow = SDL_GetKeyboardFocus();
    float mouseDeltaX = 0.0f, mouseDeltaY = 0.0f;
    SDL_MouseButtonFlags mouseButtons = 0;
    static SDL_Window* relativeModeWindow = nullptr;
    static bool relativeModeUnavailable = false;
    static bool haveFallbackMousePosition = false;
    static float fallbackMouseX = 0.0f, fallbackMouseY = 0.0f;

    if (TouchControls_IsMenuOpen()) {
#if !defined(__ANDROID__)
        if (focusedWindow) {
            if (SDL_GetWindowRelativeMouseMode(focusedWindow)) {
                SDL_SetWindowRelativeMouseMode(focusedWindow, false);
            }
            SDL_ShowCursor();
            haveFallbackMousePosition = false;
        }
#endif
        return sample;
    }

#if !defined(__ANDROID__)
    if (focusedWindow) {

        if (relativeModeWindow != focusedWindow) {
            relativeModeWindow = focusedWindow;
            relativeModeUnavailable = false;
            haveFallbackMousePosition = false;
        }

        if (!relativeModeUnavailable && !SDL_GetWindowRelativeMouseMode(focusedWindow) &&
            !SDL_SetWindowRelativeMouseMode(focusedWindow, true)) {
            relativeModeUnavailable = true;
            std::fprintf(stderr, "MH3: SDL relative mouse mode failed; using cursor deltas: %s\n", SDL_GetError());
        }

        if (!relativeModeUnavailable && SDL_GetWindowRelativeMouseMode(focusedWindow)) {
            mouseButtons = SDL_GetRelativeMouseState(&mouseDeltaX, &mouseDeltaY);
            haveFallbackMousePosition = false;
        } else {
            // Fallback for hosts where SDL cannot enable relative mode. It works inside the window;
            // relative mode remains preferred because it has no edge limit.
            float x = 0.0f, y = 0.0f;
            mouseButtons = SDL_GetMouseState(&x, &y);
            if (haveFallbackMousePosition) {
                mouseDeltaX = x - fallbackMouseX;
                mouseDeltaY = y - fallbackMouseY;
            }
            fallbackMouseX = x;
            fallbackMouseY = y;
            haveFallbackMousePosition = true;
        }
    } else {
        // Drain stale movement while the game window is not focused.
        (void)SDL_GetRelativeMouseState(nullptr, nullptr);
        haveFallbackMousePosition = false;
        relativeModeWindow = nullptr;
        relativeModeUnavailable = false;
    }
#endif

    const bool* keys = SDL_GetKeyboardState(nullptr);

    if (focusedWindow && !AndroidKeyboard_IsActive()) {
        static const struct {
            SDL_Scancode key;
            uint16_t button;
        } bindings[] = {
            {SDL_SCANCODE_F, MH3_CL_A},           {SDL_SCANCODE_SPACE, MH3_CL_B},    {SDL_SCANCODE_BACKSPACE, MH3_CL_B},
            {SDL_SCANCODE_E, MH3_CL_Y},            {SDL_SCANCODE_Q, MH3_CL_L},        {SDL_SCANCODE_LSHIFT, MH3_CL_R},
            {SDL_SCANCODE_RSHIFT, MH3_CL_R},       {SDL_SCANCODE_R, MH3_CL_R},       {SDL_SCANCODE_Z, MH3_CL_ZL},
            {SDL_SCANCODE_C, MH3_CL_ZR},           {SDL_SCANCODE_RETURN, MH3_CL_PLUS}, {SDL_SCANCODE_TAB, MH3_CL_MINUS},
            {SDL_SCANCODE_ESCAPE, MH3_CL_PLUS},    {SDL_SCANCODE_HOME, MH3_CL_PLUS}, {SDL_SCANCODE_UP, MH3_CL_UP},
            {SDL_SCANCODE_DOWN, MH3_CL_DOWN},      {SDL_SCANCODE_LEFT, MH3_CL_LEFT}, {SDL_SCANCODE_RIGHT, MH3_CL_RIGHT},
        };

        for (const auto& binding : bindings)
            if (keys[binding.key])
                sample.buttons |= binding.button;
#if !defined(__ANDROID__)
        if (mouseButtons & SDL_BUTTON_MASK(SDL_BUTTON_RIGHT))
            sample.buttons |= MH3_CL_A;
        if (mouseButtons & SDL_BUTTON_MASK(SDL_BUTTON_LEFT))
            sample.buttons |= MH3_CL_X;
        if (mouseButtons & SDL_BUTTON_MASK(SDL_BUTTON_MIDDLE))
            sample.buttons |= MH3_CL_R;
#endif

        sample.leftX = int16_t((int(keys[SDL_SCANCODE_D]) - int(keys[SDL_SCANCODE_A])) * 511);
        sample.leftY = int16_t((int(keys[SDL_SCANCODE_W]) - int(keys[SDL_SCANCODE_S])) * 511);
        // The mouse controls yaw/pitch through relative deltas, not a held virtual stick.
    }

    SDL_Gamepad* pad = GetActiveGamepad();
// MH3_MOUSE_LOOK_TUNE: sensibilidad configurable desde Opciones > Controles.
    static double mh3MouseLookRemainderX = 0.0;
    static double mh3MouseLookRemainderY = 0.0;
const double mh3MouseLookSensitivity = mh3_mouse_look_sensitivity::GetSensitivity();
    if (focusedWindow) {
        if (PointerControls::IsActive()) {
            PointerControls::AddDelta(float(mouseDeltaX), float(mouseDeltaY));
            pendingMouseLookX.store(0, std::memory_order_relaxed);
            pendingMouseLookY.store(0, std::memory_order_relaxed);
            mh3MouseLookRemainderX = 0.0;
            mh3MouseLookRemainderY = 0.0;
        } else {
            // SDL suma X hacia la derecha e Y hacia abajo; invertimos ambos para la camara.
            mh3MouseLookRemainderX -= std::clamp(double(mouseDeltaX), -512.0, 512.0) * mh3MouseLookSensitivity;
            mh3MouseLookRemainderY += std::clamp(double(mouseDeltaY), -512.0, 512.0) * mh3MouseLookSensitivity;
            const int32_t adjustedMouseX = int32_t(std::trunc(mh3MouseLookRemainderX));
            const int32_t adjustedMouseY = int32_t(std::trunc(mh3MouseLookRemainderY));
            mh3MouseLookRemainderX -= double(adjustedMouseX);
            mh3MouseLookRemainderY -= double(adjustedMouseY);
            QueueMouseDelta(pendingMouseLookX, std::clamp<int32_t>(adjustedMouseX, -512, 512));
            QueueMouseDelta(pendingMouseLookY, std::clamp<int32_t>(adjustedMouseY, -512, 512));
        }
    } else {
        pendingMouseLookX.store(0, std::memory_order_relaxed);
        pendingMouseLookY.store(0, std::memory_order_relaxed);
        mh3MouseLookRemainderX = 0.0;
        mh3MouseLookRemainderY = 0.0;
    }

    if (pad) {
        Gamepad_LoadConfig();

        static const uint16_t s_actionMasks[14] = {
            MH3_CL_A,      // 0: A
            MH3_CL_B,      // 1: B
            MH3_CL_X,      // 2: X
            MH3_CL_Y,      // 3: Y
            MH3_CL_L,      // 4: L
            MH3_CL_R,      // 5: R
            MH3_CL_ZL,     // 6: ZL
            MH3_CL_ZR,     // 7: ZR
            MH3_CL_UP,     // 8: UP
            MH3_CL_DOWN,   // 9: DOWN
            MH3_CL_LEFT,   // 10: LEFT
            MH3_CL_RIGHT,  // 11: RIGHT
            MH3_CL_MINUS,  // 12: MINUS
            MH3_CL_PLUS,   // 13: PLUS
        };

        const auto axis = [&](SDL_GamepadAxis source) {
            return std::clamp(SDL_GetGamepadAxis(pad, source) / 32767.0f, -1.0f, 1.0f);
        };

        for (int i = 0; i < 14; ++i) {
            int code = g_gamepadBindings[i];
            if (code < 0) continue;
            bool pressed = false;
            if (code >= 0 && code < SDL_GAMEPAD_BUTTON_COUNT) {
                pressed = SDL_GetGamepadButton(pad, (SDL_GamepadButton)code);
            } else if (code == 20) {
                pressed = (axis(SDL_GAMEPAD_AXIS_LEFT_TRIGGER) > 0.5f);
            } else if (code == 21) {
                pressed = (axis(SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) > 0.5f);
            }
            if (pressed) {
                sample.buttons |= s_actionMasks[i];
            }
        }

        if (SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_GUIDE)) {
            sample.buttons |= MH3_CL_PLUS; // Guide acts as Pause/Menu
        }

        // SDL's y axes point down; the Classic report's point up.
        if (!sample.leftX && !sample.leftY)
            mh3_classic_stick(axis(SDL_GAMEPAD_AXIS_LEFTX), -axis(SDL_GAMEPAD_AXIS_LEFTY), &mh3_gamepad_stick_curve, &sample.leftX, &sample.leftY);

        if (!sample.rightX && !sample.rightY)
            mh3_classic_stick(axis(SDL_GAMEPAD_AXIS_RIGHTX), -axis(SDL_GAMEPAD_AXIS_RIGHTY), &mh3_gamepad_stick_curve, &sample.rightX, &sample.rightY);

        const uint8_t lowerLeftTrigger = uint8_t(std::lround(std::max(0.0f, axis(SDL_GAMEPAD_AXIS_LEFT_TRIGGER)) * 255));
        const uint8_t lowerRightTrigger = uint8_t(std::lround(std::max(0.0f, axis(SDL_GAMEPAD_AXIS_RIGHT_TRIGGER)) * 255));

        // Digital L/R trigger reports full analog throw
        if (sample.buttons & MH3_CL_L)
            sample.triggerL = 255;
        else if (g_gamepadBindings[4] == 20 && lowerLeftTrigger > 127)
            sample.triggerL = lowerLeftTrigger;

        if (sample.buttons & MH3_CL_R)
            sample.triggerR = 255;
        else if (g_gamepadBindings[5] == 21 && lowerRightTrigger > 127)
            sample.triggerR = lowerRightTrigger;
    }

    // Digital L/R inputs (keyboard, mouse or shoulder) report a full press.
    if (sample.buttons & MH3_CL_L)
        sample.triggerL = 255;

    if (sample.buttons & MH3_CL_R)
        sample.triggerR = 255;
#endif
    TouchControls_UpdateSample(&sample.buttons, &sample.leftX, &sample.leftY,
                               &sample.rightX, &sample.rightY,
                               &sample.triggerL, &sample.triggerR);
    return sample;
}
