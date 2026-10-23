#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B8D8(CpuContext* ctx);
extern "C" uint64_t func_8005B8D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005C5B4(CpuContext* ctx);
extern "C" uint64_t func_8005C5B4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005C848(CpuContext* ctx);
extern "C" uint64_t func_8005C848_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8098C580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8098C580;

loc_8098C580:
{
    MemoryAlias::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 404), r0);
    r11 = (r1 + 400);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r0 = 1127219200;
    MemoryAlias::FlatWriteRam32((r1 + 304), r0);
    r0 = 1127219200;
    MemoryAlias::FlatWriteRam32((r1 + 312), r0);
    r25 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r25 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 1));
}

loc_8098C5B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_8098CD24;
    }
}

loc_8098C5B8:
{
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = MemoryAlias::FlatRead32((r25 + 13672));
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 320), f0.d);
    r21 = fctiwzword0;
    ctx->lr = 0x8098C5F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80984A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809A0000u;
    r24 = (r3 + -4016);
    r3 = 16;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_1C52 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_1C52);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_1C52 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r23 = 0;
    r3 = 0x809A0000u;
    r26 = (r3 + -1296);
    r29 = r24;
    r16 = -346095616;
    r27 = 0x809A0000u;
    r3 = 0x809A0000u;
    r28 = (r3 + -1192);
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
    r3 = 0x809B0000u;
    r30 = (r3 + -1056);
    r17 = -421396480;
    r18 = 13;
}

loc_8098C63C:
{
}

loc_8098C640:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8098C678;
    }
}

loc_8098C644:
{
    r0 = MemoryAlias::FlatRead8(r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r26_addr_2 = (r26 + r0);
    r4 = MemoryAlias::FlatRead32(r26_addr_2);
    r0 = MemoryAlias::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r4 + r0);
    r3 = r24;
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80984E10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8098C7F4;
}

loc_8098C678:
{
    r4 = MemoryAlias::FlatRead32((r25 + 13672));
    r3 = MemoryAlias::FlatRead32((r4 + 4356));
    r0 = (r23 + r4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead8((r3 + 4367));
}

loc_8098C690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(255))) {
        goto loc_8098C804;
    }
}

loc_8098C694:
{
    r4 = (r27 + -968);
    r22 = 0;
    ctr = r18;
}

loc_8098C6A0:
{
    r0 = MemoryAlias::FlatRead8((r4 + 4));
}

loc_8098C6A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8098C6D8;
    }
}

loc_8098C6AC:
{
    r22 = (r22 + 1);
    r0 = MemoryAlias::FlatRead8((r4 + 10));
}

loc_8098C6B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8098C6D8;
    }
}

loc_8098C6BC:
{
    r22 = (r22 + 1);
    r0 = MemoryAlias::FlatRead8((r4 + 16));
}

loc_8098C6C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8098C6D8;
    }
}

loc_8098C6CC:
{
    r4 = (r4 + 18);
    r22 = (r22 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8098C6A0;
    }
}

loc_8098C6D8:
{
    r0 = MemoryAlias::FlatRead8(r24);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r28_addr_2 = (r28 + r0);
    r4 = MemoryAlias::FlatRead32(r28_addr_2);
    r0 = MemoryAlias::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4 = (r4 + r0);
    r3 = r24;
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryAlias::FlatRead16((r24 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r21 + r0);
    r0 = (r3 + 7);
    r20 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryAlias::FlatRead16((r24 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 6);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r1 + 144);
    r0 = MemoryAlias::FlatRead8((r31 + 9));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r30_addr_2 = (r30 + r0);
    r4 = MemoryAlias::FlatRead32(r30_addr_2);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryAlias::FlatRead32(r4_addr_2);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_3541 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3541;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r4 = (r23 + -1);
    r3 = MemoryAlias::FlatRead32((r25 + 13672));
    r0 = MemoryAlias::FlatRead32((r3 + 4360));
}

loc_8098C750:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8098C7D4;
    }
}

