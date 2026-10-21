#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804724D0_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t addr_lhax_8047254C_loc_0 = 0;
    uint32_t addr_lhax_80472554_loc_0 = 0;
    uint32_t addr_lhax_804725C4_loc_0 = 0;
    uint32_t addr_lhax_804725D0_loc_0 = 0;
    uint32_t addr_lhax_804726C0_loc_0 = 0;
    uint32_t addr_lhax_804726C8_loc_0 = 0;
    uint32_t addr_lhax_804729E8_loc_0 = 0;
    uint32_t addr_lhax_804729F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r23_ca_0 = 0;
    uint32_t r23_ca_1 = 0;
    uint32_t r23_ca_2 = 0;
    uint32_t r23_ca_3 = 0;
    uint32_t r23_ca_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword24 = 0;
    uint32_t stackword25 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804724D0u);
    goto loc_804724D0;

loc_804724D0:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r22 = (r1 + 40);
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    r11 = 0;
    f5.d = MemoryInline::FlatReadFloat64((r2 + -2872));
    r31 = 0;
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r28 = 1127219200;
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    r21 = 1;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2848));
    r0 = 14;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2856));
    goto loc_8047291C;
}

loc_80472520:
{
    r12 = 7;
    r9 = r5;
    r16 = (r3 + r31);
    r15 = 0;
    r10 = 0;
    r17 = 0;
    ctr = r12;
}

loc_8047253C:
{
    r18 = (r10 + 1);
    r12 = MemoryInline::FlatRead16((r9 + 4));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r18_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(1));
    r18 = (r18_rot_3 & -2);
    r20 = MemoryInline::FlatRead16(r16);
    r20 = (r20 << 16);
    r20 = (static_cast<int32_t>(r20) >> 16);
    addr_lhax_8047254C_loc_0 = (r5 + r18);
    r23 = MemoryInline::FlatRead16(addr_lhax_8047254C_loc_0);
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(11));
    r12 = (r12_rot_3 & -2048);
    addr_lhax_80472554_loc_0 = (r5 + r17);
    r19 = MemoryInline::FlatRead16(addr_lhax_80472554_loc_0);
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r18 = MemoryInline::FlatRead16((r16 + 2));
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
    r20 = (r23 * r20);
    r18 = (r19 * r18);
    r18 = (r20 + r18);
    r12 = (r12 - r18);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(11) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r12) >> 11);
    r23_ca_3 = (xer >> 29) & 1u;
    r23 = (r12 + r23_ca_3);
}

loc_80472578:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(32767))) {
        goto loc_80472584;
    }
}

loc_8047257C:
{
    r23 = 32767;
    goto loc_80472590;
}

loc_80472584:
{
}

loc_80472588:
{
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(-32768))) {
        goto loc_80472590;
    }
}

loc_8047258C:
{
    r23 = -32768;
}

loc_80472590:
{
    r20 = (static_cast<int32_t>(r23) >> 31);
    r18 = (static_cast<int32_t>(r15) >> 31);
    r19 = (r20 ^ r23);
    r12 = (r18 ^ r15);
    r19 = (r19 - r20);
    r12 = (r12 - r18);
}

loc_804725AC:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r12))) {
        goto loc_804725B4;
    }
}

loc_804725B0:
{
    r15 = r23;
}

loc_804725B4:
{
    r18 = (r10 + 2);
    r17 = (r17 + 2);
    r18_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(1));
    r18 = (r18_rot_4 & -2);
    r12 = MemoryInline::FlatRead16((r9 + 6));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    addr_lhax_804725C4_loc_0 = (r5 + r18);
    r23 = MemoryInline::FlatRead16(addr_lhax_804725C4_loc_0);
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r20 = MemoryInline::FlatRead16(r16);
    r20 = (r20 << 16);
    r20 = (static_cast<int32_t>(r20) >> 16);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(11));
    r12 = (r12_rot_4 & -2048);
    addr_lhax_804725D0_loc_0 = (r5 + r17);
    r19 = MemoryInline::FlatRead16(addr_lhax_804725D0_loc_0);
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r18 = MemoryInline::FlatRead16((r16 + 2));
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
    r20 = (r23 * r20);
    r18 = (r19 * r18);
    r18 = (r20 + r18);
    r12 = (r12 - r18);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(11) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r12) >> 11);
    r23_ca_4 = (xer >> 29) & 1u;
    r23 = (r12 + r23_ca_4);
}

