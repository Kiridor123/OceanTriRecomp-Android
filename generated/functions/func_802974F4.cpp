#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80090060(CpuContext* ctx);
extern "C" uint64_t func_80090060_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800B0BF4(CpuContext* ctx);
extern "C" uint64_t func_800B0BF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802974F4_ra38_4_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_802974F4;

loc_802974F4:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r20 = r3;
    r19 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    r29 = MemoryInline::FlatRead32((r1 + 184));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r26 + 68));
}

loc_80297554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80297658;
    }
}

loc_80297558:
{
    f1.d = MemoryInline::FlatReadFloat32(r20);
    ctx->lr = 0x80297560u;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_E56 = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_E56);
        r4 = static_cast<uint32_t>(regargs_result_80090060_E56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r22 = fctiwzword0;
    f1.d = MemoryInline::FlatReadFloat32((r20 + 4));
    ctx->lr = 0x80297574u;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_1407 = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_1407);
        r4 = static_cast<uint32_t>(regargs_result_80090060_1407 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    r21 = fctiwzword1;
    f1.d = MemoryInline::FlatReadFloat32((r20 + 8));
    ctx->lr = 0x80297588u;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_19BB = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_19BB);
        r4 = static_cast<uint32_t>(regargs_result_80090060_19BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r20 = fctiwzword2;
    f1.d = MemoryInline::FlatReadFloat32(r19);
    ctx->lr = 0x8029759Cu;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_1F69 = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_1F69);
        r4 = static_cast<uint32_t>(regargs_result_80090060_1F69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r31 = fctiwzword3;
    f1.d = MemoryInline::FlatReadFloat32((r19 + 4));
    ctx->lr = 0x802975B0u;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_251D = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_251D);
        r4 = static_cast<uint32_t>(regargs_result_80090060_251D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r30 = fctiwzword4;
    f1.d = MemoryInline::FlatReadFloat32((r19 + 8));
    ctx->lr = 0x802975C4u;
    if constexpr (KnownRegArgsCpuCall<0x80090060u>(&func_80090060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80090060_2AD1 = func_80090060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80090060_2AD1);
        r4 = static_cast<uint32_t>(regargs_result_80090060_2AD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80090060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword5;
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 72), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r26 + 72));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword6;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r26 + 76));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword7;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r26 + 80));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword8;
    r22 = (r22 - r0);
    r21 = (r21 - r4);
    r20 = (r20 - r5);
    r31 = (r31 - r0);
    r30 = (r30 - r4);
    r3 = (r3 - r5);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r26 + 96));
    r0 = PPC_Divw(static_cast<int32_t>(r22), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32(r27, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r26 + 100));
    r0 = PPC_Divw(static_cast<int32_t>(r21), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32(r28, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r26 + 104));
    r0 = PPC_Divw(static_cast<int32_t>(r20), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r26 + 96));
    r4 = PPC_Divw(static_cast<int32_t>(r31), static_cast<int32_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r26 + 100));
    r5 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r26 + 104));
    r6 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    goto loc_80297770;
}

loc_80297658:
{
    r3 = (r1 + 20);
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r26 + 72);
    ctx->lr = 0x8029767Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_3883 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_3883);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_3883 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 8);
    r4 = (r26 + 72);
    ctx->lr = 0x80297688u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_3CC0 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_3CC0);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_3CC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r26 + 96));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14128));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword9;
    MemoryInline::FlatWrite32(r27, r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword10;
    MemoryInline::FlatWrite32(r28, r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword11;
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r26 + 96));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword12;
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword13 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword13;
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword14 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword14;
}

loc_80297770:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = (r4 - r3);
    r0 = MemoryInline::FlatRead32(r28);
    r5 = (r5 - r0);
    r0 = MemoryInline::FlatRead32(r29);
    r6 = (r6 - r0);
}

loc_8029778C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_802977A0;
    }
}

loc_80297790:
{
    r0 = (r3 + r4);
    MemoryInline::FlatWrite32(r27, r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r4 - r0);
}

loc_802977A0:
{
}

loc_802977A4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_802977BC;
    }
}

loc_802977A8:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32(r28, r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r5 = (r5 - r0);
}

loc_802977BC:
{
}

loc_802977C0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_802977D8;
    }
}

loc_802977C4:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32(r29, r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r6 = (r6 - r0);
}

loc_802977D8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r23, r0);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32(r24, r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32(r25, r0);
    r3 = MemoryInline::FlatRead32((r26 + 116));
    r0 = MemoryInline::FlatRead32(r23);
}

loc_802977FC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80297804;
    }
}

loc_80297800:
{
    MemoryInline::FlatWrite32(r23, r3);
}

loc_80297804:
{
    r3 = MemoryInline::FlatRead32((r26 + 112));
    r0 = MemoryInline::FlatRead32(r24);
}

loc_80297810:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80297818;
    }
}

loc_80297814:
{
    MemoryInline::FlatWrite32(r24, r3);
}

loc_80297818:
{
    r3 = MemoryInline::FlatRead32((r26 + 108));
    r0 = MemoryInline::FlatRead32(r25);
}

loc_80297824:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80297830;
    }
}

loc_80297828:
{
    r0 = MemoryInline::FlatRead32((r26 + 116));
    MemoryInline::FlatWrite32(r25, r0);
}

loc_80297830:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802974F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802974F4_ra38_4_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802974F4 func_802974F4 preserves=true fpr_mask=0x00000000
