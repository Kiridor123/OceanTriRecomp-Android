#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E3E50_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addr_dcbz_0 = 0;
    uint32_t r0_addr_dcbz_1 = 0;
    uint32_t r0_addr_dcbz_2 = 0;
    uint32_t r0_addr_dcbz_al_0 = 0;
    uint32_t r0_addr_dcbz_al_1 = 0;
    uint32_t r0_addr_dcbz_al_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r11_addr_7 = 0;
    uint32_t r11_addr_8 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mdest_4 = 0;
    uint32_t r12_mdest_5 = 0;
    uint32_t r12_mdest_6 = 0;
    uint32_t r12_mdest_7 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_mrot_4 = 0;
    uint32_t r12_mrot_5 = 0;
    uint32_t r12_mrot_6 = 0;
    uint32_t r12_mrot_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_12 = 0;
    uint32_t r12_rot_13 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_dcbz_0 = 0;
    uint32_t r4_addr_dcbz_al_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_10 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mdest_8 = 0;
    uint32_t r5_mdest_9 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_10 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_mrot_8 = 0;
    uint32_t r5_mrot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804E3E50;

loc_804E3E50:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r4_addr_dcbz_0 = r4;
    r4_addr_dcbz_al_0 = (r4_addr_dcbz_0 & -32);
    memset_zero_32(r4_addr_dcbz_al_0);
    r12 = MemoryInline::FlatRead32((r3 + 1700));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -14560), 0, 100u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r13 + -14464));
}

loc_804E3E70:
{
    r11 = MemoryInline::FlatRead32((r3 + 1696));
    r5 = (r12 + 4);
    r10 = (r8 + 32);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r9 = (r9_rot_0 & 31);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(28))) {
        goto loc_804E3F40;
    }
}

loc_804E3E84:
{
    r8_addr_0 = (r8 + r9);
    r5 = MemoryInline::FlatRead8(r8_addr_0);
    r10_addr_0 = (r10 + r9);
    r10 = MemoryInline::FlatRead8(r10_addr_0);
}

loc_804E3E90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_804E3EA0;
    }
}

loc_804E3E94:
{
    r12 = (r12 + r10);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    goto loc_804E40E4;
}

loc_804E3EA0:
{
    r6 = (r8 + 88);
    r5 = 5;
    r12 = (r12 + 5);
    // nop
}

loc_804E3EB0:
{
}

loc_804E3EB4:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_804E3ED0;
    }
}

loc_804E3EBC:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_2 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
    r12 = (r12 + 1);
    goto loc_804E3F14;
}

loc_804E3ED0:
{
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r12 = 1;
    r10 = (r10 + 4);
    r11 = MemoryInline::FlatRead32(r10);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r9_mrot_1 = (r9_rot_3 & 1);
    r9_mdest_1 = (r9 & -2);
    r9 = (r9_mdest_1 | r9_mrot_1);
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    goto loc_804E3F00;
}

loc_804E3EF0:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & -2);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r10 = (r10_rot_4 & 1);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r9 = (r9 | r10);
}

loc_804E3F00:
{
}

loc_804E3F04:
{
    r12 = (r12 + 1);
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_804E3EF0;
    }
}

loc_804E3F10:
{
    goto loc_804E3F20;
}

loc_804E3F14:
{
}

loc_804E3F18:
{
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_804E3EB0;
    }
}

loc_804E3F20:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r0 + r9);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_1);
    goto loc_804E40E4;
}

loc_804E3F40:
{
}

loc_804E3F44:
{
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(33))) {
        goto loc_804E3FF8;
    }
}

loc_804E3F4C:
{
}

loc_804E3F50:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r5 = (r5_rot_1 & 31);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(32))) {
        goto loc_804E3F80;
    }
}

loc_804E3F58:
{
    r8_addr_1 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_1);
    r10_addr_1 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_1);
}

loc_804E3F64:
{
    r5 = (r12 + r10);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(255))) {
        goto loc_804E405C;
    }
}

loc_804E3F6C:
{
}

loc_804E3F70:
{
    MemoryInline::FlatWrite32((r3 + 1700), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(33))) {
        goto loc_804E405C;
    }
}

loc_804E3F78:
{
    r5 = r9;
    goto loc_804E40E4;
}

loc_804E3F80:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r5_mrot_2 = (r5_rot_6 & 15);
    r5_mdest_2 = (r5 & -16);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r8_addr_2 = (r8 + r5);
    r9 = MemoryInline::FlatRead8(r8_addr_2);
    r10_addr_2 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_2);
}

loc_804E3F98:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 1700), r10);
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 1696), r11);
    }
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(255))) {
        goto loc_804E3FAC;
    }
}

loc_804E3FA4:
{
    r5 = r9;
    goto loc_804E40E4;
}

