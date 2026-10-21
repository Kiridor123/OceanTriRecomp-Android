#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8006F8FC_ra18_e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8006F8FCu);
    goto loc_8006F8FC;

loc_8006F8FC:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31992));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f2.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(f1.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 40), f3.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[4] = f4;
    return f1.d;
}

}

extern "C" void func_8006F8FC(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8006F8FC_ra18_e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000017 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006F8FC func_8006F8FC preserves=true fpr_mask=0x00000000
