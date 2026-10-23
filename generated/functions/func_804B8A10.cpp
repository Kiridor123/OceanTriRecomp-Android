#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8A10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_804B8A10;

loc_804B8A10:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_mrot_0 = (r4 & 3);
    r0_mdest_0 = (r0 & -4);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_0 & 12);
    r0_mdest_1 = (r0 & -13);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8A10 func_804B8A10 preserves=true fpr_mask=0x00000000
