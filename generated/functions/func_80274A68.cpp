#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80280060(CpuContext* ctx);
extern "C" uint32_t func_80280060_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80274A68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80274A68;

loc_80274A68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r4 = (r5 & 255);
    r0 = (r4 + -4);
}

loc_80274A88:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80274A94;
    }
}

loc_80274A8C:
{
    r3 = 0;
    goto loc_80274B08;
}

loc_80274A94:
{
}

loc_80274A98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80274B04;
    }
}

loc_80274A9C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80274AA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80274AE8;
    }
}

loc_80274AA8:
{
    ctx->lr = 0x80274AACu;
    if constexpr (KnownRegArgsCpuCall<0x80280060u>(&func_80280060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80280060_612 = func_80280060_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80280060_612;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80280060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80274AB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274ABC;
    }
}

loc_80274AB4:
{
    r3 = 1;
    goto loc_80274B08;
}

loc_80274ABC:
{
}

loc_80274AC0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80274B04;
    }
}

loc_80274AC4:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80274ACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80274B04;
    }
}

loc_80274AD0:
{
    r3 = r31;
    ctx->lr = 0x80274AD8u;
    if constexpr (KnownRegArgsCpuCall<0x80280060u>(&func_80280060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80280060_AE1 = func_80280060_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80280060_AE1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80280060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80274ADC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274B04;
    }
}

loc_80274AE0:
{
    r3 = 1;
    goto loc_80274B08;
}

loc_80274AE8:
{
}

loc_80274AEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80274B04;
    }
}

loc_80274AF0:
{
    ctx->lr = 0x80274AF4u;
    if constexpr (KnownRegArgsCpuCall<0x80280060u>(&func_80280060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80280060_EE5 = func_80280060_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80280060_EE5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80280060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80274AF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274B04;
    }
}

loc_80274AFC:
{
    r3 = 1;
    goto loc_80274B08;
}

loc_80274B04:
{
    r3 = 0;
}

loc_80274B08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80274A68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80274A68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80274A68 func_80274A68 preserves=true fpr_mask=0x00000000
