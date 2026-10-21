#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BACB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804BACB0u);
    goto loc_804BACB0;

loc_804BACB0:
{
    r4 = MemoryHw::FlatRead32((r2 + -2480));
    r0 = MemoryHw::FlatRead32((r4 + 128));
    r0_mrot_0 = (r3 & 63);
    r0_mdest_0 = (r0 & -64);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryHw::FlatWrite32((r4 + 128), r0);
    r0 = MemoryHw::FlatRead32((r4 + 1532));
    r0 = (r0 | 67108864);
    MemoryHw::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BACB0 func_804BACB0 preserves=true fpr_mask=0x00000000