loc_804E3FAC:
{
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r9 = (r9_rot_7 & -134217728);
    r6 = (r8 + 88);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(31));
    r9_mrot_3 = (r9_rot_8 & 2147483647);
    r9_mdest_3 = (r9 & -2147483648);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r12 = 5;
    // nop
}

loc_804E3FC0:
{
    r11 = (31 - r12);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r12 = (r12 + 1);
}

loc_804E3FD4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E3FC0;
    }
}

loc_804E3FD8:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
}

loc_804E3FDC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = MemoryInline::FlatRead32((r8 + 64));
    r6 = (r8 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r7 + r5);
    r6_addr_2 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    goto loc_804E40E4;
}

loc_804E3FF8:
{
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(5));
    r5 = (r5_rot_8 & 31);
    r8_addr_4 = (r8 + r5);
    r12 = MemoryInline::FlatRead8(r8_addr_4);
    r10_addr_4 = (r10 + r5);
    r10 = MemoryInline::FlatRead8(r10_addr_4);
}

loc_804E4010:
{
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r10 = (r10 + 1);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_804E4028;
    }
}

loc_804E401C:
{
    MemoryInline::FlatWrite32((r3 + 1700), r10);
    r5 = r12;
    goto loc_804E40E4;
}

loc_804E4028:
{
    r12 = 5;
    r6 = 20;
}

loc_804E4030:
{
    r9 = (31 - r12);
    r6 = (r6 + 4);
    r5 = (r8 + r6);
    r12 = (r12 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    r5 = PPC_Srw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
}

loc_804E404C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E4030;
    }
}

loc_804E4050:
{
    r0 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    goto loc_804E3FDC;
}

loc_804E405C:
{
    r0 = (33 - r12);
    r5 = -1;
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r9 = MemoryInline::FlatRead32((r3 + 1692));
    r5 = (r11 & ~r7);
    r7 = (r8 + 68);
    r6 = (33 - r12);
    r9 = (r9 + 4);
    r11 = MemoryInline::FlatRead32(r9);
    r12 = (r6 + 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    MemoryInline::FlatWrite32((r3 + 1696), r11);
    r7 = (r7 + r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r9);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5_mrot_1 = (r5_rot_3 & 1);
    r5_mdest_1 = (r5 & -2);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r9 = 2;
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    goto loc_804E40BC;
}

loc_804E40A8:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    r7 = (r7 + 4);
    r6 = MemoryInline::FlatRead32(r7);
    r5 = (r5 + r10);
    r9 = (r9 + 1);
    r12 = (r12 + 1);
}

loc_804E40BC:
{
}

loc_804E40C0:
{
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
    r10 = (r10_rot_7 & 1);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_804E40A8;
    }
}

loc_804E40C8:
{
    MemoryInline::FlatWrite32((r3 + 1700), r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 64));
    r6 = MemoryInline::FlatRead32((r6 + 140));
    r0 = (r0 + r5);
    r6_addr_1 = (r6 + r0);
    r5 = MemoryInline::FlatRead8(r6_addr_1);
}

loc_804E40E4:
{
    r0 = 32;
    r0_addr_dcbz_0 = (r4 + r0);
    r0_addr_dcbz_al_0 = (r0_addr_dcbz_0 & -32);
    memset_zero_32(r0_addr_dcbz_al_0);
    r0 = 64;
    r7 = 0;
    r0_addr_dcbz_1 = (r4 + r0);
    r0_addr_dcbz_al_1 = (r0_addr_dcbz_1 & -32);
    memset_zero_32(r0_addr_dcbz_al_1);
}

loc_804E40FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804E4184;
    }
}

loc_804E4100:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 1700));
    r11 = (33 - r10);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r3 + 1696));
    r12 = (r5 - r11);
    r29 = (r10 + -1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(0))) {
        goto loc_804E4130;
    }
}

loc_804E4118:
{
    r0 = (r10 + r5);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    r10 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r0 = (32 - r5);
    r7 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    goto loc_804E415C;
}

loc_804E4130:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1696), r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r12 = (32 - r5);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
}

loc_804E415C:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (32 - r5);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
}

loc_804E416C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_804E4184;
    }
}

loc_804E4170:
{
    r0 = -1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = (r7 + r0);
    r0 = (r5 + 1);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804E4184:
{
    r0 = 96;
    r0_addr_dcbz_2 = (r4 + r0);
    r0_addr_dcbz_al_2 = (r0_addr_dcbz_2 & -32);
    memset_zero_32(r0_addr_dcbz_al_2);
    r8 = 0x80570000u;
    r0 = MemoryInline::FlatRead16((r3 + 1674));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r8 + 17272);
    r6 = 1;
    r9 = -1;
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 1674), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_804E44CC;
}

