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
extern "C" void func_802924CC(CpuContext* ctx);
extern "C" uint32_t func_802924CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80294BC8(CpuContext* ctx);
extern "C" uint64_t func_80294BC8_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80296414(CpuContext* ctx);
extern "C" uint32_t func_80296414_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80296460(CpuContext* ctx);
extern "C" uint32_t func_80296460_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802971A0(CpuContext* ctx);
extern "C" uint64_t func_802971A0_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802974F4(CpuContext* ctx);
extern "C" uint64_t func_802974F4_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802940A0_ra38_1ee_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8029457C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_13 = 0;
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802940A0u);
    goto loc_802940A0;

loc_802940A0:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 336);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r25 = r3;
    r26 = r4;
    f31.d = f1.d;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r3 = (r1 + 196);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 184);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 248);
    ctx->lr = 0x802940F0u;
    if constexpr (KnownRegArgsCpuCall<0x802924CCu>(&func_802924CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802924CC_1380 = func_802924CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802924CC_1380;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802924CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r29 & 255);
}

loc_802940F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80294104;
    }
}

loc_802940FC:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r29 = r3;
}

loc_80294104:
{
    r0 = (r29 & 255);
    r4 = (r0 * 136);
    r3 = 0x806B0000u;
    r0 = (r3 + -6904);
    r31 = (r0 + r4);
    r3 = (r1 + 172);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 160);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 148);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 136);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80294140:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80294158;
    }
}

loc_80294144:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8029414C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80294158;
    }
}

loc_80294150:
{
    r3 = 0;
    goto loc_80294578;
}

loc_80294158:
{
    r3 = (r1 + 124);
    r4 = r26;
    r5 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 148);
    r4 = (r1 + 124);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 148);
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

loc_80294184:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80294194;
    }
}

loc_80294188:
{
    r3 = (r1 + 148);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_80294194:
{
    r3 = (r1 + 100);
    r4 = (r1 + 148);
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 112);
    r4 = r26;
    r5 = (r1 + 100);
    ctx->lr = 0x802941B4u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2128 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2128);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2128 >> 32);
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
    r3 = (r1 + 172);
    r4 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 76);
    r4 = (r1 + 148);
    f1.d = (-(f31.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 88);
    r4 = r25;
    r5 = (r1 + 76);
    ctx->lr = 0x802941E0u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_268D = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_268D);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_268D >> 32);
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
    r3 = (r1 + 160);
    r4 = (r1 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 196);
    r4 = (r1 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 184);
    r4 = (r1 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 0x806B0000u;
    r4 = (r3 + -6984);
    r3 = 0x806B0000u;
    r3 = (r3 + -7960);
    r24 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 208), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 208), r24);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f0.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 212), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 216), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 220), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r4 + 12), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 224), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r4 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 228), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r4 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 232), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r4 + 24), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 6), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 236), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r4 + 28), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 240), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r4 + 32), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 8), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 244), r24);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r4 + 36), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 9), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r13 + -17095), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r13 + -17096), static_cast<uint8_t>(r24));
    r3 = (r1 + 248);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 260);
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWriteRamFloat32((r1 + 272), f31.d);
    MemoryInline::FlatWriteRam16((r1 + 280), static_cast<uint16_t>(r24));
    MemoryInline::FlatWriteRam16((r1 + 282), static_cast<uint16_t>(r24));
    r3 = (r1 + 248);
    r4 = (r1 + 260);
    ctx->lr = 0x802942CCu;
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
    ctx->lr = 0x802942D0u;
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
        const auto regargs_result_80050778_3C0B = func_80050778_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80050778_3C0B);
        r4 = static_cast<uint32_t>(regargs_result_80050778_3C0B >> 32);
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
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f1.d);
    r3 = (r1 + 64);
    r4 = (r1 + 248);
    r5 = (r1 + 260);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 148);
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 40);
    r4 = (r1 + 148);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14176));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 260);
    r5 = (r1 + 40);
    ctx->lr = 0x80294310u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_44B6 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_44B6);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_44B6 >> 32);
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
    r3 = (r1 + 136);
    r4 = (r1 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = (r27 & 255);
    r0 = (r0 & 1);
}

loc_80294328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80294448;
    }
}

loc_8029432C:
{
    r0 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 172);
    r4 = (r1 + 160);
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    r8 = r31;
    r9 = (r1 + 36);
    r10 = (r1 + 32);
    ctx->lr = 0x80294358u;
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
        const auto regargs_result_802971A0_4B6D = func_802971A0_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802971A0_4B6D);
        r4 = static_cast<uint32_t>(regargs_result_802971A0_4B6D >> 32);
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
    r22 = 0;
    goto loc_8029443C;
}

loc_80294360:
{
    r23 = 0;
    goto loc_8029442C;
}

loc_80294368:
{
    r26 = 0;
    goto loc_8029441C;
}

loc_80294370:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r24 = (r0 + r22);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r25 = (r0 + r23);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r21 = (r0 + r26);
    r3 = r24;
    r4 = r25;
    r5 = r21;
    r6 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296460u>(&func_80296460)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80296460_52AA = func_80296460_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80296460_52AA;
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

