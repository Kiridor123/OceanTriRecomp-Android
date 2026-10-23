#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7B80(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

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

    goto loc_804B7B80;

loc_804B7B80:
{
}

loc_804B7B84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B7BB4;
    }
}

loc_804B7B88:
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

loc_804B7BB4:
{
}

loc_804B7BB8:
{
    r12 = 0;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804B7BD8;
    }
}

loc_804B7BC0:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r5 + 556));
    r10 = (r5 + 556);
    r0 = (r0 & 7);
}

loc_804B7BD4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804B7C08;
    }
}

loc_804B7BD8:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r7 = MemoryInline::FlatRead32((r5 + 556));
    r10 = (r5 + 556);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
}

loc_804B7BEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804B7C08;
    }
}

loc_804B7BF0:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r7 & -65);
    r12 = 1;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7C08:
{
    r8 = -872349696;
    r9 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r6 = 0;
    r11 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r6_mrot_0 = (r6_rot_0 & 16777215);
    r6_mdest_0 = (r6 & -16777216);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r3 = 75;
    r0 = 82;
    r7 = MemoryInline::FlatRead32((r11 + 560));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_1 & -16777216);
    r6_mdest_1 = (r6 & 16777215);
    r6 = (r6_mdest_1 | r6_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
}

loc_804B7C38:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r3 = MemoryInline::FlatRead32((r11 + 564));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r3 = MemoryInline::FlatRead32((r11 + 568));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r3 = MemoryInline::FlatRead32((r11 + 572));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(11));
    r3_mrot_0 = (r3_rot_0 & 2048);
    r3_mdest_0 = (r3 & -2049);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r3 = (r3 | 16384);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_1 & -16777216);
    r3_mdest_1 = (r3 & 16777215);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r11 + 572), r3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead32((r11 + 572));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B7C94;
    }
}

loc_804B7C7C:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead32((r11 + 552));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead32((r11 + 544));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7C94:
{
}

loc_804B7C98:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804B7CB0;
    }
}

loc_804B7C9C:
{
    r3 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r10);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B7CB0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFD gpr_write=0x00001FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7B80 func_804B7B80 preserves=true fpr_mask=0x00000000