loc_804E41B0:
{
    r29 = MemoryInline::FlatRead32((r3 + 1700));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14560));
}

loc_804E41BC:
{
    r30 = MemoryInline::FlatRead32((r3 + 1696));
    r5 = (r29 + 4);
    r31 = (r11 + 32);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r5));
    r12 = (r12_rot_2 & 31);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(28))) {
        goto loc_804E4288;
    }
}

loc_804E41D0:
{
    r11_addr_2 = (r11 + r12);
    r5 = MemoryInline::FlatRead8(r11_addr_2);
    r31_addr_2 = (r31 + r12);
    r31 = MemoryInline::FlatRead8(r31_addr_2);
}

loc_804E41DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_804E41EC;
    }
}

loc_804E41E0:
{
    r29 = (r29 + r31);
    MemoryInline::FlatWrite32((r3 + 1700), r29);
    goto loc_804E4424;
}

loc_804E41EC:
{
    r7 = (r11 + 88);
    r5 = 5;
    r29 = (r29 + 5);
}

loc_804E41F8:
{
}

loc_804E41FC:
{
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_4 & -2);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(33))) {
        goto loc_804E4218;
    }
}

loc_804E4204:
{
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r31 = (r31_rot_3 & 1);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12 = (r12 | r31);
    r29 = (r29 + 1);
    goto loc_804E425C;
}

loc_804E4218:
{
    r31 = MemoryInline::FlatRead32((r3 + 1692));
    r29 = 1;
    r31 = (r31 + 4);
    r30 = MemoryInline::FlatRead32(r31);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r12_mrot_2 = (r12_rot_5 & 1);
    r12_mdest_2 = (r12 & -2);
    r12 = (r12_mdest_2 | r12_mrot_2);
    MemoryInline::FlatWrite32((r3 + 1692), r31);
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    goto loc_804E4248;
}

loc_804E4238:
{
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_7 & -2);
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r31 = (r31_rot_5 & 1);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r12 = (r12 | r31);
}

loc_804E4248:
{
}

loc_804E424C:
{
    r29 = (r29 + 1);
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r0))) {
        goto loc_804E4238;
    }
}

loc_804E4258:
{
    goto loc_804E4268;
}

loc_804E425C:
{
}

loc_804E4260:
{
    r5 = (r5 + 1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r0))) {
        goto loc_804E41F8;
    }
}

loc_804E4268:
{
    MemoryInline::FlatWrite32((r3 + 1700), r29);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r11 + r0);
    r0 = MemoryInline::FlatRead32((r11 + 64));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r0 + r12);
    r5_addr_4 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_4);
    goto loc_804E4424;
}

loc_804E4288:
{
}

loc_804E428C:
{
    r12 = MemoryInline::FlatRead32((r3 + 1692));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(33))) {
        goto loc_804E4340;
    }
}

loc_804E4294:
{
}

loc_804E4298:
{
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r5));
    r5 = (r5_rot_11 & 31);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(32))) {
        goto loc_804E42C8;
    }
}

loc_804E42A0:
{
    r11_addr_3 = (r11 + r5);
    r12 = MemoryInline::FlatRead8(r11_addr_3);
    r31_addr_3 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_3);
}

loc_804E42AC:
{
    r5 = (r29 + r31);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_804E43A4;
    }
}

loc_804E42B4:
{
}

loc_804E42B8:
{
    MemoryInline::FlatWrite32((r3 + 1700), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(33))) {
        goto loc_804E43A4;
    }
}

loc_804E42C0:
{
    r5 = r12;
    goto loc_804E4424;
}

loc_804E42C8:
{
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r5_mrot_7 = (r5_rot_16 & 15);
    r5_mdest_7 = (r5 & -16);
    r5 = (r5_mdest_7 | r5_mrot_7);
    r11_addr_4 = (r11 + r5);
    r12 = MemoryInline::FlatRead8(r11_addr_4);
    r31_addr_4 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_4);
}

loc_804E42E0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 1700), r31);
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r3 + 1696), r30);
    }
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(255))) {
        goto loc_804E42F4;
    }
}

loc_804E42EC:
{
    r5 = r12;
    goto loc_804E4424;
}

loc_804E42F4:
{
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r12 = (r12_rot_9 & -134217728);
    r7 = (r11 + 88);
    r12_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r12_mrot_4 = (r12_rot_10 & 2147483647);
    r12_mdest_4 = (r12 & -2147483648);
    r12 = (r12_mdest_4 | r12_mrot_4);
    r29 = 5;
    // nop
}

loc_804E4308:
{
    r30 = (31 - r29);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r5 = PPC_Srw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r30));
    r29 = (r29 + 1);
}

loc_804E431C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E4308;
    }
}

loc_804E4320:
{
    MemoryInline::FlatWrite32((r3 + 1700), r29);
}

