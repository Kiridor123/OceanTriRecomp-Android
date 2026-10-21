#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801E9E60_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_not_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x801E9E60u);
    goto loc_801E9E60;

loc_801E9E60:
{
    r3 = (r3 & 255);
}

loc_801E9E68:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(4))) {
        goto loc_801E9E74;
    }
}

loc_801E9E6C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->xer = xer;
    return r3;
}

loc_801E9E74:
{
    r0 = 8;
    r0_subfc_sub_0 = r0;
    r0 = (r3 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r3_not_0 = ~(r0);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r0);
    r3 = (r3 + r3_ca_0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_801E9E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801E9E60_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E9E60 func_801E9E60 preserves=true fpr_mask=0x00000000
