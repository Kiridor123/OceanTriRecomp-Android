// Screen fades, RMHP08. C reconstruction of TickFades (0x800581A4), called
// once per step by the main loop after DrawFadeOverlay (0x800582EC) has drawn
// them. Four fades, each a column of the word arrays at 0x8066D108 (4 bytes
// from one fade to the next):
//   +0   level (the high byte, 0..255) over the colour (the low 24 bits)
//   +16  state: 1 fading up, 2 fading down, 3 up and holding, 0 idle
//   +48  steps left
//   +80  target level
//   +96  level change per step (negative when fading down)
// A fading level moves by its change each step until it reaches the target,
// where it stops (and its steps left drop to 0). When the steps left run out
// the fade ends: one fading up holds (3), one fading down goes idle. Nothing
// runs during a soft reset.
//
// Here the level moves by the change's share of this step (GameStep::Share)
// and the steps left count ticks, so fades take the same time at any step
// length. At the stock 1/30 s step this is the original.
#include "game_step.h"
#include "memory.h"
#include "port_check.h"

#include <algorithm>

namespace {

constexpr uint32_t kResetting = 0x8065AA65; // u8: soft reset in progress (reset_fade.cpp)
constexpr uint32_t kFades = 0x8066D108;
constexpr uint32_t kFadeCount = 4;
enum : uint32_t {
    kLevel = 0,
    kState = 16,
    kStepsLeft = 48,
    kTarget = 80,
    kChange = 96
};

enum : int32_t {
    kIdle = 0,
    kFadingUp = 1,
    kFadingDown = 2,
    kHolding = 3
};

void TickFadesPort(CpuContext*) {
    if (Memory::Read8(kResetting))
        return;

    const int32_t ticks = int32_t(GameStep::Ticks());

    for (uint32_t fade = kFades; fade < kFades + 4 * kFadeCount; fade += 4) {
        const int32_t state = int32_t(Memory::Read32(fade + kState));

        if (state != kFadingUp && state != kFadingDown)
            continue;

        const bool up = state == kFadingUp;
        const int32_t target = int32_t(Memory::Read32(fade + kTarget));
        int32_t level = Memory::Read8(fade + kLevel) + GameStep::Share(int32_t(Memory::Read32(fade + kChange)));
        int32_t stepsLeft = int32_t(Memory::Read32(fade + kStepsLeft));

        if (up ? level >= target : level <= target) {
            level = target;
            stepsLeft = 0;
        }

        stepsLeft -= ticks;

        if (stepsLeft < 0) {
            stepsLeft = 0;
            Memory::Write32(fade + kState, uint32_t(up ? kHolding : kIdle));
        }

        Memory::Write32(fade + kStepsLeft, uint32_t(stepsLeft));
        Memory::Write8(fade + kLevel, uint8_t(level));
    }
}

} // namespace

extern "C" void func_800581A4(CpuContext* ctx);
extern "C" void MH3_TickFades(CpuContext* ctx) {
    PortCheck::Call(ctx, "TickFades", func_800581A4, TickFadesPort);
}
REGISTER_NATIVE_FUNCTION_AS(0x800581A4, MH3_TickFades, "TickFades");

// 0x80059484: decays the scene whiteout/flash intensity (0x8066D178 + 324)
// each step by a mode-dependent constant from sdata2. Scaling the decrement
// by GameStep::Scale() keeps flash bomb whiteouts at 1.0x real-time speed.
static void SceneFlashDecayPort(CpuContext* ctx) {
    constexpr uint32_t kSceneEffects = 0x8066D178u;
    const uint32_t r2 = ctx->gpr[2];
    const uint8_t mode = Memory::Read8(kSceneEffects + 316);
    const float intensity = Memory::ReadFloat32(kSceneEffects + 324);
    const float zero = Memory::ReadFloat32(r2 - 32300u);

    if (intensity > zero) {
        int32_t stepOffset = -32296;
        if (mode == 1)
            stepOffset = -32272;
        else if (mode == 2)
            stepOffset = -32268;
        else if (mode == 3)
            stepOffset = -32264;

        const float step = Memory::ReadFloat32(uint32_t(int32_t(r2) + stepOffset));
        Memory::WriteFloat32(kSceneEffects + 324, intensity - step * float(GameStep::Scale()));
    }

    ctx->gpr[3] = kSceneEffects;
}

