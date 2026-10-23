#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801199D4(CpuContext* ctx);
extern "C" uint64_t func_801199D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F707C_rae0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_800F707C;

loc_800F707C:
{
    r3 = 5;
    r4 = 1;
    ctx->lr = 0x800F7088u;
    if constexpr (KnownRegArgsCpuCall<0x801199D4u>(&func_801199D4)) {
        const auto regargs_result_801199D4_2CB = func_801199D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801199D4_2CB);
        r4 = static_cast<uint32_t>(regargs_result_801199D4_2CB >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801199D4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    InvokeDirectCpu<0x800F77C8u>(ctx);
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F707C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F707C_rae0_0_18_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007E7 gpr_write=0x800007FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F707C func_800F707C preserves=true fpr_mask=0x00000000
