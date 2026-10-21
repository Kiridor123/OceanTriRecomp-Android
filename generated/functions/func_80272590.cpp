#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802723B0(CpuContext* ctx);
extern "C" uint64_t func_802723B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80272590u);
    goto loc_80272590;

loc_80272590:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_6, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = 0x805C0000u;
    r31 = (r3 + 2440);
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_6, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r5, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 7), static_cast<uint8_t>(r0));
    goto loc_80272788;
}

loc_80272628:
{
    r3 = r27;
    r4 = (r0 & 255);
    ctx->lr = 0x80272634u;
    if constexpr (KnownRegArgsCpuCall<0x802723B0u>(&func_802723B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802723B0_18E3 = func_802723B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802723B0_18E3);
        r4 = static_cast<uint32_t>(regargs_result_802723B0_18E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802723B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80272644:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_80272670;
    }
}

loc_80272648:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 3));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl1_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl1_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl1_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80272564:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8027254C;
}

loc_inl1_return:
{
}

loc_inl1_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
    goto loc_80272784;
}

loc_80272670:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027267C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_802726A8;
    }
}

loc_80272680:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 5));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl2_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl2_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl2_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80272564:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_4, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_4, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl2_cont_8027254C;
}

loc_inl2_return:
{
}

loc_inl2_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
    goto loc_80272784;
}

loc_802726A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802726B4:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_802726E0;
    }
}

loc_802726B8:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 7));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl3_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl3_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl3_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80272564:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_6 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_6 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_6, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl3_cont_8027254C;
}

loc_inl3_return:
{
}

loc_inl3_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
    goto loc_80272784;
}

loc_802726E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802726EC:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_80272718;
    }
}

loc_802726F0:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 13));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl4_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl4_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl4_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80272564:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_8, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_8 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_8, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_8 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_8, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl4_cont_8027254C;
}

loc_inl4_return:
{
}

loc_inl4_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
    goto loc_80272784;
}

loc_80272718:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80272724:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_80272750;
    }
}

loc_80272728:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 11));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl5_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl5_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl5_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80272564:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3_addr_10 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_10, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_10 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_10, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_10 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_10, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl5_cont_8027254C;
}

loc_inl5_return:
{
}

loc_inl5_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
    goto loc_80272784;
}

loc_80272750:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027275C:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_80272784;
    }
}

loc_80272760:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r31 + 9));
    r7 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16(r31);
    r8 = (r0 & 255);
    // inline leaf 0x8027254C (17 guest instruction(s))
}

loc_inl6_0x8027254C:
{
    r0 = (r7 & 65535);
}

loc_inl6_0x80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_inl6_0x80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80272564:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3_addr_12 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_12, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_12 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_12, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_12 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_12, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8(r6, static_cast<uint8_t>(r0));
    goto loc_inl6_cont_8027254C;
}

loc_inl6_return:
{
}

loc_inl6_cont_8027254C:
{
    // end of inlined leaf 0x8027254C
}

loc_80272784:
{
    r31 = (r31 + 16);
}

loc_80272788:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80272790:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80272628;
    }
}

loc_80272794:
{
    r11 = 0;
    r7 = (r1 + 32);
    r8 = (r1 + 24);
    r9 = r28;
    r10 = (r1 + 16);
    r5 = 0;
    r4 = r29;
    r3 = r30;
    r0 = 4;
    ctr = r0;
}

loc_802727BC:
{
    r0 = MemoryInline::FlatRead8(r4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_802727C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80272820;
    }
}

loc_802727CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802727F4;
    }
}

loc_802727D0:
{
    r0 = (r6 + 200);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r9);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    goto loc_8027282C;
}

loc_802727F4:
{
    r0 = (0 - r6);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r6 + 100);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r9);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    goto loc_8027282C;
}

loc_80272820:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r5));
}

loc_8027282C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80272838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80272890;
    }
}

loc_8027283C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80272864;
    }
}

loc_80272840:
{
    r0 = (r6 + 200);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r9 + 2));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r0));
    goto loc_8027289C;
}

loc_80272864:
{
    r0 = (0 - r6);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r6 + 100);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r9 + 2));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r0));
    goto loc_8027289C;
}

loc_80272890:
{
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r5));
}

loc_8027289C:
{
    r7 = (r7 + 4);
    r8 = (r8 + 2);
    r9 = (r9 + 4);
    r10 = (r10 + 2);
    r11 = (r11 + 1);
    r3 = (r3 + 2);
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802727BC;
    }
}

loc_802728BC:
{
    r12 = 0;
    r4 = (r1 + 32);
    r5 = (r1 + 24);
    r6 = (r1 + 16);
}

loc_802728CC:
{
    r27 = (r12 + 1);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r7 = (r1 + 32);
    r7 = (r7 + r0);
    r8 = (r1 + 24);
    r8 = (r8 + r27);
    r9 = (r1 + 16);
    r9 = (r9 + r27);
    r0 = (8 - r27);
    ctr = r0;
}

loc_802728F8:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(8))) {
        goto loc_8027295C;
    }
}

loc_802728FC:
{
    r10 = MemoryInline::FlatRead16(r7);
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r11 = MemoryInline::FlatRead16(r4);
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r10));
}

loc_80272908:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80272920;
    }
}

loc_8027290C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80272948;
    }
}

loc_80272910:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8(r8);
}

loc_8027291C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80272948;
    }
}

loc_80272920:
{
    r3 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r10));
    r0 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r11));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r3));
}

loc_80272948:
{
    r7 = (r7 + 2);
    r8 = (r8 + 1);
    r9 = (r9 + 1);
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802728FC;
    }
}

loc_8027295C:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    r12 = (r12 + 1);
}

loc_80272970:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(7))) {
        goto loc_802728CC;
    }
}

loc_80272974:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 72u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_7, 16u, (r1 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    guest_range_3 = MemoryInline::ResolveRangeHost(r29, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 8u, (r1 + 24));
    guest_range_4 = MemoryInline::ResolveRangeHost(r30, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r1 + 16));
    guest_range_5 = MemoryInline::ResolveRangeHost(r28, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, r28, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 18u, (r1 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 9u, (r1 + 25));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 1u, (r1 + 17));
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r28 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 20u, (r1 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 10u, (r1 + 26));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r30 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 2u, (r1 + 18));
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 22u, (r1 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 11u, (r1 + 27));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r30 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 3u, (r1 + 19));
    MemoryInline::WriteResolved16(guest_range_5, 6u, (r28 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 24u, (r1 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 12u, (r1 + 28));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r30 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 4u, (r1 + 20));
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 26u, (r1 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 13u, (r1 + 29));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r30 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 5u, (r1 + 21));
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r28 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 28u, (r1 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 14u, (r1 + 30));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r30 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 6u, (r1 + 22));
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r28 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 30u, (r1 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r29 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 15u, (r1 + 31));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r30 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 7u, (r1 + 23));
    MemoryInline::WriteResolved16(guest_range_5, 14u, (r28 + 14), static_cast<uint16_t>(r0));
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_7, 68u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80272590(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80272590_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80272590 func_80272590 preserves=true fpr_mask=0x00000000
