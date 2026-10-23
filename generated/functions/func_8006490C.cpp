#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8006490C_ra0_8_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f3)
{
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_8006490C;

loc_8006490C:
{
    f1.d = f3.d;
    return f1.d;
}

}

extern "C" void func_8006490C(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8006490C_ra0_8_0_2(ctx, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000008 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006490C func_8006490C preserves=true fpr_mask=0x00000000
