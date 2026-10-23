#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF84(CpuContext* ctx);
extern "C" uint32_t func_8004AF84_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004D538(CpuContext* ctx);
extern "C" uint64_t func_8004D538_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E9228(CpuContext* ctx);
extern "C" uint64_t func_801E9228_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E96A4(CpuContext* ctx);
extern "C" uint64_t func_801E96A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801FBBC8(CpuContext* ctx);
extern "C" uint64_t func_801FBBC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801FBFDC(CpuContext* ctx);
extern "C" uint64_t func_801FBFDC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801FC354(CpuContext* ctx);
extern "C" uint64_t func_801FC354_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021262C(CpuContext* ctx);
extern "C" uint64_t func_8021262C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021B1A8(CpuContext* ctx);
extern "C" uint64_t func_8021B1A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021B6F4(CpuContext* ctx);
extern "C" uint64_t func_8021B6F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D8DF8(CpuContext* ctx);
extern "C" uint32_t func_802D8DF8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802FB8A4(CpuContext* ctx);
extern "C" uint32_t func_802FB8A4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8033C410(CpuContext* ctx);
extern "C" uint64_t func_8033C410_ra0_0_18_0(CpuContext*);
extern "C" void func_8033C53C(CpuContext* ctx);
extern "C" uint64_t func_8033C53C_ra70_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A4F30(CpuContext* ctx);
extern "C" uint64_t func_803A4F30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803C5938(CpuContext* ctx);
extern "C" uint32_t func_803C5938_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801FC37C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_801FC37C;

loc_801FC37C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    // inline leaf 0x8004D198 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -15384);
    // end of inlined leaf 0x8004D198
    r31 = r3;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r30 = r3;
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 45));
}

loc_801FC3B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FC4D0;
    }
}

loc_801FC3B4:
{
    ctx->lr = 0x801FC3B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801FC2CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC3C0u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF84u>(&func_8004AF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AF84_15EE = func_8004AF84_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AF84_15EE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC3CCu;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_198B = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_198B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r31 + 436);
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x801FC3DCu;
    if constexpr (KnownRegArgsCpuCall<0x801E9228u>(&func_801E9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_801E9228_1D94 = func_801E9228_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E9228_1D94);
        r4 = static_cast<uint32_t>(regargs_result_801E9228_1D94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801E9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead32((r31 + 428));
}

loc_801FC3E4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801FC3EC;
    }
}

loc_801FC3E8:
{
    ctx->lr = 0x801FC3ECu;
    if constexpr (KnownRegArgsCpuCall<0x8021262Cu>(&func_8021262C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021262C_2335 = func_8021262C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021262C_2335);
        r4 = static_cast<uint32_t>(regargs_result_8021262C_2335 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021262Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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

loc_801FC3EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 20896);
    r4 = MemoryInline::FlatRead16((r31 + 578));
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl3_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl3_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl3_0x802D9E6C;
    }
}

loc_inl3_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl3_cont_802D9E4C;
}

loc_inl3_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl3_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 20898);
    r4 = MemoryInline::FlatRead16((r31 + 580));
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl4_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl4_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl4_0x802D9E6C;
    }
}

loc_inl4_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl4_cont_802D9E4C;
}

loc_inl4_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl4_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r27 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead16((r31 + 580));
    r0 = MemoryInline::FlatRead8((r27 + 15875));
    r4 = (r0 & 127);
    ctx->lr = 0x801FC420u;
    if constexpr (KnownRegArgsCpuCall<0x802D8DF8u>(&func_802D8DF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D8DF8_3143 = func_802D8DF8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802D8DF8_3143;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802D8DF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r27 + 15875));
    r0 = (r0 & 127);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r27 + r0);
    r3 = (r3 + 20902);
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl5_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl5_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl5_0x802D9E6C;
    }
}

loc_inl5_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl5_cont_802D9E4C;
}

loc_inl5_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl5_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r26 = 0;
    r27 = 0;
    r28 = (r31 + 582);
    r29 = r31;
    r30 = 0;
}

loc_801FC450:
{
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r5 + r27);
    r3 = MemoryInline::FlatRead16((r4 + 20916));
    r4 = MemoryInline::FlatRead16((r4 + 20918));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r5 + 20964);
    r6 = 30;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x801FC474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r27);
    r3 = (r3 + 20916);
    r4 = r28;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    MemoryInline::FlatWrite16((r29 + 582), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 584), static_cast<uint16_t>(r30));
    r27 = (r27 + 4);
    r28 = (r28 + 4);
    r29 = (r29 + 4);
    r26 = (r26 + 1);
}

