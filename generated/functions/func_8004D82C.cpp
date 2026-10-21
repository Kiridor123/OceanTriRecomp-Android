#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004D82C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8004D82Cu);
    goto loc_8004D82C;

loc_8004D82C:
{
    r0 = (r4 & 255);
    r0 = (r0 * 42);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 13184), 0, 19u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 13184), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 13186), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 13188), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 13196), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 13198), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 13190), r0);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 13192), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 13194), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 13200), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r4 + 13202), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004D82C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004D82C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D82C func_8004D82C preserves=true fpr_mask=0x00000000
