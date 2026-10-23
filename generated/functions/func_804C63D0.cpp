#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C63D0(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804C63D0;

loc_804C63D0:
{
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r0 = (r6 + -1);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    r6 = (r13 + -20248);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    ctr = r0;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f6.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f6.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 32);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f30, PPC_PsMuls0Inline(f6.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 24);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f11, PPC_PsMadds1Inline(f8.d, f0.d, f11.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f13, PPC_PsMadds1Inline(f8.d, f2.d, f13.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 40);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f30, PPC_PsMadds1Inline(f8.d, f4.d, f30.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f7.d, f0.d));
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f7.d, f2.d));
    PpcSetPairedFprInline(f29, PPC_PsMuls0Inline(f7.d, f4.d));
    PpcSetPairedFprInline(f11, PPC_PsMadds0Inline(f9.d, f1.d, f11.d));
    PpcSetPairedFprInline(f13, PPC_PsMadds0Inline(f9.d, f3.d, f13.d));
    PpcSetPairedFprInline(f30, PPC_PsMadds0Inline(f9.d, f5.d, f30.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f11.d);
    PpcSetPairedFprInline(f12, PPC_PsMadds1Inline(f6.d, f0.d, f12.d));
    PpcSetPairedFprInline(f31, PPC_PsMadds1Inline(f6.d, f2.d, f31.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0, f13.d);
    PpcSetPairedFprInline(f29, PPC_PsMadds1Inline(f6.d, f4.d, f29.d));
}

loc_804C6478:
{
    PpcSetPairedFprInline(f12, PPC_PsMadds0Inline(f10.d, f1.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 48);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    PpcSetPairedFprInline(f31, PPC_PsMadds0Inline(f10.d, f3.d, f31.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, f30.d);
    PpcSetPairedFprInline(f29, PPC_PsMadds0Inline(f10.d, f5.d, f29.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 64);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    PpcSetPairedFprInline(f12, PPC_PsMaddInline(f28.d, f1.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 80);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f6.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 56);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, f12.d);
    PpcSetPairedFprInline(f31, PPC_PsMaddInline(f28.d, f3.d, f31.d));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f6.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, f31.d);
    PpcSetPairedFprInline(f30, PPC_PsMuls0Inline(f6.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 72);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    PpcSetPairedFprInline(f11, PPC_PsMadds1Inline(f8.d, f0.d, f11.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 88);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11));
    PpcSetPairedFprInline(f29, PPC_PsMaddInline(f28.d, f5.d, f29.d));
    r4 = (r4 + 48);
    PpcSetPairedFprInline(f13, PPC_PsMadds1Inline(f8.d, f2.d, f13.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5, f29.d);
    PpcSetPairedFprInline(f30, PPC_PsMadds1Inline(f8.d, f4.d, f30.d));
    PpcSetPairedFprInline(f11, PPC_PsMadds0Inline(f9.d, f1.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f7.d, f0.d));
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f7.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 48);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6, f11.d);
    PpcSetPairedFprInline(f29, PPC_PsMuls0Inline(f7.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMadds0Inline(f9.d, f3.d, f13.d));
    PpcSetPairedFprInline(f30, PPC_PsMadds0Inline(f9.d, f5.d, f30.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 64);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7, f13.d);
    PpcSetPairedFprInline(f12, PPC_PsMadds1Inline(f6.d, f0.d, f12.d));
    PpcSetPairedFprInline(f31, PPC_PsMadds1Inline(f6.d, f2.d, f31.d));
    r5 = (r5 + 48);
    PpcSetPairedFprInline(f29, PPC_PsMadds1Inline(f6.d, f4.d, f29.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C6478;
    }
}

loc_804C6508:
{
    PpcSetPairedFprInline(f12, PPC_PsMadds0Inline(f10.d, f1.d, f12.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8, f30.d);
    PpcSetPairedFprInline(f31, PPC_PsMadds0Inline(f10.d, f3.d, f31.d));
    PpcSetPairedFprInline(f29, PPC_PsMadds0Inline(f10.d, f5.d, f29.d));
    PpcSetPairedFprInline(f12, PPC_PsMaddInline(f28.d, f1.d, f12.d));
    PpcSetPairedFprInline(f31, PPC_PsMaddInline(f28.d, f3.d, f31.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, f12.d);
    PpcSetPairedFprInline(f29, PPC_PsMaddInline(f28.d, f5.d, f29.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_10 = (r5 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_10, f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_11 = (r5 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11, f29.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0xF000003F fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C63D0 func_804C63D0 preserves=true fpr_mask=0x00000000
