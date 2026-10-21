#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802717D0(CpuContext* ctx);
extern "C" uint64_t func_802717D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80271C38(CpuContext* ctx);
extern "C" uint64_t func_80271C38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80310D5C(CpuContext* ctx);
extern "C" uint64_t func_80310D5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80310DE4(CpuContext* ctx);
extern "C" uint64_t func_80310DE4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80314FF4(CpuContext* ctx);
extern "C" uint64_t func_80314FF4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80319500_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r18_addr_5 = 0;
    uint32_t r18_addr_6 = 0;
    uint32_t r18_addr_7 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r19_addr_5 = 0;
    uint32_t r19_addr_6 = 0;
    uint32_t r19_addr_7 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_10 = 0;
    uint32_t r20_addr_11 = 0;
    uint32_t r20_addr_12 = 0;
    uint32_t r20_addr_13 = 0;
    uint32_t r20_addr_14 = 0;
    uint32_t r20_addr_15 = 0;
    uint32_t r20_addr_16 = 0;
    uint32_t r20_addr_17 = 0;
    uint32_t r20_addr_18 = 0;
    uint32_t r20_addr_19 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r20_addr_6 = 0;
    uint32_t r20_addr_7 = 0;
    uint32_t r20_addr_8 = 0;
    uint32_t r20_addr_9 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_10 = 0;
    uint32_t r21_addr_11 = 0;
    uint32_t r21_addr_12 = 0;
    uint32_t r21_addr_13 = 0;
    uint32_t r21_addr_14 = 0;
    uint32_t r21_addr_15 = 0;
    uint32_t r21_addr_16 = 0;
    uint32_t r21_addr_17 = 0;
    uint32_t r21_addr_18 = 0;
    uint32_t r21_addr_19 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_20 = 0;
    uint32_t r21_addr_21 = 0;
    uint32_t r21_addr_22 = 0;
    uint32_t r21_addr_23 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r21_addr_7 = 0;
    uint32_t r21_addr_8 = 0;
    uint32_t r21_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80319500u);
    goto loc_80319500;

loc_80319500:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r17 = r3;
    r14 = r5;
    r18 = r6;
    r19 = r7;
    r20 = r8;
    r21 = r9;
    r30 = MemoryInline::FlatRead32(r4);
    r27 = MemoryInline::FlatRead32((r4 + 4));
    r26 = MemoryInline::FlatRead32((r4 + 8));
    r25 = MemoryInline::FlatRead32((r4 + 12));
    r24 = MemoryInline::FlatRead32((r4 + 16));
    r23 = MemoryInline::FlatRead32((r4 + 20));
    r22 = 0;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r7, static_cast<uint8_t>(r0));
    guest_range_3 = MemoryInline::ResolveRangeHost(r8, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r8, static_cast<uint8_t>(r0));
    guest_range_4 = MemoryInline::ResolveRangeHost(r9, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r9, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r8 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r9 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r7 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r8 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r9 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r8 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r9 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r7 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r8 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r9 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r8 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r9 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r7 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r8 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r9 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r8 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r9 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r6 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r7 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r8 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r9 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r6 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r7 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r8 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r9 + 9), static_cast<uint8_t>(r0));
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_2270 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_2270;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_803195FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80319614;
    }
}

loc_80319600:
{
}

loc_80319604:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803197A0;
    }
}

loc_80319608:
{
}

loc_8031960C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80319624;
    }
}

loc_80319610:
{
    goto loc_80319994;
}

loc_80319614:
{
}

loc_80319618:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80319994;
    }
}

loc_8031961C:
{
}

loc_80319620:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_803197A0;
    }
}

loc_80319624:
{
    r3 = r30;
    r4 = 0;
    r5 = (r1 + 8);
    ctx->lr = 0x80319634u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80314FF4_2816 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_2816);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_2816 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r22 = 0;
    r24 = 0;
    r0 = (r14 & 255);
    r16 = (r0 & 8);
    r23 = (r0 & 1);
}

loc_80319648:
{
    r3 = r30;
    r4 = (r24 & 255);
    ctx->lr = 0x80319654u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_2C7A = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_2C7A);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_2C7A >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r15 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80319660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319790;
    }
}

