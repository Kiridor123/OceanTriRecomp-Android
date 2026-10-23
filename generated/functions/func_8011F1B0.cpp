#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011F1B0_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8011F1B0;

loc_8011F1B0:
{
    r6 = MemoryInline::FlatRead8((r3 + 2048));
    r5 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r3 + 2048), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_8011F1B0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8011F1B0_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011F1B0 func_8011F1B0 preserves=true fpr_mask=0x00000000
