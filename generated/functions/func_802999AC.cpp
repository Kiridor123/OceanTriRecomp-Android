#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802999AC_ra38_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802999AC;

loc_802999AC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80299A18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80299A20;
    }
}

loc_80299A1C:
{
    MemoryInline::FlatWriteFloat32(r30, PPC_PsToScalarInline(f1.d));
}

loc_80299A20:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802999AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802999AC_ra38_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802999AC func_802999AC preserves=true fpr_mask=0x00000000
