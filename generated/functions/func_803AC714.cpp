#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AB78C(CpuContext* ctx);
extern "C" uint64_t func_803AB78C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AC714_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803AC714u);
    goto loc_803AC714;

loc_803AC714:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r29 = r3;
    r30 = r4;
    r3 = 0;
    ctx->lr = 0x803AC738u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B421C_10FC = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_10FC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B421Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = (r3 & 255);
}

loc_803AC740:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_803ACD5C;
    }
}

loc_803AC744:
{
    r21 = 0;
    r23 = 0;
    r3 = 0x806C0000u;
    r24 = (r3 + 31576);
    r25 = 0;
    r26 = 22;
    r27 = 32;
    r28 = 0x80000000u;
}

loc_803AC764:
{
    r3 = 0;
    ctx->lr = 0x803AC76Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_1524 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_1524;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803AC770:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AC77C;
    }
}

loc_803AC774:
{
}

loc_803AC778:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(2))) {
        goto loc_803ACA00;
    }
}

loc_803AC77C:
{
    r0 = MemoryInline::FlatRead32((r29 + 60));
    r3 = (r0 + r23);
    r20 = (r3 + 788);
}

loc_803AC78C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_803AC9EC;
    }
}

loc_803AC790:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_803AC798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC9EC;
    }
}

loc_803AC79C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r29 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 1250));
}

loc_803AC7AC:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_803AC9EC;
    }
}

loc_803AC7B0:
{
    r22 = 2;
    r3 = r30;
    r4 = 189;
    ctx->lr = 0x803AC7C0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AC7C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AC7CC;
    }
}

loc_803AC7C8:
{
    r22 = 3;
}

loc_803AC7CC:
{
}

loc_803AC7D0:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_803AC7D8;
    }
}

loc_803AC7D4:
{
    r22 = (r22 + 1);
}

loc_803AC7D8:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_803AC7E0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803AC87C;
    }
}

loc_803AC7E4:
{
    r3 = (r22 + -8);
}

loc_803AC7EC:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(8))) {
        goto loc_803AC854;
    }
}

loc_803AC7F0:
{
    r4 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803AC808;
    }
}

loc_803AC7F8:
{
    r0 = (r28 + -2);
}

loc_803AC800:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_803AC808;
    }
}

loc_803AC804:
{
    r4 = 1;
}

loc_803AC808:
{
}

loc_803AC80C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803AC854;
    }
}

loc_803AC810:
{
    r4 = (r1 + 8);
    r0 = (r3 + 7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_803AC824:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803AC854;
    }
}

loc_803AC828:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r27));
    r4 = (r4 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC828;
    }
}

loc_803AC854:
{
    r3 = (r1 + 8);
    r3 = (r3 + r6);
    r0 = (r22 - r6);
    ctr = r0;
}

loc_803AC868:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r22))) {
        goto loc_803AC87C;
    }
}

loc_803AC86C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r27));
    r3 = (r3 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC86C;
    }
}

loc_803AC87C:
{
    r5 = (r1 + 8);
    r5 = (r5 + r6);
    r4 = (r22 - r6);
}

loc_803AC88C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r22))) {
        goto loc_803AC8E8;
    }
}

loc_803AC890:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r3 = (r3_rot_2 & 536870911);
}

loc_803AC898:
{
    r0 = r4;
    ctr = r3;
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_803AC8D4;
    }
}

loc_803AC8A4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r5, static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r5 + 1), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 2), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r5 + 3), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r5 + 4), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r5 + 5), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r5 + 6), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r5 + 7), static_cast<uint8_t>(r26));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC8A4;
    }
}

loc_803AC8CC:
{
    r4 = (r4 & 7);
}

loc_803AC8D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803AC8E4;
    }
}

loc_803AC8D4:
{
    ctr = r4;
}

loc_803AC8D8:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r26));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC8D8;
    }
}

loc_803AC8E4:
{
    r6 = (r6 + r0);
}

