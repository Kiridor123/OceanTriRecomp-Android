#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E77E0(CpuContext* ctx);
extern "C" uint64_t func_804E77E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E80B0(CpuContext* ctx);
extern "C" uint64_t func_804E80B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E8440(CpuContext* ctx);
extern "C" uint64_t func_804E8440_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E85E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804E85E0u);
    goto loc_804E85E0;

loc_804E85E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80630000u;
    r30 = r3;
    r31 = (r31 + -17272);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80760000u;
    r5 = MemoryInline::FlatRead32(r30);
    r4 = (r4 + -10560);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 36));
    r3 = (r5 & 3);
}

loc_804E8620:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804E8630;
    }
}

loc_804E8624:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14360), r0);
    MemoryInline::FlatWriteRam32((r4 + 36), r3);
}

loc_804E8630:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0x80000000u;
    r27 = MemoryInline::FlatRead32((r3 + 204));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r28 = (r28_rot_0 & 1073741823);
}

loc_804E8644:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(4))) {
        goto loc_804E86B0;
    }
}

loc_804E8648:
{
    r0 = MemoryInline::FlatRead32((r13 + -14308));
}

loc_804E8650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E86B0;
    }
}

loc_804E8654:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14308), r0);
    r3 = (r31 + 956);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E8668u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_1688 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_1688);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_1688 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 1000);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E8674u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_2081 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_2081);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_2081 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 1044);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E8680u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_2A7A = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_2A7A);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_2A7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 1088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E868Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_3473 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3473);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3473 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 1132);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E8698u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_3E6C = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3E6C);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3E6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 1176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E86A4u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_4865 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_4865);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_4865 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 956);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E86B0u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CDCA0_525D = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_525D);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_525D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804E86B0:
{
}

loc_804E86B4:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_804E86D0;
    }
}

loc_804E86B8:
{
}

loc_804E86BC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(5))) {
        goto loc_804E86D0;
    }
}

loc_804E86C0:
{
}

loc_804E86C4:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_804E86F0;
    }
}

loc_804E86C8:
{
}

loc_804E86CC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(5))) {
        goto loc_804E86F0;
    }
}

loc_804E86D0:
{
}

loc_804E86D4:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_804E86E0;
    }
}

loc_804E86D8:
{
}

loc_804E86DC:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(5))) {
        goto loc_804E870C;
    }
}

loc_804E86E0:
{
}

loc_804E86E4:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_804E870C;
    }
}

loc_804E86E8:
{
}

loc_804E86EC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(5))) {
        goto loc_804E870C;
    }
}

loc_804E86F0:
{
    r6 = r27;
    r7 = r28;
    r5 = (r31 + 1220);
    r3 = (r13 + -19616);
    r4 = 2651;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E870Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
}

loc_804E870C:
{
}

loc_804E8710:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804E871C;
    }
}

loc_804E8714:
{
}

loc_804E8718:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(2))) {
        goto loc_804E872C;
    }
}

loc_804E871C:
{
    r3 = 0x80760000u;
    r3 = (r3 + -10560);
    MemoryInline::FlatWriteRam32((r3 + 40), r27);
    goto loc_804E8738;
}

loc_804E872C:
{
    r3 = 0x80760000u;
    r3 = (r3 + -10560);
    MemoryInline::FlatWriteRam32((r3 + 40), r28);
}

loc_804E8738:
{
    r4 = 0x80760000u;
    r0 = MemoryInline::FlatRead16((r30 + 10));
    r3 = (r4 + -10560);
    MemoryInline::FlatWriteRam16((r4 + -10560), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_804E8750:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804E8760;
    }
}

loc_804E8754:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 65534);
    goto loc_804E8764;
}

loc_804E8760:
{
    r8 = MemoryInline::FlatRead16((r30 + 12));
}

loc_804E8764:
{
    r7 = 0x80760000u;
    r6 = MemoryInline::FlatRead16((r30 + 14));
    r7 = (r7 + -10560);
    r4 = MemoryInline::FlatRead16((r30 + 4));
    r9 = MemoryInline::FlatRead32((r7 + 36));
    r0 = 0;
    r5 = MemoryInline::FlatRead16((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 20));
}

loc_804E8788:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 2), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r7 + 2), r8);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r7 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r7 + 18), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r7 + 20), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 30u, (r7 + 32), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r7 + 26), r4);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r7 + 28), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r7 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r7 + 24), r0);
    }
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(2))) {
        goto loc_804E87B4;
    }
}

