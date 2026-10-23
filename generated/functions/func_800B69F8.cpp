#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800B69F8_ra10_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_800B69F8;

loc_800B69F8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r3 = (r0 & 2048);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_800B69F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800B69F8_ra10_0_8_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B69F8 func_800B69F8 preserves=true fpr_mask=0x00000000
