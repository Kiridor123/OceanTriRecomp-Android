#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9AC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;

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

    goto loc_804B9AC0;

loc_804B9AC0:
{
    r11 = MemoryInline::FlatRead32((r2 + -2480));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = -872349696;
    r8 = 97;
    r10 = (r11 + r0);
    r0 = 0;
    r9 = MemoryInline::FlatRead32((r10 + 448));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r9_mrot_0 = (r9_rot_0 & 57344);
    r9_mdest_0 = (r9 & -57345);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r9_mrot_1 = (r9_rot_1 & 7168);
    r9_mdest_1 = (r9 & -7169);
    r9 = (r9_mdest_1 | r9_mrot_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r9_mrot_2 = (r9_rot_2 & 896);
    r9_mdest_2 = (r9 & -897);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r9_mrot_3 = (r9_rot_3 & 112);
    r9_mdest_3 = (r9 & -113);
    r9 = (r9_mdest_3 | r9_mrot_3);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r9));
    MemoryInline::FlatWrite32((r10 + 448), r9);
    MemoryInline::FlatWrite16((r11 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FC gpr_write=0x00000F09 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9AC0 func_804B9AC0 preserves=true fpr_mask=0x00000000
