#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E37D0_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addr_dcbz_0 = 0;
    uint32_t r0_addr_dcbz_1 = 0;
    uint32_t r0_addr_dcbz_2 = 0;
    uint32_t r0_addr_dcbz_al_0 = 0;
    uint32_t r0_addr_dcbz_al_1 = 0;
    uint32_t r0_addr_dcbz_al_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r10_addr_8 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;
    uint32_t r12_addr_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r29_mdest_0 = 0;
    uint32_t r29_mdest_1 = 0;
    uint32_t r29_mdest_2 = 0;
    uint32_t r29_mdest_3 = 0;
    uint32_t r29_mdest_4 = 0;
    uint32_t r29_mdest_5 = 0;
    uint32_t r29_mdest_6 = 0;
    uint32_t r29_mrot_0 = 0;
    uint32_t r29_mrot_1 = 0;
    uint32_t r29_mrot_2 = 0;
    uint32_t r29_mrot_3 = 0;
    uint32_t r29_mrot_4 = 0;
    uint32_t r29_mrot_5 = 0;
    uint32_t r29_mrot_6 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_10 = 0;
    uint32_t r29_rot_11 = 0;
    uint32_t r29_rot_12 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r29_rot_6 = 0;
    uint32_t r29_rot_7 = 0;
    uint32_t r29_rot_8 = 0;
    uint32_t r29_rot_9 = 0;
    uint32_t r30_mdest_0 = 0;
    uint32_t r30_mdest_1 = 0;
    uint32_t r30_mdest_2 = 0;
    uint32_t r30_mdest_3 = 0;
    uint32_t r30_mdest_4 = 0;
    uint32_t r30_mdest_5 = 0;
    uint32_t r30_mrot_0 = 0;
    uint32_t r30_mrot_1 = 0;
    uint32_t r30_mrot_2 = 0;
    uint32_t r30_mrot_3 = 0;
    uint32_t r30_mrot_4 = 0;
    uint32_t r30_mrot_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_10 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r30_rot_7 = 0;
    uint32_t r30_rot_8 = 0;
    uint32_t r30_rot_9 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_dcbz_0 = 0;
    uint32_t r4_addr_dcbz_al_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804E37D0u);
    goto loc_804E37D0;

loc_804E37D0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r4_addr_dcbz_0 = r4;
    r4_addr_dcbz_al_0 = (r4_addr_dcbz_0 & -32);
    memset_zero_32(r4_addr_dcbz_al_0);
    r12 = MemoryInline::FlatRead32((r3 + 1700));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -14528), 0, 100u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r13 + -14432));
}

loc_804E37F4:
{
    r11 = MemoryInline::FlatRead32((r3 + 1696));
    r5 = (r12 + 4);
    r10 = (r8 + 32);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r9 = (r9_rot_0 & 31);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(28))) {
        goto loc_804E38C0;
    }
}

loc_804E3808:
{
    r8_addr_0 = (r8 + r9);
    r5 = MemoryInline::FlatRead8(r8_addr_0);
    r10_addr_0 = (r10 + r9);
    r10 = MemoryInline::FlatRead8(r10_addr_0);
}

loc_804E3814:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_804E3824;
    }
}

loc_804E3818:
{
    r12 = (r12 + r10);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    goto loc_804E3A64;
}

loc_804E3824:
{
    r6 = (r8 + 88);
    r5 = 5;
    r12 = (r12 + 5);
}

loc_804E3830:
{
}

loc_804E3834:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_804E3850;
    }
}

loc_804E383C:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_2 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
    r12 = (r12 + 1);
    goto loc_804E3894;
}

loc_804E3850:
{
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r12 = 1;
    r10 = (r10 + 4);
    r11 = MemoryInline::FlatRead32(r10);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r9_mrot_1 = (r9_rot_3 & 1);
    r9_mdest_1 = (r9 & -2);
    r9 = (r9_mdest_1 | r9_mrot_1);
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    goto loc_804E3880;
}

loc_804E3870:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & -2);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_4 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
}

loc_804E3880:
{
}

loc_804E3884:
{
    r12 = (r12 + 1);
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_804E3870;
    }
}

