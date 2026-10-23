#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;

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

    goto loc_804B5E80;

loc_804B5E80:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r9 = 0;
    r6 = 8;
    r5 = -872349696;
    r10 = MemoryInline::FlatRead8((r8 + 1531));
    r7 = r8;
}

loc_804B5E98:
{
    r0 = (r10 & 1);
}

loc_804B5E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5EDC;
    }
}

loc_804B5EA0:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = (r9 | 112);
    r3 = (r9 | 128);
    r0 = (r9 | 144);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r7 + 28));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r7 + 60));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r7 + 92));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B5EDC:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(31));
    r10 = (r10_rot_2 & 2147483647);
}

loc_804B5EE0:
{
    r9 = (r9 + 1);
    r7 = (r7 + 4);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804B5E98;
    }
}

loc_804B5EEC:
{
    r3 = -872349696;
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r8 + 1531), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FD gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5E80 func_804B5E80 preserves=true fpr_mask=0x00000000
