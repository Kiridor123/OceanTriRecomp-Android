#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800502A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    [[maybe_unused]] uint32_t mkw_gqr3 = ctx->gqr[3];

    goto loc_800502A8;

loc_800502A8:
{
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 3u>(ctx, mkw_gqr3, r3));
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800502A8 func_800502A8 preserves=true fpr_mask=0x00000000
