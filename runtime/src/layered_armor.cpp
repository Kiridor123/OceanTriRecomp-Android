// Layered Armor (Transmog / "Armaduras Superpuestas") for OceanTriRecomp.
//
// Zero ROM modification:
//  - Injects "Armadura Superpuesta" / "Layered Armor" directly into the native
//    Item Box root menu in temporary RAM (hooks 0x801F3E50, 0x801F5618, 0x801ECBA4).
//  - Substitutes the local hunter's 3D armor model IDs in RAM (hook 0x8027EC0C)
//    without altering real equipped armor stats, defense, resistances, slots, or skills.
//  - Faithful progression: only armor pieces already crafted or owned by the hunter
//    (checked via crafted bitmask user+0x4B50, Equipment Box user+0xE00, and worn armor)
//    can be selected for transmog.

#include "layered_armor.h"

#include "abi_bridge.h"
#include "cheats.h"
#include "guest_call.h"
#include "memory.h"
#include "ppc_runtime.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <mutex>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

extern "C" void func_8027EC0C(CpuContext* ctx);
extern "C" void func_801F3E50(CpuContext* ctx);
extern "C" void func_801F5618(CpuContext* ctx);
extern "C" void func_801ECBA4(CpuContext* ctx);

namespace {

// Game memory constants (verified from RMHP08 decompiled DOL)
constexpr uint32_t kEquipmentData = 0x806ADC90;     // +0: armor data tables, +4: armor text tables
constexpr uint32_t kEquipmentCounts = 0x80570E80;   // u32 count per kind (1..5: chest, arms, waist, legs, helm)
constexpr uint32_t kCraftedOffsetTable = 0x80581D88;// s16 byte offset per kind (1..15) into user+0x4B50
constexpr uint32_t kArmorEntryStride = 24;          // +2: maleModelId (u8), +3: femaleModelId (u8)
constexpr uint32_t kArmorTextStride = 28;           // +8: const char* localized name
constexpr uint32_t kUserCraftedMask = 0x4B50;       // crafted equipment bitmask in userdata
constexpr uint32_t kUserEquipBox = 0xE00;           // 12-byte equipment box records (up to 800 slots)
constexpr uint32_t kEquipBoxMaxSlots = 800;
constexpr uint32_t kPlwArmorBase = 0x140;           // 5 equipped armor records (12 bytes each: chest, arms, waist, legs, helm)
constexpr uint32_t kPlwArmorStride = 0xC;
constexpr uint32_t kPlwSexOffset = 20;              // u8: 0 = male, 1 = female
constexpr uint32_t kLanguageAddr = 0x8065AA69;      // u8: 4 = Spanish
constexpr uint32_t kItemBoxPtrAddr = 0x806AD070;    // (0x806B0000 - 12348) + 172
constexpr uint32_t kRootSlotsTable = 0x805B9028;    // u16[7]: 6804..6810

struct LayeredLoadout {
    std::array<uint16_t, LayeredArmor::kSlotCount> armorId{}; // 0 = disabled (show real armor)
    bool hideHelmet = false;
};

std::mutex g_mutex;
std::unordered_map<std::string, LayeredLoadout> g_profiles;
std::string g_activeCharKey;
LayeredLoadout g_current{};
bool g_profilesLoaded = false;

std::atomic<bool> g_menuOpen{false};
std::atomic<int> g_closeCooldownFrames{0};
std::atomic<bool> g_reloadPending{false};
std::atomic<int> g_origRootCount{0};
std::atomic<int> g_injectedRootCount{0};
std::atomic<uint32_t> g_lastMenuPtr{0};
std::atomic<uint32_t> g_lastDrawFrame{0};

bool InRam(uint32_t addr) {
    return (addr >= 0x80000000u && addr < 0x81800000u) ||
           (addr >= 0x90000000u && addr < 0x94000000u);
}

uint32_t ArmorDataTable(uint32_t kind) {
    if (kind < 1 || kind > 5) return 0;
    const uint32_t list = Memory::Read32(kEquipmentData);
    if (!InRam(list)) return 0;
    const uint32_t table = Memory::Read32(list + 4u * (kind - 1u));
    return InRam(table) ? table : 0;
}

uint32_t ArmorNameTable(uint32_t kind) {
    if (kind < 1 || kind > 5) return 0;
    // Matches func_8027EA54: *(0x806ADC90 + 8) is the array of armor name pointer tables
    const uint32_t list = Memory::Read32(kEquipmentData + 8u);
    if (!InRam(list)) return 0;
    const uint32_t table = Memory::Read32(list + 4u * (kind - 1u));
    return InRam(table) ? table : 0;
}

uint32_t ArmorCount(uint32_t kind) {
    if (kind < 1 || kind > 5) return 0;
    const uint32_t count = Memory::Read32(kEquipmentCounts + 4u * (kind - 1u));
    return count <= 200u ? count : 0u;
}

// Convert MH3's Latin-1 / Windows-1252 localized C-string in guest RAM to UTF-8.
std::string ReadGuestLatin1String(uint32_t ptr, size_t maxLen = 96) {
    if (!InRam(ptr)) return {};
    std::string out;
    out.reserve(32);
    for (size_t i = 0; i < maxLen; ++i) {
        const uint8_t ch = Memory::Read8(ptr + static_cast<uint32_t>(i));
        if (ch == 0) break;
        if (ch < 0x80) {
            out.push_back(static_cast<char>(ch));
        } else {
            // Latin-1 to UTF-8
            out.push_back(static_cast<char>(0xC0u | (ch >> 6)));
            out.push_back(static_cast<char>(0x80u | (ch & 0x3Fu)));
        }
    }
    return out;
}

std::string ReadActiveCharacterKey() {
    const uint32_t user = Cheats::UserData();
    if (!InRam(user)) return {};
    // Character name is UTF-16BE or ASCII at userdata+0x00 (in MH3 RMHP08 it's ASCII/Latin-1 at +0x00, 16 bytes)
    std::string name;
    for (uint32_t i = 0; i < 16; ++i) {
        const uint8_t c = Memory::Read8(user + i);
        if (c == 0) break;
        if (c >= 0x20 && c < 0x7F && c != '=' && c != '\n' && c != '\r') {
            name.push_back(static_cast<char>(c));
        } else {
            char hex[8];
            std::snprintf(hex, sizeof(hex), "_%02X", c);
            name += hex;
        }
    }
    return name;
}

std::string GetConfigPath() {
    if (const char* env = std::getenv("MH3_USER_DIR")) {
        if (env[0] != '\0') {
            std::string p(env);
            if (p.back() != '/') p.push_back('/');
            return p + "MH3UI.layered";
        }
    }
    return "MH3UI.layered";
}

void LoadProfilesLocked() {
    if (g_profilesLoaded) return;
    g_profilesLoaded = true;
    std::ifstream in(GetConfigPath());
    if (!in.is_open()) return;
    std::string line;
    while (std::getline(in, line)) {
        if (line.empty() || line[0] == '#') continue;
        const size_t eq = line.find('=');
        if (eq == std::string::npos || eq == 0) continue;
        std::string key = line.substr(0, eq);
        std::string vals = line.substr(eq + 1);
        LayeredLoadout lo{};
        int c = 0, a = 0, w = 0, l = 0, h = 0, hide = 0;
        if (std::sscanf(vals.c_str(), "%d,%d,%d,%d,%d,%d", &c, &a, &w, &l, &h, &hide) >= 5) {
            lo.armorId[0] = static_cast<uint16_t>(std::max(0, c));
            lo.armorId[1] = static_cast<uint16_t>(std::max(0, a));
            lo.armorId[2] = static_cast<uint16_t>(std::max(0, w));
            lo.armorId[3] = static_cast<uint16_t>(std::max(0, l));
            lo.armorId[4] = static_cast<uint16_t>(std::max(0, h));
            lo.hideHelmet = (hide != 0);
            g_profiles[key] = lo;
        }
    }
}

void SaveProfilesLocked() {
    if (!g_activeCharKey.empty()) {
        g_profiles[g_activeCharKey] = g_current;
    }
    std::ofstream out(GetConfigPath(), std::ios::trunc);
    if (!out.is_open()) return;
    out << "# OceanTriRecomp Layered Armor Loadouts (chest,arms,waist,legs,helm,hideHelmet)\n";
    for (const auto& kv : g_profiles) {
        const auto& lo = kv.second;
        out << kv.first << "="
            << lo.armorId[0] << ","
            << lo.armorId[1] << ","
            << lo.armorId[2] << ","
            << lo.armorId[3] << ","
            << lo.armorId[4] << ","
            << (lo.hideHelmet ? 1 : 0) << "\n";
    }
}

void SyncCharacterLocked() {
    LoadProfilesLocked();
    const std::string key = ReadActiveCharacterKey();
    if (key.empty() || key == g_activeCharKey) return;
    g_activeCharKey = key;
    auto it = g_profiles.find(key);
    if (it != g_profiles.end()) {
        g_current = it->second;
    } else {
        g_current = LayeredLoadout{};
    }
    g_reloadPending.store(true, std::memory_order_release);
}

uint8_t ResolveArmorModelId(uint32_t kind, uint16_t armorId, uint8_t sex) {
    if (kind < 1 || kind > 5 || armorId == 0) return 0;
    const uint32_t table = ArmorDataTable(kind);
    const uint32_t count = ArmorCount(kind);
    if (table == 0 || armorId >= count) return 0;
    return Memory::Read8(table + uint32_t(armorId) * kArmorEntryStride + 2u + (sex ? 1u : 0u));
}

bool IsArmorInEquipmentBoxOrWorn(uint32_t user, uint32_t plw, uint32_t kind, uint16_t armorId) {
    if (kind < 1 || kind > 5 || armorId == 0) return false;

    // 1) Check Equipment Box (user + 0xE00, 12-byte records)
    if (InRam(user)) {
        for (uint32_t slot = 0; slot < kEquipBoxMaxSlots; ++slot) {
            const uint32_t rec = user + kUserEquipBox + slot * 12u;
            const uint8_t recKind = Memory::Read8(rec);
            if (recKind == kind && Memory::Read16(rec + 2u) == armorId) {
                return true;
            }
        }
    }

    // 2) Check currently equipped armor on local hunter
    if (InRam(plw)) {
        const uint32_t rec = plw + kPlwArmorBase + (kind - 1u) * kPlwArmorStride;
        if (Memory::Read8(rec) == kind && Memory::Read16(rec + 2u) == armorId) {
            return true;
        }
    }

    return false;
}

// Triggers live 3D armor model reload on the guest CPU thread for all 5 armor slots.
void ApplyPendingReloadOnGuestThread(CpuContext* ctx) {
    if (!g_reloadPending.exchange(false, std::memory_order_acq_rel)) return;

    const uint32_t plw = Cheats::LocalPlayer();
    if (!InRam(plw)) return;

    GuestFrame frame(ctx, 0x20);
    GuestCall game{ctx};

    // For each armor slot (0=chest, 1=arms, 2=waist, 3=legs, 4=helm):
    // Call 0x8027EC0C (our hooked GetArmorModelId) and then 0x802739FC (queue part model change).
    for (uint32_t part = 0; part < 5; ++part) {
        const uint32_t equipRec = plw + kPlwArmorBase + part * kPlwArmorStride;
        const uint32_t modelId = game.Call<0x8027EC0C>({plw, equipRec});
        game.Call<0x802739FC>({plw, part, modelId});
    }

    // Recompute hair/face visibility mask for the (possibly changed/hidden) helmet.
    game.Call<0x80229D18>({plw});
}

} // namespace

