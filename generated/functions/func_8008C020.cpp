#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8008C020_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    [[maybe_unused]] uint32_t mkw_gqr2 = ctx->gqr[2];

    goto loc_8008C020;

loc_8008C020:
{
    // psq_load w=1 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 2u>(ctx, mkw_gqr2, r3));
    return f1.d;
}

}

extern "C" void func_8008C020(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8008C020_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C020 func_8008C020 preserves=true fpr_mask=0x00000000
