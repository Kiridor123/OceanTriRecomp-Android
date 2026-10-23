#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7B20(CpuContext* ctx);
extern "C" uint64_t func_800E7B20_ra308_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_800E7B14_ra700_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r8, uint32_t arg_r9, uint32_t arg_r10, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r8 = arg_r8;
    uint32_t r9 = arg_r9;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[10] = arg_r10;

    goto loc_800E7B14;

loc_800E7B14:
{
    r3 = 0x806A0000u;
    r3 = (r3 + -25088);
    if constexpr (KnownRegArgsCpuCall<0x800E7B20u>(&func_800E7B20)) {
        const auto regargs_result_800E7B20_44F = func_800E7B20_ra308_1fc_18_0(ctx, r3, r8, r9, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E7B20_44F);
        r4 = static_cast<uint32_t>(regargs_result_800E7B20_44F >> 32);
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E7B20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E7B14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E7B14_ra700_1fc_18_0(ctx, ctx->gpr[8], ctx->gpr[9], ctx->gpr[10], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F06 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFC fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E7B14 func_800E7B14 preserves=true fpr_mask=0x00000000
