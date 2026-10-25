#include "android_keyboard.h"
#include "abi_bridge.h"
#include "guest_call.h"
#include "memory.h"
#include "touch_controls.h"

#include <SDL3/SDL.h>
#include <string>
#include <vector>
#include <mutex>
#include <algorithm>
#include <atomic>

#if defined(__ANDROID__)
#include <android/log.h>
#define KEYBOARD_LOG(...) __android_log_print(ANDROID_LOG_INFO, "MH3_KEYBOARD", __VA_ARGS__)
#else
#include <cstdio>
#define KEYBOARD_LOG(...) std::printf(__VA_ARGS__)
#endif

extern "C" struct SDL_Window* aurora_get_window(void);

namespace {

struct KeyAction {
    enum class Type {
        Text,
        Backspace,
        Return,
        Escape
    } type;
    std::string text;
};

static std::mutex s_inputMutex;
static std::vector<KeyAction> s_pendingActions;
static std::atomic<bool> s_imeRequested{false};
static bool s_wasActiveLastFrame = false;

constexpr uint32_t kSdaBase            = 0x8079B2E0u;
constexpr uint32_t kLayoutPtrAddr      = kSdaBase - 16588u; // 0x80797214
constexpr uint32_t kKeyboardActiveFlag = kSdaBase - 16516u; // 0x8079725C
constexpr uint32_t kCloseConfirmAddr   = kSdaBase - 16520u; // 0x80797258
constexpr uint32_t kStateStructPtrAddr = kSdaBase - 16528u; // 0x80797250
constexpr uint32_t kTextBufferPtrAddr  = kSdaBase - 16536u; // 0x80797248
constexpr uint32_t kConfirmFlagAddr    = kSdaBase - 16590u; // 0x80797212
constexpr uint32_t kCloseDelayAddr     = kSdaBase - 16591u; // 0x80797211
constexpr uint32_t kMaxCharsAddr       = kSdaBase - 20980u; // 0x807960EC
constexpr uint32_t kWcharWorkBufAddr   = 0x806F0000u - 29944u; // 0x806E8B08

constexpr uint32_t kFuncCancelLayout   = 0x8044C868u;

void AppendUtf8AsUcs2(const std::string& utf8, std::vector<uint16_t>& out, uint32_t max_len) {
    size_t i = 0;
    while (i < utf8.size() && out.size() < max_len) {
        const uint8_t c0 = static_cast<uint8_t>(utf8[i]);
        uint32_t cp = 0;
        if (c0 < 0x80u) {
            cp = c0;
            i += 1;
        } else if ((c0 & 0xE0u) == 0xC0u && i + 1 < utf8.size()) {
            const uint8_t c1 = static_cast<uint8_t>(utf8[i + 1]);
            cp = ((c0 & 0x1Fu) << 6) | (c1 & 0x3Fu);
            i += 2;
        } else if ((c0 & 0xF0u) == 0xE0u && i + 2 < utf8.size()) {
            const uint8_t c1 = static_cast<uint8_t>(utf8[i + 1]);
            const uint8_t c2 = static_cast<uint8_t>(utf8[i + 2]);
            cp = ((c0 & 0x0Fu) << 12) | ((c1 & 0x3Fu) << 6) | (c2 & 0x3Fu);
            i += 3;
        } else if ((c0 & 0xF8u) == 0xF0u && i + 3 < utf8.size()) {
            i += 4;
            continue;
        } else {
            i += 1;
            continue;
        }
        if (cp >= 32u && cp <= 0xFFFFu) {
            out.push_back(static_cast<uint16_t>(cp));
        }
    }
}

} // namespace