loc_803AC8E8:
{
    r4 = (r1 + 8);
    r4 = (r4 + r6);
    r3 = (12 - r6);
}

loc_803AC8F8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_803AC94C;
    }
}

loc_803AC8FC:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
}

loc_803AC904:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803AC93C;
    }
}

loc_803AC90C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r4, static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 1), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 2), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 3), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 4), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 5), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 6), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 7), static_cast<uint8_t>(r25));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC90C;
    }
}

loc_803AC934:
{
    r3 = (r3 & 7);
}

loc_803AC938:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AC94C;
    }
}

loc_803AC93C:
{
    ctr = r3;
}

loc_803AC940:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r25));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC940;
    }
}

loc_803AC94C:
{
    r0 = MemoryInline::FlatRead8(r20);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 1250), static_cast<uint16_t>(r25));
}

loc_803AC960:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803AC978;
    }
}

loc_803AC964:
{
    r0 = MemoryInline::FlatRead8(r20);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -16876));
    r3_addr_2 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_803AC988;
}

loc_803AC978:
{
    r0 = MemoryInline::FlatRead8(r20);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -16872));
    r3_addr_3 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_803AC988:
{
    r7 = 0;
    goto loc_803AC99C;
}

loc_803AC990:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r7 = (r7 + r0);
    r3 = (r3 + 4);
}

loc_803AC99C:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803AC9A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AC990;
    }
}

loc_803AC9A8:
{
    r0 = (r7 & 65535);
}

loc_803AC9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC9EC;
    }
}

loc_803AC9B4:
{
}

loc_803AC9B8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803AC9C8;
    }
}

loc_803AC9BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16876));
    r3_addr_5 = (r3 + r4);
    r4 = MemoryInline::FlatRead32(r3_addr_5);
    goto loc_803AC9D0;
}

loc_803AC9C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16872));
    r3_addr_6 = (r3 + r4);
    r4 = MemoryInline::FlatRead32(r3_addr_6);
}

loc_803AC9D0:
{
}

loc_803AC9D4:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(0))) {
        goto loc_803AC9EC;
    }
}

loc_803AC9D8:
{
    r3 = (r1 + 8);
    r5 = (r24 + 48);
    r6 = r22;
    r7 = (r7 & 65535);
    ctx->lr = 0x803AC9ECu;
    if constexpr (KnownRegArgsCpuCall<0x803AB78Cu>(&func_803AB78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB78C_3DD6 = func_803AB78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB78C_3DD6);
        r4 = static_cast<uint32_t>(regargs_result_803AB78C_3DD6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AB78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_803AC9EC:
{
    r23 = (r23 + 8);
    r24 = (r24 + 64);
    r21 = (r21 + 1);
}

loc_803AC9FC:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(3))) {
        goto loc_803AC764;
    }
}

loc_803ACA00:
{
    r20 = 0;
    r22 = 0;
    r24 = 0;
    r3 = 0x806C0000u;
    r23 = (r3 + 31768);
    r28 = 0;
    r27 = 22;
    r26 = 32;
    r25 = 0x80000000u;
}

loc_803ACA24:
{
}

loc_803ACA28:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(3))) {
        goto loc_803ACC74;
    }
}

loc_803ACA2C:
{
    r19 = MemoryInline::FlatRead16((r29 + 1250));
}

loc_803ACA34:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_803ACC60;
    }
}

loc_803ACA38:
{
    r21 = 2;
    r3 = r30;
    r4 = 189;
    ctx->lr = 0x803ACA48u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803ACA4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ACA54;
    }
}

loc_803ACA50:
{
    r21 = 3;
}

loc_803ACA54:
{
}

loc_803ACA58:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_803ACA60;
    }
}

loc_803ACA5C:
{
    r21 = (r21 + 1);
}

loc_803ACA60:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_803ACA68:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803ACB04;
    }
}

