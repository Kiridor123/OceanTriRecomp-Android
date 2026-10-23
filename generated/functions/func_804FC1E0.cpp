#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500DA0(CpuContext* ctx);
extern "C" void func_80500DA0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FC1E0_ra188_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    uint32_t cr = ctx->cr;

    goto loc_804FC1E0;

loc_804FC1E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80630000u;
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r6 + -5516);
    r31 = 0x80760000u;
    r31 = (r31 + 3936);
    r5 = MemoryInline::FlatRead8((r31 + 16));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = 5;
    MemoryInline::FlatWriteRam8((r31 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FC1E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FC1E0_ra188_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000078A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x02 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804FC1E0 func_804FC1E0 preserves=true fpr_mask=0x00000000
