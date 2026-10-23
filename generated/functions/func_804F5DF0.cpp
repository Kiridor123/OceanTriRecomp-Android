#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804F5DF0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804F5DF0;

loc_804F5DF0:
{
    r8 = 0x80760000u;
}

loc_804F5DF8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = (r8 + -10352);
    r8_addr_0 = (r8 + r0);
    r8 = MemoryInline::FlatRead32(r8_addr_0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_804F5E14;
    }
}

loc_804F5E08:
{
}

loc_804F5E0C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_804F5F14;
    }
}

loc_804F5E10:
{
    goto loc_804F5FA8;
}

loc_804F5E14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 9u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
}

loc_804F5E1C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & -4);
    r5 = MemoryInline::FlatRead32(r4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (r0 & 3);
    r9 = (r9 & -4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite16((r5 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r5 = MemoryInline::FlatRead32(r4);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r10 = (r10 & -4);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(30));
    r0 = (r0_rot_17 & 3);
    r9 = (static_cast<int32_t>(r9) >> 2);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite16((r5 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 2));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r5 = MemoryInline::FlatRead32(r4);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r0 = (r0_rot_19 & 3);
    r9 = (static_cast<int32_t>(r9) >> 4);
    r10 = (r10 & -4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite16((r5 + 46), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r6 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r5 = MemoryInline::FlatRead32(r4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r9 = (r9 & -4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite16((r5 + 50), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r6 + 5));
    MemoryInline::FlatWrite8((r5 + 52), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F5EDC;
    }
}

loc_804F5ED4:
{
    r0 = 0;
    goto loc_804F5EE0;
}

loc_804F5EDC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 6));
}

loc_804F5EE0:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_804F5EE8:
{
    MemoryInline::FlatWrite8((r5 + 53), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(9))) {
        goto loc_804F5EF8;
    }
}

loc_804F5EF0:
{
    r0 = 0;
    goto loc_804F5F08;
}

loc_804F5EF8:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r6 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r6 + 8));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_6 = (r0_rot_20 & 65280);
    r0_mdest_6 = (r0 & -65281);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0 = (r0 ^ 65535);
}

loc_804F5F08:
{
    r5 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite16((r5 + 42), static_cast<uint16_t>(r0));
    goto loc_804F6058;
}

loc_804F5F14:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r6);
}

loc_804F5F1C:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    MemoryInline::FlatWrite16((r5 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r6 + 1));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    MemoryInline::FlatWrite16((r5 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r6 + 2));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    MemoryInline::FlatWrite16((r5 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r6 + 3));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    MemoryInline::FlatWrite16((r5 + 50), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r6 + 4));
    MemoryInline::FlatWrite8((r5 + 52), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r6 + 5));
    MemoryInline::FlatWrite8((r5 + 53), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(8))) {
        goto loc_804F5F8C;
    }
}

loc_804F5F84:
{
    r0 = 0;
    goto loc_804F5F9C;
}

loc_804F5F8C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r6 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r6 + 7));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_14 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r0 ^ 65535);
}

loc_804F5F9C:
{
    r5 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite16((r5 + 42), static_cast<uint16_t>(r0));
    goto loc_804F6058;
}

loc_804F5FA8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r6);
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1008);
    MemoryInline::FlatWrite16((r5 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r6 + 1));
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1008);
    MemoryInline::FlatWrite16((r5 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 2));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r6 + 1));
    r10 = (static_cast<int32_t>(r0) >> 7);
    r9 = MemoryInline::ReadResolved8(guest_range_1, 0u, r6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 6);
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r0_mrot_0 = (r0_rot_4 & 24);
    r0_mdest_0 = (r0 & -25);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (r10 | r0);
    r9 = (static_cast<int32_t>(r9) >> 3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r7 = (static_cast<int32_t>(r7) >> 5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_5 & -32);
    MemoryInline::FlatWrite16((r5 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 2));
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & 992);
    MemoryInline::FlatWrite16((r5 + 50), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r6 + 3));
    r7 = (static_cast<int32_t>(r5) >> 2);
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(r0) >> 5);
    r0_mrot_1 = (r7 & 24);
    r0_mdest_1 = (r0 & -25);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 248);
    MemoryInline::FlatWrite8((r5 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r6 + 3));
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 248);
    MemoryInline::FlatWrite8((r5 + 53), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r6 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r6 + 5));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_9 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r5 + 42), static_cast<uint16_t>(r0));
}