loc_804E87B0:
{
    goto loc_804E87CC;
}

loc_804E87B4:
{
}

loc_804E87B8:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(3))) {
        goto loc_804E87C0;
    }
}

loc_804E87BC:
{
    goto loc_804E87CC;
}

loc_804E87C0:
{
}

loc_804E87C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804E87CC;
    }
}

loc_804E87C8:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 65534);
}

loc_804E87CC:
{
    r30 = 0x80760000u;
    r31 = (r30 + -10560);
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r3 = (r4 + -3);
    MemoryInline::FlatWriteRam16((r31 + 6), static_cast<uint16_t>(r5));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    MemoryInline::FlatWriteRam32((r31 + 68), r3);
    r3 = (r0 + r4);
    if constexpr (KnownRegArgsCpuCall<0x804E77E0u>(&func_804E77E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E77E0_718C = func_804E77E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E77E0_718C);
        r4 = static_cast<uint32_t>(regargs_result_804E77E0_718C >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E77E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead16((r30 + -10560));
    r30 = r3;
    r5 = MemoryInline::FlatRead16((r31 + 4));
    r0 = MemoryInline::FlatRead16((r13 + -14364));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWriteRam32((r31 + 84), r3);
    r8 = (720 - r5);
    r4 = (r4 + r0);
}

loc_804E8820:
{
    r6 = MemoryInline::FlatRead16((r3 + 2));
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r8))) {
        goto loc_804E882C;
    }
}

loc_804E8828:
{
    goto loc_804E8834;
}

loc_804E882C:
{
    r0 = (static_cast<int32_t>(r4) >> 31);
    r8 = (r4 & ~r0);
}

loc_804E8834:
{
    r5 = 0x80760000u;
    r10 = MemoryInline::FlatRead16((r13 + -14362));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r5 = (r5 + -10560);
    r7 = MemoryInline::FlatRead16((r5 + 2));
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r12 = (r7 & 1);
    r7 = (r0 + r10);
    MemoryInline::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r9 = r12;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
}

loc_804E8868:
{
    r11 = (r4 + 1);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r12))) {
        goto loc_804E8874;
    }
}

loc_804E8870:
{
    r9 = r7;
}

loc_804E8874:
{
    r4 = 0x80760000u;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = (r4 + -10560);
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r28 = (r5 - r12);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    MemoryInline::FlatWriteRam16((r4 + 10), static_cast<uint16_t>(r9));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = MemoryInline::FlatRead16((r4 + 28));
    r5 = (r7 + r5);
    r7 = (r7 + r10);
    r5 = (r10 + r5);
    r8 = MemoryInline::FlatRead16((r4 + 24));
    r28 = (r5 - r28);
    r31 = (r7 - r12);
    r5 = (0 - r28);
    r7 = (r5 & ~r28);
    r10 = (static_cast<int32_t>(r7) >> 31);
    r5 = (static_cast<int32_t>(r31) >> 31);
    r9 = (static_cast<int32_t>(r31) >> 31);
    r12 = (r28 & r10);
    r10 = (r31 & r5);
    r7 = (static_cast<int32_t>(r7) >> 31);
    r5 = (static_cast<int32_t>(r31) >> 31);
    r9 = (r31 & r9);
    r5 = (r31 & r5);
    r31 = (r28 & r7);
    r5 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r11));
    r0 = (r0 + r10);
    r0 = (r0 - r12);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = (r6 + r5);
    r7 = PPC_Divw(static_cast<int32_t>(r9), static_cast<int32_t>(r11));
    r5 = PPC_Divw(static_cast<int32_t>(r31), static_cast<int32_t>(r11));
    r6 = (r8 - r7);
    MemoryInline::FlatWriteRam16((r4 + 14), static_cast<uint16_t>(r6));
    r0 = (r0 - r5);
    MemoryInline::FlatWriteRam16((r4 + 16), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 24));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r5 & 1);
    r0 = (r0 ^ r4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r7 = (r7_rot_0 & 65535);
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
}

loc_804E8930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E893C;
    }
}

loc_804E8934:
{
    r6 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_804E8940;
}

loc_804E893C:
{
    r6 = 0;
}

