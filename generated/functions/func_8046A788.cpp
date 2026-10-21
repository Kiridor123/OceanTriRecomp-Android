#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046A788(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x8046A788u);
    goto loc_8046A788;

loc_8046A788:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    r5 = 0x806F0000u;
    r5 = (r5 | 37832);
    r3 = MemoryInline::FlatRead8(r5);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r0 = 0;
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r0));
}

loc_8046A7B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046A7C4;
    }
}

loc_8046A7B4:
{
    r24 = MemoryInline::FlatRead32((r2 + 488));
    r25 = MemoryInline::FlatRead32((r2 + 492));
    // mtspr 284 (unknown SPR) @ 0x8046A7BC
    PPC_WriteSpr(284, r24);
    // mtspr 285 (unknown SPR) @ 0x8046A7C0
    PPC_WriteSpr(285, r25);
}

loc_8046A7C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + 424), 0, 388u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 340u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 340u, (r2 + 764));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 344u, (r2 + 768));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 348u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 348u, (r2 + 772));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 352u, (r2 + 776));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 356u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 356u, (r2 + 780));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 360u, (r2 + 784));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 364u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 364u, (r2 + 788));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 368u, (r2 + 792));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 372u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 372u, (r2 + 796));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 376u, (r2 + 800));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 380u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 380u, (r2 + 804));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 384u, (r2 + 808));
        }
    }
    ctx->gqr[0] = r20;
    ctx->gqr[1] = r21;
    ctx->gqr[2] = r22;
    ctx->gqr[3] = r23;
    ctx->gqr[4] = r24;
    ctx->gqr[5] = r25;
    ctx->gqr[6] = r26;
    ctx->gqr[7] = r27;
    ctx->hid2 = r28;
    // mtspr 922 (unknown SPR) @ 0x8046A7EC
    PPC_WriteSpr(922, r30);
    // mtspr 923 (unknown SPR) @ 0x8046A7F0
    PPC_WriteSpr(923, r31);
}

loc_8046A7F8:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 220u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_0, 220u, (r2 + 644));
            r20 = MemoryInline::ReadResolved32(guest_range_0, 224u, (r2 + 648));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 228u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 228u, (r2 + 652));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 232u, (r2 + 656));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 236u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 236u, (r2 + 660));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 240u, (r2 + 664));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 244u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 244u, (r2 + 668));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 248u, (r2 + 672));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 252u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r2 + 676));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 256u, (r2 + 680));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 260u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 260u, (r2 + 684));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 264u, (r2 + 688));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 268u, (r2 + 692));
    // mtspr 1013 (privileged/OS register) @ 0x8046A7FC
    PPC_WriteSpr(1013, r19);
    // mtspr 953 (privileged/OS register) @ 0x8046A800
    PPC_WriteSpr(953, r20);
    // mtspr 954 (privileged/OS register) @ 0x8046A804
    PPC_WriteSpr(954, r21);
    // mtspr 957 (privileged/OS register) @ 0x8046A808
    PPC_WriteSpr(957, r22);
    // mtspr 958 (privileged/OS register) @ 0x8046A80C
    PPC_WriteSpr(958, r23);
    // mtspr 955 (unknown SPR) @ 0x8046A810
    PPC_WriteSpr(955, r24);
    // mtspr 952 (privileged/OS register) @ 0x8046A814
    PPC_WriteSpr(952, r25);
    // mtspr 956 (privileged/OS register) @ 0x8046A818
    PPC_WriteSpr(956, r26);
    // mtspr 1019 (unknown SPR) @ 0x8046A81C
    PPC_WriteSpr(1019, r30);
    // mtspr 1017 (privileged/OS register) @ 0x8046A820
    PPC_WriteSpr(1017, r31);
}

