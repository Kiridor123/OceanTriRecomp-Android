#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D09E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D09E4u);
    goto loc_800D09E4;

loc_800D09E4:
{
    r3 = 0x80690000u;
    r6 = (r3 + 30624);
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_800D09F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D0A14;
    }
}

loc_800D09F8:
{
}

loc_800D09FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800D0C10;
    }
}

loc_800D0A00:
{
}

loc_800D0A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800D0CD8;
    }
}

loc_800D0A08:
{
}

loc_800D0A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800D0EC8;
    }
}

loc_800D0A10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0A14:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 1);
}

loc_800D0A20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D0A94;
    }
}

loc_800D0A24:
{
    r5 = MemoryInline::FlatRead8((r6 + 3));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_7);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D0A4C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_800D0A58;
    }
}

loc_800D0A50:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_800D0A58:
{
    r0 = MemoryInline::FlatRead8((r6 + 4));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D0A7C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_800D0A94;
    }
}

loc_800D0A80:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0A94:
{
    r5 = 0;
    r3 = r6;
    r4 = r6;
    r7 = 0x80660000u;
    r7 = (r7 + -21920);
    r0 = MemoryInline::FlatRead8((r7 + 9));
    r7 = (r13 + -31424);
    r7_addr_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_0);
    ctr = r0;
}

loc_800D0ABC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800D0C00;
    }
}

loc_800D0AC0:
{
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D0ACC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_800D0C00;
    }
}

loc_800D0AD0:
{
}

loc_800D0AD4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800D0B60;
    }
}

loc_800D0AD8:
{
    r0 = MemoryInline::FlatRead16((r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D0AE0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800D0AF8;
    }
}

loc_800D0AE4:
{
}

loc_800D0AE8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_800D0BF0;
    }
}

loc_800D0AEC:
{
}

loc_800D0AF0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_800D0B2C;
    }
}

loc_800D0AF4:
{
    goto loc_800D0BF0;
}

loc_800D0AF8:
{
    r7 = MemoryInline::FlatRead16((r3 + 122));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 122), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r7 + 1820);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r0));
    goto loc_800D0BF0;
}

loc_800D0B2C:
{
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D0B4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_800D0BF0;
    }
}

loc_800D0B50:
{
    r7 = MemoryInline::FlatRead8((r6 + 4));
    r0 = (r7 + 1);
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r0));
    goto loc_800D0BF0;
}

loc_800D0B60:
{
    r0 = MemoryInline::FlatRead16((r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D0B68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800D0B80;
    }
}

loc_800D0B6C:
{
}

loc_800D0B70:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_800D0BF0;
    }
}

loc_800D0B74:
{
}

loc_800D0B78:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_800D0BB4;
    }
}

loc_800D0B7C:
{
    goto loc_800D0BF0;
}

loc_800D0B80:
{
    r7 = MemoryInline::FlatRead16((r3 + 122));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 122), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r7 + 1820);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r0));
    goto loc_800D0BF0;
}

loc_800D0BB4:
{
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r7 + -1820);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D0BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_800D0BF0;
    }
}

loc_800D0BE4:
{
    r7 = MemoryInline::FlatRead8((r6 + 4));
    r0 = (r7 + 1);
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r0));
}

loc_800D0BF0:
{
    r3 = (r3 + 2);
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0AC0;
    }
}

loc_800D0C00:
{
    r3 = MemoryInline::FlatRead16((r6 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0C10:
{
    r3 = MemoryInline::FlatRead16((r6 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800D0C18:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800D0C28;
    }
}

loc_800D0C1C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0C28:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r5 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_5 = (r3 + r5);
    r4 = MemoryInline::FlatRead8(r3_addr_5);
    r0 = (r4 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r6 + 3), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    r3 = 0;
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r3));
    r7 = r6;
}

loc_800D0C68:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_800D0CBC;
    }
}

loc_800D0C6C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
}

loc_800D0C74:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D0CAC;
    }
}

loc_800D0C7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 100), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r7 + 100), r3);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r7 + 102), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r7 + 104), r3);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r7 + 106), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r7 + 108), r3);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r7 + 110), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r7 + 112), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r7 + 114), r3);
    }
    r7 = (r7 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0C7C;
    }
}

loc_800D0CA4:
{
    r4 = (r4 & 7);
}

loc_800D0CA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800D0CBC;
    }
}

loc_800D0CAC:
{
    ctr = r4;
}

loc_800D0CB0:
{
    MemoryInline::FlatWrite16((r7 + 100), static_cast<uint16_t>(r3));
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0CB0;
    }
}

