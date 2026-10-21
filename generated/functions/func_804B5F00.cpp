#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5F00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B5F00u);
    goto loc_804B5F00;

loc_804B5F00:
{
    r0 = (r4 + -9);
    r4 = MemoryInline::FlatRead32((r2 + -2480));
}

loc_804B5F0C:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r3 = (r4 + r3);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_804B6144;
    }
}

loc_804B5F18:
{
    r4 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -19992);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B5F30u:
        goto loc_804B5F30;
        break;
    case 0x804B5F58u:
        goto loc_804B5F58;
        break;
    case 0x804B5FBCu:
        goto loc_804B5FBC;
        break;
    case 0x804B5FE0u:
        goto loc_804B5FE0;
        break;
    case 0x804B6004u:
        goto loc_804B6004;
        break;
    case 0x804B602Cu:
        goto loc_804B602C;
        break;
    case 0x804B6054u:
        goto loc_804B6054;
        break;
    case 0x804B607Cu:
        goto loc_804B607C;
        break;
    case 0x804B60A4u:
        goto loc_804B60A4;
        break;
    case 0x804B60CCu:
        goto loc_804B60CC;
        break;
    case 0x804B60F4u:
        goto loc_804B60F4;
        break;
    case 0x804B611Cu:
        goto loc_804B611C;
        break;
    case 0x804B6144u:
        goto loc_804B6144;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B5F30:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B5F58:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804B5F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804B5F80;
    }
}

loc_804B5F6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_804B5F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5F80;
    }
}

loc_804B5F78:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804B5F80:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_7 & 7);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_804B5F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804B5FA0;
    }
}

loc_804B5F94:
{
}

loc_804B5F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804B5FA8;
    }
}

loc_804B5F9C:
{
    goto loc_804B5FB0;
}

loc_804B5FA0:
{
    r0 = 6;
    goto loc_804B5FB4;
}

loc_804B5FA8:
{
    r0 = 14;
    goto loc_804B5FB4;
}

loc_804B5FB0:
{
    r0 = 0;
}

loc_804B5FB4:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B5FBC:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r4 = (r4_rot_0 & 1);
    MemoryInline::FlatWrite32(r5, r4);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r3 = (r3_rot_1 & 7);
    MemoryInline::FlatWrite32(r6, r3);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B5FE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = 0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r4 = (r4_rot_1 & 1);
    MemoryInline::FlatWrite32(r5, r4);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r3 = (r3_rot_2 & 7);
    MemoryInline::FlatWrite32(r6, r3);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B6004:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_8 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_9 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_10 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B602C:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_12 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B6054:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_13 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_14 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_15 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B607C:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_16 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_17 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_18 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B60A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_19 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0 = (r0 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B60CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_21 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_22 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_23 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B60F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r0 = (r0_rot_24 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_25 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_26 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B611C:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_27 & 1);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_28 & 7);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 92));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_29 & 31);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

loc_804B6144:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FD gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5F00 func_804B5F00 preserves=true fpr_mask=0x00000000
