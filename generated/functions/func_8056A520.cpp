#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805695A0(CpuContext* ctx);
extern "C" uint32_t func_805695A0_ra308_1e6_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint32_t func_8056A520_ra308_1e6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r8, uint32_t arg_r9, double arg_f1, double arg_f2, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r3 = arg_r3;
    uint32_t r8 = arg_r8;
    uint32_t r9 = arg_r9;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x8056A520u);
    goto loc_8056A520;

loc_8056A520:
{
    r3 = (r3 + -16);
    if constexpr (KnownRegArgsCpuCall<0x805695A0u>(&func_805695A0)) {
        const auto regargs_result_805695A0_3C0 = func_805695A0_ra308_1e6_8_0(ctx, r3, r8, r9, f1.d, f2.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_805695A0_3C0;
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805695A0u>(ctx);
        r3 = ctx->gpr[3];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return r3;
}

}

extern "C" void func_8056A520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056A520_ra308_1e6_8_0(ctx, ctx->gpr[3], ctx->gpr[8], ctx->gpr[9], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002F0E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FE6 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056A520 func_8056A520 preserves=true fpr_mask=0x00000000
