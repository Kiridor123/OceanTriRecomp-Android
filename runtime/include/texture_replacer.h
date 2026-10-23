#pragma once

#include <string>
#include <filesystem>
#include <cstdint>
#include <aurora/native_texture.hpp>

namespace TextureReplacer {

void Init();
bool IsEnabled();
void SetEnabled(bool enabled);
void Refresh();
std::filesystem::path GetTexturesDirectory();
size_t GetLoadedTextureCount();

void PatchTexture(const aurora::NativeTextureSource& source, uint8_t* rgba);

} // namespace TextureReplacer
