#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086674(CpuContext* ctx);
extern "C" uint64_t func_80086674_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800867D4(CpuContext* ctx);
extern "C" uint32_t func_800867D4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80087A78(CpuContext* ctx);
extern "C" uint64_t func_80087A78_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80099F80(CpuContext* ctx);
extern "C" uint64_t func_80099F80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800879DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800879DCu);
    goto loc_800879DC;

loc_800879DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80077744u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800879FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80087A60;
    }
}

loc_80087A00:
{
    r31 = 0x80680000u;
    r3 = (r31 + 21248);
    // inline leaf 0x800866A4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    // end of inlined leaf 0x800866A4
    r0 = r3;
    r3 = 0x80680000u;
    r3 = (r3 + 21260);
    r4 = (r0 & 255);
    ctx->lr = 0x80087A20u;
    if constexpr (KnownRegArgsCpuCall<0x80086674u>(&func_80086674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086674_740 = func_80086674_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086674_740);
        r4 = static_cast<uint32_t>(regargs_result_80086674_740 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80086674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 21248);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80086FF8u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800776D8u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = 0x80680000u;
    r3 = (r3 + 21764);
    r4 = (r4 + 12);
    ctx->lr = 0x80087A44u;
    if constexpr (KnownRegArgsCpuCall<0x80087A78u>(&func_80087A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80087A78_B94 = func_80087A78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80087A78_B94);
        r4 = static_cast<uint32_t>(regargs_result_80087A78_B94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80087A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r3 = (r13 + -17712);
    ctx->lr = 0x80087A50u;
    if constexpr (KnownRegArgsCpuCall<0x800867D4u>(&func_800867D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800867D4_EC1 = func_800867D4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800867D4_EC1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800867D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = r30;
    r5 = r31;
    ctx->lr = 0x80087A60u;
    if constexpr (KnownRegArgsCpuCall<0x80099F80u>(&func_80099F80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80099F80_110A = func_80099F80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80099F80_110A);
        r4 = static_cast<uint32_t>(regargs_result_80099F80_110A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80099F80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80087A60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800879DC func_800879DC preserves=true fpr_mask=0x00000000
