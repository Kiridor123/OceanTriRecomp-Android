#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B68F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804B68F0;

loc_804B68F0:
{
    r4 = MemoryHw::FlatRead32((r13 + -15440));
    r0 = 0;
    r0_mrot_0 = (r3 & 3);
    r0_mdest_0 = (r0 & -4);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 | 4);
    MemoryHw::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B68F0 func_804B68F0 preserves=true fpr_mask=0x00000000
