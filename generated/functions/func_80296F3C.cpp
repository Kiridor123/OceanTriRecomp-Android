#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80296F3C_ra18_e_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80296F3Cu);
    goto loc_80296F3C;

loc_80296F3C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80296F48:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80296F8C;
    }
}

loc_80296F50:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80296F60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296FCC;
    }
}

loc_80296F64:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80296F68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80296F78;
    }
}

loc_80296F70:
{
    MemoryInline::FlatWriteFloat32(r4, f3.d);
    goto loc_80296FCC;
}

loc_80296F78:
{
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    goto loc_80296FCC;
}

loc_80296F8C:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80296F9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80296FCC;
    }
}

loc_80296FA0:
{
    f0.d = (-(f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80296FA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80296FB8;
    }
}

loc_80296FB0:
{
    MemoryInline::FlatWriteFloat32((r4 + 12), f3.d);
    goto loc_80296FCC;
}

loc_80296FB8:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
}

loc_80296FCC:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80296FD8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029701C;
    }
}

loc_80296FE0:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80296FF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029705C;
    }
}

loc_80296FF4:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80296FF8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80297008;
    }
}

loc_80297000:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f3.d);
    goto loc_8029705C;
}

loc_80297008:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    goto loc_8029705C;
}

loc_8029701C:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8029702C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029705C;
    }
}

loc_80297030:
{
    f0.d = (-(f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80297038:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80297048;
    }
}

loc_80297040:
{
    MemoryInline::FlatWriteFloat32((r4 + 16), f3.d);
    goto loc_8029705C;
}

loc_80297048:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
}

loc_8029705C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80297068:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802970AC;
    }
}

loc_80297070:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80297080:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80297084:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80297088:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80297098;
    }
}

loc_80297090:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f3.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80297098:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_802970AC:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_802970BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_802970C0:
{
    f0.d = (-(f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_802970C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802970D8;
    }
}

loc_802970D0:
{
    MemoryInline::FlatWriteFloat32((r4 + 20), f3.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_802970D8:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_80296F3C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80296F3C_ra18_e_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80296F3C func_80296F3C preserves=true fpr_mask=0x00000000