loc_804E8940:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = 0x80760000u;
    r3 = (r3 + -10560);
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r5 = (r0 | 64);
    r9 = MemoryInline::FlatRead32((r3 + 36));
    r4 = (r7 + 1);
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    r7 = 0x80760000u;
    r0 = (r9 + -2);
    r5 = (r4 & 65535);
    r8 = (r6 + 1);
    r7 = (r7 + -10680);
    r6 = (r5 | 4096);
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32((r13 + -14348));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_804E8988:
{
    r0 = (r4 | 128);
    MemoryInline::FlatWrite32((r13 + -14348), r5);
    r4 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::FlatWriteRam16((r7 + 50), static_cast<uint16_t>(r8));
    r5 = MemoryInline::FlatRead16((r7 + 108));
    MemoryInline::FlatWriteRam16((r7 + 48), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804E89D0;
    }
}

loc_804E89A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r4 & -5);
    r4 = (r3 | 4);
}

loc_804E89B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_804E89C4;
    }
}

loc_804E89BC:
{
    r10 = (r5 & -2);
    goto loc_804E89DC;
}

loc_804E89C4:
{
    r0 = (r5 & -2);
    r10 = (r0 | 1);
    goto loc_804E89DC;
}

loc_804E89D0:
{
    r4 = (r4 & -5);
    r10 = (r5 & -2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r4_mrot_1 = (r4_rot_2 & 4);
    r4_mdest_1 = (r4 & -5);
    r4 = (r4_mdest_1 | r4_mrot_1);
}

loc_804E89DC:
{
    r3 = 0x80760000u;
    r4 = (r4 & -9);
    r3 = (r3 + -10560);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r8 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r5 + -1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r3 = (r4 | r3);
}

loc_804E8A00:
{
    r6 = (r3 & -769);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_804E8A10;
    }
}

loc_804E8A08:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r6 = (r6 | r0);
}

loc_804E8A10:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = 0x80760000u;
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r3 = (r3 + -10560);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r0 = (r0 | 1073741824);
    r4 = 0x80760000u;
    r7 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r4 = (r4 + -10680);
    r5 = MemoryInline::FlatRead16((r3 + 4));
}

loc_804E8A40:
{
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r4 + 2), static_cast<uint16_t>(r6));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    MemoryInline::FlatWriteRam16((r4 + 108), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804E8A64;
    }
}

loc_804E8A60:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 131070);
}

loc_804E8A64:
{
    r7 = (r7 & 65535);
}

loc_804E8A6C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_804E8AC0;
    }
}

loc_804E8A70:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16776960);
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    r6 = (r4 + -1);
    r6 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    r4 = 0x80760000u;
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    r4 = (r4 + -10680);
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r6 = (r6 | 4096);
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r6));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    MemoryInline::FlatWriteRam16((r4 + 112), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    goto loc_804E8AE4;
}

loc_804E8AC0:
{
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = 0x80760000u;
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    r4 = (r4 + -10680);
    r6 = 256;
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r6));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    MemoryInline::FlatWrite32((r13 + -14352), r3);
}

loc_804E8AE4:
{
    r31 = 0x80760000u;
    r3 = r30;
    r31 = (r31 + -10560);
    r4 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x804E8360 (56 guest instruction(s))
}

loc_inl2_0x804E8360:
{
    r7 = MemoryInline::FlatRead32((r13 + -14352));
    r9 = 0x80760000u;
    r6 = 0x80760000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 26), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 26));
    r9 = (r9 + -10680);
    r8 = MemoryInline::FlatRead32((r13 + -14348));
    r6 = (r6 + -10560);
    MemoryInline::FlatWriteRam16((r9 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 40));
    r6 = (r7 | 268435456);
    MemoryInline::FlatWrite32((r13 + -14348), r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_inl2_0x804E8390:
{
    MemoryInline::FlatWrite32((r13 + -14352), r6);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 30));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 29));
    r0 = (r0 | 536870912);
    r6 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r6);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_3 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWriteRam16((r9 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x804E83CC;
    }
}

loc_inl2_0x804E83BC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 31));
    r8 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 32));
    r7 = (r4 + 172);
    goto loc_inl2_0x804E83EC;
}

loc_inl2_0x804E83CC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 32));
    r6 = (720 - r5);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 31));
    r5 = (r4 + r0);
    r4 = (r4 + r7);
    r0 = (r5 + 40);
    r7 = (r4 + -40);
    r8 = (r0 - r6);
}

