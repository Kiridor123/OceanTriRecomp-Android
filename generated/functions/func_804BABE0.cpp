#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BABE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_804BABE0;

loc_804BABE0:
{
    r5 = -872349696;
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r0 = 11;
    r4 = 0;
    r4_mrot_0 = (r6 & 4095);
    r4_mdest_0 = (r4 & -4096);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4_mrot_1 = (r4_rot_0 & 61440);
    r4_mdest_1 = (r4 & -61441);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r4_mrot_2 = (r4_rot_1 & -65536);
    r4_mdest_2 = (r4 & 65535);
    r4 = (r4_mdest_2 | r4_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BABE0 func_804BABE0 preserves=true fpr_mask=0x00000000
