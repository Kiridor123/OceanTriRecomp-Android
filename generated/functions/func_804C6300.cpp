#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C6300(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f14_entry = 0.0;
    double leaf_stack_saved_f15_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804C6300;

loc_804C6300:
{
    leaf_stack_saved_f14_entry = f14.d;
    leaf_stack_saved_f15_entry = f15.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    r6 = 0x80790000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    r6 = (r6 + 25544);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f6.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f7.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f14, PPC_PsMuls0Inline(f6.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f15, PPC_PsMuls0Inline(f7.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f12, PPC_PsMadds1Inline(f8.d, f0.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f14, PPC_PsMadds1Inline(f8.d, f2.d, f14.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 32);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f13, PPC_PsMadds1Inline(f9.d, f0.d, f13.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 40);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f15, PPC_PsMadds1Inline(f9.d, f2.d, f15.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsMadds0Inline(f10.d, f1.d, f12.d));
    PpcSetPairedFprInline(f13, PPC_PsMadds0Inline(f11.d, f1.d, f13.d));
    PpcSetPairedFprInline(f14, PPC_PsMadds0Inline(f10.d, f3.d, f14.d));
    PpcSetPairedFprInline(f15, PPC_PsMadds0Inline(f11.d, f3.d, f15.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f12.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f6.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMadds1Inline(f31.d, f1.d, f13.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f7.d, f4.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0, f14.d);
    PpcSetPairedFprInline(f15, PPC_PsMadds1Inline(f31.d, f3.d, f15.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1, f13.d);
    PpcSetPairedFprInline(f2, PPC_PsMadds1Inline(f8.d, f4.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds1Inline(f9.d, f4.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f10.d, f5.d, f2.d));
    f14.d = leaf_stack_saved_f14_entry;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, f15.d);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f11.d, f5.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, f2.d);
    PpcSetPairedFprInline(f0, PPC_PsMadds1Inline(f31.d, f5.d, f0.d));
    f15.d = leaf_stack_saved_f15_entry;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, f0.d);
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x00000042 gpr_return=0x00000000 fpr_read=0x8000C000 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6300 func_804C6300 preserves=true fpr_mask=0x00000000
