#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803491E8(CpuContext* ctx);
extern "C" uint64_t func_803491E8_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031B634_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r7 = arg_r7;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8031B634u);
    goto loc_8031B634;

loc_8031B634:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = (r3 + 816);
    r3 = r31;
    ctx->lr = 0x8031B650u;
    if constexpr (KnownRegArgsCpuCall<0x803491E8u>(&func_803491E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803491E8_3BF = func_803491E8_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_803491E8_3BF);
        r4 = static_cast<uint32_t>(regargs_result_803491E8_3BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803491E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    r0 = 41;
    MemoryInline::FlatWrite8((r31 + 570), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 571), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031B634(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031B634_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000209A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031B634 func_8031B634 preserves=true fpr_mask=0x00000000
