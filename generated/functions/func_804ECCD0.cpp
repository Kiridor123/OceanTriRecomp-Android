#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804575D8(CpuContext* ctx);
extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047E144(CpuContext* ctx);
extern "C" uint64_t func_8047E144_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804807BC(CpuContext* ctx);
extern "C" uint64_t func_804807BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80482B78(CpuContext* ctx);
extern "C" uint64_t func_80482B78_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);
extern "C" void func_804DD360(CpuContext* ctx);
extern "C" double func_804DD360_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804DD3D0(CpuContext* ctx);
extern "C" double func_804DD3D0_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804DD440(CpuContext* ctx);
extern "C" double func_804DD440_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804DD4A0(CpuContext* ctx);
extern "C" double func_804DD4A0_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804EBE80(CpuContext* ctx);
extern "C" uint64_t func_804EBE80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EC060(CpuContext* ctx);
extern "C" uint64_t func_804EC060_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804ECB30(CpuContext* ctx);
extern "C" uint64_t func_804ECB30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FD5C0(CpuContext* ctx);
extern "C" uint64_t func_804FD5C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FD7E0(CpuContext* ctx);
extern "C" uint64_t func_804FD7E0_ra0_0_18_0(CpuContext*);
extern "C" void func_804FDDD0(CpuContext* ctx);
extern "C" uint64_t func_804FDDD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FDEC0(CpuContext* ctx);
extern "C" uint64_t func_804FDEC0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FDF20(CpuContext* ctx);
extern "C" uint64_t func_804FDF20_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80500490(CpuContext* ctx);
extern "C" uint32_t func_80500490_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_805006E0(CpuContext* ctx);
extern "C" uint64_t func_805006E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804ECCD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_10 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_not_8 = 0;
    uint32_t r3_not_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
    uint32_t r3_rot_27 = 0;
    uint32_t r3_rot_28 = 0;
    uint32_t r3_rot_29 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_30 = 0;
    uint32_t r3_rot_31 = 0;
    uint32_t r3_rot_32 = 0;
    uint32_t r3_rot_33 = 0;
    uint32_t r3_rot_34 = 0;
    uint32_t r3_rot_35 = 0;
    uint32_t r3_rot_36 = 0;
    uint32_t r3_rot_37 = 0;
    uint32_t r3_rot_38 = 0;
    uint32_t r3_rot_39 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_40 = 0;
    uint32_t r3_rot_41 = 0;
    uint32_t r3_rot_42 = 0;
    uint32_t r3_rot_43 = 0;
    uint32_t r3_rot_44 = 0;
    uint32_t r3_rot_45 = 0;
    uint32_t r3_rot_46 = 0;
    uint32_t r3_rot_47 = 0;
    uint32_t r3_rot_48 = 0;
    uint32_t r3_rot_49 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_50 = 0;
    uint32_t r3_rot_51 = 0;
    uint32_t r3_rot_52 = 0;
    uint32_t r3_rot_53 = 0;
    uint32_t r3_rot_54 = 0;
    uint32_t r3_rot_55 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_10 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r3_subfe_rb_6 = 0;
    uint32_t r3_subfe_rb_7 = 0;
    uint32_t r3_subfe_rb_8 = 0;
    uint32_t r3_subfe_rb_9 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_10 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r4_subfc_min_7 = 0;
    uint32_t r4_subfc_min_8 = 0;
    uint32_t r4_subfc_min_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804ECCD0;

loc_804ECCD0:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    r11 = (r1 + 480);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r18 = 0x80630000u;
    r18 = (r18 + -14352);
    ctx->lr = 0x804ECCF0u;
    if constexpr (KnownRegArgsCpuCall<0x804FD7E0u>(&func_804FD7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804FD7E0_27EA = func_804FD7E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804FD7E0_27EA);
        r4 = static_cast<uint32_t>(regargs_result_804FD7E0_27EA >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804FD7E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804ECCF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804ECD38;
    }
}

loc_804ECCF8:
{
}

loc_804ECCFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_804ED694;
    }
}

loc_804ECD00:
{
    r0 = MemoryInline::FlatRead32((r13 + -14140));
}

loc_804ECD08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804ED694;
    }
}

