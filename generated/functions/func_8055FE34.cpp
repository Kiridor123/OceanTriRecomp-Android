#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8055FE34_ra0_fe_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];

    goto loc_8055FE34;

loc_8055FE34:
{
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    return f1.d;
}

}

extern "C" void func_8055FE34(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8055FE34_ra0_fe_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x000000FE fpr_write=0x00000377 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055FE34 func_8055FE34 preserves=true fpr_mask=0x00000000
