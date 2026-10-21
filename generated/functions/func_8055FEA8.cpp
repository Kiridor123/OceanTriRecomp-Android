#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8055FEA8_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x8055FEA8u);
    goto loc_8055FEA8;

loc_8055FEA8:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -880));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -876));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -888));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -884));
    MemoryInline::FlatWriteFloat32(r3, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return f1.d;
}

}

extern "C" void func_8055FEA8(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8055FEA8_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055FEA8 func_8055FEA8 preserves=true fpr_mask=0x00000000
