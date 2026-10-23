#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802A0368;

loc_802A0368:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r4 = 0x806B0000u;
    r31 = (r4 + -4792);
    r30 = 0;
}

loc_802A0394:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A03D0;
    }
}

loc_802A0398:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802A03A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A03B8;
    }
}

loc_802A03A8:
{
}

loc_802A03AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A03D0;
    }
}

loc_802A03B0:
{
    r3 = 0;
    goto loc_802A03EC;
}

loc_802A03B8:
{
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800470BC
}

loc_802A03C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A03D0;
    }
}

loc_802A03C4:
{
    r30 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r30 * 816);
    r31 = (r31 + r0);
}

loc_802A03D0:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A03D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A03E4;
    }
}

loc_802A03DC:
{
    r3 = 1;
    goto loc_802A03EC;
}

loc_802A03E4:
{
    r3 = (r30 & 255);
    // inline leaf 0x802DE6D4 (10 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -296);
    r0 = (r3 & 255);
    r0 = (r0 * 304);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x802DE6D4
}

loc_802A03EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A0368(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A0368_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0368 func_802A0368 preserves=true fpr_mask=0x00000000
