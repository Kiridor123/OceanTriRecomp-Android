#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804645B4(CpuContext* ctx);
extern "C" uint32_t func_804645B4_ra68_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint32_t func_80089FF4_ra68_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1)
{
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80089FF4;

loc_80089FF4:
{
    if constexpr (KnownRegArgsCpuCall<0x804645B4u>(&func_804645B4)) {
        const auto regargs_result_804645B4_28A = func_804645B4_ra68_2_8_0(ctx, r3, r5, r6, f1.d);
        r3 = regargs_result_804645B4_28A;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804645B4u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_80089FF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80089FF4_ra68_2_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000EA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80089FF4 func_80089FF4 preserves=true fpr_mask=0x00000000
