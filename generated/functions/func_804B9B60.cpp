#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9B60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mdest_3 = 0;
    uint32_t r11_mdest_4 = 0;
    uint32_t r11_mdest_5 = 0;
    uint32_t r11_mdest_6 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_mrot_3 = 0;
    uint32_t r11_mrot_4 = 0;
    uint32_t r11_mrot_5 = 0;
    uint32_t r11_mrot_6 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;

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
    uint32_t r11 = ctx->gpr[11];

    goto loc_804B9B60;

loc_804B9B60:
{
    r10 = MemoryInline::FlatRead32((r2 + -2480));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
}

loc_804B9B6C:
{
    r9 = (r10 + r0);
    r11 = MemoryInline::FlatRead32((r9 + 448));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r11_mrot_0 = (r11_rot_0 & 262144);
    r11_mdest_0 = (r11 & -262145);
    r11 = (r11_mdest_0 | r11_mrot_0);
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_804B9B88;
    }
}

loc_804B9B7C:
{
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r11_mrot_1 = (r11_rot_1 & 3145728);
    r11_mdest_1 = (r11 & -3145729);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r11_mrot_2 = (r11_rot_2 & 196608);
    r11_mdest_2 = (r11 & -196609);
    r11 = (r11_mdest_2 | r11_mrot_2);
    goto loc_804B9B90;
}

loc_804B9B88:
{
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r11_mrot_3 = (r11_rot_3 & 3145728);
    r11_mdest_3 = (r11 & -3145729);
    r11 = (r11_mdest_3 | r11_mrot_3);
    r11 = (r11 | 196608);
}

loc_804B9B90:
{
    r3 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(19));
    r11_mrot_5 = (r11_rot_5 & 524288);
    r11_mdest_5 = (r11 & -524289);
    r11 = (r11_mdest_5 | r11_mrot_5);
    r11_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(22));
    r11_mrot_6 = (r11_rot_6 & 12582912);
    r11_mdest_6 = (r11 & -12582913);
    r11 = (r11_mdest_6 | r11_mrot_6);
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r11));
    MemoryInline::FlatWrite32((r9 + 448), r11);
    MemoryInline::FlatWrite16((r10 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000005FD gpr_write=0x00000E09 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9B60 func_804B9B60 preserves=true fpr_mask=0x00000000
