#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DE9C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804DE9C0;

loc_804DE9C0:
{
    guest_range_2 = MemoryHw::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryHw::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r26 = r6;
    r30 = r7;
    r31 = r8;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r8 = 0x80630000u;
    r0 = MemoryHw::FlatRead32((r8 + -22368));
}

loc_804DE9FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_804DEA0C;
    }
}

loc_804DEA00:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804DEB58;
}

loc_804DEA0C:
{
    r7 = -855638016;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r5 = 251658240;
    r9 = MemoryHw::FlatRead32((r7 + 25656));
    r5 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r29 + 3);
    r9 = (r9 & r5);
    MemoryHw::FlatWrite32((r7 + 25656), r9);
    r6 = (r8 + -22368);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_2 & 1073741823);
}

loc_804DEA34:
{
    MemoryHw::FlatWriteRam32((r8 + -22368), r27);
    r5 = 0;
    MemoryHw::FlatWriteRam32((r6 + 16), r31);
    MemoryHw::FlatWriteRam32((r6 + 8), r30);
    MemoryHw::FlatWriteRam32((r6 + 12), r26);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804DEAFC;
    }
}

loc_804DEA4C:
{
}

loc_804DEA50:
{
    r6 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_804DEAC4;
    }
}

loc_804DEA58:
{
    r0 = (r6 + 7);
    r8 = r28;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r7 = (r7 + 25600);
    ctr = r0;
}

loc_804DEA70:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_804DEAC4;
    }
}

loc_804DEA74:
{
    guest_range_0 = MemoryHw::ResolveRangeHost(r8, 0, 32u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 0u, r8);
    r5 = (r5 + 8);
    guest_range_1 = MemoryHw::ResolveRangeHost((r7 + 128), 0, 32u, false, true);
    MemoryHw::WriteResolved32(guest_range_1, 0u, (r7 + 128), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 4u, (r8 + 4));
    MemoryHw::WriteResolved32(guest_range_1, 4u, (r7 + 132), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 8u, (r8 + 8));
    MemoryHw::WriteResolved32(guest_range_1, 8u, (r7 + 136), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 12u, (r8 + 12));
    MemoryHw::WriteResolved32(guest_range_1, 12u, (r7 + 140), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 16u, (r8 + 16));
    MemoryHw::WriteResolved32(guest_range_1, 16u, (r7 + 144), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 20u, (r8 + 20));
    MemoryHw::WriteResolved32(guest_range_1, 20u, (r7 + 148), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 24u, (r8 + 24));
    MemoryHw::WriteResolved32(guest_range_1, 24u, (r7 + 152), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 28u, (r8 + 28));
    r8 = (r8 + 32);
    MemoryHw::WriteResolved32(guest_range_1, 28u, (r7 + 156), r0);
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DEA74;
    }
}

loc_804DEAC4:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r0 = -855638016;
    r6 = (r0 + r7);
    r0 = (r4 - r5);
    r7 = (r28 + r7);
    r6 = (r6 + 25600);
    ctr = r0;
}

loc_804DEAE4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_804DEAFC;
    }
}

loc_804DEAE8:
{
    r0 = MemoryHw::FlatRead32(r7);
    r7 = (r7 + 4);
    MemoryHw::FlatWrite32((r6 + 128), r0);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DEAE8;
    }
}

loc_804DEAFC:
{
    r4 = (r29 + -128);
    r0 = (128 - r29);
    r0 = ~(r4 | r0);
    r9 = -855638016;
    r5 = (static_cast<int32_t>(r0) >> 31);
    r6 = (0 - r31);
    r4 = (r30 + -128);
    r0 = (128 - r30);
    r0 = ~(r4 | r0);
    r8 = MemoryHw::FlatRead32((r9 + 25652));
    r0 = (static_cast<int32_t>(r0) >> 31);
    r7 = (r6 | r31);
    r4 = (r29 & ~r5);
    r6 = (r8 | -2147483648);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r6_mrot_1 = (r6_rot_1 & 1073741824);
    r6_mdest_1 = (r6 & -1073741825);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = (r30 & ~r0);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6_mrot_2 = (r6_rot_2 & 8323072);
    r6_mdest_2 = (r6 & -8323073);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_3 = (r6_rot_3 & 32512);
    r6_mdest_3 = (r6 & -32513);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r6_mrot_4 = (r6_rot_4 & 6);
    r6_mdest_4 = (r6 & -7);
    r6 = (r6_mdest_4 | r6_mrot_4);
    r0 = (r6 | 1);
    MemoryHw::FlatWrite32((r9 + 25652), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
}

loc_804DEB58:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DE9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DE9C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DE9C0 func_804DE9C0 preserves=true fpr_mask=0x00000000
