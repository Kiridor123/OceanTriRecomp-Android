#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055A464_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8055A464;

loc_8055A464:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8055A464(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8055A464_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055A464 func_8055A464 preserves=true fpr_mask=0x00000000
