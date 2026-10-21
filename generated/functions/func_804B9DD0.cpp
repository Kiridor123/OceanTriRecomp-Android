#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9DD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804B9DD0u);
    goto loc_804B9DD0;

loc_804B9DD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r11 = (r11_rot_0 & -8);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & -2);
    r8 = -872349696;
    r9 = 97;
    r3 = (r12 + 1);
    r0 = 0;
    r30 = MemoryInline::FlatRead32((r2 + -2480));
    r31 = (r30 + 512);
    r31_addr_0 = (r31 + r11);
    r10 = MemoryInline::FlatRead32(r31_addr_0);
    r10_mrot_0 = (r4 & 3);
    r10_mdest_0 = (r10 & -4);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10_mrot_1 = (r10_rot_0 & 12);
    r10_mdest_1 = (r10 & -13);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r31_addr_1 = (r31 + r11);
    MemoryInline::FlatWrite32(r31_addr_1, r10);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r31_addr_2 = (r31 + r11);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    r31_addr_3 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_3);
    r3_mrot_0 = (r6 & 3);
    r3_mdest_0 = (r3 & -4);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3_mrot_1 = (r3_rot_0 & 12);
    r3_mdest_1 = (r3 & -13);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r31_addr_4 = (r31 + r4);
    MemoryInline::FlatWrite32(r31_addr_4, r3);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r9));
    r31_addr_5 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_5);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FE gpr_write=0x00001F1B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9DD0 func_804B9DD0 preserves=true fpr_mask=0x00000000