loc_8046A828:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r2 + 424));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r2 + 428));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r2 + 432));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r2 + 436));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r2 + 440));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r2 + 444));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r2 + 448));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r2 + 452));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r2 + 456));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r2 + 460));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r2 + 464));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r2 + 468));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r2 + 472));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r2 + 476));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r2 + 480));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r2 + 484));
        }
    }
    // mtsr 0 @ 0x8046A82C (no-op)
    // mtsr 1 @ 0x8046A830 (no-op)
    // mtsr 2 @ 0x8046A834 (no-op)
    // mtsr 3 @ 0x8046A838 (no-op)
    // mtsr 4 @ 0x8046A83C (no-op)
    // mtsr 5 @ 0x8046A840 (no-op)
    // mtsr 6 @ 0x8046A844 (no-op)
    // mtsr 7 @ 0x8046A848 (no-op)
    // mtsr 8 @ 0x8046A84C (no-op)
    // mtsr 9 @ 0x8046A850 (no-op)
    // mtsr 10 @ 0x8046A854 (no-op)
    // mtsr 11 @ 0x8046A858 (no-op)
    // mtsr 12 @ 0x8046A85C (no-op)
    // mtsr 13 @ 0x8046A860 (no-op)
    // mtsr 14 @ 0x8046A864 (no-op)
    // mtsr 15 @ 0x8046A868 (no-op)
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r13 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r2 + 496));
            r13 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r2 + 500));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r2 + 504));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r2 + 508));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r2 + 512));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r2 + 516));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 96u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r2 + 520));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r2 + 524));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r2 + 528));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r2 + 532));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 112u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r2 + 536));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r2 + 540));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r2 + 544));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r2 + 548));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 128u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r2 + 552));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r2 + 556));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 136u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r2 + 560));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r2 + 564));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 144u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r2 + 568));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r2 + 572));
        }
    }
    ctx->hid0 = r12;
    ctx->hid1 = r13;
    ctx->srr1 = r14;
    // mtspr 287 (unknown SPR) @ 0x8046A87C
    PPC_WriteSpr(287, r15);
    // mtspr 528 (unknown SPR) @ 0x8046A880
    PPC_WriteSpr(528, r16);
    // mtspr 529 (unknown SPR) @ 0x8046A884
    PPC_WriteSpr(529, r17);
    // mtspr 530 (unknown SPR) @ 0x8046A888
    PPC_WriteSpr(530, r18);
    // mtspr 531 (unknown SPR) @ 0x8046A88C
    PPC_WriteSpr(531, r19);
    // mtspr 532 (unknown SPR) @ 0x8046A890
    PPC_WriteSpr(532, r20);
    // mtspr 533 (unknown SPR) @ 0x8046A894
    PPC_WriteSpr(533, r21);
    // mtspr 534 (unknown SPR) @ 0x8046A898
    PPC_WriteSpr(534, r22);
    // mtspr 535 (unknown SPR) @ 0x8046A89C
    PPC_WriteSpr(535, r23);
    // mtspr 536 (unknown SPR) @ 0x8046A8A0
    PPC_WriteSpr(536, r24);
    // mtspr 537 (unknown SPR) @ 0x8046A8A4
    PPC_WriteSpr(537, r25);
    // mtspr 538 (unknown SPR) @ 0x8046A8A8
    PPC_WriteSpr(538, r26);
    // mtspr 539 (unknown SPR) @ 0x8046A8AC
    PPC_WriteSpr(539, r27);
    // mtspr 540 (unknown SPR) @ 0x8046A8B0
    PPC_WriteSpr(540, r28);
    // mtspr 541 (unknown SPR) @ 0x8046A8B4
    PPC_WriteSpr(541, r29);
    // mtspr 542 (unknown SPR) @ 0x8046A8B8
    PPC_WriteSpr(542, r30);
    // mtspr 543 (unknown SPR) @ 0x8046A8BC
    PPC_WriteSpr(543, r31);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 180u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r2 + 604));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 184u, (r2 + 608));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 188u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 188u, (r2 + 612));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 192u, (r2 + 616));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 196u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 196u, (r2 + 620));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 200u, (r2 + 624));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 204u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 204u, (r2 + 628));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 208u, (r2 + 632));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 212u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 212u, (r2 + 636));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r2 + 640));
        }
    }
    // mtspr 25 (unknown SPR) @ 0x8046A8C4
    PPC_WriteSpr(25, r22);
    // mtspr 19 (unknown SPR) @ 0x8046A8C8
    PPC_WriteSpr(19, r23);
    // mtspr 18 (unknown SPR) @ 0x8046A8CC
    PPC_WriteSpr(18, r24);
    // mtspr 272 (privileged/OS register) @ 0x8046A8D0
    PPC_WriteSpr(272, r25);
    // mtspr 273 (privileged/OS register) @ 0x8046A8D4
    PPC_WriteSpr(273, r26);
    // mtspr 274 (privileged/OS register) @ 0x8046A8D8
    PPC_WriteSpr(274, r27);
    // mtspr 275 (privileged/OS register) @ 0x8046A8DC
    PPC_WriteSpr(275, r28);
    // mtspr 1010 (privileged/OS register) @ 0x8046A8E0
    PPC_WriteSpr(1010, r30);
    // mtspr 282 (unknown SPR) @ 0x8046A8E4
    PPC_WriteSpr(282, r31);
    ctx->gpr[0] = r0;
    ctx->gpr[2] = r2;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x03000004 gpr_write=0xFFFFF06D gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046A788 func_8046A788 preserves=true fpr_mask=0x00000000
