// Target Camera ("Cámara Objetivo", MH3U / MH4U / GU style) for OceanTriRecomp.
//
// - Single tap L: smoothly snaps camera yaw (and underwater pitch) once toward
//   the focused large monster in the current area (no continuous lock-on).
// - Double tap L (within 320 ms) or no target active: normal MH3 snap behind hunter.
// - L + D-Pad Left / Right: cycles focus between large monsters in the area.

#include "target_camera.h"

#include "cheats.h"
#include "memory.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <mutex>

namespace {

// Verified RMHP08 offsets (from monster_heaps.cpp, monster_control.cpp, cheat_data.cpp, camera_input.cpp)
constexpr uint32_t kMonsterClasses = 0x805A22C8u; // s8 heapClass per kind (> 0 = large monster)
constexpr uint32_t kMonsterKind = 0x003u;
constexpr uint32_t kMonsterPos = 0x188u;          // VEC3 (x, y, z)
constexpr uint32_t kMonsterHp = 0x7A0u;           // s32 hp, +4 maxHp

constexpr uint32_t kPlwState = 9u;                // u8: 3 = swimming
constexpr uint32_t kPlwPos = 0x3Cu;               // VEC3 (x, y, z)

constexpr uint32_t kCamPitchTarget = 0x64u;       // s32 (s16 angle)
constexpr uint32_t kCamYawTarget = 0x68u;         // s32 (u16 angle)
constexpr uint32_t kCamYawRamp = 0xA1u;           // s8
constexpr uint32_t kCamManualPitch = 0xAAu;       // u8
constexpr uint32_t kCamPitchHold = 0xABu;         // u8
constexpr uint32_t kCamYawSnap = 0xADu;           // u8 flag, u16 angle at +1

struct SpeciesMeta {
    uint8_t kind;
    const char* es;
    const char* en;
    uint32_t rgb;
};

constexpr SpeciesMeta kLargeMonsters[] = {
    {  1, "Rathian",      "Rathian",       0x4EC458u },
    {  2, "Rathalos",     "Rathalos",      0xE84838u },
    {  3, "Qurupeco",     "Qurupeco",      0xF0C038u },
    {  4, "Gigginox",     "Gigginox",      0xB068E0u },
    {  5, "Barioth",      "Barioth",       0x78D8F0u },
    {  6, "Diablos",      "Diablos",       0xD8A860u },
    {  7, "Deviljho",     "Deviljho",      0x68D848u },
    {  8, "Barroth",      "Barroth",       0xC89858u },
    {  9, "Uragaan",      "Uragaan",       0xE8A828u },
    { 12, "Gran Jaggi",   "Great Jaggi",   0xC878B8u },
    { 14, "Gran Baggi",   "Great Baggi",   0x68B0E8u },
    { 15, "Lagiacrus",    "Lagiacrus",     0x28B8F8u },
    { 16, "Ludroth Real", "Royal Ludroth", 0xF0D038u },
    { 18, "Gobul",        "Gobul",         0x7870D0u },
    { 19, "Agnaktor",     "Agnaktor",      0xF86028u },
    { 20, "Ceadeus",      "Ceadeus",       0x90E0FFu },
    { 24, "Jhen Mohran",  "Jhen Mohran",   0xD8B068u },
    { 25, "Alatreon",     "Alatreon",      0xA858F8u },
};

const SpeciesMeta* FindSpecies(uint8_t kind) {
    for (const auto& s : kLargeMonsters) {
        if (s.kind == kind) return &s;
    }
    return nullptr;
}

bool InRam(uint32_t addr) {
    return (addr >= 0x80000000u && addr < 0x81800000u) ||
           (addr >= 0x90000000u && addr < 0x94000000u);
}

// Exact MH3 capture HP check mirrored from DOL func_80140C64 -> func_80135B28 -> func_8012ECD8 -> func_8012ED54.
// Uses MH3's live species param table (0x8065B2F8 -> kindEntry -> paramPtr + 13) and its 4 exact thresholds:
// tier <= 1: 30%, tier == 2: 20%, tier == 3: 18%, tier >= 4: 15%.
// Elder Dragons (Ceadeus=20, Jhen Mohran=24, Alatreon=25) cannot be captured.
bool IsMonsterCapturable(uint8_t kind, int32_t hp, int32_t maxHp) {
    if (kind == 20u || kind == 24u || kind == 25u) return false;
    if (hp <= 0 || maxHp <= 0) return false;

    float threshold = 0.20f;
    const uint32_t tableBase = Memory::Read32(0x8065B2F8u); // 0x80660000 - 21920 + 2200
    if (InRam(tableBase)) {
        const uint32_t kindEntry = Memory::Read32(tableBase + static_cast<uint32_t>(kind) * 4u);
        if (InRam(kindEntry)) {
            const uint32_t paramPtr = Memory::Read32(kindEntry); // sub-variant 0 for all large monsters
            if (InRam(paramPtr)) {
                const uint8_t tier = Memory::Read8(paramPtr + 13u);
                if (tier <= 1u)      threshold = 0.30f;
                else if (tier <= 2u) threshold = 0.20f;
                else if (tier <= 3u) threshold = 0.18f;
                else                 threshold = 0.15f;
            }
        }
    }
    return (static_cast<float>(hp) / static_cast<float>(maxHp)) <= threshold;
}

std::atomic<bool> g_enabled{true};
std::mutex g_mutex;
uint32_t g_focusedWork = 0;
bool g_userClearedFocus = false;

std::chrono::steady_clock::time_point g_lastSnapTime{};
bool g_lastSnapWasTarget = false;
uint16_t g_prevButtons = 0;

std::vector<TargetCamera::MonsterTarget> ScanLargeMonsters() {
    std::vector<TargetCamera::MonsterTarget> out;
    if (Cheats::LocalPlayer() == 0) return out;

    const uint32_t count = Cheats::MoveWorkCount(Cheats::Kind::Monster);
    if (count == 0 || count > 64) return out;

    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t em = Cheats::MoveWork(Cheats::Kind::Monster, i);
        if (!InRam(em) || Memory::Read16(em) != 0x0101u) continue;

        const uint8_t kind = Memory::Read8(em + kMonsterKind);
        if (kind == 0 || kind >= 64) continue;

        // Verify large monster via MH3's official heapClass table (0x805A22C8)
        const int8_t heapClass = static_cast<int8_t>(Memory::Read8(kMonsterClasses + kind));
        if (heapClass <= 0) continue;

        const int32_t hp = static_cast<int32_t>(Memory::Read32(em + kMonsterHp));
        const int32_t maxHp = static_cast<int32_t>(Memory::Read32(em + kMonsterHp + 4u));
        if (hp <= 0 || maxHp <= 0) continue;

        const float mx = Memory::ReadFloat32(em + kMonsterPos);
        const float my = Memory::ReadFloat32(em + kMonsterPos + 4u);
        const float mz = Memory::ReadFloat32(em + kMonsterPos + 8u);
        if (!std::isfinite(mx) || !std::isfinite(my) || !std::isfinite(mz)) continue;

        TargetCamera::MonsterTarget t;
        t.work = em;
        t.kind = kind;
        t.x = mx;
        t.y = my;
        t.z = mz;
        t.hp = hp;
        t.maxHp = maxHp;
        t.capturable = IsMonsterCapturable(kind, hp, maxHp);
        if (const SpeciesMeta* meta = FindSpecies(kind)) {
            t.nameEs = meta->es;
            t.nameEn = meta->en;
            t.accentRgb = meta->rgb;
        } else {
            t.nameEs = "Monstruo";
            t.nameEn = "Monster";
            t.accentRgb = 0xE6B830u;
        }
        out.push_back(t);
    }