loc_804E4324:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r10 = MemoryInline::FlatRead32((r11 + 64));
    r7 = (r11 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 140));
    r0 = (r10 + r5);
    r7_addr_3 = (r7 + r0);
    r5 = MemoryInline::FlatRead8(r7_addr_3);
    goto loc_804E4424;
}

loc_804E4340:
{
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r5_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r5 = (r5_rot_18 & 31);
    r11_addr_6 = (r11 + r5);
    r29 = MemoryInline::FlatRead8(r11_addr_6);
    r31_addr_6 = (r31 + r5);
    r31 = MemoryInline::FlatRead8(r31_addr_6);
}

loc_804E4358:
{
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    r31 = (r31 + 1);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(255))) {
        goto loc_804E4370;
    }
}

loc_804E4364:
{
    MemoryInline::FlatWrite32((r3 + 1700), r31);
    r5 = r29;
    goto loc_804E4424;
}

loc_804E4370:
{
    r29 = 5;
    r7 = 20;
}

loc_804E4378:
{
    r12 = (31 - r29);
    r7 = (r7 + 4);
    r5 = (r11 + r7);
    r29 = (r29 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    r5 = PPC_Srw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r12));
}

loc_804E4394:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804E4378;
    }
}

loc_804E4398:
{
    r0 = (r29 + 1);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    goto loc_804E4324;
}

loc_804E43A4:
{
    r0 = (33 - r29);
    r12 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r5 = (r30 & ~r10);
    r10 = (r11 + 68);
    r7 = (33 - r29);
    r12 = (r12 + 4);
    r30 = MemoryInline::FlatRead32(r12);
    r29 = (r7 + 1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    MemoryInline::FlatWrite32((r3 + 1696), r30);
    r10 = (r10 + r7);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_12 & -2);
    MemoryInline::FlatWrite32((r3 + 1692), r12);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5_mrot_6 = (r5_rot_13 & 1);
    r5_mdest_6 = (r5 & -2);
    r5 = (r5_mdest_6 | r5_mrot_6);
    r12 = 2;
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    goto loc_804E43FC;
}

loc_804E43E8:
{
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_15 & -2);
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r5 = (r5 + r31);
    r12 = (r12 + 1);
    r29 = (r29 + 1);
}

loc_804E43FC:
{
}

loc_804E4400:
{
    r31_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(r12));
    r31 = (r31_rot_8 & 1);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r7))) {
        goto loc_804E43E8;
    }
}

loc_804E4408:
{
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r7 = (r11 + r0);
    r0 = MemoryInline::FlatRead32((r11 + 64));
    r7 = MemoryInline::FlatRead32((r7 + 140));
    r0 = (r0 + r5);
    r7_addr_2 = (r7 + r0);
    r5 = MemoryInline::FlatRead8(r7_addr_2);
}

loc_804E4424:
{
    r30 = (r5 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_804E4428:
{
    r7 = (static_cast<int32_t>(r5) >> 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E44BC;
    }
}

loc_804E4430:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 1696), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 1700));
    r6 = (r6 + r7);
    r11 = (33 - r10);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r3 + 1696));
    r12 = (r30 - r11);
    r29 = (r10 + -1);
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(0))) {
        goto loc_804E4464;
    }
}

loc_804E444C:
{
    r0 = (r10 + r30);
    MemoryInline::FlatWrite32((r3 + 1700), r0);
    r10 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r0 = (32 - r30);
    r7 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    goto loc_804E4490;
}

loc_804E4464:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r29));
    r10 = MemoryInline::FlatRead32((r3 + 1692));
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead32(r10);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite32((r3 + 1696), r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    MemoryInline::FlatWrite32((r3 + 1692), r10);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1700), r12);
    r12 = (32 - r30);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
}

loc_804E4490:
{
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r0 = (32 - r30);
}

loc_804E449C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_804E44AC;
    }
}

loc_804E44A0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r30));
    r5 = (r0 + r7);
    r7 = (r5 + 1);
}

loc_804E44AC:
{
    r8_addr_7 = (r8 + r6);
    r0 = MemoryInline::FlatRead8(r8_addr_7);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r7));
    goto loc_804E44C8;
}

loc_804E44BC:
{
}

loc_804E44C0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(15))) {
        goto loc_804E44D4;
    }
}

loc_804E44C4:
{
    r6 = (r6 + 15);
}

loc_804E44C8:
{
    r6 = (r6 + 1);
}

loc_804E44CC:
{
}

loc_804E44D0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(64))) {
        goto loc_804E41B0;
    }
}

loc_804E44D4:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 12u, true, false);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_804E3E50(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804E3E50_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E3E50 func_804E3E50 preserves=true fpr_mask=0x00000000
