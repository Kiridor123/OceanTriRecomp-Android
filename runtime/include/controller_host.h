#pragma once
#include <cstdint>
#include <optional>
struct CpuContext;
struct ClassicControllerSample {
    bool connected = false;
    uint16_t buttons = 0;
    int16_t leftX = 0, leftY = 0, rightX = 0, rightY = 0;
    uint8_t triggerL = 0, triggerR = 0;
};

// The host input as the game sees it (after MH3_INPUT playback / record).
ClassicControllerSample ReadHostController();

// The frame index of the input logs (the frame pacer's frame count).
void SetInputFrame(uint64_t frame);

// Holds MH3_INPUT playback before its next entry (while the village shortcut drives input).
void HoldInputPlayback(bool hold);
#ifdef MH3_DEVELOPMENT
// MH3_INPUT=camera=N[:D]: the monster the field camera looks at, or -1, and
// the eye's distance from it (0: the game's eye).
int DebugCameraMonster(float* distance = nullptr);
#endif

// The live controls: SDL keyboard/gamepad on Linux, the Vita's pad on the
// Vita; MH3_INPUT=file= replaces them.
ClassicControllerSample ReadLiveController();

// Relative mouse deltas collected by the SDL host; camera input consumes each axis once.
int32_t TakeMouseLookXDelta();
int32_t TakeMouseLookYDelta();
#ifdef __vita__
// sceCtrl through mh3_vita_pad_to_classic (runtime/vita/vita_controller.cpp).
ClassicControllerSample ReadVitaController();
#endif
void SetControllerTestSample(std::optional<ClassicControllerSample> sample);
void ServiceHostController(CpuContext* cpu, bool force = false);
void RunControllerSelfTests(CpuContext* cpu);

extern "C" {
int Gamepad_GetLayout();
void Gamepad_SetLayout(int layout);
bool Gamepad_GetSwapTriggers();
void Gamepad_SetSwapTriggers(bool swap);
void Gamepad_SaveConfig();
void Gamepad_LoadConfig();
}