loc_804725F4:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(32767))) {
        goto loc_80472600;
    }
}

loc_804725F8:
{
    r23 = 32767;
    goto loc_8047260C;
}

loc_80472600:
{
}

loc_80472604:
{
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(-32768))) {
        goto loc_8047260C;
    }
}

loc_80472608:
{
    r23 = -32768;
}

loc_8047260C:
{
    r20 = (static_cast<int32_t>(r23) >> 31);
    r18 = (static_cast<int32_t>(r15) >> 31);
    r19 = (r20 ^ r23);
    r12 = (r18 ^ r15);
    r19 = (r19 - r20);
    r12 = (r12 - r18);
}

loc_80472628:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r12))) {
        goto loc_80472630;
    }
}

loc_8047262C:
{
    r15 = r23;
}

loc_80472630:
{
    r9 = (r9 + 4);
    r10 = (r10 + 2);
    r17 = (r17 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047253C;
    }
}

loc_80472640:
{
    r9 = 13;
    r12 = 0;
    ctr = r9;
    // nop
}

loc_80472650:
{
    r9 = (r15 + 8);
}

loc_80472658:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(15))) {
        goto loc_80472670;
    }
}

loc_8047265C:
{
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    r12 = (r12 + 1);
    r9 = (r9 + r15);
    r15 = (static_cast<int32_t>(r9) >> 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472650;
    }
}

loc_80472670:
{
    r12 = (r12 + -2);
}

loc_80472678:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(-1))) {
        goto loc_80472680;
    }
}

loc_8047267C:
{
    r12 = -1;
}

loc_80472680:
{
    r12 = (r12 + 1);
    r20 = r5;
    r17 = PPC_Slw(static_cast<uint32_t>(r21), static_cast<uint32_t>(r12));
    r19 = (r1 + 128);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(11));
    r9 = (r9_rot_6 & -2048);
    r18 = (r1 + 40);
    r29 = (r9 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r9 = 0;
    r10 = 0;
    r30 = 0;
    ctr = r0;
}

loc_804726B0:
{
    r23 = (r10 + 1);
    r15 = MemoryInline::FlatRead16((r20 + 4));
    r15 = (r15 << 16);
    r15 = (static_cast<int32_t>(r15) >> 16);
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r23 = (r23_rot_4 & -2);
    r24 = MemoryInline::FlatRead16(r16);
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    addr_lhax_804726C0_loc_0 = (r22 + r23);
    r23 = MemoryInline::FlatRead16(addr_lhax_804726C0_loc_0);
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(11));
    r27 = (r27_rot_4 & -2048);
    addr_lhax_804726C8_loc_0 = (r22 + r30);
    r25 = MemoryInline::FlatRead16(addr_lhax_804726C8_loc_0);
    r25 = (r25 << 16);
    r25 = (static_cast<int32_t>(r25) >> 16);
    r26 = MemoryInline::FlatRead16((r16 + 2));
    r26 = (r26 << 16);
    r26 = (static_cast<int32_t>(r26) >> 16);
    r23 = (r23 * r24);
    stackword20 = r28;
    MemoryInline::FlatWriteRam32((r1 + 184), r28);
    stackword21 = r29;
    MemoryInline::FlatWriteRam32((r1 + 196), r29);
    r24 = (r25 * r26);
    stackword22 = r28;
    MemoryInline::FlatWriteRam32((r1 + 192), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword22), static_cast<uint32_t>(stackword21));
    f0.d = (f0.d - f3.d);
    r23 = (r23 + r24);
    r25 = (r27 - r23);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
    r24 = (r25 ^ -2147483648);
    stackword23 = r24;
    MemoryInline::FlatWriteRam32((r1 + 188), r24);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword23));
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f0.d);
    f0.d = (f2.d - f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r25 = fctiwzword0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8047272C;
    }
}

