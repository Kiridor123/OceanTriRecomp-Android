#pragma once
// mh3_control_map.h - mapeo de controles editable desde Opciones > Controles.
//
// Solo cabecera (no hace falta tocar CMake). Guarda los bindings en
// MH3UI.controls, junto al ejecutable, en texto plano:
//   key <Accion> <valor> <valor> ...   teclado/raton (hasta 4 por accion)
//   pad <Accion> <valor> <valor>       mando (hasta 2 por accion)
// Valores de teclado: SDL_Scancode (1..511); raton: 1000 + SDL_BUTTON_* ;
// mando: SDL_GamepadButton (0..), o 100 + SDL_GamepadAxis para los gatillos.
// Una accion con linea vacia ("key A") queda sin asignar; una accion que no
// aparece en el archivo conserva su valor por defecto.

#if defined(MH3_HAS_AURORA)

#include <SDL3/SDL.h>

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <mutex>
#include <sstream>
#include <string>
#include <vector>

#include "../native/mh3_classic_map.h"

namespace mh3_control_map {

// Orden = orden en pantalla. Las 15 primeras son botones del Classic Controller;
// las 4 ultimas solo existen para teclado (stick izquierdo).
enum Action : int {
    kA, kB, kX, kY, kL, kR, kZL, kZR, kPlus, kMinus, kHome,
    kDpadUp, kDpadDown, kDpadLeft, kDpadRight,
    kMoveUp, kMoveDown, kMoveLeft, kMoveRight,
    kActionCount
};

constexpr int kPadActionCount = kDpadRight + 1;
constexpr int kKeySlots = 4;
constexpr int kPadSlots = 2;
constexpr int kNone = -1;
constexpr int kMouseBase = 1000;
constexpr int kAxisBase = 100;

inline const char* const kActionNames[kActionCount] = {
    "A", "B", "X", "Y", "L", "R", "ZL", "ZR", "Plus", "Minus", "Home",
    "DpadUp", "DpadDown", "DpadLeft", "DpadRight",
    "MoveUp", "MoveDown", "MoveLeft", "MoveRight",
};

struct Mapping {
    int key[kActionCount][kKeySlots];
    int pad[kPadActionCount][kPadSlots];
};

inline uint16_t ClassicBit(int action) {
    switch (action) {
    case kA: return MH3_CL_A;
    case kB: return MH3_CL_B;
    case kX: return MH3_CL_X;
    case kY: return MH3_CL_Y;
    case kL: return MH3_CL_L;
    case kR: return MH3_CL_R;
    case kZL: return MH3_CL_ZL;
    case kZR: return MH3_CL_ZR;
    case kPlus: return MH3_CL_PLUS;
    case kMinus: return MH3_CL_MINUS;
    case kHome: return MH3_CL_HOME;
    case kDpadUp: return MH3_CL_UP;
    case kDpadDown: return MH3_CL_DOWN;
    case kDpadLeft: return MH3_CL_LEFT;
    case kDpadRight: return MH3_CL_RIGHT;
    default: return 0;
    }
}

inline bool IsValidKeyValue(int v) {
    if (v >= kMouseBase) return v >= kMouseBase + SDL_BUTTON_LEFT && v <= kMouseBase + SDL_BUTTON_X2;
    return v > 0 && v < SDL_SCANCODE_COUNT;
}

inline bool IsValidPadValue(int v) {
    if (v >= kAxisBase)
        return v == kAxisBase + SDL_GAMEPAD_AXIS_LEFT_TRIGGER || v == kAxisBase + SDL_GAMEPAD_AXIS_RIGHT_TRIGGER;
    return v >= 0 && v < SDL_GAMEPAD_BUTTON_COUNT;
}

inline void AddDefaultKey(Mapping& m, int action, int value) {
    for (int& slot : m.key[action])
        if (slot == kNone) { slot = value; return; }
}

inline void AddDefaultPad(Mapping& m, int action, int value) {
    for (int& slot : m.pad[action])
        if (slot == kNone) { slot = value; return; }
}

// Exactamente lo que estaba fijo en controller_host.cpp.
inline void ResetKeyDefaults(Mapping& m, int action) {
    std::fill(std::begin(m.key[action]), std::end(m.key[action]), kNone);
    const int mouse = kMouseBase;
    switch (action) {
    case kA: AddDefaultKey(m, action, SDL_SCANCODE_F); AddDefaultKey(m, action, mouse + SDL_BUTTON_RIGHT); break;
    case kB: AddDefaultKey(m, action, SDL_SCANCODE_SPACE); AddDefaultKey(m, action, SDL_SCANCODE_BACKSPACE); break;
    case kX: AddDefaultKey(m, action, mouse + SDL_BUTTON_LEFT); break;
    case kY: AddDefaultKey(m, action, SDL_SCANCODE_E); break;
    case kL: AddDefaultKey(m, action, SDL_SCANCODE_Q); break;
    case kR:
        AddDefaultKey(m, action, SDL_SCANCODE_LSHIFT); AddDefaultKey(m, action, SDL_SCANCODE_RSHIFT);
        AddDefaultKey(m, action, SDL_SCANCODE_R); AddDefaultKey(m, action, mouse + SDL_BUTTON_MIDDLE);
        break;
    case kZL: AddDefaultKey(m, action, SDL_SCANCODE_Z); break;
    case kZR: AddDefaultKey(m, action, SDL_SCANCODE_C); break;
    case kPlus: AddDefaultKey(m, action, SDL_SCANCODE_RETURN); break;
    case kMinus: AddDefaultKey(m, action, SDL_SCANCODE_TAB); break;
    case kHome: AddDefaultKey(m, action, SDL_SCANCODE_ESCAPE); AddDefaultKey(m, action, SDL_SCANCODE_HOME); break;
    case kDpadUp: AddDefaultKey(m, action, SDL_SCANCODE_UP); break;
    case kDpadDown: AddDefaultKey(m, action, SDL_SCANCODE_DOWN); break;
    case kDpadLeft: AddDefaultKey(m, action, SDL_SCANCODE_LEFT); break;
    case kDpadRight: AddDefaultKey(m, action, SDL_SCANCODE_RIGHT); break;
    case kMoveUp: AddDefaultKey(m, action, SDL_SCANCODE_W); break;
    case kMoveDown: AddDefaultKey(m, action, SDL_SCANCODE_S); break;
    case kMoveLeft: AddDefaultKey(m, action, SDL_SCANCODE_A); break;
    case kMoveRight: AddDefaultKey(m, action, SDL_SCANCODE_D); break;
    default: break;
    }
}

inline void ResetPadDefaults(Mapping& m, int action) {
    std::fill(std::begin(m.pad[action]), std::end(m.pad[action]), kNone);
    switch (action) {
    case kA: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_EAST); break;
    case kB: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_SOUTH); break;
    case kX: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_NORTH); break;
    case kY: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_WEST); break;
    case kL: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER); break;
    case kR: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER); break;
    case kZL: AddDefaultPad(m, action, kAxisBase + SDL_GAMEPAD_AXIS_LEFT_TRIGGER); break;
    case kZR: AddDefaultPad(m, action, kAxisBase + SDL_GAMEPAD_AXIS_RIGHT_TRIGGER); break;
    case kPlus: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_START); break;
    case kMinus: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_BACK); break;
    case kHome: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_GUIDE); break;
    case kDpadUp: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_DPAD_UP); break;
    case kDpadDown: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_DPAD_DOWN); break;
    case kDpadLeft: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_DPAD_LEFT); break;
    case kDpadRight: AddDefaultPad(m, action, SDL_GAMEPAD_BUTTON_DPAD_RIGHT); break;
    default: break;
    }
}

