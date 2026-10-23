#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_804BA750;

loc_804BA750:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r5 = -872349696;
    r6 = 97;
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r8 + 548));
    r7_mrot_0 = (r4 & 255);
    r7_mdest_0 = (r7 & -256);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r7_mrot_1 = (r7_rot_0 & 256);
    r7_mdest_1 = (r7 & -257);
    r7 = (r7_mdest_1 | r7_mrot_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    MemoryInline::FlatWrite32((r8 + 548), r7);
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA750 func_804BA750 preserves=true fpr_mask=0x00000000
