#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800453B0_ra18_e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800453B0u);
    goto loc_800453B0;

loc_800453B0:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r0 = MemoryInline::FlatRead32((r3 + 436));
}

loc_800453C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004541C;
    }
}

loc_800453C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_800453CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800453D8;
    }
}

loc_800453D0:
{
    f1.d = (-(f3.d));
    goto loc_800453DC;
}

loc_800453D8:
{
    f1.d = f3.d;
}

loc_800453DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800453E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800453F4;
    }
}

loc_800453EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    goto loc_80045400;
}

loc_800453F4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
}

loc_80045400:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return f1.d;
}

loc_8004541C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80045428:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045444;
    }
}

loc_8004542C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return f1.d;
}

loc_80045444:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80045448:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8004544C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return f1.d;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_800453B0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800453B0_ra18_e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800453B0 func_800453B0 preserves=true fpr_mask=0x00000000
