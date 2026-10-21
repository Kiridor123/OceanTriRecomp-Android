#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DCEF0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword16 = 0;
    uint32_t fctiwzword17 = 0;
    uint32_t fctiwzword18 = 0;
    uint32_t fctiwzword19 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword20 = 0;
    uint32_t fctiwzword21 = 0;
    uint32_t fctiwzword22 = 0;
    uint32_t fctiwzword23 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802DCEF0u);
    goto loc_802DCEF0;

loc_802DCEF0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r30 = r3;
    r29 = r4;
    r31 = r5;
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 - r4);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r29 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCF50:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_802DD20C;
    }
}

loc_802DCF54:
{
}

loc_802DCF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DD1D0;
    }
}

loc_802DCF5C:
{
}

loc_802DCF60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_802DD074;
    }
}

loc_802DCF64:
{
    r3 = (0 - r4);
    r3 = (r3 * r0);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r7));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802DCF84:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_802DCFBC;
    }
}

loc_802DCF88:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r3 = (r4 ^ -2147483648);
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802DCFA4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802DCFBC;
    }
}

loc_802DCFAC:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 4;
    goto loc_802DD370;
}

loc_802DCFBC:
{
}

loc_802DCFC0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_802DCFF4;
    }
}

loc_802DCFC4:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (0 - r3);
    r3 = (r3 * r7);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 6;
    goto loc_802DD370;
}

loc_802DCFF4:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r3 = (r7 ^ -2147483648);
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 ^ -2147483648);
    stackword9 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 2;
    goto loc_802DD370;
}

loc_802DD074:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r3 = (r0 ^ -2147483648);
    stackword11 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword11));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = (r4 ^ -2147483648);
    stackword12 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    r3 = (r7 ^ -2147483648);
    stackword13 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802DD0D8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_802DD118;
    }
}

loc_802DD0DC:
{
    r3 = (r4 ^ -2147483648);
    stackword14 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword14));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802DD0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802DD118;
    }
}

loc_802DD0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_802DD370;
}

loc_802DD118:
{
}

loc_802DD11C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_802DD150;
    }
}

loc_802DD120:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (0 - r3);
    r3 = (r3 * r7);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 6;
    goto loc_802DD370;
}

loc_802DD150:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r3 = (r7 ^ -2147483648);
    stackword15 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword15));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 ^ -2147483648);
    stackword16 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    r0 = (r0 ^ -2147483648);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword17));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 2;
    goto loc_802DD370;
}

loc_802DD1D0:
{
}

loc_802DD1D4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_802DD1E8;
    }
}

loc_802DD1D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 4;
    goto loc_802DD200;
}

loc_802DD1E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword6;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 0;
}

loc_802DD200:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_802DD370;
}

loc_802DD20C:
{
}

loc_802DD210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DD264;
    }
}

loc_802DD214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_802DD218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802DD250;
    }
}

loc_802DD21C:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r3));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802DD234;
    }
}

loc_802DD224:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 6;
    goto loc_802DD370;
}

loc_802DD234:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword7;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 2;
    goto loc_802DD370;
}

loc_802DD250:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 5;
    goto loc_802DD370;
}

loc_802DD264:
{
    r3 = r30;
    r4 = r29;
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
    r6 = MemoryInline::FlatRead16(r29);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = MemoryInline::FlatRead16((r29 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r0 = (r6 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword18));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword8;
    r0 = (r4 ^ -2147483648);
    stackword19 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword19));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword9;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802DD2CC:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_802DD2D8;
    }
}

loc_802DD2D0:
{
    r3 = 4;
    goto loc_802DD2E0;
}

loc_802DD2D8:
{
    r6 = r3;
    r3 = 0;
}

loc_802DD2E0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_802DD2E8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD2F4;
    }
}

loc_802DD2EC:
{
    r6 = r4;
    r3 = 6;
}

loc_802DD2F4:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_802DD300:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD308;
    }
}

loc_802DD304:
{
    r3 = 2;
}

loc_802DD308:
{
}

loc_802DD30C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DD32C;
    }
}

loc_802DD310:
{
}

loc_802DD314:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802DD344;
    }
}

loc_802DD318:
{
}

loc_802DD31C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_802DD35C;
    }
}

loc_802DD320:
{
}

loc_802DD324:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_802DD368;
    }
}

loc_802DD328:
{
    goto loc_802DD370;
}

loc_802DD32C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword10;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_802DD370;
}

loc_802DD344:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword11;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_802DD370;
}

loc_802DD35C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_802DD370;
}

loc_802DD368:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_802DD370:
{
}

loc_802DD374:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DD394;
    }
}

loc_802DD378:
{
}

loc_802DD37C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802DD404;
    }
}

loc_802DD380:
{
}

loc_802DD384:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_802DD474;
    }
}

loc_802DD388:
{
}

loc_802DD38C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_802DD4E4;
    }
}

loc_802DD390:
{
    goto loc_802DD550;
}

loc_802DD394:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26596));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword12;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD3B8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD3CC;
    }
}

loc_802DD3BC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 7;
    goto loc_802DD550;
}

loc_802DD3CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26592));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword13 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword13;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD3E8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802DD550;
    }
}

loc_802DD3EC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword14 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword14;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_802DD550;
}

loc_802DD404:
{
    r4 = MemoryInline::FlatRead16(r30);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26604));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword15;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD428:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD43C;
    }
}

loc_802DD42C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 3;
    goto loc_802DD550;
}

loc_802DD43C:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26600));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword16 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword16;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD458:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802DD550;
    }
}

loc_802DD45C:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword17 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword17;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_802DD550;
}

loc_802DD474:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26596));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword18 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword18;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD498:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD4AC;
    }
}

loc_802DD49C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 5;
    goto loc_802DD550;
}

loc_802DD4AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26592));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword19 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword19;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD4C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802DD550;
    }
}

loc_802DD4CC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword20 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword20;
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 3;
    goto loc_802DD550;
}

loc_802DD4E4:
{
    r4 = MemoryInline::FlatRead16(r30);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26604));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword21 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword21;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD508:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802DD51C;
    }
}

loc_802DD50C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 5;
    goto loc_802DD550;
}

loc_802DD51C:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26600));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword22 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword22;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DD538:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802DD550;
    }
}

loc_802DD53C:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword23 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword23;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 7;
}

loc_802DD550:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DCEF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DCEF0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DCEF0 func_802DCEF0 preserves=true fpr_mask=0x00000000
