#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BB070(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_804BB070;

loc_804BB070:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r6 = MemoryInline::FlatRead32((r5 + 1516));
    r0 = (r6 + -11);
}

loc_804BB080:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(15))) {
        goto loc_804BB0C0;
    }
}

loc_804BB084:
{
}

loc_804BB088:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(10))) {
        goto loc_804BB0A0;
    }
}

loc_804BB08C:
{
    r0 = (r6 + -27);
}

loc_804BB094:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_804BB0D8;
    }
}

loc_804BB098:
{
}

loc_804BB09C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(34))) {
        goto loc_804BB0EC;
    }
}

loc_804BB0A0:
{
    r7 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 4102;
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB0EC;
}

loc_804BB0C0:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 587202560;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB0EC;
}

loc_804BB0D8:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 603979776;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804BB0EC:
{
    r6 = MemoryInline::FlatRead32((r5 + 1520));
}

loc_804BB0F4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(8))) {
        goto loc_804BB118;
    }
}

loc_804BB0F8:
{
    r0 = (r6 + -9);
}

loc_804BB100:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(7))) {
        goto loc_804BB130;
    }
}

loc_804BB104:
{
    r0 = (r6 + -17);
}

loc_804BB10C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_804BB15C;
    }
}

loc_804BB110:
{
}

loc_804BB114:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(21))) {
        goto loc_804BB168;
    }
}

loc_804BB118:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 1728053248;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB168;
}

loc_804BB130:
{
    r8 = MemoryInline::FlatRead32((r5 + 1524));
    r6 = -872349696;
    r7 = 8;
    r0 = 32;
    r8 = (r8 & -241);
    MemoryInline::FlatWrite32((r5 + 1524), r8);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r7));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1524));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB168;
}

loc_804BB15C:
{
    r6 = MemoryInline::FlatRead32((r13 + -15444));
    r0 = 0;
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
}

loc_804BB168:
{
}

loc_804BB16C:
{
    MemoryInline::FlatWrite32((r5 + 1516), r3);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(34))) {
        goto loc_804BB58C;
    }
}

loc_804BB174:
{
    r6 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + -18992);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804BB18Cu:
        goto loc_804BB18C;
        break;
    case 0x804BB1ACu:
        goto loc_804BB1AC;
        break;
    case 0x804BB1CCu:
        goto loc_804BB1CC;
        break;
    case 0x804BB1ECu:
        goto loc_804BB1EC;
        break;
    case 0x804BB20Cu:
        goto loc_804BB20C;
        break;
    case 0x804BB22Cu:
        goto loc_804BB22C;
        break;
    case 0x804BB24Cu:
        goto loc_804BB24C;
        break;
    case 0x804BB26Cu:
        goto loc_804BB26C;
        break;
    case 0x804BB28Cu:
        goto loc_804BB28C;
        break;
    case 0x804BB2ACu:
        goto loc_804BB2AC;
        break;
    case 0x804BB2ECu:
        goto loc_804BB2EC;
        break;
    case 0x804BB30Cu:
        goto loc_804BB30C;
        break;
    case 0x804BB328u:
        goto loc_804BB328;
        break;
    case 0x804BB344u:
        goto loc_804BB344;
        break;
    case 0x804BB360u:
        goto loc_804BB360;
        break;
    case 0x804BB37Cu:
        goto loc_804BB37C;
        break;
    case 0x804BB398u:
        goto loc_804BB398;
        break;
    case 0x804BB3B4u:
        goto loc_804BB3B4;
        break;
    case 0x804BB3D0u:
        goto loc_804BB3D0;
        break;
    case 0x804BB3ECu:
        goto loc_804BB3EC;
        break;
    case 0x804BB408u:
        goto loc_804BB408;
        break;
    case 0x804BB424u:
        goto loc_804BB424;
        break;
    case 0x804BB440u:
        goto loc_804BB440;
        break;
    case 0x804BB45Cu:
        goto loc_804BB45C;
        break;
    case 0x804BB478u:
        goto loc_804BB478;
        break;
    case 0x804BB494u:
        goto loc_804BB494;
        break;
    case 0x804BB4B0u:
        goto loc_804BB4B0;
        break;
    case 0x804BB4CCu:
        goto loc_804BB4CC;
        break;
    case 0x804BB4E8u:
        goto loc_804BB4E8;
        break;
    case 0x804BB504u:
        goto loc_804BB504;
        break;
    case 0x804BB520u:
        goto loc_804BB520;
        break;
    case 0x804BB53Cu:
        goto loc_804BB53C;
        break;
    case 0x804BB558u:
        goto loc_804BB558;
        break;
    case 0x804BB574u:
        goto loc_804BB574;
        break;
    case 0x804BB2CCu:
        goto loc_804BB2CC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804BB18C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 627;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB1AC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 330;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB1CC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 363;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB1EC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 132;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB20C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 198;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB22C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 528;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB24C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 594;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB26C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 561;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB28C:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 429;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB2AC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 462;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB2CC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 33;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB2EC:
{
    r6 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 4102;
    r0 = 339;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB30C:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -20865);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB328:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -29057);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB344:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -24961);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB360:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587202560;
    r0 = (r3 + 7807);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB37C:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21441);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB398:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21377);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB3B4:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21313);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB3D0:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21249);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB3EC:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21185);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB408:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21121);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB424:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21057);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB440:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -20993);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB45C:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -20929);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB478:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -23937);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB494:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -22913);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB4B0:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 587268096;
    r0 = (r3 + -21889);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB4CC:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16186);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB4E8:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16021);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB504:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16153);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB520:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16120);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB53C:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16087);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB558:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -16054);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_804BB58C;
}

loc_804BB574:
{
    r6 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 604176384;
    r0 = (r3 + -15955);
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_4 & 240);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FD gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BB070 func_804BB070 preserves=true fpr_mask=0x00000000
