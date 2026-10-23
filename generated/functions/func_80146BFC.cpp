#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80146BFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80146BFC;

loc_80146BFC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3 = 0x806A0000u;
    r0 = (r3 + 27152);
    r4 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r4 + 3888));
}

loc_80146C18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80146C24;
    }
}

loc_80146C1C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3888), static_cast<uint8_t>(r0));
}

loc_80146C24:
{
    r3 = MemoryInline::FlatRead8((r4 + 3889));
}

loc_80146C2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80146C38;
    }
}

loc_80146C30:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3889), static_cast<uint8_t>(r0));
}

loc_80146C38:
{
    r3 = MemoryInline::FlatRead8((r4 + 3890));
}

loc_80146C40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80146C4C;
    }
}

loc_80146C44:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3890), static_cast<uint8_t>(r0));
}

loc_80146C4C:
{
    r3 = MemoryInline::FlatRead8((r4 + 3891));
}

loc_80146C54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80146C58:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3891), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80146BFC func_80146BFC preserves=true fpr_mask=0x00000000
