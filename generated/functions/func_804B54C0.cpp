#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B54C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_14 = 0;
    uint32_t r0_mdest_15 = 0;
    uint32_t r0_mdest_16 = 0;
    uint32_t r0_mdest_17 = 0;
    uint32_t r0_mdest_18 = 0;
    uint32_t r0_mdest_19 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_20 = 0;
    uint32_t r0_mdest_21 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_14 = 0;
    uint32_t r0_mrot_15 = 0;
    uint32_t r0_mrot_16 = 0;
    uint32_t r0_mrot_17 = 0;
    uint32_t r0_mrot_18 = 0;
    uint32_t r0_mrot_19 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_20 = 0;
    uint32_t r0_mrot_21 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B54C0u);
    goto loc_804B54C0;

loc_804B54C0:
{
}

loc_804B54C4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(25))) {
        goto loc_804B56D4;
    }
}

loc_804B54C8:
{
    r5 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -20336);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B54E0u:
        goto loc_804B54E0;
        break;
    case 0x804B54F4u:
        goto loc_804B54F4;
        break;
    case 0x804B5508u:
        goto loc_804B5508;
        break;
    case 0x804B551Cu:
        goto loc_804B551C;
        break;
    case 0x804B5530u:
        goto loc_804B5530;
        break;
    case 0x804B5544u:
        goto loc_804B5544;
        break;
    case 0x804B5558u:
        goto loc_804B5558;
        break;
    case 0x804B556Cu:
        goto loc_804B556C;
        break;
    case 0x804B5580u:
        goto loc_804B5580;
        break;
    case 0x804B5594u:
        goto loc_804B5594;
        break;
    case 0x804B55A8u:
        goto loc_804B55A8;
        break;
    case 0x804B5610u:
        goto loc_804B5610;
        break;
    case 0x804B5624u:
        goto loc_804B5624;
        break;
    case 0x804B5638u:
        goto loc_804B5638;
        break;
    case 0x804B564Cu:
        goto loc_804B564C;
        break;
    case 0x804B5660u:
        goto loc_804B5660;
        break;
    case 0x804B5674u:
        goto loc_804B5674;
        break;
    case 0x804B5688u:
        goto loc_804B5688;
        break;
    case 0x804B569Cu:
        goto loc_804B569C;
        break;
    case 0x804B56B0u:
        goto loc_804B56B0;
        break;
    case 0x804B56C4u:
        goto loc_804B56C4;
        break;
    case 0x804B56D4u:
        goto loc_804B56D4;
        break;
    case 0x804B55DCu:
        goto loc_804B55DC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B54E0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_mrot_1 = (r4 & 1);
    r0_mdest_1 = (r0 & -2);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B54F4:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0_mrot_2 = (r0_rot_2 & 2);
    r0_mdest_2 = (r0 & -3);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5508:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_3 & 4);
    r0_mdest_3 = (r0 & -5);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B551C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0_mrot_4 = (r0_rot_4 & 8);
    r0_mdest_4 = (r0 & -9);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5530:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_5 = (r0_rot_5 & 16);
    r0_mdest_5 = (r0 & -17);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5544:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0_mrot_6 = (r0_rot_6 & 32);
    r0_mdest_6 = (r0 & -33);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5558:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0_mrot_7 = (r0_rot_7 & 64);
    r0_mdest_7 = (r0 & -65);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B556C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r0_mrot_8 = (r0_rot_8 & 128);
    r0_mdest_8 = (r0 & -129);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5580:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_9 = (r0_rot_9 & 256);
    r0_mdest_9 = (r0 & -257);
    r0 = (r0_mdest_9 | r0_mrot_9);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5594:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_10 = (r0_rot_10 & 1536);
    r0_mdest_10 = (r0 & -1537);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B55A8:
{
}

loc_804B55AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B55CC;
    }
}

loc_804B55B0:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 1312), r4);
    goto loc_804B56D4;
}

loc_804B55CC:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1316), static_cast<uint8_t>(r0));
    goto loc_804B56D4;
}

loc_804B55DC:
{
}

loc_804B55E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B5600;
    }
}

loc_804B55E4:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 1312), r4);
    goto loc_804B56D4;
}

loc_804B5600:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1317), static_cast<uint8_t>(r0));
    goto loc_804B56D4;
}

loc_804B5610:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0_mrot_11 = (r0_rot_11 & 24576);
    r0_mdest_11 = (r0 & -24577);
    r0 = (r0_mdest_11 | r0_mrot_11);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5624:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_12 = (r0_rot_12 & 98304);
    r0_mdest_12 = (r0 & -98305);
    r0 = (r0_mdest_12 | r0_mrot_12);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_804B56D4;
}

loc_804B5638:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_mrot_13 = (r4 & 3);
    r0_mdest_13 = (r0 & -4);
    r0 = (r0_mdest_13 | r0_mrot_13);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B564C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_14 = (r0_rot_13 & 12);
    r0_mdest_14 = (r0 & -13);
    r0 = (r0_mdest_14 | r0_mrot_14);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B5660:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_15 = (r0_rot_14 & 48);
    r0_mdest_15 = (r0 & -49);
    r0 = (r0_mdest_15 | r0_mrot_15);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B5674:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0_mrot_16 = (r0_rot_15 & 192);
    r0_mdest_16 = (r0 & -193);
    r0 = (r0_mdest_16 | r0_mrot_16);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B5688:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_17 = (r0_rot_16 & 768);
    r0_mdest_17 = (r0 & -769);
    r0 = (r0_mdest_17 | r0_mrot_17);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B569C:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0_mrot_18 = (r0_rot_17 & 3072);
    r0_mdest_18 = (r0 & -3073);
    r0 = (r0_mdest_18 | r0_mrot_18);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B56B0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0_mrot_19 = (r0_rot_18 & 12288);
    r0_mdest_19 = (r0 & -12289);
    r0 = (r0_mdest_19 | r0_mrot_19);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_804B56D4;
}

loc_804B56C4:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r0_mrot_20 = (r0_rot_19 & 49152);
    r0_mdest_20 = (r0 & -49153);
    r0 = (r0_mdest_20 | r0_mrot_20);
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_804B56D4:
{
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead8((r4 + 1316));
}

loc_804B56E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B56F0;
    }
}

loc_804B56E4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1317));
}

loc_804B56EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5708;
    }
}

loc_804B56F0:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r5 + 1312));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 6144);
    r3_mdest_1 = (r3 & -6145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    goto loc_804B5714;
}

loc_804B5708:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & -6145);
    MemoryInline::FlatWrite32((r4 + 20), r0);
}

loc_804B5714:
{
    r0 = MemoryInline::FlatRead32((r4 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B54C0 func_804B54C0 preserves=true fpr_mask=0x00000000
