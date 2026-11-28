#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace LayeredArmor {

// Armor slots matching MH3's equipment kinds (kind = slot + 1):
// 0 = Chest (body), 1 = Arms (arm), 2 = Waist (wst), 3 = Legs (leg), 4 = Head (helm)
constexpr int kSlotCount = 5;

struct CraftedArmorEntry {
    uint16_t id = 0;       // Armor equipment ID in MH3's armor table (1..count-1)
    uint8_t modelId = 0;   // Resolved model ID for the local hunter's sex
    std::string name;      // Localized UTF-8 name from the game's RAM text table
};

// Menu visibility (triggered directly from the injected Item Box root menu option)
bool IsMenuOpen();
void OpenMenu();
void CloseMenu();

// Current layered armor configuration for the active character
uint16_t GetLayeredId(int slot);
void SetLayeredId(int slot, uint16_t armorId);

bool GetHideHelmet();
void SetHideHelmet(bool hide);

void ClearAll();

// Enumerates ONLY armor pieces the local hunter has crafted / owns for `slot` (0..4).
std::vector<CraftedArmorEntry> GetCraftedArmorsForSlot(int slot);

// Localized name of the hunter's currently equipped (real) armor in `slot` (0..4).
std::string GetEquippedArmorName(int slot);

// Localized name of a specific armor piece by slot (0..4) and id.
std::string GetArmorName(int slot, uint16_t armorId);

// Called from the UI/frame loop to load per-character settings when a save loads.
void SyncActiveCharacter();

} // namespace LayeredArmor
