#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA550(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

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

    goto loc_804BA550;

loc_804BA550:
{
    r10 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r3 + -3);
    r8 = (r3 + -2);
    r7 = -872349696;
    r9 = MemoryInline::FlatRead32((r10 + 544));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r9_mrot_0 = (r9_rot_0 & 2048);
    r9_mdest_0 = (r9 & -2049);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r8 = PPC_CntlzwInline(static_cast<uint32_t>(r8));
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r9_mrot_1 = (r3 & 1);
    r9_mdest_1 = (r9 & -2);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r9_mrot_2 = (r9_rot_1 & 2);
    r9_mdest_2 = (r9 & -3);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r0 = 0;
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r9_mrot_3 = (r9_rot_2 & 61440);
    r9_mdest_3 = (r9 & -61441);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r9_mrot_4 = (r9_rot_3 & 1792);
    r9_mdest_4 = (r9 & -1793);
    r9 = (r9_mdest_4 | r9_mrot_4);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r9_mrot_5 = (r9_rot_4 & 224);
    r9_mdest_5 = (r9 & -225);
    r9 = (r9_mdest_5 | r9_mrot_5);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r9));
    MemoryInline::FlatWrite32((r10 + 544), r9);
    MemoryInline::FlatWrite16((r10 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007C gpr_write=0x00000781 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA550 func_804BA550 preserves=true fpr_mask=0x00000000