extern "C" {

bool AndroidKeyboard_ShouldBeActive(void) {
    return Memory::Contains(kKeyboardActiveFlag, 4) && (Memory::Read32(kKeyboardActiveFlag) != 0);
}

bool AndroidKeyboard_IsActive(void) {
    return AndroidKeyboard_ShouldBeActive();
}

bool AndroidKeyboard_IsImeShowing(void) {
    if (!AndroidKeyboard_ShouldBeActive()) {
        return false;
    }
    if (SDL_Window* win = aurora_get_window()) {
        return SDL_ScreenKeyboardShown(win);
    }
    return false;
}

void AndroidKeyboard_Show(bool force) {
    if (!AndroidKeyboard_ShouldBeActive()) {
        return;
    }
    if (SDL_Window* win = aurora_get_window()) {
        int w = 0, h = 0;
        SDL_GetWindowSize(win, &w, &h);
        if (w > 0 && h > 0) {
            SDL_Rect r = { w / 5, h / 8, (w * 3) / 5, h / 6 };
            SDL_SetTextInputArea(win, &r, 0);
        }
        if (force && SDL_TextInputActive(win)) {
            SDL_StopTextInput(win);
        }
        SDL_StartTextInput(win);
        s_imeRequested.store(true);
        KEYBOARD_LOG("[KEYBOARD] Android IME summoned (force=%d, win=%dx%d)\n", force ? 1 : 0, w, h);
    }
}

void AndroidKeyboard_Hide(void) {
    s_imeRequested.store(false);
    if (SDL_Window* win = aurora_get_window()) {
        if (SDL_TextInputActive(win)) {
            SDL_StopTextInput(win);
            KEYBOARD_LOG("[KEYBOARD] Android IME hidden\n");
        }
    }
}

bool AndroidKeyboard_HandleSdlEvent(const void* sdlEvent) {
    if (!sdlEvent || !AndroidKeyboard_ShouldBeActive()) {
        return false;
    }

    const SDL_Event* event = reinterpret_cast<const SDL_Event*>(sdlEvent);

    // When returning from background or gaining focus, restore the soft keyboard
    if (event->type == SDL_EVENT_WINDOW_FOCUS_GAINED ||
        event->type == SDL_EVENT_DID_ENTER_FOREGROUND ||
        event->type == SDL_EVENT_WINDOW_RESTORED) {
        AndroidKeyboard_Show(true);
        return false;
    }

    if (event->type == SDL_EVENT_TEXT_INPUT) {
        if (event->text.text && event->text.text[0] != '\0') {
            KEYBOARD_LOG("[KEYBOARD] SDL_EVENT_TEXT_INPUT: '%s' (0x%02X)\n",
                         event->text.text, static_cast<unsigned char>(event->text.text[0]));

            // Catch control codes transmitted as text
            const unsigned char firstChar = static_cast<unsigned char>(event->text.text[0]);
            if (firstChar == '\b' || firstChar == 8 || firstChar == 127) {
                std::lock_guard<std::mutex> lock(s_inputMutex);
                s_pendingActions.push_back({ KeyAction::Type::Backspace, "" });
                return true;
            } else if (firstChar == '\n' || firstChar == '\r') {
                std::lock_guard<std::mutex> lock(s_inputMutex);
                s_pendingActions.push_back({ KeyAction::Type::Return, "" });
                return true;
            }

            std::lock_guard<std::mutex> lock(s_inputMutex);
            s_pendingActions.push_back({ KeyAction::Type::Text, event->text.text });
            return true;
        }
    } else if (event->type == SDL_EVENT_KEY_DOWN) {
        const auto key = event->key.key;
        const auto scancode = event->key.scancode;

        if (key == SDLK_BACKSPACE || key == '\b' || key == 8 || key == 127 || key == SDLK_DELETE ||
            scancode == SDL_SCANCODE_BACKSPACE || scancode == SDL_SCANCODE_DELETE) {
            KEYBOARD_LOG("[KEYBOARD] Key: Backspace (key=%u, scancode=%u)\n",
                         static_cast<unsigned>(key), static_cast<unsigned>(scancode));
            std::lock_guard<std::mutex> lock(s_inputMutex);
            s_pendingActions.push_back({ KeyAction::Type::Backspace, "" });
            return true;
        } else if (key == SDLK_RETURN || key == SDLK_KP_ENTER || key == '\r' || key == '\n' ||
                   scancode == SDL_SCANCODE_RETURN || scancode == SDL_SCANCODE_KP_ENTER) {
            KEYBOARD_LOG("[KEYBOARD] Key: Return (Confirm)\n");
            std::lock_guard<std::mutex> lock(s_inputMutex);
            s_pendingActions.push_back({ KeyAction::Type::Return, "" });
            return true;
        } else if (key == SDLK_ESCAPE || key == SDLK_AC_BACK || scancode == SDL_SCANCODE_ESCAPE) {
            // If soft keyboard is currently open on screen, Back only closes the keyboard
            if (SDL_Window* win = aurora_get_window()) {
                if (SDL_ScreenKeyboardShown(win)) {
                    KEYBOARD_LOG("[KEYBOARD] Back pressed while IME showing: dismissing IME only\n");
                    SDL_StopTextInput(win);
                    return true;
                }
            }
            KEYBOARD_LOG("[KEYBOARD] Key: Escape / Back (Cancel dialog)\n");
            std::lock_guard<std::mutex> lock(s_inputMutex);
            s_pendingActions.push_back({ KeyAction::Type::Escape, "" });
            return true;
        }
    }

    return false;
}

void AndroidKeyboard_UpdatePerFrame(void) {
    const bool active = AndroidKeyboard_ShouldBeActive();
    if (active && !s_wasActiveLastFrame) {
        // Just entered keyboard dialog: summon soft keyboard
        uint32_t layout_ptr = Memory::Contains(kLayoutPtrAddr, 4) ? Memory::Read32(kLayoutPtrAddr) : 0;
        if (layout_ptr && Memory::Contains(layout_ptr, 4)) {
            AndroidKeyboard_Show(true);
        }
    } else if (!active && s_wasActiveLastFrame) {
        // Exited keyboard dialog: ensure soft keyboard is dismissed
        AndroidKeyboard_Hide();
    }
    s_wasActiveLastFrame = active;
}

void AndroidKeyboard_OnScreenTouch(void) {
    if (AndroidKeyboard_ShouldBeActive()) {
        AndroidKeyboard_Show(true);
    }
}

void AndroidKeyboard_ProcessPending(CpuContext* cpu) {
    if (!cpu || !AndroidKeyboard_ShouldBeActive()) {
        return;
    }

    const uint32_t layout_ptr = Memory::Contains(kLayoutPtrAddr, 4) ? Memory::Read32(kLayoutPtrAddr) : 0;
    if (!layout_ptr || !Memory::Contains(layout_ptr, 64)) {
        return;
    }

    const uint32_t sub_obj = Memory::Read32(layout_ptr + 28);
    if (!sub_obj || !Memory::Contains(sub_obj, 6620)) {
        return;
    }

    std::vector<KeyAction> actions;
    {
        std::lock_guard<std::mutex> lock(s_inputMutex);
        if (s_pendingActions.empty()) {
            return;
        }
        actions.swap(s_pendingActions);
    }

    // Save caller volatile CPU registers across guest virtual calls
    GuestFrame frame(cpu, 0x40);
    const uint32_t saved_lr  = cpu->lr;
    const uint32_t saved_ctr = cpu->ctr;
    const uint32_t saved_xer = cpu->xer;
    PPC_FPR saved_fpr[14];
    for (int i = 0; i < 14; ++i) {
        saved_fpr[i] = cpu->fpr[i];
    }

    GuestCall call{cpu};

    // Read current live UTF-16BE string from the keyboard widget (vtable + 36 = func_8055E370)
    const uint32_t live_wchar_ptr = call.Virtual(layout_ptr, 36);
    std::vector<uint16_t> chars;
    if (live_wchar_ptr && Memory::Contains(live_wchar_ptr, 2)) {
        for (uint32_t i = 0; i < 256; ++i) {
            const uint32_t addr = live_wchar_ptr + i * 2u;
            if (!Memory::Contains(addr, 2)) {
                break;
            }
            const uint16_t ch = Memory::Read16(addr);
            if (ch == 0) {
                break;
            }
            chars.push_back(ch);
        }
    }

    // Determine field maximum capacity from kMaxCharsAddr (r13 - 20980 = 0x807960EC)
    uint32_t max_len = Memory::Contains(kMaxCharsAddr, 4) ? Memory::Read32(kMaxCharsAddr) : 0;
    if (max_len == 0 || max_len > 256) {
        max_len = 60;
    }

    bool text_changed = false;
    bool request_confirm = false;
    bool request_cancel = false;

    for (const auto& action : actions) {
        if (action.type == KeyAction::Type::Text) {
            const size_t before = chars.size();
            AppendUtf8AsUcs2(action.text, chars, max_len);
            if (chars.size() != before) {
                text_changed = true;
            }
        } else if (action.type == KeyAction::Type::Backspace) {
            if (!chars.empty()) {
                chars.pop_back();
                text_changed = true;
            }
        } else if (action.type == KeyAction::Type::Return) {
            request_confirm = true;
        } else if (action.type == KeyAction::Type::Escape) {
            request_cancel = true;
        }
    }

    if (text_changed) {
        // Write UTF-16BE string + null terminator into the game's 1024-byte wchar_t scratch buffer (0x806E8B08)
        const size_t write_count = std::min<size_t>(chars.size(), 510);
        for (size_t i = 0; i < write_count; ++i) {
            Memory::Write16(kWcharWorkBufAddr + static_cast<uint32_t>(i * 2), chars[i]);
        }
        Memory::Write16(kWcharWorkBufAddr + static_cast<uint32_t>(write_count * 2), 0);

        // Exact update sequence from func_8044CD0C:
        // 1. Clear composition/selection state on sub_obj (func_8054D5A0)
        Memory::Write8(sub_obj + 6596 + 16, 0);
        Memory::Write8(sub_obj + 6596 + 17, 0);
        Memory::Write32(sub_obj + 6596 + 20, 0);

        // 2. Call vtable + 40 on layout_ptr (func_8055E384 -> func_80546E3C) to set string and move cursor to end
        call.Virtual(layout_ptr, 40, {kWcharWorkBufAddr});

        // 3. Mark sub_obj text dirty (offset 6536 = 1)
        const uint32_t sub_obj_after = Memory::Read32(layout_ptr + 28);
        if (sub_obj_after && Memory::Contains(sub_obj_after + 6536, 4)) {
            Memory::Write32(sub_obj_after + 6536, 1);
        }

        KEYBOARD_LOG("[KEYBOARD] Text updated: len=%zu, max=%u\n", write_count, max_len);
    }

    if (request_confirm) {
        KEYBOARD_LOG("[KEYBOARD] Confirming text input into game\n");
        // Native confirm sequence from func_8044B798 (loc_8044C30C):
        // Trigger closing animation on grid sub-object (vtable + 136 -> vtable + 232)
        // and set kConfirmFlagAddr (r13 - 16590 = 1) so func_8044A3C4 copies out the string and closes
        const uint32_t grid_obj = call.Virtual(layout_ptr, 136);
        if (grid_obj && Memory::Contains(grid_obj, 4)) {
            call.Virtual(grid_obj, 232);
        }
        Memory::Write8(kConfirmFlagAddr, 1);
        const uint32_t state_ptr = Memory::Contains(kStateStructPtrAddr, 4) ? Memory::Read32(kStateStructPtrAddr) : 0;
        if (state_ptr && Memory::Contains(state_ptr + 14, 1)) {
            Memory::Write8(state_ptr + 14, 0);
        }
        AndroidKeyboard_Hide();
    } else if (request_cancel) {
        KEYBOARD_LOG("[KEYBOARD] Canceling text input\n");
        call(kFuncCancelLayout);
        AndroidKeyboard_Hide();
    }

    for (int i = 0; i < 14; ++i) {
        cpu->fpr[i] = saved_fpr[i];
    }
    cpu->lr  = saved_lr;
    cpu->ctr = saved_ctr;
    cpu->xer = saved_xer;
}

} // extern "C"