    return out;
}

void ReconcileFocusLocked(const std::vector<TargetCamera::MonsterTarget>& targets) {
    if (targets.empty()) {
        g_focusedWork = 0;
        g_userClearedFocus = false;
        return;
    }

    // Keep current focus if still alive in the area
    if (g_focusedWork != 0) {
        for (const auto& t : targets) {
            if (t.work == g_focusedWork) return;
        }
        // Focused monster left or died -> auto-switch to first remaining large monster
        g_focusedWork = targets[0].work;
        g_userClearedFocus = false;
        return;
    }

    // No focus yet: auto-focus first large monster unless user explicitly cleared focus
    if (!g_userClearedFocus) {
        g_focusedWork = targets[0].work;
    }
}

} // namespace

namespace TargetCamera {

bool IsEnabled() {
    return g_enabled.load(std::memory_order_acquire);
}

void SetEnabled(bool enabled) {
    g_enabled.store(enabled, std::memory_order_release);
}

std::vector<MonsterTarget> GetActiveTargets() {
    auto targets = ScanLargeMonsters();
    std::lock_guard<std::mutex> lock(g_mutex);
    ReconcileFocusLocked(targets);
    return targets;
}

uint32_t GetFocusedWork() {
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_focusedWork;
}

void CycleTarget(int delta) {
    if (!IsEnabled()) return;
    auto targets = ScanLargeMonsters();
    std::lock_guard<std::mutex> lock(g_mutex);
    if (targets.empty()) {
        g_focusedWork = 0;
        g_userClearedFocus = false;
        return;
    }

    const int n = static_cast<int>(targets.size());
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (targets[i].work == g_focusedWork) {
            idx = i;
            break;
        }
    }

    if (n == 1) {
        // Toggle focus on/off when only 1 large monster is present
        if (idx == 0) {
            g_focusedWork = 0;
            g_userClearedFocus = true;
        } else {
            g_focusedWork = targets[0].work;
            g_userClearedFocus = false;
        }
        return;
    }

