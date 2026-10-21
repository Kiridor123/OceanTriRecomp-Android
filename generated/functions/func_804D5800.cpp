#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D5800_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_right_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r28_ca_0 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_addze_src_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addze_src_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addc_left_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_addc_left_0 = 0;
    uint32_t r6_addc_left_1 = 0;
    uint32_t r6_addc_right_0 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_adde_left_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D5800u);
    goto loc_804D5800;

loc_804D5800:
{
    MemoryAlias::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r4 = 715849728;
    guest_range_1 = MemoryAlias::ResolveRangeHost(r3, 0, 40u, true, false);
    r5 = MemoryAlias::ReadResolved32(guest_range_1, 16u, (r3 + 16));
    r0 = (r4 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r6 = (r0 + r4);
    r0 = (r6 * 12);
    r4 = (r5 - r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804D5844;
    }
}

loc_804D583C:
{
    r4 = (r4 + 12);
    r6 = (r6 + -1);
}

loc_804D5844:
{
    r0 = MemoryAlias::ReadResolved32(guest_range_1, 20u, (r3 + 20));
    r9 = (r0 + r6);
}

loc_804D5850:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(1))) {
        goto loc_804D585C;
    }
}

loc_804D5854:
{
    r7 = 0;
    goto loc_804D5898;
}

loc_804D585C:
{
    r5 = 1374420992;
    r6 = (r9 + -1);
    r5 = (r5 + -31457);
    r0 = (r9 + 3);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (static_cast<int32_t>(r5) >> 7);
    r5 = (static_cast<int32_t>(r5) >> 5);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r5 = (r5 + r6);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r6 = (r7 + r8);
    r0 = (r0 - r5);
    r7 = (r6 + r0);
}

loc_804D5898:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & -1073741824);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r0 = (r0 - r5);
    r6 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -1);
    r0 = (r0 + r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D58D8;
    }
}

loc_804D58B4:
{
    r5 = 1374420992;
    r0 = (r5 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 100);
    r0 = (r9 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D58FC;
    }
}

loc_804D58D8:
{
    r5 = 1374420992;
    r0 = (r5 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 7);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 400);
    r0 = (r9 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D5900;
    }
}

loc_804D58FC:
{
    r6 = 1;
}

loc_804D5900:
{
}

loc_804D5904:
{
    r22 = 0x80620000u;
    r22 = (r22 + -8392);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D5918;
    }
}

loc_804D5910:
{
    r22 = 0x80620000u;
    r22 = (r22 + -8344);
}

loc_804D5918:
{
    r5 = 0x80000000u;
    r6 = MemoryAlias::ReadResolved32(guest_range_1, 36u, (r3 + 36));
    r0 = MemoryAlias::FlatRead32((r5 + 248));
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r12 = (r12_rot_0 & -4);
    r10 = 1125908480;
    r5 = 0;
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r8 = (r8_rot_3 & 1073741823);
    r20 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r10 + -8573);
    r23 = MemoryAlias::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r8)) >> 32));
    r22_addr_0 = (r22 + r12);
    r22 = MemoryAlias::FlatRead32(r22_addr_0);
    r12 = (r23 + r7);
    r27 = MemoryAlias::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r10 = 65536;
    r29 = MemoryAlias::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r7 = 274857984;
    r21 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r6)) >> 32));
    r11 = 31522816;
    r7 = (r7 + 19923);
    r26 = MemoryAlias::ReadResolved32(guest_range_1, 0u, r3);
    r0 = (r11 + 13184);
    r11 = MemoryAlias::ReadResolved32(guest_range_1, 32u, (r3 + 32));
    r24 = (r5 * r6);
    r23 = (r10 + 20864);
    r3 = (r22 + r12);
    r28 = 60;
    r22 = (r3 + -1);
    r3 = 1310588928;
    r25 = (r4 * r6);
    r10 = (r21 + r24);
    r31 = (r3 + 16512);
    r30 = 3600;
    r12 = -15;
    r6 = (r4 * r20);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(29));
    r4 = (r4_rot_2 & -1);
    r10 = (r10 + r6);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r8)) >> 32));
    r3 = r10;
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4_mrot_0 = (r4_rot_3 & -536870912);
    r4_mdest_0 = (r4 & 536870911);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r3_mrot_0 = (r25 & 7);
    r3_mdest_0 = (r3 & -8);
    r3 = (r3_mdest_0 | r3_mrot_0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 3);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r10 = (r10_rot_0 & 67108863);
    r4_addze_src_0 = r4;
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_addze_src_0 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addze_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_addze_src_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_addze_src_0 + r3_ca_0);
    r24 = (static_cast<int32_t>(r9) >> 31);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r9)) >> 32));
    r25 = (static_cast<int32_t>(r22) >> 31);
    r21 = (r5 * r9);
    r20 = (r7 + r21);
    r21 = (r0 * r24);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r23) * static_cast<uint64_t>(r22)) >> 32));
    r20 = (r20 + r21);
    r7 = (r5 * r22);
    r24 = (r6 + r7);
    r7 = (r0 * r9);
    r6 = (r23 * r25);
    r0 = (r23 * r22);
    r24 = (r24 + r6);
    r25 = (r7 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r27)) * static_cast<int64_t>(static_cast<int32_t>(r28))) >> 32));
    r28_ca_0 = (xer >> 29) & 1u;
    r28 = (r20 + r24);
    r28 = (r28 + r28_ca_0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    r9 = (r27 * 60);
    r6 = (r29 * 3600);
    r6_addc_right_0 = r6;
    r6 = (r9 + r6_addc_right_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9)) + static_cast<uint64_t>(static_cast<uint32_t>(r6_addc_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_adde_left_0 = r7;
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_adde_left_0 + r0);
    r7 = (r7 + r7_ca_0);
    r0 = (static_cast<int32_t>(r26) >> 31);
    r6_addc_left_0 = r6;
    r6 = (r6_addc_left_0 + r26);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r26)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_adde_right_0 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r7 + r0_adde_right_0);
    r0 = (r0 + r0_ca_3);
    r6_addc_left_1 = r6;
    r6 = (r6_addc_left_1 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_adde_left_0 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_0 + r12);
    r0 = (r0 + r0_ca_4);
    r12 = (r25 + r6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r25)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r28 + r0);
    r6 = (r6 + r6_ca_0);
    r9 = (r6 * r8);
    r0 = (static_cast<int32_t>(r11) >> 31);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r12) * static_cast<uint64_t>(r8)) >> 32));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r10) * static_cast<uint64_t>(r11)) >> 32));
    r9 = (r7 + r9);
    r7 = (r5 * r11);
    r5 = (r12 * r5);
    r6 = (r6 + r7);
    r0 = (r10 * r0);
    r7 = (r9 + r5);
    r6 = (r6 + r0);
    r0 = (r10 * r11);
    r11 = (r1 + 64);
    r5 = (r12 * r8);
    r5_addc_left_0 = r5;
    r5 = (r5_addc_left_0 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r7 + r6);
    r0 = (r0 + r0_ca_5);
    r4_addc_left_0 = r4;
    r4 = (r4_addc_left_0 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_left_0 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_0 + r0);
    r3 = (r3 + r3_ca_1);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_2 = MemoryAlias::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryAlias::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D5800(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D5800_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D5800 func_804D5800 preserves=true fpr_mask=0x00000000
