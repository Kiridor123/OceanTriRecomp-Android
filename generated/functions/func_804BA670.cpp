#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_804BA670;

loc_804BA670:
{
    r9 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = 0x80620000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r6 = (r6 + -19112);
    r8 = MemoryInline::FlatRead32((r9 + 556));
    r6_addr_0 = (r6 + r7);
    r0 = MemoryInline::FlatRead32(r6_addr_0);
    r5 = r8;
    r5_mrot_0 = (r0 & 7);
    r5_mdest_0 = (r5 & -8);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r5_mrot_1 = (r5_rot_0 & 56);
    r5_mdest_1 = (r5 & -57);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r9 + 556), r5);
}

loc_804BA69C:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r5))) {
        goto loc_804BA6D4;
    }
}

loc_804BA6A0:
{
    r5 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r3 + -2);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + 556));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + 596));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_1 & 512);
    r0_mdest_1 = (r0 & -513);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r9 + 596), r0);
    r0 = MemoryInline::FlatRead32((r9 + 1532));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r9 + 1532), r0);
}

loc_804BA6D4:
{
    r6_addr_1 = (r6 + r7);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
}

loc_804BA6DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804BA70C;
    }
}

loc_804BA6E0:
{
    r0 = (r3 + -4);
    r4 = MemoryInline::FlatRead32((r9 + 548));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r4_mrot_1 = (r4_rot_1 & 1536);
    r4_mdest_1 = (r4 & -1537);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r3 = -872349696;
    r0 = 66;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_2 & -16777216);
    r4_mdest_2 = (r4 & 16777215);
    r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32((r9 + 548), r4);
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + 548));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804BA70C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x000002FD gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA670 func_804BA670 preserves=true fpr_mask=0x00000000
