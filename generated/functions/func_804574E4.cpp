#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r11 = ctx->gpr[11];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804574E4;

loc_804574E4:
{
    r31 = MemoryInline::FlatRead32((r11 + -4));
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000800 gpr_write=0x80000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804574E4 func_804574E4 preserves=true fpr_mask=0x00000000
