#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050778(CpuContext* ctx);
extern "C" uint64_t func_80050778_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A8364(CpuContext* ctx);
extern "C" uint64_t func_800A8364_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80295F58(CpuContext* ctx);
extern "C" uint64_t func_80295F58_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80296414(CpuContext* ctx);
extern "C" uint32_t func_80296414_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80296460(CpuContext* ctx);
extern "C" uint32_t func_80296460_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802971A0(CpuContext* ctx);
extern "C" uint64_t func_802971A0_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802974F4(CpuContext* ctx);
extern "C" uint64_t func_802974F4_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802959FC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
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
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_10 = 0;
    uint32_t r22_addr_11 = 0;
    uint32_t r22_addr_12 = 0;
    uint32_t r22_addr_13 = 0;
    uint32_t r22_addr_14 = 0;
    uint32_t r22_addr_15 = 0;
    uint32_t r22_addr_16 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r22_addr_5 = 0;
    uint32_t r22_addr_6 = 0;
    uint32_t r22_addr_7 = 0;
    uint32_t r22_addr_8 = 0;
    uint32_t r22_addr_9 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_802959FC;

loc_802959FC:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r11 = (r1 + 272);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r17 = r3;
    r15 = r4;
    r23 = r5;
    r16 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    r28 = MemoryInline::FlatRead32((r1 + 280));
    r29 = MemoryInline::FlatRead8((r1 + 287));
    r3 = (r1 + 148);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 136);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r25 & 255);
}

loc_80295A50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80295A5C;
    }
}

loc_80295A54:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r25 = r3;
}

loc_80295A5C:
{
    r0 = (r25 & 255);
    r4 = (r0 * 136);
    r3 = 0x806B0000u;
    r0 = (r3 + -6904);
    r30 = (r0 + r4);
    r3 = (r1 + 124);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 112);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 100);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 88);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    r4 = r15;
    r5 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 100);
    r4 = (r1 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 100);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14172));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80295ABC:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_80295ACC;
    }
}

loc_80295AC0:
{
    r3 = (r1 + 100);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_80295ACC:
{
    r3 = (r1 + 124);
    r4 = r15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 112);
    r4 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 136);
    r4 = (r1 + 124);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r1 + 148);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 0x806B0000u;
    r4 = (r3 + -6984);
    r3 = 0x806B0000u;
    r5 = (r3 + -7960);
    r3 = 0x806B0000u;
    r3 = (r3 + -6944);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f0.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r5, static_cast<uint8_t>(r0));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r4 + 12), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r4 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r4 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r4 + 24), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r4 + 28), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r4 + 32), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r5 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r4 + 36), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r5 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::FlatWrite8((r13 + -17095), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -17096), static_cast<uint8_t>(r0));
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    ctx->lr = 0x80295BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A8364u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    ctx->lr = 0x80295BB0u;
    if constexpr (KnownRegArgsCpuCall<0x80050778u>(&func_80050778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050778_2F47 = func_80050778_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80050778_2F47);
        r4 = static_cast<uint32_t>(regargs_result_80050778_2F47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r1 + 64);
    r4 = (r1 + 124);
    r5 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 100);
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 40);
    r4 = (r1 + 100);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14176));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 112);
    r5 = (r1 + 40);
    ctx->lr = 0x80295BECu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_3806 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_3806);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_3806 >> 32);
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
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 88);
    r4 = (r1 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = (r16 & 255);
    r0 = (r0 & 1);
}

loc_80295C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80295D3C;
    }
}

loc_80295C08:
{
    r0 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    r8 = r30;
    r9 = (r1 + 36);
    r10 = (r1 + 32);
    ctx->lr = 0x80295C34u;
    if constexpr (KnownRegArgsCpuCall<0x802971A0u>(&func_802971A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802971A0_3EFF = func_802971A0_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802971A0_3EFF);
        r4 = static_cast<uint32_t>(regargs_result_802971A0_3EFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802971A0u>(ctx);
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
        cr = ctx->cr;
    }
    r17 = 0;
    r22 = (r1 + 160);
    goto loc_80295D30;
}

loc_80295C40:
{
    r18 = 0;
    goto loc_80295D20;
}

loc_80295C48:
{
    r19 = 0;
    goto loc_80295D10;
}

loc_80295C50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r20 = (r0 + r17);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r21 = (r0 + r18);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r15 = (r0 + r19);
    r3 = r20;
    r4 = r21;
    r5 = r15;
    r6 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80296460u>(&func_80296460)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80296460_469F = func_80296460_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80296460_469F;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296460u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80295C80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80295D0C;
    }
}

loc_80295C84:
{
    r3 = r20;
    r4 = r21;
    r5 = r15;
    r6 = r30;
    // inline leaf 0x80296A34 (10 guest instruction(s))
    r8 = MemoryInline::FlatRead32((r6 + 60));
    r7 = MemoryInline::FlatRead32((r6 + 48));
    r0 = MemoryInline::FlatRead32((r6 + 52));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r8_addr_4 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_4);
    // end of inlined leaf 0x80296A34
    r21 = r3;
    goto loc_80295CFC;
}

loc_80295CA0:
{
    r3 = r20;
    r4 = (r1 + 160);
    r5 = r31;
    r6 = r24;
    r7 = (r26 & 65535);
    r8 = 0;
    r9 = (r25 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x802962C4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80295CC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80295CF8;
    }
}

