#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CF73C_ra30_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803CF73Cu);
    goto loc_803CF73C;

loc_803CF73C:
{
    MemoryInline::FlatWrite32((r13 + -21772), r4);
    MemoryInline::FlatWrite32((r13 + -21768), r5);
    return;
}

}

extern "C" void func_803CF73C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803CF73C_ra30_0_0_0(ctx, ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002030 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CF73C func_803CF73C preserves=true fpr_mask=0x00000000
