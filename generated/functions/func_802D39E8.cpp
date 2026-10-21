#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D39E8_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x802D39E8u);
    goto loc_802D39E8;

loc_802D39E8:
{
    r0 = (r6 & 255);
}

loc_802D39F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D39FC;
    }
}

loc_802D39F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 825));
    goto loc_802D3A08;
}

loc_802D39FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 825));
    r0_subfic_ra_1 = r0;
    r0 = (20 - r0_subfic_ra_1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D3A08:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
    r0 = (r6 * r0);
    r3 = 1717960704;
    r3 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r5 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_802D39E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D39E8_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D39E8 func_802D39E8 preserves=true fpr_mask=0x00000000