loc_801FC4A4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(12))) {
        goto loc_801FC450;
    }
}

loc_801FC4A8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead32((r4 + 20892));
    r0 = MemoryInline::FlatRead32((r31 + 632));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 20892), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 578), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 580), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x8004D538u>(&func_8004D538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D538_4114 = func_8004D538_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004D538_4114);
        r4 = static_cast<uint32_t>(regargs_result_8004D538_4114 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801FC670;
}

loc_801FC4D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 483));
}

loc_801FC4D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FC4E8;
    }
}

loc_801FC4DC:
{
}

loc_801FC4E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801FC634;
    }
}

loc_801FC4E4:
{
    goto loc_801FC670;
}

loc_801FC4E8:
{
    ctx->lr = 0x801FC4ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801FC2CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC4F4u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF84u>(&func_8004AF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AF84_472E = func_8004AF84_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AF84_472E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC500u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_4ACB = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_4ACB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r30 + 340);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_801FC514:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_801FC528;
    }
}

loc_801FC518:
{
    r0 = MemoryInline::FlatRead32((r30 + 332));
}

loc_801FC520:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801FC528;
    }
}

loc_801FC524:
{
    ctx->lr = 0x801FC528u;
    if constexpr (KnownRegArgsCpuCall<0x8021262Cu>(&func_8021262C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021262C_505E = func_8021262C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021262C_505E);
        r4 = static_cast<uint32_t>(regargs_result_8021262C_505E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021262Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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

loc_801FC528:
{
    r0 = MemoryInline::FlatRead16((r30 + 480));
}

loc_801FC530:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(100))) {
        goto loc_801FC544;
    }
}

loc_801FC534:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 45), static_cast<uint8_t>(r0));
}

loc_801FC544:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 20896);
    r4 = MemoryInline::FlatRead16((r30 + 934));
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl7_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl7_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl7_0x802D9E6C;
    }
}

loc_inl7_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl7_cont_802D9E4C;
}

loc_inl7_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl7_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 20898);
    r4 = MemoryInline::FlatRead16((r30 + 936));
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl8_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl8_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl8_0x802D9E6C;
    }
}

loc_inl8_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl8_cont_802D9E4C;
}

loc_inl8_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl8_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r27 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead16((r30 + 936));
    r0 = MemoryInline::FlatRead8((r27 + 15875));
    r4 = (r0 & 127);
    ctx->lr = 0x801FC578u;
    if constexpr (KnownRegArgsCpuCall<0x802D8DF8u>(&func_802D8DF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D8DF8_5FCF = func_802D8DF8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802D8DF8_5FCF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802D8DF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r27 + 15875));
    r0 = (r0 & 127);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r27 + r0);
    r3 = (r3 + 20902);
    // inline leaf 0x802D9E4C (11 guest instruction(s))
}

loc_inl9_0x802D9E4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 + r4);
}

loc_inl9_0x802D9E58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_inl9_0x802D9E6C;
    }
}

loc_inl9_0x802D9E5C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl9_cont_802D9E4C;
}

loc_inl9_0x802D9E6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_inl9_cont_802D9E4C:
{
    // end of inlined leaf 0x802D9E4C
    r26 = 0;
    r29 = 0;
    r28 = (r30 + 938);
    r27 = r30;
    r31 = 0;
}

loc_801FC5A8:
{
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r5 + r29);
    r3 = MemoryInline::FlatRead16((r4 + 20916));
    r4 = MemoryInline::FlatRead16((r4 + 20918));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r5 + 20964);
    r6 = 30;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x801FC5CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r29);
    r3 = (r3 + 20916);
    r4 = r28;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    MemoryInline::FlatWrite16((r27 + 938), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r27 + 940), static_cast<uint16_t>(r31));
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_801FC5FC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(12))) {
        goto loc_801FC5A8;
    }
}

loc_801FC600:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead32((r4 + 20892));
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 20892), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r30 + 934), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r30 + 936), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_801FC628:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_801FC670;
    }
}

