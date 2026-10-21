#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mdest_4 = 0;
    uint32_t r11_mdest_5 = 0;
    uint32_t r11_mdest_6 = 0;
    uint32_t r11_mdest_7 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_mrot_4 = 0;
    uint32_t r11_mrot_5 = 0;
    uint32_t r11_mrot_6 = 0;
    uint32_t r11_mrot_7 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mdest_4 = 0;
    uint32_t r12_mdest_5 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_mrot_4 = 0;
    uint32_t r12_mrot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mdest_8 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_mrot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mdest_6 = 0;
    uint32_t r7_mdest_7 = 0;
    uint32_t r7_mdest_8 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;
    uint32_t r7_mrot_6 = 0;
    uint32_t r7_mrot_7 = 0;
    uint32_t r7_mrot_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mdest_7 = 0;
    uint32_t r8_mdest_8 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_mrot_7 = 0;
    uint32_t r8_mrot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[19];

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t r12 = ctx->gpr[12];

    MKW_GUEST_ENTER(0x804B7970u);
    goto loc_804B7970;

loc_804B7970:
{
}

loc_804B7974:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B7A6C;
    }
}

loc_804B7978:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r0 = 0;
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r3 = 0;
    r0_mrot_0 = (r8 & 15);
    r0_mdest_0 = (r0 & -16);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_0 & 240);
    r0_mdest_1 = (r0 & -241);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 12));
    r3_mrot_0 = (r7 & 15);
    r3_mdest_0 = (r3 & -16);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r7 = 0;
    r7_mrot_0 = (r8 & 15);
    r7_mdest_0 = (r7 & -16);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 13));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r8 = 0;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r7_mrot_1 = (r7_rot_0 & 240);
    r7_mdest_1 = (r7 & -241);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 18));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r3_mrot_1 = (r3_rot_0 & 240);
    r3_mdest_1 = (r3 & -241);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_1 & 3840);
    r0_mdest_2 = (r0 & -3841);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    r8_mrot_0 = (r9 & 15);
    r8_mdest_0 = (r8 & -16);
    r8 = (r8_mdest_0 | r8_mrot_0);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r4 + 19));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r7_mrot_2 = (r7_rot_1 & 3840);
    r7_mdest_2 = (r7 & -3841);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r8_mrot_1 = (r8_rot_0 & 240);
    r8_mdest_1 = (r8 & -241);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r4 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r0_mrot_3 = (r0_rot_2 & 61440);
    r0_mdest_3 = (r0 & -61441);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 15));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r8_mrot_2 = (r8_rot_1 & 3840);
    r8_mdest_2 = (r8 & -3841);
    r8 = (r8_mdest_2 | r8_mrot_2);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r4 + 21));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r7_mrot_3 = (r7_rot_2 & 61440);
    r7_mdest_3 = (r7 & -61441);
    r7 = (r7_mdest_3 | r7_mrot_3);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r8_mrot_3 = (r8_rot_2 & 61440);
    r8_mdest_3 = (r8 & -61441);
    r8 = (r8_mdest_3 | r8_mrot_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r0_mrot_4 = (r0_rot_3 & 983040);
    r0_mdest_4 = (r0 & -983041);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 16));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r4 + 22));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r3_mrot_2 = (r3_rot_1 & 3840);
    r3_mdest_2 = (r3 & -3841);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r7_mrot_4 = (r7_rot_3 & 983040);
    r7_mdest_4 = (r7 & -983041);
    r7 = (r7_mdest_4 | r7_mrot_4);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r8_mrot_4 = (r8_rot_3 & 983040);
    r8_mdest_4 = (r8 & -983041);
    r8 = (r8_mdest_4 | r8_mrot_4);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r4 + 17));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(12));
    r3_mrot_3 = (r3_rot_2 & 61440);
    r3_mdest_3 = (r3 & -61441);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r0_mrot_5 = (r0_rot_4 & 15728640);
    r0_mdest_5 = (r0 & -15728641);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 11));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7_mrot_5 = (r7_rot_4 & 15728640);
    r7_mdest_5 = (r7 & -15728641);
    r7 = (r7_mdest_5 | r7_mrot_5);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r4 + 23));
    r9 = 1;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r3_mrot_4 = (r3_rot_3 & 983040);
    r3_mdest_4 = (r3 & -983041);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r3_mrot_5 = (r3_rot_4 & 15728640);
    r3_mdest_5 = (r3 & -15728641);
    r3 = (r3_mdest_5 | r3_mrot_5);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8_mrot_5 = (r8_rot_4 & 15728640);
    r8_mdest_5 = (r8 & -15728641);
    r8 = (r8_mdest_5 | r8_mrot_5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r0_mrot_6 = (r0_rot_5 & -16777216);
    r0_mdest_6 = (r0 & 16777215);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r10 = 2;
    r9 = 3;
    r4 = 4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r3_mrot_6 = (r3_rot_5 & -16777216);
    r3_mdest_6 = (r3 & 16777215);
    r3 = (r3_mdest_6 | r3_mrot_6);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r7_mrot_6 = (r7_rot_5 & -16777216);
    r7_mdest_6 = (r7 & 16777215);
    r7 = (r7_mdest_6 | r7_mrot_6);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r8_mrot_6 = (r8_rot_5 & -16777216);
    r8_mdest_6 = (r8 & 16777215);
    r8 = (r8_mdest_6 | r8_mrot_6);
    goto loc_804B7A8C;
}

