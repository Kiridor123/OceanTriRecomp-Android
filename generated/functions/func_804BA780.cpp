#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA780(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_804BA780;

loc_804BA780:
{
    r5 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r0 = 68;
    r6_mrot_0 = (r4 & 1);
    r6_mdest_0 = (r6 & -2);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r6_mrot_1 = (r6_rot_0 & 2);
    r6_mdest_1 = (r6 & -3);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = MemoryHw::FlatRead32((r2 + -2480));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = 0;
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA780 func_804BA780 preserves=true fpr_mask=0x00000000
