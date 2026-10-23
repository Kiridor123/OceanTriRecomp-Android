#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804C6AB0_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
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
    PPC_FPR f13 = ctx->fpr[13];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804C6AB0;

loc_804C6AB0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f4.d, f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    PpcSetPairedFprInline(f9, PPC_PsMerge10Inline(f4.d, f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f1.d));
    PpcSetPairedFprInline(f8, PPC_PsMaddInline(f5.d, f5.d, f6.d));
    PpcSetPairedFprInline(f10, PPC_PsMuls1Inline(f5.d, f5.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 12);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    PpcSetPairedFprInline(f3, PPC_PsSum0Inline(f8.d, f8.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f5.d, f5.d));
    PpcSetPairedFprInline(f12, PPC_PsMaddInline(f4.d, f9.d, f10.d));
    PpcSetPairedFprInline(f13, PPC_Fres(f3.d));
    PpcSetPairedFprInline(f3, PPC_PsNmsubInline(f3.d, f13.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f11, PPC_PsMuls1Inline(f9.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f4.d, f9.d, f10.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f13.d, f3.d));
    PpcSetPairedFprInline(f9, PPC_PsMadds0Inline(f4.d, f5.d, f11.d));
    PpcSetPairedFprInline(f8, PPC_PsSum1Inline(f7.d, f6.d, f8.d));
    f3.d = PpcFmulsInline(PPC_PsToScalarInline(f3.d), f2.d);
    PpcSetPairedFprInline(f11, PPC_PsNmsubInline(f11.d, PPC_PsFromScalarInline(f2.d), f9.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f6.d, f6.d, f6.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f9.d, PPC_PsFromScalarInline(f3.d)));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f11.d, PPC_PsFromScalarInline(f3.d)));
    PpcSetPairedFprInline(f8, PPC_PsNmsubInline(f8.d, PPC_PsFromScalarInline(f3.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f9.d);
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f12.d, PPC_PsFromScalarInline(f3.d)));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, PPC_PsFromScalarInline(f3.d)));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f11.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f12.d, f8.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge10Inline(f8.d, f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f7.d);
    PpcSetPairedFprInline(f13, PPC_PsMerge01Inline(f11.d, f9.d));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(f6.d, PPC_PsFromScalarInline(f3.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f5.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f6.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f13.d);
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
    ctx->fpr[13] = f13;
    return f1.d;
}

}

extern "C" void func_804C6AB0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804C6AB0_ra18_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6AB0 func_804C6AB0 preserves=true fpr_mask=0x00000000
