#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mdest_4 = 0;
    uint32_t r12_mdest_5 = 0;
    uint32_t r12_mdest_6 = 0;
    uint32_t r12_mdest_7 = 0;
    uint32_t r12_mdest_8 = 0;
    uint32_t r12_mdest_9 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_mrot_4 = 0;
    uint32_t r12_mrot_5 = 0;
    uint32_t r12_mrot_6 = 0;
    uint32_t r12_mrot_7 = 0;
    uint32_t r12_mrot_8 = 0;
    uint32_t r12_mrot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;

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
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804B9580u);
    goto loc_804B9580;

loc_804B9580:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r12 = 0;
    r12_mrot_0 = (r4 & 3);
    r12_mdest_0 = (r12 & -4);
    r12 = (r12_mdest_0 | r12_mrot_0);
    r4 = (r3 + 16);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r12_mrot_1 = (r12_rot_0 & 12);
    r12_mdest_1 = (r12 & -13);
    r12 = (r12_mdest_1 | r12_mrot_1);
    r11 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r12_mrot_2 = (r12_rot_1 & 112);
    r12_mdest_2 = (r12 & -113);
    r12 = (r12_mdest_2 | r12_mrot_2);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = 0;
    r5 = MemoryInline::FlatRead8((r1 + 27));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(7));
    r12_mrot_3 = (r12_rot_2 & 384);
    r12_mdest_3 = (r12 & -385);
    r12 = (r12_mdest_3 | r12_mrot_3);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r12_mrot_4 = (r12_rot_3 & 7680);
    r12_mdest_4 = (r12 & -7681);
    r12 = (r12_mdest_4 | r12_mrot_4);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(13));
    r12_mrot_5 = (r12_rot_4 & 57344);
    r12_mdest_5 = (r12 & -57345);
    r12 = (r12_mdest_5 | r12_mrot_5);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r12_mrot_6 = (r12_rot_5 & 458752);
    r12_mdest_6 = (r12 & -458753);
    r12 = (r12_mdest_6 | r12_mrot_6);
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(19));
    r12_mrot_7 = (r12_rot_6 & 524288);
    r12_mdest_7 = (r12 & -524289);
    r12 = (r12_mdest_7 | r12_mrot_7);
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r12_mrot_8 = (r12_rot_7 & 1048576);
    r12_mdest_8 = (r12 & -1048577);
    r12 = (r12_mdest_8 | r12_mrot_8);
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r12_mrot_9 = (r12_rot_8 & -16777216);
    r12_mdest_9 = (r12 & 16777215);
    r12 = (r12_mdest_9 | r12_mrot_9);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r12));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FE gpr_write=0x0000183B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9580 func_804B9580 preserves=true fpr_mask=0x00000000
