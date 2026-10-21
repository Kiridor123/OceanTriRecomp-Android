#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BFC8(CpuContext* ctx);
extern "C" uint32_t func_8008BFC8_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8008BFC0_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8008BFC0u);
    goto loc_8008BFC0;

loc_8008BFC0:
{
    r3 = MemoryInline::FlatRead32(r3);
    if constexpr (KnownRegArgsCpuCall<0x8008BFC8u>(&func_8008BFC8)) {
        const auto regargs_result_8008BFC8_23D = func_8008BFC8_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_8008BFC8_23D;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008BFC8u>(ctx);
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008BFC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008BFC0_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008BFC0 func_8008BFC0 preserves=true fpr_mask=0x00000000
