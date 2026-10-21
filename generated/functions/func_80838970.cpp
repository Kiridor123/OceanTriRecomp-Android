#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80838970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t mkw_fifo_burst_0[20];
    uint8_t mkw_fifo_burst_1[20];
    uint8_t mkw_fifo_burst_2[20];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80838970u);
    goto loc_80838970;

loc_80838970:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 112);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    r25 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + 5));
    r31 = 1127219200;
    r6 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r11 = 0;
    r24 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r4 + 7));
    r26 = 0x80840000u;
    r0 = (r6 + r25);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    r5 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r6 = (r6_rot_0 & -32768);
    r7 = (r8 + r24);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(15));
    r8 = (r8_rot_0 & -32768);
    r30 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r27 = (r27_rot_0 & -32768);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(15));
    r12 = (r12_rot_0 & -32768);
    r10 = MemoryInline::FlatRead32((r3 + 56));
    r29 = PPC_Divwu(static_cast<uint32_t>(r8), static_cast<uint32_t>(r6));
    r8 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r8 + -32176));
    f29.d = f3.d;
    r9 = MemoryInline::FlatRead32((r3 + 60));
    f27.d = f1.d;
    r28 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r7));
}

loc_80838A14:
{
    stackword10 = r25;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r25);
    f28.d = f2.d;
    f5.d = MemoryInline::FlatReadFloat64((r26 + 18800));
    r27 = r3;
    stackword11 = r31;
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r31);
    r7 = PPC_Divwu(static_cast<uint32_t>(r12), static_cast<uint32_t>(r6));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    stackword12 = r31;
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r31);
    r31 = (r30 & 65535);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f4.d = PpcFmulsInline(f3.d, f0.d);
    stackword13 = r24;
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r24);
    r30 = (r29 & 65535);
    r29 = (r28 & 65535);
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword13));
    r28 = (r7 & 65535);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r11);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r0);
    }
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r10);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r9);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80838AA8;
    }
}

loc_80838A80:
{
    r7 = (r8 + -32176);
    r3 = MemoryInline::FlatRead32((r7 + 4));
}

loc_80838A8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80838AA8;
    }
}

loc_80838A90:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80838A98:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(r3))) {
        goto loc_80838AA8;
    }
}

loc_80838A9C:
{
    r3 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80838AA4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r3))) {
        goto loc_80838AAC;
    }
}

loc_80838AA8:
{
    r11 = 1;
}

loc_80838AAC:
{
}

loc_80838AB0:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80838B30;
    }
}

loc_80838AB4:
{
    r7 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r4 = r0;
    r3 = (r1 + 24);
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x80838AD0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B86A0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r27 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18776));
    r3 = (r1 + 24);
    r5 = MemoryInline::FlatRead32((r27 + 60));
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    f3.d = f1.d;
    r8 = 0;
    ctx->lr = 0x80838AFCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8900u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x80838B08u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 + -32176);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r6 + -32176), r7);
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
}

loc_80838B30:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80838B40u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f27.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f29.d));
    r0 = MemoryInline::FlatRead32((r27 + 8));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f28.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 12));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r29);
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_1[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 20));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r29);
        mkw_fifo_burst_2[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r28);
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f27.d));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_2[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 16));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r31));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r28));
    r11 = (r1 + 112);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80838970 func_80838970 preserves=true fpr_mask=0x00000000
