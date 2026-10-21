#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804C6860_ra18_6_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x804C6860u);
    goto loc_804C6860;

loc_804C6860:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -2080));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f3.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f10.d));
    f9.d = MemoryInline::FlatReadFloat32((r2 + -2076));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f10.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f11.d));
    PpcSetPairedFprInline(f11, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f11.d), PPC_PsFromScalarInline(f11.d)));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f4.d, PPC_PsFromScalarInline(f2.d)));
    f7.d = PPC_Frsqrte(PPC_PsToScalarInline(f6.d));
    f4.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = PpcFmulsInline(f7.d, f10.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f6.d), f9.d);
    f7.d = PpcFmulsInline(f4.d, f5.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f7.d)));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f7.d)));
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f12.d)));
    PpcSetPairedFprInline(f5, PPC_PsMuls1Inline(f6.d, f3.d));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f6.d, f3.d));
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f6.d, f2.d));
    f0.d = PPC_Fnmsubs(PPC_PsToScalarInline(f2.d), f12.d, PPC_PsToScalarInline(f5.d));
    PpcSetPairedFprInline(f3, PPC_PsNegInline(f10.d));
    f8.d = PPC_Fmadds(PPC_PsToScalarInline(f2.d), f12.d, PPC_PsToScalarInline(f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f11.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f3.d, f6.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f7.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f4.d);
    PpcSetPairedFprInline(f9, PPC_PsSum0Inline(f6.d, f10.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f3, PPC_PsSum0Inline(f6.d, f3.d, f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    PpcSetPairedFprInline(f5, PPC_PsSum1Inline(f11.d, f5.d, PPC_PsFromScalarInline(f8.d)));
    PpcSetPairedFprInline(f7, PPC_PsSum0Inline(f7.d, f11.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f9.d);
    PpcSetPairedFprInline(f6, PPC_PsSum1Inline(f10.d, f6.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f5.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f6.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f7.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return f1.d;
}

}

extern "C" void func_804C6860(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804C6860_ra18_6_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6860 func_804C6860 preserves=true fpr_mask=0x00000000
