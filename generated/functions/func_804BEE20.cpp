#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BEE20_ra118_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = arg_r8;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_804BEE20;

loc_804BEE20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = (r3 + 240);
    r0 = (r3 + 288);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 220), 0, 1116u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 220));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1040u, (r3 + 1260));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 224));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1044u, (r3 + 1264));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1016u, (r3 + 1236));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f8.d = PpcFmulsInline(f8.d, f0.d);
}

loc_804BEE60:
{
    r4 = MemoryInline::FlatRead8((r8 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804BEFBC;
    }
}

loc_804BEE6C:
{
    f2.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1100u, (r3 + 1320));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f8.d));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_804BEE90:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEED4;
    }
}

loc_804BEEA4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1108u, (r3 + 1328));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_804BEEAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEED4;
    }
}

loc_804BEEB4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1104u, (r3 + 1324));
    SetCRFloatResident(cr, 0, f6.d, f1.d);
}

loc_804BEEBC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEED4;
    }
}

loc_804BEEC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1112u, (r3 + 1332));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_804BEECC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BEF4C;
    }
}

loc_804BEED4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1100u, (r3 + 1320));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BEEE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BEFBC;
    }
}

loc_804BEEE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1108u, (r3 + 1328));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BEEEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BEFBC;
    }
}

loc_804BEEF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1104u, (r3 + 1324));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BEEFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BEFBC;
    }
}

loc_804BEF00:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1112u, (r3 + 1332));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BEF08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BEFBC;
    }
}

loc_804BEF0C:
{
    r7 = MemoryInline::FlatRead32(r8);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 304), r5);
    r6 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r3 + 300), r7);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r7 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r3 + 308), r7);
    MemoryInline::FlatWrite32((r3 + 288), r6);
    MemoryInline::FlatWrite32((r3 + 292), r5);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 297), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_804BEFCC;
}

loc_804BEF4C:
{
    SetCRFloatResident(cr, 0, f5.d, f3.d);
}

loc_804BEF50:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEF7C;
    }
}

loc_804BEF58:
{
    SetCRFloatResident(cr, 0, f5.d, f2.d);
}

loc_804BEF5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEF7C;
    }
}

loc_804BEF64:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_804BEF68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEF7C;
    }
}

loc_804BEF70:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BEF74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BEFBC;
    }
}

loc_804BEF7C:
{
    r7 = MemoryInline::FlatRead32(r8);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 292), r5);
    r6 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 288), r7);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r7 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r3 + 296), r7);
    MemoryInline::FlatWrite32((r3 + 300), r6);
    MemoryInline::FlatWrite32((r3 + 304), r5);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 309), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_804BEFCC;
}

loc_804BEFBC:
{
    r8 = (r8 + 12);
}

loc_804BEFC4:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r0))) {
        goto loc_804BEE60;
    }
}

loc_804BEFC8:
{
    r3 = 0;
}

loc_804BEFCC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BEE20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BEE20_ra118_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000011B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BEE20 func_804BEE20 preserves=true fpr_mask=0x00000000
