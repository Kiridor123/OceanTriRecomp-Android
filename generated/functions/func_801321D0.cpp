#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801321D0_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_801321D0;

loc_801321D0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2220), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_801321D0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801321D0_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801321D0 func_801321D0 preserves=true fpr_mask=0x00000000
