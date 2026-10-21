#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546588(CpuContext* ctx);
extern "C" uint64_t func_80546588_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_8054FE88_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8054FE88u);
    goto loc_8054FE88;

loc_8054FE88:
{
    r3 = (r3 + -16);
    if constexpr (KnownRegArgsCpuCall<0x80546588u>(&func_80546588)) {
        const auto regargs_result_80546588_221 = func_80546588_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80546588_221);
        r4 = static_cast<uint32_t>(regargs_result_80546588_221 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80546588u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8054FE88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054FE88_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001A gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054FE88 func_8054FE88 preserves=true fpr_mask=0x00000000
