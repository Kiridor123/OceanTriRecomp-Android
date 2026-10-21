#pragma once
#if defined(AURORA_ANGLE_VULKAN) && defined(_WIN32)
#include <memory>
#include <string>
struct SDL_Window;
namespace aurora::gl {
class AngleVulkanContext {
public:
    AngleVulkanContext();
    ~AngleVulkanContext();
    AngleVulkanContext(const AngleVulkanContext&) = delete;
    AngleVulkanContext& operator=(const AngleVulkanContext&) = delete;
    bool initialize(SDL_Window* window) noexcept;
    void shutdown() noexcept;
    bool make_current(bool current) noexcept;
    bool swap_buffers() noexcept;
    bool set_swap_interval(bool enabled) noexcept;
    const char* error() const noexcept;
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
}
#endif
