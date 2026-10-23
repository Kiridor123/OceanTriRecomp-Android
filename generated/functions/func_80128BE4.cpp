#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130B8C(CpuContext* ctx);
extern "C" uint64_t func_80130B8C_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80128BE4_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80128BE4;

loc_80128BE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 504), static_cast<uint8_t>(r0));
    // inline leaf 0x801308A8 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2214), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2218), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801308A8
    r3 = r30;
    ctx->lr = 0x80128C10u;
    if constexpr (KnownRegArgsCpuCall<0x80130B8Cu>(&func_80130B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80130B8C_5CC = func_80130B8C_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130B8C_5CC);
        r4 = static_cast<uint32_t>(regargs_result_80130B8C_5CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130B8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = 0;
    MemoryInline::FlatWrite16((r30 + 2384), static_cast<uint16_t>(r31));
    r3 = r30;
    r4 = 247;
    // inline leaf 0x80132318 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 2382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132318
    MemoryInline::FlatWrite16((r30 + 2326), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2386), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2380), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2066), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2068), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2378), static_cast<uint16_t>(r31));
    r3 = r30;
    ctx->lr = 0x80128C44u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_C5B = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_C5B);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_C5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80128BE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80128BE4_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80128BE4 func_80128BE4 preserves=true fpr_mask=0x00000000
