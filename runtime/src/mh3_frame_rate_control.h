#pragma once
#include <cstdint>
namespace MH3FrameRateControl {
void SetTargetFPS(int fps) noexcept;
int TargetFPS() noexcept;
uint64_t LogicalFrameCount() noexcept;
void CountLogicalFrame() noexcept;
}