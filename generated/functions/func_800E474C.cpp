#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E474C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t ctr = ctx->ctr;

    goto loc_800E474C;

loc_800E474C:
{
    r0 = (r3 & 255);
}

loc_800E4754:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E47B0;
    }
}

loc_800E4758:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31416);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E4770u:
        goto loc_800E4770;
        break;
    case 0x800E4778u:
        goto loc_800E4778;
        break;
    case 0x800E4780u:
        goto loc_800E4780;
        break;
    case 0x800E4788u:
        goto loc_800E4788;
        break;
    case 0x800E4790u:
        goto loc_800E4790;
        break;
    case 0x800E4798u:
        goto loc_800E4798;
        break;
    case 0x800E47A0u:
        goto loc_800E47A0;
        break;
    case 0x800E47A8u:
        goto loc_800E47A8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_800E4770:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E4778:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E4780:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E4788:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E4790:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E4798:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E47A0:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E47A8:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800E47B0:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_800E474C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E474C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E474C func_800E474C preserves=true fpr_mask=0x00000000
