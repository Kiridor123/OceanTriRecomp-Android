#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AB78C(CpuContext* ctx);
extern "C" uint64_t func_803AB78C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB870(CpuContext* ctx);
extern "C" uint64_t func_803AB870_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803ABEA8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803ABEA8u);
    goto loc_803ABEA8;

loc_803ABEA8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r3 = 0;
    ctx->lr = 0x803ABEC8u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B421C_14D2 = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_14D2;
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
    r17 = (r3 & 255);
}

loc_803ABED0:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(2))) {
        goto loc_803AC6FC;
    }
}

loc_803ABED4:
{
    r0 = MemoryInline::FlatRead8((r15 + 27300));
}

loc_803ABEDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803ABF40;
    }
}

loc_803ABEE0:
{
    r0 = MemoryInline::FlatRead32((r15 + 27308));
    r0 = (r0 & 1);
}

loc_803ABEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ABEF8;
    }
}

loc_803ABEF0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 26790), static_cast<uint8_t>(r0));
}

loc_803ABEF8:
{
    r0 = MemoryInline::FlatRead32((r15 + 27308));
    r0 = (r0 & 2);
}

loc_803ABF04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ABF10;
    }
}

loc_803ABF08:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 26788), static_cast<uint8_t>(r0));
}

loc_803ABF10:
{
    r0 = MemoryInline::FlatRead32((r15 + 27308));
    r0 = (r0 & 4);
}

loc_803ABF1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ABF28;
    }
}

loc_803ABF20:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 26791), static_cast<uint8_t>(r0));
}

loc_803ABF28:
{
    r0 = MemoryInline::FlatRead32((r15 + 27308));
    r0 = (r0 & 8);
}

loc_803ABF34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ABF40;
    }
}

loc_803ABF38:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 26789), static_cast<uint8_t>(r0));
}

loc_803ABF40:
{
    r3 = MemoryInline::FlatRead32((r15 + 60));
    r16 = (r3 + 788);
}

loc_803ABF4C:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_803AC34C;
    }
}

loc_803ABF50:
{
    r14 = 0;
    r3 = 0x806C0000u;
    r25 = (r3 + 31576);
    r30 = 0;
    r29 = 22;
    r28 = 32;
    r27 = 0x80000000u;
    r3 = 0x80600000u;
    r26 = (r3 + -32128);
}

loc_803ABF74:
{
    r3 = 0;
    ctx->lr = 0x803ABF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_1F71 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_1F71;
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

loc_803ABF80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ABF8C;
    }
}

loc_803ABF84:
{
}

loc_803ABF88:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(2))) {
        goto loc_803AC34C;
    }
}

loc_803ABF8C:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_803ABF94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC338;
    }
}

loc_803ABF98:
{
    r3 = MemoryInline::FlatRead32((r13 + -16888));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r22 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_803ABFA8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_803AC338;
    }
}

loc_803ABFAC:
{
    r18 = 0;
    r31 = 0;
    r24 = 0;
    goto loc_803AC32C;
}

loc_803ABFBC:
{
}

loc_803ABFC0:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(4))) {
        goto loc_803AC338;
    }
}

loc_803ABFC4:
{
    r0 = 0;
    r5 = 0;
    r4 = 0;
    r3 = MemoryInline::FlatRead8(r16);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & -8);
    r3 = (r15 + r3);
    r3 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 26627));
}

loc_803ABFE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AC1A4;
    }
}

loc_803ABFEC:
{
    r0 = MemoryInline::FlatRead8((r22 + 1));
    r4 = r3;
}

loc_803ABFF8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(5))) {
        goto loc_803AC000;
    }
}

loc_803ABFFC:
{
    r4 = 5;
}

loc_803AC000:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r3 - r4);
    r3 = (r26 + r3);
    r20 = MemoryInline::FlatRead8((r3 + 1));
    r19 = MemoryInline::FlatRead8((r3 + 2));
    r3 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_803AC01C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803AC0B8;
    }
}

loc_803AC020:
{
    r7 = (r20 + -8);
}

loc_803AC028:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(8))) {
        goto loc_803AC090;
    }
}

loc_803AC02C:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803AC044;
    }
}

loc_803AC034:
{
    r6 = (r27 + -2);
}

loc_803AC03C:
{
    if ((static_cast<int32_t>(r20) > static_cast<int32_t>(r6))) {
        goto loc_803AC044;
    }
}

loc_803AC040:
{
    r8 = 1;
}

