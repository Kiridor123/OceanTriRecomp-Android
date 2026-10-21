#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EDC0_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8046EDC0u);
    goto loc_8046EDC0;

loc_8046EDC0:
{
    r0 = MemoryInline::FlatRead32((r13 + -16208));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r13 + -16208), r3);
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8046EDC0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8046EDC0_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046EDC0 func_8046EDC0 preserves=true fpr_mask=0x00000000
