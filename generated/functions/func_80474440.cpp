#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80474440_ra38_e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_lhax_804744EC_loc_0 = 0;
    uint32_t addr_lhax_804744F0_loc_0 = 0;
    uint32_t addr_lhax_80474568_loc_0 = 0;
    uint32_t addr_lhax_80474570_loc_0 = 0;
    uint32_t addr_lhax_804745B0_loc_0 = 0;
    uint32_t addr_lhax_804745B4_loc_0 = 0;
    uint32_t addr_lhax_804745D8_loc_0 = 0;
    uint32_t addr_lhax_804745DC_loc_0 = 0;
    uint32_t addr_lhax_80474600_loc_0 = 0;
    uint32_t addr_lhax_80474604_loc_0 = 0;
    uint32_t addr_lhax_80474628_loc_0 = 0;
    uint32_t addr_lhax_8047462C_loc_0 = 0;
    uint32_t addr_lhax_80474650_loc_0 = 0;
    uint32_t addr_lhax_80474654_loc_0 = 0;
    uint32_t addr_lhax_80474694_loc_0 = 0;
    uint32_t addr_lhax_80474698_loc_0 = 0;
    uint32_t addr_lhax_804746E0_loc_0 = 0;
    uint32_t addr_lhax_804746E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r22_rot_6 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r23_rot_6 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r24_rot_6 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r26_rot_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r29_rot_6 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80474440u);
    goto loc_80474440;

loc_80474440:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r0 = 1127219200;
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2848));
    r11 = 3;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r8 = 1;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r6 = 0x80000000u;
    // nop
}

loc_80474478:
{
    r11 = (r11 + 1);
    r9 = 1;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r7 = (r5 + r0);
}

loc_80474488:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8047448C:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r10 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8047470C;
    }
}

loc_80474498:
{
}

loc_8047449C:
{
    r12 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_804746BC;
    }
}

loc_804744A4:
{
    r22 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804744BC;
    }
}

loc_804744AC:
{
    r0 = (r6 + -2);
}

loc_804744B4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804744BC;
    }
}

loc_804744B8:
{
    r22 = 1;
}

loc_804744BC:
{
}

loc_804744C0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_804746BC;
    }
}

loc_804744C4:
{
    r0 = (r12 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_804744D4:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(0))) {
        goto loc_804746BC;
    }
}

