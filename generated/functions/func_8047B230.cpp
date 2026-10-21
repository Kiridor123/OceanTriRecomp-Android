#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80479270(CpuContext* ctx);
extern "C" uint32_t func_80479270_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047B230_ra48_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8047B230u);
    goto loc_8047B230;

loc_8047B230:
{
    r5 = 0x80740000u;
    r4 = r3;
    r5 = (r5 + -18928);
    r3 = (r5 + 64);
    if constexpr (KnownRegArgsCpuCall<0x80479270u>(&func_80479270)) {
        const auto regargs_result_80479270_2C4 = func_80479270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80479270_2C4;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479270u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047B230(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047B230_ra48_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047B230 func_8047B230 preserves=true fpr_mask=0x00000000
