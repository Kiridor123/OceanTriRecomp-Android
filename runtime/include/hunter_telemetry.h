#pragma once

#include <cstdint>
#include <cstdlib>

namespace HunterTelemetry {

inline bool IsEnabled() noexcept {
    static const bool s_enabled = [] {
        const char* env = std::getenv("MH3_TELEMETRY");
        return env && (env[0] == '1');
    }();
    return s_enabled;
}

// Called every step from PlayerStepTimers (0x80260B9C) with local player's PLW
void Update(uint32_t plw);

// Log custom player actions
void LogAction(uint32_t plw, const char* actionName, float param1 = 0.0f, float param2 = 0.0f);

// Called from FieldCameraUpdate (0x802B5CBC) with camera work address
void RecordCamera(uint32_t cameraWork);

// Called from G3dCalcViewLc / G3dCalcViewPlain with model and matrix pointers
void RecordCalcView(uint32_t mdl, uint32_t count, uint32_t cameraAddr, uint32_t worldAddr, uint32_t posAddr);

// Flush log to disk
void Flush();

} // namespace HunterTelemetry
