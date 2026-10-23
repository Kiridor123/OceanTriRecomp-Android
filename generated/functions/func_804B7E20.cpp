#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_804B7E20;

loc_804B7E20:
{
    r5 = -872349696;
    r6 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r3 = 1426063360;
    r0 = (r3 + 1023);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r3 = 1442840576;
    r4 = (r3 + 1023);
    r3 = MemoryHw::FlatRead32((r2 + -2480));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7E20 func_804B7E20 preserves=true fpr_mask=0x00000000
