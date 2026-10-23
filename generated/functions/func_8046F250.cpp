#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046F250_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8046F250;

loc_8046F250:
{
    r0 = MemoryInline::FlatRead32((r13 + -16144));
}

loc_8046F258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F278;
    }
}

loc_8046F25C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_8046F278:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_8046F250(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8046F250_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046F250 func_8046F250 preserves=true fpr_mask=0x00000000
