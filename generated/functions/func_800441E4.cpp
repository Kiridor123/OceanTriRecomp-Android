#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800441E4_ra0_6_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_800441E4;

loc_800441E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800441EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80044204;
    }
}

loc_800441F0:
{
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800441F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_800441FC:
{
    f1.d = f0.d;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

loc_80044204:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80044208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8004420C:
{
    f1.d = f2.d;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_800441E4(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800441E4_ra0_6_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800441E4 func_800441E4 preserves=true fpr_mask=0x00000000
