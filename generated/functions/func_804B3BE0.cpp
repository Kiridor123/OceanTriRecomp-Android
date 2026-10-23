#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B3BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t mkw_fifo_burst_0[23];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_804B3BE0;

loc_804B3BE0:
{
    r0 = 2;
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r7 = 0;
    r5 = 8;
    r4 = -872349696;
    ctr = r0;
}

loc_804B3BF8:
{
    r0 = MemoryInline::FlatRead32((r6 + 28));
    r3 = (r7 | 128);
    r7 = (r7 + 1);
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r6 + 28), r0);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r3 = (r7 | 128);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 32));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r6 + 32), r0);
    r0 = MemoryInline::FlatRead32((r6 + 64));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 64), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r3 = (r7 | 128);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r6 + 64));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::FlatRead32((r6 + 68));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 68), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r3 = (r7 | 128);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r6 + 68));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 40));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r6 + 40), r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r6 = (r6 + 16);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B3BF8;
    }
}

loc_804B3CC0:
{
    r7 = -872349696;
    r8 = 16;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r8);
    r4 = 0;
    r0 = 4096;
    r5 = 4114;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (r4 | 63);
    r6 = (r4 | 1);
    r3 = 88;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r4 | 15);
    r0 = 97;
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r8);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r4_mrot_0 = (r4_rot_0 & -16777216);
    r4_mdest_0 = (r4 & 16777215);
    r4 = (r4_mdest_0 | r4_mrot_0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[18] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 23u);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000034 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B3BE0 func_804B3BE0 preserves=true fpr_mask=0x00000000
