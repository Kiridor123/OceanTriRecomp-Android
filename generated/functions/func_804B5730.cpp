#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x804B5730u);
    goto loc_804B5730;

loc_804B5730:
{
    r5 = -872349696;
    r6 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    r4 = 80;
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = 96;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r6));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1317));
}

loc_804B576C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5778;
    }
}

loc_804B5770:
{
    r8 = 2;
    goto loc_804B5788;
}

loc_804B5778:
{
    r4 = MemoryInline::FlatRead8((r3 + 1316));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
}

loc_804B5788:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r6 = -872349696;
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r4 = 16;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r7 = (r7_rot_0 & 15);
    r0 = 4104;
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r5 = (r5 & 65535);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r7_subfic_ra_0 = r7;
    r7 = (33 - r7_subfic_ra_0);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r5_subfic_ra_0 = r5;
    r5 = (33 - r5_subfic_ra_0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_1 & 2147483647);
    r0 = 1;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -16);
    r5 = (r5 | r7);
    r4 = (r5 | r4);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B5730 func_804B5730 preserves=true fpr_mask=0x00000000
