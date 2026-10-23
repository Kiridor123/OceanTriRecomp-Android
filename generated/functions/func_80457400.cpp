#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80457400;

loc_80457400:
{
    MemoryInline::FlatWriteFloat64((r11 + -8), f31.d);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000800 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x80000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457400 func_80457400 preserves=true fpr_mask=0x00000000
