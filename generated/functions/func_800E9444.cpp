#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E9444_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E9444u);
    goto loc_800E9444;

loc_800E9444:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r3 = (r3 + 24);
    // inline leaf 0x800E9668 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800E9668
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_800E9470:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E9610;
    }
}

loc_800E9474:
{
    r29 = (r3 + -2147483648);
    r29 = (r29 + 16);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r28 = (r28_rot_1 & -2);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(31));
    r27 = (r27_rot_1 & 2147483647);
    r26 = 0;
    r31 = 0;
    goto loc_800E95FC;
}

loc_800E9490:
{
    r3 = r25;
    r4 = r26;
    // inline leaf 0x800E9628 (16 guest instruction(s))
}

loc_inl2_0x800E9628:
{
    r3 = (r3 + 24);
}

loc_inl2_0x800E9630:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800E9638:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800E9644;
    }
}

loc_inl2_0x800E963C:
{
    r3 = 0;
    goto loc_inl2_cont_800E9628;
}

loc_inl2_0x800E9644:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl2_0x800E964C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_inl2_0x800E9658;
    }
}

loc_inl2_0x800E9650:
{
    r3 = 0;
    goto loc_inl2_cont_800E9628;
}

loc_inl2_0x800E9658:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_inl2_cont_800E9628:
{
    // end of inlined leaf 0x800E9628
}

loc_800E94A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E95F8;
    }
}

loc_800E94A4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800E94AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E94DC;
    }
}

loc_800E94B0:
{
}

loc_800E94B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800E9508;
    }
}

loc_800E94B8:
{
}

loc_800E94BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800E953C;
    }
}

loc_800E94C0:
{
}

loc_800E94C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800E9568;
    }
}

loc_800E94C8:
{
}

loc_800E94CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_800E959C;
    }
}

loc_800E94D0:
{
}

loc_800E94D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_800E95C8;
    }
}

loc_800E94D8:
{
    goto loc_800E95F8;
}

loc_800E94DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_800E95F8;
}

loc_800E9508:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_800E95F8;
}

loc_800E953C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_800E95F8;
}

loc_800E9568:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_800E95F8;
}

loc_800E959C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_800E95F8;
}

loc_800E95C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_800E95F8:
{
    r26 = (r26 + 1);
}

loc_800E95FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_800E9604:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_800E9490;
    }
}

loc_800E9608:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_800E9610:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E9444(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E9444_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E9444 func_800E9444 preserves=true fpr_mask=0x00000000
