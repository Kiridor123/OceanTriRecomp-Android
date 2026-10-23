#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800AC148_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1 = ctx->fpr[1];
    ctx->gpr[3] = arg_r3;

    goto loc_800AC148;

loc_800AC148:
{
    r7 = r4;
    r4 = MemoryInline::FlatRead8((r4 + 119));
    r5 = (r7 + 120);
    r6 = (r7 + 124);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 128));
    r7 = (r7 + 132);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800AC164u>(ctx);
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | ctx->gpr[3];
}

}

extern "C" void func_800AC148(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800AC148_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F1F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AC148 func_800AC148 preserves=true fpr_mask=0x00000000