loc_804ECD0C:
{
    r4 = 1;
    r0 = 50;
    r3 = 0x804F0000u;
    MemoryInline::FlatWrite32((r13 + -14140), r4);
    r3 = (r3 + -5856);
    MemoryInline::FlatWrite32((r13 + -14180), r0);
    ctx->lr = 0x804ECD28u;
    if constexpr (KnownRegArgsCpuCall<0x804FDF20u>(&func_804FDF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804FDF20_2E9C = func_804FDF20_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FDF20_2E9C);
        r4 = static_cast<uint32_t>(regargs_result_804FDF20_2E9C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FDF20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 0x804F0000u;
    r3 = (r3 + -4640);
    ctx->lr = 0x804ECD34u;
    if constexpr (KnownRegArgsCpuCall<0x804FDEC0u>(&func_804FDEC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804FDEC0_347E = func_804FDEC0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FDEC0_347E);
        r4 = static_cast<uint32_t>(regargs_result_804FDEC0_347E >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FDEC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_804ED694;
}

loc_804ECD38:
{
    r17 = MemoryInline::FlatRead32((r13 + -19580));
}

loc_804ECD40:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(0))) {
        goto loc_804ECD88;
    }
}

loc_804ECD44:
{
    r3 = MemoryInline::FlatRead32((r13 + -14180));
    r0 = (r3 + -1);
}

loc_804ECD4C:
{
    MemoryInline::FlatWrite32((r13 + -14180), r0);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804ECD80;
    }
}

loc_804ECD54:
{
    r3 = (r18 + 272);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    ctx->lr = 0x804ECD64u;
    if constexpr (KnownRegArgsCpuCall<0x8047E144u>(&func_8047E144)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8047E144_4097 = func_8047E144_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8047E144_4097);
        r4 = static_cast<uint32_t>(regargs_result_8047E144_4097 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8047E144u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = 0x80760000u;
    r3 = (r3 + -10400);
    ctx->lr = 0x804ECD70u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CBE80_456C = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_456C);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_456C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0;
    ctx->lr = 0x804ECD78u;
    if constexpr (KnownRegArgsCpuCall<0x804FDEC0u>(&func_804FDEC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804FDEC0_4ABE = func_804FDEC0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FDEC0_4ABE);
        r4 = static_cast<uint32_t>(regargs_result_804FDEC0_4ABE >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FDEC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r17;
    ctx->lr = 0x804ECD80u;
    if constexpr (KnownRegArgsCpuCall<0x804FD5C0u>(&func_804FD5C0)) {
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
        const auto regargs_result_804FD5C0_50D5 = func_804FD5C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FD5C0_50D5);
        r4 = static_cast<uint32_t>(regargs_result_804FD5C0_50D5 >> 32);
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
        InvokeDirectCpu<0x804FD5C0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ECD80:
{
    r0 = 1;
    goto loc_804ECD8C;
}

loc_804ECD88:
{
    r0 = 0;
}

loc_804ECD8C:
{
}

loc_804ECD90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804ED694;
    }
}

loc_804ECD94:
{
    r0 = MemoryInline::FlatRead16((r13 + -14194));
}

loc_804ECD9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(60000))) {
        goto loc_804ECDFC;
    }
}

loc_804ECDA0:
{
    r17 = 0x80000000u;
    r4 = 1;
    r3 = (r17 + 12706);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CCC90_5ADD = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_5ADD);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_5ADD >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r18 + 296);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead8((r17 + 12706));
    r3 = (r18 + 336);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r3 = MemoryInline::FlatRead8((r13 + -14132));
    r0 = MemoryInline::FlatRead8((r17 + 12706));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804ECDDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_804ECDFC;
    }
}

loc_804ECDE0:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r17 + 12706));
    MemoryInline::FlatWrite8((r13 + -14132), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead8((r13 + -14132));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x804ECDFCu;
    if constexpr (KnownRegArgsCpuCall<0x804FDDD0u>(&func_804FDDD0)) {
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
        const auto regargs_result_804FDDD0_6DC2 = func_804FDDD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FDDD0_6DC2);
        r4 = static_cast<uint32_t>(regargs_result_804FDDD0_6DC2 >> 32);
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
        InvokeDirectCpu<0x804FDDD0u>(ctx);
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

loc_804ECDFC:
{
    ctx->lr = 0x804ECE00u;
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
    InvokeDirectCpu<0x804DB770u>(ctx);
    r0 = ctx->gpr[0];
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

loc_804ECE04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804ECE9C;
    }
}

