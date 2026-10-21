#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501574_ra38_e_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];
    [[maybe_unused]] uint32_t mkw_gqr3 = ctx->gqr[3];

    MKW_GUEST_ENTER(0x80501574u);
    goto loc_80501574;

loc_80501574:
{
    f0.d = std::fabs(f1.d);
    r5 = 0x80570000u;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1536));
    r5 = (r5 + 17568);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 3u>(ctx, mkw_gqr3, r3, PPC_PsFromScalarInline(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8050158C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805015A0;
    }
}

loc_80501590:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80501598:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501590;
    }
}

loc_8050159C:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 3u>(ctx, mkw_gqr3, r3, PPC_PsFromScalarInline(f0.d));
}

loc_805015A0:
{
    r0 = MemoryInline::FlatRead16(r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f2.d));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r5 = (r5 + r0);
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_805015BC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f2.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f3.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(f0.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805015D8;
    }
}

loc_805015D4:
{
    PpcSetPairedFprInline(f0, PPC_PsNegInline(f0.d));
}

loc_805015D8:
{
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_80501574(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80501574_ra38_e_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000001D fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501574 func_80501574 preserves=true fpr_mask=0x00000000
