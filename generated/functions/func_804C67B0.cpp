#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804C67B0_ra18_36_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x804C67B0u);
    goto loc_804C67B0;

loc_804C67B0:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = (r4 | 32);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(120));
}

loc_804C67C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    PpcSetPairedFprInline(f2, PPC_PsNegInline(PPC_PsFromScalarInline(f5.d)));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C67E4;
    }
}

loc_804C67D0:
{
}

loc_804C67D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(121))) {
        goto loc_804C680C;
    }
}

loc_804C67D8:
{
}

loc_804C67DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(122))) {
        goto loc_804C6838;
    }
}

loc_804C67E0:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return f1.d;
}

loc_804C67E4:
{
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f4.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3, PPC_PsFromScalarInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f4.d), f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 12);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_12 = (r3 + 28);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12, PPC_PsFromScalarInline(f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_13 = (r3 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_14 = (r3 + 36);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_15 = (r3 + 20);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_15, f1.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return f1.d;
}

loc_804C680C:
{
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f3.d);
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9, f2.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return f1.d;
}

loc_804C6838:
{
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f4.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f4.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f1.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_804C67B0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804C67B0_ra18_36_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000037 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C67B0 func_804C67B0 preserves=true fpr_mask=0x00000000
