#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8ED0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x804B8ED0u);
    goto loc_804B8ED0;

loc_804B8ED0:
{
}

loc_804B8ED4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804B8EEC;
    }
}

loc_804B8ED8:
{
}

loc_804B8EDC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_804B8EF4;
    }
}

loc_804B8EE0:
{
}

loc_804B8EE4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_804B8EFC;
    }
}

loc_804B8EE8:
{
    goto loc_804B8F00;
}

loc_804B8EEC:
{
    r6 = 3;
    goto loc_804B8F00;
}

loc_804B8EF4:
{
    r6 = 4;
    goto loc_804B8F00;
}

loc_804B8EFC:
{
    r6 = 5;
}

loc_804B8F00:
{
}

loc_804B8F04:
{
    r0 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0_mrot_0 = (r0_rot_0 & 32767);
    r0_mdest_0 = (r0 & -32768);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r0_mrot_1 = (r0_rot_1 & 229376);
    r0_mdest_1 = (r0 & -229377);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_2 = (r0_rot_2 & 1835008);
    r0_mdest_2 = (r0 & -1835009);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r3, r0);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804B8F38;
    }
}

loc_804B8F1C:
{
}

loc_804B8F20:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1))) {
        goto loc_804B8F40;
    }
}

loc_804B8F24:
{
}

loc_804B8F28:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(2))) {
        goto loc_804B8F48;
    }
}

loc_804B8F2C:
{
}

loc_804B8F30:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(3))) {
        goto loc_804B8F50;
    }
}

loc_804B8F34:
{
    goto loc_804B8F54;
}

loc_804B8F38:
{
    r6 = 3;
    goto loc_804B8F54;
}

loc_804B8F40:
{
    r6 = 4;
    goto loc_804B8F54;
}

loc_804B8F48:
{
    r6 = 5;
    goto loc_804B8F54;
}

loc_804B8F50:
{
    r6 = 0;
}

loc_804B8F54:
{
    r5 = 0;
    r0 = 1;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r5_mrot_0 = (r5_rot_0 & 32767);
    r5_mdest_0 = (r5 & -32768);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r5_mrot_1 = (r5_rot_1 & 229376);
    r5_mdest_1 = (r5 & -229377);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r5_mrot_2 = (r5_rot_2 & 1835008);
    r5_mdest_2 = (r5 & -1835009);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8ED0 func_804B8ED0 preserves=true fpr_mask=0x00000000