namespace LayeredArmor {

bool IsMenuOpen() {
    return g_menuOpen.load(std::memory_order_acquire);
}

void OpenMenu() {
    SyncActiveCharacter();
    g_menuOpen.store(true, std::memory_order_release);
}

void CloseMenu() {
    g_closeCooldownFrames.store(12, std::memory_order_release);
    g_menuOpen.store(false, std::memory_order_release);
}

uint16_t GetLayeredId(int slot) {
    if (slot < 0 || slot >= kSlotCount) return 0;
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_current.armorId[slot];
}

void SetLayeredId(int slot, uint16_t armorId) {
    if (slot < 0 || slot >= kSlotCount) return;
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        SyncCharacterLocked();
        g_current.armorId[slot] = armorId;
        if (slot == 4 && armorId != 0) {
            // Equipping a layered helmet automatically turns off "Hide Helmet"
            g_current.hideHelmet = false;
        }
        SaveProfilesLocked();
    }
    g_reloadPending.store(true, std::memory_order_release);
}

bool GetHideHelmet() {
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_current.hideHelmet;
}

void SetHideHelmet(bool hide) {
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        SyncCharacterLocked();
        g_current.hideHelmet = hide;
        SaveProfilesLocked();
    }
    g_reloadPending.store(true, std::memory_order_release);
}

