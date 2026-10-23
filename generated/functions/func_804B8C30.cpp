#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t mkw_fifo_burst_0[16];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804B8C30;

loc_804B8C30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r11 = (r13 + -20408);
    r10 = (r13 + -20400);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r9 = (r13 + -20392);
    r12 = MemoryInline::FlatRead32(r3);
    r8 = (r13 + -20384);
    r7 = (r13 + -20376);
    r6 = (r13 + -20368);
    r31 = r5;
    r30 = r3;
    r29 = -872349696;
    r28 = 97;
    r11_addr_0 = (r11 + r5);
    r0 = MemoryInline::FlatRead8(r11_addr_0);
    r11 = MemoryInline::FlatRead32((r3 + 4));
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r12_mrot_0 = (r12_rot_0 & -16777216);
    r12_mdest_0 = (r12 & 16777215);
    r12 = (r12_mdest_0 | r12_mrot_0);
    r10_addr_0 = (r10 + r5);
    r0 = MemoryInline::FlatRead8(r10_addr_0);
    r9_addr_0 = (r9 + r5);
    r10 = MemoryInline::FlatRead8(r9_addr_0);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r11_mrot_0 = (r11_rot_0 & -16777216);
    r11_mdest_0 = (r11 & 16777215);
    r11 = (r11_mdest_0 | r11_mrot_0);
    r7_addr_0 = (r7 + r5);
    r0 = MemoryInline::FlatRead8(r7_addr_0);
    r8_addr_0 = (r8 + r5);
    r8 = MemoryInline::FlatRead8(r8_addr_0);
    r6_addr_0 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_0);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r9_mrot_0 = (r9_rot_0 & -16777216);
    r9_mdest_0 = (r9 & 16777215);
    r9 = (r9_mdest_0 | r9_mrot_0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r28));
    r7 = MemoryInline::FlatRead32(r4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r7_mrot_0 = (r7_rot_0 & -16777216);
    r7_mdest_0 = (r7 & 16777215);
    r7 = (r7_mdest_0 | r7_mrot_0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_0 = (r6_rot_0 & -16777216);
    r6_mdest_0 = (r6 & 16777215);
    r6 = (r6_mdest_0 | r6_mrot_0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r3 + 31));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r11));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804B8CCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r28);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_0 = (r0_rot_0 & -16777216);
    r0_mdest_0 = (r0 & 16777215);
    r0 = (r0_mdest_0 | r0_mrot_0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r28);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r28);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[15] = static_cast<uint8_t>(r28);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 16u);
    MemoryInline::FlatWrite32(r3, r12);
    MemoryInline::FlatWrite32((r3 + 4), r11);
    MemoryInline::FlatWrite32((r3 + 8), r9);
    MemoryInline::FlatWrite32(r4, r7);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B8D44;
    }
}

loc_804B8D10:
{
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r4 + 1308));
    ctr = r12;
    ctx->lr = 0x804B8D24u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r13 + -20360);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4_addr_1 = (r4 + r31);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_1 & -16777216);
    r0_mdest_1 = (r0 & 16777215);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B8D44:
{
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r4 = (r6 + r3);
    r3 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r4 + 1380), r5);
    MemoryInline::FlatWrite32((r4 + 1412), r3);
    r3 = MemoryInline::FlatRead32((r6 + 1532));
    r3 = (r3 | 1);
    MemoryInline::FlatWrite32((r6 + 1532), r3);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B8C30 func_804B8C30 preserves=true fpr_mask=0x00000000
