#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EC170_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804EC170;

loc_804EC170:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r10 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 2232));
}

loc_804EC190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(14))) {
        goto loc_804EC4C0;
    }
}

loc_804EC194:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 42u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r4 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC1A8;
    }
}

loc_804EC1A0:
{
}

loc_804EC1A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-7))) {
        goto loc_804EC4C0;
    }
}

loc_804EC1A8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 42u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 41u, (r5 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC1BC;
    }
}

loc_804EC1B4:
{
}

loc_804EC1B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-7))) {
        goto loc_804EC4C0;
    }
}

loc_804EC1BC:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r5 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, r5);
    r10 = (r8 - r9);
    r6 = (r0 - r7);
    r0 = (r7 - r0);
    r0 = (r6 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_804EC1E8;
    }
}

loc_804EC1E4:
{
    r10 = (r9 - r8);
}

loc_804EC1E8:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r5 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r10 ^ 12);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r10);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC210;
    }
}

loc_804EC20C:
{
    r11 = (r9 - r8);
}

loc_804EC210:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r5 + 6));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r11 ^ 12);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC238;
    }
}

loc_804EC234:
{
    r11 = (r9 - r8);
}

loc_804EC238:
{
    r7 = (r11 ^ 12);
    r6 = (r6 | r10);
    r8 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r7 & r11);
    r7 = (r8 - r7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r6 = (r7 | r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804EC288;
    }
}

loc_804EC258:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -19576));
}

loc_804EC270:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_804EC2CC;
    }
}

loc_804EC274:
{
    r6 = 0;
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
    r7 = 1;
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    goto loc_804EC2D0;
}

loc_804EC288:
{
    r6 = MemoryInline::FlatRead16((r3 + 2302));
    r7 = MemoryInline::FlatRead16((r13 + -19568));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -19568));
    r6 = (r6 + -1);
}

loc_804EC2B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_804EC2CC;
    }
}

loc_804EC2B8:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
}

loc_804EC2C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804EC2CC;
    }
}

loc_804EC2C4:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
}

loc_804EC2CC:
{
    r7 = 0;
}

loc_804EC2D0:
{
    r8 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r5 + 10));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r0 | r7);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r10 = (r0 & 255);
    r9 = (r6 - r8);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804EC2EC;
    }
}

loc_804EC2E8:
{
    r9 = (r8 - r6);
}

loc_804EC2EC:
{
    r8 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r5 + 8));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r9 ^ 2);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r9);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC314;
    }
}

loc_804EC310:
{
    r11 = (r8 - r7);
}

loc_804EC314:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r5 + 16));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r11 ^ 2);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r12 = (r8 - r9);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC33C;
    }
}

loc_804EC338:
{
    r12 = (r9 - r8);
}

loc_804EC33C:
{
    r11 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r5 + 18));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r7 = (r12 ^ 2);
    r9 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r7 & r12);
    r7 = (r8 - r7);
    r29 = (r9 - r11);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_804EC364;
    }
}

loc_804EC360:
{
    r29 = (r11 - r9);
}

loc_804EC364:
{
    r12 = MemoryInline::ReadResolved16(guest_range_3, 24u, (r5 + 24));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r8 = (r29 ^ 2);
    r11 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r4 + 24));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r9 = (static_cast<int32_t>(r8) >> 1);
    r8 = (r8 & r29);
    r8 = (r9 - r8);
    r29 = (r11 - r12);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_804EC38C;
    }
}

loc_804EC388:
{
    r29 = (r12 - r11);
}

loc_804EC38C:
{
    r30 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r5 + 26));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r9 = (r29 ^ 2);
    r12 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r4 + 26));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r11 = (static_cast<int32_t>(r9) >> 1);
    r9 = (r9 & r29);
    r9 = (r11 - r9);
    r29 = (r12 - r30);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_804EC3B4;
    }
}

loc_804EC3B0:
{
    r29 = (r30 - r12);
}

loc_804EC3B4:
{
    r31 = MemoryInline::ReadResolved16(guest_range_3, 32u, (r5 + 32));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r11 = (r29 ^ 2);
    r30 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r4 + 32));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r29);
    r11 = (r12 - r11);
    r28 = (r30 - r31);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_804EC3DC;
    }
}

loc_804EC3D8:
{
    r28 = (r31 - r30);
}

loc_804EC3DC:
{
    r30 = MemoryInline::ReadResolved16(guest_range_3, 34u, (r5 + 34));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r11 = (r28 ^ 2);
    r31 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r4 + 34));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r28);
    r11 = (r12 - r11);
    r28 = (r31 - r30);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_1 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_804EC404;
    }
}

