#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CE920_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CE920;

loc_804CE920:
{
    MemoryInline::FlatWrite32((r13 + -15080), r3);
    return;
}

}

extern "C" void func_804CE920(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804CE920_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CE920 func_804CE920 preserves=true fpr_mask=0x00000000
