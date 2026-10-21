#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082EEF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082EEF0u);
    goto loc_8082EEF0;

loc_8082EEF0:
{
    r6 = (r4 + -16);
}

loc_8082EEF8:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(15))) {
        goto loc_8082F018;
    }
}

loc_8082EEFC:
{
    r0 = (r4 + -4);
}

loc_8082EF04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(11))) {
        goto loc_8082EFB0;
    }
}

loc_8082EF08:
{
}

loc_8082EF0C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(3))) {
        goto loc_return;
    }
}

loc_8082EF10:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
}

loc_8082EF1C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_8082EF20:
{
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (static_cast<int32_t>(r5) >> 31);
    r9 = (r5 & ~r0);
    r8 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 15);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r6 = (r6_rot_0 & 60);
    r5 = (r0 * 20);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r3 = (r3_rot_0 & 480);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r7 = (r7_rot_0 & 4);
    r3 = (r6 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_8082EF50:
{
    r5 = (r7 + r5);
    r0 = 255;
    r3 = (r8 + r3);
    r3 = (r5 + r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8082EF68;
    }
}

loc_8082EF64:
{
    r0 = r9;
}

loc_8082EF68:
{
    r4 = (r4 & 3);
}

loc_8082EF6C:
{
    r0 = (r0 & 255);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082EF90;
    }
}

loc_8082EF74:
{
}

loc_8082EF78:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8082EF98;
    }
}

loc_8082EF7C:
{
}

loc_8082EF80:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_8082EFA0;
    }
}

loc_8082EF84:
{
}

loc_8082EF88:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_8082EFA8;
    }
}

loc_8082EF8C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EF90:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EF98:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFA0:
{
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFA8:
{
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFB0:
{
    r4 = (r0 & 3);
}

loc_8082EFB4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082EFD8;
    }
}

loc_8082EFBC:
{
}

loc_8082EFC0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8082EFE8;
    }
}

loc_8082EFC4:
{
}

loc_8082EFC8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_8082EFF8;
    }
}

loc_8082EFCC:
{
}

loc_8082EFD0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_8082F008;
    }
}

loc_8082EFD4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFD8:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFE8:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082EFF8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F008:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F018:
{
    r0 = (static_cast<int32_t>(r5) >> 31);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    r6 = (r5 & ~r0);
    r5 = 255;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_8082F030:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(255))) {
        goto loc_8082F038;
    }
}

loc_8082F034:
{
    r5 = r6;
}

loc_8082F038:
{
    r0 = (r4 + -16);
    r4 = (r5 & 255);
    r0 = (r0 & 3);
}

loc_8082F044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F064;
    }
}

loc_8082F048:
{
}

loc_8082F04C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8082F074;
    }
}

loc_8082F050:
{
}

loc_8082F054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8082F084;
    }
}

loc_8082F058:
{
}

loc_8082F05C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8082F094;
    }
}

loc_8082F060:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F064:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F074:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 61), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F084:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 62), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8082F094:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 63), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082EEF0 func_8082EEF0 preserves=true fpr_mask=0x00000000