loc_804ECE08:
{
    ctx->lr = 0x804ECE0Cu;
    if constexpr (KnownRegArgsCpuCall<0x805006E0u>(&func_805006E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_805006E0_7D76 = func_805006E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805006E0_7D76);
        r4 = static_cast<uint32_t>(regargs_result_805006E0_7D76 >> 32);
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
        r13 = ctx->gpr[13];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x805006E0u>(ctx);
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
        r13 = ctx->gpr[13];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r0 = MemoryInline::FlatRead8((r13 + -14130));
}

loc_804ECE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ECE9C;
    }
}

loc_804ECE18:
{
    ctx->lr = 0x804ECE1Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DD360u>(&func_804DD360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804DD360_8BDD = func_804DD360_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD360_8BDD;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DD360u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_804ECE24:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_804ECE2C;
    }
}

loc_804ECE28:
{
    r0 = 1;
}

loc_804ECE2C:
{
}

loc_804ECE30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_804ECE38;
    }
}

loc_804ECE34:
{
    r0 = 5;
}

loc_804ECE38:
{
    MemoryInline::FlatWrite8((r13 + -14123), static_cast<uint8_t>(r0));
    ctx->lr = 0x804ECE40u;
    if constexpr (KnownRegArgsCpuCall<0x804DD440u>(&func_804DD440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804DD440_95B7 = func_804DD440_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD440_95B7;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DD440u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r13 + -14124), static_cast<uint8_t>(r0));
    ctx->lr = 0x804ECE58u;
    if constexpr (KnownRegArgsCpuCall<0x804DD3D0u>(&func_804DD3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804DD3D0_9EDE = func_804DD3D0_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD3D0_9EDE;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DD3D0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::FlatWrite32((r13 + -14128), r0);
    ctx->lr = 0x804ECE70u;
    if constexpr (KnownRegArgsCpuCall<0x804DD4A0u>(&func_804DD4A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804DD4A0_A7F6 = func_804DD4A0_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD4A0_A7F6;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DD4A0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_804ECE74:
{
    r4 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804ECE80;
    }
}

loc_804ECE7C:
{
    r4 = 0;
}

loc_804ECE80:
{
    r0 = (r3 & 255);
}

loc_804ECE88:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(127))) {
        goto loc_804ECE90;
    }
}

loc_804ECE8C:
{
    r4 = 127;
}

loc_804ECE90:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -14129), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r13 + -14130), static_cast<uint8_t>(r0));
}

loc_804ECE9C:
{
    r23 = 0x80760000u;
    r20 = 0;
    r23 = (r23 + -10352);
    r22 = (r13 + -14192);
    r21 = (r13 + -14188);
    r28 = 0x80000000u;
    r29 = 0;
    r30 = 16;
    r31 = 1;
}

loc_804ECEC0:
{
    r24 = MemoryInline::FlatRead32(r23);
    r0 = MemoryInline::FlatRead32((r24 + 2264));
}

loc_804ECECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED5E0;
    }
}

loc_804ECED0:
{
    r0 = MemoryInline::FlatRead8(r22);
    r26 = 0;
}

loc_804ECEDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_804ED1D0;
    }
}

loc_804ECEE0:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r24 + 1516));
    r0 = MemoryInline::FlatRead8((r24 + 1517));
    r0 = (r0 - r4);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_804ECF04;
    }
}

loc_804ECEF8:
{
    r0 = MemoryInline::FlatRead32((r24 + 1524));
    r0 = (r17 + r0);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804ECF04:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ECF0C:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804ECF18;
    }
}

loc_804ECF10:
{
    r0 = 0;
    goto loc_804ECF4C;
}

loc_804ECF18:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r24 + 1516));
    r17 = r3;
    r4 = MemoryInline::FlatRead32((r24 + 1520));
    r3 = (r1 + 264);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 48;
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r17;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl6_0x804D1330:
{
}

loc_inl6_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x804D1344;
    }
}

loc_inl6_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl6_0x804D1348;
}

loc_inl6_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl6_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_8 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = 1;
}

loc_804ECF4C:
{
}

loc_804ECF50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED1D0;
    }
}

loc_804ECF54:
{
    r0 = MemoryInline::FlatRead32((r1 + 264));
}

loc_804ECF5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(18))) {
        goto loc_804ECF6C;
    }
}

loc_804ECF60:
{
    r0 = MemoryInline::FlatRead32((r24 + 2112));
}

loc_804ECF68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED1D0;
    }
}

