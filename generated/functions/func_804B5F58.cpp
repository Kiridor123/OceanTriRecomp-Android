#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5F58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804B5F58;

loc_804B5F58:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804B5F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804B5F80;
    }
}

loc_804B5F6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_804B5F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5F80;
    }
}

loc_804B5F78:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804B5F80:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_3 & 7);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_804B5F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804B5FA0;
    }
}

loc_804B5F94:
{
}

loc_804B5F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804B5FA8;
    }
}

loc_804B5F9C:
{
    goto loc_804B5FB0;
}

loc_804B5FA0:
{
    r0 = 6;
    goto loc_804B5FB4;
}

loc_804B5FA8:
{
    r0 = 14;
    goto loc_804B5FB4;
}

loc_804B5FB0:
{
    r0 = 0;
}

loc_804B5FB4:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000E9 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5F58 func_804B5F58 preserves=true fpr_mask=0x00000000
