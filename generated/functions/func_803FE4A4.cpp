#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE4A4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_803FE4A4;

loc_803FE4A4:
{
}

loc_803FE4A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_803FE4C8;
    }
}

loc_803FE4AC:
{
    r5 = (r3 + 65536);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -10740));
    r3 = (r5 + r0);
    r3 = (r3 + -11255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803FE4C8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803FE4A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE4A4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE4A4 func_803FE4A4 preserves=true fpr_mask=0x00000000
