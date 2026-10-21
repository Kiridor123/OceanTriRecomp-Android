#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8008AF34_ra0_7e_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7 = ctx->fpr[7];

    MKW_GUEST_ENTER(0x8008AF34u);
    goto loc_8008AF34;

loc_8008AF34:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f0.d = PpcFmulsInline(f5.d, f4.d);
    f4.d = PPC_Fmadds(f7.d, f2.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31668));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31664));
    f2.d = PPC_Fmsubs(f2.d, f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PPC_Fmadds(f5.d, f0.d, f1.d);
    f1.d = PPC_Fmadds(f6.d, f4.d, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return f1.d;
}

}

extern "C" void func_8008AF34(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8008AF34_ra0_7e_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000007E fpr_write=0x000000D7 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008AF34 func_8008AF34 preserves=true fpr_mask=0x00000000
