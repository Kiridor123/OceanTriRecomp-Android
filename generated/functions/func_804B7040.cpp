#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t mkw_fifo_burst_0[32];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B7040u);
    goto loc_804B7040;

loc_804B7040:
{
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = -872349696;
    r0 = 152;
    r7 = 0;
    r5 = MemoryInline::FlatRead16((r6 + 4));
    r4 = MemoryInline::FlatRead16((r6 + 6));
    r8 = (r5 * r4);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804B710C;
    }
}

loc_804B706C:
{
    r3 = (r8 + 3);
    r5 = (r8 + -32);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_804B707C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_804B70E4;
    }
}

loc_804B7080:
{
}

loc_804B7084:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(3))) {
        goto loc_804B7098;
    }
}

loc_804B708C:
{
}

loc_804B7090:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(r3))) {
        goto loc_804B7098;
    }
}

loc_804B7094:
{
    r0 = 1;
}

loc_804B7098:
{
}

loc_804B709C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B70E4;
    }
}

loc_804B70A0:
{
    r0 = (r5 + 31);
    r4 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r3 = -872349696;
    ctr = r0;
}

loc_804B70B8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_804B70E4;
    }
}

loc_804B70BC:
{
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r7 = (r7 + 32);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[30] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[31] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 32u);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B70BC;
    }
}

loc_804B70E4:
{
    r0 = (r8 + 3);
    r4 = 0;
    r0 = (r0 - r7);
    r3 = -872349696;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    ctr = r0;
}

loc_804B7100:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r8))) {
        goto loc_804B710C;
    }
}

loc_804B7104:
{
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B7104;
    }
}

loc_804B710C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x000001FD gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7040 func_804B7040 preserves=true fpr_mask=0x00000000
