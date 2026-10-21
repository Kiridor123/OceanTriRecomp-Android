#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80501AC4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
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

    MKW_GUEST_ENTER(0x80501AB4u);
    goto loc_80501AB4;

loc_80501AB4:
{
    r4 = 0x80570000u;
    r0 = (r2 + -1480);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (r4 + 17568);
    addr_psqx_80501AC4_loc_0 = r0;
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80501AC4_loc_0));
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f0.d));
    PpcSetPairedFprInline(f4, PPC_PsAbsInline(f6.d));
    PpcSetPairedFprInline(f1, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f0.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f4.d), PpcGetPs0Inline(f0.d));
}

loc_80501AE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501AF0;
    }
}

loc_80501AE4:
{
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f1.d, f4.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f4.d), PpcGetPs0Inline(f0.d));
}

loc_80501AEC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501AE4;
    }
}

loc_80501AF0:
{
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f4.d), PpcGetPs1Inline(f0.d));
}

loc_80501AF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501B0C;
    }
}

loc_80501AF8:
{
    PpcSetPairedFprInline(f4, PPC_PsMerge10Inline(f4.d, f4.d));
}

loc_80501AFC:
{
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f1.d, f4.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f4.d), PpcGetPs0Inline(f0.d));
}

loc_80501B04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501AFC;
    }
}

loc_80501B08:
{
    PpcSetPairedFprInline(f4, PPC_PsMerge10Inline(f4.d, f4.d));
}

loc_80501B0C:
{
    // psq_store w=0 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 8);
    PPC_PsqStStackInline<0u, 3u>(ctx, r1_psq_tmp_0, f4.d);
    // psq_load w=0 quant=3 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 3u>(ctx, r1_psq_tmp_1));
    f5.d = std::fabs(f3.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRFloatResident(cr, 0, f5.d, PPC_PsToScalarInline(f0.d));
}

loc_80501B20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501B30;
    }
}

loc_80501B24:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - PPC_PsToScalarInline(f0.d)));
    SetCRFloatResident(cr, 0, f5.d, PPC_PsToScalarInline(f0.d));
}

loc_80501B2C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501B24;
    }
}

loc_80501B30:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 8);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f5.d));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r5 = (r5_rot_0 & 4080);
    r5 = (r4 + r5);
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f4.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_0 & 4080);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f6.d), PpcGetPs0Inline(f2.d));
}

loc_80501B50:
{
    r6 = (r4 + r6);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f8.d, f7.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501B70;
    }
}

loc_80501B68:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge01Inline(f9.d, f0.d));
}

loc_80501B70:
{
    PpcSetPairedFprInline(f1, PPC_PsMadds1Inline(f8.d, f7.d, f4.d));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_3 = (r1 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f6.d), PpcGetPs1Inline(f2.d));
}

loc_80501B80:
{
    r5 = (r4 + r0);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - PPC_PsToScalarInline(f7.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501B9C;
    }
}

loc_80501B94:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f9.d, f1.d));
}

loc_80501B9C:
{
    SetCRFloatResident(cr, 0, f3.d, PPC_PsToScalarInline(f2.d));
}

loc_80501BA0:
{
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f7.d), f4.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80501BB0;
    }
}

loc_80501BA8:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f9.d, f2.d));
}

loc_80501BB0:
{
    PpcSetPairedFprInline(f3, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMuls1Inline(f2.d, f1.d));
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f0.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge10Inline(f3.d, f0.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f0.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f7.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f3.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsMuls1Inline(f0.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMuls1Inline(f3.d, f2.d));
    PpcSetPairedFprInline(f6, PPC_PsMadds0Inline(f6.d, f1.d, f8.d));
    PpcSetPairedFprInline(f2, PPC_PsNegInline(f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(f7.d, f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 12);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f6.d);
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

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501AB4 func_80501AB4 preserves=true fpr_mask=0x00000000
