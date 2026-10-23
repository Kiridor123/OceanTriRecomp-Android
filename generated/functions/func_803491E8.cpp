#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9354(CpuContext* ctx);
extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033AE10(CpuContext* ctx);
extern "C" uint64_t func_8033AE10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033B32C(CpuContext* ctx);
extern "C" uint64_t func_8033B32C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80349B68(CpuContext* ctx);
extern "C" uint64_t func_80349B68_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803491E8_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;

    goto loc_803491E8;

loc_803491E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = 0;
    r30 = 0;
}

loc_8034920C:
{
    r3 = (r30 & 65535);
    r4 = 0;
    ctx->lr = 0x80349218u;
    if constexpr (KnownRegArgsCpuCall<0x8033AE10u>(&func_8033AE10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033AE10_649 = func_8033AE10_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AE10_649);
        r4 = static_cast<uint32_t>(regargs_result_8033AE10_649 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033AE10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = 0;
    ctx->lr = 0x80349220u;
    if constexpr (KnownRegArgsCpuCall<0x8033B32Cu>(&func_8033B32C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033B32C_973 = func_8033B32C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B32C_973);
        r4 = static_cast<uint32_t>(regargs_result_8033B32C_973 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033B32Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80349224:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80349230;
    }
}

loc_80349228:
{
    r0 = (r31 + 1);
    r31 = (r0 & 65535);
}

loc_80349230:
{
    r30 = (r30 + 1);
}

loc_80349238:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(131))) {
        goto loc_8034920C;
    }
}

loc_8034923C:
{
}

loc_80349240:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80349248;
    }
}

loc_80349244:
{
    r31 = 1;
}

loc_80349248:
{
    r3 = (r29 + 420);
    r4 = 0;
    r5 = r31;
    r6 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802A9354_F0F = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_F0F;
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
    r3 = (r29 + 420);
    r4 = (r29 + 108);
    ctx->lr = 0x80349268u;
    if constexpr (KnownRegArgsCpuCall<0x80349B68u>(&func_80349B68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80349B68_121A = func_80349B68_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80349B68_121A);
        r4 = static_cast<uint32_t>(regargs_result_80349B68_121A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349B68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
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

extern "C" void func_803491E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803491E8_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000209B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803491E8 func_803491E8 preserves=true fpr_mask=0x00000000