loc_804ECF6C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 264), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 264));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 268));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 272));
            r10 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 276));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 280));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 284));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 288));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 292));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 296));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 300));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 304));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 308));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 312), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 312), r17);
    r27 = MemoryInline::FlatRead32(r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 316), r12);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 320), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 324), r10);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 328), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 332), r8);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 336), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 340), r6);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 344), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 348), r4);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 352), r3);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 356), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r27 + 2240));
    r17 = r3;
}

loc_804ECFE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ECFEC;
    }
}

loc_804ECFE4:
{
    r25 = -2;
    goto loc_804ECFFC;
}

loc_804ECFEC:
{
    r18 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x804D12F0
    r25 = MemoryInline::FlatRead32((r18 + 2236));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl9_0x804D1330:
{
}

loc_inl9_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x804D1344;
    }
}

loc_inl9_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl9_0x804D1348;
}

loc_inl9_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl9_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_12 & 1);
}

loc_inl9_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ECFFC:
{
    r3 = r17;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl10_0x804D1330:
{
}

loc_inl10_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x804D1344;
    }
}

loc_inl10_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl10_0x804D1348;
}

loc_inl10_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl10_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_14 & 1);
}

loc_inl10_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED008:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_804ED078;
    }
}

loc_804ED00C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 312), 0, 48u, true, false);
    r19 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 312));
    r3 = r20;
    r18 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 316));
    r4 = (r1 + 360);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 320));
            r12 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 324));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 328));
            r10 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 332));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 336));
            r8 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 340));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 344));
            r6 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 348));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 352));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 356));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 360), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 360), r19);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 364), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 368), r17);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 372), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 376), r11);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 380), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 384), r9);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 388), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 392), r7);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 396), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 400), r5);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 404), r0);
    }
    ctx->lr = 0x804ED078u;
    if constexpr (KnownRegArgsCpuCall<0x804EBE80u>(&func_804EBE80)) {
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
        const auto regargs_result_804EBE80_ED8C = func_804EBE80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EBE80_ED8C);
        r4 = static_cast<uint32_t>(regargs_result_804EBE80_ED8C >> 32);
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
        InvokeDirectCpu<0x804EBE80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED078:
{
}

loc_804ED07C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(-2))) {
        goto loc_804ED128;
    }
}

loc_804ED080:
{
    ctx->lr = 0x804ED084u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_F67D = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_F67D);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_F67D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = MemoryInline::FlatRead32((r27 + 2316));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r28 + 248));
    r4_subfc_min_2 = r4;
    r4 = (r4_subfc_min_2 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_2) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r7 = MemoryInline::FlatRead32((r27 + 2312));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 1073741823);
    r3_subfe_rb_2 = r3;
    r3_not_2 = ~(r7);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r3_subfe_rb_2);
    r3 = (r3 + r3_ca_2);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_FD73 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_FD73);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_FD73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED0A8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(1))) {
        goto loc_804ED128;
    }
}

loc_804ED0AC:
{
    r0 = MemoryInline::FlatRead8((r13 + -14122));
}

loc_804ED0B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED128;
    }
}

loc_804ED0B8:
{
    ctx->lr = 0x804ED0BCu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_10481 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_10481);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_10481 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r27 + 2316), r4);
    MemoryInline::FlatWrite32((r27 + 2312), r3);
    r17 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x804D12F0
    r17 = MemoryInline::FlatRead32((r17 + 2236));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl12_0x804D1330:
{
}

loc_inl12_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl12_0x804D1344;
    }
}

loc_inl12_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl12_0x804D1348;
}

loc_inl12_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl12_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_16 & 1);
}

loc_inl12_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED0D8:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(-1))) {
        goto loc_804ED128;
    }
}

loc_804ED0DC:
{
    r17 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_17 & 1);
    // end of inlined leaf 0x804D12F0
    r17 = MemoryInline::FlatRead8((r17 + 2243));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl14_0x804D1330:
{
}

loc_inl14_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x804D1344;
    }
}

loc_inl14_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl14_0x804D1348;
}

loc_inl14_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl14_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_18 & 1);
}

loc_inl14_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r17;
    ctx->lr = 0x804ED0F4u;
    if constexpr (KnownRegArgsCpuCall<0x80500490u>(&func_80500490)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80500490_111B3 = func_80500490_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80500490_111B3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80500490u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804ED0F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804ED110;
    }
}

