#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004DDD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_subfc_min_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8004DDD8u);
    goto loc_8004DDD8;

loc_8004DDD8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead16((r3 + 15844));
}

loc_8004DDE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004DDF0;
    }
}

loc_8004DDE8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    return;
}

loc_8004DDF0:
{
    r0 = 30;
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r3 + r0_ca_0);
    r3 = (r3 - r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004DDD8 func_8004DDD8 preserves=true fpr_mask=0x00000000
