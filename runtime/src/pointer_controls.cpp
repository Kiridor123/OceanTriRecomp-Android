#include "pointer_controls.h"
#include "memory.h"

#include <atomic>
#include <algorithm>
#include <cmath>

namespace {

std::atomic<bool> s_touchActive{false};
std::atomic<bool> s_touchHoldingB{false};
std::atomic<float> s_touchGameX{427.0f};
std::atomic<float> s_touchGameY{224.0f};

std::atomic<float> s_rightStickX{0.0f};
std::atomic<float> s_rightStickY{0.0f};

std::atomic<float> s_mouseDeltaX{0.0f};
std::atomic<float> s_mouseDeltaY{0.0f};

float s_cursorX = -1.0f;
float s_cursorY = -1.0f;

} // namespace

namespace PointerControls {

void UpdatePointerCursor(uint32_t ptr) {
    if (!Memory::Contains(ptr, 56)) return;

    // Canvas size in game coordinates
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

    uint8_t isActive = Memory::Read8(ptr + 1);

    if (isActive == 0) {
        // First frame the pointer is opening
        Memory::Write8(ptr + 35, 1);      // tracking valid
        Memory::Write16(ptr + 54, -16);   // accel

        int16_t initX = static_cast<int16_t>(screen_w * 0.5f);
        int16_t initY = static_cast<int16_t>(screen_h * 0.5f);

        if (s_touchActive.load(std::memory_order_relaxed)) {
            float tx = s_touchGameX.load(std::memory_order_relaxed);
            float ty = s_touchGameY.load(std::memory_order_relaxed);
            initX = static_cast<int16_t>(std::clamp(tx, 0.0f, screen_w));
            initY = static_cast<int16_t>(std::clamp(ty, 0.0f, screen_h));
        }

        s_cursorX = float(initX);
        s_cursorY = float(initY);

        Memory::Write16(ptr + 4, initX);
        Memory::Write16(ptr + 6, initY);
        Memory::Write16(ptr + 8, initX);
        Memory::Write16(ptr + 10, initY);
        Memory::Write16(ptr + 12, initX);
        Memory::Write16(ptr + 14, initY);
        Memory::Write16(ptr + 16, initX);
        Memory::Write16(ptr + 18, initY);
        Memory::Write16(ptr + 20, initX);
        Memory::Write16(ptr + 22, initY);
        return;
    }

    // Shift 4-stage history entries
    Memory::Write16(ptr + 20, Memory::Read16(ptr + 16));
    Memory::Write16(ptr + 22, Memory::Read16(ptr + 18));
    Memory::Write16(ptr + 16, Memory::Read16(ptr + 12));
    Memory::Write16(ptr + 18, Memory::Read16(ptr + 14));
    Memory::Write16(ptr + 12, Memory::Read16(ptr + 8));
    Memory::Write16(ptr + 14, Memory::Read16(ptr + 10));
    Memory::Write16(ptr + 8, Memory::Read16(ptr + 4));
    Memory::Write16(ptr + 10, Memory::Read16(ptr + 6));

    if (s_cursorX < 0.0f || s_cursorY < 0.0f) {
        s_cursorX = float(Memory::Read16(ptr + 4));
        s_cursorY = float(Memory::Read16(ptr + 6));
    }

    if (s_touchActive.load(std::memory_order_relaxed)) {
        // Direct finger tracking
        s_cursorX = s_touchGameX.load(std::memory_order_relaxed);
        s_cursorY = s_touchGameY.load(std::memory_order_relaxed);
    } else {
        // Gamepad Right Stick
        float rx = s_rightStickX.load(std::memory_order_relaxed);
        float ry = s_rightStickY.load(std::memory_order_relaxed);

        if (std::abs(rx) > 0.12f || std::abs(ry) > 0.12f) {
            constexpr float kMaxStickSpeed = 14.0f;
            float signX = (rx < 0.0f) ? -1.0f : 1.0f;
            float signY = (ry < 0.0f) ? -1.0f : 1.0f;
            float magX = std::min(1.0f, std::abs(rx));
            float magY = std::min(1.0f, std::abs(ry));

            float speedX = signX * std::pow(magX, 1.4f) * kMaxStickSpeed;
            float speedY = signY * std::pow(magY, 1.4f) * kMaxStickSpeed;

            s_cursorX += speedX;
            s_cursorY -= speedY; // Classic stick Y is positive UP, screen Y is positive DOWN
        }

        // Mouse / relative movement
        float mdx = s_mouseDeltaX.exchange(0.0f, std::memory_order_relaxed);
        float mdy = s_mouseDeltaY.exchange(0.0f, std::memory_order_relaxed);
        s_cursorX += mdx;
        s_cursorY += mdy;
    }

    s_cursorX = std::clamp(s_cursorX, 0.0f, screen_w);
    s_cursorY = std::clamp(s_cursorY, 0.0f, screen_h);

    int16_t finalX = static_cast<int16_t>(std::round(s_cursorX));
    int16_t finalY = static_cast<int16_t>(std::round(s_cursorY));

    Memory::Write16(ptr + 4, finalX);
    Memory::Write16(ptr + 6, finalY);
    Memory::Write8(ptr + 35, 1); // tracking valid
}

void SetTouchPosition(float gameX, float gameY) {
    s_touchGameX.store(gameX, std::memory_order_relaxed);
    s_touchGameY.store(gameY, std::memory_order_relaxed);
}

void SetTouchActive(bool active) {
    s_touchActive.store(active, std::memory_order_relaxed);
}

void SetHoldingB(bool holding) {
    s_touchHoldingB.store(holding, std::memory_order_relaxed);
}

void SetRightStick(float rx, float ry) {
    s_rightStickX.store(rx, std::memory_order_relaxed);
    s_rightStickY.store(ry, std::memory_order_relaxed);
}

void AddDelta(float dx, float dy) {
    float prevX = s_mouseDeltaX.load(std::memory_order_relaxed);
    float prevY = s_mouseDeltaY.load(std::memory_order_relaxed);
    s_mouseDeltaX.store(prevX + dx, std::memory_order_relaxed);
    s_mouseDeltaY.store(prevY + dy, std::memory_order_relaxed);
}

bool IsActive() {
    if (s_touchHoldingB.load(std::memory_order_relaxed)) return true;
    if (!Memory::Contains(0x806BFE88, 2)) return false;
    return Memory::Read8(0x806BFE89) != 0;
}

void Reset() {
    s_touchActive.store(false, std::memory_order_relaxed);
    s_touchHoldingB.store(false, std::memory_order_relaxed);
    s_rightStickX.store(0.0f, std::memory_order_relaxed);
    s_rightStickY.store(0.0f, std::memory_order_relaxed);
    s_mouseDeltaX.store(0.0f, std::memory_order_relaxed);
    s_mouseDeltaY.store(0.0f, std::memory_order_relaxed);
    s_cursorX = -1.0f;
    s_cursorY = -1.0f;
}

} // namespace PointerControls
