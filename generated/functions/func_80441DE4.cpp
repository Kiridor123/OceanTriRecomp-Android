#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80441DE4_ra148_1e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[3] = arg_r3;
    ctx->gpr[6] = arg_r6;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80441DE4;

loc_80441DE4:
{
    r4 = 0x806E0000u;
    r4 = (r4 + -30960);
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = (r4 + 40);
    r5 = 31;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_80441DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80441DE4_ra148_1e_10_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80441DE4 func_80441DE4 preserves=true fpr_mask=0x00000000
