#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8015D620_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
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

    MKW_GUEST_ENTER(0x8015D620u);
    goto loc_8015D620;

loc_8015D620:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8015D628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8015D66C;
    }
}

loc_8015D62C:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -7);
}

loc_8015D638:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(29))) {
        goto loc_8015D664;
    }
}

loc_8015D63C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 25692);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8015D65Cu:
        goto loc_8015D65C;
        break;
    case 0x8015D654u:
        goto loc_8015D654;
        break;
    case 0x8015D664u:
        goto loc_8015D664;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_8015D654:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_8015D65C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_8015D664:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_8015D66C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8015D620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8015D620_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015D620 func_8015D620 preserves=true fpr_mask=0x00000000