loc_803AC044:
{
}

loc_803AC048:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803AC090;
    }
}

loc_803AC04C:
{
    r8 = (r1 + 8);
    r6 = (r7 + 7);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_3 & 536870911);
    ctr = r6;
}

loc_803AC060:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_803AC090;
    }
}

loc_803AC064:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r8, static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r8 + 1), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r8 + 2), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r8 + 3), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r8 + 4), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r8 + 5), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r8 + 6), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r8 + 7), static_cast<uint8_t>(r28));
    r8 = (r8 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC064;
    }
}

loc_803AC090:
{
    r7 = (r1 + 8);
    r7 = (r7 + r3);
    r6 = (r20 - r3);
    ctr = r6;
}

loc_803AC0A4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r20))) {
        goto loc_803AC0B8;
    }
}

loc_803AC0A8:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r28));
    r7 = (r7 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC0A8;
    }
}

loc_803AC0B8:
{
    r9 = (r1 + 8);
    r9 = (r9 + r3);
    r6 = (r20 + r19);
    r8 = (r6 - r3);
}

loc_803AC0CC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r6))) {
        goto loc_803AC128;
    }
}

loc_803AC0D0:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r7 = (r7_rot_3 & 536870911);
}

loc_803AC0D8:
{
    r6 = r8;
    ctr = r7;
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(0))) {
        goto loc_803AC114;
    }
}

loc_803AC0E4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r9, static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r9 + 1), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r9 + 2), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r9 + 3), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r9 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r9 + 5), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r9 + 6), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r9 + 7), static_cast<uint8_t>(r29));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC0E4;
    }
}

loc_803AC10C:
{
    r8 = (r8 & 7);
}

loc_803AC110:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803AC124;
    }
}

loc_803AC114:
{
    ctr = r8;
}

loc_803AC118:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r29));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC118;
    }
}

loc_803AC124:
{
    r3 = (r3 + r6);
}

loc_803AC128:
{
    r7 = (r1 + 8);
    r7 = (r7 + r3);
    r6 = (12 - r3);
}

loc_803AC138:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(12))) {
        goto loc_803AC18C;
    }
}

loc_803AC13C:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r3 = (r3_rot_5 & 536870911);
}

loc_803AC144:
{
    ctr = r3;
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_803AC17C;
    }
}

loc_803AC14C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r7, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r7 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r7 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r7 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r7 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r7 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r7 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r7 + 7), static_cast<uint8_t>(r30));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC14C;
    }
}

loc_803AC174:
{
    r6 = (r6 & 7);
}

loc_803AC178:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803AC18C;
    }
}

loc_803AC17C:
{
    ctr = r6;
}

loc_803AC180:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r30));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC180;
    }
}

loc_803AC18C:
{
    r3 = MemoryInline::FlatRead8(r16);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_7 & -8);
    r6 = MemoryInline::FlatRead8(r22);
    r3 = (r15 + r3);
    r3 = (r6 + r3);
    MemoryInline::FlatWrite8((r3 + 26627), static_cast<uint8_t>(r30));
}

loc_803AC1A4:
{
}

loc_803AC1A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC1AC:
{
}

loc_803AC1B0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC1B4:
{
    r3 = MemoryInline::FlatRead8(r16);
}

loc_803AC1BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(20))) {
        goto loc_803AC250;
    }
}

loc_803AC1C0:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_803AC1C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_803AC1E4;
    }
}

loc_803AC1CC:
{
    r4 = MemoryInline::FlatRead32((r15 + 27308));
    r3 = (r4 & 1);
}

loc_803AC1D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC1DC:
{
    r3 = (r4 | 1);
    MemoryInline::FlatWrite32((r15 + 27308), r3);
}

loc_803AC1E4:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_803AC1EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AC208;
    }
}

loc_803AC1F0:
{
    r4 = MemoryInline::FlatRead32((r15 + 27308));
    r3 = (r4 & 2);
}

loc_803AC1FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC200:
{
    r3 = (r4 | 2);
    MemoryInline::FlatWrite32((r15 + 27308), r3);
}

loc_803AC208:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_803AC210:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_803AC22C;
    }
}

loc_803AC214:
{
    r4 = MemoryInline::FlatRead32((r15 + 27308));
    r3 = (r4 & 4);
}

loc_803AC220:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC224:
{
    r3 = (r4 | 4);
    MemoryInline::FlatWrite32((r15 + 27308), r3);
}

