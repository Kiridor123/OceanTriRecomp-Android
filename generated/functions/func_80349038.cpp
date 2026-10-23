#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9354(CpuContext* ctx);
extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DE560(CpuContext* ctx);
extern "C" uint64_t func_802DE560_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80349D00(CpuContext* ctx);
extern "C" uint64_t func_80349D00_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_80349038_ra88_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;

    goto loc_80349038;

loc_80349038:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    // inline leaf 0x8029F86C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3 = MemoryInline::FlatRead32((r3 + 1876));
    // end of inlined leaf 0x8029F86C
    r31 = r3;
    r30 = 0;
    r29 = 0;
}

loc_80349068:
{
    r3 = MemoryInline::FlatRead8(r31);
    ctx->lr = 0x80349070u;
    if constexpr (KnownRegArgsCpuCall<0x802DE560u>(&func_802DE560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DE560_697 = func_802DE560_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802DE560_697);
        r4 = static_cast<uint32_t>(regargs_result_802DE560_697 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DE560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80349074:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80349080;
    }
}

loc_80349078:
{
    r0 = (r30 + 1);
    r30 = (r0 & 65535);
}

loc_80349080:
{
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_8034908C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(35))) {
        goto loc_80349068;
    }
}

loc_80349090:
{
}

loc_80349094:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8034909C;
    }
}

loc_80349098:
{
    r30 = 1;
}

loc_8034909C:
{
    r3 = (r28 + 420);
    r4 = 0;
    r5 = r30;
    r6 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802A9354_C3F = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_C3F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802A9354u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r28 + 420);
    r4 = (r28 + 108);
    ctx->lr = 0x803490BCu;
    if constexpr (KnownRegArgsCpuCall<0x80349D00u>(&func_80349D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80349D00_F4A = func_80349D00_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80349D00_F4A);
        r4 = static_cast<uint32_t>(regargs_result_80349D00_F4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349D00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80349038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80349038_ra88_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000208B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80349038 func_80349038 preserves=true fpr_mask=0x00000000
