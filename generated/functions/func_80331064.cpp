#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80331064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80331064;

loc_80331064:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f1.d, f7.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f13, PPC_PsMsubInline(f3.d, f8.d, f13.d));
    r12 = 0x807A0000u;
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f5.d, f6.d, f12.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f13.d));
    r12 = (r12 + -10512);
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f3.d, f4.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f12.d, f7.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r12));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f11.d, f7.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f2.d, f5.d, f10.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    PpcSetPairedFprInline(f8, PPC_PsAbsInline(f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f8.d), PpcGetPs0Inline(f6.d));
}

loc_803310D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803310DC;
    }
}

loc_803310D4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    return;
}

loc_803310DC:
{
    PpcSetPairedFprInline(f6, PPC_Fres(f7.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f1.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f6.d, f6.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f7.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f3.d, f8.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f6.d, f4.d, f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f13.d, f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f12.d, f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 44));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f11.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f13.d, f12.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge11Inline(f13.d, f12.d));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f13.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f5.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f4.d);
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, f0.d));
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f0.d));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(f12.d, PPC_PsFromScalarInline(f2.d), f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f10.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, f0.d));
    PpcSetPairedFprInline(f6, PPC_PsNmaddInline(f11.d, PPC_PsFromScalarInline(f3.d), f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 36);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f9.d);
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f10.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f11.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f8.d);
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f9.d, PPC_PsFromScalarInline(f2.d), f7.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge11Inline(f11.d, f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f5.d);
    PpcSetPairedFprInline(f7, PPC_PsNmaddInline(f8.d, PPC_PsFromScalarInline(f3.d), f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f7.d);
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00001008 gpr_return=0x00000008 fpr_read=0x00003E8F fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80331064 func_80331064 preserves=true fpr_mask=0x00000000
