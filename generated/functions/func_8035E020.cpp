#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8035DDAC(CpuContext* ctx);
extern "C" uint64_t func_8035DDAC_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_8035E020_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;

    goto loc_8035E020;

loc_8035E020:
{
    if constexpr (KnownRegArgsCpuCall<0x8035DDACu>(&func_8035DDAC)) {
        const auto regargs_result_8035DDAC_36A = func_8035DDAC_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8035DDAC_36A);
        r4 = static_cast<uint32_t>(regargs_result_8035DDAC_36A >> 32);
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x8035DDACu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035E020(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035E020_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035E020 func_8035E020 preserves=true fpr_mask=0x00000000
