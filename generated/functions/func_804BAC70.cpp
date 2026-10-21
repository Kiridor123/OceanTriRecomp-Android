#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAC70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x804BAC70u);
    goto loc_804BAC70;

loc_804BAC70:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = -872349696;
    r4 = (r0 - r4);
    r6 = 0;
    r0 = 40;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = (r4 + 1024);
    r0 = 8;
    r6_mrot_0 = (r4 & 4095);
    r6_mdest_0 = (r6 & -4096);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r6_mrot_1 = (r6_rot_0 & 61440);
    r6_mdest_1 = (r6 & -61441);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r6_mrot_2 = (r6_rot_1 & -65536);
    r6_mdest_2 = (r6 & 65535);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAC70 func_804BAC70 preserves=true fpr_mask=0x00000000