loc_8098C754:
{
    r3 = (r1 + 80);
    r4 = (r29 + 280);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_4 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_4, 0u, r4);
    MemoryAlias::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_4, 1u, (r4 + 1));
    MemoryAlias::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_4, 2u, (r4 + 2));
    MemoryAlias::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_4, 3u, (r4 + 3));
    MemoryAlias::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryAlias::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_4, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_4, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_4, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_4, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_4, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryAlias::FlatRead16((r24 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 90), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r24 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 80));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r28_addr_3 = (r28 + r0);
    r4 = MemoryAlias::FlatRead32(r28_addr_3);
    r0 = MemoryAlias::FlatRead16((r1 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 80);
    r5 = MemoryAlias::FlatRead32((r1 + 84));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C7A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl3_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl3_cont_8005B7EC;
}

loc_inl3_return:
{
}

loc_inl3_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r0 = (r20 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r19 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C848_4B83 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_4B83);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_4B83 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 144);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098C7C8u;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_4FA1 = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_4FA1);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_4FA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r16 + 6655);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl4_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl4_cont_8005B7EC;
}

loc_inl4_return:
{
}

loc_inl4_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_8098C7DC;
}

loc_8098C7D4:
{
    r3 = (r17 + -15361);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl5_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl5_cont_8005B7EC;
}

loc_inl5_return:
{
}

loc_inl5_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
}

loc_8098C7DC:
{
    r3 = r20;
    r4 = r19;
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C848_5B25 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_5B25);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_5B25 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 144);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098C7F4u;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_5F43 = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_5F43);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_5F43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8098C7F4:
{
    r23 = (r23 + 1);
    r24 = (r24 + 20);
}

loc_8098C800:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(11))) {
        goto loc_8098C63C;
    }
}

loc_8098C804:
{
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead32((r3 + 4356));
}

loc_8098C814:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8098C858;
    }
}

loc_8098C818:
{
    r3 = 0x809A0000u;
    r24 = (r3 + -3696);
    r0 = MemoryAlias::FlatRead8((r3 + -3696));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1192);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryAlias::FlatRead32(r3_addr_1);
    r0 = MemoryAlias::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r4 = (r4 + r0);
    r3 = r24;
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C858u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8098C858:
{
    r3 = 0x809D0000u;
    r5 = MemoryAlias::FlatRead32((r3 + 13672));
    r3 = MemoryAlias::FlatRead32((r5 + 4356));
    r4 = (r3 + 9);
    r3 = MemoryAlias::FlatRead32((r5 + 4364));
    r0 = (r3 + -1);
}

loc_8098C874:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8098C8B8;
    }
}

loc_8098C878:
{
    r3 = 0x809A0000u;
    r24 = (r3 + -3656);
    r0 = MemoryAlias::FlatRead8((r3 + -3656));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1192);
    r3_addr_3 = (r3 + r0);
    r4 = MemoryAlias::FlatRead32(r3_addr_3);
    r0 = MemoryAlias::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r4 = (r4 + r0);
    r3 = r24;
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8098C8B8:
{
    r3 = 0x809D0000u;
    r4 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead32((r4 + 4356));
    r3 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32((r4 + 4360));
    r3 = (r3 + r0);
    r4 = MemoryAlias::FlatRead8((r3 + 4368));
}

loc_8098C8D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(255))) {
        goto loc_8098CD24;
    }
}

loc_8098C8DC:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -968);
    r25 = 0;
    r0 = 13;
    ctr = r0;
}

loc_8098C8F0:
{
    r0 = MemoryAlias::FlatRead8((r3 + 4));
}

loc_8098C8F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8098C928;
    }
}

loc_8098C8FC:
{
    r25 = (r25 + 1);
    r0 = MemoryAlias::FlatRead8((r3 + 10));
}

loc_8098C908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8098C928;
    }
}

loc_8098C90C:
{
    r25 = (r25 + 1);
    r0 = MemoryAlias::FlatRead8((r3 + 16));
}

loc_8098C918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8098C928;
    }
}

