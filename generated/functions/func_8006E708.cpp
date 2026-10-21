#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8006E708_ra0_6_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8006E708u);
    goto loc_8006E708;

loc_8006E708:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8006E70C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8006E710:
{
    f1.d = f2.d;
    ctx->cr = cr;
    return f1.d;
}

loc_return:
{
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_8006E708(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8006E708_ra0_6_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006E708 func_8006E708 preserves=true fpr_mask=0x00000000