loc_804ED0FC:
{
    r4 = r3;
    r3 = (r1 + 16);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804ED120;
}

loc_804ED110:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804ED120:
{
    r3 = (r1 + 16);
    ctx->lr = 0x804ED128u;
    if constexpr (KnownRegArgsCpuCall<0x80482B78u>(&func_80482B78)) {
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
        const auto regargs_result_80482B78_11888 = func_80482B78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80482B78_11888);
        r4 = static_cast<uint32_t>(regargs_result_80482B78_11888 >> 32);
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
        InvokeDirectCpu<0x80482B78u>(ctx);
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

loc_804ED128:
{
}

loc_804ED12C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_804ED1D0;
    }
}

loc_804ED130:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_20 & 1);
    // end of inlined leaf 0x804D12F0
    r27 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_21 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r24 + 1516));
    r0 = MemoryInline::FlatRead8((r24 + 1517));
    r0 = (r0 - r4);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_804ED15C;
    }
}

loc_804ED150:
{
    r0 = MemoryInline::FlatRead32((r24 + 1524));
    r0 = (r17 + r0);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804ED15C:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl17_0x804D1330:
{
}

loc_inl17_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl17_0x804D1344;
    }
}

loc_inl17_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl17_0x804D1348;
}

loc_inl17_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl17_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_22 & 1);
}

loc_inl17_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED164:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804ED174;
    }
}

loc_804ED168:
{
    r3 = r27;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl18_0x804D1330:
{
}

loc_inl18_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl18_0x804D1344;
    }
}

loc_inl18_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl18_0x804D1348;
}

loc_inl18_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl18_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_23 & 1);
}

loc_inl18_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804ED1C8;
}

loc_804ED174:
{
    r0 = MemoryInline::FlatRead8((r24 + 1516));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r24 + 1520));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r24 + 1516));
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r24 + 1524));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r24 + 1516), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl19_0x804D1330:
{
}

loc_inl19_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl19_0x804D1344;
    }
}

loc_inl19_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl19_0x804D1348;
}

loc_inl19_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl19_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_24 & 1);
}

loc_inl19_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED1C8:
{
    r26 = 1;
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r29));
}

loc_804ED1D0:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_804ED1D8:
{
    r0 = (r3 + 1);
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_804ED1E4;
    }
}

loc_804ED1E0:
{
    r0 = r3;
}

loc_804ED1E4:
{
}

loc_804ED1E8:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r0));
    r25 = MemoryInline::FlatRead32(r23);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_804ED1FC;
    }
}

loc_804ED1F4:
{
    r0 = 1;
    goto loc_804ED4D8;
}

loc_804ED1FC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_27 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r25 + 352));
    r0 = MemoryInline::FlatRead8((r25 + 353));
    r0 = (r0 - r4);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_804ED220;
    }
}

loc_804ED214:
{
    r0 = MemoryInline::FlatRead32((r25 + 360));
    r0 = (r17 + r0);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804ED220:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl21_0x804D1330:
{
}

loc_inl21_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl21_0x804D1344;
    }
}

loc_inl21_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl21_0x804D1348;
}

loc_inl21_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl21_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_28 & 1);
}

loc_inl21_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED228:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804ED234;
    }
}

loc_804ED22C:
{
    r0 = 0;
    goto loc_804ED268;
}

loc_804ED234:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_29 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r25 + 352));
    r17 = r3;
    r4 = MemoryInline::FlatRead32((r25 + 356));
    r3 = (r1 + 120);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 48;
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r17;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl23_0x804D1330:
{
}

loc_inl23_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl23_0x804D1344;
    }
}

loc_inl23_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl23_0x804D1348;
}

loc_inl23_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl23_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_30 & 1);
}

loc_inl23_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = 1;
}

loc_804ED268:
{
}

loc_804ED26C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED4D4;
    }
}

loc_804ED270:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 120));
            r12 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 128));
            r10 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 136));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 144));
            r6 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 152));
            r4 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 156));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 160));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 164));
        }
    }
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 168), r17);
    r27 = MemoryInline::FlatRead32(r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 172), r12);
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 176), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 180), r10);
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 184), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r1 + 188), r8);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 192), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 196), r6);
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 200), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r1 + 204), r4);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r1 + 208), r3);
    }
    MemoryInline::WriteResolved32(guest_range_7, 44u, (r1 + 212), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_32 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r27 + 2240));
    r17 = r3;
}

