#include "hunter_telemetry.h"
#include "memory.h"

#include <cmath>
#include <cstdio>
#include <cstdlib>
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
std::recursive_mutex s_mutex;
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

struct CameraState {
    float eyeX = 0.0f, eyeY = 0.0f, eyeZ = 0.0f;
    float targetX = 0.0f, targetY = 0.0f, targetZ = 0.0f;
    int32_t yaw = 0, pitch = 0;
    uint8_t distance = 0;
    uint8_t climbMode = 0;
    uint8_t followMode = 0;
    uint8_t reset = 0;
    uint64_t lastStep = 0;
    bool valid = false;
};

HunterState s_lastState;
CameraState s_camera;

void EnsureLogFileOpen() {
    if (s_opened) return;
    s_opened = true;

    std::error_code ec;
#if defined(__ANDROID__) || defined(ANDROID)
    std::filesystem::create_directories("/storage/emulated/0/MH3/logs", ec);
    s_logFile = std::fopen("/storage/emulated/0/MH3/logs/hunter_telemetry.log", "a");
    if (!s_logFile) {
        std::filesystem::create_directories("/sdcard/MH3/logs", ec);
        s_logFile = std::fopen("/sdcard/MH3/logs/hunter_telemetry.log", "a");
    }
#else
    const char* userDir = std::getenv("MH3_USER_DIR");
    const char* dataRoot = std::getenv("MH3_DATA_ROOT");
    if (userDir) {
        std::string path = std::string(userDir) + "/logs";
        std::filesystem::create_directories(path, ec);
        s_logFile = std::fopen((path + "/hunter_telemetry.log").c_str(), "a");
    }
    if (!s_logFile && dataRoot) {
        std::string path = std::string(dataRoot) + "/logs";
        std::filesystem::create_directories(path, ec);
        s_logFile = std::fopen((path + "/hunter_telemetry.log").c_str(), "a");
    }
    if (!s_logFile) {
        std::filesystem::create_directories("MH3/logs", ec);
        s_logFile = std::fopen("MH3/logs/hunter_telemetry.log", "a");
    }
    if (!s_logFile) {
        s_logFile = std::fopen("hunter_telemetry.log", "a");
    }
#endif

    if (s_logFile) {
        std::fprintf(s_logFile, "\n================================================================================\n");
        std::fprintf(s_logFile, "[START] Monster Hunter Tri - Matrix & Telemetry Diagnostic (v1.6)\n");
        std::fprintf(s_logFile, "================================================================================\n");
        std::fflush(s_logFile);
    }
}

