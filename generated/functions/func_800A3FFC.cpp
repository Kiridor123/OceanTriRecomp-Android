#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A4060(CpuContext* ctx);
extern "C" uint64_t func_800A4060_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800A3FFC_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800A3FFC;

loc_800A3FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x800A40E4 (4 guest instruction(s))
    r4 = 0x80590000u;
    r0 = (r4 + 11624);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    // end of inlined leaf 0x800A40E4
    r3 = 0x80590000u;
    r0 = (r3 + 11592);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r3 = (r31 + 36);
    r4 = 20;
    ctx->lr = 0x800A402Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A4060u>(&func_800A4060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A4060_4A3 = func_800A4060_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800A4060_4A3);
        r4 = static_cast<uint32_t>(regargs_result_800A4060_4A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800A4060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r31 + 88);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r31 + 136);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r31 + 148);
    r4 = 48;
    // inline leaf 0x805020CC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805020CC
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A3FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A3FFC_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A3FFC func_800A3FFC preserves=true fpr_mask=0x00000000
