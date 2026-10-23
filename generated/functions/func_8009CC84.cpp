#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009CC84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f2 = ctx->fpr[2];
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

    goto loc_8009CC84;

loc_8009CC84:
{
    f9.d = MemoryInline::FlatReadFloat32(r4);
    r6 = 0x807A0000u;
    f10.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r6 = (r6 + -31632);
    f12.d = MemoryInline::FlatReadFloat32(r6);
    f11.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    SetCRFloatResident(cr, 0, f9.d, f13.d);
}

loc_8009CCA8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CCB4;
    }
}

loc_8009CCB0:
{
    f9.d = f12.d;
}

loc_8009CCB4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 16);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    SetCRFloatResident(cr, 0, f10.d, f13.d);
}

loc_8009CCBC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 24);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CCC8;
    }
}

loc_8009CCC4:
{
    f10.d = f12.d;
}

loc_8009CCC8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 32);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    SetCRFloatResident(cr, 0, f11.d, f13.d);
}

loc_8009CCD0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 40);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CCDC;
    }
}

loc_8009CCD8:
{
    f11.d = f12.d;
}

loc_8009CCDC:
{
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f9.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f4.d);
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f9.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f5.d);
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f10.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f6.d);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f10.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f7.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f11.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f8.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f11.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f2.d);
    ctx->gpr[6] = r6;
    ctx->fpr[2] = f2;
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

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000040 gpr_return=0x00000000 fpr_read=0x00003FF0 fpr_write=0x00003FF4 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009CC84 func_8009CC84 preserves=true fpr_mask=0x00000000
