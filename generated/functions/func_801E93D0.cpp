#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801E93D0_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_801E93D0;

loc_801E93D0:
{
    r3 = (r3 & 65535);
    r0 = (r4 & 65535);
    r3 = (r3 + r0);
}

loc_801E93E0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(99))) {
        goto loc_801E93E8;
    }
}

loc_801E93E4:
{
    r3 = 99;
}

loc_801E93E8:
{
    r3 = (r3 & 65535);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_801E93D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801E93D0_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E93D0 func_801E93D0 preserves=true fpr_mask=0x00000000
