#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800472A0(CpuContext* ctx);
extern "C" uint32_t func_800472A0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80067ED4(CpuContext* ctx);
extern "C" uint32_t func_80067ED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80074DDC(CpuContext* ctx);
extern "C" uint64_t func_80074DDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802BDE14_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802BDE14;

loc_802BDE14:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r31 = r3;
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    ctx->lr = 0x802BDE34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800473FCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x802BDE44u;
    if constexpr (KnownRegArgsCpuCall<0x800472A0u>(&func_800472A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800472A0_672 = func_800472A0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800472A0_672;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800472A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 28);
    ctx->lr = 0x802BDE4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80067ED4u>(&func_80067ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80067ED4_8D8 = func_80067ED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80067ED4_8D8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80067ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    r4 = (r1 + 28);
    ctx->lr = 0x802BDE58u;
    if constexpr (KnownRegArgsCpuCall<0x80074DDCu>(&func_80074DDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074DDC_B33 = func_80074DDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074DDC_B33);
        r4 = static_cast<uint32_t>(regargs_result_80074DDC_B33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80074DDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = (r1 + 44);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BDE14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BDE14_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BDE14 func_802BDE14 preserves=true fpr_mask=0x00000000
