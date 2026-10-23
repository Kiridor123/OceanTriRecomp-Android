#pragma once
#include <filesystem>
#include <string>

namespace mh3_save_manager {
namespace fs = std::filesystem;
struct Result {
    bool success = false;
    fs::path output;
    std::string detail;
};
fs::path ResolveSaveDataDirectory(const fs::path& nandRoot);
bool HasSaveData(const fs::path& saveData) noexcept;
bool HasPendingImport(const fs::path& pendingRoot) noexcept;
Result CreateBackup(const fs::path& saveData, const fs::path& backupsRoot);
Result ExportSave(const fs::path& saveData, const fs::path& exportParent);
Result StageImport(const fs::path& selectedFolder, const fs::path& pendingRoot);
Result ApplyPendingImport(const fs::path& saveData, const fs::path& pendingRoot, const fs::path& backupsRoot);
}