#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80081A54_ra8_6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_80081A54;

loc_80081A54:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80081A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80081A8C;
    }
}

loc_80081A64:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 228));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80081A6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80081A8C;
    }
}

loc_80081A70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31804));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80081A78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80081A84;
    }
}

loc_80081A7C:
{
    r3 = 0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_80081A84:
{
    r3 = 1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_80081A8C:
{
    r3 = 2;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80081A54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80081A54_ra8_6_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80081A54 func_80081A54 preserves=true fpr_mask=0x00000000
