#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EE9DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800EE9DC;

loc_800EE9DC:
{
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EE9E8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_800EEA0C;
    }
}

loc_800EE9EC:
{
    r0 = (r3 + -2);
}

loc_800EE9F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800EEA3C;
    }
}

loc_800EE9F8:
{
}

loc_800EE9FC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(4))) {
        goto loc_800EEA48;
    }
}

loc_800EEA00:
{
}

loc_800EEA04:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(5))) {
        goto loc_800EEA44;
    }
}

loc_800EEA08:
{
    goto loc_800EEA48;
}

loc_800EEA0C:
{
    r3 = 613548032;
    r0 = (r3 + 18725);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r4 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r3 = (r0 * 14);
    r3 = (r4 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r5 = (r3 + r0);
    goto loc_800EEA48;
}

loc_800EEA3C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    goto loc_800EEA48;
}

loc_800EEA44:
{
    r5 = r4;
}

loc_800EEA48:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EE9DC func_800EE9DC preserves=true fpr_mask=0x00000000
