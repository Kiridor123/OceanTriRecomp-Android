#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097E594(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8097E594;

loc_8097E594:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
    r4 = (r0 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r4 = (r0 + r4);
    r3 = MemoryInline::FlatRead16((r4 + 708));
    r0 = MemoryInline::FlatRead16((r4 + 724));
    r0 = (r3 | r0);
    r31 = (r0 & 65535);
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8097E5D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8097E5E0;
    }
}

loc_8097E5D8:
{
    r3 = 0;
    goto loc_8097E608;
}

loc_8097E5E0:
{
    r0 = (r31 & 1);
}

loc_8097E5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097E5F4;
    }
}

loc_8097E5EC:
{
    r3 = 1;
    goto loc_8097E608;
}

loc_8097E5F4:
{
    r3 = (r31 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 2);
}

loc_8097E608:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8097E594 func_8097E594 preserves=true fpr_mask=0x00000000
