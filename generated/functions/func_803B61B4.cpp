#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B2DB4(CpuContext* ctx);
extern "C" uint64_t func_803B2DB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B61B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B61B4;

loc_803B61B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x803B61CCu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_452 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_452;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B61D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B61DC;
    }
}

loc_803B61D4:
{
    r3 = 0;
    goto loc_803B622C;
}

loc_803B61DC:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r0 = (r31 & 65535);
    r0 = (r0 * 96);
    r31 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 148));
    r0 = (r0 & 10);
}

loc_803B61F8:
{
}

loc_803B61FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_803B6228;
    }
}

loc_803B6200:
{
    r3 = MemoryInline::FlatRead16((r31 + 152));
    r4 = 0;
    ctx->lr = 0x803B620Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B2DB4u>(&func_803B2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B2DB4_949 = func_803B2DB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B2DB4_949);
        r4 = static_cast<uint32_t>(regargs_result_803B2DB4_949 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B2DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead16((r31 + 154));
    r3 = (r0 - r3);
}

loc_803B621C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_803B622C;
    }
}

loc_803B6220:
{
    r3 = 0;
    goto loc_803B622C;
}

loc_803B6228:
{
    r3 = 0;
}

loc_803B622C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B61B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B61B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B61B4 func_803B61B4 preserves=true fpr_mask=0x00000000