loc_800D0CBC:
{
    r4 = 3639;
    r3 = (r13 + -31424);
    r3_addr_6 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0CD8:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 1);
}

loc_800D0CE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D0D3C;
    }
}

loc_800D0CE8:
{
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800D0CF4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800D0D00;
    }
}

loc_800D0CF8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_800D0D00:
{
    r0 = MemoryInline::FlatRead8((r6 + 4));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D0D24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_800D0D3C;
    }
}

loc_800D0D28:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0D3C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_4);
    r5 = (r3 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r6 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r6 + r0);
    r0 = r5;
    r7 = (r5 + 1);
    ctr = r7;
}

loc_800D0D74:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_800D0EB8;
    }
}

loc_800D0D78:
{
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_800D0D84:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r7))) {
        goto loc_800D0EB8;
    }
}

loc_800D0D88:
{
}

loc_800D0D8C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_800D0E18;
    }
}

loc_800D0D90:
{
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800D0D98:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(1))) {
        goto loc_800D0DB0;
    }
}

loc_800D0D9C:
{
}

loc_800D0DA0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_800D0EA8;
    }
}

loc_800D0DA4:
{
}

loc_800D0DA8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(3))) {
        goto loc_800D0DE4;
    }
}

loc_800D0DAC:
{
    goto loc_800D0EA8;
}

loc_800D0DB0:
{
    r7 = MemoryInline::FlatRead16((r3 + 122));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 122), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r7 = (r7 + -1820);
    MemoryInline::FlatWrite32((r4 + 8), r7);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r7));
    goto loc_800D0EA8;
}

loc_800D0DE4:
{
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800D0E04:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(4))) {
        goto loc_800D0EA8;
    }
}

loc_800D0E08:
{
    r7 = MemoryInline::FlatRead8((r6 + 4));
    r7 = (r7 + 1);
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r7));
    goto loc_800D0EA8;
}

loc_800D0E18:
{
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800D0E20:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(1))) {
        goto loc_800D0E38;
    }
}

loc_800D0E24:
{
}

loc_800D0E28:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_800D0EA8;
    }
}

loc_800D0E2C:
{
}

loc_800D0E30:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(3))) {
        goto loc_800D0E6C;
    }
}

loc_800D0E34:
{
    goto loc_800D0EA8;
}

loc_800D0E38:
{
    r7 = MemoryInline::FlatRead16((r3 + 122));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 122), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + -8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r7 = (r7 + -1820);
    MemoryInline::FlatWrite32((r4 + 8), r7);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r7));
    goto loc_800D0EA8;
}

loc_800D0E6C:
{
    r7 = MemoryInline::FlatRead16((r3 + 144));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r7 = (r7 + 1820);
    MemoryInline::FlatWrite32((r4 + 8), r7);
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 100), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 100));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_800D0E98:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(4))) {
        goto loc_800D0EA8;
    }
}

loc_800D0E9C:
{
    r7 = MemoryInline::FlatRead8((r6 + 4));
    r7 = (r7 + 1);
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r7));
}

loc_800D0EA8:
{
    r3 = (r3 + -2);
    r4 = (r4 + -4);
    r5 = (r5 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0D78;
    }
}

loc_800D0EB8:
{
    r3 = MemoryInline::FlatRead16((r6 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0EC8:
{
    r3 = MemoryInline::FlatRead16((r6 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800D0ED0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800D0EE0;
    }
}

loc_800D0ED4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800D0EE0:
{
    r4 = 0;
    MemoryInline::FlatWriteRam8((r6 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWriteRam16((r6 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 4), static_cast<uint8_t>(r4));
    r5 = r6;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r13 + -31424);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
}

loc_800D0F14:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800D0F68;
    }
}

loc_800D0F18:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_800D0F20:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D0F58;
    }
}

loc_800D0F28:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 100), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r5 + 100), r4);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r5 + 102), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 104), r4);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 106), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r5 + 108), r4);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r5 + 110), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r5 + 112), r4);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r5 + 114), r4);
    }
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0F28;
    }
}

loc_800D0F50:
{
    r3 = (r3 & 7);
}

loc_800D0F54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D0F68;
    }
}

loc_800D0F58:
{
    ctr = r3;
}

loc_800D0F5C:
{
    MemoryInline::FlatWrite16((r5 + 100), static_cast<uint16_t>(r4));
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0F5C;
    }
}

loc_800D0F68:
{
    r3 = 65536;
    r0 = (r3 + -3641);
    MemoryInline::FlatWriteRam32((r6 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D09E4 func_800D09E4 preserves=true fpr_mask=0x00000000