loc_803AC22C:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_803AC234:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_803AC250;
    }
}

loc_803AC238:
{
    r4 = MemoryInline::FlatRead32((r15 + 27308));
    r3 = (r4 & 8);
}

loc_803AC244:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC248:
{
    r3 = (r4 | 8);
    MemoryInline::FlatWrite32((r15 + 27308), r3);
}

loc_803AC250:
{
}

loc_803AC254:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_803AC26C;
    }
}

loc_803AC258:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -16884));
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r3 + -4));
    goto loc_803AC27C;
}

loc_803AC26C:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -16880));
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r3 + -4));
}

loc_803AC27C:
{
    r21 = 0;
    goto loc_803AC290;
}

loc_803AC284:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r21 = (r21 + r0);
    r3 = (r3 + 4);
}

loc_803AC290:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803AC298:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AC284;
    }
}

loc_803AC29C:
{
    r0 = (r21 & 65535);
}

loc_803AC2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC328;
    }
}

loc_803AC2A8:
{
}

loc_803AC2AC:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_803AC2C0;
    }
}

loc_803AC2B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -16884));
    r3 = (r0 + r4);
    r23 = MemoryInline::FlatRead32((r3 + -4));
    goto loc_803AC2CC;
}

loc_803AC2C0:
{
    r0 = MemoryInline::FlatRead32((r13 + -16880));
    r3 = (r0 + r4);
    r23 = MemoryInline::FlatRead32((r3 + -4));
}

loc_803AC2CC:
{
}

loc_803AC2D0:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(0))) {
        goto loc_803AC2F0;
    }
}

loc_803AC2D4:
{
    r3 = (r1 + 8);
    r4 = r23;
    r5 = (r25 + r31);
    r6 = r20;
    r7 = (r21 & 65535);
    ctx->lr = 0x803AC2ECu;
    if constexpr (KnownRegArgsCpuCall<0x803AB78Cu>(&func_803AB78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB78C_52C9 = func_803AB78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB78C_52C9);
        r4 = static_cast<uint32_t>(regargs_result_803AB78C_52C9 >> 32);
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
    r5 = r3;
}

loc_803AC2F0:
{
}

loc_803AC2F4:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(0))) {
        goto loc_803AC31C;
    }
}

loc_803AC2F8:
{
    r3 = (r1 + 8);
    r3 = (r3 + r5);
    r4 = r23;
    r0 = (r5 + r24);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r25 + r0);
    r6 = r19;
    r7 = (r21 & 65535);
    ctx->lr = 0x803AC31Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AB870u>(&func_803AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB870_58D7 = func_803AB870_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB870_58D7);
        r4 = static_cast<uint32_t>(regargs_result_803AB870_58D7 >> 32);
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
        InvokeDirectCpu<0x803AB870u>(ctx);
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

loc_803AC31C:
{
    r31 = (r31 + 12);
    r24 = (r24 + 3);
    r18 = (r18 + 1);
}

loc_803AC328:
{
    r22 = (r22 + 2);
}

loc_803AC32C:
{
    r6 = MemoryInline::FlatRead8(r22);
}

loc_803AC334:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803ABFBC;
    }
}

loc_803AC338:
{
    r25 = (r25 + 64);
    r14 = (r14 + 1);
    r16 = (r16 + 8);
}

loc_803AC348:
{
    if ((static_cast<int32_t>(r14) < static_cast<int32_t>(3))) {
        goto loc_803ABF74;
    }
}

loc_803AC34C:
{
    r26 = 0;
    r31 = 0;
    r3 = 0x806C0000u;
    r24 = (r3 + 31768);
    r18 = 22;
    r21 = 32;
    r22 = 0x80000000u;
    r3 = 0x80600000u;
    r23 = (r3 + -32128);
    r16 = 0;
}

loc_803AC374:
{
    r3 = MemoryInline::FlatRead32((r13 + -16888));
    r3_addr_6 = (r3 + r31);
    r27 = MemoryInline::FlatRead32(r3_addr_6);
}

loc_803AC380:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803AC610;
    }
}

loc_803AC384:
{
    r28 = 0;
    r14 = 0;
    r25 = 0;
    goto loc_803AC5F8;
}

loc_803AC394:
{
}

loc_803AC398:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(4))) {
        goto loc_803AC604;
    }
}

loc_803AC39C:
{
    r0 = 0;
    r5 = 0;
    r3 = 0;
    r4 = (r15 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 26627));
}

