#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FFFC(CpuContext* ctx);
extern "C" uint32_t func_8045FFFC_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80050008_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80050008;

loc_80050008:
{
    if constexpr (KnownRegArgsCpuCall<0x8045FFFCu>(&func_8045FFFC)) {
        const auto regargs_result_8045FFFC_253 = func_8045FFFC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045FFFC_253;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FFFCu>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80050008(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80050008_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050008 func_80050008 preserves=true fpr_mask=0x00000000
