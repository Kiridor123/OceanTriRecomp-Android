#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800885B8_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_800885B8;

loc_800885B8:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_800885C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_800885B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800885B8_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800885B8 func_800885B8 preserves=true fpr_mask=0x00000000
