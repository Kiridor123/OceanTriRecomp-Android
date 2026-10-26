#pragma once

#include <cstdint>

namespace HunterTelemetry {

// Called every step from PlayerStepTimers (0x80260B9C) with local player's PLW
void Update(uint32_t plw);

// Log custom player actions
void LogAction(uint32_t plw, const char* actionName, float param1 = 0.0f, float param2 = 0.0f);

// Flush log to disk
void Flush();

} // namespace HunterTelemetry
