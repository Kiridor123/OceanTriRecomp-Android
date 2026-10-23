#include "texture_replacer.h"
#include "mh3_graphics_settings.h"
#include <xxhash.h>

#include <algorithm>
#include <fstream>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <vector>
#include <cctype>
#include <cstdio>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")
#endif

extern "C" bool g_customTexturesEnabled = false;

namespace TextureReplacer {
namespace {

std::mutex g_textureMutex;
std::map<uint64_t, std::filesystem::path> g_textureIndex;
std::map<uint64_t, std::vector<uint8_t>> g_textureCache;
size_t g_textureCacheBytes = 0;
constexpr size_t kMaxTextureCacheBytes = 64 * 1024 * 1024; // 64 MB RAM cap
bool g_gdiInitialized = false;

#ifdef _WIN32
ULONG_PTR g_gdiToken = 0;
void EnsureGdiPlus() {
    if (!g_gdiInitialized) {
        Gdiplus::GdiplusStartupInput input;
        Gdiplus::GdiplusStartup(&g_gdiToken, &input, nullptr);
        g_gdiInitialized = true;
    }
}
#endif

std::filesystem::path ExecutableDirectory() {
#ifdef _WIN32
    wchar_t modulePath[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, modulePath, 32768);
    if (length > 0 && length < 32768)
        return std::filesystem::path(std::wstring(modulePath, length)).parent_path();
#endif
    return std::filesystem::current_path();
}

uint64_t ParseHashFromFilename(const std::string& filename) {
    // Dolphin formats:
    // tex1_64x64_m_323f465c490059e9_14.png
    // 323f465c490059e9.png
    std::string hex;
    for (size_t i = 0; i < filename.length(); ++i) {
        if (std::isxdigit(static_cast<unsigned char>(filename[i]))) {
            size_t j = i;
            while (j < filename.length() && std::isxdigit(static_cast<unsigned char>(filename[j]))) {
                ++j;
            }
            if (j - i == 16) {
                hex = filename.substr(i, 16);
                break;
            }
            i = j;
        }
    }

    if (!hex.empty()) {
        return std::strtoull(hex.c_str(), nullptr, 16);
    }
    return 0;
}

} // namespace

std::filesystem::path GetTexturesDirectory() {
    auto dir = ExecutableDirectory() / "textures" / "RMHP08";
    std::error_code ec;
    std::filesystem::create_directories(dir, ec);
    return dir;
}

void Refresh() {
    std::lock_guard<std::mutex> lock(g_textureMutex);
    g_textureIndex.clear();
    g_textureCache.clear();
    g_textureCacheBytes = 0;

    const std::vector<std::filesystem::path> searchDirs = {
        GetTexturesDirectory(),
        ExecutableDirectory() / "textures"
    };

    std::error_code ec;
    for (const auto& dir : searchDirs) {
        if (!std::filesystem::exists(dir, ec)) continue;

        for (auto it = std::filesystem::recursive_directory_iterator(dir, ec);
             it != std::filesystem::recursive_directory_iterator(); ++it) {
            if (it->is_directory(ec)) continue;

            const auto ext = it->path().extension().string();
            std::string extLower = ext;
            std::transform(extLower.begin(), extLower.end(), extLower.begin(), ::tolower);

            if (extLower == ".png" || extLower == ".jpg" || extLower == ".bmp" || extLower == ".dds") {
                const auto stem = it->path().stem().string();
                const uint64_t hash = ParseHashFromFilename(stem);
                if (hash != 0) {
                    g_textureIndex[hash] = it->path();
                }
            }
        }
    }

    std::fprintf(stderr, "MH3 TextureReplacer: Indexadas %zu texturas para RMHP08\n", g_textureIndex.size());
}

void Init() {
#ifdef _WIN32
    EnsureGdiPlus();
#endif
    Refresh();
    aurora::set_native_texture_patch(PatchTexture);
}

bool IsEnabled() {
    return g_customTexturesEnabled;
}

void SetEnabled(bool enabled) {
    g_customTexturesEnabled = enabled;
}

size_t GetLoadedTextureCount() {
    std::lock_guard<std::mutex> lock(g_textureMutex);
    return g_textureIndex.size();
}

void PatchTexture(const aurora::NativeTextureSource& source, uint8_t* rgba) {
    if (!g_customTexturesEnabled || !rgba || source.bytes.empty() || source.width == 0 || source.height == 0)
        return;

    const uint64_t hash = XXH64(source.bytes.data(), source.bytes.size(), 0);

    std::filesystem::path filePath;
    {
        std::lock_guard<std::mutex> lock(g_textureMutex);
        auto it = g_textureIndex.find(hash);
        if (it == g_textureIndex.end())
            return;
        filePath = it->second;

        auto cached = g_textureCache.find(hash);
        if (cached != g_textureCache.end()) {
            const size_t expectedSize = size_t(source.width) * source.height * 4;
            if (cached->second.size() == expectedSize) {
                std::memcpy(rgba, cached->second.data(), expectedSize);
                return;
            }
        }
    }

#ifdef _WIN32
    EnsureGdiPlus();
    Gdiplus::Bitmap bitmap(filePath.wstring().c_str());
    if (bitmap.GetLastStatus() == Gdiplus::Ok) {
        const UINT w = source.width;
        const UINT h = source.height;
        const size_t targetBytes = size_t(w) * h * 4;

        std::unique_ptr<Gdiplus::Bitmap> resized;
        Gdiplus::Bitmap* targetBmp = &bitmap;
        if (bitmap.GetWidth() != w || bitmap.GetHeight() != h) {
            resized = std::make_unique<Gdiplus::Bitmap>(w, h, PixelFormat32bppARGB);
            Gdiplus::Graphics graphics(resized.get());
            graphics.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);
            graphics.DrawImage(&bitmap, 0, 0, w, h);
            targetBmp = resized.get();
        }

        Gdiplus::BitmapData bmpData;
        Gdiplus::Rect rect(0, 0, w, h);
        if (targetBmp->LockBits(&rect, Gdiplus::ImageLockModeRead, PixelFormat32bppARGB, &bmpData) == Gdiplus::Ok) {
            std::vector<uint8_t> buffer(targetBytes);
            const uint8_t* scan = static_cast<const uint8_t*>(bmpData.Scan0);

            // GDI+ PixelFormat32bppARGB is BGRA in little-endian byte order
            for (size_t y = 0; y < h; ++y) {
                const uint8_t* rowSrc = scan + y * bmpData.Stride;
                uint8_t* rowDst = buffer.data() + y * w * 4;
                for (size_t x = 0; x < w; ++x) {
                    rowDst[x * 4 + 0] = rowSrc[x * 4 + 2]; // R
                    rowDst[x * 4 + 1] = rowSrc[x * 4 + 1]; // G
                    rowDst[x * 4 + 2] = rowSrc[x * 4 + 0]; // B
                    rowDst[x * 4 + 3] = rowSrc[x * 4 + 3]; // A
                }
            }
            targetBmp->UnlockBits(&bmpData);

            std::memcpy(rgba, buffer.data(), targetBytes);

            std::lock_guard<std::mutex> lock(g_textureMutex);
            if (g_textureCacheBytes + targetBytes > kMaxTextureCacheBytes) {
                g_textureCache.clear();
                g_textureCacheBytes = 0;
            }
            g_textureCacheBytes += targetBytes;
            g_textureCache[hash] = std::move(buffer);
        }
    }
#endif
}

} // namespace TextureReplacer
