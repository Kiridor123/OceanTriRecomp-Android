#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80052278;

loc_80052278:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLInline<0u, 0u>(ctx, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80052278_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f1, PPC_FPR native_f2, uint32_t native_gqr0)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};

    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;

    goto loc_80052278;

loc_80052278:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (cached_r3 + 4);
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (cached_r4 + 4);
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(cached_f0, PPC_PsMulInline(cached_f0.d, cached_f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f2, PPC_PsqLStateInline<1u, 0u, false>(native_gqr0, cached_r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<1u, 0u, false>(native_gqr0, cached_r4));
    PpcSetPairedFprInline(cached_f1, PPC_PsMaddInline(cached_f2.d, cached_f1.d, cached_f0.d));
    PpcSetPairedFprInline(cached_f1, PPC_PsSum0Inline(cached_f1.d, cached_f0.d, cached_f0.d));

return { cached_f1.raw, cached_f2.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80052278 symbol=func_80052278_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000006 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052278 func_80052278 preserves=true fpr_mask=0x00000000


extern "C" double func_80052278_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80052278(ctx);
    return ctx->fpr[1].d;
}
