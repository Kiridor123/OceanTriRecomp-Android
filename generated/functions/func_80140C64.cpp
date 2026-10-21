#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80140C64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80140C64u);
    goto loc_80140C64;

loc_80140C64:
{
    r0 = (r3 & 255);
}

loc_80140C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_80140CDC;
    }
}

loc_80140C70:
{
    r0 = (r4 & 255);
}

loc_80140C78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80140CAC;
    }
}

loc_80140C7C:
{
}

loc_80140C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80140CB4;
    }
}

loc_80140C84:
{
}

loc_80140C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80140CBC;
    }
}

loc_80140C8C:
{
}

loc_80140C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80140CC4;
    }
}

loc_80140C94:
{
}

loc_80140C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80140CCC;
    }
}

loc_80140C9C:
{
}

loc_80140CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80140CD4;
    }
}

loc_80140CA4:
{
    r5 = 0;
    goto loc_80140CE0;
}

loc_80140CAC:
{
    r5 = 1;
    goto loc_80140CE0;
}

loc_80140CB4:
{
    r5 = 2;
    goto loc_80140CE0;
}

loc_80140CBC:
{
    r5 = 3;
    goto loc_80140CE0;
}

loc_80140CC4:
{
    r5 = 4;
    goto loc_80140CE0;
}

loc_80140CCC:
{
    r5 = 5;
    goto loc_80140CE0;
}

loc_80140CD4:
{
    r5 = 6;
    goto loc_80140CE0;
}

loc_80140CDC:
{
    r5 = 0;
}

loc_80140CE0:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 2200));
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80140C64 func_80140C64 preserves=true fpr_mask=0x00000000
