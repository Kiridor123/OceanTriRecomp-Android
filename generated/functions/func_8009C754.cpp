#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009C754(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];
    [[maybe_unused]] uint32_t mkw_gqr3 = ctx->gqr[3];

    goto loc_8009C754;

loc_8009C754:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31480));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31528));
    r4 = 0x80570000u;
    r4 = (r4 + 17568);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = std::fabs(f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 3u>(ctx, mkw_gqr3, r3, PPC_PsFromScalarInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8009C774:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009C788;
    }
}

loc_8009C778:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8009C780:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C778;
    }
}

loc_8009C784:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 3u>(ctx, mkw_gqr3, r3, PPC_PsFromScalarInline(f1.d));
}

loc_8009C788:
{
    r0 = MemoryInline::FlatRead16(r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f2.d));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r4 = (r4 + r0);
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r3));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f3.d, PPC_PsFromScalarInline(f2.d), f1.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8009C7B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C7BC;
    }
}

loc_8009C7B4:
{
    PpcSetPairedFprInline(f0, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f0.d, f1.d));
}

loc_8009C7BC:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009C754 func_8009C754 preserves=true fpr_mask=0x00000000
