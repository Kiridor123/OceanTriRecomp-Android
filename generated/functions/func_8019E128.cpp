#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8019E128_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_8019E128;

loc_8019E128:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 856));
}

loc_8019E144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019E278;
    }
}

loc_8019E148:
{
}

loc_8019E14C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8019E15C;
    }
}

loc_8019E150:
{
}

loc_8019E154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8019E1C0;
    }
}

loc_8019E158:
{
    goto loc_8019E32C;
}

loc_8019E15C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 808));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22616));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 808), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22464));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E174:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E17C;
    }
}

loc_8019E178:
{
    MemoryInline::FlatWriteFloat32((r3 + 808), f0.d);
}

loc_8019E17C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22356));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 812), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21964));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E194:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E19C;
    }
}

loc_8019E198:
{
    MemoryInline::FlatWriteFloat32((r3 + 812), f0.d);
}

loc_8019E19C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 816));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E1A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E1B0;
    }
}

loc_8019E1AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 816), f0.d);
}

loc_8019E1B0:
{
    r4 = MemoryInline::FlatRead8((r3 + 856));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 856), static_cast<uint8_t>(r0));
    goto loc_8019E32C;
}

loc_8019E1C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 808));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -22616), 0, 684u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -22616));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 808), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r2 + -22464));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E1D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E1E0;
    }
}

loc_8019E1DC:
{
    MemoryInline::FlatWriteFloat32((r3 + 808), f0.d);
}

loc_8019E1E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r2 + -22356));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 812), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 652u, (r2 + -21964));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E1F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E200;
    }
}

loc_8019E1FC:
{
    MemoryInline::FlatWriteFloat32((r3 + 812), f0.d);
}

loc_8019E200:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 816));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E20C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E214;
    }
}

loc_8019E210:
{
    MemoryInline::FlatWriteFloat32((r3 + 816), f0.d);
}

loc_8019E214:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 664u, (r2 + -21952));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 668u, (r2 + -21948));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E22C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E234;
    }
}

loc_8019E230:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_8019E234:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 672u, (r2 + -21944));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 492u, (r2 + -22124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E24C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E254;
    }
}

loc_8019E250:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_8019E254:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 676u, (r2 + -21940));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 680u, (r2 + -21936));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E26C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E32C;
    }
}

loc_8019E270:
{
    MemoryInline::FlatWriteFloat32((r3 + 832), f0.d);
    goto loc_8019E32C;
}

loc_8019E278:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 808));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -22612), 0, 700u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 680u, (r2 + -21932));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 808), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E290:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E298;
    }
}

loc_8019E294:
{
    MemoryInline::FlatWriteFloat32((r3 + 808), f0.d);
}

loc_8019E298:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 684u, (r2 + -21928));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 812), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E2B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E2B8;
    }
}

loc_8019E2B4:
{
    MemoryInline::FlatWriteFloat32((r3 + 812), f0.d);
}

loc_8019E2B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 816));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E2C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E2CC;
    }
}

loc_8019E2C8:
{
    MemoryInline::FlatWriteFloat32((r3 + 816), f0.d);
}

loc_8019E2CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 688u, (r2 + -21924));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E2E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E2EC;
    }
}

loc_8019E2E8:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_8019E2EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 692u, (r2 + -21920));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E30C;
    }
}

loc_8019E308:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_8019E30C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 696u, (r2 + -21916));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E32C;
    }
}

loc_8019E328:
{
    MemoryInline::FlatWriteFloat32((r3 + 832), f0.d);
}

loc_8019E32C:
{
    r0 = MemoryInline::FlatRead8((r3 + 857));
}

loc_8019E334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019E388;
    }
}

loc_8019E338:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 848));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21912));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 848), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22620));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E364;
    }
}

loc_8019E354:
{
    MemoryInline::FlatWriteFloat32((r3 + 848), f0.d);
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801923AC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923AC
}

loc_8019E364:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 852));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21908));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 852), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22616));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E37C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019E3E8;
    }
}

loc_8019E380:
{
    MemoryInline::FlatWriteFloat32((r31 + 852), f0.d);
    goto loc_8019E3E8;
}

loc_8019E388:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 848));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21912));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 848), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22224));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E3A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E3A8;
    }
}

loc_8019E3A4:
{
    MemoryInline::FlatWriteFloat32((r3 + 848), f0.d);
}

loc_8019E3A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 852));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21908));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 852), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E3C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E3C8;
    }
}

loc_8019E3C4:
{
    MemoryInline::FlatWriteFloat32((r3 + 852), f0.d);
}

loc_8019E3C8:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019E3D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E3E8;
    }
}

loc_8019E3DC:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801923BC (6 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 861));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923BC
}

loc_8019E3E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019E128(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019E128_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019E128 func_8019E128 preserves=true fpr_mask=0x00000000