loc_804E3890:
{
    goto loc_804E38A0;
}

loc_804E3894:
{
}

loc_804E3898:
{
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_804E3830;
    }
}

loc_804E38A0:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r0 + r9);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_1);
    goto loc_804E3A64;
}

loc_804E38C0:
{
}

loc_804E38C4:
{
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_804E3978;
    }
}

loc_804E38CC:
{
}

loc_804E38D0:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r5 = (r5_rot_1 & 31);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(32))) {
        goto loc_804E3900;
    }
}

loc_804E38D8:
{
    r8_addr_1 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_1);
    r10_addr_1 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_1);
}

loc_804E38E4:
{
    r5 = (r12 + r10);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(255))) {
        goto loc_804E39DC;
    }
}

loc_804E38EC:
{
}

loc_804E38F0:
{
    MemoryInline::FlatWrite32((r3 + 1700), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(33))) {
        goto loc_804E39DC;
    }
}

loc_804E38F8:
{
    r5 = r9;
    goto loc_804E3A64;
}

loc_804E3900:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r5_mrot_2 = (r5_rot_6 & 15);
    r5_mdest_2 = (r5 & -16);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r8_addr_2 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_2);
    r10_addr_2 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_2);
}

loc_804E3918:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 1700), r10);
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 1696), r11);
    }
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(255))) {
        goto loc_804E392C;
    }
}

loc_804E3924:
{
    r5 = r9;
    goto loc_804E3A64;
}

loc_804E392C:
{
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r9 = (r9_rot_7 & -134217728);
    r6 = (r8 + 88);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r9_mrot_3 = (r9_rot_8 & 2147483647);
    r9_mdest_3 = (r9 & -2147483648);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r12 = 5;
    // nop
}

loc_804E3940:
{
    r11 = (31 - r12);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r12 = (r12 + 1);
}

loc_804E3954:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E3940;
    }
}

loc_804E3958:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
}

loc_804E395C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = MemoryInline::FlatRead32((r8 + 64));
    r6 = (r8 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r7 + r5);
    r6_addr_2 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    goto loc_804E3A64;
}

loc_804E3978:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(5));
    r5 = (r5_rot_8 & 31);
    r8_addr_4 = (r8 + r5);
    r12 = MemoryInline::FlatRead8(r8_addr_4);
    r10_addr_4 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_4);
}

loc_804E3990:
{
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r10 = (r10 + 1);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_804E39A8;
    }
}

loc_804E399C:
{
    MemoryInline::FlatWrite32((r3 + 1700), r10);
    r5 = r12;
    goto loc_804E3A64;
}

loc_804E39A8:
{
    r12 = 5;
    r6 = 20;
}

loc_804E39B0:
{
    r9 = (31 - r12);
    r6 = (r6 + 4);
    r5 = (r8 + r6);
    r12 = (r12 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    r5 = PPC_Srw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
}

loc_804E39CC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E39B0;
    }
}

loc_804E39D0:
{
    r0 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    goto loc_804E395C;
}

loc_804E39DC:
{
    r0 = (33 - r12);
    r5 = -1;
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    r5 = (r11 & ~r7);
    r7 = (r8 + 68);
    r6 = (33 - r12);
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    r12 = (r6 + 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r7 = (r7 + r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5_mrot_1 = (r5_rot_3 & 1);
    r5_mdest_1 = (r5 & -2);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r9 = 2;
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    goto loc_804E3A3C;
}

loc_804E3A28:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    r5 = (r5 + r10);
    r9 = (r9 + 1);
    r12 = (r12 + 1);
}

loc_804E3A3C:
{
}

loc_804E3A40:
{
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
    r10 = (r10_rot_7 & 1);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_804E3A28;
    }
}

loc_804E3A48:
{
    MemoryInline::FlatWrite32((r3 + 1700), r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r0 + r5);
    r6_addr_1 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_1);
}

