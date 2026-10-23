#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8013AC64_ra40_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = arg_r6;

    goto loc_8013AC64;

loc_8013AC64:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        const auto regargs_result_800CEF20_21E = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_21E;
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8013AC64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8013AC64_ra40_0_8_0(ctx, ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000041 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013AC64 func_8013AC64 preserves=true fpr_mask=0x00000000
