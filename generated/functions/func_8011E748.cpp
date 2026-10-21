#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8011E748_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[4] = arg_r4;

    MKW_GUEST_ENTER(0x8011E748u);
    goto loc_8011E748;

loc_8011E748:
{
    r5 = MemoryInline::FlatRead32((r3 + 1956));
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8011E6BCu>(ctx);
    ctx->gpr[5] = r5;
    return ctx->gpr[4];
}

}

extern "C" void func_8011E748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8011E748_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E748 func_8011E748 preserves=true fpr_mask=0x00000000
