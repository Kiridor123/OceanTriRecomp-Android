#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EE8CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800EE8CC;

loc_800EE8CC:
{
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EE8D8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_800EE8FC;
    }
}

loc_800EE8DC:
{
    r0 = (r3 + -2);
}

loc_800EE8E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800EE904;
    }
}

loc_800EE8E8:
{
}

loc_800EE8EC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(4))) {
        goto loc_800EE910;
    }
}

loc_800EE8F0:
{
}

loc_800EE8F4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(5))) {
        goto loc_800EE90C;
    }
}

loc_800EE8F8:
{
    goto loc_800EE910;
}

loc_800EE8FC:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    goto loc_800EE910;
}

loc_800EE904:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r5 = (r5_rot_1 & 2147483647);
    goto loc_800EE910;
}

loc_800EE90C:
{
    r5 = r4;
}

loc_800EE910:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EE8CC func_800EE8CC preserves=true fpr_mask=0x00000000
