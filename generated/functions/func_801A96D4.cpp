#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801A96D4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801A96D4u);
    goto loc_801A96D4;

loc_801A96D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_801A96F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A9710;
    }
}

loc_801A96F4:
{
}

loc_801A96F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801A9720;
    }
}

loc_801A96FC:
{
}

loc_801A9700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801A9730;
    }
}

loc_801A9704:
{
}

loc_801A9708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801A9754;
    }
}

loc_801A970C:
{
    goto loc_801A9774;
}

loc_801A9710:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite16((r3 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A9774;
}

loc_801A9720:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite16((r3 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A9774;
}

loc_801A9730:
{
    r4 = 6;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801A9740:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801A9774;
    }
}

loc_801A9744:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A9774;
}

loc_801A9754:
{
    r4 = 7;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801A9764:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801A9774;
    }
}

loc_801A9768:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_801A9774:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A96D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A96D4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A96D4 func_801A96D4 preserves=true fpr_mask=0x00000000
