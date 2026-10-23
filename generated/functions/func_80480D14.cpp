#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80480D14_ra10_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_80480D14;

loc_80480D14:
{
    r3 = (r4 + 424);
    return r3;
}

}

extern "C" void func_80480D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80480D14_ra10_0_8_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80480D14 func_80480D14 preserves=true fpr_mask=0x00000000
