#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B2FC4(CpuContext* ctx);
extern "C" uint64_t func_802B2FC4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802B32C4_rae0_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7, double arg_f1)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_802B32C4;

loc_802B32C4:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802B2FC4u>(&func_802B2FC4)) {
        const auto regargs_result_802B2FC4_309 = func_802B2FC4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802B2FC4_309);
        r4 = static_cast<uint32_t>(regargs_result_802B2FC4_309 >> 32);
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802B2FC4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B32C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B32C4_rae0_2_18_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021E7 gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B32C4 func_802B32C4 preserves=true fpr_mask=0x00000000
