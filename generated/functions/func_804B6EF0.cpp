#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t mkw_fifo_burst_0[32];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804B6EF0;

loc_804B6EF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = MemoryInline::FlatRead32((r2 + -2480));
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r31 + 1532));
}

loc_804B6F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6F2C;
    }
}

loc_804B6F28:
{
    ctx->lr = 0x804B6F2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B6C70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
}

loc_804B6F2C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804B6F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B700C;
    }
}

loc_804B6F38:
{
    r7 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = -872349696;
    r0 = 152;
    r6 = 0;
    r5 = MemoryInline::FlatRead16((r7 + 4));
    r4 = MemoryInline::FlatRead16((r7 + 6));
    r5 = (r5 * r4);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804B7004;
    }
}

loc_804B6F64:
{
    r3 = (r5 + 3);
    r7 = (r5 + -32);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_804B6F74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_804B6FDC;
    }
}

loc_804B6F78:
{
}

loc_804B6F7C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(3))) {
        goto loc_804B6F90;
    }
}

loc_804B6F84:
{
}

loc_804B6F88:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_804B6F90;
    }
}

loc_804B6F8C:
{
    r0 = 1;
}

loc_804B6F90:
{
}

loc_804B6F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6FDC;
    }
}

loc_804B6F98:
{
    r0 = (r7 + 31);
    r4 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r3 = -872349696;
    ctr = r0;
}

loc_804B6FB0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_804B6FDC;
    }
}

loc_804B6FB4:
{
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r6 = (r6 + 32);
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
        goto loc_804B6FB4;
    }
}

loc_804B6FDC:
{
    r0 = (r5 + 3);
    r4 = 0;
    r0 = (r0 - r6);
    r3 = -872349696;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    ctr = r0;
}

loc_804B6FF8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_804B7004;
    }
}

loc_804B6FFC:
{
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B6FFC;
    }
}

loc_804B7004:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
}

loc_804B700C:
{
    r3 = -872349696;
    r0 = (r29 | r28);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B6EF0 func_804B6EF0 preserves=true fpr_mask=0x00000000
