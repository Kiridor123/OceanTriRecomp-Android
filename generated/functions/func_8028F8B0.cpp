#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8028F8B0_ra0_e_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8028F8B0u);
    goto loc_8028F8B0;

loc_8028F8B0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8028F8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028F8C0;
    }
}

loc_8028F8B8:
{
    f1.d = f2.d;
    ctx->cr = cr;
    return f1.d;
}

loc_8028F8C0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8028F8C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8028F8C8:
{
    f1.d = f3.d;
    ctx->cr = cr;
    return f1.d;
}

loc_return:
{
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_8028F8B0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8028F8B0_ra0_e_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028F8B0 func_8028F8B0 preserves=true fpr_mask=0x00000000
