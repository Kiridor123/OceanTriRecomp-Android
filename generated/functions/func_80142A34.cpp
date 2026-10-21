#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055010(CpuContext* ctx);
extern "C" uint32_t func_80055010_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005504C(CpuContext* ctx);
extern "C" uint64_t func_8005504C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D547C(CpuContext* ctx);
extern "C" uint64_t func_800D547C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E228C(CpuContext* ctx);
extern "C" uint64_t func_800E228C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80137C84(CpuContext* ctx);
extern "C" uint64_t func_80137C84_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_802C0634(CpuContext* ctx);
extern "C" uint64_t func_802C0634_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A7E80(CpuContext* ctx);
extern "C" uint32_t func_803A7E80_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80142A34_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80142A34u);
    goto loc_80142A34;

loc_80142A34:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r26 = r4;
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x80142A5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005504Cu>(&func_8005504C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005504C_BD1 = func_8005504C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005504C_BD1);
        r4 = static_cast<uint32_t>(regargs_result_8005504C_BD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005504Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r26 & 255);
    ctx->lr = 0x80142A64u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r27 = r3;
    r0 = (r3 & 255);
}

loc_80142A70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80142BC0;
    }
}

loc_80142A74:
{
}

loc_80142A78:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80142BC0;
    }
}

loc_80142A7C:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 2551u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31, static_cast<uint8_t>(r0));
    r28 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 9), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 11), static_cast<uint8_t>(r3));
    r0 = 254;
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 12), static_cast<uint8_t>(r0));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    MemoryInline::WriteResolved8(guest_range_1, 480u, (r31 + 480), static_cast<uint8_t>(r3));
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::WriteResolved8(guest_range_1, 481u, (r31 + 481), static_cast<uint8_t>(r3));
    r29 = -1;
    MemoryInline::WriteResolved32(guest_range_1, 1952u, (r31 + 1952), r29);
    MemoryInline::WriteResolved32(guest_range_1, 1964u, (r31 + 1964), r29);
    r30 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 2550u, (r31 + 2550), static_cast<uint8_t>(r30));
    r3 = (r31 + 2820);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 15), 0, 2536u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 2535u, (r31 + 2550), static_cast<uint8_t>(r30));
    r30 = 65536;
    r0 = (r30 + -1);
    MemoryInline::WriteResolved16(guest_range_2, 11u, (r31 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 15), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 17), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r31 + 18), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r31 + 16), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r31 + 21), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r31 + 22), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r31 + 23), static_cast<uint8_t>(r28));
    ctx->lr = 0x80142AFCu;
    if constexpr (KnownRegArgsCpuCall<0x803A7E80u>(&func_803A7E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A7E80_1CDC = func_803A7E80_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A7E80_1CDC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A7E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 3), 0, 2185u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r31 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 20), static_cast<uint8_t>(r28));
    r0 = (r30 + -1);
    MemoryInline::WriteResolved16(guest_range_0, 25u, (r31 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1989u, (r31 + 1992), static_cast<uint8_t>(r28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27848));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 461u, (r31 + 464), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1128u, (r31 + 1131), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 2181u, (r31 + 2184), r29);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 13), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r31 + 14), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 3), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 10), static_cast<uint8_t>(r28));
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126098_241D = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_241D);
        r4 = static_cast<uint32_t>(regargs_result_80126098_241D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 456), r0);
    r3 = r31;
    ctx->lr = 0x80142B50u;
    if constexpr (KnownRegArgsCpuCall<0x80137C84u>(&func_80137C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_80137C84_27AE = func_80137C84_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80137C84_27AE);
        r4 = static_cast<uint32_t>(regargs_result_80137C84_27AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80137C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = r31;
    ctx->lr = 0x80142B58u;
    if constexpr (KnownRegArgsCpuCall<0x802C0634u>(&func_802C0634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802C0634_2BCA = func_802C0634_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C0634_2BCA);
        r4 = static_cast<uint32_t>(regargs_result_802C0634_2BCA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802C0634u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r28 = (r3 & 255);
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r0 = (r27 & 255);
    r0 = (r0 * 24);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    if constexpr (KnownRegArgsCpuCall<0x800D547Cu>(&func_800D547C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D547C_2FD2 = func_800D547C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D547C_2FD2);
        r4 = static_cast<uint32_t>(regargs_result_800D547C_2FD2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800D547Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r3;
}

loc_80142B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80142BB4;
    }
}

loc_80142B84:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 68));
    ctx->lr = 0x80142B90u;
    if constexpr (KnownRegArgsCpuCall<0x8005504Cu>(&func_8005504C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005504C_33CF = func_8005504C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005504C_33CF);
        r4 = static_cast<uint32_t>(regargs_result_8005504C_33CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005504Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r1 + 12);
    ctx->lr = 0x80142B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80055010u>(&func_80055010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80055010_36FD = func_80055010_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80055010_36FD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80055010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r31 + 36);
    r4 = (r1 + 12);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r0 | 101);
    r6 = r28;
    ctx->lr = 0x80142BB4u;
    if constexpr (KnownRegArgsCpuCall<0x800E228Cu>(&func_800E228C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E228C_3A08 = func_800E228C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E228C_3A08);
        r4 = static_cast<uint32_t>(regargs_result_800E228C_3A08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E228Cu>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80142BB4:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x800E0C4C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x800E0C4C
}

loc_80142BC0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80142A34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80142A34_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80142A34 func_80142A34 preserves=true fpr_mask=0x00000000
