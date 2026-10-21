#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D6A5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800D6A5Cu);
    goto loc_800D6A5C;

loc_800D6A5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r3 = 24;
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r4 = (r30 - r3);
    r5 = MemoryInline::FlatRead32(r4);
}

loc_800D6A90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D6AA0;
    }
}

loc_800D6A94:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    goto loc_800D6AA8;
}

loc_800D6AA0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_800D6AA8:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800D6AB0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D6ABC;
    }
}

loc_800D6AB4:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_800D6ABC:
{
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r4 + 8));
}

loc_800D6AC8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800D6ADC;
    }
}

loc_800D6ACC:
{
    r0 = MemoryInline::FlatRead8((r6 + 20));
}

loc_800D6AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D6ADC;
    }
}

loc_800D6AD8:
{
    r5 = r6;
}

loc_800D6ADC:
{
    r6 = 0;
    r7 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800D6AE8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D6AFC;
    }
}

loc_800D6AEC:
{
    r0 = MemoryInline::FlatRead8((r7 + 20));
}

loc_800D6AF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D6AFC;
    }
}

loc_800D6AF8:
{
    r6 = r7;
}

loc_800D6AFC:
{
}

loc_800D6B00:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D6BAC;
    }
}

loc_800D6B04:
{
}

loc_800D6B08:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800D6B7C;
    }
}

loc_800D6B0C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 20u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
}

loc_800D6B14:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D6B24;
    }
}

loc_800D6B18:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    goto loc_800D6B2C;
}

loc_800D6B24:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    MemoryInline::FlatWrite32((r31 + 48), r0);
}

loc_800D6B2C:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
}

loc_800D6B34:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D6B40;
    }
}

loc_800D6B38:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_800D6B40:
{
    r8 = MemoryInline::FlatRead32((r5 + 16));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
    r3 = (r7 + r3);
    r0 = (r8 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
}

loc_800D6B70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D6C4C;
    }
}

loc_800D6B74:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_800D6C4C;
}

loc_800D6B7C:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r6 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 + r3);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r3 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800D6BA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D6C4C;
    }
}

loc_800D6BA4:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_800D6C4C;
}

loc_800D6BAC:
{
}

loc_800D6BB0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800D6C24;
    }
}

loc_800D6BB4:
{
    r7 = MemoryInline::FlatRead32(r6);
}

loc_800D6BBC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D6BC8;
    }
}

loc_800D6BC0:
{
    MemoryInline::FlatWrite32((r7 + 4), r4);
    goto loc_800D6BCC;
}

loc_800D6BC8:
{
    MemoryInline::FlatWrite32((r31 + 48), r4);
}

loc_800D6BCC:
{
    r7 = MemoryInline::FlatRead32((r6 + 4));
}

loc_800D6BD4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D6BDC;
    }
}

loc_800D6BD8:
{
    MemoryInline::FlatWrite32(r7, r4);
}

loc_800D6BDC:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r7 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r0 + r3);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32((r6 + 12));
}

loc_800D6C18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D6C4C;
    }
}

loc_800D6C1C:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_800D6C4C;
}

loc_800D6C24:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
}

loc_800D6C2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D6C34;
    }
}

loc_800D6C30:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_800D6C34:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 48), r4);
}

loc_800D6C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D6A5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D6A5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D6A5C func_800D6A5C preserves=true fpr_mask=0x00000000