void ClearAll() {
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        SyncCharacterLocked();
        g_current = LayeredLoadout{};
        SaveProfilesLocked();
    }
    g_reloadPending.store(true, std::memory_order_release);
}

std::string GetArmorName(int slot, uint16_t armorId) {
    if (slot < 0 || slot >= kSlotCount || armorId == 0) return {};
    const uint32_t kind = static_cast<uint32_t>(slot + 1);
    const uint32_t count = ArmorCount(kind);
    const uint32_t nameTable = ArmorNameTable(kind);
    if (nameTable == 0 || armorId >= count) return {};
    const uint32_t namePtr = Memory::Read32(nameTable + uint32_t(armorId) * 4u);
    std::string name = ReadGuestLatin1String(namePtr);
    if (name.empty()) {
        char fallback[32];
        std::snprintf(fallback, sizeof(fallback), "Armor #%u", unsigned(armorId));
        name = fallback;
    }
    return name;
}

std::string GetEquippedArmorName(int slot) {
    if (slot < 0 || slot >= kSlotCount) return {};
    const uint32_t plw = Cheats::LocalPlayer();
    if (!InRam(plw)) return {};
    const uint32_t rec = plw + kPlwArmorBase + static_cast<uint32_t>(slot) * kPlwArmorStride;
    const uint16_t id = Memory::Read16(rec + 2u);
    if (id == 0) return {};
    return GetArmorName(slot, id);
}

