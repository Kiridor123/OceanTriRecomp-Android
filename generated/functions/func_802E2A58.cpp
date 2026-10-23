#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802E2A58_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802E2A58;

loc_802E2A58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r29 = r3;
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r30 = MemoryInline::FlatRead32((r4 + 4));
    r31 = r30;
    r28 = MemoryInline::FlatRead16((r4 + 2));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 32768);
}

loc_802E2AA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E2ABC;
    }
}

loc_802E2AA4:
{
    r0 = (r28 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r30_addr_1 = (r30 + r0);
    r3 = MemoryInline::FlatRead16(r30_addr_1);
    r4 = (r5 & 65535);
    // inline leaf 0x802E2750 (8 guest instruction(s))
    r4 = (r4 & 65535);
    r3 = (r3 & 65535);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x802E2750
    r5 = r3;
}

loc_802E2ABC:
{
    r3 = (r5 & 65535);
}

loc_802E2AC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E2ADC;
    }
}

loc_802E2AC8:
{
    r3 = r29;
    r4 = (r30 + 4);
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
    r3 = 1;
    goto loc_802E2C4C;
}

loc_802E2ADC:
{
    r4 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_802E2AE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E2AFC;
    }
}

loc_802E2AE8:
{
    r3 = r29;
    r4 = (r30 + 4);
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
    r3 = 1;
    goto loc_802E2C4C;
}

loc_802E2AFC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802E2B30;
    }
}

loc_802E2B00:
{
    r28 = (r28 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E2B0C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802E2B24;
    }
}

loc_802E2B10:
{
    r3 = r29;
    r4 = (r30 + 4);
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
    r3 = 0;
    goto loc_802E2C4C;
}

loc_802E2B24:
{
    r31 = r30;
    r30 = (r30 + 8);
    goto loc_802E2ADC;
}

loc_802E2B30:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_802E2B38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E2B4C;
    }
}

loc_802E2B3C:
{
    r3 = r29;
    r4 = (r31 + 4);
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
    goto loc_802E2C48;
}

loc_802E2B4C:
{
    r5 = MemoryInline::FlatRead16(r31);
    r0 = (r3 - r5);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 12u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r4 - r5);
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
}

loc_802E2C48:
{
    r3 = 1;
}

loc_802E2C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E2A58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E2A58_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E2A58 func_802E2A58 preserves=true fpr_mask=0x00000000
