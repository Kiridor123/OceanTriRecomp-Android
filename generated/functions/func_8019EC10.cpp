#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8019EC10_ra18_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_8019EC10;

loc_8019EC10:
{
    r0 = MemoryInline::FlatRead32((r3 + 448));
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 448), r4);
}

loc_8019EC20:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(16388))) {
        goto loc_8019EC30;
    }
}

loc_8019EC24:
{
    r0 = (r4 + -4);
    MemoryInline::FlatWrite32((r3 + 448), r0);
    goto loc_8019EC4C;
}

loc_8019EC30:
{
}

loc_8019EC34:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(16380))) {
        goto loc_8019EC44;
    }
}

loc_8019EC38:
{
    r0 = (r4 + 4);
    MemoryInline::FlatWrite32((r3 + 448), r0);
    goto loc_8019EC4C;
}

loc_8019EC44:
{
    r0 = 16384;
    MemoryInline::FlatWrite32((r3 + 448), r0);
}

loc_8019EC4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21896));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019EC58:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019EC70;
    }
}

loc_8019EC60:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21892));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

loc_8019EC70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21888));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019EC78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019EC90;
    }
}

loc_8019EC80:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21892));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

loc_8019EC90:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21884));
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_8019EC10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8019EC10_ra18_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019EC10 func_8019EC10 preserves=true fpr_mask=0x00000000
