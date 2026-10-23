#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80486AD0(CpuContext* ctx);
extern "C" uint64_t func_80486AD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047E344_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_8047E344;

loc_8047E344:
{
    r4 = 0x80740000u;
    r3 = 4;
    r4 = (r4 + -18476);
    r5 = 0;
    r4 = (r4 + 149);
    if constexpr (KnownRegArgsCpuCall<0x80486AD0u>(&func_80486AD0)) {
        const auto regargs_result_80486AD0_2E9 = func_80486AD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80486AD0_2E9);
        r4 = static_cast<uint32_t>(regargs_result_80486AD0_2E9 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80486AD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047E344(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047E344_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000C1 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047E344 func_8047E344 preserves=true fpr_mask=0x00000000
