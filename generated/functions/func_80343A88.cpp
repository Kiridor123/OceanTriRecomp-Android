#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80343A88_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_80343A88;

loc_80343A88:
{
    r0 = (r4 & 255);
}

loc_80343A90:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80343A98:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

extern "C" void func_80343A88(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80343A88_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80343A88 func_80343A88 preserves=true fpr_mask=0x00000000
