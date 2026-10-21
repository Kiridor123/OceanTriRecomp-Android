#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80315A30u);
    goto loc_80315A30;

loc_80315A30:
{
    r3 = (r3 & 255);
    r0 = (r3 & 1);
}

loc_80315A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315A84;
    }
}

loc_80315A40:
{
    r0 = (r3 & 32);
}

loc_80315A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315A68;
    }
}

loc_80315A4C:
{
    r0 = (r3 & 2);
}

loc_80315A54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315A60;
    }
}

loc_80315A58:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315A60:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315A68:
{
    r0 = (r3 & 2);
}

loc_80315A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315A7C;
    }
}

loc_80315A74:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315A7C:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315A84:
{
    r0 = (r3 & 32);
}

loc_80315A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315AAC;
    }
}

loc_80315A90:
{
    r0 = (r3 & 2);
}

loc_80315A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315AA4;
    }
}

loc_80315A9C:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315AA4:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80315AAC:
{
    r3 = (r3 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80315A30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80315A30_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80315A30 func_80315A30 preserves=true fpr_mask=0x00000000
