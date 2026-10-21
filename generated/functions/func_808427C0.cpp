#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808427C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x808427C0u);
    goto loc_808427C0;

loc_808427C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_808427D8:
{
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_808429AC;
    }
}

loc_808427EC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_0 & 130560);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & 1020);
    r3 = (r3 + r0);
    r30 = (r3 + 1032);
    r30_addr_0 = (r30 + r31);
    r3 = MemoryInline::FlatRead32(r30_addr_0);
}

loc_80842804:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80842814;
    }
}

loc_80842808:
{
    // inline leaf 0x808439F0 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x808439F0
    r0 = 0;
    r30_addr_1 = (r30 + r31);
    MemoryInline::FlatWrite32(r30_addr_1, r0);
}

loc_80842814:
{
    r4 = 0x80840000u;
    r5 = r23;
    r4 = (r4 + 14656);
    r3 = 31;
    ctx->lr = 0x80842828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8046EEE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
}

loc_8084282C:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808429D4;
    }
}

loc_80842834:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x808420E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80842840:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_808429A0;
    }
}

loc_80842848:
{
    r5 = 0x80870000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = (r3 * 76);
    r5 = MemoryInline::FlatRead32((r5 + -30380));
    r3 = (r23 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r27 = (r5 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 28u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 4), r29);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 8), r23);
    }
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r27 + 12), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r27 + 13), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r27 + 14), static_cast<uint8_t>(r26));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_80842884:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80842890;
    }
}

loc_80842888:
{
    r5 = 0;
    goto loc_808428E0;
}

loc_80842890:
{
    r0 = (r0 * 24);
    r3 = MemoryInline::FlatRead32((r23 + 12));
    r5 = 1;
    r4 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r27 + 16), r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r23 + 16));
    r0 = (r0 * 80);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r27 + 20), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r3 = MemoryInline::FlatRead32((r23 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 24), r3);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r3 = MemoryInline::FlatRead32((r23 + 24));
    r0 = (r0 * 46);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r27 + 28), r0);
}

loc_808428E0:
{
}

loc_808428E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8084297C;
    }
}

loc_808428E8:
{
    r30_addr_3 = (r30 + r31);
    MemoryInline::FlatWrite32(r30_addr_3, r27);
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r23 + 1028));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r23 + 1028), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80843350u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r27;
    // inline leaf 0x80843100 (10 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 14));
    r4 = 0x80850000u;
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r4 + -30032);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    // end of inlined leaf 0x80843100
    r3 = r27;
    // inline leaf 0x80843130 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 236));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80843130
    r3 = r27;
    ctx->lr = 0x80842918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80842D20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r3 = r27;
    // inline leaf 0x80843170 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 104));
    r0 = MemoryInline::FlatRead32((r3 + 108));
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x80843170
    r25 = r3;
    r3 = r27;
    // inline leaf 0x80843150 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x80843150
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4 = r3;
    r6 = (r23 + r0);
    r5 = (r23 + r24);
    r0 = MemoryInline::FlatRead32((r6 + 172));
    r3 = r29;
    r6 = MemoryInline::FlatRead8((r5 + 236));
    r7 = r25;
    r5 = (static_cast<int32_t>(r0) >> 16);
    ctx->lr = 0x80842954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80840B20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80843900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r3 = r27;
    ctx->lr = 0x80842964u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x808433C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r0 = 1;
    MemoryInline::FlatWriteRam16((r29 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r29 + 28), r0);
    goto loc_808429D4;
}

loc_8084297C:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 8), r0);
    r3 = r29;
    // inline leaf 0x80841470 (11 guest instruction(s))
    r4 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + -32096);
    r3 = 0x80870000u;
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -31996));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    // end of inlined leaf 0x80841470
    r3 = r28;
    // inline leaf 0x80842160 (10 guest instruction(s))
    r5 = 0x80870000u;
    r4 = 0x80870000u;
    r5 = (r5 + -32112);
    r0 = -1;
    r5_addr_1 = (r5 + r3);
    r6 = MemoryInline::FlatRead8(r5_addr_1);
    r4 = (r4 + -32096);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5_addr_2 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r0));
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80842160
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    goto loc_808429D4;
}

loc_808429A0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    goto loc_808429D4;
}

loc_808429AC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 130560);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r3 = (r3 + r4);
    r23 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r23 + 1032));
}

loc_808429C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808429D4;
    }
}

loc_808429C8:
{
    // inline leaf 0x808439F0 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x808439F0
    r0 = 0;
    MemoryInline::FlatWrite32((r23 + 1032), r0);
}

loc_808429D4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808427C0 func_808427C0 preserves=true fpr_mask=0x00000000
