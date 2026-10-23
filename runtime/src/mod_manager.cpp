#include "mod_manager.h"
#include "disc_image.h"

#include <algorithm>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <iostream>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace ModManager {
namespace {

bool g_masterEnabled = true;
std::vector<ModInfo> g_mods;
std::map<std::string, bool> g_savedStates;

std::filesystem::path ExecutableDirectory() {
#ifdef _WIN32
    wchar_t modulePath[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, modulePath, 32768);
    if (length > 0 && length < 32768)
        return std::filesystem::path(std::wstring(modulePath, length)).parent_path();
#endif
    return std::filesystem::current_path();
}

std::filesystem::path ConfigPath() {
    return ExecutableDirectory() / "MH3UI.mods";
}

void LoadConfig() {
    std::ifstream in(ConfigPath());
    if (!in)
        return;

    std::string line;
    while (std::getline(in, line)) {
        if (line.empty() || line[0] == '#' || line[0] == ';')
            continue;
        if (line.rfind("master_enabled=", 0) == 0) {
            g_masterEnabled = (line.substr(15) != "0");
        } else {
            const auto eq = line.find('=');
            if (eq != std::string::npos) {
                const std::string id = line.substr(0, eq);
                const bool en = (line.substr(eq + 1) != "0");
                g_savedStates[id] = en;
            }
        }
    }
}

void SaveConfig() {
    std::ofstream out(ConfigPath(), std::ios::trunc);
    if (!out)
        return;

    out << "# MH3 Recomp Mod Configuration\n";
    out << "master_enabled=" << (g_masterEnabled ? "1" : "0") << "\n\n";
    for (const auto& mod : g_mods) {
        out << mod.id << "=" << (mod.enabled ? "1" : "0") << "\n";
    }
}

std::string Trim(const std::string& s) {
    auto start = s.find_first_not_of(" \t\r\n");
    if (start == std::string::npos) return "";
    auto end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

void ReadMetadata(ModInfo& info) {
    const auto iniPath = info.path / "mod.ini";
    const auto txtPath = info.path / "mod.txt";
    const auto descPath = info.path / "desc.txt";

    std::filesystem::path target;
    if (std::filesystem::exists(iniPath)) target = iniPath;
    else if (std::filesystem::exists(txtPath)) target = txtPath;
    else if (std::filesystem::exists(descPath)) target = descPath;

    if (!target.empty()) {
        std::ifstream file(target);
        std::string line;
        while (std::getline(file, line)) {
            line = Trim(line);
            if (line.empty() || line[0] == '#' || line[0] == ';') continue;
            auto eq = line.find('=');
            if (eq != std::string::npos) {
                std::string k = Trim(line.substr(0, eq));
                std::string v = Trim(line.substr(eq + 1));
                if (k == "name" || k == "title") info.name = v;
                else if (k == "author") info.author = v;
                else if (k == "version") info.version = v;
                else if (k == "description" || k == "desc") info.description = v;
            } else if (info.description.empty() && target == descPath) {
                info.description = line;
            }
        }
    }

    if (info.name.empty()) info.name = info.id;
    if (info.description.empty()) info.description = "Mod de sustitución de archivos para MH Tri.";
}

size_t CountFiles(const std::filesystem::path& dir) {
    size_t count = 0;
    std::error_code ec;
    for (auto it = std::filesystem::recursive_directory_iterator(dir, ec);
         it != std::filesystem::recursive_directory_iterator(); ++it) {
        if (!it->is_directory(ec)) {
            const auto fn = it->path().filename().string();
            if (fn != "mod.ini" && fn != "mod.txt" && fn != "desc.txt" && fn != "desktop.ini") {
                ++count;
            }
        }
    }
    return count;
}

} // namespace

std::filesystem::path GetModsDirectory() {
    auto dir = ExecutableDirectory() / "mods";
    std::error_code ec;
    std::filesystem::create_directories(dir, ec);
    return dir;
}

void Init() {
    LoadConfig();
    RefreshMods();
    ApplyModsToDisc();
}

bool IsMasterEnabled() {
    return g_masterEnabled;
}

void SetMasterEnabled(bool enabled) {
    if (g_masterEnabled != enabled) {
        g_masterEnabled = enabled;
        SaveConfig();
        ApplyModsToDisc();
    }
}

const std::vector<ModInfo>& GetMods() {
    return g_mods;
}

void SetModEnabled(size_t index, bool enabled) {
    if (index < g_mods.size()) {
        g_mods[index].enabled = enabled;
        g_savedStates[g_mods[index].id] = enabled;
        SaveConfig();
        ApplyModsToDisc();
    }
}

void ToggleMod(size_t index) {
    if (index < g_mods.size()) {
        SetModEnabled(index, !g_mods[index].enabled);
    }
}

void RefreshMods() {
    g_mods.clear();
    const auto modsDir = GetModsDirectory();
    std::error_code ec;
    if (!std::filesystem::exists(modsDir, ec))
        return;

    for (const auto& entry : std::filesystem::directory_iterator(modsDir, ec)) {
        if (entry.is_directory(ec)) {
            ModInfo info;
            info.path = entry.path();
            info.id = entry.path().filename().string();
            ReadMetadata(info);
            info.fileCount = CountFiles(info.path);

            auto it = g_savedStates.find(info.id);
            if (it != g_savedStates.end()) {
                info.enabled = it->second;
            } else {
                info.enabled = true;
                g_savedStates[info.id] = true;
            }

            g_mods.push_back(std::move(info));
        }
    }

    std::sort(g_mods.begin(), g_mods.end(), [](const ModInfo& a, const ModInfo& b) {
        return a.name < b.name;
    });

    SaveConfig();
}

bool ImportMod(const std::filesystem::path& sourcePath, std::string& outError) {
    std::error_code ec;
    if (!std::filesystem::exists(sourcePath, ec)) {
        outError = "El archivo o carpeta seleccionado no existe.";
        return false;
    }

    const auto modsDir = GetModsDirectory();
    const auto ext = sourcePath.extension().string();

    if (std::filesystem::is_directory(sourcePath, ec)) {
        auto dest = modsDir / sourcePath.filename();
        if (std::filesystem::exists(dest, ec)) {
            // Add suffix if exists
            dest = modsDir / (sourcePath.filename().string() + "_copia");
        }
        std::filesystem::copy(sourcePath, dest, std::filesystem::copy_options::recursive | std::filesystem::copy_options::overwrite_existing, ec);
        if (ec) {
            outError = "Error al copiar carpeta: " + ec.message();
            return false;
        }
    } else if (ext == ".zip") {
#ifdef _WIN32
        // Extract zip using PowerShell Expand-Archive
        std::string modName = sourcePath.stem().string();
        auto dest = modsDir / modName;
        std::string cmd = "powershell.exe -NoProfile -ExecutionPolicy Bypass -Command \"Expand-Archive -LiteralPath '" +
                          sourcePath.string() + "' -DestinationPath '" + dest.string() + "' -Force\"";
        int res = std::system(cmd.c_str());
        if (res != 0) {
            outError = "Error al descomprimir el archivo ZIP.";
            return false;
        }
#else
        outError = "Formato de archivo no compatible.";
        return false;
#endif
    } else {
        outError = "Selecciona una carpeta de mod o un archivo .zip.";
        return false;
    }

    RefreshMods();
    ApplyModsToDisc();
    return true;
}

void ApplyModsToDisc() {
    DiscImage& disc = GameDiscImage();
    disc.ClearFileOverrides();

    if (!g_masterEnabled) {
        std::fprintf(stderr, "MH3 Mods: Mods deshabilitados globalmente.\n");
        return;
    }

    size_t totalReplaced = 0;
    std::error_code ec;

    for (const auto& mod : g_mods) {
        if (!mod.enabled) continue;

        for (auto it = std::filesystem::recursive_directory_iterator(mod.path, ec);
             it != std::filesystem::recursive_directory_iterator(); ++it) {
            if (it->is_directory(ec)) continue;

            auto rel = std::filesystem::relative(it->path(), mod.path, ec).generic_string();
            // Skip metadata files
            const auto fn = it->path().filename().string();
            if (fn == "mod.ini" || fn == "mod.txt" || fn == "desc.txt" || fn == "desktop.ini") continue;

            // Strip leading "files/" or "Root/" / "root/"
            if (rel.rfind("files/", 0) == 0) rel = rel.substr(6);
            else if (rel.rfind("Root/", 0) == 0 || rel.rfind("root/", 0) == 0) rel = rel.substr(5);

            std::ifstream file(it->path(), std::ios::binary | std::ios::ate);
            if (!file) continue;

            const auto sz = file.tellg();
            if (sz <= 0) continue;

            std::vector<uint8_t> bytes(static_cast<size_t>(sz));
            file.seekg(0);
            file.read(reinterpret_cast<char*>(bytes.data()), sz);

            if (disc.SetFileOverrideFlexible(rel, std::move(bytes))) {
                ++totalReplaced;
                std::fprintf(stderr, "MH3 Mod [%s]: Reemplazado '%s' (%zu bytes)\n", mod.name.c_str(), rel.c_str(), static_cast<size_t>(sz));
            }
        }
    }

    std::fprintf(stderr, "MH3 Mods: Aplicados %zu archivos reemplazados en total.\n", totalReplaced);
}

} // namespace ModManager
