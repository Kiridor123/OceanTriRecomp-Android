#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
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

    goto loc_804B9E90;

loc_804B9E90:
{
}

loc_804B9E94:
{
    r7 = 0;
    r0 = 244;
    r7_mrot_0 = (r5 & 16777215);
    r7_mdest_0 = (r7 & -16777216);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7_mrot_1 = (r7_rot_0 & -16777216);
    r7_mdest_1 = (r7 & 16777215);
    r7 = (r7_mdest_1 | r7_mrot_1);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(17))) {
        goto loc_804B9EBC;
    }
}

loc_804B9EA8:
{
}

loc_804B9EAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(19))) {
        goto loc_804B9EC4;
    }
}

loc_804B9EB0:
{
}

loc_804B9EB4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(22))) {
        goto loc_804B9ECC;
    }
}

loc_804B9EB8:
{
    goto loc_804B9ED4;
}

loc_804B9EBC:
{
    r5 = 0;
    goto loc_804B9ED8;
}

loc_804B9EC4:
{
    r5 = 1;
    goto loc_804B9ED8;
}

loc_804B9ECC:
{
    r5 = 2;
    goto loc_804B9ED8;
}

loc_804B9ED4:
{
    r5 = 2;
}

loc_804B9ED8:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r6_mrot_0 = (r5 & 3);
    r6_mdest_0 = (r6 & -4);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r5 = 245;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6_mrot_1 = (r6_rot_0 & 12);
    r6_mdest_1 = (r6 & -13);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000BC gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9E90 func_804B9E90 preserves=true fpr_mask=0x00000000
