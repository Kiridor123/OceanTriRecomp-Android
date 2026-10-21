#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2A20(CpuContext* ctx);
extern "C" uint64_t func_800F2A20_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_800F2A6C(CpuContext* ctx);
extern "C" uint64_t func_800F2A6C_ra8_2_18_0(CpuContext*, uint32_t, double);

extern "C" double func_803BE89C_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x803BE89Cu);
    goto loc_803BE89C;

loc_803BE89C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80660000u;
    r31 = (r3 + -19184);
    r3 = MemoryInline::FlatRead8((r31 + 18));
    ctx->lr = 0x803BE8BCu;
    if constexpr (KnownRegArgsCpuCall<0x800F2A20u>(&func_800F2A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800F2A20_51A = func_800F2A20_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A20_51A);
        r4 = static_cast<uint32_t>(regargs_result_800F2A20_51A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r31 + 17));
    ctx->lr = 0x803BE8C4u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A6Cu>(&func_800F2A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800F2A6C_8B7 = func_800F2A6C_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A6C_8B7);
        r4 = static_cast<uint32_t>(regargs_result_800F2A6C_8B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r31 + 23));
}

loc_803BE8CC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(50))) {
        goto loc_803BE8E4;
    }
}

loc_803BE8D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5232));
    // inline leaf 0x8003FCB4 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r13 + -32764), f1.d);
    // end of inlined leaf 0x8003FCB4
    r0 = 100;
    MemoryInline::FlatWriteRam8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_803BE908;
}

loc_803BE8E4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5224));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // inline leaf 0x8003FCB4 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r13 + -32764), f1.d);
    // end of inlined leaf 0x8003FCB4
}

loc_803BE908:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_803BE89C(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_803BE89C_ra0_2_0_2(ctx, ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002007 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE89C func_803BE89C preserves=true fpr_mask=0x00000000
