#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055FF0C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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

    MKW_GUEST_ENTER(0x8055FF0Cu);
    goto loc_8055FF0C;

loc_8055FF0C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r3 = 0x80650000u;
    r3 = (r3 + 18888);
    r29 = (r3 + 584);
    r30 = MemoryInline::FlatRead32((r3 + 584));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 4));
    r25 = (r3 + 688);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r29 + 8));
    r24 = (r3 + 1312);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 12));
    r23 = (r3 + 1936);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 16));
    r26 = (r3 + 2560);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r29 + 20));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r29 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r29 + 28));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r29 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r29 + 36));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r29 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r29 + 60));
    MemoryInline::FlatWriteRam32((r3 + 688), r30);
    guest_range_2 = MemoryInline::ResolveRangeHost((r25 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r25 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r25 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r25 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_2, 156u, (r25 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_2, 208u, (r25 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_2, 260u, (r25 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_2, 312u, (r25 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_2, 364u, (r25 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_2, 416u, (r25 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_2, 468u, (r25 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_2, 520u, (r25 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 1312), r30);
    guest_range_3 = MemoryInline::ResolveRangeHost((r24 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r24 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r24 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_3, 104u, (r24 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_3, 156u, (r24 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_3, 208u, (r24 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_3, 260u, (r24 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_3, 312u, (r24 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_3, 364u, (r24 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_3, 416u, (r24 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_3, 468u, (r24 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_3, 520u, (r24 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 1936), r30);
    guest_range_4 = MemoryInline::ResolveRangeHost((r23 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r23 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r23 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r23 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_4, 156u, (r23 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_4, 208u, (r23 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_4, 260u, (r23 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_4, 312u, (r23 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_4, 364u, (r23 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_4, 416u, (r23 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_4, 468u, (r23 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_4, 520u, (r23 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 2560), r30);
    guest_range_5 = MemoryInline::ResolveRangeHost((r26 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r26 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_5, 52u, (r26 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_5, 104u, (r26 + 156), r5);
    r25 = (r3 + 3184);
    r24 = (r3 + 3808);
    r23 = (r3 + 4432);
    r28 = (r3 + 5056);
    MemoryInline::WriteResolved32(guest_range_5, 156u, (r26 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_5, 208u, (r26 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_5, 260u, (r26 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_5, 312u, (r26 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_5, 364u, (r26 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_5, 416u, (r26 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_5, 468u, (r26 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_5, 520u, (r26 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 3184), r30);
    guest_range_6 = MemoryInline::ResolveRangeHost((r25 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 0u, (r25 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_6, 52u, (r25 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_6, 104u, (r25 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_6, 156u, (r25 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_6, 208u, (r25 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_6, 260u, (r25 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_6, 312u, (r25 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_6, 364u, (r25 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_6, 416u, (r25 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_6, 468u, (r25 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_6, 520u, (r25 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 3808), r30);
    guest_range_7 = MemoryInline::ResolveRangeHost((r24 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r24 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_7, 52u, (r24 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_7, 104u, (r24 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_7, 156u, (r24 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_7, 208u, (r24 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_7, 260u, (r24 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_7, 312u, (r24 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_7, 364u, (r24 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_7, 416u, (r24 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_7, 468u, (r24 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_7, 520u, (r24 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 4432), r30);
    guest_range_8 = MemoryInline::ResolveRangeHost((r23 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_8, 0u, (r23 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_8, 52u, (r23 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_8, 104u, (r23 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_8, 156u, (r23 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_8, 208u, (r23 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_8, 260u, (r23 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_8, 312u, (r23 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_8, 364u, (r23 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_8, 416u, (r23 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_8, 468u, (r23 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_8, 520u, (r23 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 5056), r30);
    guest_range_9 = MemoryInline::ResolveRangeHost((r28 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_9, 0u, (r28 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_9, 52u, (r28 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_9, 104u, (r28 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_9, 156u, (r28 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_9, 208u, (r28 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_9, 260u, (r28 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_9, 312u, (r28 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_9, 364u, (r28 + 416), r10);
    r27 = (r3 + 5680);
    r26 = (r3 + 6304);
    r25 = (r3 + 6928);
    r24 = (r3 + 7552);
    r23 = (r3 + 8176);
    MemoryInline::WriteResolved32(guest_range_9, 416u, (r28 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_9, 468u, (r28 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_9, 520u, (r28 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 5680), r30);
    guest_range_10 = MemoryInline::ResolveRangeHost((r27 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_10, 0u, (r27 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_10, 52u, (r27 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_10, 104u, (r27 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_10, 156u, (r27 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_10, 208u, (r27 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_10, 260u, (r27 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_10, 312u, (r27 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_10, 364u, (r27 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_10, 416u, (r27 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_10, 468u, (r27 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_10, 520u, (r27 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 6304), r30);
    guest_range_11 = MemoryInline::ResolveRangeHost((r26 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_11, 0u, (r26 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_11, 52u, (r26 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_11, 104u, (r26 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_11, 156u, (r26 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_11, 208u, (r26 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_11, 260u, (r26 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_11, 312u, (r26 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_11, 364u, (r26 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_11, 416u, (r26 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_11, 468u, (r26 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_11, 520u, (r26 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 6928), r30);
    guest_range_12 = MemoryInline::ResolveRangeHost((r25 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_12, 0u, (r25 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_12, 52u, (r25 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_12, 104u, (r25 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_12, 156u, (r25 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_12, 208u, (r25 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_12, 260u, (r25 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_12, 312u, (r25 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_12, 364u, (r25 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_12, 416u, (r25 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_12, 468u, (r25 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_12, 520u, (r25 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 7552), r30);
    guest_range_13 = MemoryInline::ResolveRangeHost((r24 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_13, 0u, (r24 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_13, 52u, (r24 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_13, 104u, (r24 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_13, 156u, (r24 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_13, 208u, (r24 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_13, 260u, (r24 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_13, 312u, (r24 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_13, 364u, (r24 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_13, 416u, (r24 + 468), r11);
    MemoryInline::WriteResolved32(guest_range_13, 468u, (r24 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_13, 520u, (r24 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 8176), r30);
    guest_range_14 = MemoryInline::ResolveRangeHost((r23 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_14, 0u, (r23 + 52), r0);
    r24 = (r3 + 8800);
    r25 = (r3 + 9424);
    r26 = (r3 + 10048);
    r27 = (r3 + 10672);
    r28 = (r3 + 11296);
    r22 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r29 + 44));
    r29 = (r3 + 11920);
    MemoryInline::WriteResolved32(guest_range_14, 416u, (r23 + 468), r11);
    guest_range_15 = MemoryInline::ResolveRangeHost((r24 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_15, 416u, (r24 + 468), r11);
    guest_range_16 = MemoryInline::ResolveRangeHost((r25 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_16, 416u, (r25 + 468), r11);
    guest_range_17 = MemoryInline::ResolveRangeHost((r26 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_17, 416u, (r26 + 468), r11);
    guest_range_18 = MemoryInline::ResolveRangeHost((r27 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_18, 416u, (r27 + 468), r11);
    guest_range_19 = MemoryInline::ResolveRangeHost((r28 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_19, 416u, (r28 + 468), r11);
    guest_range_20 = MemoryInline::ResolveRangeHost((r29 + 52), 0, 524u, false, true);
    MemoryInline::WriteResolved32(guest_range_20, 416u, (r29 + 468), r11);
    r11 = (r1 + 48);
    MemoryInline::WriteResolved32(guest_range_14, 52u, (r23 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_14, 104u, (r23 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_14, 156u, (r23 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_14, 208u, (r23 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_14, 260u, (r23 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_14, 312u, (r23 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_14, 364u, (r23 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_14, 468u, (r23 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_14, 520u, (r23 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 8800), r30);
    MemoryInline::WriteResolved32(guest_range_15, 0u, (r24 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_15, 52u, (r24 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_15, 104u, (r24 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_15, 156u, (r24 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_15, 208u, (r24 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_15, 260u, (r24 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_15, 312u, (r24 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_15, 364u, (r24 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_15, 468u, (r24 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_15, 520u, (r24 + 572), r31);
    MemoryInline::FlatWriteRam32((r3 + 9424), r30);
    MemoryInline::WriteResolved32(guest_range_16, 0u, (r25 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_16, 52u, (r25 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_16, 104u, (r25 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_16, 156u, (r25 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_16, 208u, (r25 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_16, 260u, (r25 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_16, 312u, (r25 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_16, 364u, (r25 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_16, 468u, (r25 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_16, 520u, (r25 + 572), r22);
    MemoryInline::FlatWriteRam32((r3 + 10048), r30);
    MemoryInline::WriteResolved32(guest_range_17, 0u, (r26 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_17, 52u, (r26 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_17, 104u, (r26 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_17, 156u, (r26 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_17, 208u, (r26 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_17, 260u, (r26 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_17, 312u, (r26 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_17, 364u, (r26 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_17, 468u, (r26 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_17, 520u, (r26 + 572), r22);
    MemoryInline::FlatWriteRam32((r3 + 10672), r30);
    MemoryInline::WriteResolved32(guest_range_18, 0u, (r27 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_18, 52u, (r27 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_18, 104u, (r27 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_18, 156u, (r27 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_18, 208u, (r27 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_18, 260u, (r27 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_18, 312u, (r27 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_18, 364u, (r27 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_18, 468u, (r27 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_18, 520u, (r27 + 572), r22);
    MemoryInline::FlatWriteRam32((r3 + 11296), r30);
    MemoryInline::WriteResolved32(guest_range_19, 0u, (r28 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_19, 52u, (r28 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_19, 104u, (r28 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_19, 156u, (r28 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_19, 208u, (r28 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_19, 260u, (r28 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_19, 312u, (r28 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_19, 364u, (r28 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_19, 468u, (r28 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_19, 520u, (r28 + 572), r22);
    MemoryInline::FlatWriteRam32((r3 + 11920), r30);
    MemoryInline::WriteResolved32(guest_range_20, 0u, (r29 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_20, 52u, (r29 + 104), r4);
    MemoryInline::WriteResolved32(guest_range_20, 104u, (r29 + 156), r5);
    MemoryInline::WriteResolved32(guest_range_20, 156u, (r29 + 208), r6);
    MemoryInline::WriteResolved32(guest_range_20, 208u, (r29 + 260), r7);
    MemoryInline::WriteResolved32(guest_range_20, 260u, (r29 + 312), r8);
    MemoryInline::WriteResolved32(guest_range_20, 312u, (r29 + 364), r9);
    MemoryInline::WriteResolved32(guest_range_20, 364u, (r29 + 416), r10);
    MemoryInline::WriteResolved32(guest_range_20, 468u, (r29 + 520), r12);
    MemoryInline::WriteResolved32(guest_range_20, 520u, (r29 + 572), r22);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_21 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055FF0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055FF0C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055FF0C func_8055FF0C preserves=true fpr_mask=0x00000000
