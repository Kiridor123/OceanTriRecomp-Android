#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BB18C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mdest_8 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_mrot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804BB18Cu);
    goto loc_804BB18C;

loc_804BB18C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 627;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804BB58C:
{
}

loc_804BB590:
{
    MemoryInline::FlatWrite32((r5 + 1520), r4);
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(21))) {
        goto loc_804BB880;
    }
}

loc_804BB598:
{
    r3 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -19080);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804BB5B0u:
        goto loc_804BB5B0;
        break;
    case 0x804BB5CCu:
        goto loc_804BB5CC;
        break;
    case 0x804BB5E8u:
        goto loc_804BB5E8;
        break;
    case 0x804BB604u:
        goto loc_804BB604;
        break;
    case 0x804BB658u:
        goto loc_804BB658;
        break;
    case 0x804BB674u:
        goto loc_804BB674;
        break;
    case 0x804BB690u:
        goto loc_804BB690;
        break;
    case 0x804BB6ACu:
        goto loc_804BB6AC;
        break;
    case 0x804BB620u:
        goto loc_804BB620;
        break;
    case 0x804BB6C8u:
        goto loc_804BB6C8;
        break;
    case 0x804BB6F8u:
        goto loc_804BB6F8;
        break;
    case 0x804BB728u:
        goto loc_804BB728;
        break;
    case 0x804BB758u:
        goto loc_804BB758;
        break;
    case 0x804BB788u:
        goto loc_804BB788;
        break;
    case 0x804BB7B8u:
        goto loc_804BB7B8;
        break;
    case 0x804BB7E8u:
        goto loc_804BB7E8;
        break;
    case 0x804BB818u:
        goto loc_804BB818;
        break;
    case 0x804BB844u:
        goto loc_804BB844;
        break;
    case 0x804BB854u:
        goto loc_804BB854;
        break;
    case 0x804BB864u:
        goto loc_804BB864;
        break;
    case 0x804BB874u:
        goto loc_804BB874;
        break;
    case 0x804BB63Cu:
        goto loc_804BB63C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804BB5B0:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 66);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB5CC:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 132);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB5E8:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 99);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB604:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 297);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB620:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 594);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB63C:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 33);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB658:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 331);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB674:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 397);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB690:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 463);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB6AC:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 1728053248;
    r0 = (r3 + 529);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB6C8:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 2;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_1 = (r3_rot_1 & 240);
    r3_mdest_1 = (r3 & -241);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB6F8:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 3;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_2 = (r3_rot_2 & 240);
    r3_mdest_2 = (r3 & -241);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB728:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_3 = (r3_rot_3 & 240);
    r3_mdest_3 = (r3 & -241);
    r3 = (r3_mdest_3 | r3_mrot_3);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB758:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 5;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_4 = (r3_rot_4 & 240);
    r3_mdest_4 = (r3 & -241);
    r3 = (r3_mdest_4 | r3_mrot_4);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB788:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 6;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_5 = (r3_rot_5 & 240);
    r3_mdest_5 = (r3 & -241);
    r3 = (r3_mdest_5 | r3_mrot_5);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB7B8:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 7;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_6 = (r3_rot_6 & 240);
    r3_mdest_6 = (r3 & -241);
    r3 = (r3_mdest_6 | r3_mrot_6);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB7E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 1524));
    r0 = 9;
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3_mrot_7 = (r3_rot_7 & 240);
    r3_mdest_7 = (r3 & -241);
    r3 = (r3_mdest_7 | r3_mrot_7);
    MemoryInline::FlatWrite32((r5 + 1524), r3);
    r3 = -872349696;
    r0 = 8;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB818:
{
    r4 = 8;
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_2 & 240);
    r0_mdest_1 = (r0 & -241);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r5 + 1524), r0);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r0 = 32;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB880;
}

loc_804BB844:
{
    r3 = MemoryInline::FlatRead32((r13 + -15444));
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    goto loc_804BB880;
}

loc_804BB854:
{
    r3 = MemoryInline::FlatRead32((r13 + -15444));
    r0 = 3;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    goto loc_804BB880;
}

loc_804BB864:
{
    r3 = MemoryInline::FlatRead32((r13 + -15444));
    r0 = 4;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    goto loc_804BB880;
}

loc_804BB874:
{
    r3 = MemoryInline::FlatRead32((r13 + -15444));
    r0 = 5;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_804BB880:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BB18C func_804BB18C preserves=true fpr_mask=0x00000000
