#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80522CE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r7_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_2 = 0;
    uint32_t r7_subfic_ra_3 = 0;
    uint32_t r7_subfic_ra_4 = 0;
    uint32_t r7_subfic_ra_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r8_subfic_ra_0 = 0;
    uint32_t r8_subfic_ra_1 = 0;
    uint32_t r8_subfic_ra_2 = 0;
    uint32_t r8_subfic_ra_3 = 0;
    uint32_t r8_subfic_ra_4 = 0;
    uint32_t r8_subfic_ra_5 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80522CE8u);
    goto loc_80522CE8;

loc_80522CE8:
{
    guest_range_2 = MemoryHw::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryHw::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_80522D00:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80522E5C;
    }
}

loc_80522D04:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80522D08:
{
    r0 = 0;
    r7 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80522E54;
    }
}

loc_80522D14:
{
}

loc_80522D18:
{
    r9 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80522E20;
    }
}

loc_80522D20:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80522D3C;
    }
}

loc_80522D28:
{
    r6 = 0x80000000u;
    r6 = (r6 + -2);
}

loc_80522D34:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_80522D3C;
    }
}

loc_80522D38:
{
    r8 = 1;
}

loc_80522D3C:
{
}

loc_80522D40:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80522E20;
    }
}

loc_80522D44:
{
    r8 = (r9 + 7);
    r6 = r3;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_1 & 536870911);
    ctr = r8;
}

loc_80522D58:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_80522E20;
    }
}

loc_80522D5C:
{
    r9 = (3 - r7);
    r8 = (r7 + 1);
    r28 = (3 - r8);
    guest_range_0 = MemoryHw::ResolveRangeHost(r6, 0, 8u, true, false);
    r10 = MemoryHw::ReadResolved8(guest_range_0, 0u, r6);
    r8 = (r7 + 2);
    r27 = MemoryHw::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    r29 = (3 - r8);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r28 = (r28_rot_2 & -8);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r12 = (0 - r7);
    r26 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r8));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r30 = (r30_rot_2 & -8);
    r31 = MemoryHw::ReadResolved8(guest_range_0, 2u, (r6 + 2));
    r8 = (r7 + 4);
    r11 = (3 - r8);
    r0 = (r0 | r26);
    r28 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r28));
    r8 = (r7 + 5);
    r31 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r29 = MemoryHw::ReadResolved8(guest_range_0, 3u, (r6 + 3));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_2 & -8);
    r0 = (r0 | r28);
    r10 = (3 - r8);
    r8 = (r7 + 6);
    r29 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r12));
    r0 = (r0 | r31);
    r9 = (3 - r8);
    r8 = (r7 + 7);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r12 = (r12_rot_3 & -8);
    r31 = MemoryHw::ReadResolved8(guest_range_0, 5u, (r6 + 5));
    r8_subfic_ra_2 = r8;
    r8 = (3 - r8_subfic_ra_2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r10 = (r10_rot_2 & -8);
    r30 = MemoryHw::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_2 & -8);
    r0 = (r0 | r29);
    r9 = MemoryHw::ReadResolved8(guest_range_0, 7u, (r6 + 7));
    r30 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r11));
    r11 = MemoryHw::ReadResolved8(guest_range_0, 6u, (r6 + 6));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_4 & -8);
    r12 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r12));
    r0 = (r0 | r30);
    r10 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r10));
    r0 = (r0 | r12);
    r8 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    r0 = (r0 | r10);
    r7 = (r7 + 8);
    r0 = (r0 | r8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80522D5C;
    }
}

loc_80522E20:
{
    r6 = (r4 - r7);
    r9 = (r3 + r7);
    ctr = r6;
}

loc_80522E30:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80522E54;
    }
}

loc_80522E34:
{
    r6 = (3 - r7);
    r8 = MemoryHw::FlatRead8(r9);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r9 = (r9 + 1);
    r6 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r6));
    r7 = (r7 + 1);
    r0 = (r0 | r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80522E34;
    }
}

loc_80522E54:
{
    r6 = -855638016;
    MemoryHw::FlatWrite32((r6 + 26680), r0);
}

loc_80522E5C:
{
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & -4);
    r0 = (r4 + -1);
    r7 = (r6 | 1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r6 = -855638016;
    r0 = (r7 | r0);
    MemoryHw::FlatWrite32((r6 + 26676), r0);
}

loc_80522E78:
{
    r0 = MemoryHw::FlatRead32((r6 + 26676));
    r0 = (r0 & 1);
}

loc_80522E80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80522E78;
    }
}

loc_80522E84:
{
}

loc_80522E88:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80522FB4;
    }
}

loc_80522E8C:
{
    r5 = -855638016;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80522E94:
{
    r0 = MemoryHw::FlatRead32((r5 + 26680));
    r5 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80522FB4;
    }
}

loc_80522EA0:
{
}

loc_80522EA4:
{
    r7 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80522F88;
    }
}

loc_80522EAC:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80522EC8;
    }
}

loc_80522EB4:
{
    r6 = 0x80000000u;
    r6 = (r6 + -2);
}

loc_80522EC0:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_80522EC8;
    }
}

loc_80522EC4:
{
    r8 = 1;
}

loc_80522EC8:
{
}

loc_80522ECC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80522F88;
    }
}

loc_80522ED0:
{
    r6 = (r7 + 7);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_6 & 536870911);
    ctr = r6;
}

loc_80522EE0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80522F88;
    }
}

loc_80522EE4:
{
    r6 = (3 - r5);
    r7 = (r5 + 1);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_9 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r7_subfic_ra_2 = r7;
    r7 = (3 - r7_subfic_ra_2);
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r8 = (r8_rot_10 & -8);
    guest_range_1 = MemoryHw::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryHw::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r9));
    r7 = (r5 + 2);
    r6 = (0 - r5);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r8_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_11 & -8);
    r7_subfic_ra_3 = r7;
    r7 = (3 - r7_subfic_ra_3);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_8 & -8);
    MemoryHw::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r9));
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r6 = (r5 + 4);
    MemoryHw::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r9));
    r7 = (3 - r6);
    r6 = (r5 + 5);
    MemoryHw::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r8));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r6_subfic_ra_2 = r6;
    r6 = (3 - r6_subfic_ra_2);
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_12 & -8);
    MemoryHw::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r9));
    r6 = (r5 + 6);
    r7 = (3 - r6);
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r6 = (r5 + 7);
    MemoryHw::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r8));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    r5 = (r5 + 8);
    r6_subfic_ra_3 = r6;
    r6 = (3 - r6_subfic_ra_3);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_9 & -8);
    MemoryHw::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r7));
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r6));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80522EE4;
    }
}

loc_80522F88:
{
    r6 = (r4 - r5);
    ctr = r6;
}

loc_80522F94:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_80522FB4;
    }
}

loc_80522F98:
{
    r4 = (3 - r5);
    r5 = (r5 + 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r4 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    MemoryHw::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80522F98;
    }
}

loc_80522FB4:
{
    r11 = (r1 + 32);
    r3 = 1;
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80522CE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80522CE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80522CE8 func_80522CE8 preserves=true fpr_mask=0x00000000
