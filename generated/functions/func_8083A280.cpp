#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083A280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8083A280u);
    goto loc_8083A280;

loc_8083A280:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead8(r3);
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083A280 func_8083A280 preserves=true fpr_mask=0x00000000
