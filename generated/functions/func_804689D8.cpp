#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804689D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];

    goto loc_804689D8;

loc_804689D8:
{
    PPC_TrapWord(31, r0, 0);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804689D8 func_804689D8 preserves=true fpr_mask=0x00000000