loc_8098C91C:
{
    r3 = (r3 + 18);
    r25 = (r25 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8098C8F0;
    }
}

loc_8098C928:
{
    r3 = (r1 + 80);
    r4 = 0x809A0000u;
    r19 = (r4 + -4016);
    r4 = (r19 + 260);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r4);
    guest_range_2 = MemoryAlias::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryAlias::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryAlias::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    MemoryAlias::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    MemoryAlias::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryAlias::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r5 = MemoryAlias::FlatRead8((r1 + 80));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r3 = 0x809A0000u;
    r18 = (r3 + -1192);
    r18_addr_1 = (r18 + r0);
    r4 = MemoryAlias::FlatRead32(r18_addr_1);
    r0 = MemoryAlias::FlatRead16((r1 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r4 = (r4 + r0);
    r0 = (r5 + r25);
    r0 = (r0 & 255);
    MemoryAlias::FlatWriteRam8((r1 + 80), static_cast<uint8_t>(r0));
    r3 = (r1 + 80);
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r19 + 300);
    r0 = MemoryAlias::FlatRead8(r3);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r18_addr_2 = (r18 + r0);
    r4 = MemoryAlias::FlatRead32(r18_addr_2);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r4 = (r4 + r0);
    r5 = MemoryAlias::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = 0;
    ctx->lr = 0x8098C9B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809851B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 144);
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryAlias::FlatRead8((r4 + 9));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r4 = 0x809B0000u;
    r4 = (r4 + -1032);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryAlias::FlatRead32(r4_addr_5);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r4_addr_6 = (r4 + r0);
    r4 = MemoryAlias::FlatRead32(r4_addr_6);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_9303 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_9303;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 1328087040;
    r3 = (r3 + 8959);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl7_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl7_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl7_cont_8005B7EC;
}

loc_inl7_return:
{
}

loc_inl7_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r0 = (r21 + 347);
    r16 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r17 = 312;
    r20 = (r1 + 144);
    r18 = 0;
}

loc_8098C9FC:
{
    r3 = r16;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r17)));
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C848_99B8 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_99B8);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_99B8 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r20;
    r4 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8098CD58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r19 = r3;
}

loc_8098CA1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8098CA3C;
    }
}

loc_8098CA20:
{
    MemoryAlias::FlatWrite8(r3, static_cast<uint8_t>(r18));
    r3 = r20;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CA30u;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_9FBB = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_9FBB);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_9FBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r20 = (r19 + 1);
    r17 = (r17 + 18);
    goto loc_8098C9FC;
}

loc_8098CA3C:
{
    r3 = r20;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CA48u;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_A84B = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_A84B);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_A84B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r29 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r29 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 2));
}

loc_8098CA58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098CD24;
    }
}

loc_8098CA5C:
{
    r0 = 235;
    MemoryAlias::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = 95;
    MemoryAlias::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = 25;
    MemoryAlias::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r30 = 255;
    MemoryAlias::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r30));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14764));
    MemoryAlias::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14768));
    MemoryAlias::FlatWriteRamFloat32((r1 + 44), f0.d);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r0 = (r3 + 260);
    r31 = 0x80990000u;
    f1.d = MemoryAlias::FlatReadFloat64((r31 + 14696));
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 308), r0);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 304));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 68), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14772));
    MemoryAlias::FlatWriteRamFloat32((r1 + 72), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14644));
    MemoryAlias::FlatWriteRamFloat32((r1 + 76), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14776));
    MemoryAlias::FlatWriteRamFloat32((r1 + 48), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14780));
    MemoryAlias::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = 36;
    MemoryAlias::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r0 = 35;
    MemoryAlias::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    r0 = 31;
    MemoryAlias::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    r0 = 180;
    MemoryAlias::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead32((r1 + 32));
    MemoryAlias::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 68);
    r4 = (r1 + 48);
    r5 = (r1 + 24);
    ctx->lr = 0x8098CB20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryAlias::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r30));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14672));
    MemoryAlias::FlatWriteRamFloat32((r1 + 48), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14784));
    MemoryAlias::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r0 = (r3 + 270);
    f1.d = MemoryAlias::FlatReadFloat64((r31 + 14696));
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 316), r0);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 312));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 68), f0.d);
    r0 = 214;
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 308), r0);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 304));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 72), f0.d);
    r3 = MemoryAlias::FlatRead32((r29 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4412));
}

