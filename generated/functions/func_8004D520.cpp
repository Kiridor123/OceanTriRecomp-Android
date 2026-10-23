#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D4C0(CpuContext* ctx);
extern "C" uint32_t func_8004D4C0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004D520_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[7] = arg_r7;

    goto loc_8004D520;

loc_8004D520:
{
    r5 = r3;
    r0 = r4;
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r5 = (r0 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004D4C0u>(&func_8004D4C0)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8004D4C0_338 = func_8004D4C0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004D4C0_338;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D4C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004D520(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004D520_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002098 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D520 func_8004D520 preserves=true fpr_mask=0x00000000
