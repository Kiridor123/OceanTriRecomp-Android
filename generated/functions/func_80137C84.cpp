#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E650(CpuContext* ctx);
extern "C" uint64_t func_8011E650_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8011E9C4(CpuContext* ctx);
extern "C" uint64_t func_8011E9C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80126120(CpuContext* ctx);
extern "C" uint64_t func_80126120_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80126144(CpuContext* ctx);
extern "C" uint64_t func_80126144_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80127DF8(CpuContext* ctx);
extern "C" uint64_t func_80127DF8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801320C8(CpuContext* ctx);
extern "C" uint64_t func_801320C8_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_8013A9DC(CpuContext* ctx);
extern "C" uint32_t func_8013A9DC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80137C84_ra8_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x80137C84u);
    goto loc_80137C84;

loc_80137C84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_6BF = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_6BF);
        r4 = static_cast<uint32_t>(regargs_result_80126098_6BF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 456), r0);
    r3 = r31;
    ctx->lr = 0x80137CACu;
    if constexpr (KnownRegArgsCpuCall<0x80126120u>(&func_80126120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126120_9A3 = func_80126120_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126120_9A3);
        r4 = static_cast<uint32_t>(regargs_result_80126120_9A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 2248), r3);
    r3 = r31;
    ctx->lr = 0x80137CB8u;
    if constexpr (KnownRegArgsCpuCall<0x80126144u>(&func_80126144)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126144_C95 = func_80126144_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126144_C95);
        r4 = static_cast<uint32_t>(regargs_result_80126144_C95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126144u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 2252), r3);
    r3 = r31;
    ctx->lr = 0x80137CC4u;
    if constexpr (KnownRegArgsCpuCall<0x8011E650u>(&func_8011E650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8011E650_F87 = func_8011E650_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8011E650_F87);
        r4 = static_cast<uint32_t>(regargs_result_8011E650_F87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8011E650u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    ctx->lr = 0x80137CCCu;
    if constexpr (KnownRegArgsCpuCall<0x80127DF8u>(&func_80127DF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80127DF8_1248 = func_80127DF8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80127DF8_1248);
        r4 = static_cast<uint32_t>(regargs_result_80127DF8_1248 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80127DF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    ctx->lr = 0x80137CD4u;
    if constexpr (KnownRegArgsCpuCall<0x801320C8u>(&func_801320C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801320C8_1511 = func_801320C8_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801320C8_1511);
        r4 = static_cast<uint32_t>(regargs_result_801320C8_1511 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801320C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    ctx->lr = 0x80137CDCu;
    if constexpr (KnownRegArgsCpuCall<0x8011E9C4u>(&func_8011E9C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_8011E9C4_1843 = func_8011E9C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8011E9C4_1843);
        r4 = static_cast<uint32_t>(regargs_result_8011E9C4_1843 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8011E9C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    ctx->lr = 0x80137CE4u;
    if constexpr (KnownRegArgsCpuCall<0x8013A9DCu>(&func_8013A9DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8013A9DC_1B74 = func_8013A9DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8013A9DC_1B74;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013A9DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80137C84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80137C84_ra8_2_18_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80137C84 func_80137C84 preserves=true fpr_mask=0x00000000
