#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046A5C4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
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

    goto loc_8046A5C4;

loc_8046A5C4:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    r16 = 0;
    r17 = 0;
    r18 = 0;
    r19 = 0;
    r20 = 0;
    r21 = 0;
    r22 = 0;
    r23 = 0;
    r24 = 0;
    r25 = 0;
    r26 = 0;
    r27 = 0;
    r28 = 0;
    r29 = 0;
    r30 = 0;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + 424), 0, 388u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r2 + 424), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r2 + 428), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r2 + 432), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r2 + 436), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r2 + 440), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r2 + 444), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r2 + 448), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r2 + 452), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r2 + 456), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r2 + 460), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r2 + 464), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r2 + 468), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r2 + 472), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r2 + 476), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r2 + 480), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r2 + 484), r31);
    }
    r27 = PPC_Mftb();
    r28 = PPC_Mftbu();
    r29 = ctx->hid0;
    r30 = ctx->hid1;
    r31 = ctx->srr1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r2 + 488), r27);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r2 + 492), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r2 + 496), r29);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r2 + 500), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r2 + 504), r31);
    // mfspr 287 unsupported @ 0x8046A628
    r15 = PPC_ReadSpr(287);
    // mfspr 528 unsupported @ 0x8046A62C
    r16 = PPC_ReadSpr(528);
    // mfspr 529 unsupported @ 0x8046A630
    r17 = PPC_ReadSpr(529);
    // mfspr 530 unsupported @ 0x8046A634
    r18 = PPC_ReadSpr(530);
    // mfspr 531 unsupported @ 0x8046A638
    r19 = PPC_ReadSpr(531);
    // mfspr 532 unsupported @ 0x8046A63C
    r20 = PPC_ReadSpr(532);
    // mfspr 533 unsupported @ 0x8046A640
    r21 = PPC_ReadSpr(533);
    // mfspr 534 unsupported @ 0x8046A644
    r22 = PPC_ReadSpr(534);
    // mfspr 535 unsupported @ 0x8046A648
    r23 = PPC_ReadSpr(535);
    // mfspr 536 unsupported @ 0x8046A64C
    r24 = PPC_ReadSpr(536);
    // mfspr 537 unsupported @ 0x8046A650
    r25 = PPC_ReadSpr(537);
    // mfspr 538 unsupported @ 0x8046A654
    r26 = PPC_ReadSpr(538);
    // mfspr 539 unsupported @ 0x8046A658
    r27 = PPC_ReadSpr(539);
    // mfspr 540 unsupported @ 0x8046A65C
    r28 = PPC_ReadSpr(540);
    // mfspr 541 unsupported @ 0x8046A660
    r29 = PPC_ReadSpr(541);
    // mfspr 542 unsupported @ 0x8046A664
    r30 = PPC_ReadSpr(542);
    // mfspr 543 unsupported @ 0x8046A668
    r31 = PPC_ReadSpr(543);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r2 + 508), r15);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r2 + 512), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r2 + 516), r17);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r2 + 520), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r2 + 524), r19);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r2 + 528), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r2 + 532), r21);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r2 + 536), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r2 + 540), r23);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r2 + 544), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r2 + 548), r25);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r2 + 552), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r2 + 556), r27);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r2 + 560), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r2 + 564), r29);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r2 + 568), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r2 + 572), r31);
    // mfspr 560 unsupported @ 0x8046A670
    r24 = PPC_ReadSpr(560);
    // mfspr 561 unsupported @ 0x8046A674
    r25 = PPC_ReadSpr(561);
    // mfspr 562 unsupported @ 0x8046A678
    r26 = PPC_ReadSpr(562);
    // mfspr 563 unsupported @ 0x8046A67C
    r27 = PPC_ReadSpr(563);
    // mfspr 564 unsupported @ 0x8046A680
    r28 = PPC_ReadSpr(564);
    // mfspr 565 unsupported @ 0x8046A684
    r29 = PPC_ReadSpr(565);
    // mfspr 566 unsupported @ 0x8046A688
    r30 = PPC_ReadSpr(566);
    // mfspr 567 unsupported @ 0x8046A68C
    r31 = PPC_ReadSpr(567);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r2 + 576), r24);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r2 + 580), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r2 + 584), r26);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r2 + 588), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r2 + 592), r28);
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r2 + 596), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r2 + 600), r30);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r2 + 604), r31);
    }
    // mfspr 25 unsupported @ 0x8046A694
    r22 = PPC_ReadSpr(25);
    // mfspr 19 unsupported @ 0x8046A698
    r23 = PPC_ReadSpr(19);
    // mfspr 18 unsupported @ 0x8046A69C
    r24 = PPC_ReadSpr(18);
    // mfspr 272 unsupported @ 0x8046A6A0
    r25 = PPC_ReadSpr(272);
    // mfspr 273 unsupported @ 0x8046A6A4
    r26 = PPC_ReadSpr(273);
    // mfspr 274 unsupported @ 0x8046A6A8
    r27 = PPC_ReadSpr(274);
    // mfspr 275 unsupported @ 0x8046A6AC
    r28 = PPC_ReadSpr(275);
    // mfspr 22 unsupported @ 0x8046A6B0
    r29 = PPC_ReadSpr(22);
    // mfspr 1010 unsupported @ 0x8046A6B4
    r30 = PPC_ReadSpr(1010);
    // mfspr 282 unsupported @ 0x8046A6B8
    r31 = PPC_ReadSpr(282);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r2 + 604), r22);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r2 + 608), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r2 + 612), r24);
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r2 + 616), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r2 + 620), r26);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r2 + 624), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r2 + 628), r28);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r2 + 632), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r2 + 636), r30);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r2 + 640), r31);
    }
    // mfspr 1013 unsupported @ 0x8046A6C0
    r24 = PPC_ReadSpr(1013);
    // mfspr 953 unsupported @ 0x8046A6C4
    r25 = PPC_ReadSpr(953);
    // mfspr 954 unsupported @ 0x8046A6C8
    r26 = PPC_ReadSpr(954);
    // mfspr 957 unsupported @ 0x8046A6CC
    r27 = PPC_ReadSpr(957);
    // mfspr 958 unsupported @ 0x8046A6D0
    r28 = PPC_ReadSpr(958);
    // mfspr 955 unsupported @ 0x8046A6D4
    r29 = PPC_ReadSpr(955);
    // mfspr 952 unsupported @ 0x8046A6D8
    r30 = PPC_ReadSpr(952);
    // mfspr 956 unsupported @ 0x8046A6DC
    r31 = PPC_ReadSpr(956);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r2 + 644), r24);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r2 + 648), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r2 + 652), r26);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r2 + 656), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r2 + 660), r28);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r2 + 664), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r2 + 668), r30);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r2 + 672), r31);
    }
    // mfspr 567 unsupported @ 0x8046A6E4
    r29 = PPC_ReadSpr(567);
    // mfspr 568 unsupported @ 0x8046A6E8
    r30 = PPC_ReadSpr(568);
    // mfspr 569 unsupported @ 0x8046A6EC
    r31 = PPC_ReadSpr(569);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r2 + 676), r29);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r2 + 680), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r2 + 684), r31);
    // mfspr 1019 unsupported @ 0x8046A6F4
    r30 = PPC_ReadSpr(1019);
    // mfspr 1017 unsupported @ 0x8046A6F8
    r31 = PPC_ReadSpr(1017);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r2 + 688), r30);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r2 + 692), r31);
    }
    r16 = ctx->srr0;
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r2 + 696), r16);
    // mfspr 570 unsupported @ 0x8046A708
    r17 = PPC_ReadSpr(570);
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r2 + 700), r17);
    // mfspr 936 unsupported @ 0x8046A710
    r25 = PPC_ReadSpr(936);
    // mfspr 937 unsupported @ 0x8046A714
    r26 = PPC_ReadSpr(937);
    // mfspr 938 unsupported @ 0x8046A718
    r27 = PPC_ReadSpr(938);
    // mfspr 939 unsupported @ 0x8046A71C
    r28 = PPC_ReadSpr(939);
    // mfspr 940 unsupported @ 0x8046A720
    r29 = PPC_ReadSpr(940);
    // mfspr 941 unsupported @ 0x8046A724
    r30 = PPC_ReadSpr(941);
    // mfspr 942 unsupported @ 0x8046A728
    r31 = PPC_ReadSpr(942);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r2 + 704), r25);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r2 + 708), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r2 + 712), r27);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r2 + 716), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r2 + 720), r29);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r2 + 724), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r2 + 728), r31);
    // mfspr 571 unsupported @ 0x8046A730
    r25 = PPC_ReadSpr(571);
    // mfspr 572 unsupported @ 0x8046A734
    r26 = PPC_ReadSpr(572);
    // mfspr 573 unsupported @ 0x8046A738
    r27 = PPC_ReadSpr(573);
    // mfspr 574 unsupported @ 0x8046A73C
    r28 = PPC_ReadSpr(574);
    // mfspr 575 unsupported @ 0x8046A740
    r29 = PPC_ReadSpr(575);
    r30 = ctx->hid2;
    // mfspr 1011 unsupported @ 0x8046A748
    r31 = PPC_ReadSpr(1011);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r2 + 732), r25);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r2 + 736), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r2 + 740), r27);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r2 + 744), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r2 + 748), r29);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r2 + 752), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 332u, (r2 + 756), r31);
    r20 = ctx->gqr[0];
    r21 = ctx->gqr[1];
    r22 = ctx->gqr[2];
    r23 = ctx->gqr[3];
    r24 = ctx->gqr[4];
    r25 = ctx->gqr[5];
    r26 = ctx->gqr[6];
    r27 = ctx->gqr[7];
    r28 = ctx->hid2;
    // mfspr 921 unsupported @ 0x8046A774
    r29 = PPC_ReadSpr(921);
    // mfspr 922 unsupported @ 0x8046A778
    r30 = PPC_ReadSpr(922);
    // mfspr 923 unsupported @ 0x8046A77C
    r31 = PPC_ReadSpr(923);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r2 + 764), r20);
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r2 + 768), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r2 + 772), r22);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r2 + 776), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r2 + 780), r24);
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r2 + 784), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r2 + 788), r26);
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r2 + 792), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r2 + 796), r28);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r2 + 800), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r2 + 804), r30);
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r2 + 808), r31);
    }
    ctx->gpr[2] = r2;
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

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0xFFFF8004 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046A5C4 func_8046A5C4 preserves=true fpr_mask=0x00000000
