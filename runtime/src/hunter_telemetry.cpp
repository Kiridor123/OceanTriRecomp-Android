#include "hunter_telemetry.h"
#include "abi_bridge.h"
#include "memory.h"
#include "ppc_runtime.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <mutex>
#include <string>

#if defined(__ANDROID__) || defined(ANDROID)
#include <android/log.h>
#define TELEMETRY_ANDROID_LOG(...) __android_log_print(ANDROID_LOG_WARN, "MH3-Telemetry", __VA_ARGS__)
#else
#define TELEMETRY_ANDROID_LOG(...)
#endif

namespace HunterTelemetry {

namespace {

FILE* s_logFile = nullptr;
std::mutex s_mutex;
bool s_opened = false;
uint64_t s_stepCounter = 0;
int s_framesAfterAnomaly = 0;

struct PreState {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    uint32_t angle = 0;
    uint32_t angle2 = 0;
    uint32_t pitch = 0;
    uint8_t state = 0;
    uint8_t plwState = 0;
    uint8_t inWaterFlag = 0;
    uint16_t motion = 0;
    uint8_t map = 0xFF;
    uint8_t area = 0xFF;
    uint32_t questId = 0;
    bool valid = false;
};

PreState s_preState;
PreState s_lastCommittedState;

void EnsureLogFileOpen() {
    if (s_opened) return;
    s_opened = true;

    std::error_code ec;
#if defined(__ANDROID__) || defined(ANDROID)
    std::filesystem::create_directories("/storage/emulated/0/MH3/logs", ec);
    s_logFile = std::fopen("/storage/emulated/0/MH3/logs/hunter_telemetry.log", "a");
#else
    std::filesystem::create_directories("MH3/logs", ec);
    s_logFile = std::fopen("MH3/logs/hunter_telemetry.log", "a");
    if (!s_logFile) {
        s_logFile = std::fopen("hunter_telemetry.log", "a");
    }
#endif

    if (s_logFile) {
        std::fprintf(s_logFile, "\n================================================================================\n");
        std::fprintf(s_logFile, "[START] Monster Hunter Tri - Hunter Telemetry Logger (v1.5.5-test)\n");
        std::fprintf(s_logFile, "================================================================================\n");
        std::fflush(s_logFile);
    }
}

const char* GetAreaName(uint8_t map, uint8_t area) {
    if (map == 3) { // Bosque Inundado (Flooded Forest)
        if (area == 0) return "Campamento";
        if (area == 5) return "Zona 5";
        static char buf[32];
        std::snprintf(buf, sizeof(buf), "Zona %u", area);
        return buf;
    }
    static char buf[32];
    std::snprintf(buf, sizeof(buf), "Area %u", area);
    return buf;
}

const char* GetPlwStateName(uint8_t s) {
    switch (s) {
    case 0: return "Village/Idle";
    case 1: return "Field Land";
    case 2: return "Transition";
    case 3: return "Swimming";
    default: return "Unknown";
    }
}

} // namespace

void PreMovementStep(CpuContext* ctx, uint32_t plw) {
    if (!Memory::Contains(plw, 0x600))
        return;

    // Only track local player (index 0)
    uint8_t playerIndex = Memory::Read8(plw + 0xB6);
    if (playerIndex != 0)
        return;

    std::lock_guard<std::mutex> lock(s_mutex);

    s_preState.x = Memory::ReadFloat32(plw + 60);
    s_preState.y = Memory::ReadFloat32(plw + 64);
    s_preState.z = Memory::ReadFloat32(plw + 68);
    s_preState.angle = Memory::Read32(plw + 0xA8);
    s_preState.angle2 = Memory::Read32(plw + 0x58);
    s_preState.pitch = Memory::Read32(plw + 0xAC);
    s_preState.state = Memory::Read8(plw + 5);
    s_preState.plwState = Memory::Read8(plw + 9);
    s_preState.inWaterFlag = Memory::Read8(plw + 116);

    uint32_t mhchar = Memory::Read32(plw + 0x13C);
    s_preState.motion = (mhchar && Memory::Contains(mhchar, 0x100)) ? Memory::Read16(mhchar + 0x54) : 0;

    s_preState.map = Memory::Contains(0x806BB805, 1) ? Memory::Read8(0x806BB805) : 0xFF;
    s_preState.area = Memory::Contains(0x806BB806, 1) ? Memory::Read8(0x806BB806) : 0xFF;
    s_preState.questId = Memory::Contains(0x8065B238, 4) ? Memory::Read32(0x8065B238) : 0;
    s_preState.valid = true;
}

void PostMovementStep(CpuContext* ctx, uint32_t plw) {
    if (!Memory::Contains(plw, 0x600) || !s_preState.valid)
        return;

    uint8_t playerIndex = Memory::Read8(plw + 0xB6);
    if (playerIndex != 0)
        return;

    std::lock_guard<std::mutex> lock(s_mutex);
    EnsureLogFileOpen();

    ++s_stepCounter;

    const float postX = Memory::ReadFloat32(plw + 60);
    const float postY = Memory::ReadFloat32(plw + 64);
    const float postZ = Memory::ReadFloat32(plw + 68);
    const float groundY = Memory::ReadFloat32(plw + 96);
    const float waterY = Memory::ReadFloat32(plw + 100);
    const uint8_t inWaterFlag = Memory::Read8(plw + 116);
    const uint8_t postPlwState = Memory::Read8(plw + 9);
    const uint8_t postState = Memory::Read8(plw + 5);
    const uint32_t sweepFlags = Memory::Read32(plw + 868);

    uint32_t mhchar = Memory::Read32(plw + 0x13C);
    const uint16_t postMotion = (mhchar && Memory::Contains(mhchar, 0x100)) ? Memory::Read16(mhchar + 0x54) : 0;

    const float dx = postX - s_preState.x;
    const float dy = postY - s_preState.y;
    const float dz = postZ - s_preState.z;
    const float dist2D = std::sqrt(dx * dx + dz * dz);
    const float dist3D = std::sqrt(dx * dx + dy * dy + dz * dz);

    const bool isAreaTransition = !s_lastCommittedState.valid || 
                                  (s_preState.map != s_lastCommittedState.map) || 
                                  (s_preState.area != s_lastCommittedState.area);

    // TELEPORT ANOMALY: Horizontal jump > 10.0 units (approx 10cm) in ONE single logic step,
    // within the same map and area, not due to an area transition.
    const bool isTeleport = !isAreaTransition && (dist2D > 10.0f);

    // WALKING ON WATER ANOMALY:
    // inWaterFlag is set (water detected), but plwState is NOT swimming (3),
    // and hunter Y is at or above water surface, while solid ground is below water.
    const bool isWalkingOnWater = (inWaterFlag != 0) && (postPlwState != 3) && 
                                  (postY >= waterY - 5.0f) && (groundY < waterY - 8.0f);

    const bool isStateChange = s_lastCommittedState.valid && 
                               ((postPlwState != s_lastCommittedState.plwState) || 
                                (inWaterFlag != s_lastCommittedState.inWaterFlag) ||
                                (postMotion != s_lastCommittedState.motion && (postMotion == 17 || postMotion == 11 || postMotion == 12 || postMotion == 15 || postMotion == 0x41D)));

    if (isTeleport || isWalkingOnWater) {
        s_framesAfterAnomaly = 45; // continue logging high-density frames following the event
    }

    if (isTeleport) {
        const char* areaStr = GetAreaName(s_preState.map, s_preState.area);
        char alertBuf[512];
        std::snprintf(alertBuf, sizeof(alertBuf),
            "********************************************************************************\n"
            "[TELEPORT DETECTED] Step: %llu | Map: %u | %s (Area %u) | Quest: %u\n"
            "  Before: (%.3f, %.3f, %.3f) Angle: 0x%04X Angle2: 0x%04X Motion: %u State: %u (%s)\n"
            "  After:  (%.3f, %.3f, %.3f) Dist2D: %.3f (dX=%.3f, dZ=%.3f) dY=%.3f\n"
            "  Env:    GroundY=%.3f WaterY=%.3f WaterFlag=%u PlwState=%u (%s) SweepFlags=0x%08X\n"
            "********************************************************************************\n",
            static_cast<unsigned long long>(s_stepCounter), s_preState.map, areaStr, s_preState.area, s_preState.questId,
            s_preState.x, s_preState.y, s_preState.z, (s_preState.angle & 0xFFFF), (s_preState.angle2 & 0xFFFF), s_preState.motion, s_preState.plwState, GetPlwStateName(s_preState.plwState),
            postX, postY, postZ, dist2D, dx, dz, dy,
            groundY, waterY, inWaterFlag, postPlwState, GetPlwStateName(postPlwState), sweepFlags
        );

        if (s_logFile) {
            std::fputs(alertBuf, s_logFile);
            std::fflush(s_logFile);
        }
        std::fprintf(stderr, "%s", alertBuf);
        TELEMETRY_ANDROID_LOG("%s", alertBuf);
    } else if (isWalkingOnWater && (s_stepCounter % 10 == 0 || s_lastCommittedState.plwState == 3)) {
        const char* areaStr = GetAreaName(s_preState.map, s_preState.area);
        char alertBuf[512];
        std::snprintf(alertBuf, sizeof(alertBuf),
            "[WALKING ON WATER] Step: %llu | %s (Area %u) | Pos=(%.2f, %.2f, %.2f) | WaterY=%.2f GroundY=%.2f | PlwState=%u (NOT SWIMMING!)\n",
            static_cast<unsigned long long>(s_stepCounter), areaStr, s_preState.area,
            postX, postY, postZ, waterY, groundY, postPlwState
        );

        if (s_logFile) {
            std::fputs(alertBuf, s_logFile);
            std::fflush(s_logFile);
        }
        std::fprintf(stderr, "%s", alertBuf);
        TELEMETRY_ANDROID_LOG("%s", alertBuf);
    } else if (isAreaTransition) {
        if (s_logFile) {
            std::fprintf(s_logFile, "[AREA CHANGE] Step: %llu | Map: %u | Area: %u (%s) | Pos=(%.2f, %.2f, %.2f)\n",
                static_cast<unsigned long long>(s_stepCounter), s_preState.map, s_preState.area, GetAreaName(s_preState.map, s_preState.area), postX, postY, postZ);
            std::fflush(s_logFile);
        }
    } else if (isStateChange) {
        if (s_logFile) {
            std::fprintf(s_logFile, "[STATE CHANGE] Step: %llu | Area %u | Motion: %u->%u | PlwState: %u->%u | WaterFlag: %u->%u | Pos=(%.2f, %.2f, %.2f)\n",
                static_cast<unsigned long long>(s_stepCounter), s_preState.area, s_lastCommittedState.motion, postMotion, s_lastCommittedState.plwState, postPlwState, s_lastCommittedState.inWaterFlag, inWaterFlag, postX, postY, postZ);
            std::fflush(s_logFile);
        }
    } else if (s_framesAfterAnomaly > 0) {
        --s_framesAfterAnomaly;
        if (s_logFile) {
            std::fprintf(s_logFile, "  [TRAIL] Step: %llu | Pos=(%.2f, %.2f, %.2f) | d2D=%.2f | GroundY=%.2f WaterY=%.2f | Mot=%u PlwState=%u\n",
                static_cast<unsigned long long>(s_stepCounter), postX, postY, postZ, dist2D, groundY, waterY, postMotion, postPlwState);
            std::fflush(s_logFile);
        }
    } else if (s_stepCounter % 60 == 0) {
        // Periodic heartbeat line every ~1-2 seconds of gameplay
        if (s_logFile) {
            std::fprintf(s_logFile, "[HEARTBEAT] Step: %llu | Map: %u Area: %u | Pos=(%.2f, %.2f, %.2f) | Mot=%u PlwState=%u WaterFlag=%u\n",
                static_cast<unsigned long long>(s_stepCounter), s_preState.map, s_preState.area, postX, postY, postZ, postMotion, postPlwState, inWaterFlag);
            std::fflush(s_logFile);
        }
    }

    s_lastCommittedState = s_preState;
    s_lastCommittedState.x = postX;
    s_lastCommittedState.y = postY;
    s_lastCommittedState.z = postZ;
    s_lastCommittedState.motion = postMotion;
    s_lastCommittedState.plwState = postPlwState;
    s_lastCommittedState.state = postState;
    s_lastCommittedState.inWaterFlag = inWaterFlag;
    s_lastCommittedState.valid = true;
}

void LogAction(uint32_t plw, const char* actionName, float param1, float param2) {
    if (!Memory::Contains(plw, 0x600)) return;
    std::lock_guard<std::mutex> lock(s_mutex);
    EnsureLogFileOpen();

    const float x = Memory::ReadFloat32(plw + 60);
    const float y = Memory::ReadFloat32(plw + 64);
    const float z = Memory::ReadFloat32(plw + 68);
    const uint8_t area = Memory::Contains(0x806BB806, 1) ? Memory::Read8(0x806BB806) : 0xFF;

    if (s_logFile) {
        std::fprintf(s_logFile, "[ACTION EVENT] Step: %llu | Area %u | %s | Pos=(%.2f, %.2f, %.2f) | P1=%.2f P2=%.2f\n",
            static_cast<unsigned long long>(s_stepCounter), area, actionName, x, y, z, param1, param2);
        std::fflush(s_logFile);
    }
}

void Flush() {
    std::lock_guard<std::mutex> lock(s_mutex);
    if (s_logFile) {
        std::fflush(s_logFile);
    }
}

} // namespace HunterTelemetry

extern "C" void func_802094EC(CpuContext* ctx);

extern "C" void MH3_PlayerMovementCollisionUpdate(CpuContext* ctx) {
    const uint32_t plw = ctx->gpr[3];
    HunterTelemetry::PreMovementStep(ctx, plw);
    func_802094EC(ctx);
    HunterTelemetry::PostMovementStep(ctx, plw);
}
REGISTER_NATIVE_FUNCTION_AS(0x802094EC, MH3_PlayerMovementCollisionUpdate, "PlayerMovementCollisionUpdate");