loc_804744D8:
{
    r12 = (r10 - r8);
    r0 = (r10 - r9);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_4 & -2);
    r23 = (r10 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    addr_lhax_804744EC_loc_0 = (r3 + r12);
    r12 = MemoryInline::FlatRead16(addr_lhax_804744EC_loc_0);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    addr_lhax_804744F0_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804744F0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r22 = (r23 - r8);
    r23 = (r23 - r9);
    r27 = (r10 + 3);
    r24 = (r12 * r0);
    r12 = (r10 + 5);
    r26 = (r27 - r8);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r27 = (r27 - r9);
    r29 = (r10 + 4);
    r24 = (r24 ^ -2147483648);
    stackword14 = r24;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 12u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 12), r24);
    r28 = (r29 - r8);
    r25 = (r10 + 2);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword14));
    r24 = (r25 - r8);
    r25 = (r25 - r9);
    r29 = (r29 - r9);
    f2.d = (f2.d - f3.d);
    r30 = (r12 - r8);
    r31 = (r12 - r9);
    r0 = (r10 + 6);
    r12 = (r0 - r8);
    r22_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r22 = (r22_rot_4 & -2);
    f1.d = (f1.d + f2.d);
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r23 = (r23_rot_4 & -2);
    r0 = (r0 - r9);
    r24_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r24 = (r24_rot_4 & -2);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    r25_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r25 = (r25_rot_4 & -2);
    addr_lhax_80474568_loc_0 = (r3 + r22);
    r22 = MemoryInline::FlatRead16(addr_lhax_80474568_loc_0);
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r26_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_4 & -2);
    addr_lhax_80474570_loc_0 = (r3 + r23);
    r23 = MemoryInline::FlatRead16(addr_lhax_80474570_loc_0);
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r27 = (r27_rot_4 & -2);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r28_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r28 = (r28_rot_4 & -2);
    r23 = (r22 * r23);
    r29_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_4 & -2);
    r30_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_4 & -2);
    r31_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r31 = (r31_rot_4 & -2);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_5 & -2);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r23 = (r23 ^ -2147483648);
    stackword15 = r23;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 20), r23);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword15));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    addr_lhax_804745B0_loc_0 = (r3 + r24);
    r24 = MemoryInline::FlatRead16(addr_lhax_804745B0_loc_0);
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    addr_lhax_804745B4_loc_0 = (r3 + r25);
    r25 = MemoryInline::FlatRead16(addr_lhax_804745B4_loc_0);
    r25 = (r25 << 16);
    r25 = (static_cast<int32_t>(r25) >> 16);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r25 = (r24 * r25);
    r25 = (r25 ^ -2147483648);
    stackword16 = r25;
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 12), r25);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword16));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    addr_lhax_804745D8_loc_0 = (r3 + r26);
    r26 = MemoryInline::FlatRead16(addr_lhax_804745D8_loc_0);
    r26 = (r26 << 16);
    r26 = (static_cast<int32_t>(r26) >> 16);
    addr_lhax_804745DC_loc_0 = (r3 + r27);
    r27 = MemoryInline::FlatRead16(addr_lhax_804745DC_loc_0);
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r27 = (r26 * r27);
    r27 = (r27 ^ -2147483648);
    stackword17 = r27;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 20), r27);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword17));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    addr_lhax_80474600_loc_0 = (r3 + r28);
    r28 = MemoryInline::FlatRead16(addr_lhax_80474600_loc_0);
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    addr_lhax_80474604_loc_0 = (r3 + r29);
    r29 = MemoryInline::FlatRead16(addr_lhax_80474604_loc_0);
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r29 = (r28 * r29);
    r29 = (r29 ^ -2147483648);
    stackword18 = r29;
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 12), r29);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword18));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    addr_lhax_80474628_loc_0 = (r3 + r30);
    r30 = MemoryInline::FlatRead16(addr_lhax_80474628_loc_0);
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    addr_lhax_8047462C_loc_0 = (r3 + r31);
    r31 = MemoryInline::FlatRead16(addr_lhax_8047462C_loc_0);
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r31 = (r30 * r31);
    r31 = (r31 ^ -2147483648);
    stackword19 = r31;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 20), r31);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword19));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    addr_lhax_80474650_loc_0 = (r3 + r12);
    r12 = MemoryInline::FlatRead16(addr_lhax_80474650_loc_0);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    addr_lhax_80474654_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80474654_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r0 = (r12 * r0);
    r0 = (r0 ^ -2147483648);
    stackword20 = r0;
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 12), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword20));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    r0 = (r10 + 7);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r12 = (r0 - r8);
    r10 = (r10 + 8);
    r0 = (r0 - r9);
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_6 & -2);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    addr_lhax_80474694_loc_0 = (r3 + r12);
    r12 = MemoryInline::FlatRead16(addr_lhax_80474694_loc_0);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    addr_lhax_80474698_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80474698_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r12 * r0);
    r0 = (r0 ^ -2147483648);
    stackword21 = r0;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 20), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword21));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804744D8;
    }
}

loc_804746BC:
{
    r0 = (r4 - r10);
    ctr = r0;
}

loc_804746C8:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r4))) {
        goto loc_8047470C;
    }
}

loc_804746CC:
{
    r12 = (r10 - r8);
    r0 = (r10 - r9);
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_9 & -2);
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    addr_lhax_804746E0_loc_0 = (r3 + r12);
    r12 = MemoryInline::FlatRead16(addr_lhax_804746E0_loc_0);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    addr_lhax_804746E4_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804746E4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r10 = (r10 + 1);
    r0 = (r12 * r0);
    r0 = (r0 ^ -2147483648);
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword22));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r7, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804746CC;
    }
}

loc_8047470C:
{
    r9 = (r9 + 1);
    r11 = (r11 + 1);
}

loc_80474718:
{
    r7 = (r7 + 8);
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(2))) {
        goto loc_80474488;
    }
}

loc_80474720:
{
    r8 = (r8 + 1);
}

loc_80474728:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(2))) {
        goto loc_80474478;
    }
}

loc_8047472C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return f1.d;
}

}

extern "C" void func_80474440(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80474440_ra38_e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FC3 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80474440 func_80474440 preserves=true fpr_mask=0x00000000
