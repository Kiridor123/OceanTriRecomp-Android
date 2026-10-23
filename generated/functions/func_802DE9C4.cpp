#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802DE9C4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_802DE9C4;

loc_802DE9C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 301));
}

loc_802DE9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DE9F0;
    }
}

loc_802DE9D0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_802DE9D8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_802DE9F0;
    }
}

loc_802DE9DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r5 + -24);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802DE9F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802DE9C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802DE9C4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DE9C4 func_802DE9C4 preserves=true fpr_mask=0x00000000
