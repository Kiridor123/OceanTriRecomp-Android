#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5CB0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_mdest_22 = 0;
    uint32_t r0_mdest_23 = 0;
    uint32_t r0_mdest_24 = 0;
    uint32_t r0_mdest_25 = 0;
    uint32_t r0_mdest_26 = 0;
    uint32_t r0_mdest_27 = 0;
    uint32_t r0_mdest_28 = 0;
    uint32_t r0_mdest_29 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_30 = 0;
    uint32_t r0_mdest_31 = 0;
    uint32_t r0_mdest_32 = 0;
    uint32_t r0_mdest_33 = 0;
    uint32_t r0_mdest_34 = 0;
    uint32_t r0_mdest_35 = 0;
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
    uint32_t r0_mrot_22 = 0;
    uint32_t r0_mrot_23 = 0;
    uint32_t r0_mrot_24 = 0;
    uint32_t r0_mrot_25 = 0;
    uint32_t r0_mrot_26 = 0;
    uint32_t r0_mrot_27 = 0;
    uint32_t r0_mrot_28 = 0;
    uint32_t r0_mrot_29 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_30 = 0;
    uint32_t r0_mrot_31 = 0;
    uint32_t r0_mrot_32 = 0;
    uint32_t r0_mrot_33 = 0;
    uint32_t r0_mrot_34 = 0;
    uint32_t r0_mrot_35 = 0;
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
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B5CB0u);
    goto loc_804B5CB0;

loc_804B5CB0:
{
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = 0x80620000u;
    r8 = (r6 + r0);
    goto loc_804B5E3C;
}

loc_804B5CC8:
{
    r6 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead8((r4 + 12));
    r0 = (r6 + -9);
    r10 = MemoryInline::FlatRead32((r4 + 8));
}

loc_804B5CDC:
{
    r9 = MemoryInline::FlatRead32((r4 + 4));
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_804B5E38;
    }
}

loc_804B5CE4:
{
    r6 = (r5 + -20060);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6_addr_2 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B5CF8u:
        goto loc_804B5CF8;
        break;
    case 0x804B5D10u:
        goto loc_804B5D10;
        break;
    case 0x804B5D4Cu:
        goto loc_804B5D4C;
        break;
    case 0x804B5D60u:
        goto loc_804B5D60;
        break;
    case 0x804B5D74u:
        goto loc_804B5D74;
        break;
    case 0x804B5D8Cu:
        goto loc_804B5D8C;
        break;
    case 0x804B5DA4u:
        goto loc_804B5DA4;
        break;
    case 0x804B5DBCu:
        goto loc_804B5DBC;
        break;
    case 0x804B5DD4u:
        goto loc_804B5DD4;
        break;
    case 0x804B5DF4u:
        goto loc_804B5DF4;
        break;
    case 0x804B5E0Cu:
        goto loc_804B5E0C;
        break;
    case 0x804B5E24u:
        goto loc_804B5E24;
        break;
    case 0x804B5E38u:
        goto loc_804B5E38;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B5CF8:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_mrot_2 = (r9 & 1);
    r0_mdest_2 = (r0 & -2);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0_mrot_3 = (r0_rot_3 & 14);
    r0_mdest_3 = (r0 & -15);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0_mrot_4 = (r0_rot_4 & 496);
    r0_mdest_4 = (r0 & -497);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D10:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
}

loc_804B5D18:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(10));
    r0_mrot_5 = (r0_rot_5 & 7168);
    r0_mdest_5 = (r0 & -7169);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(2))) {
        goto loc_804B5D38;
    }
}

loc_804B5D24:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0 = (r0 | 512);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D38:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0_mrot_6 = (r0_rot_6 & 512);
    r0_mdest_6 = (r0 & -513);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D4C:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(13));
    r0_mrot_7 = (r0_rot_7 & 8192);
    r0_mdest_7 = (r0 & -8193);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r0_mrot_8 = (r0_rot_8 & 114688);
    r0_mdest_8 = (r0 & -114689);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D60:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r0_mrot_9 = (r0_rot_9 & 131072);
    r0_mdest_9 = (r0 & -131073);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(18));
    r0_mrot_10 = (r0_rot_10 & 1835008);
    r0_mdest_10 = (r0 & -1835009);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D74:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(21));
    r0_mrot_11 = (r0_rot_11 & 2097152);
    r0_mdest_11 = (r0 & -2097153);
    r0 = (r0_mdest_11 | r0_mrot_11);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(22));
    r0_mrot_12 = (r0_rot_12 & 29360128);
    r0_mdest_12 = (r0 & -29360129);
    r0 = (r0_mdest_12 | r0_mrot_12);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(25));
    r0_mrot_13 = (r0_rot_13 & 1040187392);
    r0_mdest_13 = (r0 & -1040187393);
    r0 = (r0_mdest_13 | r0_mrot_13);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    goto loc_804B5E38;
}

