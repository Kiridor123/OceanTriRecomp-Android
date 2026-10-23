#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501D0C(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];

    goto loc_80501D0C;

loc_80501D0C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 48);
    PpcSetPairedFprInline(f6, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 56);
    PpcSetPairedFprInline(f7, PPC_PsqLInline<0u, 0u>(ctx, r4_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStInline<0u, 0u>(ctx, r3, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_0, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 16);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_1, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_2, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_3, f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_4, f5.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 48);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_5, f6.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 56);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_6, f7.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80501D0C_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_lr, uint32_t native_gqr0)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};
    PPC_FPR cached_f4 = PPC_FPR{};
    PPC_FPR cached_f5 = PPC_FPR{};
    PPC_FPR cached_f6 = PPC_FPR{};
    PPC_FPR cached_f7 = PPC_FPR{};

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
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;

    goto loc_80501D0C;

loc_80501D0C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, cached_r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (cached_r4 + 8);
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (cached_r4 + 16);
    PpcSetPairedFprInline(cached_f2, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (cached_r4 + 24);
    PpcSetPairedFprInline(cached_f3, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (cached_r4 + 32);
    PpcSetPairedFprInline(cached_f4, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (cached_r4 + 40);
    PpcSetPairedFprInline(cached_f5, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (cached_r4 + 48);
    PpcSetPairedFprInline(cached_f6, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (cached_r4 + 56);
    PpcSetPairedFprInline(cached_f7, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r4_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, cached_r3, cached_f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (cached_r3 + 8);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_0, cached_f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (cached_r3 + 16);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_1, cached_f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (cached_r3 + 24);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_2, cached_f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (cached_r3 + 32);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_3, cached_f4.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (cached_r3 + 40);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_4, cached_f5.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (cached_r3 + 48);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_5, cached_f6.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (cached_r3 + 56);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_6, cached_f7.d);




    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80501D0C symbol=func_80501D0C_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501D0C func_80501D0C preserves=true fpr_mask=0x00000000


extern "C" double func_80501D0C_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80501D0C(ctx);
    return ctx->fpr[1].d;
}