std::vector<CraftedArmorEntry> GetCraftedArmorsForSlot(int slot) {
    std::vector<CraftedArmorEntry> result;
    if (slot < 0 || slot >= kSlotCount) return result;

    const uint32_t kind = static_cast<uint32_t>(slot + 1);
    const uint32_t count = ArmorCount(kind);
    const uint32_t table = ArmorDataTable(kind);
    const uint32_t user = Cheats::UserData();
    const uint32_t plw = Cheats::LocalPlayer();
    if (count <= 1 || table == 0 || !InRam(user)) return result;

    const uint8_t sex = InRam(plw) ? Memory::Read8(plw + kPlwSexOffset) : 0;

    for (uint32_t id = 1; id < count; ++id) {
        const uint8_t modelId = ResolveArmorModelId(kind, static_cast<uint16_t>(id), sex);
        if (modelId == 0) continue; // Skip dummy / opposite-gender-only entries

        if (!IsArmorInEquipmentBoxOrWorn(user, plw, kind, static_cast<uint16_t>(id))) continue;

        std::string name = GetArmorName(slot, static_cast<uint16_t>(id));
        if (name.empty() || name.find("Dummy") != std::string::npos || name.find("dummy") != std::string::npos) {
            continue;
        }

        CraftedArmorEntry entry;
        entry.id = static_cast<uint16_t>(id);
        entry.modelId = modelId;
        entry.name = std::move(name);
        result.push_back(std::move(entry));
    }

    return result;
}

void SyncActiveCharacter() {
    std::lock_guard<std::mutex> lock(g_mutex);
    SyncCharacterLocked();
}

} // namespace LayeredArmor

bool IsLocalPlayerPlw(uint32_t plw) {
    if (!InRam(plw)) return false;
    const uint8_t myIdx = Memory::Read8(0x8065AA87u); // system_w + 0x27 (MyPlayerIndex)
    const uint32_t myPlw = Cheats::MoveWork(Cheats::Kind::Player, myIdx);
    if (myPlw != 0) {
        return plw == myPlw;
    }
    // During early quest / Moga Woods / village spawn before MoveWork is populated
    return Memory::Read8(plw + 8u) == myIdx;
}

// ============================================================================
// Hook 1: 0x8027EC0C (GetArmorModelId(plw, equipRecord))
// Substitutes the 3D armor model ID for the local player when layered armor is
// active, while leaving real armor stats/skills/defense 100% untouched.
// ============================================================================
extern "C" void MH3_LayeredArmorGetModelId(CpuContext* ctx) {
    const uint32_t plw = ctx->gpr[3];
    const uint32_t equipRec = ctx->gpr[4];

    if (InRam(plw) && InRam(equipRec) && IsLocalPlayerPlw(plw)) {
        const uint8_t kind = Memory::Read8(equipRec);
        if (kind >= 1 && kind <= 5) {
            uint16_t layeredId = 0;
            bool hideHelm = false;
            {
                std::lock_guard<std::mutex> lock(g_mutex);
                SyncCharacterLocked();
                layeredId = g_current.armorId[kind - 1];
                hideHelm = g_current.hideHelmet;
            }

            if (kind == 5 && hideHelm) {
                ctx->gpr[3] = 0;
                return;
            }

            if (layeredId > 0) {
                const uint8_t sex = Memory::Read8(plw + kPlwSexOffset);
                const uint8_t modelId = ResolveArmorModelId(kind, layeredId, sex);
                if (modelId > 0) {
                    ctx->gpr[3] = modelId;
                    return;
                }
            }
        }
    }

    func_8027EC0C(ctx);
}

