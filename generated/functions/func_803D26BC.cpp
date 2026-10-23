#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803D26BC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_803D26BC;

loc_803D26BC:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + 18448), static_cast<uint8_t>(r4));
    return r3;
}

}

extern "C" void func_803D26BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803D26BC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D26BC func_803D26BC preserves=true fpr_mask=0x00000000
