#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80838670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80838670;

loc_80838670:
{
    r3 = MemoryInline::FlatRead8((r3 + 67));
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80838670 func_80838670 preserves=true fpr_mask=0x00000000
