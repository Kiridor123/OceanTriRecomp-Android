#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5910(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B5910u);
    goto loc_804B5910;

loc_804B5910:
{
}

loc_804B5914:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(25))) {
        goto loc_804B5AB8;
    }
}

loc_804B5918:
{
    r5 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -20232);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B5930u:
        goto loc_804B5930;
        break;
    case 0x804B5940u:
        goto loc_804B5940;
        break;
    case 0x804B5950u:
        goto loc_804B5950;
        break;
    case 0x804B5960u:
        goto loc_804B5960;
        break;
    case 0x804B5970u:
        goto loc_804B5970;
        break;
    case 0x804B5980u:
        goto loc_804B5980;
        break;
    case 0x804B5990u:
        goto loc_804B5990;
        break;
    case 0x804B59A0u:
        goto loc_804B59A0;
        break;
    case 0x804B59B0u:
        goto loc_804B59B0;
        break;
    case 0x804B59C0u:
        goto loc_804B59C0;
        break;
    case 0x804B59D0u:
        goto loc_804B59D0;
        break;
    case 0x804B5A18u:
        goto loc_804B5A18;
        break;
    case 0x804B5A28u:
        goto loc_804B5A28;
        break;
    case 0x804B5A38u:
        goto loc_804B5A38;
        break;
    case 0x804B5A48u:
        goto loc_804B5A48;
        break;
    case 0x804B5A58u:
        goto loc_804B5A58;
        break;
    case 0x804B5A68u:
        goto loc_804B5A68;
        break;
    case 0x804B5A78u:
        goto loc_804B5A78;
        break;
    case 0x804B5A88u:
        goto loc_804B5A88;
        break;
    case 0x804B5A98u:
        goto loc_804B5A98;
        break;
    case 0x804B5AA8u:
        goto loc_804B5AA8;
        break;
    case 0x804B5AB8u:
        goto loc_804B5AB8;
        break;
    case 0x804B59F4u:
        goto loc_804B59F4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B5930:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 1);
    goto loc_804B5ABC;
}

loc_804B5940:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 1);
    goto loc_804B5ABC;
}

loc_804B5950:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1);
    goto loc_804B5ABC;
}

loc_804B5960:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 1);
    goto loc_804B5ABC;
}

loc_804B5970:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 1);
    goto loc_804B5ABC;
}

loc_804B5980:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 1);
    goto loc_804B5ABC;
}

loc_804B5990:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_7 & 1);
    goto loc_804B5ABC;
}

loc_804B59A0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_8 & 1);
    goto loc_804B5ABC;
}

loc_804B59B0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 1);
    goto loc_804B5ABC;
}

loc_804B59C0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_10 & 3);
    goto loc_804B5ABC;
}

loc_804B59D0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead8((r3 + 1316));
}

loc_804B59DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B59EC;
    }
}

loc_804B59E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_11 & 3);
    goto loc_804B5ABC;
}

loc_804B59EC:
{
    r0 = 0;
    goto loc_804B5ABC;
}

loc_804B59F4:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead8((r3 + 1317));
}

loc_804B5A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5A10;
    }
}

loc_804B5A04:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & 3);
    goto loc_804B5ABC;
}

loc_804B5A10:
{
    r0 = 0;
    goto loc_804B5ABC;
}

loc_804B5A18:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_13 & 3);
    goto loc_804B5ABC;
}

loc_804B5A28:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_14 & 3);
    goto loc_804B5ABC;
}

loc_804B5A38:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 & 3);
    goto loc_804B5ABC;
}

loc_804B5A48:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_15 & 3);
    goto loc_804B5ABC;
}

loc_804B5A58:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_16 & 3);
    goto loc_804B5ABC;
}

loc_804B5A68:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_17 & 3);
    goto loc_804B5ABC;
}

loc_804B5A78:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_18 & 3);
    goto loc_804B5ABC;
}

loc_804B5A88:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_19 & 3);
    goto loc_804B5ABC;
}

loc_804B5A98:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_20 & 3);
    goto loc_804B5ABC;
}

loc_804B5AA8:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r0 = (r0_rot_21 & 3);
    goto loc_804B5ABC;
}

loc_804B5AB8:
{
    r0 = 0;
}

loc_804B5ABC:
{
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5910 func_804B5910 preserves=true fpr_mask=0x00000000
