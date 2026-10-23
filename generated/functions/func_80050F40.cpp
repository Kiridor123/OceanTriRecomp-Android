#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80050F40;

loc_80050F40:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80050F40_statefree_v0(uint32_t native_r3, PPC_FPR native_f1, uint32_t native_gqr0)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    goto loc_80050F40;

loc_80050F40:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, cached_r3));
    PpcSetPairedFprInline(cached_f0, PPC_PsMulInline(cached_f0.d, cached_f0.d));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 8));
    PpcSetPairedFprInline(cached_f1, PPC_PsMaddInline(PPC_PsFromScalarInline(cached_f1.d), PPC_PsFromScalarInline(cached_f1.d), cached_f0.d));
    PpcSetPairedFprInline(cached_f1, PPC_PsSum0Inline(cached_f1.d, cached_f0.d, cached_f0.d));

    return cached_f1.raw;
}


    return cached_f1.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80050F40 symbol=func_80050F40_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80050F40_statefree(uint32_t native_r3, PPC_FPR native_f0, PPC_FPR native_f1, uint32_t native_gqr0)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    goto loc_80050F40;

loc_80050F40:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, cached_r3));
    PpcSetPairedFprInline(cached_f0, PPC_PsMulInline(cached_f0.d, cached_f0.d));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 8));
    PpcSetPairedFprInline(cached_f1, PPC_PsMaddInline(PPC_PsFromScalarInline(cached_f1.d), PPC_PsFromScalarInline(cached_f1.d), cached_f0.d));
    PpcSetPairedFprInline(cached_f1, PPC_PsSum0Inline(cached_f1.d, cached_f0.d, cached_f0.d));

    return { cached_f0.raw, cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80050F40 symbol=func_80050F40_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000003 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050F40 func_80050F40 preserves=true fpr_mask=0x00000000


extern "C" double func_80050F40_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80050F40(ctx);
    return ctx->fpr[1].d;
}