loc_804ED2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED2F0;
    }
}

loc_804ED2E8:
{
    r24 = -2;
    goto loc_804ED300;
}

loc_804ED2F0:
{
    r18 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_33 & 1);
    // end of inlined leaf 0x804D12F0
    r24 = MemoryInline::FlatRead32((r18 + 2236));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl26_0x804D1330:
{
}

loc_inl26_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl26_0x804D1344;
    }
}

loc_inl26_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl26_0x804D1348;
}

loc_inl26_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl26_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_34 & 1);
}

loc_inl26_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED300:
{
    r3 = r17;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl27_0x804D1330:
{
}

loc_inl27_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl27_0x804D1344;
    }
}

loc_inl27_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl27_0x804D1348;
}

loc_inl27_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl27_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_36 & 1);
}

loc_inl27_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED30C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_804ED37C;
    }
}

loc_804ED310:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 48u, true, false);
    r17 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r1 + 168));
    r3 = r20;
    r18 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r1 + 172));
    r4 = (r1 + 216);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r1 + 176));
            r12 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r1 + 184));
            r10 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r1 + 188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r1 + 192));
            r8 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r1 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 200));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r1 + 204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r1 + 208));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r1 + 212));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 216), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 216), r17);
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 220), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 224), r19);
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 228), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 232), r11);
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 236), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 240), r9);
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 244), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 248), r7);
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r1 + 252), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r1 + 256), r5);
        MemoryInline::WriteResolved32(guest_range_9, 44u, (r1 + 260), r0);
    }
    ctx->lr = 0x804ED37Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EBE80u>(&func_804EBE80)) {
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
        const auto regargs_result_804EBE80_16C1B = func_804EBE80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EBE80_16C1B);
        r4 = static_cast<uint32_t>(regargs_result_804EBE80_16C1B >> 32);
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
        InvokeDirectCpu<0x804EBE80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED37C:
{
}

loc_804ED380:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(-2))) {
        goto loc_804ED42C;
    }
}

loc_804ED384:
{
    ctx->lr = 0x804ED388u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1750F = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1750F);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1750F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = MemoryInline::FlatRead32((r27 + 2316));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r28 + 248));
    r4_subfc_min_5 = r4;
    r4 = (r4_subfc_min_5 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_5) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r7 = MemoryInline::FlatRead32((r27 + 2312));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_5 & 1073741823);
    r3_subfe_rb_5 = r3;
    r3_not_5 = ~(r7);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r3_subfe_rb_5);
    r3 = (r3 + r3_ca_5);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_17C08 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_17C08);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_17C08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED3AC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(1))) {
        goto loc_804ED42C;
    }
}

loc_804ED3B0:
{
    r0 = MemoryInline::FlatRead8((r13 + -14122));
}

loc_804ED3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED42C;
    }
}

loc_804ED3BC:
{
    ctx->lr = 0x804ED3C0u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_18319 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_18319);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_18319 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r27 + 2316), r4);
    MemoryInline::FlatWrite32((r27 + 2312), r3);
    r17 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_37 & 1);
    // end of inlined leaf 0x804D12F0
    r17 = MemoryInline::FlatRead32((r17 + 2236));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl29_0x804D1330:
{
}

loc_inl29_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl29_0x804D1344;
    }
}

loc_inl29_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl29_0x804D1348;
}

loc_inl29_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl29_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_38 & 1);
}

loc_inl29_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED3DC:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(-1))) {
        goto loc_804ED42C;
    }
}

loc_804ED3E0:
{
    r17 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_39 & 1);
    // end of inlined leaf 0x804D12F0
    r17 = MemoryInline::FlatRead8((r17 + 2243));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl31_0x804D1330:
{
}

loc_inl31_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl31_0x804D1344;
    }
}

loc_inl31_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl31_0x804D1348;
}

loc_inl31_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl31_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_40 & 1);
}

loc_inl31_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r17;
    ctx->lr = 0x804ED3F8u;
    if constexpr (KnownRegArgsCpuCall<0x80500490u>(&func_80500490)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80500490_1904B = func_80500490_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80500490_1904B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80500490u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804ED3FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804ED414;
    }
}

loc_804ED400:
{
    r4 = r3;
    r3 = (r1 + 8);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804ED424;
}