loc_80319664:
{
    r4 = (r24 & 255);
    r14 = (r22 & 255);
    r18_addr_2 = (r18 + r14);
    MemoryInline::FlatWrite8(r18_addr_2, static_cast<uint8_t>(r4));
    r21_addr_2 = (r21 + r14);
    r0 = MemoryInline::FlatRead8(r21_addr_2);
    r0 = (r0 | 1);
    r21_addr_3 = (r21 + r14);
    MemoryInline::FlatWrite8(r21_addr_3, static_cast<uint8_t>(r0));
}

loc_80319680:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_803196D4;
    }
}

loc_80319684:
{
}

loc_80319688:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_803196D4;
    }
}

loc_8031968C:
{
    r3 = r25;
    ctx->lr = 0x80319694u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_338F = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_338F);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_338F >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8031969C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803196C8;
    }
}

loc_803196A0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r15)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803196A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803196D4;
    }
}

loc_803196AC:
{
    r21_addr_4 = (r21 + r14);
    r3 = MemoryInline::FlatRead8(r21_addr_4);
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803196BC;
    }
}

loc_803196B8:
{
    r0 = 2;
}

loc_803196BC:
{
    r0 = (r3 | r0);
    r21_addr_5 = (r21 + r14);
    MemoryInline::FlatWrite8(r21_addr_5, static_cast<uint8_t>(r0));
    goto loc_803196D4;
}

loc_803196C8:
{
    r21_addr_6 = (r21 + r14);
    r0 = MemoryInline::FlatRead8(r21_addr_6);
    r0 = (r0 | 8);
    r21_addr_7 = (r21 + r14);
    MemoryInline::FlatWrite8(r21_addr_7, static_cast<uint8_t>(r0));
}

loc_803196D4:
{
    r3 = r17;
    r4 = r30;
    r5 = r27;
    r6 = (r24 & 255);
    ctx->lr = 0x803196E8u;
    if constexpr (KnownRegArgsCpuCall<0x802717D0u>(&func_802717D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802717D0_3BA2 = func_802717D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802717D0_3BA2);
        r4 = static_cast<uint32_t>(regargs_result_802717D0_3BA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802717D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803196EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803196FC;
    }
}

loc_803196F0:
{
    r21_addr_9 = (r21 + r14);
    r0 = MemoryInline::FlatRead8(r21_addr_9);
    r0 = (r0 | 32);
    r21_addr_10 = (r21 + r14);
    MemoryInline::FlatWrite8(r21_addr_10, static_cast<uint8_t>(r0));
}

loc_803196FC:
{
    r14 = (r22 & 255);
    r19_addr_2 = (r19 + r14);
    MemoryInline::FlatWrite8(r19_addr_2, static_cast<uint8_t>(r15));
    r26 = 0;
    r15 = (r1 + 8);
}

loc_8031970C:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 0;
    ctx->lr = 0x80319718u;
    if constexpr (KnownRegArgsCpuCall<0x80310D5Cu>(&func_80310D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310D5C_4192 = func_80310D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80310D5C_4192);
        r4 = static_cast<uint32_t>(regargs_result_80310D5C_4192 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80319720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319744;
    }
}

loc_80319724:
{
}

loc_80319728:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r0))) {
        goto loc_80319744;
    }
}

loc_8031972C:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 0;
    ctx->lr = 0x80319738u;
    if constexpr (KnownRegArgsCpuCall<0x80310DE4u>(&func_80310DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310DE4_4652 = func_80310DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80310DE4_4652);
        r4 = static_cast<uint32_t>(regargs_result_80310DE4_4652 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r20_addr_3 = (r20 + r14);
    r0 = MemoryInline::FlatRead8(r20_addr_3);
    r0 = (r0 + r3);
    r20_addr_4 = (r20 + r14);
    MemoryInline::FlatWrite8(r20_addr_4, static_cast<uint8_t>(r0));
}

loc_80319744:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 1;
    ctx->lr = 0x80319750u;
    if constexpr (KnownRegArgsCpuCall<0x80310D5Cu>(&func_80310D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310D5C_4A6E = func_80310D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80310D5C_4A6E);
        r4 = static_cast<uint32_t>(regargs_result_80310D5C_4A6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80319758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031977C;
    }
}

loc_8031975C:
{
}

loc_80319760:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r0))) {
        goto loc_8031977C;
    }
}

