#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ECD08(CpuContext* ctx);
extern "C" uint64_t func_800ECD08_ra38_1c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_800EC0A0_ra68_1c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x800EC0A0u);
    goto loc_800EC0A0;

loc_800EC0A0:
{
    r4 = r5;
    r5 = r6;
    if constexpr (KnownRegArgsCpuCall<0x800ECD08u>(&func_800ECD08)) {
        ctx->gpr[6] = r6;
        const auto regargs_result_800ECD08_35A = func_800ECD08_ra38_1c_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800ECD08_35A);
        r4 = static_cast<uint32_t>(regargs_result_800ECD08_35A >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800ECD08u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EC0A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EC0A0_ra68_1c_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000006F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EC0A0 func_800EC0A0 preserves=true fpr_mask=0x00000000
