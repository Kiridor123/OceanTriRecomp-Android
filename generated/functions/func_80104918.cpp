#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104ACC(CpuContext* ctx);
extern "C" uint64_t func_80104ACC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80104918_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80104918;

loc_80104918:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r6;
    r3 = r4;
    r4 = (r5 & 255);
    r5 = MemoryInline::FlatRead8((r28 + 481));
    ctx->lr = 0x8010494Cu;
    if constexpr (KnownRegArgsCpuCall<0x80104ACCu>(&func_80104ACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80104ACC_577 = func_80104ACC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104ACC_577);
        r4 = static_cast<uint32_t>(regargs_result_80104ACC_577 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80104ACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_80104954:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80104990;
    }
}

loc_80104958:
{
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r3 = r28;
    ctx->lr = 0x80104964u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801359B4_A21 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_A21);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_A21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r0 = MemoryInline::FlatRead32((r28 + 444));
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r28 + 448));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 44), r0);
    MemoryInline::FlatWrite32((r31 + 48), r28);
}

loc_80104990:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80104918(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80104918_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80104918 func_80104918 preserves=true fpr_mask=0x00000000