loc_80319764:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 1;
    ctx->lr = 0x80319770u;
    if constexpr (KnownRegArgsCpuCall<0x80310DE4u>(&func_80310DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310DE4_4F2E = func_80310DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80310DE4_4F2E);
        r4 = static_cast<uint32_t>(regargs_result_80310DE4_4F2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r20_addr_6 = (r20 + r14);
    r0 = MemoryInline::FlatRead8(r20_addr_6);
    r0 = (r0 + r3);
    r20_addr_7 = (r20 + r14);
    MemoryInline::FlatWrite8(r20_addr_7, static_cast<uint8_t>(r0));
}

loc_8031977C:
{
    r15 = (r15 + 2);
    r26 = (r26 + 1);
}

loc_80319788:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(5))) {
        goto loc_8031970C;
    }
}

loc_8031978C:
{
    r22 = (r22 + 1);
}

loc_80319790:
{
    r24 = (r24 + 1);
}

loc_80319798:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(85))) {
        goto loc_80319648;
    }
}

loc_8031979C:
{
    goto loc_80319994;
}

loc_803197A0:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803197A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319994;
    }
}

loc_803197AC:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_803197B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80319994;
    }
}

loc_803197B8:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_803197C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80319994;
    }
}

loc_803197C4:
{
    r3 = r27;
    r4 = r26;
    r5 = (r1 + 8);
    ctx->lr = 0x803197D4u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80314FF4_5719 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_5719);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_5719 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r22 = 0;
    r28 = 0;
    r0 = (r14 & 255);
    r14 = (r0 & 8);
    r31 = (r0 & 1);
}

loc_803197E8:
{
    r3 = r30;
    r4 = (r28 & 255);
    ctx->lr = 0x803197F4u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_5B7D = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_5B7D);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_5B7D >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r15 = r3;
    r3 = r27;
    r4 = (r28 & 255);
    ctx->lr = 0x80319804u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_5F84 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_5F84);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_5F84 >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r29 = (r15 + r3);
    r3 = r26;
    r4 = (r28 & 255);
    ctx->lr = 0x80319814u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_6393 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_6393);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_6393 >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r29 = (r29 + r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_80319820:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319988;
    }
}

loc_80319824:
{
    r4 = (r28 & 255);
    r15 = (r22 & 255);
    r18_addr_5 = (r18 + r15);
    MemoryInline::FlatWrite8(r18_addr_5, static_cast<uint8_t>(r4));
    r21_addr_14 = (r21 + r15);
    r0 = MemoryInline::FlatRead8(r21_addr_14);
    r0 = (r0 | 1);
    r21_addr_15 = (r21 + r15);
    MemoryInline::FlatWrite8(r21_addr_15, static_cast<uint8_t>(r0));
}

loc_80319840:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_803198CC;
    }
}

loc_80319844:
{
}

loc_80319848:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803198CC;
    }
}

loc_8031984C:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80319854:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803198CC;
    }
}

loc_80319858:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80319860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_803198CC;
    }
}

loc_80319864:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_8031986C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803198CC;
    }
}

loc_80319870:
{
    r3 = r25;
    ctx->lr = 0x80319878u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_6CCB = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_6CCB);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_6CCB >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r16 = r3;
    r3 = r24;
    r4 = (r28 & 255);
    ctx->lr = 0x80319888u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_70D2 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_70D2);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_70D2 >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r16 = (r16 + r3);
    r3 = r23;
    r4 = (r28 & 255);
    ctx->lr = 0x80319898u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80271C38_74E1 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_74E1);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_74E1 >> 32);
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
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r16 = (r16 + r3);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
}

loc_803198A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803198CC;
    }
}

loc_803198A8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803198B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803198CC;
    }
}

loc_803198B4:
{
    r21_addr_16 = (r21 + r15);
    r3 = MemoryInline::FlatRead8(r21_addr_16);
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803198C4;
    }
}

