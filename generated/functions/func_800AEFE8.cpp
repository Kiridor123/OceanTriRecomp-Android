#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800AEFE8_ra8_6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800AEFE8u);
    goto loc_800AEFE8;

loc_800AEFE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800AF010:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF020;
    }
}

loc_800AF014:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AF01C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF028;
    }
}

loc_800AF020:
{
    r3 = 3;
    goto loc_800AF0BC;
}

loc_800AF028:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF02C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AF038;
    }
}

loc_800AF030:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AF034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AF03C;
    }
}

loc_800AF038:
{
    r0 = 1;
}

loc_800AF03C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800AF048:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF058;
    }
}

loc_800AF04C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AF054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF060;
    }
}

loc_800AF058:
{
    r3 = 3;
    goto loc_800AF0BC;
}

loc_800AF060:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AF070;
    }
}

loc_800AF068:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AF06C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AF074;
    }
}

loc_800AF070:
{
    r0 = 1;
}

loc_800AF074:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800AF080:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF090;
    }
}

loc_800AF084:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AF08C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF098;
    }
}

loc_800AF090:
{
    r3 = 3;
    goto loc_800AF0BC;
}

loc_800AF098:
{
}

loc_800AF09C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AF0B0;
    }
}

loc_800AF0A0:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF0A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AF0B0;
    }
}

loc_800AF0A8:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AF0AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AF0B8;
    }
}

loc_800AF0B0:
{
    r3 = 1;
    goto loc_800AF0BC;
}

loc_800AF0B8:
{
    r3 = 2;
}

loc_800AF0BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_800AEFE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800AEFE8_ra8_6_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AEFE8 func_800AEFE8 preserves=true fpr_mask=0x00000000
