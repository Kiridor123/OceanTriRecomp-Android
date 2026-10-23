#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026CCD4_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = arg_r4;

    goto loc_8026CCD4;

loc_8026CCD4:
{
    r0 = MemoryInline::FlatRead8((r4 + 112));
}

loc_8026CCDC:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8026CCD4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8026CCD4_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026CCD4 func_8026CCD4 preserves=true fpr_mask=0x00000000
