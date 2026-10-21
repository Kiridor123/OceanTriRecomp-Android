#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x802A9354u);
    goto loc_802A9354;

loc_802A9354:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_802A93B8;
    }
}

loc_802A93B4:
{
    goto loc_802A93BC;
}

loc_802A93B8:
{
    r5 = r7;
}

loc_802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

}

extern "C" void func_802A9354(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A9354_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A9354 func_802A9354 preserves=true fpr_mask=0x00000000
