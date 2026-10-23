#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800883AC(CpuContext* ctx);
extern "C" uint64_t func_800883AC_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_800883A0_ra30_180_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, double arg_f7, double arg_f8)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_800883A0;

loc_800883A0:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
    if constexpr (KnownRegArgsCpuCall<0x800883ACu>(&func_800883AC)) {
        const auto regargs_result_800883AC_2EB = func_800883AC_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800883AC_2EB);
        r4 = static_cast<uint32_t>(regargs_result_800883AC_2EB >> 32);
        r5 = ctx->gpr[5];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800883ACu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800883A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800883A0_ra30_180_18_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000033 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00003F80 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800883A0 func_800883A0 preserves=true fpr_mask=0x00000000