REGISTER_NATIVE_FUNCTION_AS(0x8027EC0C, MH3_LayeredArmorGetModelId, "LayeredArmorGetModelId");

// ============================================================================
// Helper: Ensure our +1 root menu row is injected into temporary RAM for `menu`
// ============================================================================
int EnsureItemBoxInjected(uint32_t menu) {
    if (!InRam(menu) || Memory::Read8(menu + 3u) != 0) {
        return 0;
    }

    const int16_t curCount = static_cast<int16_t>(Memory::Read16(menu + 12u));
    const uint32_t prevMenu = g_lastMenuPtr.load(std::memory_order_acquire);
    const int prevOrig = g_origRootCount.load(std::memory_order_acquire);
    const int prevInj = g_injectedRootCount.load(std::memory_order_acquire);

    // Already injected for this menu instance
    if (menu == prevMenu && prevOrig >= 2 && curCount == prevInj) {
        return prevOrig;
    }

    // Fresh Item Box open (or game reset menu+12 back to its native count 2..7)
    if (curCount >= 2 && curCount <= 7) {
        g_lastMenuPtr.store(menu, std::memory_order_release);
        g_origRootCount.store(curCount, std::memory_order_release);
        g_injectedRootCount.store(curCount + 1, std::memory_order_release);
        Memory::Write16(menu + 12u, static_cast<uint16_t>(curCount + 1));
        return curCount;
    }

    return 0;
}

// ============================================================================
// Hook 2: 0x801F3E50 (Sub-menu / Appearance Init) - passthrough
// ============================================================================
extern "C" void MH3_LayeredArmorItemBoxInit(CpuContext* ctx) {
    func_801F3E50(ctx);
}

REGISTER_NATIVE_FUNCTION_AS(0x801F3E50, MH3_LayeredArmorItemBoxInit, "LayeredArmorItemBoxInit");

