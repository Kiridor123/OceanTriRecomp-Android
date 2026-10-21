#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80527000_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80527000u);
    goto loc_80527000;

loc_80527000:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 1127219200;
}

loc_8052700C:
{
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80527028;
    }
}

loc_80527018:
{
}

loc_8052701C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80527028;
    }
}

loc_80527020:
{
}

loc_80527024:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80527030;
    }
}

loc_80527028:
{
    r3 = -1;
    goto loc_80527304;
}

loc_80527030:
{
}

loc_80527034:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80527058;
    }
}

loc_80527038:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1400));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r13 + -13384), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -13380), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -13376), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -13372), f0.d);
    MemoryInline::FlatWrite32((r13 + -13364), r0);
    MemoryInline::FlatWrite32((r13 + -13368), r0);
}

loc_80527058:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1400), 0, 40u, true, false);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1384));
    r8 = 0;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1400));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1392));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -1368));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1396));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1388));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f11.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -1380));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -1376));
        }
    }
    ctr = r5;
}

loc_80527084:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_805272AC;
    }
}

loc_80527088:
{
    r6 = MemoryInline::FlatRead16(r3);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r6 ^ -2147483648);
    stackword3 = r6;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r0 = (r0 ^ -2147483648);
    f9.d = MemoryInline::FlatReadFloat32((r13 + -13384));
    f5.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f6.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f3.d));
    SetCRFloatResident(cr, 0, f7.d, f2.d);
}

loc_805270B8:
{
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805270C4;
    }
}

loc_805270C0:
{
    f7.d = PpcFmulsInline(f1.d, f7.d);
}

loc_805270C4:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f9.d));
    f7.d = PpcFmulsInline(f0.d, f7.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    SetCRFloatResident(cr, 0, f13.d, f12.d);
}

loc_805270D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805270E0;
    }
}

loc_805270D8:
{
    f13.d = f12.d;
    goto loc_805270EC;
}

loc_805270E0:
{
    SetCRFloatResident(cr, 0, f13.d, f2.d);
}

loc_805270E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805270EC;
    }
}

loc_805270E8:
{
    f13.d = f2.d;
}

loc_805270EC:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f3.d));
    MemoryInline::FlatWriteFloat32((r13 + -13384), f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r13 + -13380));
    SetCRFloatResident(cr, 0, f7.d, f2.d);
}

loc_805270FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80527104;
    }
}

loc_80527100:
{
    f7.d = PpcFmulsInline(f1.d, f7.d);
}

loc_80527104:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f9.d));
    SetCRFloatResident(cr, 0, f7.d, f2.d);
}

loc_8052710C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052711C;
    }
}

loc_80527110:
{
    f7.d = PpcFmulsInline(f0.d, f7.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    goto loc_80527124;
}

loc_8052711C:
{
    f7.d = PpcFmulsInline(f11.d, f7.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
}

loc_80527124:
{
    SetCRFloatResident(cr, 0, f9.d, f12.d);
}

loc_80527128:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80527134;
    }
}

loc_8052712C:
{
    f9.d = f12.d;
    goto loc_80527140;
}

loc_80527134:
{
    SetCRFloatResident(cr, 0, f9.d, f2.d);
}

loc_80527138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80527140;
    }
}

loc_8052713C:
{
    f9.d = f2.d;
}

loc_80527140:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f9.d));
    f7.d = MemoryInline::FlatReadFloat32((r13 + -18852));
    MemoryInline::FlatWriteFloat32((r13 + -13380), f9.d);
    SetCRFloatResident(cr, 0, f10.d, f7.d);
}

loc_80527150:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527184;
    }
}

loc_80527158:
{
    f9.d = MemoryInline::FlatReadFloat32((r13 + -18856));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d));
    f9.d = PpcFmulsInline(f10.d, f9.d);
    SetCRFloatResident(cr, 0, f9.d, f7.d);
}

loc_80527168:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80527178;
    }
}

