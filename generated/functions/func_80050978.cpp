#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80050978_ra58_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80050978;

loc_80050978:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32460));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f0.d, f3.d);
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80501AB4u>(ctx);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return ctx->gpr[4];
}

}

extern "C" void func_80050978(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80050978_ra58_1fe_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050978 func_80050978 preserves=true fpr_mask=0x00000000
