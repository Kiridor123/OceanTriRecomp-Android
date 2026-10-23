#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80869868;

loc_80869868:
{
    r7 = r3;
    r4 = 0;
    r9 = 0x80000000u;
}

loc_80869874:
{
    r0 = MemoryInline::FlatRead32(r7);
    r6 = MemoryInline::FlatRead32((r7 + 4));
    r7 = (r7 + 8);
    r8 = (r0 + r3);
    r5 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8086988C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80869964;
    }
}

loc_80869890:
{
    r10 = (r6 + -8);
}

loc_80869898:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8086993C;
    }
}

loc_8086989C:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_808698B4;
    }
}

loc_808698A4:
{
    r0 = (r9 + -2);
}

loc_808698AC:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_808698B4;
    }
}

loc_808698B0:
{
    r11 = 1;
}

loc_808698B4:
{
}

loc_808698B8:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8086993C;
    }
}

loc_808698BC:
{
    r0 = (r10 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_808698CC:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_8086993C;
    }
}

loc_808698D0:
{
    r0 = MemoryInline::FlatRead32(r8);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r8, r0);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 4), r0);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r8 + 12));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 12), r0);
    r0 = MemoryInline::FlatRead32((r8 + 16));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 16), r0);
    r0 = MemoryInline::FlatRead32((r8 + 20));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 20), r0);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 24), r0);
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    r8 = (r8 + 32);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808698D0;
    }
}

loc_8086993C:
{
    r0 = (r6 - r5);
    ctr = r0;
}

loc_80869948:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_80869964;
    }
}

loc_8086994C:
{
    r0 = MemoryInline::FlatRead32(r8);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r8, r0);
    r8 = (r8 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8086994C;
    }
}

loc_80869964:
{
    r4 = (r4 + 1);
}

loc_8086996C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(73))) {
        goto loc_80869874;
    }
}

loc_80869970:
{
    r4 = 0x808B0000u;
    r6 = (r4 + -17480);
    r4 = 0x808C0000u;
    r5 = (r4 + 30288);
    r4 = 0;
    r0 = 4;
    ctr = r0;
}

loc_8086998C:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80869994:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_808699A4;
    }
}

loc_80869998:
{
    r6 = (r6 + 1);
    r5 = (r5 + 4);
    goto loc_808699BC;
}

loc_808699A4:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = (r6 + 1);
    r5 = (r5 + 4);
}

loc_808699BC:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_808699C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_808699D4;
    }
}

loc_808699C8:
{
    r6 = (r6 + 1);
    r5 = (r5 + 4);
    goto loc_808699EC;
}

loc_808699D4:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = (r6 + 1);
    r5 = (r5 + 4);
}

loc_808699EC:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_808699F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869A04;
    }
}

loc_808699F8:
{
    r6 = (r6 + 1);
    r5 = (r5 + 4);
    goto loc_80869A1C;
}

loc_80869A04:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = (r6 + 1);
    r5 = (r5 + 4);
}

loc_80869A1C:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80869A24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869A34;
    }
}

loc_80869A28:
{
    r6 = (r6 + 1);
    r5 = (r5 + 4);
    goto loc_80869A4C;
}

loc_80869A34:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = (r6 + 1);
    r5 = (r5 + 4);
}

loc_80869A4C:
{
    r4 = (r4 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8086998C;
    }
}

loc_80869A54:
{
    r4 = 0x808B0000u;
    r5 = (r4 + -17464);
    r4 = 0x808C0000u;
    r4 = (r4 + 30352);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80869A6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869A7C;
    }
}

loc_80869A70:
{
    r5 = (r5 + 1);
    r4 = (r4 + 4);
    goto loc_80869A94;
}

loc_80869A7C:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32(r4, r0);
    r5 = (r5 + 1);
    r4 = (r4 + 4);
}

loc_80869A94:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80869A9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869AAC;
    }
}

loc_80869AA0:
{
    r5 = (r5 + 1);
    r4 = (r4 + 4);
    goto loc_80869AC4;
}

loc_80869AAC:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_12);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r4, r0);
    r5 = (r5 + 1);
    r4 = (r4 + 4);
}

loc_80869AC4:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80869ACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869AD4;
    }
}

loc_80869AD0:
{
    goto loc_80869AE4;
}

loc_80869AD4:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & -8);
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_14);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80869AE4:
{
    r4 = 0x808B0000u;
    r5 = (r4 + -17460);
    r4 = 0x808B0000u;
    r6 = (r4 + -6012);
    r4 = 0;
    r0 = 29;
    ctr = r0;
}

loc_80869B00:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80869B08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869B18;
    }
}

loc_80869B0C:
{
    r5 = (r5 + 1);
    r6 = (r6 + 4);
    goto loc_80869B30;
}

loc_80869B18:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_21 & -8);
    r3_addr_17 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_17);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r6, r0);
    r5 = (r5 + 1);
    r6 = (r6 + 4);
}

loc_80869B30:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80869B38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869B48;
    }
}

loc_80869B3C:
{
    r5 = (r5 + 1);
    r6 = (r6 + 4);
    goto loc_80869B60;
}

loc_80869B48:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3_addr_19 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_19);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r6, r0);
    r5 = (r5 + 1);
    r6 = (r6 + 4);
}

loc_80869B60:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80869B00;
    }
}

loc_80869B68:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80869868 func_80869868 preserves=true fpr_mask=0x00000000
