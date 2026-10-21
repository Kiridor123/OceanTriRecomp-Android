#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_10 = 0;
    uint32_t r10_mdest_11 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mdest_4 = 0;
    uint32_t r10_mdest_5 = 0;
    uint32_t r10_mdest_6 = 0;
    uint32_t r10_mdest_7 = 0;
    uint32_t r10_mdest_8 = 0;
    uint32_t r10_mdest_9 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_10 = 0;
    uint32_t r10_mrot_11 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_mrot_4 = 0;
    uint32_t r10_mrot_5 = 0;
    uint32_t r10_mrot_6 = 0;
    uint32_t r10_mrot_7 = 0;
    uint32_t r10_mrot_8 = 0;
    uint32_t r10_mrot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    MKW_GUEST_ENTER(0x804BA440u);
    goto loc_804BA440;

loc_804BA440:
{
}

loc_804BA444:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BA518;
    }
}

loc_804BA448:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 20u, true, false);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r6 = -872349696;
    r0 = 97;
    r9 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r5 + 2));
    r10 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r10_mrot_1 = (r11 & 4095);
    r10_mdest_1 = (r10 & -4096);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r7 = 233;
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r10_mrot_2 = (r10_rot_1 & 16773120);
    r10_mdest_2 = (r10 & -16773121);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r5 + 4));
    r8 = r10;
    r9 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r5 + 6));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_1 = (r8_rot_1 & -16777216);
    r8_mdest_1 = (r8 & 16777215);
    r8 = (r8_mdest_1 | r8_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r10 = 0;
    r7 = 234;
    r10_mrot_3 = (r11 & 4095);
    r10_mdest_3 = (r10 & -4096);
    r10 = (r10_mdest_3 | r10_mrot_3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r10_mrot_4 = (r10_rot_2 & 16773120);
    r10_mdest_4 = (r10 & -16773121);
    r10 = (r10_mdest_4 | r10_mrot_4);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r5 + 8));
    r8 = r10;
    r9 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r5 + 10));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_2 = (r8_rot_2 & -16777216);
    r8_mdest_2 = (r8 & 16777215);
    r8 = (r8_mdest_2 | r8_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r10 = 0;
    r7 = 235;
    r10_mrot_5 = (r11 & 4095);
    r10_mdest_5 = (r10 & -4096);
    r10 = (r10_mdest_5 | r10_mrot_5);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r10_mrot_6 = (r10_rot_3 & 16773120);
    r10_mdest_6 = (r10 & -16773121);
    r10 = (r10_mdest_6 | r10_mrot_6);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r5 + 12));
    r8 = r10;
    r9 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r5 + 14));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_3 = (r8_rot_3 & -16777216);
    r8_mdest_3 = (r8 & 16777215);
    r8 = (r8_mdest_3 | r8_mrot_3);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r10 = 0;
    r7 = 236;
    r10_mrot_7 = (r11 & 4095);
    r10_mdest_7 = (r10 & -4096);
    r10 = (r10_mdest_7 | r10_mrot_7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r10_mrot_8 = (r10_rot_4 & 16773120);
    r10_mdest_8 = (r10 & -16773121);
    r10 = (r10_mdest_8 | r10_mrot_8);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r5 + 16));
    r8 = r10;
    r9 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r5 + 18));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_4 = (r8_rot_4 & -16777216);
    r8_mdest_4 = (r8 & 16777215);
    r8 = (r8_mdest_4 | r8_mrot_4);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r10 = 0;
    r7 = 237;
    r10_mrot_9 = (r11 & 4095);
    r10_mdest_9 = (r10 & -4096);
    r10 = (r10_mdest_9 | r10_mrot_9);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r10_mrot_10 = (r10_rot_5 & 16773120);
    r10_mdest_10 = (r10 & -16773121);
    r10 = (r10_mdest_10 | r10_mrot_10);
    r8 = r10;
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_5 = (r8_rot_5 & -16777216);
    r8_mdest_5 = (r8 & 16777215);
    r8 = (r8_mdest_5 | r8_mrot_5);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
}

loc_804BA518:
{
    r5 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = (r4 + 342);
    r6 = 0;
    r0 = 0;
    r6_mrot_0 = (r4 & 1023);
    r6_mdest_0 = (r6 & -1024);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r4 = 232;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r6_mrot_1 = (r6_rot_0 & 1024);
    r6_mdest_1 = (r6 & -1025);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFD gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA440 func_804BA440 preserves=true fpr_mask=0x00000000