loc_804E3A64:
{
    r0 = 32;
    r0_addr_dcbz_0 = (r4 + r0);
    r0_addr_dcbz_al_0 = (r0_addr_dcbz_0 & -32);
    memset_zero_32(r0_addr_dcbz_al_0);
    r0 = 64;
    r7 = 0;
    r0_addr_dcbz_1 = (r4 + r0);
    r0_addr_dcbz_al_1 = (r0_addr_dcbz_1 & -32);
    memset_zero_32(r0_addr_dcbz_al_1);
}

loc_804E3A7C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804E3B04;
    }
}

loc_804E3A80:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 1700));
    r8 = (33 - r7);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r3 + 1696));
    r9 = (r5 - r8);
    r10 = (r7 + -1);
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(0))) {
        goto loc_804E3AB0;
    }
}

loc_804E3A98:
{
    r0 = (r7 + r5);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    r7 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r0 = (32 - r5);
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    goto loc_804E3ADC;
}

loc_804E3AB0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r7 = MemoryInline::FlatRead32((r3 + 1692));
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite32((r3 + 1696), r6);
    r6 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    MemoryInline::FlatWrite32((r3 + 1692), r7);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 1700), r9);
    r9 = (32 - r5);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
}

loc_804E3ADC:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (32 - r5);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
}

loc_804E3AEC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_804E3B04;
    }
}

loc_804E3AF0:
{
    r0 = -1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = (r7 + r0);
    r0 = (r5 + 1);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804E3B04:
{
    r0 = 96;
    r0_addr_dcbz_2 = (r4 + r0);
    r0_addr_dcbz_al_2 = (r0_addr_dcbz_2 & -32);
    memset_zero_32(r0_addr_dcbz_al_2);
    r10 = 0x80570000u;
    r0 = MemoryInline::FlatRead16((r3 + 1668));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r10 = (r10 + 17272);
    r5 = 1;
    r11 = -1;
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 1668), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14528));
    r6 = MemoryInline::FlatRead32((r3 + 1700));
    r0 = MemoryInline::FlatRead32((r3 + 1696));
    r7 = (r8 + 32);
    goto loc_804E3E1C;
}

loc_804E3B40:
{
}

loc_804E3B44:
{
    r30 = (r6 + 4);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r29 = (r29_rot_2 & 31);
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(28))) {
        goto loc_804E3C04;
    }
}

loc_804E3B50:
{
    r8_addr_7 = (r8 + r29);
    r31 = MemoryInline::FlatRead8(r8_addr_7);
    r7_addr_2 = (r7 + r29);
    r30 = MemoryInline::FlatRead8(r7_addr_2);
}

loc_804E3B5C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(255))) {
        goto loc_804E3B68;
    }
}

loc_804E3B60:
{
    r6 = (r6 + r30);
    goto loc_804E3D88;
}

loc_804E3B68:
{
    r9 = (r8 + 88);
    r30 = 5;
    r6 = (r6 + 5);
    // nop
}

loc_804E3B78:
{
}

loc_804E3B7C:
{
    r29_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_4 & -2);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(33))) {
        goto loc_804E3B98;
    }
}

loc_804E3B84:
{
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r31 = (r31_rot_3 & 1);
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    r29 = (r29 | r31);
    r6 = (r6 + 1);
    goto loc_804E3BDC;
}

loc_804E3B98:
{
    r31 = MemoryInline::FlatRead32((r3 + 1692));
    r6 = 1;
    r31 = (r31 + 4);
    r0 = MemoryInline::FlatRead32(r31);
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    r29_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29_mrot_2 = (r29_rot_5 & 1);
    r29_mdest_2 = (r29 & -2);
    r29 = (r29_mdest_2 | r29_mrot_2);
    MemoryInline::FlatWrite32((r3 + 1692), r31);
    goto loc_804E3BC8;
}

loc_804E3BB8:
{
    r29_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_7 & -2);
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r31 = (r31_rot_5 & 1);
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    r29 = (r29 | r31);
}

loc_804E3BC8:
{
}

loc_804E3BCC:
{
    r6 = (r6 + 1);
    r30 = (r30 + 1);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r12))) {
        goto loc_804E3BB8;
    }
}

loc_804E3BD8:
{
    goto loc_804E3BE8;
}

loc_804E3BDC:
{
}

