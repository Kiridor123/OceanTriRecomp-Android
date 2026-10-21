#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055ABBC(CpuContext* ctx);
extern "C" uint32_t func_8055ABBC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8055CAA8(CpuContext* ctx);
extern "C" uint32_t func_8055CAA8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8054F034_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8054F034u);
    goto loc_8054F034;

loc_8054F034:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 6660);
    ctx->lr = 0x8054F050u;
    if constexpr (KnownRegArgsCpuCall<0x8055CAA8u>(&func_8055CAA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8055CAA8_3F0 = func_8055CAA8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8055CAA8_3F0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8055CAA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r31 + 16);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8055ABBCu>(&func_8055ABBC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8055ABBC_5FC = func_8055ABBC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8055ABBC_5FC;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8055ABBCu>(ctx);
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8054F034(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054F034_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054F034 func_8054F034 preserves=true fpr_mask=0x00000000