loc_inl2_0x804E83EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = 0x80760000u;
    r6 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 28));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r4 = (r4_rot_4 & 65408);
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(23));
    r3 = (r3_rot_3 & 8388607);
    r6 = (r6 | r4);
    r5 = (r5 + -10680);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r3 | r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r5 + 10), static_cast<uint16_t>(r6));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
}

loc_inl2_cont_804E8360:
{
    // end of inlined leaf 0x804E8360
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r30 + 16));
    r3 = 0x80760000u;
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = (r3 + -10680);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r5 = (r5_rot_4 & -32);
    r6 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r30 + 12));
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r5 = (r6 | r5);
    r6 = MemoryInline::FlatRead32((r31 + 32));
    r4 = MemoryInline::FlatRead16((r31 + 18));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_804E8B30:
{
    r0 = (r4 + 15);
    r9 = MemoryInline::FlatRead16((r31 + 22));
    MemoryInline::FlatWriteRam16((r3 + 22), static_cast<uint16_t>(r5));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r5 = MemoryInline::FlatRead32((r13 + -14352));
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r0 + r4_ca_0);
    r6 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r30 + 20));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 14));
    r5 = (r5 | 2097152);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r6 = (r6_rot_0 & -32);
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    r6 = (r7 | r6);
    r0 = MemoryInline::FlatRead16((r31 + 26));
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    MemoryInline::FlatWriteRam16((r3 + 20), static_cast<uint16_t>(r6));
    r5 = MemoryInline::FlatRead32((r13 + -14352));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r30 + 18));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r30 + 13));
    r5 = (r5 | 262144);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r7 = (r7_rot_4 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r6);
    r6 = (r8 | r7);
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r6));
    r5 = MemoryInline::FlatRead32((r13 + -14352));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r30 + 22));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r30 + 15));
    r5 = (r5 | 524288);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r7 = (r7_rot_5 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r6);
    r6 = (r8 | r7);
    MemoryInline::FlatWriteRam16((r3 + 24), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    MemoryInline::FlatWriteRam8((r31 + 44), static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E8BD0;
    }
}

loc_804E8BC8:
{
    r10 = (r4 & 255);
    goto loc_804E8BD4;
}

loc_804E8BD0:
{
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 254);
}

loc_804E8BD4:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r3 = (r3_rot_4 & -268435456);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r3 = (r3 - r6);
    r4 = MemoryInline::FlatRead32((r13 + -14328));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_5 & -1);
    r5 = MemoryInline::FlatRead32((r13 + -14352));
    r9 = (r3 + r6);
    r6 = MemoryInline::FlatRead32((r13 + -14348));
    r7 = (r9 & 255);
    r3 = 0x80760000u;
    r8 = (r0 + r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804E8C04:
{
    r0 = (r8 + 15);
    r3 = (r3 + -10560);
    r7 = 0x80760000u;
    MemoryInline::FlatWriteRam8((r3 + 45), static_cast<uint8_t>(r10));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r0) >> 4);
    r0 = (r6 | 134217728);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r8 + r6_ca_0);
    r0 = r10;
    r7 = (r7 + -10680);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_6 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 46), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r7 + 72), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E8C58;
    }
}

loc_804E8C44:
{
    r4 = (r3 + 52);
    r5 = (r3 + 56);
    r6 = (r3 + 76);
    r7 = (r3 + 80);
    if constexpr (KnownRegArgsCpuCall<0x804E80B0u>(&func_804E80B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E80B0_BA8E = func_804E80B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E80B0_BA8E);
        r4 = static_cast<uint32_t>(regargs_result_804E80B0_BA8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E80B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    }
}

loc_804E8C58:
{
    r4 = 0x80760000u;
    r4 = (r4 + -10560);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r4 = MemoryInline::FlatRead16((r4 + 12));
    r5 = MemoryInline::FlatRead8(r30);
    r6 = MemoryInline::FlatRead16((r30 + 2));
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r8 = MemoryInline::FlatRead16((r30 + 6));
    r9 = MemoryInline::FlatRead16((r30 + 8));
    r10 = MemoryInline::FlatRead16((r30 + 10));
    if constexpr (KnownRegArgsCpuCall<0x804E8440u>(&func_804E8440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E8440_C2CE = func_804E8440_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E8440_C2CE);
        r4 = static_cast<uint32_t>(regargs_result_804E8440_C2CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E8440u>(ctx);
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
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E85E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E85E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E85E0 func_804E85E0 preserves=true fpr_mask=0x00000000
