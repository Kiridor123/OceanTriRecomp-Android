#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808443F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x808443F0u);
    goto loc_808443F0;

loc_808443F0:
{
    r3 = (r3 + 20);
    // inline leaf 0x80842660 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x80842660
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808443F0 func_808443F0 preserves=true fpr_mask=0x00000000