    // Multiple monsters: cycle directly between them (0 -> 1 -> ... -> n-1 -> 0)
    if (idx < 0) {
        idx = (delta >= 0) ? 0 : (n - 1);
    } else {
        idx = (idx + delta + n) % n;
    }
    g_focusedWork = targets[idx].work;
    g_userClearedFocus = false;
}

void SelectOrToggleWork(uint32_t work) {
    if (!IsEnabled()) return;
    auto targets = ScanLargeMonsters();
    std::lock_guard<std::mutex> lock(g_mutex);
    if (targets.empty()) {
        g_focusedWork = 0;
        g_userClearedFocus = false;
        return;
    }

    bool exists = false;
    for (const auto& t : targets) {
        if (t.work == work) { exists = true; break; }
    }
    if (!exists) return;

    if (g_focusedWork == work) {
        // Clicking/tapping the already-focused monster toggles target off
        g_focusedWork = 0;
        g_userClearedFocus = true;
    } else {
        g_focusedWork = work;
        g_userClearedFocus = false;
    }
}

void PollCycleInput() {
    if (!IsEnabled()) {
        g_prevButtons = 0;
        return;
    }

    const uint16_t held = Cheats::Held();
    const uint16_t newlyPressed = static_cast<uint16_t>(held & ~g_prevButtons);
    g_prevButtons = held;

    if (held & Cheats::kL) {
        if (newlyPressed & Cheats::kRight) {
            CycleTarget(+1);
        } else if (newlyPressed & Cheats::kLeft) {
            CycleTarget(-1);
        }
    }
}

bool TrySnapCamera(uint32_t camWork, uint32_t plw) {
    if (!IsEnabled() || !InRam(camWork) || !InRam(plw)) {
        return false;
    }

    const auto now = std::chrono::steady_clock::now();
    const auto elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(now - g_lastSnapTime).count();

    // Double-tap L within 320 ms -> classic snap behind hunter!
    if (g_lastSnapWasTarget && elapsedMs >= 0 && elapsedMs < 320) {
        g_lastSnapWasTarget = false;
        g_lastSnapTime = now;
        return false;
    }

    auto targets = ScanLargeMonsters();
    uint32_t focusWork = 0;
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        ReconcileFocusLocked(targets);
        focusWork = g_focusedWork;
    }

    if (focusWork == 0) {
        g_lastSnapWasTarget = false;
        g_lastSnapTime = now;
        return false;
    }

    const MonsterTarget* target = nullptr;
    for (const auto& t : targets) {
        if (t.work == focusWork) {
            target = &t;
            break;
        }
    }
    if (!target) {
        g_lastSnapWasTarget = false;
        g_lastSnapTime = now;
        return false;
    }

    const float px = Memory::ReadFloat32(plw + kPlwPos);
    const float py = Memory::ReadFloat32(plw + kPlwPos + 4u);
    const float pz = Memory::ReadFloat32(plw + kPlwPos + 8u);
    if (!std::isfinite(px) || !std::isfinite(py) || !std::isfinite(pz)) {
        return false;
    }

    // Camera eye sits behind the player in direction `yaw`, so vector (player - monster)
    // points from monster -> player -> camera eye!
    const float dx = px - target->x;
    const float dz = pz - target->z;
    const float horizDist = std::sqrt(dx * dx + dz * dz);
    if (horizDist < 1.0f) {
        return false;
    }

    constexpr float kRadToAngle = 32768.0f / 3.14159265358979323846f;
    const float yawRad = std::atan2(dx, dz);
    const uint32_t yaw = static_cast<uint32_t>(static_cast<int32_t>(std::lround(yawRad * kRadToAngle))) & 0xFFFFu;

    Memory::Write32(camWork + kCamYawTarget, yaw);
    Memory::Write8(camWork + kCamYawRamp, 10);
    Memory::Write8(camWork + kCamYawSnap, 1);
    Memory::Write16(camWork + kCamYawSnap + 1u, static_cast<uint16_t>(yaw));

    // Underwater: also smoothly aim vertical pitch toward the monster!
    if (Memory::Read8(plw + kPlwState) == 3u) {
        const float dy = (target->y + 110.0f) - (py + 100.0f);
        const float pitchRad = -std::atan2(dy, horizDist);
        const int32_t pitchSigned = std::clamp<int32_t>(
            static_cast<int32_t>(std::lround(pitchRad * kRadToAngle)), -7500, 10000);
        Memory::Write32(camWork + kCamPitchTarget, static_cast<uint32_t>(static_cast<uint16_t>(pitchSigned)));
        Memory::Write8(camWork + kCamManualPitch, 1);
        Memory::Write8(camWork + kCamPitchHold, 30);
    }

    g_lastSnapWasTarget = true;
    g_lastSnapTime = now;
    return true;
}

} // namespace TargetCamera
