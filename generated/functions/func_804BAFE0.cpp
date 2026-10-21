#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x804BAFE0u);
    goto loc_804BAFE0;

loc_804BAFE0:
{
}

loc_804BAFE4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(5))) {
        goto loc_804BB024;
    }
}

loc_804BAFE8:
{
    r5 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 48;
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4120;
    r4 = MemoryInline::FlatRead32((r6 + 128));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 128));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB05C;
}

loc_804BB024:
{
    r5 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 64;
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4121;
    r4 = MemoryInline::FlatRead32((r6 + 132));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 132));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804BB05C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAFE0 func_804BAFE0 preserves=true fpr_mask=0x00000000
