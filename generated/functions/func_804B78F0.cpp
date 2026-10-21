#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B78F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;

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

    MKW_GUEST_ENTER(0x804B78F0u);
    goto loc_804B78F0;

loc_804B78F0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r8 = 0;
    r6 = MemoryInline::FlatRead8((r3 + 3));
    r9 = -872349696;
    r10 = 97;
    r8_mrot_0 = (r0 & 255);
    r8_mdest_0 = (r8 & -256);
    r8 = (r8_mdest_0 | r8_mrot_0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r10));
    r0 = 79;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r8_mrot_1 = (r8_rot_0 & 65280);
    r8_mdest_1 = (r8 & -65281);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r5 = 0;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r8_mrot_2 = (r8_rot_1 & -16777216);
    r8_mdest_2 = (r8 & 16777215);
    r8 = (r8_mdest_2 | r8_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r5_mrot_0 = (r4 & 16777215);
    r5_mdest_0 = (r5 & -16777216);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r0 = 81;
    r8 = MemoryInline::FlatRead8((r3 + 2));
    r7 = 0;
    r6 = MemoryInline::FlatRead8((r3 + 1));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_0 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r4 = 80;
    r7_mrot_0 = (r8 & 255);
    r7_mdest_0 = (r7 & -256);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r7_mrot_1 = (r7_rot_0 & 65280);
    r7_mdest_1 = (r7 & -65281);
    r7 = (r7_mdest_1 | r7_mrot_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r10));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r7_mrot_2 = (r7_rot_1 & -16777216);
    r7_mdest_2 = (r7 & 16777215);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B78F0 func_804B78F0 preserves=true fpr_mask=0x00000000
