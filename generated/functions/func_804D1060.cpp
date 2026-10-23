#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D1060_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r19_ca_0 = 0;
    uint32_t r19_ca_1 = 0;
    uint32_t r19_ca_2 = 0;
    uint32_t r19_ca_3 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addze_src_0 = 0;
    uint32_t r5_addze_src_1 = 0;
    uint32_t r5_addze_src_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r13 = ctx->gpr[13];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804D1060;

loc_804D1060:
{
    MemoryHw::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r0 = MemoryHw::FlatRead16((r13 + -20072));
    r29 = r4;
    r30 = r5;
    r17 = r6;
}

loc_804D1088:
{
    r31 = r7;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_804D1094;
    }
}

loc_804D1090:
{
    goto loc_804D10D0;
}

loc_804D1094:
{
    r4 = 0x80000000u;
    r0 = MemoryHw::FlatRead32((r4 + 204));
}

loc_804D10A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D10B8;
    }
}

loc_804D10A4:
{
    r4 = -872415232;
    r0 = MemoryHw::FlatRead16((r4 + 8302));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryHw::FlatWrite16((r13 + -20072), static_cast<uint16_t>(r0));
    goto loc_804D10C0;
}

loc_804D10B8:
{
    r0 = 0;
    MemoryHw::FlatWrite16((r13 + -20072), static_cast<uint16_t>(r0));
}

loc_804D10C0:
{
    r4 = 0x804D0000u;
    r0 = (r0 & 65535);
    r4 = (r4 + 3488);
    MemoryHw::FlatWrite32((r13 + -15064), r4);
}

loc_804D10D0:
{
    r12 = MemoryHw::FlatRead32((r13 + -15064));
    r4 = r3;
    r3 = (r0 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x804D10ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryHw::FlatRead32((r1 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r11 = MemoryHw::FlatRead32((r1 + 8));
    r9 = MemoryHw::FlatRead16((r4 + 26));
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r5 = MemoryHw::FlatRead16((r4 + 28));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r8 = (r8_rot_0 & -32);
    r6 = MemoryHw::FlatRead32((r4 + 36));
    r23 = (r4 + 44);
    r10 = (r9 * r5);
    r5 = MemoryHw::FlatRead32((r4 + 20));
    r22 = (r4 + r6);
    r7 = MemoryHw::FlatRead16((r4 + 18));
    r6 = MemoryHw::FlatRead16((r4 + 16));
    r24 = 0;
    r12 = PPC_Divw(static_cast<int32_t>(r11), static_cast<int32_t>(r10));
    r0 = (r12 * r10);
    r11 = (r11 - r0);
    r10 = PPC_Divw(static_cast<int32_t>(r11), static_cast<int32_t>(r9));
    r9 = (r10 * r9);
    r0 = (r12 * r5);
    r26 = (r11 - r9);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r27 = (r10 * r7);
    r22 = (r22 + r0);
    r26 = (r26 * r6);
    goto loc_804D12A4;
}

loc_804D115C:
{
    r7 = (r27 + r24);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & -536870912);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r7) >> 3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r5 + r9_ca_2);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & -536870912);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r24);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r24) >> 3);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r5_addze_src_2 = r5;
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_addze_src_2 + r5_ca_2);
    r0 = (r0 - r4);
    r5 = (r5 * r8);
    r6 = (r6 - r7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -1);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -1);
    r0 = (r0 + r4);
    r4 = (r6 + r7);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & -2);
    r11 = (r29 + r5);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & -4);
    r25 = 0;
    goto loc_804D1290;
}

loc_804D11B0:
{
    r4 = MemoryHw::FlatRead16((r4 + 30));
    r28 = (r30 + r25);
    r5 = (r26 + r25);
    r0 = 240;
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & -32);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_4 & 1);
    r4 = (r4 + r6);
    r20_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(29));
    r20 = (r20_rot_3 & -536870912);
    r7 = (static_cast<int32_t>(r4) >> 1);
    r19_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r19 = (r19_rot_3 & 1);
    r7 = (r7 * r9);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r6 = (r6_rot_6 & -536870912);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r18 = (static_cast<int32_t>(r5) >> 3);
    r6 = (r6 - r4);
    r21 = (r28 & 1);
    r17_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r17 = (r17_rot_3 & -1);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r18 + r6_ca_3);
    r17 = (r17 + r4);
    r20 = (r20 - r19);
    r21 = (r21 ^ r19);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r5 = (r5_rot_3 & -1073741824);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r17);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r18 = (static_cast<int32_t>(r17) >> 2);
    r20_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r20 = (r20_rot_4 & -1);
    r17 = (r5 - r4);
    r21 = (r21 - r19);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
    r5_ca_4 = (xer >> 29) & 1u;
    r5 = (r18 + r5_ca_4);
    r20 = (r20 + r19);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r18 = (static_cast<int32_t>(r28) >> 3);
    r17_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r17 = (r17_rot_4 & -1);
    r7 = (r22 + r7);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_7 & -16);
    r7 = (r7 + r6);
    r19_ca_3 = (xer >> 29) & 1u;
    r19 = (r18 + r19_ca_3);
    r7 = (r7 + r10);
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(1));
    r21 = (r21_rot_3 & 1);
    r28 = (r17 + r4);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(5));
    r6 = (r6_rot_8 & -32);
    r4 = (r21 + r20);
    r7_addr_3 = (r7 + r5);
    r7 = MemoryHw::FlatRead8(r7_addr_3);
    r6 = (r11 + r6);
    r21_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r21 = (r21_rot_4 & -2);
    r4 = (static_cast<int32_t>(r4) >> 1);
    r5 = (6 - r21);
    r6 = (r6 + r12);
    r5 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
    r6_addr_3 = (r6 + r4);
    r7 = MemoryHw::FlatRead8(r6_addr_3);
    r5 = (r5 & 3);
    r23_addr_3 = (r23 + r5);
    r5 = MemoryHw::FlatRead8(r23_addr_3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D127C;
    }
}

loc_804D1278:
{
    r0 = 15;
}

loc_804D127C:
{
    r0 = (r5 & r0);
    r25 = (r25 + 1);
    r0 = (r0 & 255);
    r0 = (r7 | r0);
    r6_addr_4 = (r6 + r4);
    MemoryHw::FlatWrite8(r6_addr_4, static_cast<uint8_t>(r0));
}

loc_804D1290:
{
    r4 = MemoryHw::FlatRead32((r1 + 12));
    r0 = MemoryHw::FlatRead16((r4 + 16));
}

loc_804D129C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_804D11B0;
    }
}

loc_804D12A0:
{
    r24 = (r24 + 1);
}

loc_804D12A4:
{
    r0 = MemoryHw::FlatRead16((r4 + 18));
}

loc_804D12AC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_804D115C;
    }
}

loc_804D12B0:
{
}

loc_804D12B4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804D12D0;
    }
}

loc_804D12B8:
{
    r5 = MemoryHw::FlatRead32((r1 + 12));
    r4 = MemoryHw::FlatRead32((r1 + 8));
    r0 = MemoryHw::FlatRead16((r5 + 34));
    r0 = (r5 + r0);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryHw::FlatRead8(r4_addr_1);
    MemoryHw::FlatWrite32(r31, r0);
}

loc_804D12D0:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryHw::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D1060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D1060_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D1060 func_804D1060 preserves=true fpr_mask=0x00000000