loc_804EC400:
{
    r28 = (r30 - r31);
}

loc_804EC404:
{
    r6 = (r7 | r6);
    r11 = (r28 ^ 2);
    r0 = (r8 | r0);
    r6 = (r29 | r6);
    r8 = (static_cast<int32_t>(r11) >> 1);
    r7 = (r11 & r28);
    r0 = (r9 | r0);
    r7 = (r8 - r7);
    r6 = (r12 | r6);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r0 = (r6 | r0);
    r0 = (r7 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC46C;
    }
}

loc_804EC438:
{
    r7 = MemoryInline::FlatRead16((r3 + 2298));
    r6 = (r13 + -19576);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_804EC454:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_804EC4B4;
    }
}

loc_804EC458:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r0));
    r6 = 1;
    MemoryInline::FlatWrite16((r3 + 2304), static_cast<uint16_t>(r0));
    goto loc_804EC4B8;
}

loc_804EC46C:
{
    r8 = (r13 + -19568);
    r7 = MemoryInline::FlatRead16((r3 + 2304));
    r6 = MemoryInline::FlatRead16((r8 + 2));
    r7 = (r7 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    r0 = (r0 * r6);
    r0 = (r7 - r0);
    MemoryInline::FlatWrite16((r3 + 2304), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r6 = MemoryInline::FlatRead16((r8 + 2));
    r0 = (r6 + -1);
}

loc_804EC49C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_804EC4B4;
    }
}

loc_804EC4A0:
{
    r6 = MemoryInline::FlatRead16((r3 + 2298));
}

loc_804EC4A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804EC4B4;
    }
}

loc_804EC4AC:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r0));
}

loc_804EC4B4:
{
    r6 = 0;
}

loc_804EC4B8:
{
    r0 = (r10 | r6);
    r10 = (r0 & 255);
}

loc_804EC4C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 41), 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804ECA4C;
    }
}

loc_804EC4CC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 41), 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r5 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804ECA4C;
    }
}

loc_804EC4D8:
{
    r6 = MemoryInline::FlatRead32((r3 + 2232));
    r0 = (r6 + -3);
}

loc_804EC4E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_804ECA4C;
    }
}

loc_804EC4E8:
{
    r6 = 0x80630000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r6 + -14132);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804EC500u:
        goto loc_804EC500;
        break;
    case 0x804EC678u:
        goto loc_804EC678;
        break;
    case 0x804ECA4Cu:
        goto loc_804ECA4C;
        break;
    case 0x804EC814u:
        goto loc_804EC814;
        break;
    case 0x804EC88Cu:
        goto loc_804EC88C;
        break;
    case 0x804EC9C8u:
        goto loc_804EC9C8;
        break;
    default:
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
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804EC500:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 3u, (r5 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 3u, (r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804EC514;
    }
}

loc_804EC510:
{
    r9 = (r6 - r0);
}

loc_804EC514:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 1u, (r5 + 42));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r9 ^ 12);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r4 + 42));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r9);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC53C;
    }
}

loc_804EC538:
{
    r11 = (r8 - r7);
}

loc_804EC53C:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 5u, (r5 + 46));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r11 ^ 12);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 5u, (r4 + 46));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r11);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC564;
    }
}

loc_804EC560:
{
    r11 = (r8 - r7);
}

loc_804EC564:
{
    r6 = (r11 ^ 12);
    r0 = (r0 | r9);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & 1);
    r0 = (r6 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC5B8;
    }
}

loc_804EC584:
{
    r7 = MemoryInline::FlatRead16((r3 + 2300));
    r6 = (r13 + -19576);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_804EC5A0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_804EC600;
    }
}

loc_804EC5A4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r6 = 1;
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    goto loc_804EC604;
}

loc_804EC5B8:
{
    r8 = (r13 + -19568);
    r7 = MemoryInline::FlatRead16((r3 + 2306));
    r6 = MemoryInline::FlatRead16((r8 + 4));
    r7 = (r7 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    r0 = (r0 * r6);
    r0 = (r7 - r0);
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r6 = MemoryInline::FlatRead16((r8 + 4));
    r0 = (r6 + -1);
}

loc_804EC5E8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_804EC600;
    }
}

loc_804EC5EC:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_804EC5F4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804EC600;
    }
}

loc_804EC5F8:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
}

loc_804EC600:
{
    r6 = 0;
}

loc_804EC604:
{
    r7 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r5 + 48));
    r0 = (r10 | r6);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 48));
    r10 = (r0 & 255);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r6 = (r3 - r7);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC628;
    }
}

loc_804EC624:
{
    r6 = (r7 - r3);
}