loc_8047271C:
{
    f0.d = (f1.d + f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r25 = fctiwzword1;
}

loc_8047272C:
{
}

loc_80472730:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(-8))) {
        goto loc_80472748;
    }
}

loc_80472734:
{
    r24 = (-8 - r25);
}

loc_8047273C:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r24))) {
        goto loc_80472744;
    }
}

loc_80472740:
{
    r9 = r24;
}

loc_80472744:
{
    r25 = -8;
}

loc_80472748:
{
}

loc_8047274C:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(7))) {
        goto loc_80472764;
    }
}

loc_80472750:
{
    r24 = (r25 + -7);
}

loc_80472758:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r24))) {
        goto loc_80472760;
    }
}

loc_8047275C:
{
    r9 = r24;
}

loc_80472760:
{
    r25 = 7;
}

loc_80472764:
{
    r24 = (r25 * r17);
    MemoryInline::FlatWrite32(r19, r25);
    r24_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(11));
    r24 = (r24_rot_4 & -2048);
    r23 = (r23 + r24);
    r23 = (r23 + 1024);
    r23 = (static_cast<int32_t>(r23) >> 11);
}

loc_80472780:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(32767))) {
        goto loc_8047278C;
    }
}

loc_80472784:
{
    r23 = 32767;
    goto loc_80472798;
}

loc_8047278C:
{
}

loc_80472790:
{
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(-32768))) {
        goto loc_80472798;
    }
}

loc_80472794:
{
    r23 = -32768;
}

loc_80472798:
{
    r15 = (r15 - r23);
    MemoryInline::FlatWrite16((r18 + 4), static_cast<uint16_t>(r23));
    r15 = (r15 * r15);
    r20 = (r20 + 2);
    stackword24 = r28;
    MemoryInline::FlatWriteRam32((r1 + 208), r28);
    r19 = (r19 + 4);
    r18 = (r18 + 2);
    r10 = (r10 + 1);
    r15 = (r15 ^ -2147483648);
    stackword25 = r15;
    MemoryInline::FlatWriteRam32((r1 + 212), r15);
    r30 = (r30 + 2);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword24), static_cast<uint32_t>(stackword25));
    f0.d = (f0.d - f3.d);
    f4.d = (f4.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804726B0;
    }
}

loc_804727D4:
{
    r10 = (r9 + 8);
    goto loc_804727F8;
}

loc_804727E0:
{
    r12 = (r12 + 1);
    r10 = (static_cast<int32_t>(r10) >> 1);
}

loc_804727EC:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(12))) {
        goto loc_804727F8;
    }
}

loc_804727F0:
{
    r12 = 11;
    goto loc_80472800;
}

loc_804727F8:
{
}

loc_804727FC:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(256))) {
        goto loc_804727E0;
    }
}

loc_80472800:
{
}

loc_80472804:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(12))) {
        goto loc_80472810;
    }
}

loc_80472808:
{
}

loc_8047280C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(1))) {
        goto loc_80472680;
    }
}

loc_80472810:
{
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_80472814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80472914;
    }
}

