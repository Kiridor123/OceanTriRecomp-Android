#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801549EC_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_801549EC;

loc_801549EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80154A08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80154AB4;
    }
}

loc_80154A0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r3 + -1092);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80154A20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-10922))) {
        goto loc_80154A30;
    }
}

loc_80154A24:
{
    r3 = 65536;
    r0 = (r3 + -10922);
    MemoryInline::FlatWrite32((r31 + 816), r0);
}

loc_80154A30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 828));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -27780), 0, 656u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 644u, (r2 + -27136));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 648u, (r2 + -27132));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154A48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80154A50;
    }
}

loc_80154A4C:
{
    MemoryInline::FlatWriteFloat32((r31 + 828), f0.d);
}

loc_80154A50:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r2 + -27488));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154A68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80154A70;
    }
}

loc_80154A6C:
{
    MemoryInline::FlatWriteFloat32((r31 + 832), f0.d);
}

loc_80154A70:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 552u, (r2 + -27228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 840), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 652u, (r2 + -27128));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154A88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80154A90;
    }
}

loc_80154A8C:
{
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
}

loc_80154A90:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r2 + -27488));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154AA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80154B54;
    }
}

loc_80154AAC:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    goto loc_80154B54;
}

loc_80154AB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r3 + 1092);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80154AC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80154AD4;
    }
}

loc_80154ACC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
}

loc_80154AD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 828));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -27800), 0, 668u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 664u, (r2 + -27136));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -27800));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154AEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80154AF4;
    }
}

loc_80154AF0:
{
    MemoryInline::FlatWriteFloat32((r31 + 828), f0.d);
}

loc_80154AF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 312u, (r2 + -27488));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27796));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154B0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80154B14;
    }
}

loc_80154B10:
{
    MemoryInline::FlatWriteFloat32((r31 + 832), f0.d);
}

loc_80154B14:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 572u, (r2 + -27228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 840), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -27788));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154B2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80154B34;
    }
}

loc_80154B30:
{
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
}

loc_80154B34:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 312u, (r2 + -27488));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27796));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80154B4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80154B54;
    }
}

loc_80154B50:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
}

loc_80154B54:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801549EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801549EC_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801549EC func_801549EC preserves=true fpr_mask=0x00000000