loc_8052716C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -13364), r0);
    goto loc_8052718C;
}

loc_80527178:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13364), r0);
    goto loc_8052718C;
}

loc_80527184:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13364), r0);
}

loc_8052718C:
{
}

loc_80527190:
{
    f10.d = MemoryInline::FlatReadFloat32((r13 + -13372));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805271B8;
    }
}

loc_80527198:
{
    f9.d = MemoryInline::FlatReadFloat32((r13 + -18840));
    f7.d = MemoryInline::FlatReadFloat32((r13 + -18848));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f9.d));
    SetCRFloatResident(cr, 0, f13.d, f7.d);
}

loc_805271A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805271D0;
    }
}

loc_805271B0:
{
    f13.d = f7.d;
    goto loc_805271D0;
}

loc_805271B8:
{
    f7.d = MemoryInline::FlatReadFloat32((r13 + -18844));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    SetCRFloatResident(cr, 0, f13.d, f12.d);
}

loc_805271C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805271D0;
    }
}

loc_805271CC:
{
    f13.d = f12.d;
}

loc_805271D0:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d));
    f9.d = MemoryInline::FlatReadFloat32((r13 + -18824));
    MemoryInline::FlatWriteFloat32((r13 + -13372), f13.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d / f7.d));
    SetCRFloatResident(cr, 0, f9.d, f12.d);
}

loc_805271E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805271F0;
    }
}

loc_805271E8:
{
    f9.d = f12.d;
    goto loc_805271FC;
}

loc_805271F0:
{
    SetCRFloatResident(cr, 0, f9.d, f2.d);
}

loc_805271F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805271FC;
    }
}

loc_805271F8:
{
    f9.d = f2.d;
}

loc_805271FC:
{
    f7.d = MemoryInline::FlatReadFloat32((r13 + -13376));
    SetCRFloatResident(cr, 0, f9.d, f7.d);
}

loc_80527204:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80527218;
    }
}

loc_80527208:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13368), r0);
    r8 = (r8 + 1);
    goto loc_80527220;
}

loc_80527218:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -13368), r0);
}

loc_80527220:
{
}

loc_80527224:
{
    f10.d = MemoryInline::FlatReadFloat32((r13 + -13376));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8052724C;
    }
}

loc_8052722C:
{
    f9.d = MemoryInline::FlatReadFloat32((r13 + -18828));
    f7.d = MemoryInline::FlatReadFloat32((r13 + -18836));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f9.d));
    SetCRFloatResident(cr, 0, f10.d, f7.d);
}

loc_8052723C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527264;
    }
}

loc_80527244:
{
    f10.d = f7.d;
    goto loc_80527264;
}

loc_8052724C:
{
    f7.d = MemoryInline::FlatReadFloat32((r13 + -18832));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    SetCRFloatResident(cr, 0, f10.d, f12.d);
}

loc_80527258:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527264;
    }
}

loc_80527260:
{
    f10.d = f12.d;
}

loc_80527264:
{
    f9.d = static_cast<double>(PpcForceSingleValueInline(f13.d));
    MemoryInline::FlatWriteFloat32((r13 + -13376), f10.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f6.d = PPC_Fctiwz(f7.d);
    f5.d = PPC_Fctiwz(f5.d);
    fctiwzword0 = PPC_FprLowWordInline(f6.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    fctiwzword1 = PPC_FprLowWordInline(f5.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80527088;
    }
}

loc_805272AC:
{
}

loc_805272B0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80527300;
    }
}

loc_805272B4:
{
    r0 = (r5 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r8 ^ -2147483648);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -1368));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword5));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -1372));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword6));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805272E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805272F8;
    }
}

loc_805272EC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80527300;
}

loc_805272F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80527300:
{
    r3 = 0;
}

loc_80527304:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80527000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80527000_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x0000015B gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80527000 func_80527000 preserves=true fpr_mask=0x00000000
