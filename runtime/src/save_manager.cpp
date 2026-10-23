#include "save_manager.h"
#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <system_error>

namespace mh3_save_manager {
namespace {
std::string Timestamp() {
    const auto now = std::chrono::system_clock::now();
    const auto time = std::chrono::system_clock::to_time_t(now);
    const auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() % 1000;
    std::tm local{};
#if defined(_WIN32)
    localtime_s(&local, &time);
#else
    localtime_r(&time, &local);
#endif
    std::ostringstream out;
    out << std::put_time(&local, "%Y%m%d-%H%M%S") << '-' << std::setw(3) << std::setfill('0') << millis;
    return out.str();
}
bool HasFiles(const fs::path& folder) noexcept {
    std::error_code ec;
    if (!fs::is_directory(folder, ec) || ec) return false;
    fs::recursive_directory_iterator it(folder, fs::directory_options::skip_permission_denied, ec), end;
    while (!ec && it != end) {
        std::error_code fileError;
        if (it->is_regular_file(fileError) && !fileError) return true;
        it.increment(ec);
    }
    return false;
}
bool CopyContents(const fs::path& source, const fs::path& destination) {
    std::error_code ec;
    if (!fs::is_directory(source, ec) || ec) return false;
    fs::create_directories(destination, ec);
    if (ec) return false;
    fs::directory_iterator it(source, fs::directory_options::skip_permission_denied, ec), end;
    while (!ec && it != end) {
        std::error_code copyError;
        fs::copy(it->path(), destination / it->path().filename(),
            fs::copy_options::recursive | fs::copy_options::overwrite_existing, copyError);
        if (copyError) return false;
        it.increment(ec);
    }
    return !ec;
}
fs::path UniqueFolder(const fs::path& parent, const std::string& prefix) {
    std::error_code ec;
    fs::create_directories(parent, ec);
    if (ec) return {};
    const std::string base = prefix + Timestamp();
    for (unsigned suffix = 0; suffix < 1000; ++suffix) {
        const fs::path candidate = parent / (suffix == 0 ? base : base + '-' + std::to_string(suffix));
        ec.clear();
        if (fs::exists(candidate, ec)) {
            if (ec) return {};
            continue;
        }
        ec.clear();
        if (fs::create_directory(candidate, ec)) return candidate;
        if (ec && ec != std::errc::file_exists) return {};
    }
    return {};
}
fs::path SourceDataDirectory(const fs::path& selected) {
    std::error_code ec;
    if (!fs::is_directory(selected, ec) || ec) return {};
    const fs::path candidates[] = {
        selected / "data",
        selected / "title" / "00010000" / "524d4850" / "data",
        selected / "title" / "00010000" / "524D4850" / "data",
        selected / "Wii" / "title" / "00010000" / "524d4850" / "data",
        selected / "Wii" / "title" / "00010000" / "524D4850" / "data",
        selected / "User" / "Wii" / "title" / "00010000" / "524d4850" / "data"
    };
    for (const auto& candidate : candidates) if (HasFiles(candidate)) return candidate;
    if (selected.filename() == "data" && HasFiles(selected)) return selected;
    return {};
}
void RemoveTree(const fs::path& path) noexcept {
    std::error_code ec;
    fs::remove_all(path, ec);
}
}

fs::path ResolveSaveDataDirectory(const fs::path& nandRoot) {
    const fs::path candidates[] = {
        nandRoot / "title" / "00010000" / "524d4850" / "data",
        nandRoot / "title" / "00010000" / "524D4850" / "data",
        nandRoot / "Wii" / "title" / "00010000" / "524d4850" / "data",
        nandRoot / "Wii" / "title" / "00010000" / "524D4850" / "data",
        nandRoot / "User" / "Wii" / "title" / "00010000" / "524d4850" / "data"
    };
    for (const auto& candidate : candidates) if (HasFiles(candidate)) return candidate;
    // Preserve an existing empty save directory as well; this matters on case-sensitive filesystems.
    for (const auto& candidate : candidates) {
        std::error_code ec;
        if (fs::is_directory(candidate, ec) && !ec) return candidate;
    }
    return candidates[0];
}
bool HasSaveData(const fs::path& saveData) noexcept { return HasFiles(saveData); }
bool HasPendingImport(const fs::path& pendingRoot) noexcept { return HasFiles(pendingRoot / "data"); }

Result CreateBackup(const fs::path& saveData, const fs::path& backupsRoot) {
    if (!HasFiles(saveData)) return {false, {}, "no-save-data"};
    const auto destination = UniqueFolder(backupsRoot, "Backup-");
    if (destination.empty()) return {false, {}, "backup-folder-create-failed"};
    if (!CopyContents(saveData, destination / "data")) {
        RemoveTree(destination);
        return {false, {}, "backup-copy-failed"};
    }
    return {true, destination, {}};
}
Result ExportSave(const fs::path& saveData, const fs::path& exportParent) {
    if (!HasFiles(saveData)) return {false, {}, "no-save-data"};
    std::error_code ec;
    if (!fs::is_directory(exportParent, ec) || ec) return {false, {}, "export-parent-missing"};
    const auto bundle = UniqueFolder(exportParent, "MH3-RMHP08-");
    if (bundle.empty()) return {false, {}, "export-folder-create-failed"};
    // Keep the standard Dolphin/Cemu title layout so an exported folder can be re-imported.
    if (!CopyContents(saveData, bundle / "title" / "00010000" / "524d4850" / "data")) {
        RemoveTree(bundle);
        return {false, {}, "export-copy-failed"};
    }
    std::ofstream readme(bundle / "LEEME.txt", std::ios::binary | std::ios::trunc);
    readme << "Monster Hunter Tri - guardado exportado\n"
              "Region: Europa\n"
              "Codigo del juego: RMHP08\n"
              "ID de titulo: 00010000/524D4850\n\n"
              "Para importar, abre MH3, entra en Gestor de Guardados > Importar\n"
              "y selecciona esta carpeta. La importacion se aplica al cerrar MH3.\n";
    if (!readme) {
        RemoveTree(bundle);
        return {false, {}, "readme-write-failed"};
    }
    return {true, bundle, {}};
}
Result StageImport(const fs::path& selectedFolder, const fs::path& pendingRoot) {
    const auto source = SourceDataDirectory(selectedFolder);
    if (source.empty()) return {false, {}, "invalid-import-folder"};
    const auto parent = pendingRoot.parent_path();
    const auto transactionTag = Timestamp();
    const auto fresh = parent / ("PendingImport.new-" + transactionTag);
    const auto old = parent / ("PendingImport.previous-" + transactionTag);
    std::error_code ec;
    fs::create_directories(parent, ec);
    if (ec) return {false, {}, "pending-folder-create-failed"};
    if (fs::exists(fresh, ec) || ec || fs::exists(old, ec) || ec) return {false, {}, "pending-transaction-name-collision"};
    if (!CopyContents(source, fresh / "data")) {
        RemoveTree(fresh);
        return {false, {}, "pending-copy-failed"};
    }
    std::ofstream manifest(fresh / "IMPORTACION_PENDIENTE.txt", std::ios::binary | std::ios::trunc);
    manifest << "La importacion se aplicara al cerrar MH3.\n"
                "Antes de sustituir la partida actual se guardara un backup automatico.\n";
    manifest.close();
    if (!manifest) {
        RemoveTree(fresh);
        return {false, {}, "pending-manifest-write-failed"};
    }
    const bool hadPending = fs::exists(pendingRoot, ec);
    if (ec) { RemoveTree(fresh); return {false, {}, "pending-check-failed"}; }
    if (hadPending) {
        fs::rename(pendingRoot, old, ec);
        if (ec) { RemoveTree(fresh); return {false, {}, "pending-rename-failed"}; }
    }
    fs::rename(fresh, pendingRoot, ec);
    if (ec) {
        if (hadPending) {
            std::error_code restoreError;
            fs::rename(old, pendingRoot, restoreError);
        }
        RemoveTree(fresh);
        return {false, {}, "pending-commit-failed"};
    }
    RemoveTree(old);
    return {true, pendingRoot, {}};
}
Result ApplyPendingImport(const fs::path& saveData, const fs::path& pendingRoot, const fs::path& backupsRoot) {
    const auto staged = pendingRoot / "data";
    if (!HasFiles(staged)) return {true, {}, "no-pending-import"};
    if (HasFiles(saveData)) {
        const auto backup = CreateBackup(saveData, backupsRoot);
        if (!backup.success) return {false, {}, "automatic-backup-failed"};
    }
    std::error_code ec;
    fs::create_directories(saveData.parent_path(), ec);
    if (ec) return {false, {}, "save-parent-create-failed"};
    const auto transactionTag = Timestamp();
    const auto fresh = saveData.parent_path() / (saveData.filename().string() + ".mh3-new-" + transactionTag);
    const auto old = saveData.parent_path() / (saveData.filename().string() + ".mh3-old-" + transactionTag);
    if (fs::exists(fresh, ec) || ec || fs::exists(old, ec) || ec) return {false, {}, "save-transaction-name-collision"};
    if (!CopyContents(staged, fresh)) {
        RemoveTree(fresh);
        return {false, {}, "import-copy-failed"};
    }
    const bool hadCurrent = fs::exists(saveData, ec);
    if (ec) { RemoveTree(fresh); return {false, {}, "save-check-failed"}; }
    if (hadCurrent) {
        fs::rename(saveData, old, ec);
        if (ec) { RemoveTree(fresh); return {false, {}, "save-rename-failed"}; }
    }
    fs::rename(fresh, saveData, ec);
    if (ec) {
        if (hadCurrent) {
            std::error_code restoreError;
            fs::rename(old, saveData, restoreError);
        }
        RemoveTree(fresh);
        return {false, {}, "import-commit-failed"};
    }
    RemoveTree(old);
    RemoveTree(pendingRoot);
    return {true, saveData, {}};
}
}