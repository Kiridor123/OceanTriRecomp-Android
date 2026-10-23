#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8005246C_ra38_e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_8005246C;

loc_8005246C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32452));
}

loc_80052470:
{
    f3.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80052478:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80052484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800524A4;
    }
}

loc_80052488:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return r3;
}

loc_800524A4:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_800524A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052518;
    }
}

loc_800524B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800524B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052518;
    }
}

loc_800524C0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return r3;
}

loc_80052518:
{
    r3 = (r3 + 16);
    goto loc_80052470;
}

}

extern "C" void func_8005246C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8005246C_ra38_e_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005246C func_8005246C preserves=true fpr_mask=0x00000000
