#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80051430_ra38_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80051430;

loc_80051430:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_80051430(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80051430_ra38_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80051430 func_80051430 preserves=true fpr_mask=0x00000000
