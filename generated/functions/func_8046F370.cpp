#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8046F370_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8046F370u);
    goto loc_8046F370;

loc_8046F370:
{
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8046F370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8046F370_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046F370 func_8046F370 preserves=true fpr_mask=0x00000000