extern "C" void func_80059484(CpuContext* ctx);
extern "C" void MH3_SceneFlashDecay(CpuContext* ctx) {
    PortCheck::Call(ctx, "SceneFlashDecay", func_80059484, SceneFlashDecayPort);
}
REGISTER_NATIVE_FUNCTION_AS(0x80059484, MH3_SceneFlashDecay, "SceneFlashDecay");

// 0x80116680: flash bomb screen-flash effect object. In sub-state 3 (+7 == 3)
// it decrements its life (+12) by 1 per step while calling 0x80059484.
extern "C" void func_80116680(CpuContext* ctx);
extern "C" void MH3_FlashBombEffectStep(CpuContext* ctx) {
    const uint32_t ticks = GameStep::Ticks();
    if (ticks != 1) {
        const uint32_t self = ctx->gpr[3];
        if (Memory::Read8(self + 7) == 3) {
            const int32_t life = int32_t(Memory::Read32(self + 12));
            if (life > 0) {
                if (ticks == 0)
                    Memory::Write32(self + 12, uint32_t(life + 1));
                else
                    Memory::Write32(self + 12, uint32_t(std::max<int32_t>(1, life - int32_t(ticks) + 1)));
            }
        }
    }
    func_80116680(ctx);
}
REGISTER_NATIVE_FUNCTION_AS(0x80116680, MH3_FlashBombEffectStep, "FlashBombEffectStep");

// 0x802DEC7C: supply/item box menu step. Scales its per-step wait (+0),
// open/close slide (+302) and item-pickup hold (+7) to 30 Hz logical ticks.
extern "C" void func_802DEC7C(CpuContext* ctx);
extern "C" void MH3_SupplyBoxMenuStep(CpuContext* ctx) {
    const uint32_t ticks = GameStep::Ticks();
    if (ticks == 1) {
        func_802DEC7C(ctx);
        return;
    }

    const uint32_t self = (0x806C0000u - 296u) + (ctx->gpr[3] & 0xFFu) * 304u;
    const uint8_t state = Memory::Read8(self + 4);
    if (state == 0) {
        const int16_t wait = int16_t(Memory::Read16(self));
        if (wait > 0) {
            if (ticks == 0) {
                ctx->gpr[3] = 0;
                return;
            }
            Memory::Write16(self, uint16_t(std::max<int32_t>(1, int32_t(wait) - int32_t(ticks) + 1)));
        }
        func_802DEC7C(ctx);
        return;
    }

    const uint8_t slideBefore = Memory::Read8(self + 302);
    const bool closing = (state == 4);
    if (state == 2) {
        const uint8_t hold = Memory::Read8(self + 7);
        if (hold > 0) {
            if (ticks == 0)
                Memory::Write8(self + 7, uint8_t(hold + 1));
            else
                Memory::Write8(self + 7, uint8_t(std::max<int32_t>(1, int32_t(hold) - int32_t(ticks) + 1)));
        }
    }

    func_802DEC7C(ctx);

    if (closing) {
        if (slideBefore > 0) {
            const int32_t next = std::max<int32_t>(0, int32_t(slideBefore) - int32_t(ticks));
            Memory::Write8(self + 302, uint8_t(next));
        }
    } else if (slideBefore < 3) {
        const int32_t next = std::min<int32_t>(3, int32_t(slideBefore) + int32_t(ticks));
        Memory::Write8(self + 302, uint8_t(next));
    }
}
REGISTER_NATIVE_FUNCTION_AS(0x802DEC7C, MH3_SupplyBoxMenuStep, "SupplyBoxMenuStep");
