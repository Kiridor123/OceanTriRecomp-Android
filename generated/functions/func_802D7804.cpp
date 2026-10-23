#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D7804_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
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

    goto loc_802D7804;

loc_802D7804:
{
    r0 = (r3 & 255);
}

loc_802D780C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(13))) {
        goto loc_802D7828;
    }
}

loc_802D7810:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 23528);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802D7828u:
        goto loc_802D7828;
        break;
    case 0x802D7830u:
        goto loc_802D7830;
        break;
    case 0x802D7838u:
        goto loc_802D7838;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_802D7828:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802D7830:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_802D7838:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_802D7804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D7804_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D7804 func_802D7804 preserves=true fpr_mask=0x00000000
