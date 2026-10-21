#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B99E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x804B99E0u);
    goto loc_804B99E0;

loc_804B99E0:
{
}

loc_804B99E4:
{
    r5 = 0x80620000u;
    r5 = (r5 + -19232);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B9A08;
    }
}

loc_804B99F0:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r4 = (r5 + 0);
    r0 = (r5 + 40);
    r8 = (r4 + r6);
    r9 = (r0 + r6);
    goto loc_804B9A1C;
}

loc_804B9A08:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r4 = (r5 + 20);
    r0 = (r5 + 60);
    r8 = (r4 + r6);
    r9 = (r0 + r6);
}

loc_804B9A1C:
{
    r7 = MemoryInline::FlatRead32((r2 + -2480));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32(r8);
    r4 = -872349696;
    r6 = (r7 + r0);
    r5 = 97;
    r8 = MemoryInline::FlatRead32((r6 + 384));
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r8 = (r8 & -16777216);
    r8_mrot_0 = (r3 & 16777215);
    r8_mdest_0 = (r8 & -16777216);
    r8 = (r8_mdest_0 | r8_mrot_0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    MemoryInline::FlatWrite32((r6 + 384), r8);
    r8 = MemoryInline::FlatRead32((r6 + 448));
    r3 = MemoryInline::FlatRead32(r9);
    r8 = (r8 & -16777201);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r8_mrot_1 = (r3 & 16777200);
    r8_mdest_1 = (r8 & -16777201);
    r8 = (r8_mdest_1 | r8_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    MemoryInline::FlatWrite32((r6 + 448), r8);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B99E0 func_804B99E0 preserves=true fpr_mask=0x00000000
