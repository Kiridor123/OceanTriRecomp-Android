#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8009F8AC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8009F8AC;

loc_8009F8AC:
{
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9512);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8009F8AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8009F8AC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009F8AC func_8009F8AC preserves=true fpr_mask=0x00000000
