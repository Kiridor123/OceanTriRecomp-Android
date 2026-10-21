#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80042920_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80042920u);
    goto loc_80042920;

loc_80042920:
{
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r5 = (r0 + r4);
    r0 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 202), 0, 534u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 216), r0);
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 214), r0);
    }
    r4 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 218), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 220), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 226), r4);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 228), r4);
    }
    r3 = 65536;
    r0 = (r3 + -32768);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 50u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r5 + 254), r0);
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r5 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 54u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r5 + 256), r4);
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r5 + 258), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 62u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r5 + 264), r4);
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r5 + 266), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 204), r0);
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r5 + 202), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 206), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 208), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 506u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 506u, (r5 + 708), r4);
        MemoryInline::WriteResolved16(guest_range_0, 508u, (r5 + 710), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 522u, (r5 + 724), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 514u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 514u, (r5 + 716), r4);
        MemoryInline::WriteResolved16(guest_range_0, 516u, (r5 + 718), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 533u, (r5 + 735), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 502u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 504u, (r5 + 706), r4);
        MemoryInline::WriteResolved16(guest_range_0, 502u, (r5 + 704), r4);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80042920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80042920_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80042920 func_80042920 preserves=true fpr_mask=0x00000000
