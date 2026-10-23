#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9980(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804B9980;

loc_804B9980:
{
    r7 = MemoryInline::FlatRead32((r2 + -2480));
    r4 = -872349696;
    r5 = 97;
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r7 + 372));
    r6_mrot_0 = (r3 & 255);
    r6_mdest_0 = (r6 & -256);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r7 + 372), r6);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r7 + 372));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
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
// RECOMP_REGISTRATION base 0x804B9980 func_804B9980 preserves=true fpr_mask=0x00000000
