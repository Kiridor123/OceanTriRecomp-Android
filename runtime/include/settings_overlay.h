#pragma once

#include <aurora/aurora.h>
#include <aurora/event.h>

namespace settings_overlay {
// Attach the SDL host window. On Windows the settings panel is a native,
// same-process acrylic-style overlay above this game window.
void AttachWindow(SDL_Window* window) noexcept;
void InitializeRuntimeSettings() noexcept;
void HandleEvents(const AuroraEvent* events) noexcept;
void Pump() noexcept;
bool IsOpen() noexcept;
void Draw() noexcept;
bool StartupScreenVisible() noexcept;
void NotifyStrapInputAccepted() noexcept;
void AdvancePresentedFrame() noexcept;
void ReleaseControllers() noexcept;
} // namespace settings_overlay