loc_804ED414:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804ED424:
{
    r3 = (r1 + 8);
    ctx->lr = 0x804ED42Cu;
    if constexpr (KnownRegArgsCpuCall<0x80482B78u>(&func_80482B78)) {
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
        const auto regargs_result_80482B78_1971D = func_80482B78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80482B78_1971D);
        r4 = static_cast<uint32_t>(regargs_result_80482B78_1971D >> 32);
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
        InvokeDirectCpu<0x80482B78u>(ctx);
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

loc_804ED42C:
{
}

loc_804ED430:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_804ED4D4;
    }
}

loc_804ED434:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_42 & 1);
    // end of inlined leaf 0x804D12F0
    r27 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_43 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r25 + 352));
    r0 = MemoryInline::FlatRead8((r25 + 353));
    r0 = (r0 - r4);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_804ED460;
    }
}

loc_804ED454:
{
    r0 = MemoryInline::FlatRead32((r25 + 360));
    r0 = (r17 + r0);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804ED460:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl34_0x804D1330:
{
}

loc_inl34_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl34_0x804D1344;
    }
}

loc_inl34_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl34_0x804D1348;
}

loc_inl34_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl34_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_44 & 1);
}

loc_inl34_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED468:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804ED478;
    }
}

loc_804ED46C:
{
    r3 = r27;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl35_0x804D1330:
{
}

loc_inl35_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl35_0x804D1344;
    }
}

loc_inl35_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl35_0x804D1348;
}

loc_inl35_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl35_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_45 & 1);
}

loc_inl35_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804ED4CC;
}

loc_804ED478:
{
    r0 = MemoryInline::FlatRead8((r25 + 352));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r25 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r25 + 352));
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r25 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r25 + 352), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl36_0x804D1330:
{
}

loc_inl36_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl36_0x804D1344;
    }
}

loc_inl36_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl36_0x804D1348;
}

loc_inl36_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl36_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_46 & 1);
}

loc_inl36_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED4CC:
{
    r0 = 1;
    goto loc_804ED4D8;
}

loc_804ED4D4:
{
    r0 = 0;
}

loc_804ED4D8:
{
    r0 = (r26 | r0);
}

loc_804ED4E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804ED518;
    }
}

loc_804ED4E4:
{
    r24 = MemoryInline::FlatRead32(r23);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_50 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r24 + 352));
    r0 = MemoryInline::FlatRead8((r24 + 353));
    r0 = (r0 - r4);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_804ED50C;
    }
}

loc_804ED500:
{
    r0 = MemoryInline::FlatRead32((r24 + 360));
    r0 = (r17 + r0);
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804ED50C:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl38_0x804D1330:
{
}

loc_inl38_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl38_0x804D1344;
    }
}

loc_inl38_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl38_0x804D1348;
}

loc_inl38_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl38_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_51 & 1);
}

loc_inl38_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804ED514:
{
    if ((static_cast<int32_t>(r17) <= static_cast<int32_t>(0))) {
        goto loc_804ED524;
    }
}

loc_804ED518:
{
    r3 = MemoryInline::FlatRead32(r23);
    MemoryInline::FlatWrite32((r3 + 2256), r29);
    goto loc_804ED5AC;
}

loc_804ED524:
{
    r0 = MemoryInline::FlatRead8(r21);
}

loc_804ED52C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_804ED5AC;
    }
}

loc_804ED530:
{
    r5 = MemoryInline::FlatRead32(r23);
    r3 = r20;
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r31));
    r4 = (r1 + 72);
    r12 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r5 + 2256), r29);
    r11 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r29));
    r10 = MemoryInline::FlatRead32((r1 + 40));
    r24 = MemoryInline::FlatRead32((r1 + 28));
    r9 = MemoryInline::FlatRead32((r1 + 44));
    r8 = MemoryInline::FlatRead32((r1 + 48));
    r7 = MemoryInline::FlatRead32((r1 + 52));
    r6 = MemoryInline::FlatRead32((r1 + 56));
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 76), r24);
    MemoryInline::FlatWriteRam32((r1 + 80), r12);
    MemoryInline::FlatWriteRam32((r1 + 84), r11);
    MemoryInline::FlatWriteRam32((r1 + 88), r10);
    MemoryInline::FlatWriteRam32((r1 + 92), r9);
    MemoryInline::FlatWriteRam32((r1 + 96), r8);
    MemoryInline::FlatWriteRam32((r1 + 100), r7);
    MemoryInline::FlatWriteRam32((r1 + 104), r6);
    MemoryInline::FlatWriteRam32((r1 + 108), r5);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    MemoryInline::FlatWriteRam32((r1 + 116), r29);
    ctx->lr = 0x804ED5ACu;
    if constexpr (KnownRegArgsCpuCall<0x804EBE80u>(&func_804EBE80)) {
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
        const auto regargs_result_804EBE80_1BEF9 = func_804EBE80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EBE80_1BEF9);
        r4 = static_cast<uint32_t>(regargs_result_804EBE80_1BEF9 >> 32);
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
        InvokeDirectCpu<0x804EBE80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED5AC:
{
    r3 = MemoryInline::FlatRead32(r23);
    r0 = MemoryInline::FlatRead32((r3 + 2256));
}