loc_802943A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80294418;
    }
}

loc_802943A4:
{
    r3 = r24;
    r4 = r25;
    r5 = r21;
    r6 = r31;
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
    r24 = r3;
    goto loc_80294408;
}

loc_802943C0:
{
    r3 = r25;
    r4 = (r1 + 208);
    r5 = 0;
    r6 = r28;
    r7 = (r30 & 65535);
    r8 = 0;
    r9 = (r29 & 255);
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

loc_802943E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80294404;
    }
}

loc_802943E8:
{
    r3 = (r1 + 248);
    r4 = r25;
    ctx->lr = 0x802943F4u;
    if constexpr (KnownRegArgsCpuCall<0x80294BC8u>(&func_80294BC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80294BC8_5B14 = func_80294BC8_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80294BC8_5B14);
        r4 = static_cast<uint32_t>(regargs_result_80294BC8_5B14 >> 32);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
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
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80294BC8u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802943F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80294404;
    }
}

loc_802943FC:
{
    r3 = 1;
    goto loc_80294578;
}

loc_80294404:
{
    r24 = (r24 + 4);
}

loc_80294408:
{
    r25 = MemoryInline::FlatRead32(r24);
    r0 = (r25 + 65536);
}

loc_80294414:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802943C0;
    }
}

loc_80294418:
{
    r26 = (r26 + 1);
}

loc_8029441C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80294424:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80294370;
    }
}

loc_80294428:
{
    r23 = (r23 + 1);
}

loc_8029442C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80294434:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80294368;
    }
}

loc_80294438:
{
    r22 = (r22 + 1);
}

loc_8029443C:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80294444:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_80294360;
    }
}

loc_80294448:
{
    r0 = (r27 & 255);
    r0 = (r0 & 2);
}

loc_80294454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80294574;
    }
}

loc_80294458:
{
    r0 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 172);
    r4 = (r1 + 160);
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    r8 = r31;
    r9 = (r1 + 36);
    r10 = (r1 + 32);
    ctx->lr = 0x80294484u;
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
        const auto regargs_result_802974F4_6A1D = func_802974F4_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802974F4_6A1D);
        r4 = static_cast<uint32_t>(regargs_result_802974F4_6A1D >> 32);
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
    r26 = 0;
    goto loc_80294568;
}

loc_8029448C:
{
    r27 = 0;
    goto loc_80294558;
}

loc_80294494:
{
    r23 = 0;
    goto loc_80294548;
}

loc_8029449C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r24 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r25 = (r0 + r27);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r22 = (r0 + r23);
    r3 = r24;
    r4 = r25;
    r5 = r22;
    r6 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296414u>(&func_80296414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80296414_715A = func_80296414_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80296414_715A;
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

loc_802944CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80294544;
    }
}

loc_802944D0:
{
    r3 = r24;
    r4 = r25;
    r5 = r22;
    r6 = r31;
    // inline leaf 0x80296A0C (10 guest instruction(s))
    r8 = MemoryInline::FlatRead32((r6 + 120));
    r7 = MemoryInline::FlatRead32((r6 + 108));
    r0 = MemoryInline::FlatRead32((r6 + 112));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r8_addr_10 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_10);
    // end of inlined leaf 0x80296A0C
    r24 = r3;
    goto loc_80294534;
}

loc_802944EC:
{
    r3 = r25;
    r4 = (r1 + 208);
    r5 = 0;
    r6 = r28;
    r7 = (r30 & 65535);
    r8 = 0;
    r9 = (r29 & 255);
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

loc_80294510:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80294530;
    }
}

loc_80294514:
{
    r3 = (r1 + 248);
    r4 = r25;
    ctx->lr = 0x80294520u;
    if constexpr (KnownRegArgsCpuCall<0x80294BC8u>(&func_80294BC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80294BC8_79CB = func_80294BC8_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80294BC8_79CB);
        r4 = static_cast<uint32_t>(regargs_result_80294BC8_79CB >> 32);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
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
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80294BC8u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80294524:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80294530;
    }
}

loc_80294528:
{
    r3 = 1;
    goto loc_80294578;
}

loc_80294530:
{
    r24 = (r24 + 4);
}

loc_80294534:
{
    r25 = MemoryInline::FlatRead32(r24);
    r0 = (r25 + 65536);
}

loc_80294540:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802944EC;
    }
}

loc_80294544:
{
    r23 = (r23 + 1);
}

loc_80294548:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80294550:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_8029449C;
    }
}

loc_80294554:
{
    r27 = (r27 + 1);
}

loc_80294558:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80294560:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80294494;
    }
}

loc_80294564:
{
    r26 = (r26 + 1);
}

loc_80294568:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80294570:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8029448C;
    }
}

loc_80294574:
{
    r3 = 0;
}

loc_80294578:
{
    r0 = 344;
    addr_psqx_8029457C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029457C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 336));
    r11 = (r1 + 336);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802940A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802940A0_ra38_1ee_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FEF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802940A0 func_802940A0 preserves=true fpr_mask=0x00000000
