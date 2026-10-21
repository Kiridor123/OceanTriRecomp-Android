#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;

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

    MKW_GUEST_ENTER(0x804B7CC0u);
    goto loc_804B7CC0;

loc_804B7CC0:
{
}

loc_804B7CC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B7CF4;
    }
}

loc_804B7CC8:
{
    r7 = MemoryInline::FlatRead32((r2 + -2480));
    r5 = -872349696;
    r0 = 97;
    r6 = MemoryInline::FlatRead32((r7 + 552));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = (r6 | 15);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r6 = MemoryInline::FlatRead32((r7 + 544));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r6 & -4);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7CF4:
{
    r9 = MemoryInline::FlatRead32((r2 + -2480));
    r11 = 0;
    r0 = MemoryInline::FlatRead8((r9 + 592));
    r6 = MemoryInline::FlatRead32((r9 + 556));
}

loc_804B7D08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B7D24;
    }
}

loc_804B7D0C:
{
    r0 = (r6 & 7);
}

loc_804B7D14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804B7D24;
    }
}

loc_804B7D18:
{
    r0 = 3;
    r11 = 1;
    r6_mrot_1 = (r0 & 7);
    r6_mdest_1 = (r6 & -8);
    r6 = (r6_mdest_1 | r6_mrot_1);
}

loc_804B7D24:
{
}

loc_804B7D28:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804B7D38;
    }
}

loc_804B7D2C:
{
    r0 = (r6 & 7);
}

loc_804B7D34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804B7D4C;
    }
}

loc_804B7D38:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
}

loc_804B7D40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804B7D4C;
    }
}

loc_804B7D44:
{
    r11 = 1;
    r6 = (r6 & -65);
}

loc_804B7D4C:
{
}

loc_804B7D50:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804B7D64;
    }
}

loc_804B7D54:
{
    r5 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
}

loc_804B7D64:
{
    r7 = -872349696;
    r8 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r5 = 0;
    r10 = MemoryInline::FlatRead32((r2 + -2480));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r5_mrot_0 = (r5_rot_0 & 16777215);
    r5_mdest_0 = (r5 & -16777216);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r3 = 75;
    r0 = 82;
    r6 = MemoryInline::FlatRead32((r10 + 576));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_1 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
}

loc_804B7D94:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead32((r10 + 580));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead32((r10 + 584));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    r3 = MemoryInline::FlatRead32((r10 + 588));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(11));
    r3_mrot_0 = (r3_rot_0 & 2048);
    r3_mdest_0 = (r3 & -2049);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r3 = (r3 & -16385);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_1 & -16777216);
    r3_mdest_1 = (r3 & 16777215);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r10 + 588), r3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead32((r10 + 588));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B7DF0;
    }
}

loc_804B7DD8:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead32((r10 + 552));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead32((r10 + 544));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7DF0:
{
}

loc_804B7DF4:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804B7E0C;
    }
}

loc_804B7DF8:
{
    r3 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + 556));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7E0C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FFD gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7CC0 func_804B7CC0 preserves=true fpr_mask=0x00000000
