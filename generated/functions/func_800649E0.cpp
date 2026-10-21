#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800649E0_ra0_e_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3)
{
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x800649E0u);
    goto loc_800649E0;

loc_800649E0:
{
    f1.d = PPC_Fsel(f1.d, f3.d, f2.d);
    return f1.d;
}

}

extern "C" void func_800649E0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800649E0_ra0_e_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800649E0 func_800649E0 preserves=true fpr_mask=0x00000000