loc_80472818:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 144u, true, false);
    r15 = MemoryInline::ReadResolved32(guest_range_3, 88u, (r1 + 128));
    r14 = r12;
    r10 = MemoryInline::ReadResolved32(guest_range_3, 92u, (r1 + 132));
    f5.d = f4.d;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 96u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 96u, (r1 + 136));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 100u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 104u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 104u, (r1 + 144));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 108u, (r1 + 148));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_3, 112u, (r1 + 152));
    r24 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 40));
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    r23 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r1 + 42));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r20 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r1 + 44));
    r20 = (r20 << 16);
    r20 = (static_cast<int32_t>(r20) >> 16);
    r19 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r1 + 46));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r18 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r1 + 48));
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
    r17 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r1 + 50));
    r17 = (r17 << 16);
    r17 = (static_cast<int32_t>(r17) >> 16);
    r16 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r1 + 52));
    r16 = (r16 << 16);
    r16 = (static_cast<int32_t>(r16) >> 16);
    r12 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r1 + 54));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 212u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 64u, (r1 + 72), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 156));
    MemoryInline::WriteResolved32(guest_range_4, 68u, (r1 + 76), r10);
    r10 = MemoryInline::ReadResolved32(guest_range_3, 120u, (r1 + 160));
    MemoryInline::WriteResolved32(guest_range_4, 72u, (r1 + 80), r9);
    r9 = MemoryInline::ReadResolved32(guest_range_3, 124u, (r1 + 164));
    MemoryInline::WriteResolved32(guest_range_4, 76u, (r1 + 84), r29);
    r29 = MemoryInline::ReadResolved32(guest_range_3, 128u, (r1 + 168));
    MemoryInline::WriteResolved32(guest_range_4, 80u, (r1 + 88), r27);
    r27 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r1 + 172));
    MemoryInline::WriteResolved32(guest_range_4, 84u, (r1 + 92), r26);
    r26 = MemoryInline::ReadResolved32(guest_range_3, 136u, (r1 + 176));
    MemoryInline::WriteResolved32(guest_range_4, 88u, (r1 + 96), r25);
    r25 = MemoryInline::ReadResolved32(guest_range_3, 140u, (r1 + 180));
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r1 + 8), static_cast<uint16_t>(r24));
    r24 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r1 + 56));
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r1 + 10), static_cast<uint16_t>(r23));
    r23 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r1 + 58));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r1 + 12), static_cast<uint16_t>(r20));
    r20 = MemoryInline::ReadResolved16(guest_range_3, 20u, (r1 + 60));
    r20 = (r20 << 16);
    r20 = (static_cast<int32_t>(r20) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r1 + 14), static_cast<uint16_t>(r19));
    r19 = MemoryInline::ReadResolved16(guest_range_3, 22u, (r1 + 62));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r1 + 16), static_cast<uint16_t>(r18));
    r18 = MemoryInline::ReadResolved16(guest_range_3, 24u, (r1 + 64));
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r1 + 18), static_cast<uint16_t>(r17));
    r17 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r1 + 66));
    r17 = (r17 << 16);
    r17 = (static_cast<int32_t>(r17) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r1 + 20), static_cast<uint16_t>(r16));
    r16 = MemoryInline::ReadResolved16(guest_range_3, 28u, (r1 + 68));
    r16 = (r16 << 16);
    r16 = (static_cast<int32_t>(r16) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r1 + 22), static_cast<uint16_t>(r12));
    r12 = MemoryInline::ReadResolved16(guest_range_3, 30u, (r1 + 70));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    MemoryInline::WriteResolved32(guest_range_4, 208u, (r1 + 216), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_4, 92u, (r1 + 100), r15);
        MemoryInline::WriteResolved32(guest_range_4, 96u, (r1 + 104), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 100u, (r1 + 108), r9);
        MemoryInline::WriteResolved32(guest_range_4, 104u, (r1 + 112), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_4, 108u, (r1 + 116), r27);
        MemoryInline::WriteResolved32(guest_range_4, 112u, (r1 + 120), r26);
    }
    MemoryInline::WriteResolved32(guest_range_4, 116u, (r1 + 124), r25);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r24)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r1 + 24), r24);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r1 + 26), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r20)) << 16) | static_cast<uint16_t>(r19)))) {
        MemoryInline::WriteResolved16(guest_range_4, 20u, (r1 + 28), r20);
        MemoryInline::WriteResolved16(guest_range_4, 22u, (r1 + 30), r19);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r18)) << 16) | static_cast<uint16_t>(r17)))) {
        MemoryInline::WriteResolved16(guest_range_4, 24u, (r1 + 32), r18);
        MemoryInline::WriteResolved16(guest_range_4, 26u, (r1 + 34), r17);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r16)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_4, 28u, (r1 + 36), r16);
        MemoryInline::WriteResolved16(guest_range_4, 30u, (r1 + 38), r12);
    }
}

