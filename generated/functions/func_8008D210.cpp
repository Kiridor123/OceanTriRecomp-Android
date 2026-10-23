#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8008D210_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8008D210;

loc_8008D210:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r3 = (r3 + 28);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_8008D210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8008D210_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008D210 func_8008D210 preserves=true fpr_mask=0x00000000
