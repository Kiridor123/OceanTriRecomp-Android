#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x804B9C90u);
    goto loc_804B9C90;

loc_804B9C90:
{
    r9 = MemoryInline::FlatRead32(r4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r4 = -872349696;
    r5 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r0 = (r3 + 224);
    r7 = 8;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r8 = (r8_rot_0 & -16777216);
    r0 = (r3 + 225);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r8_mrot_0 = (r8_rot_1 & 255);
    r8_mdest_0 = (r8 & -256);
    r8 = (r8_mdest_0 | r8_mrot_0);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r8_mrot_1 = (r8_rot_2 & 1044480);
    r8_mdest_1 = (r8 & -1044481);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & -16777216);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r8_mrot_2 = (r8_rot_3 & 15728640);
    r8_mdest_2 = (r8 & -15728641);
    r8 = (r8_mdest_2 | r8_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r6_mrot_0 = (r6_rot_1 & 255);
    r6_mdest_0 = (r6 & -256);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r0 = 0;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r6_mrot_1 = (r6_rot_2 & 1044480);
    r6_mdest_1 = (r6 & -1044481);
    r6 = (r6_mdest_1 | r6_mrot_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r6_mrot_2 = (r6_rot_3 & 15728640);
    r6_mdest_2 = (r6 & -15728641);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9C90 func_804B9C90 preserves=true fpr_mask=0x00000000
