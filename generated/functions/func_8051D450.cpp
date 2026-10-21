#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051D450_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8051D450u);
    goto loc_8051D450;

loc_8051D450:
{
}

loc_8051D454:
{
    r0 = 99;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051D52C;
    }
}

loc_8051D45C:
{
}

loc_8051D460:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8051D6C0;
    }
}

loc_8051D464:
{
}

loc_8051D468:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8051D6C0;
    }
}

loc_8051D46C:
{
    r0 = 4;
    r5 = 0;
    r4 = 1;
    ctr = r0;
}

loc_8051D47C:
{
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D488;
    }
}

loc_8051D484:
{
    goto loc_8051D524;
}

loc_8051D488:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D49C;
    }
}

loc_8051D498:
{
    goto loc_8051D524;
}

loc_8051D49C:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D4B0;
    }
}

loc_8051D4AC:
{
    goto loc_8051D524;
}

loc_8051D4B0:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D4C4;
    }
}

loc_8051D4C0:
{
    goto loc_8051D524;
}

loc_8051D4C4:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D4D8;
    }
}

loc_8051D4D4:
{
    goto loc_8051D524;
}

loc_8051D4D8:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D4EC;
    }
}

loc_8051D4E8:
{
    goto loc_8051D524;
}

loc_8051D4EC:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D500;
    }
}

loc_8051D4FC:
{
    goto loc_8051D524;
}

loc_8051D500:
{
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & -2);
    r5 = (r5 + 1);
    r0 = (r3 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D514;
    }
}

loc_8051D510:
{
    goto loc_8051D524;
}

loc_8051D514:
{
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_9 & -2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D47C;
    }
}

loc_8051D520:
{
    r5 = -1;
}

loc_8051D524:
{
    r0 = (r5 + 20);
    goto loc_8051D6C0;
}

loc_8051D52C:
{
}

loc_8051D530:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051D5FC;
    }
}

loc_8051D534:
{
}

loc_8051D538:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8051D6C0;
    }
}

loc_8051D53C:
{
    r0 = 4;
    r5 = 0;
    r3 = 1;
    ctr = r0;
}

loc_8051D54C:
{
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D558;
    }
}

loc_8051D554:
{
    goto loc_8051D5F4;
}

loc_8051D558:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D56C;
    }
}

loc_8051D568:
{
    goto loc_8051D5F4;
}

loc_8051D56C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D580;
    }
}

loc_8051D57C:
{
    goto loc_8051D5F4;
}

loc_8051D580:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D594;
    }
}

loc_8051D590:
{
    goto loc_8051D5F4;
}

loc_8051D594:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D5A8;
    }
}

loc_8051D5A4:
{
    goto loc_8051D5F4;
}

loc_8051D5A8:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D5BC;
    }
}

loc_8051D5B8:
{
    goto loc_8051D5F4;
}

loc_8051D5BC:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D5D0;
    }
}

loc_8051D5CC:
{
    goto loc_8051D5F4;
}

loc_8051D5D0:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & -2);
    r5 = (r5 + 1);
    r0 = (r4 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D5E4;
    }
}

loc_8051D5E0:
{
    goto loc_8051D5F4;
}

loc_8051D5E4:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & -2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D54C;
    }
}

loc_8051D5F0:
{
    r5 = -1;
}

loc_8051D5F4:
{
    r0 = (r5 + 30);
    goto loc_8051D6C0;
}

loc_8051D5FC:
{
}

loc_8051D600:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051D6C0;
    }
}

loc_8051D604:
{
    r0 = 4;
    r4 = 0;
    r3 = 1;
    ctr = r0;
}

loc_8051D614:
{
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D620;
    }
}

loc_8051D61C:
{
    goto loc_8051D6BC;
}

loc_8051D620:
{
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D634;
    }
}

loc_8051D630:
{
    goto loc_8051D6BC;
}

loc_8051D634:
{
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D648;
    }
}

loc_8051D644:
{
    goto loc_8051D6BC;
}

loc_8051D648:
{
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D65C;
    }
}

loc_8051D658:
{
    goto loc_8051D6BC;
}

loc_8051D65C:
{
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D670;
    }
}

loc_8051D66C:
{
    goto loc_8051D6BC;
}

loc_8051D670:
{
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D684;
    }
}

loc_8051D680:
{
    goto loc_8051D6BC;
}

loc_8051D684:
{
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D698;
    }
}

loc_8051D694:
{
    goto loc_8051D6BC;
}

loc_8051D698:
{
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_18 & -2);
    r4 = (r4 + 1);
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051D6AC;
    }
}

loc_8051D6A8:
{
    goto loc_8051D6BC;
}

loc_8051D6AC:
{
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & -2);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D614;
    }
}

loc_8051D6B8:
{
    r4 = -1;
}

loc_8051D6BC:
{
    r0 = (r4 + 40);
}

loc_8051D6C0:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051D450(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051D450_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051D450 func_8051D450 preserves=true fpr_mask=0x00000000