loc_804B7A6C:
{
    r8 = 23461888;
    r3 = 40239104;
    r7 = 57016320;
    r4 = 73793536;
    r0 = (r8 + 26214);
    r3 = (r3 + 26214);
    r7 = (r7 + 26214);
    r8 = (r4 + 26214);
}

loc_804B7A8C:
{
    r9 = -872349696;
    r10 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r10));
}

loc_804B7A9C:
{
    r4 = 83;
    r11 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = 84;
    r12 = 0;
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r11_mrot_0 = (r11_rot_0 & -16777216);
    r11_mdest_0 = (r11 & 16777215);
    r11 = (r11_mdest_0 | r11_mrot_0);
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r10);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r12_mrot_0 = (r12_rot_0 & -16777216);
    r12_mdest_0 = (r12 & 16777215);
    r12 = (r12_mdest_0 | r12_mrot_0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r10);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[14] = static_cast<uint8_t>(r10);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r8);
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 19u);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804B7B10;
    }
}

loc_804B7AD4:
{
    r4 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8((r6 + 4));
    r11_mrot_1 = (r4 & 63);
    r11_mdest_1 = (r11 & -64);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r12_mrot_1 = (r0 & 63);
    r12_mdest_1 = (r12 & -64);
    r12 = (r12_mdest_1 | r12_mrot_1);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r11_mrot_2 = (r11_rot_1 & 4032);
    r11_mdest_2 = (r11 & -4033);
    r11 = (r11_mdest_2 | r11_mrot_2);
    r3 = MemoryInline::FlatRead8((r6 + 5));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r11_mrot_3 = (r11_rot_2 & 258048);
    r11_mdest_3 = (r11 & -258049);
    r11 = (r11_mdest_3 | r11_mrot_3);
    r0 = MemoryInline::FlatRead8((r6 + 6));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r12_mrot_2 = (r12_rot_1 & 4032);
    r12_mdest_2 = (r12 & -4033);
    r12 = (r12_mdest_2 | r12_mrot_2);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r11_mrot_4 = (r11_rot_3 & 16515072);
    r11_mdest_4 = (r11 & -16515073);
    r11 = (r11_mdest_4 | r11_mrot_4);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r12_mrot_3 = (r12_rot_2 & 258048);
    r12_mdest_3 = (r12 & -258049);
    r12 = (r12_mdest_3 | r12_mrot_3);
    goto loc_804B7B2C;
}

loc_804B7B10:
{
    r3 = 21;
    r11 = (r11 & -4096);
    r12_mrot_4 = (r3 & 63);
    r12_mdest_4 = (r12 & -64);
    r12 = (r12_mdest_4 | r12_mrot_4);
    r0 = 22;
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r11_mrot_5 = (r11_rot_4 & 258048);
    r11_mdest_5 = (r11 & -258049);
    r11 = (r11_mdest_5 | r11_mrot_5);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r11_mrot_6 = (r11_rot_5 & 16515072);
    r11_mdest_6 = (r11 & -16515073);
    r11 = (r11_mdest_6 | r11_mrot_6);
    r12 = (r12 & -262081);
}

loc_804B7B2C:
{
    r4 = -872349696;
    r5 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r11));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FD gpr_write=0x00001FB9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7970 func_804B7970 preserves=true fpr_mask=0x00000000
