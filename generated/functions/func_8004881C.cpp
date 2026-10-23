#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004881C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;

    goto loc_8004881C;

loc_8004881C:
{
    r7 = 0;
    r8 = 125;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B61B0u>(ctx);
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return ctx->gpr[4];
}

}

extern "C" void func_8004881C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004881C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003E7F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004881C func_8004881C preserves=true fpr_mask=0x00000000
