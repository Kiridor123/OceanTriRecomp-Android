#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9E50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
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

    MKW_GUEST_ENTER(0x804B9E50u);
    goto loc_804B9E50;

loc_804B9E50:
{
    r8 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r9 = -218103808;
    r9_mrot_0 = (r4 & 255);
    r9_mdest_0 = (r9 & -256);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r9_mrot_1 = (r9_rot_0 & 65280);
    r9_mdest_1 = (r9 & -65281);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r0 = 0;
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r9_mrot_2 = (r9_rot_1 & 458752);
    r9_mdest_2 = (r9 & -458753);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(19));
    r9_mrot_3 = (r9_rot_2 & 3670016);
    r9_mdest_3 = (r9 & -3670017);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(22));
    r9_mrot_4 = (r9_rot_3 & 12582912);
    r9_mdest_4 = (r9 & -12582913);
    r9 = (r9_mdest_4 | r9_mrot_4);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r9));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FC gpr_write=0x00000311 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9E50 func_804B9E50 preserves=true fpr_mask=0x00000000
