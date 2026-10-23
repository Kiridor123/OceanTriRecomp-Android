#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804130A4(CpuContext* ctx);
extern "C" uint32_t func_804130A4_ra68_1e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint32_t func_8041684C_rae0_1e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->gpr[7] = arg_r7;

    goto loc_8041684C;

loc_8041684C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
}

loc_80416860:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80416870;
    }
}

loc_80416864:
{
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
    ctx->lr = 0x8041686Cu;
    if constexpr (KnownRegArgsCpuCall<0x804130A4u>(&func_804130A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804130A4_667 = func_804130A4_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804130A4_667;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804130A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_80416874;
}

loc_80416870:
{
    r3 = 0;
}

loc_80416874:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return r3;
}

}

extern "C" void func_8041684C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041684C_rae0_1e_8_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FE3 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041684C func_8041684C preserves=true fpr_mask=0x00000000