loc_80295CC8:
{
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    r5 = r20;
    r6 = 1;
    ctx->lr = 0x80295CDCu;
    if constexpr (KnownRegArgsCpuCall<0x80295F58u>(&func_80295F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80295F58_4F1A = func_80295F58_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295F58_4F1A);
        r4 = static_cast<uint32_t>(regargs_result_80295F58_4F1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80295F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = r31;
    r31 = (r31 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r22_addr_5 = (r22 + r0);
    MemoryInline::FlatWrite32(r22_addr_5, r20);
}

loc_80295CF0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(10))) {
        goto loc_80295CF8;
    }
}

loc_80295CF4:
{
    r31 = 0;
}

loc_80295CF8:
{
    r21 = (r21 + 4);
}

loc_80295CFC:
{
    r20 = MemoryInline::FlatRead32(r21);
    r0 = (r20 + 65536);
}

loc_80295D08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80295CA0;
    }
}

loc_80295D0C:
{
    r19 = (r19 + 1);
}

loc_80295D10:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80295D18:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80295C50;
    }
}

loc_80295D1C:
{
    r18 = (r18 + 1);
}

loc_80295D20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80295D28:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80295C48;
    }
}

loc_80295D2C:
{
    r17 = (r17 + 1);
}

loc_80295D30:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80295D38:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r0))) {
        goto loc_80295C40;
    }
}

loc_80295D3C:
{
    r0 = (r16 & 255);
    r0 = (r0 & 2);
}

loc_80295D48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80295E80;
    }
}

loc_80295D4C:
{
    r0 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    r8 = r30;
    r9 = (r1 + 36);
    r10 = (r1 + 32);
    ctx->lr = 0x80295D78u;
    if constexpr (KnownRegArgsCpuCall<0x802974F4u>(&func_802974F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802974F4_5CDF = func_802974F4_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802974F4_5CDF);
        r4 = static_cast<uint32_t>(regargs_result_802974F4_5CDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802974F4u>(ctx);
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
        cr = ctx->cr;
    }
    r19 = 0;
    r22 = (r1 + 160);
    goto loc_80295E74;
}

loc_80295D84:
{
    r18 = 0;
    goto loc_80295E64;
}

loc_80295D8C:
{
    r17 = 0;
    goto loc_80295E54;
}

loc_80295D94:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r16 = (r0 + r19);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r20 = (r0 + r18);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r21 = (r0 + r17);
    r3 = r16;
    r4 = r20;
    r5 = r21;
    r6 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80296414u>(&func_80296414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80296414_647F = func_80296414_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80296414_647F;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296414u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80295DC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80295E50;
    }
}

loc_80295DC8:
{
    r3 = r16;
    r4 = r20;
    r5 = r21;
    r6 = r30;
    // inline leaf 0x80296A0C (10 guest instruction(s))
    r8 = MemoryInline::FlatRead32((r6 + 120));
    r7 = MemoryInline::FlatRead32((r6 + 108));
    r0 = MemoryInline::FlatRead32((r6 + 112));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r8_addr_10 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_10);
    // end of inlined leaf 0x80296A0C
    r21 = r3;
    goto loc_80295E40;
}

loc_80295DE4:
{
    r3 = r20;
    r4 = (r1 + 160);
    r5 = r31;
    r6 = r24;
    r7 = (r26 & 65535);
    r8 = 0;
    r9 = (r25 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x802962C4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80295E08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80295E3C;
    }
}

loc_80295E0C:
{
    r3 = (r1 + 124);
    r4 = (r1 + 112);
    r5 = r20;
    r6 = 2;
    ctx->lr = 0x80295E20u;
    if constexpr (KnownRegArgsCpuCall<0x80295F58u>(&func_80295F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80295F58_6D01 = func_80295F58_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295F58_6D01);
        r4 = static_cast<uint32_t>(regargs_result_80295F58_6D01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80295F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = r31;
    r31 = (r31 + 1);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r22_addr_13 = (r22 + r0);
    MemoryInline::FlatWrite32(r22_addr_13, r20);
}

loc_80295E34:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(10))) {
        goto loc_80295E3C;
    }
}

loc_80295E38:
{
    r31 = 0;
}

loc_80295E3C:
{
    r21 = (r21 + 4);
}

loc_80295E40:
{
    r20 = MemoryInline::FlatRead32(r21);
    r0 = (r20 + 65536);
}

loc_80295E4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80295DE4;
    }
}

loc_80295E50:
{
    r17 = (r17 + 1);
}

loc_80295E54:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80295E5C:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r0))) {
        goto loc_80295D94;
    }
}

loc_80295E60:
{
    r18 = (r18 + 1);
}

loc_80295E64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80295E6C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80295D8C;
    }
}

loc_80295E70:
{
    r19 = (r19 + 1);
}

loc_80295E74:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80295E7C:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80295D84;
    }
}

loc_80295E80:
{
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80295E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80295F38;
    }
}

loc_80295E90:
{
}

loc_80295E94:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r0))) {
        goto loc_80295E9C;
    }
}

loc_80295E98:
{
    r29 = r3;
}

loc_80295E9C:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4864);
    r0 = (r29 & 255);
    ctr = r0;
}

loc_80295EB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80295F14;
    }
}

loc_80295EB4:
{
}

loc_80295EB8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80295F0C;
    }
}

loc_80295EBC:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r28 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 & 15);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r28 = (r28 + 20);
}

loc_80295F0C:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80295EB4;
    }
}

loc_80295F14:
{
    r3 = r23;
    r4 = 0x806B0000u;
    r4 = (r4 + -7224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80295F28:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80295F38;
    }
}

loc_80295F2C:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -6944));
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
}

loc_80295F38:
{
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r11 = (r1 + 272);
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802959FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802959FC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802959FC func_802959FC preserves=true fpr_mask=0x00000000
