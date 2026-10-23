#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_801D6CB4_ra38_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_801D6CB4;

loc_801D6CB4:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -18556));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_801D6CB4(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_801D6CB4_ra38_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D6CB4 func_801D6CB4 preserves=true fpr_mask=0x00000000
