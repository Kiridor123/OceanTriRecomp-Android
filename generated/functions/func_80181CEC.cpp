#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80181CEC_ra0_e_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80181CECu);
    goto loc_80181CEC;

loc_80181CEC:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80181CF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80181D04;
    }
}

loc_80181CF4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80181CFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80181D1C;
    }
}

loc_80181D00:
{
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

loc_80181D04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80181D1C;
    }
}

loc_80181D08:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80181D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80181D1C;
    }
}

loc_80181D14:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

loc_80181D1C:
{
    f1.d = f2.d;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_80181CEC(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80181CEC_ra0_e_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80181CEC func_80181CEC preserves=true fpr_mask=0x00000000
