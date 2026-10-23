#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808695E0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_25 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

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

    goto loc_808695E0;

loc_808695E0:
{
    r7 = r3;
    r4 = 0;
    r9 = 0x80000000u;
}

loc_808695EC:
{
    r0 = MemoryInline::FlatRead32(r7);
    r6 = MemoryInline::FlatRead32((r7 + 4));
    r7 = (r7 + 8);
    r8 = (r0 + r3);
    r5 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80869604:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_808696DC;
    }
}

loc_80869608:
{
    r10 = (r6 + -8);
}

loc_80869610:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_808696B4;
    }
}

loc_80869614:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8086962C;
    }
}

loc_8086961C:
{
    r0 = (r9 + -2);
}

loc_80869624:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_8086962C;
    }
}

loc_80869628:
{
    r11 = 1;
}

loc_8086962C:
{
}

loc_80869630:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_808696B4;
    }
}

loc_80869634:
{
    r0 = (r10 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_80869644:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_808696B4;
    }
}

loc_80869648:
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
        goto loc_80869648;
    }
}

loc_808696B4:
{
    r0 = (r6 - r5);
    ctr = r0;
}

loc_808696C0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_808696DC;
    }
}

loc_808696C4:
{
    r0 = MemoryInline::FlatRead32(r8);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r8, r0);
    r8 = (r8 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808696C4;
    }
}

loc_808696DC:
{
    r4 = (r4 + 1);
}

loc_808696E4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(397))) {
        goto loc_808695EC;
    }
}

loc_808696E8:
{
    r4 = 0x808B0000u;
    r5 = (r4 + -17208);
}

loc_808696F0:
{
    r4 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808696F8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80869760;
    }
}

loc_808696FC:
{
    r0 = (r4 + -2147483648);
}

loc_80869704:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80869710;
    }
}

loc_80869708:
{
    r5 = (r5 + 4);
    goto loc_808696F0;
}

loc_80869710:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80869760;
    }
}

loc_80869714:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r5 = (r5 + 12);
    ctr = r4;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_808696F0;
    }
}

loc_80869728:
{
    r0 = MemoryInline::FlatRead16(r7);
}

loc_80869730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80869740;
    }
}

loc_80869734:
{
    r7 = (r7 + 2);
    r6 = (r6 + 4);
    goto loc_80869758;
}

loc_80869740:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r6, r0);
    r7 = (r7 + 2);
    r6 = (r6 + 4);
}

loc_80869758:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80869728;
    }
}

loc_8086975C:
{
    goto loc_808696F0;
}

loc_80869760:
{
    r4 = 0x808B0000u;
    r8 = (r4 + -18488);
    r7 = 0;
    r4 = 0x808B0000u;
    r4 = (r4 + -17072);
    r0 = 18;
    ctr = r0;
}

loc_8086977C:
{
    r6 = MemoryInline::FlatRead16(r8);
}

loc_80869784:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(32768))) {
        goto loc_return;
    }
}

loc_80869788:
{
}

loc_8086978C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(65535))) {
        goto loc_808697A8;
    }
}

loc_80869790:
{
    r0 = MemoryInline::FlatRead16((r8 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_6);
    r5 = (r0 + r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r5);
}

loc_808697A8:
{
    r6 = MemoryInline::FlatRead16((r8 + 4));
}

loc_808697B0:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(32768))) {
        goto loc_return;
    }
}

loc_808697B4:
{
}

loc_808697B8:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(65535))) {
        goto loc_808697D4;
    }
}

loc_808697BC:
{
    r0 = MemoryInline::FlatRead16((r8 + 6));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & -8);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_8);
    r5 = (r0 + r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_4, r5);
}

loc_808697D4:
{
    r6 = MemoryInline::FlatRead16((r8 + 8));
}

loc_808697DC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(32768))) {
        goto loc_return;
    }
}

loc_808697E0:
{
}

loc_808697E4:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(65535))) {
        goto loc_80869800;
    }
}

loc_808697E8:
{
    r0 = MemoryInline::FlatRead16((r8 + 10));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_10);
    r5 = (r0 + r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r4_addr_6 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_6, r5);
}

loc_80869800:
{
    r6 = MemoryInline::FlatRead16((r8 + 12));
}

loc_80869808:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(32768))) {
        goto loc_return;
    }
}

loc_8086980C:
{
}

loc_80869810:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(65535))) {
        goto loc_8086982C;
    }
}

loc_80869814:
{
    r0 = MemoryInline::FlatRead16((r8 + 14));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_19 & -8);
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_12);
    r5 = (r0 + r3);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r4_addr_8 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_8, r5);
}

loc_8086982C:
{
    r6 = MemoryInline::FlatRead16((r8 + 16));
}

loc_80869834:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(32768))) {
        goto loc_return;
    }
}

loc_80869838:
{
}

loc_8086983C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(65535))) {
        goto loc_80869858;
    }
}

loc_80869840:
{
    r0 = MemoryInline::FlatRead16((r8 + 18));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & -8);
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_14);
    r5 = (r0 + r3);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r4_addr_10 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_10, r5);
}

loc_80869858:
{
    r7 = (r7 + 4);
    r8 = (r8 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8086977C;
    }
}

loc_80869864:
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

loc_return:
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
// RECOMP_REGISTRATION base 0x808695E0 func_808695E0 preserves=true fpr_mask=0x00000000