loc_804F6058:
{
    r0 = MemoryInline::FlatRead8((r8 + 2241));
}

loc_804F6060:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804F60A8;
    }
}

loc_804F6064:
{
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 44), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 46), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 48));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 48), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 50), static_cast<uint16_t>(r0));
    goto loc_804F60C8;
}

loc_804F60A8:
{
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 44), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r6 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -512);
    MemoryInline::FlatWrite16((r6 + 46), static_cast<uint16_t>(r0));
}

loc_804F60C8:
{
    r0 = MemoryInline::FlatRead8((r8 + 2321));
}

loc_804F60D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F6148;
    }
}

loc_804F60D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r8 + 2321), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r5 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 2178), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r5 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 2241));
}

loc_804F60FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804F6134;
    }
}

loc_804F6100:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r5 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 2190), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r5 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r8 + 2196), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r5 + 52));
    MemoryInline::FlatWrite8((r8 + 2202), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r5 + 53));
    MemoryInline::FlatWrite8((r8 + 2203), static_cast<uint8_t>(r0));
    goto loc_804F6148;
}

loc_804F6134:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r8 + 2190), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r8 + 2196), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r8 + 2202), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r8 + 2203), static_cast<uint8_t>(r0));
}

loc_804F6148:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead16((r8 + 2178));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r6 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6160:
{
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-512))) {
        goto loc_804F616C;
    }
}

loc_804F6168:
{
    r5 = -512;
}

loc_804F616C:
{
}

loc_804F6170:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(511))) {
        goto loc_804F6178;
    }
}

loc_804F6174:
{
    r5 = 511;
}

loc_804F6178:
{
    MemoryInline::FlatWrite16((r6 + 44), static_cast<uint16_t>(r5));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead16((r8 + 2184));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r6 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6194:
{
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-512))) {
        goto loc_804F61A0;
    }
}

loc_804F619C:
{
    r5 = -512;
}

loc_804F61A0:
{
}

loc_804F61A4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(511))) {
        goto loc_804F61AC;
    }
}

loc_804F61A8:
{
    r5 = 511;
}

loc_804F61AC:
{
    MemoryInline::FlatWrite16((r6 + 46), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead8((r8 + 2241));
}

loc_804F61B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804F6284;
    }
}

loc_804F61BC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead16((r8 + 2190));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r6 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F61D4:
{
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-512))) {
        goto loc_804F61E0;
    }
}

loc_804F61DC:
{
    r5 = -512;
}

loc_804F61E0:
{
}

loc_804F61E4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(511))) {
        goto loc_804F61EC;
    }
}

loc_804F61E8:
{
    r5 = 511;
}

loc_804F61EC:
{
    MemoryInline::FlatWrite16((r6 + 48), static_cast<uint16_t>(r5));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead16((r8 + 2196));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r6 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6208:
{
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-512))) {
        goto loc_804F6214;
    }
}

loc_804F6210:
{
    r5 = -512;
}

loc_804F6214:
{
}

loc_804F6218:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(511))) {
        goto loc_804F6220;
    }
}

loc_804F621C:
{
    r5 = 511;
}

loc_804F6220:
{
    MemoryInline::FlatWrite16((r6 + 50), static_cast<uint16_t>(r5));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead8((r8 + 2202));
    r0 = MemoryInline::FlatRead8((r6 + 52));
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804F6244;
    }
}

loc_804F6240:
{
    r5 = 0;
}

loc_804F6244:
{
}

loc_804F6248:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_804F6250;
    }
}

loc_804F624C:
{
    r5 = 255;
}

loc_804F6250:
{
    MemoryInline::FlatWrite8((r6 + 52), static_cast<uint8_t>(r5));
    r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r5 = MemoryInline::FlatRead8((r8 + 2203));
    r0 = MemoryInline::FlatRead8((r6 + 53));
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = r0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804F6274;
    }
}

loc_804F6270:
{
    r5 = 0;
}

loc_804F6274:
{
}

loc_804F6278:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_804F6280;
    }
}

loc_804F627C:
{
    r5 = 255;
}

loc_804F6280:
{
    MemoryInline::FlatWrite8((r6 + 53), static_cast<uint8_t>(r5));
}

loc_804F6284:
{
    r5 = (r13 + -14100);
    r5_addr_0 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
}

loc_804F6290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804F6294:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804F5DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804F5DF0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F5DF0 func_804F5DF0 preserves=true fpr_mask=0x00000000