loc_8098CB80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098CBD0;
    }
}

loc_8098CB84:
{
    r3 = (r1 + 56);
    r4 = (r1 + 68);
    // inline leaf 0x8098CD3C (7 guest instruction(s))
    f0.d = MemoryAlias::FlatReadFloat32(r4);
    MemoryAlias::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x8098CD3C
    f1.d = MemoryAlias::FlatReadFloat32((r1 + 56));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14788));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 56), f0.d);
    f1.d = MemoryAlias::FlatReadFloat32((r1 + 60));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14792));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 60), f0.d);
    r0 = MemoryAlias::FlatRead32((r1 + 28));
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    r5 = (r1 + 20);
    ctx->lr = 0x8098CBD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8098CBD0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 32));
    MemoryAlias::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 68);
    r4 = (r1 + 48);
    r5 = (r1 + 16);
    ctx->lr = 0x8098CBE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 242;
    r3 = 0x80990000u;
    f1.d = MemoryAlias::FlatReadFloat64((r3 + 14696));
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 316), r0);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 312));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 72), f0.d);
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4412));
}

loc_8098CC18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098CC68;
    }
}

loc_8098CC1C:
{
    r3 = (r1 + 56);
    r4 = (r1 + 68);
    // inline leaf 0x8098CD3C (7 guest instruction(s))
    f0.d = MemoryAlias::FlatReadFloat32(r4);
    MemoryAlias::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x8098CD3C
    f1.d = MemoryAlias::FlatReadFloat32((r1 + 56));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14788));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 56), f0.d);
    f1.d = MemoryAlias::FlatReadFloat32((r1 + 60));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14792));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryAlias::FlatWriteRamFloat32((r1 + 60), f0.d);
    r0 = MemoryAlias::FlatRead32((r1 + 28));
    MemoryAlias::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    r5 = (r1 + 12);
    ctx->lr = 0x8098CC68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8098CC68:
{
    r0 = MemoryAlias::FlatRead32((r1 + 32));
    MemoryAlias::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 68);
    r4 = (r1 + 48);
    r5 = (r1 + 8);
    ctx->lr = 0x8098CC80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31152);
    r3_addr_5 = (r3 + r0);
    r16 = MemoryAlias::FlatRead32(r3_addr_5);
    r3 = -1061093376;
    r3 = (r3 + -16129);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl10_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl10_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl10_cont_8005B7EC;
}

loc_inl10_return:
{
}

loc_inl10_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = 20;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_DC8B = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_DC8B);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_DC8B >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryAlias::FlatRead32(r16);
    ctx->lr = 0x8098CCBCu;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_DFDF = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_DFDF);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_DFDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r3 = (640 - r0);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r21 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = 216;
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C848_E523 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_E523);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_E523 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryAlias::FlatRead32(r16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CCECu;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_E954 = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_E954);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_E954 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = MemoryAlias::FlatRead32((r16 + 4));
    ctx->lr = 0x8098CCF4u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_F0CB = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_F0CB);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_F0CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r3 = (640 - r0);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r21 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = 244;
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C848_F60F = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_F60F);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_F60F >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryAlias::FlatRead32((r16 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CD24u;
    if constexpr (KnownRegArgsCpuCall<0x8005C5B4u>(&func_8005C5B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005C5B4_FA46 = func_8005C5B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C5B4_FA46);
        r4 = static_cast<uint32_t>(regargs_result_8005C5B4_FA46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005C5B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8098CD24:
{
    r11 = (r1 + 400);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_3 = MemoryAlias::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryAlias::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098C580 func_8098C580 preserves=true fpr_mask=0x00000000