loc_803ACA6C:
{
    r3 = (r21 + -8);
}

loc_803ACA74:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(8))) {
        goto loc_803ACADC;
    }
}

loc_803ACA78:
{
    r4 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803ACA90;
    }
}

loc_803ACA80:
{
    r0 = (r25 + -2);
}

loc_803ACA88:
{
    if ((static_cast<int32_t>(r21) > static_cast<int32_t>(r0))) {
        goto loc_803ACA90;
    }
}

loc_803ACA8C:
{
    r4 = 1;
}

loc_803ACA90:
{
}

loc_803ACA94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803ACADC;
    }
}

loc_803ACA98:
{
    r4 = (r1 + 8);
    r0 = (r3 + 7);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_12 & 536870911);
    ctr = r0;
}

loc_803ACAAC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803ACADC;
    }
}

loc_803ACAB0:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r4, static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r4 + 1), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r4 + 2), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r4 + 3), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r4 + 4), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r4 + 5), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r4 + 6), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r4 + 7), static_cast<uint8_t>(r26));
    r4 = (r4 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACAB0;
    }
}

loc_803ACADC:
{
    r3 = (r1 + 8);
    r3 = (r3 + r6);
    r0 = (r21 - r6);
    ctr = r0;
}

loc_803ACAF0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r21))) {
        goto loc_803ACB04;
    }
}

loc_803ACAF4:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r26));
    r3 = (r3 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACAF4;
    }
}

loc_803ACB04:
{
    r5 = (r1 + 8);
    r5 = (r5 + r6);
    r4 = (r21 - r6);
}

loc_803ACB14:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r21))) {
        goto loc_803ACB70;
    }
}

loc_803ACB18:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r3 = (r3_rot_7 & 536870911);
}

loc_803ACB20:
{
    r0 = r4;
    ctr = r3;
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_803ACB5C;
    }
}

loc_803ACB2C:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, r5, static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r5 + 1), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r5 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r5 + 3), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r5 + 4), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r5 + 5), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r5 + 6), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r5 + 7), static_cast<uint8_t>(r27));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACB2C;
    }
}

loc_803ACB54:
{
    r4 = (r4 & 7);
}

loc_803ACB58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803ACB6C;
    }
}

loc_803ACB5C:
{
    ctr = r4;
}

loc_803ACB60:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r27));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACB60;
    }
}

loc_803ACB6C:
{
    r6 = (r6 + r0);
}

loc_803ACB70:
{
    r4 = (r1 + 8);
    r4 = (r4 + r6);
    r3 = (12 - r6);
}

loc_803ACB80:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_803ACBD4;
    }
}

loc_803ACB84:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_15 & 536870911);
}

loc_803ACB8C:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803ACBC4;
    }
}

loc_803ACB94:
{
    guest_range_7 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, r4, static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r4 + 1), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r4 + 2), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r4 + 3), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r4 + 4), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r4 + 5), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r4 + 6), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r4 + 7), static_cast<uint8_t>(r28));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACB94;
    }
}

loc_803ACBBC:
{
    r3 = (r3 & 7);
}

loc_803ACBC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ACBD4;
    }
}

loc_803ACBC4:
{
    ctr = r3;
}

loc_803ACBC8:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r28));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ACBC8;
    }
}

loc_803ACBD4:
{
    MemoryInline::FlatWrite16((r29 + 1250), static_cast<uint16_t>(r28));
}

loc_803ACBDC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803ACBEC;
    }
}

loc_803ACBE0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16876));
    r3_addr_11 = (r3 + r24);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    goto loc_803ACBF4;
}

loc_803ACBEC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16872));
    r3_addr_12 = (r3 + r24);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
}

loc_803ACBF4:
{
    r7 = 0;
    goto loc_803ACC08;
}

loc_803ACBFC:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r7 = (r7 + r0);
    r3 = (r3 + 4);
}

loc_803ACC08:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803ACC10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ACBFC;
    }
}

