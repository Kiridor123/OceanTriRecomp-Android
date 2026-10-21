#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804BE210_ra18_e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
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

    MKW_GUEST_ENTER(0x804BE210u);
    goto loc_804BE210;

loc_804BE210:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = MemoryInline::FlatRead32((r3 + 1388));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
}

loc_804BE220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BE27C;
    }
}

loc_804BE224:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804BE22C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE238;
    }
}

loc_804BE230:
{
    f2.d = (-(f3.d));
    goto loc_804BE23C;
}

loc_804BE238:
{
    f2.d = f3.d;
}

loc_804BE23C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804BE244:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BE254;
    }
}

loc_804BE24C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    goto loc_804BE260;
}

loc_804BE254:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
}

loc_804BE260:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return f1.d;
}

loc_804BE27C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804BE288:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE2A4;
    }
}

loc_804BE28C:
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

loc_804BE2A4:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_804BE2A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_804BE2AC:
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

extern "C" void func_804BE210(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804BE210_ra18_e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BE210 func_804BE210 preserves=true fpr_mask=0x00000000
