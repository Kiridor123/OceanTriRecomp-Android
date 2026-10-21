#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E7B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082E7B0u);
    goto loc_8082E7B0;

loc_8082E7B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
}

loc_8082E7B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082E9A4;
    }
}

loc_8082E7C4:
{
    r12 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(14));
    r6 = (r6_rot_1 & 3);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 15);
    r5 = (r6 + r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_1 & 31);
    r11 = (r5 * 20);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(20));
    r5 = (r5_rot_2 & 4);
    r31 = MemoryInline::FlatRead32((r3 + 88));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(26));
    r8 = (r8_rot_1 & 4);
    r5 = (r7 + r5);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 4);
    r7 = (r11 + r8);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(9));
    r10 = (r10_rot_1 & 480);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(14));
    r9 = (r9_rot_1 & 60);
    r9 = (r10 + r9);
    r6 = (r6 + r5);
    r5 = (r9 + r7);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r8 = (r8_rot_2 & 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8082E818:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(19));
    r7 = (r7_rot_2 & 28);
    r6 = (r8 + r6);
    r5 = (r31 + r5);
    r6 = (r7 + r6);
    r30 = (r6 + r5);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082E998;
    }
}

loc_8082E830:
{
    r11 = 0;
    r31 = 255;
    r10 = 175;
    r9 = 119;
    r8 = 87;
    r6 = 97;
    r7 = 129;
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_3 & -16);
    r12 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r31));
    r30 = (r30 + r5);
    r5 = (r4 - r0);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r11));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    r7 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r11));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082E998;
    }
}

loc_8082E8A8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
}

loc_8082E8AC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082E964;
    }
}

loc_8082E8B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 3), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 8), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 12), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 13), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 14), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r30 + 15), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 16), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 17), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 18), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 19), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 24), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r30 + 28), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r30 + 29), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r30 + 30), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r30 + 31), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 32), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r30 + 33), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r30 + 34), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r30 + 35), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 40), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r30 + 44), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r30 + 45), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r30 + 46), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r30 + 47), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r30 + 48), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r30 + 49), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r30 + 50), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r30 + 51), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 56), r7);
    }
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r30 + 60), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r30 + 61), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 62), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r30 + 63), static_cast<uint8_t>(r11));
    r30 = (r30 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082E8B4;
    }
}

loc_8082E95C:
{
    r5 = (r5 & 3);
}

loc_8082E960:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082E998;
    }
}

loc_8082E964:
{
    ctr = r5;
}

loc_8082E968:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r30, static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 1), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 3), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 8), r7);
    }
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r30 + 12), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r30 + 13), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r30 + 14), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r30 + 15), static_cast<uint8_t>(r11));
    r30 = (r30 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082E968;
    }
}

loc_8082E998:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_1 = (r0_rot_4 & 15872);
    r0_mdest_1 = (r0 & -15873);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 80), r0);
}

loc_8082E9A4:
{
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082E7B0 func_8082E7B0 preserves=true fpr_mask=0x00000000
