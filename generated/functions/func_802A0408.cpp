#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A0408_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x802A0408u);
    goto loc_802A0408;

loc_802A0408:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806B0000u;
    r3 = (r4 + -4792);
    r0 = MemoryInline::FlatRead8((r3 + 14));
}

loc_802A0424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A043C;
    }
}

loc_802A0428:
{
    r0 = MemoryInline::FlatRead8((r4 + -4792));
}

loc_802A0430:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802A043C;
    }
}

loc_802A0434:
{
    r3 = 1;
    goto loc_802A0458;
}

loc_802A043C:
{
    r3 = 0;
    // inline leaf 0x802DE6D4 (10 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -296);
    r0 = (r3 & 255);
    r0 = (r0 * 304);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802DE6D4
}

loc_802A0448:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0454;
    }
}

loc_802A044C:
{
    r3 = 1;
    goto loc_802A0458;
}

loc_802A0454:
{
    r3 = 0;
}

loc_802A0458:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_802A0408(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A0408_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000013 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0408 func_802A0408 preserves=true fpr_mask=0x00000000
