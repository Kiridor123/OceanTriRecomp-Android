#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CCEB8(CpuContext* ctx);
extern "C" uint64_t func_803CCEB8_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803CD824_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803CD824;

loc_803CD824:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->lr = 0x803CD844u;
    if constexpr (KnownRegArgsCpuCall<0x803CCEB8u>(&func_803CCEB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803CCEB8_432 = func_803CCEB8_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_803CCEB8_432);
        r4 = static_cast<uint32_t>(regargs_result_803CCEB8_432 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803CCEB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0x80600000u;
    r0 = (r3 + -25184);
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r31));
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r31);
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r31));
    r3 = 0x806D0000u;
    r3 = (r3 + 22208);
    r4 = 0;
    r5 = 1040;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 25);
    r4 = 0;
    r5 = 9216;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r30 + 9244), r31);
    r3 = (r30 + 9248);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r30 + 9256), r31);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CD824(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CD824_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000DA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CD824 func_803CD824 preserves=true fpr_mask=0x00000000