loc_804E3BE0:
{
    r30 = (r30 + 1);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r12))) {
        goto loc_804E3B78;
    }
}

loc_804E3BE8:
{
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r9 = (r9_rot_12 & -4);
    r31 = MemoryInline::FlatRead32((r8 + 64));
    r9 = (r8 + r9);
    r12 = MemoryInline::FlatRead32((r9 + 140));
    r9 = (r31 + r29);
    r12_addr_2 = (r12 + r9);
    r31 = MemoryInline::FlatRead8(r12_addr_2);
    goto loc_804E3D88;
}

loc_804E3C04:
{
}

loc_804E3C08:
{
    r29 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(33))) {
        goto loc_804E3C40;
    }
}

loc_804E3C10:
{
}

loc_804E3C14:
{
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r30 = (r30_rot_2 & 31);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_804E3CA8;
    }
}

loc_804E3C1C:
{
    r8_addr_8 = (r8 + r30);
    r31 = MemoryInline::FlatRead8(r8_addr_8);
    r7_addr_3 = (r7 + r30);
    r28 = MemoryInline::FlatRead8(r7_addr_3);
}

loc_804E3C28:
{
    r30 = (r6 + r28);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(255))) {
        goto loc_804E3D0C;
    }
}

loc_804E3C30:
{
}

loc_804E3C34:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(33))) {
        goto loc_804E3D0C;
    }
}

loc_804E3C38:
{
    r6 = r30;
    goto loc_804E3D88;
}

loc_804E3C40:
{
    r29 = (r29 + 4);
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 1692), r29);
    r30_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r30 = (r30_rot_8 & 31);
    r8_addr_10 = (r8 + r30);
    r31 = MemoryInline::FlatRead8(r8_addr_10);
    r7_addr_5 = (r7 + r30);
    r29 = MemoryInline::FlatRead8(r7_addr_5);
}

loc_804E3C58:
{
    r6 = (r29 + 1);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(255))) {
        goto loc_804E3C64;
    }
}

loc_804E3C60:
{
    goto loc_804E3D88;
}

loc_804E3C64:
{
    r31 = 5;
    r6 = 20;
    // nop
}

loc_804E3C70:
{
    r29 = (31 - r31);
    r6 = (r6 + 4);
    r12 = (r8 + r6);
    r31 = (r31 + 1);
    r9 = MemoryInline::FlatRead32((r12 + 68));
    r30 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_804E3C8C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r9))) {
        goto loc_804E3C70;
    }
}

loc_804E3C90:
{
    r9 = MemoryInline::FlatRead32((r8 + 64));
    r6 = (r31 + 1);
    r12 = MemoryInline::FlatRead32((r12 + 140));
    r9 = (r9 + r30);
    r12_addr_5 = (r12 + r9);
    r31 = MemoryInline::FlatRead8(r12_addr_5);
    goto loc_804E3D88;
}

loc_804E3CA8:
{
    r29 = (r29 + 4);
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 1692), r29);
    r30_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r30_mrot_3 = (r30_rot_7 & 15);
    r30_mdest_3 = (r30 & -16);
    r30 = (r30_mdest_3 | r30_mrot_3);
    r8_addr_9 = (r8 + r30);
    r31 = MemoryInline::FlatRead8(r8_addr_9);
    r7_addr_4 = (r7 + r30);
    r6 = MemoryInline::FlatRead8(r7_addr_4);
}

loc_804E3CC0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(255))) {
        goto loc_804E3CC8;
    }
}

loc_804E3CC4:
{
    goto loc_804E3D88;
}

loc_804E3CC8:
{
    r29_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(27));
    r29 = (r29_rot_9 & -134217728);
    r9 = (r8 + 88);
    r29_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r29_mrot_4 = (r29_rot_10 & 2147483647);
    r29_mdest_4 = (r29 & -2147483648);
    r29 = (r29_mdest_4 | r29_mrot_4);
    r6 = 5;
}

loc_804E3CD8:
{
    r31 = (31 - r6);
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    r30 = PPC_Srw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
    r6 = (r6 + 1);
}

loc_804E3CEC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r12))) {
        goto loc_804E3CD8;
    }
}

