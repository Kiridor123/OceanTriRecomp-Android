#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A0338_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x802A0338u);
    goto loc_802A0338;

loc_802A0338:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    r3 = (r3 & 255);
    r0 = (r3 * 816);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_802A0354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0360;
    }
}

loc_802A0358:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_802A0360:
{
    // inline leaf 0x802DE6D4 (10 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -296);
    r0 = (r3 & 255);
    r0 = (r0 * 304);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x802DE6D4
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_802A0338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A0338_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0338 func_802A0338 preserves=true fpr_mask=0x00000000
