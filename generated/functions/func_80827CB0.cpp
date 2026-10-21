#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80827CB0u);
    goto loc_80827CB0;

loc_80827CB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r6 = 0x80840000u;
    r6 = (r6 + 17664);
    r3 = 0;
    ctr = r0;
}

loc_80827CC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80827CF4;
    }
}

loc_80827CCC:
{
    // nop
}

loc_80827CD0:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80827CD8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80827CE8;
    }
}

loc_80827CDC:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80827CE4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_80827CE8:
{
    r6 = (r6 + 8);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827CD0;
    }
}

loc_80827CF4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827CB0 func_80827CB0 preserves=true fpr_mask=0x00000000
