#pragma once

#include <cstdint>

struct CpuContext;

namespace HunterTelemetry {

// Called immediately before PlayerMovementCollisionUpdate (0x802094EC)
void PreMovementStep(CpuContext* ctx, uint32_t plw);

// Called immediately after PlayerMovementCollisionUpdate (0x802094EC)
void PostMovementStep(CpuContext* ctx, uint32_t plw);

// Called during explicit actions like ClimbUp, Jump15, ClimbOver
void LogAction(uint32_t plw, const char* actionName, float param1 = 0.0f, float param2 = 0.0f);

// Flushes the telemetry log file
void Flush();

} // namespace HunterTelemetry
