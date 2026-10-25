#pragma once
#include <cstdint>

struct CpuContext;

#ifdef __cplusplus
extern "C" {
#endif

// Handles SDL events (text input, backspace, enter, escape). Returns true if consumed.
bool AndroidKeyboard_HandleSdlEvent(const void* sdlEvent);

// Periodic check (called every frame from TouchControls_UpdateSample)
void AndroidKeyboard_UpdatePerFrame(void);

// Called when user touches the screen (re-shows keyboard if user dismissed it while active)
void AndroidKeyboard_OnScreenTouch(void);

// Query whether in-game keyboard dialog is active
bool AndroidKeyboard_IsActive(void);

// Query whether Android soft keyboard (IME) is actively shown on screen
bool AndroidKeyboard_IsImeShowing(void);

// Directly trigger show / hide of Android IME
void AndroidKeyboard_Show(bool force);
void AndroidKeyboard_Hide(void);

// Check if keyboard dialog should be active
bool AndroidKeyboard_ShouldBeActive(void);

// Update routine called from hooked KeyboardUpdate on the guest CPU thread
void AndroidKeyboard_ProcessPending(CpuContext* cpu);

#ifdef __cplusplus
}
#endif