inline Mapping Defaults() {
    Mapping m;
    for (int a = 0; a < kActionCount; ++a) ResetKeyDefaults(m, a);
    for (int a = 0; a < kPadActionCount; ++a) ResetPadDefaults(m, a);
    return m;
}

inline int FindAction(const std::string& name) {
    for (int a = 0; a < kActionCount; ++a)
        if (name == kActionNames[a]) return a;
    return -1;
}

inline std::string Serialize(const Mapping& m) {
    std::ostringstream out;
    out << "# MH3 controles v1 - se edita desde Opciones > Controles\n";
    for (int a = 0; a < kActionCount; ++a) {
        out << "key " << kActionNames[a];
        for (int v : m.key[a]) if (v != kNone) out << ' ' << v;
        out << '\n';
    }
    for (int a = 0; a < kPadActionCount; ++a) {
        out << "pad " << kActionNames[a];
        for (int v : m.pad[a]) if (v != kNone) out << ' ' << v;
        out << '\n';
    }
    return out.str();
}

// Lineas que no se entienden se ignoran; las acciones ausentes siguen en su valor actual.
inline void Parse(std::istream& in, Mapping& m) {
    std::string line;
    while (std::getline(in, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line[0] == '#') continue;
        std::istringstream words(line);
        std::string kind, name;
        if (!(words >> kind >> name)) continue;
        const int action = FindAction(name);
        if (action < 0) continue;
        if (kind == "key") {
            std::fill(std::begin(m.key[action]), std::end(m.key[action]), kNone);
            int slot = 0, v = 0;
            while (slot < kKeySlots && (words >> v))
                if (IsValidKeyValue(v)) m.key[action][slot++] = v;
        } else if (kind == "pad" && action < kPadActionCount) {
            std::fill(std::begin(m.pad[action]), std::end(m.pad[action]), kNone);
            int slot = 0, v = 0;
            while (slot < kPadSlots && (words >> v))
                if (IsValidPadValue(v)) m.pad[action][slot++] = v;
        }
    }
}

