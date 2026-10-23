#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EE918(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800EE918;

loc_800EE918:
{
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EE924:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_800EE948;
    }
}

loc_800EE928:
{
    r0 = (r3 + -2);
}

loc_800EE930:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800EE950;
    }
}

loc_800EE934:
{
}

loc_800EE938:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(4))) {
        goto loc_800EE95C;
    }
}

loc_800EE93C:
{
}

loc_800EE940:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(5))) {
        goto loc_800EE958;
    }
}

loc_800EE944:
{
    goto loc_800EE95C;
}

loc_800EE948:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r5 = (r5_rot_2 & 2147483647);
    goto loc_800EE95C;
}

loc_800EE950:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    goto loc_800EE95C;
}

loc_800EE958:
{
    r5 = r4;
}

loc_800EE95C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EE918 func_800EE918 preserves=true fpr_mask=0x00000000
