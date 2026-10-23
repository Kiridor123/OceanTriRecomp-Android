#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_10 = 0;
    uint32_t r7_mdest_11 = 0;
    uint32_t r7_mdest_12 = 0;
    uint32_t r7_mdest_13 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mdest_6 = 0;
    uint32_t r7_mdest_7 = 0;
    uint32_t r7_mdest_8 = 0;
    uint32_t r7_mdest_9 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_10 = 0;
    uint32_t r7_mrot_11 = 0;
    uint32_t r7_mrot_12 = 0;
    uint32_t r7_mrot_13 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;
    uint32_t r7_mrot_6 = 0;
    uint32_t r7_mrot_7 = 0;
    uint32_t r7_mrot_8 = 0;
    uint32_t r7_mrot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_804B9730;

loc_804B9730:
{
}

loc_804B9734:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B9754;
    }
}

loc_804B9738:
{
}

loc_804B973C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804B9788;
    }
}

loc_804B9740:
{
}

loc_804B9744:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804B97BC;
    }
}

loc_804B9748:
{
}

loc_804B974C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804B97F0;
    }
}

loc_804B9750:
{
    goto loc_804B9820;
}

loc_804B9754:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = 37;
    r3 = -872349696;
    r0 = 97;
    r7 = MemoryInline::FlatRead32((r8 + 376));
    r7_mrot_10 = (r4 & 15);
    r7_mdest_10 = (r7 & -16);
    r7 = (r7_mdest_10 | r7_mrot_10);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r7_mrot_11 = (r7_rot_9 & 240);
    r7_mdest_11 = (r7 & -241);
    r7 = (r7_mdest_11 | r7_mrot_11);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7_mrot_12 = (r7_rot_10 & -16777216);
    r7_mdest_12 = (r7 & 16777215);
    r7 = (r7_mdest_12 | r7_mrot_12);
    MemoryInline::FlatWrite32((r8 + 376), r7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 376));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804B9820;
}

loc_804B9788:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = 37;
    r3 = -872349696;
    r0 = 97;
    r7 = MemoryInline::FlatRead32((r8 + 376));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r7_mrot_7 = (r7_rot_6 & 3840);
    r7_mdest_7 = (r7 & -3841);
    r7 = (r7_mdest_7 | r7_mrot_7);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r7_mrot_8 = (r7_rot_7 & 61440);
    r7_mdest_8 = (r7 & -61441);
    r7 = (r7_mdest_8 | r7_mrot_8);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7_mrot_9 = (r7_rot_8 & -16777216);
    r7_mdest_9 = (r7 & 16777215);
    r7 = (r7_mdest_9 | r7_mrot_9);
    MemoryInline::FlatWrite32((r8 + 376), r7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 376));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804B9820;
}

loc_804B97BC:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = 38;
    r3 = -872349696;
    r0 = 97;
    r7 = MemoryInline::FlatRead32((r8 + 380));
    r7_mrot_4 = (r4 & 15);
    r7_mdest_4 = (r7 & -16);
    r7 = (r7_mdest_4 | r7_mrot_4);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r7_mrot_5 = (r7_rot_4 & 240);
    r7_mdest_5 = (r7 & -241);
    r7 = (r7_mdest_5 | r7_mrot_5);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7_mrot_6 = (r7_rot_5 & -16777216);
    r7_mdest_6 = (r7 & 16777215);
    r7 = (r7_mdest_6 | r7_mrot_6);
    MemoryInline::FlatWrite32((r8 + 380), r7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 380));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804B9820;
}

loc_804B97F0:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = 38;
    r3 = -872349696;
    r0 = 97;
    r7 = MemoryInline::FlatRead32((r8 + 380));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r7_mrot_1 = (r7_rot_1 & 3840);
    r7_mdest_1 = (r7 & -3841);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r7_mrot_2 = (r7_rot_2 & 61440);
    r7_mdest_2 = (r7 & -61441);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7_mrot_3 = (r7_rot_3 & -16777216);
    r7_mdest_3 = (r7 & 16777215);
    r7 = (r7_mdest_3 | r7_mrot_3);
    MemoryInline::FlatWrite32((r8 + 380), r7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 380));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B9820:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FD gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9730 func_804B9730 preserves=true fpr_mask=0x00000000
