#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B68E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804B68E0u);
    goto loc_804B68E0;

loc_804B68E0:
{
    r5 = MemoryHw::FlatRead32((r13 + -15440));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4_mrot_0 = (r4_rot_0 & -256);
    r4_mdest_0 = (r4 & 255);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryHw::FlatWrite16((r5 + 6), static_cast<uint16_t>(r4));
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000030 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B68E0 func_804B68E0 preserves=true fpr_mask=0x00000000