loc_801FC62C:
{
    if constexpr (KnownRegArgsCpuCall<0x8004D538u>(&func_8004D538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D538_7065 = func_8004D538_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004D538_7065);
        r4 = static_cast<uint32_t>(regargs_result_8004D538_7065 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801FC670;
}

loc_801FC634:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC63Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AF84u>(&func_8004AF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AF84_73D1 = func_8004AF84_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AF84_73D1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801FC648u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_776E = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_776E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r30 + 340);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x801FC658u;
    if constexpr (KnownRegArgsCpuCall<0x801FBFDCu>(&func_801FBFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_801FBFDC_7B77 = func_801FBFDC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801FBFDC_7B77);
        r4 = static_cast<uint32_t>(regargs_result_801FBFDC_7B77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801FBFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_801FC660:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_801FC670;
    }
}

loc_801FC664:
{
    if constexpr (KnownRegArgsCpuCall<0x8004D538u>(&func_8004D538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D538_8348 = func_8004D538_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004D538_8348);
        r4 = static_cast<uint32_t>(regargs_result_8004D538_8348 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x801FC66Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A4F30u>(&func_803A4F30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A4F30_8636 = func_803A4F30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A4F30_8636);
        r4 = static_cast<uint32_t>(regargs_result_803A4F30_8636 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803A4F30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x801FC670u;
    if constexpr (KnownRegArgsCpuCall<0x803C5938u>(&func_803C5938)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C5938_895A = func_803C5938_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803C5938_895A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803C5938u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_801FC670:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_801FC678:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FC6E4;
    }
}

loc_801FC67C:
{
    ctx->lr = 0x801FC680u;
    if constexpr (KnownRegArgsCpuCall<0x801FBBC8u>(&func_801FBBC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_801FBBC8_8E29 = func_801FBBC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801FBBC8_8E29);
        r4 = static_cast<uint32_t>(regargs_result_801FBBC8_8E29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801FBBC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 16488);
    ctx->lr = 0x801FC68Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E96A4u>(&func_801E96A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_801E96A4_9645 = func_801E96A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E96A4_9645);
        r4 = static_cast<uint32_t>(regargs_result_801E96A4_9645 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801E96A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 15872));
    // inline leaf 0x8021F2AC (13 guest instruction(s))
}

loc_inl12_0x8021F2AC:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -12536);
    r5 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r4 + 56), r0);
}

loc_inl12_0x8021F2C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_inl12_0x8021F2D4;
    }
}

loc_inl12_0x8021F2C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 60), r0);
    goto loc_inl12_cont_8021F2AC;
}

loc_inl12_0x8021F2D4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + 60), r0);
}

loc_inl12_cont_8021F2AC:
{
    // end of inlined leaf 0x8021F2AC
    ctx->lr = 0x801FC69Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033C53Cu>(&func_8033C53C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033C53C_9DCC = func_8033C53C_ra70_0_18_0(ctx, r4, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8033C53C_9DCC);
        r4 = static_cast<uint32_t>(regargs_result_8033C53C_9DCC >> 32);
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
        InvokeDirectCpu<0x8033C53Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x801FC6A0u;
    if constexpr (KnownRegArgsCpuCall<0x8033C410u>(&func_8033C410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033C410_A15C = func_8033C410_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8033C410_A15C);
        r4 = static_cast<uint32_t>(regargs_result_8033C410_A15C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033C410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x801FC6A4u;
    if constexpr (KnownRegArgsCpuCall<0x801FC354u>(&func_801FC354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801FC354_A4A9 = func_801FC354_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FC354_A4A9);
        r4 = static_cast<uint32_t>(regargs_result_801FC354_A4A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801FC354u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 18491));
    // inline leaf 0x803A2638 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r4 + 120), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x803A2638
    ctx->lr = 0x801FC6B4u;
    if constexpr (KnownRegArgsCpuCall<0x802FB8A4u>(&func_802FB8A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FB8A4_A9E1 = func_802FB8A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FB8A4_A9E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802FB8A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
}

loc_801FC6BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801FC6D4;
    }
}

loc_801FC6C0:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    goto loc_801FC6E4;
}

loc_801FC6D4:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_801FC6E4:
{
    ctx->lr = 0x801FC6E8u;
    if constexpr (KnownRegArgsCpuCall<0x8021B1A8u>(&func_8021B1A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021B1A8_AF1F = func_8021B1A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021B1A8_AF1F);
        r4 = static_cast<uint32_t>(regargs_result_8021B1A8_AF1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021B1A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x801FC6ECu;
    if constexpr (KnownRegArgsCpuCall<0x8021B6F4u>(&func_8021B6F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021B6F4_B662 = func_8021B6F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B6F4_B662);
        r4 = static_cast<uint32_t>(regargs_result_8021B6F4_B662 >> 32);
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
        InvokeDirectCpu<0x8021B6F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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

extern "C" void func_801FC37C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FC37C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801FC37C func_801FC37C preserves=true fpr_mask=0x00000000
