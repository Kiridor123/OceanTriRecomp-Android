#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006FBC4_ra38_e_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t r3_psq_tmp_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8006FBC4;

loc_8006FBC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f0.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge11Inline(f0.d, f4.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f5.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f3.d)));
    MemoryInline::FlatWriteFloat32((r3 + 8), PPC_PsToScalarInline(f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge11Inline(f0.d, f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), PPC_PsToScalarInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

extern "C" void func_8006FBC4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8006FBC4_ra38_e_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000031 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006FBC4 func_8006FBC4 preserves=true fpr_mask=0x00000000
