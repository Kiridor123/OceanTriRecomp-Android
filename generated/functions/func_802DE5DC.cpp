#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DE5DC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802DE5DCu);
    goto loc_802DE5DC;

loc_802DE5DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800470BC
}

loc_802DE604:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DE614;
    }
}

loc_802DE608:
{
    r3 = 0x806C0000u;
    r31 = (r3 + -296);
    goto loc_802DE628;
}

loc_802DE614:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r4 = (r0 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + -296);
    r31 = (r0 + r4);
}

loc_802DE628:
{
}

loc_802DE62C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802DE654;
    }
}

loc_802DE630:
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

loc_802DE638:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DE654;
    }
}

loc_802DE63C:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802DE648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DE654;
    }
}

loc_802DE64C:
{
    r3 = -1;
    goto loc_802DE6B8;
}

loc_802DE654:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802DE65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DE668;
    }
}

loc_802DE660:
{
    r3 = -1;
    goto loc_802DE6B8;
}

loc_802DE668:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DE670:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802DE694;
    }
}

loc_802DE674:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_802DE6B8;
}

loc_802DE694:
{
    r3 = MemoryInline::FlatRead16(r30);
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_802DE6A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802DE6B4;
    }
}

loc_802DE6A4:
{
    r0 = 4;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_802DE6B8;
}

loc_802DE6B4:
{
    r3 = -1;
}

loc_802DE6B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DE5DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DE5DC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DE5DC func_802DE5DC preserves=true fpr_mask=0x00000000
