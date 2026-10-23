#pragma once

#include <string>
#include <vector>
#include <filesystem>
#include <cstdint>

struct ModInfo {
    std::string id;
    std::string name;
    std::string author;
    std::string version;
    std::string description;
    std::filesystem::path path;
    bool enabled = true;
    size_t fileCount = 0;
};

namespace ModManager {

void Init();
bool IsMasterEnabled();
void SetMasterEnabled(bool enabled);

const std::vector<ModInfo>& GetMods();
void SetModEnabled(size_t index, bool enabled);
void ToggleMod(size_t index);

void RefreshMods();
bool ImportMod(const std::filesystem::path& sourcePath, std::string& outError);
std::filesystem::path GetModsDirectory();

// Scans active mods and applies their file overrides to DiscImage
void ApplyModsToDisc();

} // namespace ModManager
