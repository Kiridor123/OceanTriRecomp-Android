#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80836BF0;

loc_80836BF0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80836BF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80836C04;
    }
}

loc_80836BFC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_80836C04:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80836C0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65279))) {
        goto loc_80836C18;
    }
}

loc_80836C10:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_80836C18:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80836C20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_80836C2C;
    }
}

loc_80836C24:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_80836C2C:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & 524280);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 16);
}

loc_80836C3C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80836C48;
    }
}

loc_80836C40:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_80836C48:
{
    r3 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r3 - r6);
    r3 = (r3 | ~r6);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836BF0 func_80836BF0 preserves=true fpr_mask=0x00000000
