#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E0B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8082E0B0u);
    goto loc_8082E0B0;

loc_8082E0B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_0 & 480);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082E0B0 func_8082E0B0 preserves=true fpr_mask=0x00000000
