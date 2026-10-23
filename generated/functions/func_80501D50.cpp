#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80501D50_ra38_1fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;

    goto loc_80501D50;

loc_80501D50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f3.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f6.d = PpcFmulsInline(f7.d, f6.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80501D94:
{
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501DAC;
    }
}

loc_80501DA0:
{
    f1.d = f0.d;
    f0.d = f2.d;
    f2.d = f1.d;
}

loc_80501DAC:
{
    SetCRFloatResident(cr, 0, f6.d, f5.d);
}

loc_80501DB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501DC0;
    }
}

loc_80501DB4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    goto loc_80501DC8;
}

loc_80501DC0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
}

loc_80501DC8:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_80501DCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501DDC;
    }
}

loc_80501DD0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    goto loc_80501DE4;
}

loc_80501DDC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
}

loc_80501DE4:
{
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f5.d = PpcFmulsInline(f6.d, f3.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 28));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80501E28:
{
    f7.d = PpcFmulsInline(f9.d, f7.d);
    f6.d = PpcFmulsInline(f6.d, f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501E40;
    }
}

loc_80501E34:
{
    f4.d = f1.d;
    f1.d = f3.d;
    f3.d = f4.d;
}

loc_80501E40:
{
    SetCRFloatResident(cr, 0, f8.d, f7.d);
}

loc_80501E44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501E54;
    }
}

loc_80501E48:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f8.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f7.d));
    goto loc_80501E5C;
}

loc_80501E54:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f8.d));
}

loc_80501E5C:
{
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80501E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501E70;
    }
}

loc_80501E64:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    goto loc_80501E78;
}

loc_80501E70:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
}

loc_80501E78:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f6.d = PpcFmulsInline(f7.d, f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
    f4.d = PpcFmulsInline(f7.d, f4.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    SetCRFloatResident(cr, 0, f10.d, f11.d);
}

loc_80501EBC:
{
    f7.d = PpcFmulsInline(f9.d, f7.d);
    f6.d = PpcFmulsInline(f6.d, f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501ED4;
    }
}

loc_80501EC8:
{
    f4.d = f10.d;
    f10.d = f11.d;
    f11.d = f4.d;
}

loc_80501ED4:
{
    SetCRFloatResident(cr, 0, f8.d, f7.d);
}

loc_80501ED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501EE8;
    }
}

loc_80501EDC:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f7.d));
    goto loc_80501EF0;
}

loc_80501EE8:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f8.d));
}

loc_80501EF0:
{
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80501EF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501F04;
    }
}

loc_80501EF8:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f5.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f6.d));
    goto loc_80501F0C;
}

loc_80501F04:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f6.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f5.d));
}

loc_80501F0C:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f10.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f11.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_80501D50(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80501D50_ra38_1fe_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501D50 func_80501D50 preserves=true fpr_mask=0x00000000
