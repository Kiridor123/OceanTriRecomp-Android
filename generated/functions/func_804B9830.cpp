#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x804B9830u);
    goto loc_804B9830;

loc_804B9830:
{
}

loc_804B9834:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(255))) {
        goto loc_804B983C;
    }
}

loc_804B9838:
{
    r5 = 0;
}

loc_804B983C:
{
}

loc_804B9840:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(255))) {
        goto loc_804B9848;
    }
}

loc_804B9844:
{
    r4 = 0;
}

loc_804B9848:
{
}

loc_804B984C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B986C;
    }
}

loc_804B9850:
{
}

loc_804B9854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804B9884;
    }
}

loc_804B9858:
{
}

loc_804B985C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804B989C;
    }
}

loc_804B9860:
{
}

loc_804B9864:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804B98B4;
    }
}

loc_804B9868:
{
    goto loc_804B98C8;
}

loc_804B986C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 368));
    r0_mrot_7 = (r5 & 7);
    r0_mdest_7 = (r0 & -8);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0_mrot_8 = (r0_rot_7 & 56);
    r0_mdest_8 = (r0 & -57);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r3 + 368), r0);
    goto loc_804B98C8;
}

loc_804B9884:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 368));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0_mrot_5 = (r0_rot_5 & 448);
    r0_mdest_5 = (r0 & -449);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_6 = (r0_rot_6 & 3584);
    r0_mdest_6 = (r0 & -3585);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite32((r3 + 368), r0);
    goto loc_804B98C8;
}

loc_804B989C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 368));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r0_mrot_3 = (r0_rot_3 & 28672);
    r0_mdest_3 = (r0 & -28673);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_4 = (r0_rot_4 & 229376);
    r0_mdest_4 = (r0 & -229377);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
    goto loc_804B98C8;
}

loc_804B98B4:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 368));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r0_mrot_1 = (r0_rot_1 & 1835008);
    r0_mdest_1 = (r0 & -1835009);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r0_mrot_2 = (r0_rot_2 & 14680064);
    r0_mdest_2 = (r0 & -14680065);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_804B98C8:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = MemoryInline::FlatRead32((r5 + 368));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r5 + 1532));
    r3 = (r3 | 3);
    MemoryInline::FlatWrite32((r5 + 1532), r3);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9830 func_804B9830 preserves=true fpr_mask=0x00000000
