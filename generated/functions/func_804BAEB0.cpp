#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAEB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_804BAEB0;

loc_804BAEB0:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r4 = (r4 + 342);
    r9 = (r3 + 342);
    r7 = -872349696;
    r0 = MemoryInline::FlatRead32((r8 + 328));
    r0_mrot_0 = (r4 & 2047);
    r0_mdest_0 = (r0 & -2048);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r0_mrot_1 = (r0_rot_0 & 8384512);
    r0_mdest_1 = (r0 & -8384513);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r8 + 328), r0);
    r6 = (r4 + r6);
    r3 = (r9 + r5);
    r0 = (r6 + -1);
    r5 = MemoryInline::FlatRead32((r8 + 332));
    r5_mrot_0 = (r0 & 2047);
    r5_mdest_0 = (r5 & -2048);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r3 = (r3 + -1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r5_mrot_1 = (r5_rot_0 & 8384512);
    r5_mdest_1 = (r5 & -8384513);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r8 + 332), r5);
    r4 = 97;
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r8 + 328));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r8 + 332));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x0000007C gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAEB0 func_804BAEB0 preserves=true fpr_mask=0x00000000
