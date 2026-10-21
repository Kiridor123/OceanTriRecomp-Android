#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8008B6B4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    [[maybe_unused]] uint32_t mkw_gqr7 = ctx->gqr[7];

    MKW_GUEST_ENTER(0x8008B6B4u);
    goto loc_8008B6B4;

loc_8008B6B4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 4);
}

loc_8008B6C0:
{
    // psq_load w=1 quant=7 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 7u>(ctx, mkw_gqr7, r3));
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_8008B6B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8008B6B4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008B6B4 func_8008B6B4 preserves=true fpr_mask=0x00000000
