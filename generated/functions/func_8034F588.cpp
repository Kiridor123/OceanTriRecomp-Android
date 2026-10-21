#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034F588_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8034F588u);
    goto loc_8034F588;

loc_8034F588:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_8034F5A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8034F5B4;
    }
}

loc_8034F5A8:
{
}

loc_8034F5AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034F5CC;
    }
}

loc_8034F5B0:
{
    goto loc_8034F5E0;
}

loc_8034F5B4:
{
    r4 = MemoryInline::FlatRead16((r3 + 814));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2150954420);
}

loc_8034F5BC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8034F5E0;
    }
}

loc_8034F5C0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    goto loc_8034F5E0;
}

loc_8034F5CC:
{
    r4 = MemoryInline::FlatRead16((r3 + 816));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2150954444);
}

loc_8034F5D4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8034F5E0;
    }
}

loc_8034F5D8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 816), static_cast<uint16_t>(r0));
}

loc_8034F5E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_8034F5E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8034F5F8;
    }
}

loc_8034F5EC:
{
    r3 = r31;
    r4 = 0;
    // inline leaf 0x80131F90 (10 guest instruction(s))
    r6 = MemoryInline::FlatRead8((r3 + 2080));
    r5 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r3 + 2080), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 2081), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131F90
}

loc_8034F5F8:
{
    r3 = MemoryInline::FlatRead16((r31 + 818));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150954488);
}

loc_8034F600:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8034F60C;
    }
}

loc_8034F604:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 818), static_cast<uint16_t>(r0));
}

loc_8034F60C:
{
    r3 = r31;
    r4 = 0;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_8034F620:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8034F65C;
    }
}

loc_8034F624:
{
    r3 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r3 & 32768);
}

loc_8034F630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034F63C;
    }
}

loc_8034F634:
{
    r0 = (r3 | 32768);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_8034F63C:
{
    r0 = MemoryInline::FlatRead8((r31 + 484));
}

loc_8034F644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034F65C;
    }
}

loc_8034F648:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 484), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 814), static_cast<uint16_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r31 + 816), static_cast<uint16_t>(r0));
}

loc_8034F65C:
{
    r0 = MemoryInline::FlatRead8((r31 + 810));
}

loc_8034F664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034F67C;
    }
}

loc_8034F668:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_8034F670:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8034F67C;
    }
}

loc_8034F674:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 810), static_cast<uint8_t>(r0));
}

loc_8034F67C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034F588(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034F588_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034F588 func_8034F588 preserves=true fpr_mask=0x00000000