loc_804ED5B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED5C8;
    }
}

loc_804ED5BC:
{
    r3 = MemoryInline::FlatRead8(r21);
    r0 = (r3 + 1);
    goto loc_804ED5CC;
}

loc_804ED5C8:
{
    r0 = 0;
}

loc_804ED5CC:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r0));
    r3 = r20;
    ctx->lr = 0x804ED5D8u;
    if constexpr (KnownRegArgsCpuCall<0x804ECB30u>(&func_804ECB30)) {
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
        const auto regargs_result_804ECB30_1C9AE = func_804ECB30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804ECB30_1C9AE);
        r4 = static_cast<uint32_t>(regargs_result_804ECB30_1C9AE >> 32);
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
        InvokeDirectCpu<0x804ECB30u>(ctx);
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
    r3 = r20;
    if constexpr (KnownRegArgsCpuCall<0x804EC060u>(&func_804EC060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804EC060_1D2C1 = func_804EC060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EC060_1D2C1);
        r4 = static_cast<uint32_t>(regargs_result_804EC060_1D2C1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804EC060u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED5E0:
{
    r4 = MemoryInline::FlatRead32(r23);
    r0 = MemoryInline::FlatRead8((r4 + 2449));
}

loc_804ED5EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804ED60C;
    }
}

loc_804ED5F0:
{
    r3 = MemoryInline::FlatRead16((r4 + 2450));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_804ED5F8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 2450), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804ED60C;
    }
}

loc_804ED604:
{
    r3 = MemoryInline::FlatRead32(r23);
    MemoryInline::FlatWrite8((r3 + 2449), static_cast<uint8_t>(r29));
}

loc_804ED60C:
{
    r20 = (r20 + 1);
    r22 = (r22 + 1);
}

loc_804ED618:
{
    r21 = (r21 + 1);
    r23 = (r23 + 4);
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(4))) {
        goto loc_804ECEC0;
    }
}

loc_804ED624:
{
    r5 = MemoryInline::FlatRead16((r13 + -14198));
    r3 = 65536;
    r0 = (r3 + -5536);
    r8 = MemoryInline::FlatRead8((r13 + -14196));
    r4 = (r5 + -10);
    r3 = (10 - r5);
    r3 = ~(r4 | r3);
    r9 = MemoryInline::FlatRead16((r13 + -14194));
    r7 = (static_cast<int32_t>(r3) >> 31);
    r6 = (r5 + 1);
    r0 = (r0 & 65535);
    r4 = (r8 + -5);
    r3 = (5 - r8);
    r6 = (r6 & ~r7);
    r4 = ~(r4 | r3);
    MemoryInline::FlatWrite16((r13 + -14198), static_cast<uint16_t>(r6));
    r3 = (r9 - r0);
    r0 = (r0 - r9);
    r5 = (static_cast<int32_t>(r4) >> 31);
    r4 = (r8 + 1);
    r3 = ~(r3 | r0);
    r0 = (r9 + 1);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r4 = (r4 & ~r5);
    r0 = (r0 & ~r3);
    MemoryInline::FlatWrite8((r13 + -14196), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r13 + -14194), static_cast<uint16_t>(r0));
    ctx->lr = 0x804ED694u;
    if constexpr (KnownRegArgsCpuCall<0x804807BCu>(&func_804807BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804807BC_1DE9F = func_804807BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804807BC_1DE9F);
        r4 = static_cast<uint32_t>(regargs_result_804807BC_1DE9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804807BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804ED694:
{
    r11 = (r1 + 480);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryInline::FlatRead32((r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
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
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804ECCD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804ECCD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0001FFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804ECCD0 func_804ECCD0 preserves=true fpr_mask=0x00000000
