#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80051178(CpuContext* ctx);
extern "C" uint64_t func_80051178_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80135558_ra18_18_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80135558;

loc_80135558:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    r4 = (r30 + 784);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 482));
    r0 = (r3 + -1);
}

loc_80135594:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801355A0;
    }
}

loc_80135598:
{
}

loc_8013559C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_801355B8;
    }
}

loc_801355A0:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x801355ACu;
    if constexpr (KnownRegArgsCpuCall<0x80051178u>(&func_80051178)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80051178_77A = func_80051178_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051178_77A);
        r4 = static_cast<uint32_t>(regargs_result_80051178_77A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051178u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x801355B8u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005101C_B32 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_B32);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_B32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_801355B8:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x801355C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x801355D0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80135558(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80135558_ra18_18_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80135558 func_80135558 preserves=true fpr_mask=0x00000000
