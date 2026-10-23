#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021D1D4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8021D1D4;

loc_8021D1D4:
{
    r0 = (r3 & 255);
    r3 = 0x806B0000u;
    r3 = (r3 + -13296);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8021D1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021D1D4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021D1D4 func_8021D1D4 preserves=true fpr_mask=0x00000000
