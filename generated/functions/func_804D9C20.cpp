#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804D9C20_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D9C20u);
    goto loc_804D9C20;

loc_804D9C20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 16383);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 16777215);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -20012));
    r0 = (r0 & 1792);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1024));
}

loc_804D9C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D9DC4;
    }
}

loc_804D9C50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9C84;
    }
}

loc_804D9C54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(512));
}

loc_804D9C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D9D40;
    }
}

loc_804D9C5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9C78;
    }
}

loc_804D9C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_804D9C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D9CF4;
    }
}

loc_804D9C68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9DFC;
    }
}

loc_804D9C6C:
{
}

loc_804D9C70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9CA8;
    }
}

loc_804D9C74:
{
    goto loc_804D9DFC;
}

loc_804D9C78:
{
}

loc_804D9C7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(768))) {
        goto loc_804D9D88;
    }
}

loc_804D9C80:
{
    goto loc_804D9DFC;
}

loc_804D9C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1536));
}

loc_804D9C88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D9CA8;
    }
}

loc_804D9C8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9C9C;
    }
}

loc_804D9C90:
{
}

loc_804D9C94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1280))) {
        goto loc_804D9CA8;
    }
}

loc_804D9C98:
{
    goto loc_804D9DFC;
}

loc_804D9C9C:
{
}

loc_804D9CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1792))) {
        goto loc_804D9CA8;
    }
}

loc_804D9CA4:
{
    goto loc_804D9DFC;
}

loc_804D9CA8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_14 & 240);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_15 & 240);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = (r0 & 240);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_16 & 240);
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_804D9DFC;
}

loc_804D9CF4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 240);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_3 & 240);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = (r0 & 240);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & 240);
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_804D9DFC;
}

loc_804D9D40:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & 240);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_8 & 240);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 240);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_10 & 240);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_804D9DFC;
}

loc_804D9D88:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_2 & 65535);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_804D9DFC;
}

loc_804D9DC4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = 0;
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_4 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_5 & 65535);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_17 & 255);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
}

loc_804D9DFC:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r5 = 0x80750000u;
    r8 = MemoryInline::FlatRead8((r4 + 3));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r9 = (r6 + -128);
    r7 = MemoryInline::FlatRead8((r4 + 4));
    r6 = MemoryInline::FlatRead8((r4 + 5));
    r8 = (r8 + -128);
    r7 = (r7 + -128);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r9));
    r6 = (r6 + -128);
    r5 = (r5 + 2208);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = (r0 & -65536);
    r0 = (r5 + -150994944);
}

loc_804D9E48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804D9E8C;
    }
}

loc_804D9E4C:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 128);
    r0 = (r0 ^ 128);
}

loc_804D9E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9E8C;
    }
}

loc_804D9E60:
{
    r0 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r13 + -14852));
    r3 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r3 = (r5 | r3);
    MemoryInline::FlatWrite32((r13 + -14852), r3);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

loc_804D9E8C:
{
    r0 = (r3 * 12);
    r5 = 0x80750000u;
    r6 = 0x80000000u;
    r7 = MemoryInline::FlatRead32((r13 + -14852));
    r5 = (r5 + 2160);
    r5 = (r5 + r0);
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    r8 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (r7 & ~r0);
    MemoryInline::FlatWrite32((r13 + -14852), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D9EDC;
    }
}

loc_804D9EC0:
{
    r3 = (r8 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9ED0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804D9EF8;
    }
}

loc_804D9ED4:
{
    r6 = r3;
    goto loc_804D9EF8;
}

loc_804D9EDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9EF8;
    }
}

loc_804D9EE0:
{
    r3 = (r8 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9EF0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9EF8;
    }
}

loc_804D9EF4:
{
    r6 = r3;
}

loc_804D9EF8:
{
    r0 = (r6 - r8);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D9F2C;
    }
}

loc_804D9F10:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9F20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804D9F48;
    }
}

loc_804D9F24:
{
    r6 = r3;
    goto loc_804D9F48;
}

loc_804D9F2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9F48;
    }
}

loc_804D9F30:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9F40:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9F48;
    }
}

loc_804D9F44:
{
    r6 = r3;
}

loc_804D9F48:
{
    r0 = (r6 - r7);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead8((r4 + 4));
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D9F7C;
    }
}

loc_804D9F60:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9F70:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804D9F98;
    }
}

loc_804D9F74:
{
    r6 = r3;
    goto loc_804D9F98;
}

loc_804D9F7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9F98;
    }
}

loc_804D9F80:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9F90:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9F98;
    }
}

loc_804D9F94:
{
    r6 = r3;
}

loc_804D9F98:
{
    r0 = (r6 - r7);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead8((r4 + 5));
    r7 = MemoryInline::FlatRead8((r5 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D9FCC;
    }
}

loc_804D9FB0:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9FC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804D9FE8;
    }
}

loc_804D9FC4:
{
    r6 = r3;
    goto loc_804D9FE8;
}

loc_804D9FCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D9FE8;
    }
}

loc_804D9FD0:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D9FE0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9FE8;
    }
}

loc_804D9FE4:
{
    r6 = r3;
}

loc_804D9FE8:
{
    r0 = (r6 - r7);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 6));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_804D9FFC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804DA004;
    }
}

loc_804DA000:
{
    r3 = r0;
}

loc_804DA004:
{
    r0 = (r3 - r0);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 7));
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_804DA018:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804DA020;
    }
}

loc_804DA01C:
{
    r3 = r0;
}

loc_804DA020:
{
    r0 = (r3 - r0);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804D9C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D9C20_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D9C20 func_804D9C20 preserves=true fpr_mask=0x00000000
