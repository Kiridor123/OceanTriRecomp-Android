#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046AAB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046AAB0;

loc_8046AAB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8046AABC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = r5;
    r29 = r3;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046AAE4;
    }
}

loc_8046AADC:
{
    r3 = 0;
    goto loc_8046AB38;
}

loc_8046AAE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r6 = (2176 - r0);
}

loc_8046AAF0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_8046AAFC;
    }
}

loc_8046AAF4:
{
    r31 = 769;
    r30 = r6;
}

loc_8046AAFC:
{
}

loc_8046AB00:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8046AB14;
    }
}

loc_8046AB04:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8046AB24;
}

loc_8046AB14:
{
    r3 = (r3 + r0);
    r5 = r30;
    r3 = (r3 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469048_79F = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_79F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8046AB24:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r31;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_8046AB38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046AAB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046AAB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046AAB0 func_8046AAB0 preserves=true fpr_mask=0x00000000
