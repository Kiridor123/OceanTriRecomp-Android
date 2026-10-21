#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029A1A4_ra8_6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8029A1A4u);
    goto loc_8029A1A4;

loc_8029A1A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14080));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A1B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A1C0;
    }
}

loc_8029A1B8:
{
    r3 = 0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_8029A1C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8029A1C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A1F0;
    }
}

loc_8029A1D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8029A1D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8029A1E8;
    }
}

loc_8029A1DC:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A1E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A1F8;
    }
}

loc_8029A1E8:
{
    r3 = 2;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_8029A1F0:
{
    r3 = 1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_8029A1F8:
{
    r3 = 3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8029A1A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029A1A4_ra8_6_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029A1A4 func_8029A1A4 preserves=true fpr_mask=0x00000000
