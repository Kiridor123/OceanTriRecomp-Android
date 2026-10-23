#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029F718_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_8029F718;

loc_8029F718:
{
    r0 = (r3 & 65535);
}

loc_8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_8029F728;
    }
}

loc_8029F724:
{
    r3 = 0;
}

loc_8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8029F718(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029F718_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F718 func_8029F718 preserves=true fpr_mask=0x00000000
