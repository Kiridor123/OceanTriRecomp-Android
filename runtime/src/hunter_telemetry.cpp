#include "hunter_telemetry.h"
#include "memory.h"

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

struct HunterState {
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
    float groundY = 0.0f;
    float waterY = 0.0f;
    uint32_t sweepFlags = 0;
    bool valid = false;
};

HunterState s_lastState;

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

void Update(uint32_t plw) {
    if (!Memory::Contains(plw, 0x600))
        return;

    // Only track local player (player index 0 at +0xB6)
    uint8_t playerIndex = Memory::Read8(plw + 0xB6);
    if (playerIndex != 0)
        return;

    std::lock_guard<std::mutex> lock(s_mutex);
    EnsureLogFileOpen();

    ++s_stepCounter;

    HunterState current;
    current.x = Memory::ReadFloat32(plw + 60);
    current.y = Memory::ReadFloat32(plw + 64);
    current.z = Memory::ReadFloat32(plw + 68);
    current.angle = Memory::Read32(plw + 0xA8);
    current.angle2 = Memory::Read32(plw + 0x58);
    current.pitch = Memory::Read32(plw + 0xAC);
    current.state = Memory::Read8(plw + 5);
    current.plwState = Memory::Read8(plw + 9);
    current.inWaterFlag = Memory::Read8(plw + 116);
    current.groundY = Memory::ReadFloat32(plw + 96);
    current.waterY = Memory::ReadFloat32(plw + 100);
    current.sweepFlags = Memory::Read32(plw + 868);

    uint32_t mhchar = Memory::Read32(plw + 0x13C);
    current.motion = (mhchar && Memory::Contains(mhchar, 0x100)) ? Memory::Read16(mhchar + 0x54) : 0;

    current.map = Memory::Contains(0x806BB805, 1) ? Memory::Read8(0x806BB805) : 0xFF;
    current.area = Memory::Contains(0x806BB806, 1) ? Memory::Read8(0x806BB806) : 0xFF;
    current.questId = Memory::Contains(0x8065B238, 4) ? Memory::Read32(0x8065B238) : 0;
    current.valid = true;

    if (!s_lastState.valid) {
        s_lastState = current;
        return;
    }

    const float dx = current.x - s_lastState.x;
    const float dy = current.y - s_lastState.y;
    const float dz = current.z - s_lastState.z;
    const float dist2D = std::sqrt(dx * dx + dz * dz);

    const bool isAreaTransition = (current.map != s_lastState.map) || (current.area != s_lastState.area);

    // TELEPORT ANOMALY: Horizontal displacement > 10 units in one frame within same area
    const bool isTeleport = !isAreaTransition && (dist2D > 10.0f);

    // WALKING ON WATER ANOMALY:
    // Water detected, but not swimming state (3), and hunter is standing near water level while solid ground is lower
    const bool isWalkingOnWater = (current.inWaterFlag != 0) && (current.plwState != 3) &&
                                  (current.y >= current.waterY - 5.0f) && (current.groundY < current.waterY - 8.0f);

    const bool isStateChange = (current.plwState != s_lastState.plwState) ||
                               (current.inWaterFlag != s_lastState.inWaterFlag) ||
                               (current.motion != s_lastState.motion && (current.motion == 17 || current.motion == 11 || current.motion == 12 || current.motion == 15));

    if (isTeleport || isWalkingOnWater) {
        s_framesAfterAnomaly = 45;
    }

    if (isTeleport) {
        const char* areaStr = GetAreaName(current.map, current.area);
        char alertBuf[512];
        std::snprintf(alertBuf, sizeof(alertBuf),
            "********************************************************************************\n"
            "[TELEPORT DETECTED] Step: %llu | Map: %u | %s (Area %u) | Quest: %u\n"
            "  Before: (%.3f, %.3f, %.3f) Angle: 0x%04X Angle2: 0x%04X Motion: %u State: %u (%s)\n"
            "  After:  (%.3f, %.3f, %.3f) Dist2D: %.3f (dX=%.3f, dZ=%.3f) dY=%.3f\n"
            "  Env:    GroundY=%.3f WaterY=%.3f WaterFlag=%u PlwState=%u (%s) SweepFlags=0x%08X\n"
            "********************************************************************************\n",
            static_cast<unsigned long long>(s_stepCounter), current.map, areaStr, current.area, current.questId,
            s_lastState.x, s_lastState.y, s_lastState.z, (s_lastState.angle & 0xFFFF), (s_lastState.angle2 & 0xFFFF), s_lastState.motion, s_lastState.plwState, GetPlwStateName(s_lastState.plwState),
            current.x, current.y, current.z, dist2D, dx, dz, dy,
            current.groundY, current.waterY, current.inWaterFlag, current.plwState, GetPlwStateName(current.plwState), current.sweepFlags
        );

        if (s_logFile) {
            std::fputs(alertBuf, s_logFile);
            std::fflush(s_logFile);
        }
        std::fprintf(stderr, "%s", alertBuf);
        TELEMETRY_ANDROID_LOG("%s", alertBuf);
    } else if (isWalkingOnWater && (s_stepCounter % 10 == 0 || s_lastState.plwState == 3)) {
        const char* areaStr = GetAreaName(current.map, current.area);
        char alertBuf[512];
        std::snprintf(alertBuf, sizeof(alertBuf),
            "[WALKING ON WATER] Step: %llu | %s (Area %u) | Pos=(%.2f, %.2f, %.2f) | WaterY=%.2f GroundY=%.2f | PlwState=%u (NOT SWIMMING!)\n",
            static_cast<unsigned long long>(s_stepCounter), areaStr, current.area,
            current.x, current.y, current.z, current.waterY, current.groundY, current.plwState
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
                static_cast<unsigned long long>(s_stepCounter), current.map, current.area, GetAreaName(current.map, current.area), current.x, current.y, current.z);
            std::fflush(s_logFile);
        }
    } else if (isStateChange) {
        if (s_logFile) {
            std::fprintf(s_logFile, "[STATE CHANGE] Step: %llu | Area %u | Motion: %u->%u | PlwState: %u->%u | WaterFlag: %u->%u | Pos=(%.2f, %.2f, %.2f)\n",
                static_cast<unsigned long long>(s_stepCounter), current.area, s_lastState.motion, current.motion, s_lastState.plwState, current.plwState, s_lastState.inWaterFlag, current.inWaterFlag, current.x, current.y, current.z);
            std::fflush(s_logFile);
        }
    } else if (s_framesAfterAnomaly > 0) {
        --s_framesAfterAnomaly;
        if (s_logFile) {
            std::fprintf(s_logFile, "  [TRAIL] Step: %llu | Pos=(%.2f, %.2f, %.2f) | d2D=%.2f | GroundY=%.2f WaterY=%.2f | Mot=%u PlwState=%u\n",
                static_cast<unsigned long long>(s_stepCounter), current.x, current.y, current.z, dist2D, current.groundY, current.waterY, current.motion, current.plwState);
            std::fflush(s_logFile);
        }
    } else if (s_stepCounter % 60 == 0) {
        if (s_logFile) {
            std::fprintf(s_logFile, "[HEARTBEAT] Step: %llu | Map: %u Area: %u | Pos=(%.2f, %.2f, %.2f) | Mot=%u PlwState=%u WaterFlag=%u\n",
                static_cast<unsigned long long>(s_stepCounter), current.map, current.area, current.x, current.y, current.z, current.motion, current.plwState, current.inWaterFlag);
            std::fflush(s_logFile);
        }
    }

    s_lastState = current;
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