loc_803ACC14:
{
    r0 = (r7 & 65535);
}

loc_803ACC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ACC60;
    }
}

loc_803ACC20:
{
}

loc_803ACC24:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803ACC34;
    }
}

loc_803ACC28:
{
    r3 = MemoryInline::FlatRead32((r13 + -16876));
    r3_addr_14 = (r3 + r24);
    r4 = MemoryInline::FlatRead32(r3_addr_14);
    goto loc_803ACC3C;
}

loc_803ACC34:
{
    r3 = MemoryInline::FlatRead32((r13 + -16872));
    r3_addr_15 = (r3 + r24);
    r4 = MemoryInline::FlatRead32(r3_addr_15);
}

loc_803ACC3C:
{
}

loc_803ACC40:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(0))) {
        goto loc_803ACC58;
    }
}

loc_803ACC44:
{
    r3 = (r1 + 8);
    r5 = (r23 + 48);
    r6 = r21;
    r7 = (r7 & 65535);
    ctx->lr = 0x803ACC58u;
    if constexpr (KnownRegArgsCpuCall<0x803AB78Cu>(&func_803AB78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB78C_64FF = func_803AB78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB78C_64FF);
        r4 = static_cast<uint32_t>(regargs_result_803AB78C_64FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AB78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_803ACC58:
{
    r23 = (r23 + 64);
    r20 = (r20 + 1);
}

loc_803ACC60:
{
    r29 = (r29 + 2);
    r24 = (r24 + 4);
    r22 = (r22 + 1);
}

loc_803ACC70:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(41))) {
        goto loc_803ACA24;
    }
}

loc_803ACC74:
{
    r19 = 0;
    r3 = 0x806C0000u;
    r21 = (r3 + 31576);
    r22 = 28;
    r3 = 0x806C0000u;
    r20 = (r3 + 31192);
}

loc_803ACC8C:
{
    r25 = 0;
    r24 = 0;
    r23 = r21;
}

loc_803ACC98:
{
    r0 = MemoryInline::FlatRead16((r23 + 48));
}

loc_803ACCA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ACCC4;
    }
}

loc_803ACCA4:
{
    r0 = (r25 + r22);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (r20 + r0);
    r0 = (r24 + 12);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r4 = (r21 + r0);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r25 = (r25 + 1);
}

loc_803ACCC4:
{
    r23 = (r23 + 4);
    r24 = (r24 + 1);
}

loc_803ACCD0:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(4))) {
        goto loc_803ACC98;
    }
}

loc_803ACCD4:
{
    r21 = (r21 + 64);
    r22 = (r22 + 16);
    r19 = (r19 + 1);
}

loc_803ACCE4:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_803ACC8C;
    }
}

loc_803ACCE8:
{
    r19 = 0;
    r3 = 0x806C0000u;
    r21 = (r3 + 31768);
    r22 = 40;
    r3 = 0x806C0000u;
    r20 = (r3 + 31384);
}

loc_803ACD00:
{
    r24 = 0;
    r25 = 0;
    r23 = r21;
}

loc_803ACD0C:
{
    r0 = MemoryInline::FlatRead16((r23 + 48));
}

loc_803ACD14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ACD38;
    }
}

loc_803ACD18:
{
    r0 = (r24 + r22);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r3 = (r20 + r0);
    r0 = (r25 + 12);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r4 = (r21 + r0);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r24 = (r24 + 1);
}

loc_803ACD38:
{
    r23 = (r23 + 4);
    r25 = (r25 + 1);
}

loc_803ACD44:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_803ACD0C;
    }
}

loc_803ACD48:
{
    r21 = (r21 + 64);
    r22 = (r22 + 4);
    r19 = (r19 + 1);
}

loc_803ACD58:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_803ACD00;
    }
}

loc_803ACD5C:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AC714(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AC714_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AC714 func_803AC714 preserves=true fpr_mask=0x00000000
