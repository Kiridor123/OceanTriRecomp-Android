#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801460F8(CpuContext* ctx);
extern "C" double func_801460F8_ra0_2_0_2(CpuContext*, double);

extern "C" uint32_t func_80146170_ra8_e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80146170;

loc_80146170:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f30.d);
    r31 = r3;
    f30.d = f2.d;
    f31.d = f3.d;
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_801460F8_49A = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_49A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r31 + 444), r3);
    f1.d = f30.d;
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_801460F8_763 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_763;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r31 + 448), r3);
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_801460F8_A2C = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_A2C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r31 + 452), r3);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return r3;
}

}

extern "C" void func_80146170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80146170_ra8_e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0xC000000E fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80146170 func_80146170 preserves=true fpr_mask=0x00000000