loc_804E3CF0:
{
    r9_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r9 = (r9_rot_14 & -4);
    r31 = MemoryInline::FlatRead32((r8 + 64));
    r9 = (r8 + r9);
    r12 = MemoryInline::FlatRead32((r9 + 140));
    r9 = (r31 + r30);
    r12_addr_4 = (r12 + r9);
    r31 = MemoryInline::FlatRead8(r12_addr_4);
    goto loc_804E3D88;
}

loc_804E3D0C:
{
    r9 = (33 - r6);
    r29 = MemoryInline::FlatRead32((r3 + 1692));
    r9 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
    r30 = (r0 & ~r9);
    r9 = (r8 + 68);
    r12 = (33 - r6);
    r29 = (r29 + 4);
    r0 = MemoryInline::FlatRead32(r29);
    r31 = (r12 + 1);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & -4);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_3 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r29);
    r9 = (r9 + r12);
    r30_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30_mrot_2 = (r30_rot_4 & 1);
    r30_mdest_2 = (r30 & -2);
    r30 = (r30_mdest_2 | r30_mrot_2);
    r6 = 2;
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    goto loc_804E3D64;
}

loc_804E3D50:
{
    r30_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_6 & -2);
    r9 = (r9 + 4);
    r12 = MemoryInline::FlatRead32(r9);
    r30 = (r30 + r28);
    r6 = (r6 + 1);
    r31 = (r31 + 1);
}

loc_804E3D64:
{
}

loc_804E3D68:
{
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r28 = (r28_rot_3 & 1);
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r12))) {
        goto loc_804E3D50;
    }
}

loc_804E3D70:
{
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r9 = (r9_rot_13 & -4);
    r31 = MemoryInline::FlatRead32((r8 + 64));
    r9 = (r8 + r9);
    r12 = MemoryInline::FlatRead32((r9 + 140));
    r9 = (r31 + r30);
    r12_addr_3 = (r12 + r9);
    r31 = MemoryInline::FlatRead8(r12_addr_3);
}

loc_804E3D88:
{
    r28 = (r31 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_804E3D8C:
{
    r31 = (static_cast<int32_t>(r31) >> 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E3E0C;
    }
}

loc_804E3D94:
{
    r5 = (r5 + r31);
    r30 = (33 - r6);
    r29 = (r28 - r30);
    r9 = (r6 + -1);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_804E3DBC;
    }
}

loc_804E3DA8:
{
    r6 = (r6 + r28);
    r12 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r9 = (32 - r28);
    r31 = PPC_Srw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r9));
    goto loc_804E3DE0;
}

loc_804E3DBC:
{
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r12 = MemoryInline::FlatRead32((r3 + 1692));
    r12 = (r12 + 4);
    r0 = MemoryInline::FlatRead32(r12);
    r6 = (r29 + 1);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r12 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r9 = (r12 + r9);
    r29 = (32 - r28);
    r31 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r29));
}

loc_804E3DE0:
{
    r12 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r9 = (32 - r28);
}

loc_804E3DEC:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r9))) {
        goto loc_804E3DFC;
    }
}

loc_804E3DF0:
{
    r9 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r28));
    r9 = (r9 + r31);
    r31 = (r9 + 1);
}

loc_804E3DFC:
{
    r10_addr_7 = (r10 + r5);
    r9 = MemoryInline::FlatRead8(r10_addr_7);
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_16 & -2);
    r4_addr_2 = (r4 + r9);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r31));
    goto loc_804E3E18;
}

loc_804E3E0C:
{
}

loc_804E3E10:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(15))) {
        goto loc_804E3E24;
    }
}

loc_804E3E14:
{
    r5 = (r5 + 15);
}

loc_804E3E18:
{
    r5 = (r5 + 1);
}

loc_804E3E1C:
{
}

loc_804E3E20:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(64))) {
        goto loc_804E3B40;
    }
}

loc_804E3E24:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 1700), r6);
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r3 + 1696), r0);
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 16u, true, false);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_804E37D0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804E37D0_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E37D0 func_804E37D0 preserves=true fpr_mask=0x00000000