loc_80472914:
{
    r31 = (r31 + 4);
    r11 = (r11 + 1);
}

loc_8047291C:
{
}

loc_80472920:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r4))) {
        goto loc_80472520;
    }
}

loc_80472924:
{
    r3 = MemoryInline::FlatRead16((r1 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r14 & 15);
    MemoryInline::FlatWrite16((r5 + 28), static_cast<uint16_t>(r3));
}

loc_80472934:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 38), 0, 182u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 178u, (r1 + 216));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0_mrot_0 = (r0_rot_0 & -16);
    r0_mdest_0 = (r0 & 15);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = MemoryInline::ReadResolved16(guest_range_5, 0u, (r1 + 38));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite16((r5 + 30), static_cast<uint16_t>(r3));
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r7, static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 34u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 38u, (r1 + 76));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 34u, (r1 + 72));
        }
    }
    r3 = (r3 & 15);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_0 = (r3_rot_0 & 240);
    r3_mdest_0 = (r3 & -241);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 1), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 42u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 46u, (r1 + 84));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 42u, (r1 + 80));
        }
    }
    r3 = (r3 & 15);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_1 = (r3_rot_1 & 240);
    r3_mdest_1 = (r3 & -241);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r7 + 2), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 50u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 54u, (r1 + 92));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 50u, (r1 + 88));
        }
    }
    r3 = (r3 & 15);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_2 = (r3_rot_2 & 240);
    r3_mdest_2 = (r3 & -241);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r7 + 3), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 58u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 62u, (r1 + 100));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 58u, (r1 + 96));
        }
    }
    r3 = (r3 & 15);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_3 = (r3_rot_3 & 240);
    r3_mdest_3 = (r3 & -241);
    r3 = (r3_mdest_3 | r3_mrot_3);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r7 + 4), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 66u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 70u, (r1 + 108));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 66u, (r1 + 104));
        }
    }
    r3 = (r3 & 15);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_4 = (r3_rot_4 & 240);
    r3_mdest_4 = (r3 & -241);
    r3 = (r3_mdest_4 | r3_mrot_4);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r7 + 5), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 74u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 78u, (r1 + 116));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 74u, (r1 + 112));
        }
    }
    r3 = (r3 & 15);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_5 = (r3_rot_5 & 240);
    r3_mdest_5 = (r3 & -241);
    r3 = (r3_mdest_5 | r3_mrot_5);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r7 + 6), static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 82u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 86u, (r1 + 124));
            r4 = MemoryInline::ReadResolved32(guest_range_5, 82u, (r1 + 120));
        }
    }
    r3 = (r3 & 15);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r3_mrot_6 = (r3_rot_6 & 240);
    r3_mdest_6 = (r3 & -241);
    r3 = (r3_mdest_6 | r3_mrot_6);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r7 + 7), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804729F8;
    }
}

loc_804729D8:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r1 + 10);
    r3 = (r1 + 8);
    addr_lhax_804729E8_loc_0 = (r4 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_804729E8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
    addr_lhax_804729F0_loc_0 = (r3 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_804729F0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 4), static_cast<uint16_t>(r0));
}

loc_804729F8:
{
    r11 = (r1 + 304);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804724D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804724D0_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001E3B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804724D0 func_804724D0 preserves=true fpr_mask=0x00000000
