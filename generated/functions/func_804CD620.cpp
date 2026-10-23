#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD4F0(CpuContext* ctx);
extern "C" void func_804CD4F0_ra20_1fe_0_0(CpuContext*, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_804CD620_ra8_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r3 = arg_r3;
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804CD620;

loc_804CD620:
{
    r5 = (r3 + 0);
    if constexpr (KnownRegArgsCpuCall<0x804CD4F0u>(&func_804CD4F0)) {
        ctx->gpr[3] = r3;
        func_804CD4F0_ra20_1fe_0_0(ctx, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804CD4F0u>(ctx);
        r3 = ctx->gpr[3];
    }
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_804CD620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CD620_ra8_1fe_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000028 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD620 func_804CD620 preserves=true fpr_mask=0x00000000
