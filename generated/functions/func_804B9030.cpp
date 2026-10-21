#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_rot_0 = 0;

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

    MKW_GUEST_ENTER(0x804B9030u);
    goto loc_804B9030;

loc_804B9030:
{
    r11 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = -872349696;
    r10 = (r11 + r0);
    r9 = (r11 + r6);
    r3 = MemoryInline::FlatRead32((r10 + 1380));
    r4 = 97;
    r8 = MemoryInline::FlatRead32((r9 + 264));
    r0 = 0;
    r6 = (r3 & 1023);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r3 = (r3_rot_0 & 1023);
    r8_mrot_0 = (r6 & 65535);
    r8_mdest_0 = (r8 & -65536);
    r8 = (r8_mdest_0 | r8_mrot_0);
    MemoryInline::FlatWrite32((r9 + 264), r8);
    r7 = MemoryInline::FlatRead32((r9 + 296));
    r7_mrot_0 = (r3 & 65535);
    r7_mdest_0 = (r7 & -65536);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWrite32((r9 + 296), r7);
    r3 = MemoryInline::FlatRead32((r10 + 1412));
    r6 = (r3 & 3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 3);
    r6 = (r6 + -1);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    r3 = (r3 + -1);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(11));
    r8_mrot_1 = (r8_rot_0 & 65536);
    r8_mdest_1 = (r8 & -65537);
    r8 = (r8_mdest_1 | r8_mrot_1);
    MemoryInline::FlatWrite32((r9 + 264), r8);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r7_mrot_1 = (r7_rot_0 & 65536);
    r7_mdest_1 = (r7 & -65537);
    r7 = (r7_mdest_1 | r7_mrot_1);
    MemoryInline::FlatWrite32((r9 + 296), r7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r9 + 264));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r9 + 296));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r11 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9030 func_804B9030 preserves=true fpr_mask=0x00000000
