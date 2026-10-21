#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80435894(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t mkw_fifo_burst_0[10];
    uint8_t mkw_fifo_burst_1[10];
    uint8_t mkw_fifo_burst_2[10];
    uint8_t mkw_fifo_burst_3[10];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x80435894u);
    goto loc_80435894;

loc_80435894:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r0 = r3;
    r23 = r4;
    r24 = r5;
    r30 = r6;
    r31 = r7;
    r25 = r8;
    r28 = r9;
    r26 = r10;
    r27 = MemoryInline::FlatRead16((r1 + 154));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    r3 = (r1 + 72);
    r4 = r0;
    r5 = (r8 & 65535);
    r6 = (r9 & 65535);
    r7 = 1;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x804358F0u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 72);
    r4 = 0;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -4584));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80435918u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 72);
    r4 = 0;
    ctx->lr = 0x80435924u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r29 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r28 = (static_cast<int32_t>(r0) >> 1);
    r3 = (r1 + 40);
    r4 = r23;
    r5 = (r28 & 65535);
    r6 = (r29 & 65535);
    r7 = 1;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x80435958u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 40);
    r4 = 0;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -4584));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80435980u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 40);
    r4 = 1;
    ctx->lr = 0x8043598Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 8);
    r4 = r24;
    r5 = (r28 & 65535);
    r6 = (r29 & 65535);
    r7 = 1;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x804359B0u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -4584));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x804359D8u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 8);
    r4 = 2;
    ctx->lr = 0x804359E4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 128;
    r4 = 7;
    r5 = 4;
    ctx->lr = 0x804359F4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = 0x806D0000u;
    r29 = (r4 + 27520);
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r31 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    // inline leaf 0x80435AD8 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80435AD8
    r3 = 0;
    r4 = 0;
    // inline leaf 0x80435AC0 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (r4 & 65535);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 10u);
    // end of inlined leaf 0x80435AC0
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r28 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r31 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    // inline leaf 0x80435AD8 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80435AD8
    r3 = 1;
    r4 = 0;
    // inline leaf 0x80435AC0 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (r4 & 65535);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 10u);
    // end of inlined leaf 0x80435AC0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r31 = (r0 + r27);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r31 - r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    // inline leaf 0x80435AD8 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80435AD8
    r3 = 1;
    r4 = 1;
    // inline leaf 0x80435AC0 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (r4 & 65535);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 10u);
    // end of inlined leaf 0x80435AC0
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r31 - r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    // inline leaf 0x80435AD8 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80435AD8
    r3 = 0;
    r4 = 1;
    // inline leaf 0x80435AC0 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (r4 & 65535);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_3, 10u);
    // end of inlined leaf 0x80435AC0
    // inline leaf 0x80435ABC (1 guest instruction(s))
    // end of inlined leaf 0x80435ABC
    r11 = (r1 + 144);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80435894 func_80435894 preserves=true fpr_mask=0x00000000
