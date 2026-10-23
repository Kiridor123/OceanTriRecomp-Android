#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802CC160_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t ctr = ctx->ctr;

    goto loc_802CC160;

loc_802CC160:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -32);
}

loc_802CC16C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_802CC208;
    }
}

loc_802CC170:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 21676);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802CC188u:
        goto loc_802CC188;
        break;
    case 0x802CC190u:
        goto loc_802CC190;
        break;
    case 0x802CC198u:
        goto loc_802CC198;
        break;
    case 0x802CC1A0u:
        goto loc_802CC1A0;
        break;
    case 0x802CC208u:
        goto loc_802CC208;
        break;
    case 0x802CC1A8u:
        goto loc_802CC1A8;
        break;
    case 0x802CC1B0u:
        goto loc_802CC1B0;
        break;
    case 0x802CC1B8u:
        goto loc_802CC1B8;
        break;
    case 0x802CC1C0u:
        goto loc_802CC1C0;
        break;
    case 0x802CC1C8u:
        goto loc_802CC1C8;
        break;
    case 0x802CC1D0u:
        goto loc_802CC1D0;
        break;
    case 0x802CC1D8u:
        goto loc_802CC1D8;
        break;
    case 0x802CC1E0u:
        goto loc_802CC1E0;
        break;
    case 0x802CC1E8u:
        goto loc_802CC1E8;
        break;
    case 0x802CC1F0u:
        goto loc_802CC1F0;
        break;
    case 0x802CC1F8u:
        goto loc_802CC1F8;
        break;
    case 0x802CC200u:
        goto loc_802CC200;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_802CC188:
{
    r3 = 61;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC190:
{
    r3 = 62;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC198:
{
    r3 = 63;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1A0:
{
    r3 = 64;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1A8:
{
    r3 = 66;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1B0:
{
    r3 = 67;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1B8:
{
    r3 = 68;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1C0:
{
    r3 = 69;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1C8:
{
    r3 = 71;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1D0:
{
    r3 = 72;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1D8:
{
    r3 = 73;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1E0:
{
    r3 = 74;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1E8:
{
    r3 = 76;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1F0:
{
    r3 = 77;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC1F8:
{
    r3 = 78;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC200:
{
    r3 = 79;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802CC208:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_802CC160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802CC160_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802CC160 func_802CC160 preserves=true fpr_mask=0x00000000