loc_803AC3B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803AC50C;
    }
}

loc_803AC3B8:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r3 = r4;
}

loc_803AC3C4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(5))) {
        goto loc_803AC3CC;
    }
}

loc_803AC3C8:
{
    r3 = 5;
}

loc_803AC3CC:
{
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_11 & -4);
    r4 = (r4 - r3);
    r4 = (r23 + r4);
    r20 = MemoryInline::FlatRead8((r4 + 1));
    r19 = MemoryInline::FlatRead8((r4 + 2));
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_803AC3E8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803AC484;
    }
}

loc_803AC3EC:
{
    r7 = (r20 + -8);
}

loc_803AC3F4:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(8))) {
        goto loc_803AC45C;
    }
}

loc_803AC3F8:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803AC410;
    }
}

loc_803AC400:
{
    r6 = (r22 + -2);
}

loc_803AC408:
{
    if ((static_cast<int32_t>(r20) > static_cast<int32_t>(r6))) {
        goto loc_803AC410;
    }
}

loc_803AC40C:
{
    r8 = 1;
}

loc_803AC410:
{
}

loc_803AC414:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803AC45C;
    }
}

loc_803AC418:
{
    r8 = (r1 + 8);
    r6 = (r7 + 7);
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_11 & 536870911);
    ctr = r6;
}

loc_803AC42C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_803AC45C;
    }
}

loc_803AC430:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r8, static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r8 + 1), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r8 + 2), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r8 + 3), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r8 + 4), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r8 + 5), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r8 + 6), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r8 + 7), static_cast<uint8_t>(r21));
    r8 = (r8 + 8);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC430;
    }
}

loc_803AC45C:
{
    r7 = (r1 + 8);
    r7 = (r7 + r4);
    r6 = (r20 - r4);
    ctr = r6;
}

loc_803AC470:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r20))) {
        goto loc_803AC484;
    }
}

loc_803AC474:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r21));
    r7 = (r7 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC474;
    }
}

loc_803AC484:
{
    r9 = (r1 + 8);
    r9 = (r9 + r4);
    r6 = (r20 + r19);
    r8 = (r6 - r4);
}

loc_803AC498:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_803AC4F4;
    }
}

loc_803AC49C:
{
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r7 = (r7_rot_10 & 536870911);
}

loc_803AC4A4:
{
    r6 = r8;
    ctr = r7;
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(0))) {
        goto loc_803AC4E0;
    }
}

loc_803AC4B0:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, r9, static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r9 + 1), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r9 + 2), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r9 + 3), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r9 + 4), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r9 + 5), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r9 + 6), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r9 + 7), static_cast<uint8_t>(r18));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC4B0;
    }
}

loc_803AC4D8:
{
    r8 = (r8 & 7);
}

loc_803AC4DC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803AC4F0;
    }
}

loc_803AC4E0:
{
    ctr = r8;
}

loc_803AC4E4:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r18));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AC4E4;
    }
}

loc_803AC4F0:
{
    r4 = (r4 + r6);
}

loc_803AC4F4:
{
}

loc_803AC4F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(12))) {
        goto loc_803AC500;
    }
}

loc_803AC4FC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r16));
}

loc_803AC500:
{
    r4 = MemoryInline::FlatRead8(r27);
    r4 = (r15 + r4);
    MemoryInline::FlatWrite8((r4 + 26627), static_cast<uint8_t>(r16));
}

loc_803AC50C:
{
}

loc_803AC510:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803AC5F4;
    }
}

loc_803AC514:
{
}

loc_803AC518:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803AC5F4;
    }
}

loc_803AC51C:
{
}

loc_803AC520:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_803AC538;
    }
}

loc_803AC524:
{
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_13 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -16884));
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r3 + -4));
    goto loc_803AC548;
}

loc_803AC538:
{
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_14 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -16880));
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r3 + -4));
}

loc_803AC548:
{
    r30 = 0;
    goto loc_803AC55C;
}

loc_803AC550:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r30 = (r30 + r0);
    r3 = (r3 + 4);
}

loc_803AC55C:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803AC564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AC550;
    }
}

loc_803AC568:
{
    r0 = (r30 & 65535);
}

loc_803AC570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC5F4;
    }
}

loc_803AC574:
{
}

loc_803AC578:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_803AC58C;
    }
}

loc_803AC57C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16884));
    r3 = (r0 + r4);
    r29 = MemoryInline::FlatRead32((r3 + -4));
    goto loc_803AC598;
}