loc_804EC628:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r5 + 49));
    r0 = (r6 ^ 1);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 49));
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r3 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r6 = (r4 - r5);
    r10 = (r10 | r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC65C;
    }
}

loc_804EC658:
{
    r6 = (r5 - r4);
}

loc_804EC65C:
{
    r0 = (r6 ^ 1);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r3 - r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r10 = (r10 | r0);
    goto loc_804ECA4C;
}

loc_804EC678:
{
    r0 = MemoryInline::FlatRead8((r3 + 2242));
}

loc_804EC680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804EC690;
    }
}

loc_804EC684:
{
}

loc_804EC688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804EC6A0;
    }
}

loc_804EC68C:
{
    goto loc_804EC6B0;
}

loc_804EC690:
{
    r28 = 16;
    r0 = 32;
    r3 = 8;
    goto loc_804EC6BC;
}

loc_804EC6A0:
{
    r28 = 4;
    r0 = 4;
    r3 = 1;
    goto loc_804EC6BC;
}

loc_804EC6B0:
{
    r28 = 1;
    r0 = 1;
    r3 = 1;
}

loc_804EC6BC:
{
    r7 = MemoryInline::ReadResolved16(guest_range_2, 3u, (r5 + 44));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r4 + 42));
    r11 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r28));
    r7 = MemoryInline::ReadResolved16(guest_range_2, 1u, (r5 + 42));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 3u, (r4 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (r7 - r9);
    r7 = (r9 - r7);
    r7 = (r8 | r7);
    r8 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r28));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & 1);
    r10 = (r10 | r6);
    r12 = (r8 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC6F4;
    }
}

loc_804EC6F0:
{
    r12 = (r11 - r8);
}

loc_804EC6F4:
{
    r7 = MemoryInline::ReadResolved16(guest_range_2, 5u, (r5 + 46));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r9 = (r12 ^ 1);
    r6 = MemoryInline::ReadResolved16(guest_range_0, 5u, (r4 + 46));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (static_cast<int32_t>(r9) >> 1);
    r11 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r28));
    r7 = (r9 & r12);
    r7 = (r8 - r7);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & 1);
    r10 = (r10 | r7);
    r6 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r28));
    r12 = (r6 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC728;
    }
}

loc_804EC724:
{
    r12 = (r11 - r6);
}

loc_804EC728:
{
    r7 = MemoryInline::ReadResolved16(guest_range_2, 7u, (r5 + 48));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r9 = (r12 ^ 1);
    r6 = MemoryInline::ReadResolved16(guest_range_0, 7u, (r4 + 48));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (static_cast<int32_t>(r9) >> 1);
    r11 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r0));
    r7 = (r9 & r12);
    r7 = (r8 - r7);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_6 & 1);
    r10 = (r10 | r7);
    r6 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r0));
    r12 = (r6 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC75C;
    }
}

loc_804EC758:
{
    r12 = (r11 - r6);
}

loc_804EC75C:
{
    r7 = MemoryInline::ReadResolved16(guest_range_2, 9u, (r5 + 50));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r9 = (r12 ^ 1);
    r6 = MemoryInline::ReadResolved16(guest_range_0, 9u, (r4 + 50));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (static_cast<int32_t>(r9) >> 1);
    r11 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r0));
    r7 = (r9 & r12);
    r7 = (r8 - r7);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 1);
    r10 = (r10 | r7);
    r0 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r0));
    r12 = (r0 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC790;
    }
}

loc_804EC78C:
{
    r12 = (r11 - r0);
}

loc_804EC790:
{
    r6 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r5 + 52));
    r8 = (r12 ^ 1);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 52));
    r7 = (static_cast<int32_t>(r8) >> 1);
    r9 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r3));
    r6 = (r8 & r12);
    r6 = (r7 - r6);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_6 & 1);
    r10 = (r10 | r6);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r8 = (r0 - r9);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_804EC7C4;
    }
}

loc_804EC7C0:
{
    r8 = (r9 - r0);
}

loc_804EC7C4:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r5 + 53));
    r7 = (r8 ^ 1);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 53));
    r6 = (static_cast<int32_t>(r7) >> 1);
    r5 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r3));
    r4 = (r7 & r8);
    r4 = (r6 - r4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r10 = (r10 | r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r4 = (r0 - r5);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804EC7F8;
    }
}

loc_804EC7F4:
{
    r4 = (r5 - r0);
}

loc_804EC7F8:
{
    r0 = (r4 ^ 1);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r4);
    r0 = (r3 - r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r10 = (r10 | r0);
    goto loc_804ECA4C;
}

