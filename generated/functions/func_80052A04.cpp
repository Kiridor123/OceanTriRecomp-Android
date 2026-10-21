#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80052A04_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80052A04u);
    goto loc_80052A04;

loc_80052A04:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = (r3 & 65535);
    r7 = (r4 & 65535);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(r7));
}

loc_80052A20:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80052BD4;
    }
}

loc_80052A24:
{
    r30 = (r7 - r5);
    r29 = (r30 + 1);
    r8 = (r7 + -8);
}

loc_80052A34:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80052B98;
    }
}

loc_80052A38:
{
    r9 = 0;
    r10 = 0;
    r11 = 0;
    r12 = 0;
    r31 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80052A64;
    }
}

loc_80052A50:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_80052A5C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_80052A64;
    }
}

loc_80052A60:
{
    r31 = 1;
}

loc_80052A64:
{
}

loc_80052A68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80052A84;
    }
}

loc_80052A6C:
{
    r7 = (r3 & 65535);
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_80052A7C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_80052A84;
    }
}

loc_80052A80:
{
    r12 = 1;
}

loc_80052A84:
{
}

loc_80052A88:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80052AA0;
    }
}

loc_80052A8C:
{
    r6 = (r3 & 65535);
    r0 = (r6 + -2147483648);
}

loc_80052A98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80052AA0;
    }
}

loc_80052A9C:
{
    r11 = 1;
}

loc_80052AA0:
{
}

loc_80052AA4:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80052AE4;
    }
}

loc_80052AA8:
{
    r6 = 1;
    r0 = (r4 & 65535);
    r7 = (r0 & -2147483648);
    r0 = (r3 & 65535);
    r0 = (0 - r0);
    r0 = (r0 & -2147483648);
}

loc_80052AC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_80052AD8;
    }
}

loc_80052AC8:
{
    r0 = (r30 & -2147483648);
}

loc_80052AD0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_80052AD8;
    }
}

loc_80052AD4:
{
    r6 = 0;
}

loc_80052AD8:
{
}

loc_80052ADC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80052AE4;
    }
}

loc_80052AE0:
{
    r10 = 1;
}

loc_80052AE4:
{
}

loc_80052AE8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80052B18;
    }
}

loc_80052AEC:
{
    r3 = 1;
    r0 = (r30 & -2147483648);
}

loc_80052AF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80052B0C;
    }
}

loc_80052AFC:
{
    r0 = (r29 & -2147483648);
}

loc_80052B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052B0C;
    }
}

loc_80052B08:
{
    r3 = 0;
}

loc_80052B0C:
{
}

loc_80052B10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80052B18;
    }
}

loc_80052B14:
{
    r9 = 1;
}

loc_80052B18:
{
}

loc_80052B1C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80052B98;
    }
}

loc_80052B20:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r3 = 0x80670000u;
    r0 = (r3 + -12896);
    r6 = (r0 + r6);
    r3 = 0;
    r0 = (r8 + 8);
    r0 = (r0 - r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80052B48:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_80052B98;
    }
}

loc_80052B4C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 600), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + 600), r3);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r6 + 732), r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 604), r3);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r6 + 736), r3);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 608), r3);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r6 + 740), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 612), r3);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r6 + 744), r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 616), r3);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r6 + 748), r3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 620), r3);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r6 + 752), r3);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 624), r3);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r6 + 756), r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 628), r3);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r6 + 760), r3);
    r6 = (r6 + 32);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80052B4C;
    }
}

loc_80052B98:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r3 = 0x80670000u;
    r0 = (r3 + -12896);
    r7 = (r0 + r6);
    r6 = 0;
    r3 = (r4 & 65535);
    r0 = (r3 + 1);
    r0 = (r0 - r5);
    ctr = r0;
}

loc_80052BC0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r3))) {
        goto loc_80052BD4;
    }
}

loc_80052BC4:
{
    MemoryInline::FlatWrite32((r7 + 600), r6);
    MemoryInline::FlatWrite32((r7 + 732), r6);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80052BC4;
    }
}

loc_80052BD4:
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
    return r3;
}

}

extern "C" void func_80052A04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80052A04_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052A04 func_80052A04 preserves=true fpr_mask=0x00000000