// ============================================================================
// Hook 3: 0x801F5618 (Item Box Root Menu Draw)
// Draws the native Item Box menu and injects our extra row directly underneath
// the last native option using the game's own UI sprite & font renderers!
// ============================================================================
extern "C" void MH3_LayeredArmorItemBoxDraw(CpuContext* ctx) {
    const uint32_t menu = ctx->gpr[3];
    const int origN = EnsureItemBoxInjected(menu);

    if (origN < 2 || origN > 7) {
        func_801F5618(ctx);
        return;
    }

    // Compute native row spacing (dy), draw extended parchment strip BEHIND the menu,
    // and temporarily shift the bottom scroll roller down by +dy during func_801F5618.
    int16_t dy = 34;
    uint32_t slot0Ptr = 0, slot1Ptr = 0, lastSlotPtr = 0;
    struct SavedSpriteY { uint32_t ptr; uint16_t origY; };
    std::array<SavedSpriteY, 18> shiftedSprites{};
    int shiftedCount = 0;

    {
        GuestFrame frame(ctx, 0x40);
        GuestCall game{ctx};
        const uint32_t anchorBuf = frame[0x10];
        game.Call<0x802E05B4>({6784u, anchorBuf});

        slot0Ptr = game.Call<0x802E05B4>({6804u, 0u});
        slot1Ptr = game.Call<0x802E05B4>({6805u, 0u});
        const uint16_t lastSlotId = Memory::Read16(kRootSlotsTable + static_cast<uint32_t>(origN - 1) * 2u);
        lastSlotPtr = game.Call<0x802E05B4>({lastSlotId, 0u});

        if (InRam(slot0Ptr) && InRam(slot1Ptr) && InRam(lastSlotPtr)) {
            dy = static_cast<int16_t>(
                static_cast<int16_t>(Memory::Read16(slot1Ptr + 2u)) -
                static_cast<int16_t>(Memory::Read16(slot0Ptr + 2u)));

            const uint8_t boxMode = Memory::Read8(menu + 2u);

            // Draw the extended parchment backing strip BEFORE func_801F5618 so it never covers rows 4..6!
            const uint16_t barSpriteId = (boxMode == 0) ? 6803u : 6800u;
            const uint32_t barPtr = game.Call<0x802E05B4>({barSpriteId, 0u});
            if (InRam(barPtr)) {
                const uint16_t savedY = Memory::Read16(barPtr + 2u);
                const int16_t shiftedY = static_cast<int16_t>(static_cast<int16_t>(savedY) + dy);
                Memory::Write16(barPtr + 2u, static_cast<uint16_t>(shiftedY));
                game.Call<0x802E0D48>({barPtr, Memory::Read32(barPtr + 32u), boxMode == 0 ? 0u : 1u, anchorBuf});
                Memory::Write16(barPtr + 2u, savedY);
            }

            // Shift bottom scroll roller pieces (strictly below lastSlot.y) down by +dy
            const int16_t lastSlotY = static_cast<int16_t>(Memory::Read16(lastSlotPtr + 2u));
            const uint32_t frameTable = (boxMode == 0) ? 0x805B8FE4u : 0x805B9008u;
            for (int i = 0; i < 18; ++i) {
                const uint16_t sid = Memory::Read16(frameTable + static_cast<uint32_t>(i) * 2u);
                if (sid == 0xFFFFu) break;
                const uint32_t sp = game.Call<0x802E05B4>({sid, 0u});
                if (!InRam(sp)) continue;
                const int16_t sy = static_cast<int16_t>(Memory::Read16(sp + 2u));
                if (sy > lastSlotY) {
                    shiftedSprites[shiftedCount++] = {sp, static_cast<uint16_t>(sy)};
                    Memory::Write16(sp + 2u, static_cast<uint16_t>(sy + dy));
                }
            }
        }
    }

    // Temporarily swap the bottom description box string in table 3 when our row is highlighted
    const bool subMenuClosed = (static_cast<int16_t>(Memory::Read16(menu + 10u)) == 0);
    const bool isRowSelected = (static_cast<int16_t>(Memory::Read16(menu + 6u)) == origN);
    const bool isSpanish = (Memory::Read8(kLanguageAddr) == 5u);

    uint32_t savedDescEntryAddr = 0;
    uint32_t savedDescPtr = 0;

    {
        // Keep descFrame alive across func_801F5618 so descBuf on the guest stack stays valid
        GuestFrame descFrame(ctx, 0x80);
        if (isRowSelected && subMenuClosed) {
            const uint16_t descStrId = Memory::Read16(0x805B8DB8u + static_cast<uint32_t>(origN) * 2u);
            const uint32_t strTables = Memory::Read32(ctx->gpr[13] - 17204u);
            if (InRam(strTables)) {
                const uint32_t table3 = Memory::Read32(strTables + 12u);
                if (InRam(table3) && descStrId < 507u) {
                    const uint32_t entryAddr = table3 + static_cast<uint32_t>(descStrId) * 4u;
                    const uint32_t descBuf = descFrame[0x10];
                    const char* descText = isSpanish
                        ? "Cambia la apariencia de tu equipamiento."
                        : "Change the appearance of your equipment.";
                    const size_t dlen = std::strlen(descText);
                    for (size_t i = 0; i <= dlen && i < 96; ++i) {
                        Memory::Write8(descBuf + static_cast<uint32_t>(i), static_cast<uint8_t>(descText[i]));
                    }
                    savedDescEntryAddr = entryAddr;
                    savedDescPtr = Memory::Read32(entryAddr);
                    Memory::Write32(entryAddr, descBuf);
                }
            }
        }

        // Temporarily restore original count so func_801F5618 only loops over native root_slots[0..origN-1]
        ctx->gpr[3] = menu;
        Memory::Write16(menu + 12u, static_cast<uint16_t>(origN));
        func_801F5618(ctx);
        Memory::Write16(menu + 12u, static_cast<uint16_t>(origN + 1));

        // Immediately restore the original table 3 string pointer in RAM
        if (savedDescEntryAddr != 0) {
            Memory::Write32(savedDescEntryAddr, savedDescPtr);
        }
    }

    // Immediately restore any shifted bottom border sprites in RAM
    for (int i = 0; i < shiftedCount; ++i) {
        Memory::Write16(shiftedSprites[i].ptr + 2u, shiftedSprites[i].origY);
    }

    if (!InRam(slot0Ptr) || !InRam(slot1Ptr) || !InRam(lastSlotPtr)) {
        return;
    }

    // Render our injected row (index = origN) using the game's native button+font renderer
    GuestFrame frame(ctx, 0x80);
    GuestCall game{ctx};

    const uint32_t anchorBuf = frame[0x10]; // { s16 x, s16 y }
    const uint32_t drawXYBuf = frame[0x18]; // { s16 x, s16 y }
    const uint32_t strBuf = frame[0x20];    // 64-byte scratch C-string in guest stack

    game.Call<0x802E05B4>({6784u, anchorBuf});

    // Native highlight & color calculation matching func_801F5618
    const uint32_t glowFlag = (isRowSelected && subMenuClosed) ? 1u : 0u;
    const uint32_t color = game.Call<0x802AA450>({1u, isRowSelected ? 1u : 0u, subMenuClosed ? 1u : 0u, 0u});

    const int16_t drawX = static_cast<int16_t>(
        static_cast<int16_t>(Memory::Read16(anchorBuf)) +
        static_cast<int16_t>(Memory::Read16(lastSlotPtr)));
    const int16_t drawY = static_cast<int16_t>(
        static_cast<int16_t>(Memory::Read16(anchorBuf + 2u)) +
        static_cast<int16_t>(Memory::Read16(lastSlotPtr + 2u)) + dy);
    Memory::Write16(drawXYBuf, static_cast<uint16_t>(drawX));
    Memory::Write16(drawXYBuf + 2u, static_cast<uint16_t>(drawY));

    // Write localized label to temporary guest stack RAM (system_w+9: 5 = Spanish)
    const char* label = isSpanish ? "Armadura Superp." : "Layered Armor";
    const size_t len = std::strlen(label);
    for (size_t i = 0; i <= len && i < 60; ++i) {
        Memory::Write8(strBuf + static_cast<uint32_t>(i), static_cast<uint8_t>(label[i]));
    }

    // Draw using MH3's own native menu button + text renderer
    game.Call<0x80215CFC>({strBuf, glowFlag, drawXYBuf, color, 0u});
}