struct State {
    std::mutex mutex;
    Mapping map = Defaults();
    bool loaded = false;
};

inline State& Store() {
    static State state;
    return state;
}

inline std::string ConfigPath() {
    const char* base = SDL_GetBasePath();
    return std::string(base ? base : "") + "MH3UI.controls";
}

inline void EnsureLoadedLocked(State& s) {
    if (s.loaded) return;
    s.loaded = true;
    std::ifstream file(ConfigPath());
    if (file) Parse(file, s.map);
}

inline void SaveLocked(State& s) {
    std::ofstream file(ConfigPath(), std::ios::trunc);
    if (!file) {
        std::fprintf(stderr, "MH3 controles: no se pudo escribir %s\n", ConfigPath().c_str());
        return;
    }
    file << Serialize(s.map);
}

// Una copia por fotograma: barato, y el menu puede editar mientras tanto.
inline Mapping Snapshot() {
    State& s = Store();
    std::lock_guard<std::mutex> lock(s.mutex);
    EnsureLoadedLocked(s);
    return s.map;
}

inline std::vector<int> Bindings(bool pad, int action) {
    State& s = Store();
    std::lock_guard<std::mutex> lock(s.mutex);
    EnsureLoadedLocked(s);
    std::vector<int> result;
    if (pad) {
        if (action >= 0 && action < kPadActionCount)
            for (int v : s.map.pad[action]) if (v != kNone) result.push_back(v);
    } else if (action >= 0 && action < kActionCount) {
        for (int v : s.map.key[action]) if (v != kNone) result.push_back(v);
    }
    return result;
}

// add=false: el nuevo binding sustituye a los de la accion. add=true: se anade
// (si no hay hueco, ocupa el ultimo). El valor se quita de las demas acciones
// del mismo dispositivo para que una tecla no dispare dos cosas a la vez.
inline void SetBinding(bool pad, int action, int value, bool add) {
    State& s = Store();
    std::lock_guard<std::mutex> lock(s.mutex);
    EnsureLoadedLocked(s);
    const auto place = [&](int* row, int slots) {
        if (!add) {
            std::fill(row, row + slots, kNone);
            row[0] = value;
            return;
        }
        for (int i = 0; i < slots; ++i) if (row[i] == value) return;
        for (int i = 0; i < slots; ++i) if (row[i] == kNone) { row[i] = value; return; }
        row[slots - 1] = value;
    };
    if (pad) {
        if (action < 0 || action >= kPadActionCount || !IsValidPadValue(value)) return;
        for (int a = 0; a < kPadActionCount; ++a)
            if (a != action) for (int& v : s.map.pad[a]) if (v == value) v = kNone;
        place(s.map.pad[action], kPadSlots);
    } else {
        if (action < 0 || action >= kActionCount || !IsValidKeyValue(value)) return;
        for (int a = 0; a < kActionCount; ++a)
            if (a != action) for (int& v : s.map.key[a]) if (v == value) v = kNone;
        place(s.map.key[action], kKeySlots);
    }
    SaveLocked(s);
}

inline void ResetAction(bool pad, int action) {
    State& s = Store();
    std::lock_guard<std::mutex> lock(s.mutex);
    EnsureLoadedLocked(s);
    if (pad) {
        if (action >= 0 && action < kPadActionCount) ResetPadDefaults(s.map, action);
    } else if (action >= 0 && action < kActionCount) {
        ResetKeyDefaults(s.map, action);
    }
    SaveLocked(s);
}

inline void ResetDevice(bool pad) {
    State& s = Store();
    std::lock_guard<std::mutex> lock(s.mutex);
    EnsureLoadedLocked(s);
    if (pad) for (int a = 0; a < kPadActionCount; ++a) ResetPadDefaults(s.map, a);
    else for (int a = 0; a < kActionCount; ++a) ResetKeyDefaults(s.map, a);
    SaveLocked(s);
}

} // namespace mh3_control_map

#endif
