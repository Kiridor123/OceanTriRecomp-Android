#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804C2EA0u);
    goto loc_804C2EA0;

loc_804C2EA0:
{
    MemoryInline::FlatWrite32((r13 + -15220), r3);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C2EA0 func_804C2EA0 preserves=true fpr_mask=0x00000000
