#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8082E9C0;

loc_8082E9C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_8082E9C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082EB30;
    }
}

loc_8082E9D0:
{
    r12 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 15);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(28));
    r11 = (r11_rot_1 & 4);
    r6 = (r5 * 20);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(26));
    r9 = (r9_rot_1 & 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r5 = (r5_rot_2 & 7);
    r31 = MemoryInline::FlatRead32((r3 + 88));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(20));
    r10 = (r10_rot_1 & 4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(14));
    r7 = (r7_rot_1 & 60);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(9));
    r0 = (r0_rot_1 & 480);
    r0 = (r7 + r0);
    r8 = (r10 + r8);
    r7 = (r11 + r9);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8082EA10:
{
    r0 = (r6 + r0);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 4);
    r6 = (r8 + r7);
    r6 = (r9 + r6);
    r0 = (r31 + r0);
    r9 = (r6 + r0);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8082EB24;
    }
}

loc_8082EA2C:
{
    r0 = (r4 - r5);
    r8 = (r4 + -8);
}

loc_8082EA38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8082EAF0;
    }
}

loc_8082EA3C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8082EAF0;
    }
}

loc_8082EA40:
{
    r0 = (r8 + 7);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r0 = (r0 - r5);
    r6 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r7 = (r9 + r7);
    ctr = r0;
}

loc_8082EA60:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r8))) {
        goto loc_8082EAF0;
    }
}

loc_8082EA64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r7, static_cast<uint8_t>(r6));
    r5 = (r5 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r7 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r7 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r7 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r7 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r7 + 7), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r7 + 8), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r7 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r7 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r7 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r7 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r7 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r7 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r7 + 15), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r7 + 16), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r7 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r7 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r7 + 19), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r7 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r7 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r7 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r7 + 23), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r7 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r7 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r7 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r7 + 27), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r7 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r7 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r7 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r7 + 31), static_cast<uint8_t>(r6));
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082EA64;
    }
}

loc_8082EAF0:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r0 = (r4 - r5);
    r7 = (r9 + r6);
    r6 = 0;
    ctr = r0;
}

loc_8082EB08:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_8082EB24;
    }
}

loc_8082EB0C:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r6));
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082EB0C;
    }
}

loc_8082EB24:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_1 = (r0_rot_5 & 229376);
    r0_mdest_1 = (r0 & -229377);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 80), r0);
}

loc_8082EB30:
{
    r1 = (r1 + 16);
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

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082E9C0 func_8082E9C0 preserves=true fpr_mask=0x00000000
