#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804B7210u);
    goto loc_804B7210;

loc_804B7210:
{
    r7 = MemoryHw::FlatRead32((r2 + -2480));
    r5 = -872349696;
    r6 = 97;
    r4 = -33030144;
    r0 = MemoryHw::FlatRead32((r7 + 596));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(19));
    r0_mrot_0 = (r0_rot_0 & 524288);
    r0_mdest_0 = (r0 & -524289);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryHw::FlatWrite32((r7 + 596), r0);
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r3 = MemoryHw::FlatRead32((r7 + 596));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryHw::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7210 func_804B7210 preserves=true fpr_mask=0x00000000