loc_804B5D8C:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_mrot_14 = (r9 & 1);
    r0_mdest_14 = (r0 & -2);
    r0 = (r0_mdest_14 | r0_mrot_14);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0_mrot_15 = (r0_rot_14 & 14);
    r0_mdest_15 = (r0 & -15);
    r0 = (r0_mdest_15 | r0_mrot_15);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0_mrot_16 = (r0_rot_15 & 496);
    r0_mdest_16 = (r0 & -497);
    r0 = (r0_mdest_16 | r0_mrot_16);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_804B5E38;
}

loc_804B5DA4:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0_mrot_17 = (r0_rot_16 & 512);
    r0_mdest_17 = (r0 & -513);
    r0 = (r0_mdest_17 | r0_mrot_17);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(10));
    r0_mrot_18 = (r0_rot_17 & 7168);
    r0_mdest_18 = (r0 & -7169);
    r0 = (r0_mdest_18 | r0_mrot_18);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(13));
    r0_mrot_19 = (r0_rot_18 & 253952);
    r0_mdest_19 = (r0 & -253953);
    r0 = (r0_mdest_19 | r0_mrot_19);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_804B5E38;
}

loc_804B5DBC:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(18));
    r0_mrot_20 = (r0_rot_19 & 262144);
    r0_mdest_20 = (r0 & -262145);
    r0 = (r0_mdest_20 | r0_mrot_20);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r0_mrot_21 = (r0_rot_20 & 3670016);
    r0_mdest_21 = (r0 & -3670017);
    r0 = (r0_mdest_21 | r0_mrot_21);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(22));
    r0_mrot_22 = (r0_rot_21 & 130023424);
    r0_mdest_22 = (r0 & -130023425);
    r0 = (r0_mdest_22 | r0_mrot_22);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    goto loc_804B5E38;
}

loc_804B5DD4:
{
    r0 = MemoryInline::FlatRead32((r8 + 60));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r0_mrot_23 = (r0_rot_22 & 134217728);
    r0_mdest_23 = (r0 & -134217729);
    r0 = (r0_mdest_23 | r0_mrot_23);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0_mrot_24 = (r0_rot_23 & 1879048192);
    r0_mdest_24 = (r0 & -1879048193);
    r0 = (r0_mdest_24 | r0_mrot_24);
    MemoryInline::FlatWrite32((r8 + 60), r0);
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_mrot_25 = (r7 & 31);
    r0_mdest_25 = (r0 & -32);
    r0 = (r0_mdest_25 | r0_mrot_25);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_804B5E38;
}

loc_804B5DF4:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(5));
    r0_mrot_26 = (r0_rot_24 & 32);
    r0_mdest_26 = (r0 & -33);
    r0 = (r0_mdest_26 | r0_mrot_26);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(6));
    r0_mrot_27 = (r0_rot_25 & 448);
    r0_mdest_27 = (r0 & -449);
    r0 = (r0_mdest_27 | r0_mrot_27);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r0_mrot_28 = (r0_rot_26 & 15872);
    r0_mdest_28 = (r0 & -15873);
    r0 = (r0_mdest_28 | r0_mrot_28);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_804B5E38;
}

loc_804B5E0C:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r0_mrot_29 = (r0_rot_27 & 16384);
    r0_mdest_29 = (r0 & -16385);
    r0 = (r0_mdest_29 | r0_mrot_29);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(15));
    r0_mrot_30 = (r0_rot_28 & 229376);
    r0_mdest_30 = (r0 & -229377);
    r0 = (r0_mdest_30 | r0_mrot_30);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(18));
    r0_mrot_31 = (r0_rot_29 & 8126464);
    r0_mdest_31 = (r0 & -8126465);
    r0 = (r0_mdest_31 | r0_mrot_31);
    MemoryInline::FlatWrite32((r8 + 92), r0);
    goto loc_804B5E38;
}

loc_804B5E24:
{
    r0 = MemoryInline::FlatRead32((r8 + 92));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(23));
    r0_mrot_32 = (r0_rot_30 & 8388608);
    r0_mdest_32 = (r0 & -8388609);
    r0 = (r0_mdest_32 | r0_mrot_32);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r0_mrot_33 = (r0_rot_31 & 117440512);
    r0_mdest_33 = (r0 & -117440513);
    r0 = (r0_mdest_33 | r0_mrot_33);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r0_mrot_34 = (r0_rot_32 & -134217728);
    r0_mdest_34 = (r0 & 134217727);
    r0 = (r0_mdest_34 | r0_mrot_34);
    MemoryInline::FlatWrite32((r8 + 92), r0);
}

loc_804B5E38:
{
    r4 = (r4 + 16);
}

loc_804B5E3C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804B5E44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_804B5CC8;
    }
}

loc_804B5E48:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r3 = (r4 | 16);
    MemoryInline::FlatWrite32((r5 + 1532), r3);
    r3 = MemoryInline::FlatRead8((r5 + 1531));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r5 + 1531), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FD gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5CB0 func_804B5CB0 preserves=true fpr_mask=0x00000000
