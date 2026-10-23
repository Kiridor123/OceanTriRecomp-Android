#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F6ADC_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800F6ADC;

loc_800F6ADC:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 20916);
    r0 = (r3 & 255);
    r0 = (r0 * 24);
    r5 = (r4 + r0);
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 4), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 9), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 10), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 24), r4);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_800F6ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F6ADC_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F6ADC func_800F6ADC preserves=true fpr_mask=0x00000000
