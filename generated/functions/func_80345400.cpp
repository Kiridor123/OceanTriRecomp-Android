#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80345400_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_80345400;

loc_80345400:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_80345408:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80345414;
    }
}

loc_8034540C:
{
    r3 = MemoryInline::FlatRead8((r3 + 16));
    ctx->gpr[0] = r0;
    return r3;
}

loc_80345414:
{
    r3 = MemoryInline::FlatRead8((r3 + 20));
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80345400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80345400_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80345400 func_80345400 preserves=true fpr_mask=0x00000000