const char* GetAreaName(uint8_t map, uint8_t area) {
    if (map == 14 || map == 3) { // Bosque Inundado (Flooded Forest)
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

const char* ResolveModelName(uint32_t addr) {
    if (!Memory::Contains(addr, 4)) return "";
    uint32_t magic = Memory::Read32(addr);
    uint32_t mdl0 = (magic == 0x4D444C30) ? addr : Memory::Read32(addr);
    if (!Memory::Contains(mdl0, 0x50) || Memory::Read32(mdl0) != 0x4D444C30) return "";
    int32_t nameOffset = static_cast<int32_t>(Memory::Read32(mdl0 + 0x48));
    if (nameOffset <= 0 || nameOffset > 0x400000) return "";
    uint32_t nameAddr = mdl0 + static_cast<uint32_t>(nameOffset);
    if (!Memory::Contains(nameAddr, 32)) return "";
    const char* raw = reinterpret_cast<const char*>(Memory::GetPointer(nameAddr, 32));
    if (!raw) return "";
    static char clean[32];
    size_t i = 0;
    for (; i < 31 && raw[i] != '\0'; ++i) {
        unsigned char c = static_cast<unsigned char>(raw[i]);
        if (c < 0x20 || c > 0x7E) return "";
        clean[i] = raw[i];
    }
    clean[i] = '\0';
    return clean;
}

} // namespace

void RecordCamera(uint32_t cam) {
    if (!IsEnabled()) return;
    if (!Memory::Contains(cam, 0x100)) return;
    std::lock_guard<std::recursive_mutex> lock(s_mutex);
    EnsureLogFileOpen();

    CameraState current;
    current.eyeX = Memory::ReadFloat32(cam + 0x00);
    current.eyeY = Memory::ReadFloat32(cam + 0x04);
    current.eyeZ = Memory::ReadFloat32(cam + 0x08);
    current.targetX = Memory::ReadFloat32(cam + 0x0C);
    current.targetY = Memory::ReadFloat32(cam + 0x10);
    current.targetZ = Memory::ReadFloat32(cam + 0x14);
    current.pitch = Memory::Read32(cam + 0x6C);
    current.yaw = Memory::Read32(cam + 0x70);
    current.distance = Memory::Read8(cam + 0x7C);
    current.climbMode = Memory::Read8(cam + 0x92);
    current.followMode = Memory::Read8(cam + 0x9E);
    current.reset = Memory::Read8(cam + 0x42);
    current.lastStep = s_stepCounter;
    current.valid = true;

    if (s_camera.valid && s_lastState.valid) {
        float dEyeX = current.eyeX - s_camera.eyeX;
        float dEyeY = current.eyeY - s_camera.eyeY;
        float dEyeZ = current.eyeZ - s_camera.eyeZ;
        float dEye2D = std::sqrt(dEyeX * dEyeX + dEyeZ * dEyeZ);

        float dxToPlayer = current.targetX - s_lastState.x;
        float dzToPlayer = current.targetZ - s_lastState.z;
        float distTargetToPlayer = std::sqrt(dxToPlayer * dxToPlayer + dzToPlayer * dzToPlayer);

        if (distTargetToPlayer > 12.0f && (s_stepCounter % 30 == 0)) {
            char buf[512];
            std::snprintf(buf, sizeof(buf),
                "[CAMERA-TARGET DESYNC] Step: %llu | Map: %u Area: %u | Target=(%.2f, %.2f, %.2f) vs Player=(%.2f, %.2f, %.2f) | Dist=%.2f | ClimbMode=%u Follow=%u\n",
                (unsigned long long)s_stepCounter, s_lastState.map, s_lastState.area,
                current.targetX, current.targetY, current.targetZ, s_lastState.x, s_lastState.y, s_lastState.z,
                distTargetToPlayer, current.climbMode, current.followMode);
            if (s_logFile) { std::fputs(buf, s_logFile); std::fflush(s_logFile); }
            std::fprintf(stderr, "%s", buf);
            TELEMETRY_ANDROID_LOG("%s", buf);
        }

        if (dEye2D > 25.0f && (current.climbMode != s_camera.climbMode || current.reset != 0)) {
            char buf[512];
            std::snprintf(buf, sizeof(buf),
                "[CAMERA EYE JUMP] Step: %llu | Eye: (%.2f, %.2f, %.2f) -> (%.2f, %.2f, %.2f) d2D=%.2f | ClimbMode: %u->%u Reset: %u\n",
                (unsigned long long)s_stepCounter,
                s_camera.eyeX, s_camera.eyeY, s_camera.eyeZ,
                current.eyeX, current.eyeY, current.eyeZ,
                dEye2D, s_camera.climbMode, current.climbMode, current.reset);
            if (s_logFile) { std::fputs(buf, s_logFile); std::fflush(s_logFile); }
            std::fprintf(stderr, "%s", buf);
            TELEMETRY_ANDROID_LOG("%s", buf);
        }
    }

    s_camera = current;
}

void RecordCalcView(uint32_t mdl, uint32_t count, uint32_t cameraAddr, uint32_t worldAddr, uint32_t posAddr) {
    if (!IsEnabled()) return;
    if (!count) return;
    if (!Memory::Contains(cameraAddr, 48) || !Memory::Contains(worldAddr, 48)) return;
    std::lock_guard<std::recursive_mutex> lock(s_mutex);
    EnsureLogFileOpen();

    // Check world translation of root bone (bone 0)
    float wX = Memory::ReadFloat32(worldAddr + 4 * 3);
    float wY = Memory::ReadFloat32(worldAddr + 4 * 7);
    float wZ = Memory::ReadFloat32(worldAddr + 4 * 11);

    // Read camera view matrix translation
    float cX = Memory::ReadFloat32(cameraAddr + 4 * 3);
    float cY = Memory::ReadFloat32(cameraAddr + 4 * 7);
    float cZ = Memory::ReadFloat32(cameraAddr + 4 * 11);

    // Read resulting position matrix translation if available
    float pX = 0.0f, pY = 0.0f, pZ = 0.0f;
    if (posAddr && Memory::Contains(posAddr, 48)) {
        pX = Memory::ReadFloat32(posAddr + 4 * 3);
        pY = Memory::ReadFloat32(posAddr + 4 * 7);
        pZ = Memory::ReadFloat32(posAddr + 4 * 11);
    }

    const char* name = ResolveModelName(mdl);
    bool isStage = false;
    if (name && ((name[0] == 'm' && name[1] >= '0' && name[1] <= '9' && name[2] >= '0' && name[2] <= '9') ||
                 std::strstr(name, "st") || std::strstr(name, "map") || std::strstr(name, "stage"))) {
        isStage = true;
    }

    // Check active stage MHchar root positions at 0x806BAC44..0x806BAC50
    float stagePosX = 0.0f, stagePosY = 0.0f, stagePosZ = 0.0f;
    if (isStage && Memory::Contains(0x806BAC44, 16)) {
        uint32_t stageCh = Memory::Read32(0x806BAC44);
        if (stageCh && Memory::Contains(stageCh, 0x20)) {
            stagePosX = Memory::ReadFloat32(stageCh + 4);
            stagePosY = Memory::ReadFloat32(stageCh + 8);
            stagePosZ = Memory::ReadFloat32(stageCh + 12);
        }
    }

    // ANOMALY: Stage MHchar has non-zero root position
    if (isStage && (std::abs(stagePosX) > 0.05f || std::abs(stagePosY) > 0.05f || std::abs(stagePosZ) > 0.05f)) {
        char buf[512];
        std::snprintf(buf, sizeof(buf),
            "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
            "[STAGE WORLD MATRIX OFFSET DETECTED] Step: %llu | Model: '%s' (0x%08X) | Count: %u\n"
            "  Stage MHchar Pos: (%.3f, %.3f, %.3f) [SHOULD BE (0,0,0)!]\n"
            "  World[0] Trans: (%.3f, %.3f, %.3f)\n"
            "  Cam Matrix Trans: (%.3f, %.3f, %.3f)\n"
            "  View Matrix Result Trans: (%.3f, %.3f, %.3f)\n"
            "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",
            (unsigned long long)s_stepCounter, name ? name : "", mdl, count,
            stagePosX, stagePosY, stagePosZ, wX, wY, wZ, cX, cY, cZ, pX, pY, pZ);
        if (s_logFile) { std::fputs(buf, s_logFile); std::fflush(s_logFile); }
        std::fprintf(stderr, "%s", buf);
        TELEMETRY_ANDROID_LOG("%s", buf);
    }

    // Periodic or transition snapshot for models
    if (s_framesAfterAnomaly > 0 || (s_stepCounter % 120 == 0)) {
        if (s_logFile) {
            std::fprintf(s_logFile,
                "  [VIEW] Step: %llu | Mdl: '%s' (0x%08X) cnt=%u | WorldTx=(%.2f, %.2f, %.2f) | CamTx=(%.2f, %.2f, %.2f) | ViewTx=(%.2f, %.2f, %.2f)\n",
                (unsigned long long)s_stepCounter, (name && *name) ? name : "unnamed", mdl, count, wX, wY, wZ, cX, cY, cZ, pX, pY, pZ);
            std::fflush(s_logFile);
        }
    }
}

void Update(uint32_t plw) {
    if (!IsEnabled()) return;

    if (!Memory::Contains(plw, 0x600))
        return;

    std::lock_guard<std::recursive_mutex> lock(s_mutex);
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
    const bool isTeleport = !isAreaTransition && (dist2D > 10.0f);

    const bool isWalkingOnWater = (current.inWaterFlag != 0) && (current.plwState != 3) &&
                                  (current.y >= current.waterY - 5.0f) && (current.groundY < current.waterY - 8.0f);

    const bool isLadder = (current.motion == 11 || current.motion == 12 || current.motion == 15 || current.motion == 17);
    const bool wasLadder = (s_lastState.motion == 11 || s_lastState.motion == 12 || s_lastState.motion == 15 || s_lastState.motion == 17);
    const bool isWaterTransition = (current.plwState != s_lastState.plwState && (current.plwState == 3 || s_lastState.plwState == 3 || current.plwState == 2));

    if ((isLadder != wasLadder) || isWaterTransition) {
        s_framesAfterAnomaly = 90;
        char alertBuf[512];
        std::snprintf(alertBuf, sizeof(alertBuf),
            "--------------------------------------------------------------------------------\n"
            "[%s] Step: %llu | Map: %u Area: %u (%s) | Quest: %u\n"
            "  Player: Pos=(%.2f, %.2f, %.2f) PlwState=%u->%u WaterFlag=%u Mot=%u->%u\n"
            "  Camera: Eye=(%.2f, %.2f, %.2f) Tgt=(%.2f, %.2f, %.2f) Yaw=0x%04X Pitch=0x%04X ClimbMode=%u\n"
            "--------------------------------------------------------------------------------\n",
            isLadder ? "LADDER TRANSITION" : "WATER TRANSITION",
            (unsigned long long)s_stepCounter, current.map, current.area, GetAreaName(current.map, current.area), current.questId,
            current.x, current.y, current.z, s_lastState.plwState, current.plwState, current.inWaterFlag, s_lastState.motion, current.motion,
            s_camera.eyeX, s_camera.eyeY, s_camera.eyeZ, s_camera.targetX, s_camera.targetY, s_camera.targetZ,
            (s_camera.yaw & 0xFFFF), (s_camera.pitch & 0xFFFF), s_camera.climbMode);
        if (s_logFile) { std::fputs(alertBuf, s_logFile); std::fflush(s_logFile); }
        std::fprintf(stderr, "%s", alertBuf);
        TELEMETRY_ANDROID_LOG("%s", alertBuf);
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
    }

    if (s_framesAfterAnomaly > 0) {
        --s_framesAfterAnomaly;
        if (s_logFile) {
            std::fprintf(s_logFile, "  [TRAIL] Step: %llu | Pos=(%.2f, %.2f, %.2f) | CamEye=(%.2f, %.2f, %.2f) | Mot=%u PlwState=%u\n",
                static_cast<unsigned long long>(s_stepCounter), current.x, current.y, current.z, s_camera.eyeX, s_camera.eyeY, s_camera.eyeZ, current.motion, current.plwState);
            std::fflush(s_logFile);
        }
    } else if (s_stepCounter % 60 == 0) {
        if (s_logFile) {
            std::fprintf(s_logFile, "[HEARTBEAT] Step: %llu | Map: %u Area: %u (%s) | Pos=(%.2f, %.2f, %.2f) | CamEye=(%.2f, %.2f, %.2f) Tgt=(%.2f, %.2f, %.2f) | Mot=%u PlwState=%u WaterFlag=%u\n",
                static_cast<unsigned long long>(s_stepCounter), current.map, current.area, GetAreaName(current.map, current.area), current.x, current.y, current.z, s_camera.eyeX, s_camera.eyeY, s_camera.eyeZ, s_camera.targetX, s_camera.targetY, s_camera.targetZ, current.motion, current.plwState, current.inWaterFlag);
            std::fflush(s_logFile);
        }
    }

    s_lastState = current;
}

void LogAction(uint32_t plw, const char* actionName, float param1, float param2) {
    if (!Memory::Contains(plw, 0x600)) return;
    std::lock_guard<std::recursive_mutex> lock(s_mutex);
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
    std::lock_guard<std::recursive_mutex> lock(s_mutex);
    if (s_logFile) {
        std::fflush(s_logFile);
    }
}

} // namespace HunterTelemetry
