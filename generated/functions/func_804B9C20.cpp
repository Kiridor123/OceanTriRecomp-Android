#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t mkw_fifo_burst_0[15];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x804B9C20u);
    goto loc_804B9C20;

loc_804B9C20:
{
    r8 = MemoryInline::FlatRead32(r4);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r9 = MemoryInline::FlatRead32((r4 + 4));
    r5 = -872349696;
    r4 = 97;
    r0 = (r6 + 224);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7 = (r7_rot_0 & -16777216);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r7_mrot_0 = (r7_rot_1 & 2047);
    r7_mdest_0 = (r7 & -2048);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r6 = (r6 + 225);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r7_mrot_1 = (r7_rot_2 & 8384512);
    r7_mdest_1 = (r7 & -8384513);
    r7 = (r7_mdest_1 | r7_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -16777216);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r4);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r6_mrot_0 = (r6_rot_2 & 2047);
    r6_mdest_0 = (r6 & -2048);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(12));
    r6_mrot_1 = (r6_rot_3 & 8384512);
    r6_mdest_1 = (r6 & -8384513);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r4);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r4);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 15u);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9C20 func_804B9C20 preserves=true fpr_mask=0x00000000
