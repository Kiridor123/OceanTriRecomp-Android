#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80321140_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80321140u);
    goto loc_80321140;

loc_80321140:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 1440);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 238), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 238), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 240), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 242), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 246), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 248), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 250), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 254), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 256), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 258), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 262), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 264), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 266), r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 268), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 270), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80321140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80321140_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80321140 func_80321140 preserves=true fpr_mask=0x00000000
