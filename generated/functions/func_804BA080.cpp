#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_804BA080;

loc_804BA080:
{
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r4 + 596));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r3_mrot_0 = (r3_rot_0 & 15360);
    r3_mdest_0 = (r3 & -15361);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite32((r4 + 596), r3);
    r0 = MemoryInline::FlatRead32((r4 + 1532));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA080 func_804BA080 preserves=true fpr_mask=0x00000000
