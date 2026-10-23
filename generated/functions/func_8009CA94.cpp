#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009CA94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8009CAA4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009CA94;

loc_8009CA94:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x80570000u;
    r4 = (r4 + 17568);
    r0 = (r2 + -31536);
    addr_psqx_8009CAA4_loc_0 = r0;
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009CAA4_loc_0));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -31528));
    r7 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f0.d));
    PpcSetPairedFprInline(f4, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f0.d, f0.d));
    PpcSetPairedFprInline(f7, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f1, PPC_PsAbsInline(f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f1.d), PpcGetPs0Inline(f0.d));
}

loc_8009CACC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009CADC;
    }
}

loc_8009CAD0:
{
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f4.d, f1.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f1.d), PpcGetPs0Inline(f0.d));
}

loc_8009CAD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CAD0;
    }
}

loc_8009CADC:
{
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f1.d), PpcGetPs1Inline(f0.d));
}

loc_8009CAE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009CAF8;
    }
}

loc_8009CAE4:
{
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(f1.d, f1.d));
}

loc_8009CAE8:
{
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f4.d, f1.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f1.d), PpcGetPs0Inline(f0.d));
}

loc_8009CAF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CAE8;
    }
}

loc_8009CAF4:
{
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(f1.d, f1.d));
}

loc_8009CAF8:
{
    // psq_store w=0 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 3u>(ctx, r7, f1.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    // psq_load w=0 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 3u>(ctx, r7));
    f2.d = std::fabs(f3.d);
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_8009CB0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009CB20;
    }
}

loc_8009CB14:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f0.d)));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_8009CB1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CB14;
    }
}

loc_8009CB20:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r7, PPC_PsFromScalarInline(f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f1.d, f4.d));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r5 = (r5_rot_0 & 4080);
    r5 = (r4 + r5);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_0 & 4080);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    r6 = (r4 + r6);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f8.d, f4.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f6.d));
}

loc_8009CB4C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CB60;
    }
}

loc_8009CB58:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge01Inline(f9.d, f0.d));
}

loc_8009CB60:
{
    PpcSetPairedFprInline(f1, PPC_PsMadds1Inline(f8.d, f4.d, f5.d));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 3u>(ctx, r7));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f7.d), PpcGetPs1Inline(f6.d));
}

loc_8009CB70:
{
    r5 = (r4 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f4.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CB8C;
    }
}

loc_8009CB84:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f9.d, f1.d));
}

loc_8009CB8C:
{
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f4.d), f5.d));
    SetCRFloatResident(cr, 0, f3.d, PPC_PsToScalarInline(f6.d));
}

loc_8009CB94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CBA0;
    }
}

loc_8009CB98:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f9.d, f2.d));
}

loc_8009CBA0:
{
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f0.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f7.d);
    PpcSetPairedFprInline(f3, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge10Inline(f3.d, f0.d));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMuls1Inline(f2.d, f1.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f5.d, f5.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsMuls1Inline(f0.d, f2.d));
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f3.d, f2.d));
    PpcSetPairedFprInline(f6, PPC_PsMadds0Inline(f6.d, f1.d, f8.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(f7.d, f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 12);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f6.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls1Inline(f3.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f6, PPC_PsMadds0Inline(f4.d, f1.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 20);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(f7.d, f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 28);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsMuls1Inline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 36);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f6.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DF gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x000002FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009CA94 func_8009CA94 preserves=true fpr_mask=0x00000000
