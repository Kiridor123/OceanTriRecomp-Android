#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804130F0_ra68_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x804130F0u);
    goto loc_804130F0;

loc_804130F0:
{
    MemoryInline::FlatWrite32((r3 + 92), r6);
    MemoryInline::FlatWrite32((r3 + 88), r5);
    return;
}

}

extern "C" void func_804130F0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804130F0_ra68_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000068 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804130F0 func_804130F0 preserves=true fpr_mask=0x00000000
