#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801424D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801424D0u);
    goto loc_801424D0;

loc_801424D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r25 = r4;
    r29 = r5;
    r26 = r6;
    r30 = r7;
    r31 = 0;
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_0 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_80142514:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80142540;
    }
}

loc_80142518:
{
    r3 = 255;
    goto loc_801425DC;
}

loc_80142524:
{
    r3 = (r25 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80142538:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8014254C;
    }
}

loc_8014253C:
{
    r27 = (r27 + 8);
}

loc_80142540:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80142548:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80142524;
    }
}

loc_8014254C:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
}

loc_80142554:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80142560;
    }
}

loc_80142558:
{
    r3 = 255;
    goto loc_801425DC;
}

loc_80142560:
{
    r5 = r3;
    goto loc_80142570;
}

loc_80142568:
{
    r31 = (r31 + 1);
    r3 = (r3 + 48);
}

loc_80142570:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80142578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80142568;
    }
}

loc_8014257C:
{
    r3 = (r31 & 255);
}

loc_80142584:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80142590;
    }
}

loc_80142588:
{
    r3 = 255;
    goto loc_801425DC;
}

loc_80142590:
{
    r0 = (r26 & 255);
}

loc_80142598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801425B4;
    }
}

loc_8014259C:
{
    r0 = (r28 & 255);
}

loc_801425A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(15))) {
        goto loc_801425B4;
    }
}

loc_801425A8:
{
}

loc_801425AC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(3))) {
        goto loc_801425B4;
    }
}

loc_801425B0:
{
    r31 = 2;
}

loc_801425B4:
{
    r4 = (r29 & 65535);
    r3 = (r31 & 255);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r0 & 255);
    r0 = (r3 * 48);
    r4 = (r5 + r0);
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801425DC:
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

extern "C" void func_801424D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801424D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801424D0 func_801424D0 preserves=true fpr_mask=0x00000000