loc_803198C0:
{
    r0 = 2;
}

loc_803198C4:
{
    r0 = (r3 | r0);
    r21_addr_17 = (r21 + r15);
    MemoryInline::FlatWrite8(r21_addr_17, static_cast<uint8_t>(r0));
}

loc_803198CC:
{
    r3 = r17;
    r4 = r30;
    r5 = r27;
    r6 = (r28 & 255);
    ctx->lr = 0x803198E0u;
    if constexpr (KnownRegArgsCpuCall<0x802717D0u>(&func_802717D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802717D0_7C24 = func_802717D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802717D0_7C24);
        r4 = static_cast<uint32_t>(regargs_result_802717D0_7C24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802717D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803198E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803198F4;
    }
}

loc_803198E8:
{
    r21_addr_19 = (r21 + r15);
    r0 = MemoryInline::FlatRead8(r21_addr_19);
    r0 = (r0 | 32);
    r21_addr_20 = (r21 + r15);
    MemoryInline::FlatWrite8(r21_addr_20, static_cast<uint8_t>(r0));
}

loc_803198F4:
{
    r16 = (r22 & 255);
    r19_addr_5 = (r19 + r16);
    MemoryInline::FlatWrite8(r19_addr_5, static_cast<uint8_t>(r29));
    r29 = 0;
    r15 = (r1 + 8);
}

loc_80319904:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 0;
    ctx->lr = 0x80319910u;
    if constexpr (KnownRegArgsCpuCall<0x80310D5Cu>(&func_80310D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310D5C_8216 = func_80310D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80310D5C_8216);
        r4 = static_cast<uint32_t>(regargs_result_80310D5C_8216 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80319918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031993C;
    }
}

loc_8031991C:
{
}

loc_80319920:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_8031993C;
    }
}

loc_80319924:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 0;
    ctx->lr = 0x80319930u;
    if constexpr (KnownRegArgsCpuCall<0x80310DE4u>(&func_80310DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310DE4_86D6 = func_80310DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80310DE4_86D6);
        r4 = static_cast<uint32_t>(regargs_result_80310DE4_86D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r20_addr_12 = (r20 + r16);
    r0 = MemoryInline::FlatRead8(r20_addr_12);
    r0 = (r0 + r3);
    r20_addr_13 = (r20 + r16);
    MemoryInline::FlatWrite8(r20_addr_13, static_cast<uint8_t>(r0));
}

loc_8031993C:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 1;
    ctx->lr = 0x80319948u;
    if constexpr (KnownRegArgsCpuCall<0x80310D5Cu>(&func_80310D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310D5C_8AF6 = func_80310D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80310D5C_8AF6);
        r4 = static_cast<uint32_t>(regargs_result_80310D5C_8AF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80319950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319974;
    }
}

loc_80319954:
{
}

loc_80319958:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_80319974;
    }
}

loc_8031995C:
{
    r3 = MemoryInline::FlatRead16(r15);
    r4 = 1;
    ctx->lr = 0x80319968u;
    if constexpr (KnownRegArgsCpuCall<0x80310DE4u>(&func_80310DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80310DE4_8FB6 = func_80310DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80310DE4_8FB6);
        r4 = static_cast<uint32_t>(regargs_result_80310DE4_8FB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80310DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r20_addr_15 = (r20 + r16);
    r0 = MemoryInline::FlatRead8(r20_addr_15);
    r0 = (r0 + r3);
    r20_addr_16 = (r20 + r16);
    MemoryInline::FlatWrite8(r20_addr_16, static_cast<uint8_t>(r0));
}

loc_80319974:
{
    r15 = (r15 + 2);
    r29 = (r29 + 1);
}

loc_80319980:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(5))) {
        goto loc_80319904;
    }
}

loc_80319984:
{
    r22 = (r22 + 1);
}

loc_80319988:
{
    r28 = (r28 + 1);
}

loc_80319990:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(85))) {
        goto loc_803197E8;
    }
}

loc_80319994:
{
    r3 = r22;
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80319500(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80319500_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80319500 func_80319500 preserves=true fpr_mask=0x00000000
