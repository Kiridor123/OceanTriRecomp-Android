#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805327EC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
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
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_805327EC;

loc_805327EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_805327F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805328F0;
    }
}

loc_80532800:
{
    r10 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 255;
    r30 = MemoryInline::FlatRead32((r3 + 60));
    r12 = 4;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r5 = (r5_rot_1 & 3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 15);
    r5 = (r5 + r0);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r8 = (r8_rot_1 & 15);
    r9 = (r5 * 20);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r6 = (r6_rot_1 & 60);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 4);
    r11 = MemoryInline::FlatRead32((r3 + 64));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 4);
    r0 = (r6 + r0);
    r5 = (r5 + r0);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r7 = (r7_rot_1 & 4);
    r8 = (r8 * 28);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 4);
    r5 = (r7 + r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(23));
    r0 = (r0_rot_3 & 31);
    r7 = (r9 + r8);
    r6 = (r6 + r5);
    r6 = (r7 + r6);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r8 = (r8_rot_2 & 4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r5 = (r5_rot_3 & 28);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(27));
    r7 = (r7_rot_2 & 496);
    r8 = (r8 + r5);
    r6 = (r11 + r6);
    r6 = (r8 + r6);
    r5 = (r4 - r0);
    r30 = (r7 + r6);
    r11 = 0;
    r10 = 175;
    r9 = 119;
    r8 = 87;
    r7 = 97;
    r6 = 129;
    ctr = r5;
}

loc_8053289C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_805328F0;
    }
}

loc_805328A0:
{
}

loc_805328A4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805328E8;
    }
}

loc_805328A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 3), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 4), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 5), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r30 + 8), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r30 + 9), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 6), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r30 + 10), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r30 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 12), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 13), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 14), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r30 + 15), static_cast<uint8_t>(r11));
}

loc_805328E8:
{
    r30 = (r30 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805328A0;
    }
}

loc_805328F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_0 = (r0_rot_5 & 15872);
    r0_mdest_0 = (r0 & -15873);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
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
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_805327EC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_805327EC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805327EC func_805327EC preserves=true fpr_mask=0x00000000
