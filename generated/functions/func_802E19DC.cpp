#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802E19DC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_802E19DC;

loc_802E19DC:
{
    r0 = (r3 & 255);
    r3 = 0x805D0000u;
    r3 = (r3 + 24468);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802E19DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802E19DC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E19DC func_802E19DC preserves=true fpr_mask=0x00000000
