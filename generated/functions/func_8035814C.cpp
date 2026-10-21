#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2FA4(CpuContext* ctx);
extern "C" uint64_t func_800E2FA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8035814C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8035814Cu);
    goto loc_8035814C;

loc_8035814C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r31 = r3;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_80358178:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803582EC;
    }
}

loc_8035817C:
{
    r0 = MemoryInline::FlatRead8((r3 + 809));
}

loc_80358184:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8035824C;
    }
}

loc_80358188:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 820));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -9832), 0, 504u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 476u, (r2 + -9356));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 820), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803581A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803581A8;
    }
}

loc_803581A4:
{
    MemoryInline::FlatWriteFloat32((r3 + 820), f0.d);
}

loc_803581A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 480u, (r2 + -9352));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 424u, (r2 + -9408));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803581C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803581C8;
    }
}

loc_803581C4:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_803581C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 484u, (r2 + -9348));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r2 + -9756));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803581E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803581E8;
    }
}

loc_803581E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_803581E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 488u, (r2 + -9344));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 376u, (r2 + -9456));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358200:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80358208;
    }
}

loc_80358204:
{
    MemoryInline::FlatWriteFloat32((r3 + 832), f0.d);
}

loc_80358208:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 836));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 492u, (r2 + -9340));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 836), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 496u, (r2 + -9336));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358220:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80358228;
    }
}

loc_80358224:
{
    MemoryInline::FlatWriteFloat32((r3 + 836), f0.d);
}

loc_80358228:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 840));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 500u, (r2 + -9332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 840), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r2 + -9736));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358240:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_80358244:
{
    MemoryInline::FlatWriteFloat32((r3 + 840), f0.d);
    goto loc_80358464;
}

loc_8035824C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 820));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9328));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 820), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358264:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8035826C;
    }
}

loc_80358268:
{
    MemoryInline::FlatWriteFloat32((r3 + 820), f0.d);
}

loc_8035826C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9324));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358284:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8035828C;
    }
}

loc_80358288:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_8035828C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9320));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803582A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803582AC;
    }
}

loc_803582A8:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_803582AC:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 820));
    MemoryInline::FlatWriteFloat32((r3 + 832), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 824));
    MemoryInline::FlatWriteFloat32((r3 + 836), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    MemoryInline::FlatWriteFloat32((r3 + 840), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9940));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_803582CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803582D0:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_803582D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803582D8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_803582DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803582E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 809), static_cast<uint8_t>(r0));
    goto loc_80358464;
}

loc_803582EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 809));
}

loc_803582F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803583EC;
    }
}

loc_803582F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 820));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -9940), 0, 612u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 584u, (r2 + -9356));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 820), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358310:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80358318;
    }
}

loc_80358314:
{
    MemoryInline::FlatWriteFloat32((r3 + 820), f0.d);
}

loc_80358318:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 588u, (r2 + -9352));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358330:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80358338;
    }
}

loc_80358334:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_80358338:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 592u, (r2 + -9348));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80358358;
    }
}

loc_80358354:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_80358358:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 832));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 596u, (r2 + -9344));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 832), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358370:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80358378;
    }
}

loc_80358374:
{
    MemoryInline::FlatWriteFloat32((r3 + 832), f0.d);
}

loc_80358378:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 836));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 600u, (r2 + -9340));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 836), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358390:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80358398;
    }
}

loc_80358394:
{
    MemoryInline::FlatWriteFloat32((r3 + 836), f0.d);
}

loc_80358398:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 840));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 608u, (r2 + -9332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 840), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803583B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803583B8;
    }
}

loc_803583B4:
{
    MemoryInline::FlatWriteFloat32((r3 + 840), f0.d);
}

loc_803583B8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9940));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 820));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803583C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803583C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 824));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803583D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803583D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 828));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803583DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80358464;
    }
}

loc_803583E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 809), static_cast<uint8_t>(r0));
    goto loc_80358464;
}

loc_803583EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 820));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9328));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 820), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9924));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358404:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8035840C;
    }
}

loc_80358408:
{
    MemoryInline::FlatWriteFloat32((r3 + 820), f0.d);
}

loc_8035840C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 824));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9324));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 824), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358424:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8035842C;
    }
}

loc_80358428:
{
    MemoryInline::FlatWriteFloat32((r3 + 824), f0.d);
}

loc_8035842C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 828));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9320));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 828), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9916));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80358444:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8035844C;
    }
}

loc_80358448:
{
    MemoryInline::FlatWriteFloat32((r3 + 828), f0.d);
}

loc_8035844C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 820));
    MemoryInline::FlatWriteFloat32((r3 + 832), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 824));
    MemoryInline::FlatWriteFloat32((r3 + 836), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 828));
    MemoryInline::FlatWriteFloat32((r3 + 840), f0.d);
}

loc_80358464:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 832));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 836));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 840));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r3 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x803584BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r31 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x803584D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 820));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 824));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 828));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = (r31 + 36);
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x80358520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x80358534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x801357AC
}

loc_80358544:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8035855C;
    }
}

loc_80358548:
{
    r3 = (r31 + 36);
    r4 = 1;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x8035855Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8035855C:
{
    r3 = r31;
    r4 = 4;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_80358570:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80358580;
    }
}

loc_80358574:
{
    r0 = 100;
    r9 = 255;
    goto loc_80358588;
}

loc_80358580:
{
    r0 = 200;
    r9 = 255;
}

loc_80358588:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -9584));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword6;
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r9 = fctiwzword7;
    r3 = (r31 + 36);
    r4 = 2;
    r5 = 6;
    r6 = (r0 & 255);
    r7 = 0;
    r8 = 3;
    r9 = (r9 & 255);
    ctx->lr = 0x803585E8u;
    if constexpr (KnownRegArgsCpuCall<0x800E2FA4u>(&func_800E2FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_800E2FA4_55FF = func_800E2FA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2FA4_55FF);
        r4 = static_cast<uint32_t>(regargs_result_800E2FA4_55FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_803585FC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_8035860C;
    }
}

loc_80358600:
{
    r0 = 100;
    r9 = 255;
    goto loc_80358614;
}

loc_8035860C:
{
    r0 = 100;
    r9 = 220;
}

loc_80358614:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -9584));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword8;
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r9 = fctiwzword9;
    r3 = (r31 + 36);
    r4 = 3;
    r5 = 6;
    r6 = (r0 & 255);
    r7 = 0;
    r8 = 3;
    r9 = (r9 & 255);
    ctx->lr = 0x80358674u;
    if constexpr (KnownRegArgsCpuCall<0x800E2FA4u>(&func_800E2FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_800E2FA4_6080 = func_800E2FA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2FA4_6080);
        r4 = static_cast<uint32_t>(regargs_result_800E2FA4_6080 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035814C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035814C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8035814C func_8035814C preserves=true fpr_mask=0x00000000