REGISTER_NATIVE_FUNCTION_AS(0x801F5618, MH3_LayeredArmorItemBoxDraw, "LayeredArmorItemBoxDraw");

// ============================================================================
// Hook 4: 0x801ECBA4 (Item Box Root Menu Input)
// Handles confirming our injected "Armadura Superpuesta" row, pauses Item Box
// input while our Transmog UI is open, and executes live 3D armor reloads!
// ============================================================================
extern "C" void MH3_LayeredArmorItemBoxInput(CpuContext* ctx) {
    // Always apply any pending live 3D armor reload cleanly on the guest thread
    ApplyPendingReloadOnGuestThread(ctx);

    // While our Transmog selector is open (or during brief post-close debounce),
    // freeze Item Box input so held touch/gamepad A or B never bleed through or reopen it.
    if (LayeredArmor::IsMenuOpen()) {
        ctx->gpr[3] = 0;
        return;
    }
    if (int cd = g_closeCooldownFrames.load(std::memory_order_acquire); cd > 0) {
        g_closeCooldownFrames.store(cd - 1, std::memory_order_release);
        ctx->gpr[3] = 0;
        return;
    }

    const uint32_t menu = Memory::Read32(kItemBoxPtrAddr);
    const int origN = EnsureItemBoxInjected(menu);

    if (origN >= 2 && origN <= 7) {
        const int16_t subOpen = static_cast<int16_t>(Memory::Read16(menu + 10u));
        const int16_t cursor = static_cast<int16_t>(Memory::Read16(menu + 6u));

        if (subOpen == 0 && cursor == origN) {
            GuestFrame frame(ctx, 0x20);
            GuestCall game{ctx};
            // Check if confirm button (A = 16) was pressed this frame
            if ((game.Call<0x802121A0>({16u}) & 0xFFu) == 1u) {
                game.Call<0x800DBC94>({0u}); // Native confirm SFX
                LayeredArmor::OpenMenu();
                ctx->gpr[3] = 0;
                return;
            }
        }
    }

    func_801ECBA4(ctx);
}

REGISTER_NATIVE_FUNCTION_AS(0x801ECBA4, MH3_LayeredArmorItemBoxInput, "LayeredArmorItemBoxInput");
