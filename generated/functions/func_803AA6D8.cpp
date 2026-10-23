#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AA5F4(CpuContext* ctx);
extern "C" uint64_t func_803AA5F4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803AA6D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_803AA6D8;

loc_803AA6D8:
{
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803AA5F4u>(&func_803AA5F4)) {
        const auto regargs_result_803AA5F4_235 = func_803AA5F4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AA5F4_235);
        r4 = static_cast<uint32_t>(regargs_result_803AA5F4_235 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AA5F4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AA6D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AA6D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AA6D8 func_803AA6D8 preserves=true fpr_mask=0x00000000
