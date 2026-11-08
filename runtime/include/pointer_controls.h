#pragma once

#include <cstdint>

namespace PointerControls {

// Performs frame cursor update for the pointer object at address `ptr`
void UpdatePointerCursor(uint32_t ptr);

// Updates the absolute cursor position mapped to the virtual game screen (e.g. 854x448)
void SetTouchPosition(float gameX, float gameY);

// Sets whether a finger is currently touching/dragging the pointer
void SetTouchActive(bool active);

// Indicates whether the virtual B button is currently held
void SetHoldingB(bool holding);

// Passes normalized right analog stick deflections (-1.0f .. 1.0f)
void SetRightStick(float rx, float ry);

// Passes relative mouse or delta movements
void AddDelta(float dx, float dy);

// Returns true if the pointer is currently active/visible in the game
bool IsActive();

// Resets internal pointer states
void Reset();

} // namespace PointerControls
