#pragma once

#include <cstdint>
#include <vector>

namespace TargetCamera {

struct MonsterTarget {
    uint32_t work = 0;       // Guest pointer to monster move work (0xB18 bytes)
    uint8_t kind = 0;        // Monster species ID (em + 3)
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    int32_t hp = 0;
    int32_t maxHp = 0;
    bool capturable = false; // True when monster HP <= MH3 species capture threshold (excludes Elder Dragons)
    const char* nameEs = "";
    const char* nameEn = "";
    uint32_t accentRgb = 0xE6B830u; // RGB accent color for HUD badge
};

bool IsEnabled();
void SetEnabled(bool enabled);

// Returns all active, alive large monsters currently in the local player's area.
std::vector<MonsterTarget> GetActiveTargets();

// Returns the guest `work` pointer of the currently focused large monster (0 if none / unfocused).
uint32_t GetFocusedWork();

// Cycle focus left (-1) or right (+1) among active large monsters.
void CycleTarget(int delta);

// Explicitly focus a specific monster work pointer (or toggle off if already focused).
void SelectOrToggleWork(uint32_t work);

// Called per-step in CameraYawInputPort to detect L + D-Pad Left/Right cycling.
void PollCycleInput();

// Called on L camera snap in CameraYawInputPort.
// Returns true if the camera was snapped toward the focused large monster,
// or false if normal SnapBehind (behind hunter) should run instead (e.g. double-tap L or no target).
bool TrySnapCamera(uint32_t camWork, uint32_t plw);

} // namespace TargetCamera
