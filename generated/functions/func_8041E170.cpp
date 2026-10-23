#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041CE6C(CpuContext* ctx);
extern "C" uint32_t func_8041CE6C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8041E170_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    ctx->gpr[6] = arg_r6;

    goto loc_8041E170;

loc_8041E170:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 26164));
    r4 = MemoryInline::FlatRead32((r4 + 26168));
    if constexpr (KnownRegArgsCpuCall<0x8041CE6Cu>(&func_8041CE6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041CE6C_404 = func_8041CE6C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8041CE6C_404;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8041CE6Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8041E194:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8041E1A0;
    }
}

loc_8041E198:
{
    r3 = 1;
    goto loc_8041E1A8;
}

loc_8041E1A0:
{
    r0 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r3 & r0);
}

loc_8041E1A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8041E170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041E170_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000016B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041E170 func_8041E170 preserves=true fpr_mask=0x00000000