loc_804EC814:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r4 + 42));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 1u, (r5 + 42));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r5 + 44));
    r3 = (r0 - r6);
    r0 = (r6 - r0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 44));
    r0 = (r3 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    r6 = (r7 - r8);
    r10 = (r10 | r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC844;
    }
}

loc_804EC840:
{
    r6 = (r8 - r7);
}

loc_804EC844:
{
    r0 = (r6 ^ 1);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r5 + 45));
    r3 = (static_cast<int32_t>(r0) >> 1);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 45));
    r0 = (r0 & r6);
    r0 = (r3 - r0);
    r6 = (r4 - r5);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    r10 = (r10 | r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC870;
    }
}

loc_804EC86C:
{
    r6 = (r5 - r4);
}

loc_804EC870:
{
    r0 = (r6 ^ 1);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r3 - r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    r10 = (r10 | r0);
    goto loc_804ECA4C;
}

loc_804EC88C:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 3u, (r5 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 3u, (r4 + 44));
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804EC8A0;
    }
}

loc_804EC89C:
{
    r9 = (r6 - r0);
}

loc_804EC8A0:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 1u, (r5 + 42));
    r0 = (r9 ^ 50);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r4 + 42));
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r9);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC8C8;
    }
}

loc_804EC8C4:
{
    r11 = (r8 - r7);
}

loc_804EC8C8:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 5u, (r5 + 46));
    r0 = (r11 ^ 50);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 5u, (r4 + 46));
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r11);
    r0 = (r6 - r0);
    r12 = (r7 - r8);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r11 = (r11_rot_1 & 1);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_804EC8F0;
    }
}

loc_804EC8EC:
{
    r12 = (r8 - r7);
}

loc_804EC8F0:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 7u, (r5 + 48));
    r0 = (r12 ^ 50);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 7u, (r4 + 48));
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r12);
    r0 = (r4 - r0);
    r7 = (r5 - r6);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_804EC918;
    }
}

loc_804EC914:
{
    r7 = (r6 - r5);
}

loc_804EC918:
{
    r4 = (r7 ^ 50);
    r0 = (r0 | r11);
    r5 = (static_cast<int32_t>(r4) >> 1);
    r4 = (r4 & r7);
    r0 = (r0 | r9);
    r4 = (r5 - r4);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC970;
    }
}

loc_804EC93C:
{
    r5 = MemoryInline::FlatRead16((r3 + 2300));
    r4 = (r13 + -19576);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_804EC958:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_804EC9B8;
    }
}

loc_804EC95C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r4 = 1;
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    goto loc_804EC9BC;
}

loc_804EC970:
{
    r6 = (r13 + -19568);
    r5 = MemoryInline::FlatRead16((r3 + 2306));
    r4 = MemoryInline::FlatRead16((r6 + 4));
    r5 = (r5 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r4 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r4 + -1);
}

loc_804EC9A0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_804EC9B8;
    }
}

loc_804EC9A4:
{
    r4 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_804EC9AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804EC9B8;
    }
}

loc_804EC9B0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
}

loc_804EC9B8:
{
    r4 = 0;
}

loc_804EC9BC:
{
    r0 = (r10 | r4);
    r10 = (r0 & 255);
    goto loc_804ECA4C;
}

loc_804EC9C8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r4 + 70));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 29u, (r5 + 70));
    r7 = MemoryInline::ReadResolved16(guest_range_2, 27u, (r5 + 68));
    r3 = (r0 - r6);
    r0 = (r6 - r0);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 27u, (r4 + 68));
    r0 = (r3 | r0);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    r6 = (r5 - r7);
    r10 = (r10 | r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC9F8;
    }
}

loc_804EC9F4:
{
    r6 = (r7 - r5);
}

loc_804EC9F8:
{
    r3 = (r6 ^ 32);
    r0 = 5;
    r5 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r3 & r6);
    r3 = (r5 - r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r10 = (r10 | r3);
    ctr = r0;
}

loc_804ECA18:
{
    r3 = MemoryInline::FlatRead16((r4 + 54));
    r0 = MemoryInline::FlatRead16((r4 + 42));
    r5 = (r0 - r3);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804ECA2C;
    }
}

loc_804ECA28:
{
    r5 = (r3 - r0);
}

loc_804ECA2C:
{
    r0 = (r5 ^ 32);
    r4 = (r4 + 2);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r5);
    r0 = (r3 - r0);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    r10 = (r10 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804ECA18;
    }
}

loc_804ECA4C:
{
    r3 = (r10 & 255);
    r1 = (r1 + 32);
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
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EC170(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EC170_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EC170 func_804EC170 preserves=true fpr_mask=0x00000000
