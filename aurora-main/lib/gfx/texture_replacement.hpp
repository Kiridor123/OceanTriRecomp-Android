#pragma once

#include "texture.hpp"
#include "texture_convert.hpp"
#include <aurora/native_texture.hpp>
#include <optional>
#include <string>

namespace aurora::gfx::texture_replacement {
void initialize() noexcept;
void shutdown() noexcept;
void register_tlut(const GXTlutObj* obj, const void* data, GXTlutFmt format, uint16_t entries) noexcept;
void load_tlut(const GXTlutObj* obj, uint32_t idx) noexcept;
std::optional<TextureHandle> find_replacement(const GXTexObj_& obj) noexcept;
std::string build_texture_replacement_name(const GXTexObj_& obj) noexcept;

// Native texture replacement support
std::optional<ConvertedTexture> load_native_replacement(const NativeTextureSource& source) noexcept;
size_t get_replacement_count() noexcept;
void set_enabled(bool enabled) noexcept;
bool is_enabled() noexcept;
void reload() noexcept;
} // namespace aurora::gfx::texture_replacement
