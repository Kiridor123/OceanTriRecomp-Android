#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_803CCE08_ra8_6_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x803CCE08u);
    goto loc_803CCE08;

loc_803CCE08:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5120));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8692));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4252));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_803CCE20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803CCE28;
    }
}

loc_803CCE24:
{
    goto loc_803CCE2C;
}

loc_803CCE28:
{
    f1.d = f2.d;
}

loc_803CCE2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_803CCE34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803CCE3C;
    }
}

loc_803CCE38:
{
    goto loc_803CCE40;
}

loc_803CCE3C:
{
    f1.d = f0.d;
}

loc_803CCE40:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5116));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803CCE48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803CCE50;
    }
}

loc_803CCE4C:
{
    goto loc_803CCE54;
}

loc_803CCE50:
{
    f1.d = f0.d;
}

loc_803CCE54:
{
    MemoryInline::FlatWriteFloat32((r3 + 4248), f1.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_803CCE08(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_803CCE08_ra8_6_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CCE08 func_803CCE08 preserves=true fpr_mask=0x00000000