loc_803AC58C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16880));
    r3 = (r0 + r4);
    r29 = MemoryInline::FlatRead32((r3 + -4));
}

loc_803AC598:
{
}

loc_803AC59C:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(0))) {
        goto loc_803AC5BC;
    }
}

loc_803AC5A0:
{
    r3 = (r1 + 8);
    r4 = r29;
    r5 = (r24 + r14);
    r6 = r20;
    r7 = (r30 & 65535);
    ctx->lr = 0x803AC5B8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB78Cu>(&func_803AB78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB78C_7EED = func_803AB78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB78C_7EED);
        r4 = static_cast<uint32_t>(regargs_result_803AB78C_7EED >> 32);
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
    r5 = r3;
}

loc_803AC5BC:
{
}

loc_803AC5C0:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(0))) {
        goto loc_803AC5E8;
    }
}

loc_803AC5C4:
{
    r3 = (r1 + 8);
    r3 = (r3 + r5);
    r4 = r29;
    r0 = (r5 + r25);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r5 = (r24 + r0);
    r6 = r19;
    r7 = (r30 & 65535);
    ctx->lr = 0x803AC5E8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB870u>(&func_803AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB870_84FD = func_803AB870_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB870_84FD);
        r4 = static_cast<uint32_t>(regargs_result_803AB870_84FD >> 32);
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
        InvokeDirectCpu<0x803AB870u>(ctx);
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

loc_803AC5E8:
{
    r14 = (r14 + 12);
    r25 = (r25 + 3);
    r28 = (r28 + 1);
}

loc_803AC5F4:
{
    r27 = (r27 + 2);
}

loc_803AC5F8:
{
    r4 = MemoryInline::FlatRead8(r27);
}

loc_803AC600:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AC394;
    }
}

loc_803AC604:
{
}

loc_803AC608:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_803AC610;
    }
}

loc_803AC60C:
{
    r24 = (r24 + 64);
}

loc_803AC610:
{
    r31 = (r31 + 4);
    r15 = (r15 + 8);
    r26 = (r26 + 1);
}

loc_803AC620:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(41))) {
        goto loc_803AC374;
    }
}

loc_803AC624:
{
    r18 = 0;
    r3 = 0x806C0000u;
    r15 = (r3 + 31576);
    r16 = 16;
    r3 = 0x806C0000u;
    r14 = (r3 + 31192);
}

loc_803AC63C:
{
    r19 = 0;
    r20 = 0;
    r17 = r15;
}

loc_803AC648:
{
    r0 = MemoryInline::FlatRead16(r17);
}

loc_803AC650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC66C;
    }
}

loc_803AC654:
{
    r0 = (r19 + r16);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r14 + r0);
    r4 = r17;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r19 = (r19 + 1);
}

loc_803AC66C:
{
    r17 = (r17 + 4);
    r20 = (r20 + 1);
}

loc_803AC678:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(12))) {
        goto loc_803AC648;
    }
}

loc_803AC67C:
{
    r15 = (r15 + 64);
    r16 = (r16 + 16);
    r18 = (r18 + 1);
}

loc_803AC68C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(2))) {
        goto loc_803AC63C;
    }
}

loc_803AC690:
{
    r18 = 0;
    r3 = 0x806C0000u;
    r15 = (r3 + 31768);
    r16 = 16;
    r3 = 0x806C0000u;
    r14 = (r3 + 31384);
}

loc_803AC6A8:
{
    r19 = 0;
    r20 = 0;
    r17 = r15;
}

loc_803AC6B4:
{
    r0 = MemoryInline::FlatRead16(r17);
}

loc_803AC6BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AC6D8;
    }
}

loc_803AC6C0:
{
    r0 = (r19 + r16);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (r14 + r0);
    r4 = r17;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r19 = (r19 + 1);
}

loc_803AC6D8:
{
    r17 = (r17 + 4);
    r20 = (r20 + 1);
}

loc_803AC6E4:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(12))) {
        goto loc_803AC6B4;
    }
}

loc_803AC6E8:
{
    r15 = (r15 + 64);
    r16 = (r16 + 12);
    r18 = (r18 + 1);
}

loc_803AC6F8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(2))) {
        goto loc_803AC6A8;
    }
}

loc_803AC6FC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803ABEA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803ABEA8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803ABEA8 func_803ABEA8 preserves=true fpr_mask=0x00000000
