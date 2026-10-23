#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80377174(CpuContext* ctx);
extern "C" uint64_t func_80377174_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803784C8(CpuContext* ctx);
extern "C" uint64_t func_803784C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DFD90(CpuContext* ctx);
extern "C" uint64_t func_803DFD90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E28F4(CpuContext* ctx);
extern "C" uint64_t func_803E28F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80424920(CpuContext* ctx);
extern "C" uint64_t func_80424920_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80425ADC(CpuContext* ctx);
extern "C" uint64_t func_80425ADC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80425BE4(CpuContext* ctx);
extern "C" uint64_t func_80425BE4_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8042729C(CpuContext* ctx);
extern "C" uint64_t func_8042729C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80427334(CpuContext* ctx);
extern "C" uint64_t func_80427334_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804274B8(CpuContext* ctx);
extern "C" uint64_t func_804274B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80428658(CpuContext* ctx);
extern "C" uint64_t func_80428658_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804286C0(CpuContext* ctx);
extern "C" uint64_t func_804286C0_rae0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80428700(CpuContext* ctx);
extern "C" uint64_t func_80428700_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804287F0(CpuContext* ctx);
extern "C" uint64_t func_804287F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804289CC(CpuContext* ctx);
extern "C" uint64_t func_804289CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042C9CC(CpuContext* ctx);
extern "C" uint64_t func_8042C9CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042CC54(CpuContext* ctx);
extern "C" uint64_t func_8042CC54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042DFC8(CpuContext* ctx);
extern "C" uint64_t func_8042DFC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80453864(CpuContext* ctx);
extern "C" uint64_t func_80453864_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80425C24_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_100 = 0;
    uint32_t r0_rot_101 = 0;
    uint32_t r0_rot_102 = 0;
    uint32_t r0_rot_103 = 0;
    uint32_t r0_rot_104 = 0;
    uint32_t r0_rot_105 = 0;
    uint32_t r0_rot_106 = 0;
    uint32_t r0_rot_107 = 0;
    uint32_t r0_rot_108 = 0;
    uint32_t r0_rot_109 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_110 = 0;
    uint32_t r0_rot_111 = 0;
    uint32_t r0_rot_112 = 0;
    uint32_t r0_rot_113 = 0;
    uint32_t r0_rot_114 = 0;
    uint32_t r0_rot_115 = 0;
    uint32_t r0_rot_116 = 0;
    uint32_t r0_rot_117 = 0;
    uint32_t r0_rot_118 = 0;
    uint32_t r0_rot_119 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_120 = 0;
    uint32_t r0_rot_121 = 0;
    uint32_t r0_rot_122 = 0;
    uint32_t r0_rot_123 = 0;
    uint32_t r0_rot_124 = 0;
    uint32_t r0_rot_125 = 0;
    uint32_t r0_rot_126 = 0;
    uint32_t r0_rot_127 = 0;
    uint32_t r0_rot_128 = 0;
    uint32_t r0_rot_129 = 0;
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
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_60 = 0;
    uint32_t r0_rot_61 = 0;
    uint32_t r0_rot_62 = 0;
    uint32_t r0_rot_63 = 0;
    uint32_t r0_rot_64 = 0;
    uint32_t r0_rot_65 = 0;
    uint32_t r0_rot_66 = 0;
    uint32_t r0_rot_67 = 0;
    uint32_t r0_rot_68 = 0;
    uint32_t r0_rot_69 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_70 = 0;
    uint32_t r0_rot_71 = 0;
    uint32_t r0_rot_72 = 0;
    uint32_t r0_rot_73 = 0;
    uint32_t r0_rot_74 = 0;
    uint32_t r0_rot_75 = 0;
    uint32_t r0_rot_76 = 0;
    uint32_t r0_rot_77 = 0;
    uint32_t r0_rot_78 = 0;
    uint32_t r0_rot_79 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_80 = 0;
    uint32_t r0_rot_81 = 0;
    uint32_t r0_rot_82 = 0;
    uint32_t r0_rot_83 = 0;
    uint32_t r0_rot_84 = 0;
    uint32_t r0_rot_85 = 0;
    uint32_t r0_rot_86 = 0;
    uint32_t r0_rot_87 = 0;
    uint32_t r0_rot_88 = 0;
    uint32_t r0_rot_89 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_rot_90 = 0;
    uint32_t r0_rot_91 = 0;
    uint32_t r0_rot_92 = 0;
    uint32_t r0_rot_93 = 0;
    uint32_t r0_rot_94 = 0;
    uint32_t r0_rot_95 = 0;
    uint32_t r0_rot_96 = 0;
    uint32_t r0_rot_97 = 0;
    uint32_t r0_rot_98 = 0;
    uint32_t r0_rot_99 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
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
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80425C24;

loc_80425C24:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r30 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x804360A0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27968);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x804360A0
}

loc_80425C44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8042718C;
    }
}

loc_80425C48:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80425C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042718C;
    }
}

loc_80425C54:
{
    // inline leaf 0x803758A0 (7 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x803758A0
}

loc_80425C5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042718C;
    }
}

loc_80425C60:
{
    r19 = 0;
    r17 = r30;
    r18 = (r30 + 31126);
    r16 = 2;
    r15 = 1;
    r14 = 3;
}

loc_80425C78:
{
    r0 = MemoryInline::FlatRead8((r17 + 31126));
}

loc_80425C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80425CFC;
    }
}

loc_80425C84:
{
    r28 = MemoryInline::FlatRead8((r17 + 31128));
    r0 = MemoryInline::FlatRead8((r17 + 31127));
}

loc_80425C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80425CA0;
    }
}

loc_80425C94:
{
}

loc_80425C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80425CC8;
    }
}

loc_80425C9C:
{
    goto loc_80425CEC;
}

loc_80425CA0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r16));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r15));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r28));
    r0 = (r28 * 288);
    r3 = (r30 + r0);
    r0 = (r3 + 29832);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = (r1 + 8);
    ctx->lr = 0x80425CC4u;
    if constexpr (KnownRegArgsCpuCall<0x803784C8u>(&func_803784C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        const auto regargs_result_803784C8_3562 = func_803784C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803784C8_3562);
        r4 = static_cast<uint32_t>(regargs_result_803784C8_3562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803784C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80425CEC;
}

loc_80425CC8:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r15));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r28));
    r0 = (r28 * 288);
    r3 = (r30 + r0);
    r0 = (r3 + 29832);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = (r1 + 8);
    ctx->lr = 0x80425CECu;
    if constexpr (KnownRegArgsCpuCall<0x803784C8u>(&func_803784C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        const auto regargs_result_803784C8_4614 = func_803784C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803784C8_4614);
        r4 = static_cast<uint32_t>(regargs_result_803784C8_4614 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803784C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80425CEC:
{
    r3 = r18;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80425CFC:
{
    r17 = (r17 + 4);
    r18 = (r18 + 4);
    r19 = (r19 + 1);
}

loc_80425D0C:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(64))) {
        goto loc_80425C78;
    }
}

loc_80425D10:
{
    r4 = (r30 + 31960);
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80425D20:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80425D28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D2C:
{
    r0 = MemoryInline::FlatRead8((r4 + 92));
}

loc_80425D34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D38:
{
    r0 = MemoryInline::FlatRead8((r4 + 184));
}

loc_80425D40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D44:
{
    r0 = MemoryInline::FlatRead8((r4 + 276));
}

loc_80425D4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D50:
{
    r0 = MemoryInline::FlatRead8((r4 + 368));
}

loc_80425D58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 460));
}

loc_80425D64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D68:
{
    r0 = MemoryInline::FlatRead8((r4 + 552));
}

loc_80425D70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D74:
{
    r0 = MemoryInline::FlatRead8((r4 + 644));
}

loc_80425D7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80425EB8;
    }
}

loc_80425D80:
{
    r3 = (r3 + 7);
    r4 = (r4 + 736);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80425D20;
    }
}

loc_80425D8C:
{
    r16 = (r30 + 31960);
    r15 = 0;
    r14 = 0;
}

loc_80425D98:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_80425DA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80425EA8;
    }
}

loc_80425DA4:
{
    r0 = MemoryInline::FlatRead8((r16 + 2));
}

loc_80425DAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80425DEC;
    }
}

loc_80425DB0:
{
    r28 = 15;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 25216), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl4_0x8041A5E4:
{
}

loc_inl4_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8041A5FC;
    }
}

loc_inl4_0x8041A5EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl4_cont_8041A5E4;
}

loc_inl4_0x8041A5FC:
{
    r3 = 0;
}

loc_inl4_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r16 + 4);
    r5 = MemoryInline::FlatRead32((r16 + 76));
    r6 = 2;
    r7 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80425DE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80425E9C;
}

loc_80425DEC:
{
}

loc_80425DF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80425E2C;
    }
}

loc_80425DF4:
{
    r28 = 18;
    r3 = 18;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl7_0x8041A358:
{
}

loc_inl7_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8041A36C;
    }
}

loc_inl7_0x8041A360:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_inl7_cont_8041A358;
}

loc_inl7_0x8041A36C:
{
    r3 = 0;
}

loc_inl7_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (r16 + 4);
    r5 = MemoryInline::FlatRead32((r16 + 76));
    r6 = -1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x80425E28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80425E9C;
}

loc_80425E2C:
{
    r0 = MemoryInline::FlatRead8((r16 + 80));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80425E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80425E94;
    }
}

loc_80425E3C:
{
    r3 = (r16 + 80);
    ctx->lr = 0x80425E44u;
    if constexpr (KnownRegArgsCpuCall<0x8042729Cu>(&func_8042729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        const auto regargs_result_8042729C_7236 = func_8042729C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042729C_7236);
        r4 = static_cast<uint32_t>(regargs_result_8042729C_7236 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r17 = r3;
}

loc_80425E4C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80425E8C;
    }
}

loc_80425E50:
{
    r28 = 15;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 25216), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl9_0x8041A5E4:
{
}

loc_inl9_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x8041A5FC;
    }
}

loc_inl9_0x8041A5EC:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl9_cont_8041A5E4;
}

loc_inl9_0x8041A5FC:
{
    r3 = 0;
}

loc_inl9_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r16 + 4);
    r5 = MemoryInline::FlatRead32((r16 + 76));
    r6 = 1;
    r7 = r17;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80425E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80425E9C;
}

loc_80425E8C:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r14));
    goto loc_80425EA8;
}

loc_80425E94:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r14));
    goto loc_80425EA8;
}

loc_80425E9C:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    goto loc_80425EB8;
}

loc_80425EA8:
{
    r15 = (r15 + 1);
    r16 = (r16 + 92);
}

loc_80425EB4:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(16))) {
        goto loc_80425D98;
    }
}

loc_80425EB8:
{
    r15 = 0;
    r14 = r30;
}

loc_80425EC0:
{
    r3 = (r30 + r15);
    r0 = MemoryInline::FlatRead8((r3 + 31896));
}

loc_80425ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80425EE0;
    }
}

loc_80425ED0:
{
    r3 = MemoryInline::FlatRead32((r14 + 31384));
    ctx->lr = 0x80425ED8u;
    if constexpr (KnownRegArgsCpuCall<0x803784C8u>(&func_803784C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        const auto regargs_result_803784C8_8D27 = func_803784C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803784C8_8D27);
        r4 = static_cast<uint32_t>(regargs_result_803784C8_8D27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803784C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r14 + 31384));
    if constexpr (KnownRegArgsCpuCall<0x80424920u>(&func_80424920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80424920_9A75 = func_80424920_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80424920_9A75);
        r4 = static_cast<uint32_t>(regargs_result_80424920_9A75 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80424920u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80425EE0:
{
    r14 = (r14 + 4);
    r15 = (r15 + 1);
}

loc_80425EEC:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(64))) {
        goto loc_80425EC0;
    }
}

loc_80425EF0:
{
    r29 = (r30 + 25384);
    r31 = 0;
    r19 = 0;
    r20 = 2;
    r22 = 1;
    r21 = -1;
    r23 = -2;
    r24 = -3;
    r25 = -4;
    r27 = 3;
    r14 = 5;
    r26 = 4;
    r18 = 0x80600000u;
    goto loc_8042717C;
}

loc_80425F28:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80425F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80427174;
    }
}

loc_80425F34:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80425F3C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(24))) {
        goto loc_80427174;
    }
}

loc_80425F40:
{
    r3 = (r18 + 16564);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80427174u:
        goto loc_80427174;
        break;
    case 0x80425F54u:
        goto loc_80425F54;
        break;
    case 0x8042603Cu:
        goto loc_8042603C;
        break;
    case 0x804260C0u:
        goto loc_804260C0;
        break;
    case 0x80426178u:
        goto loc_80426178;
        break;
    case 0x804263A8u:
        goto loc_804263A8;
        break;
    case 0x804263E0u:
        goto loc_804263E0;
        break;
    case 0x80426418u:
        goto loc_80426418;
        break;
    case 0x8042649Cu:
        goto loc_8042649C;
        break;
    case 0x80426C18u:
        goto loc_80426C18;
        break;
    case 0x80426E4Cu:
        goto loc_80426E4C;
        break;
    case 0x80426E84u:
        goto loc_80426E84;
        break;
    case 0x80426D78u:
        goto loc_80426D78;
        break;
    case 0x8042651Cu:
        goto loc_8042651C;
        break;
    case 0x80426EBCu:
        goto loc_80426EBC;
        break;
    case 0x80426274u:
        goto loc_80426274;
        break;
    case 0x80426F78u:
        goto loc_80426F78;
        break;
    case 0x80427034u:
        goto loc_80427034;
        break;
    case 0x804270D8u:
        goto loc_804270D8;
        break;
    case 0x80426660u:
        goto loc_80426660;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80425F54:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80425F64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80425F94;
    }
}

loc_80425F68:
{
    r28 = 18;
    MemoryInline::FlatWrite32((r30 + 25228), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl11_0x8041A5E4:
{
}

loc_inl11_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x8041A5FC;
    }
}

loc_inl11_0x8041A5EC:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl11_cont_8041A5E4;
}

loc_inl11_0x8041A5FC:
{
    r3 = 0;
}

loc_inl11_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 80;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80425F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_80425F94:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80425F9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80425FA0:
{
    r28 = 18;
    r0 = MemoryInline::FlatRead32((r30 + 25228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80425FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80425FB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80425FC0;
    }
}

loc_80425FB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426030;
}

loc_80425FC0:
{
    r15 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 1632));
    MemoryInline::FlatWrite32(r15, r0);
    r31 = 0;
    r16 = (r30 + 1640);
    r17 = (r15 + 8);
    goto loc_8042601C;
}

loc_80425FDC:
{
    r0 = MemoryInline::FlatRead32(r16);
    MemoryInline::FlatWrite32((r15 + 4), r0);
    r3 = r17;
    r4 = (r16 + 4);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r16 + 40));
    MemoryInline::FlatWrite32((r15 + 40), r0);
    r0 = MemoryInline::FlatRead32((r16 + 44));
    MemoryInline::FlatWrite32((r15 + 44), r0);
    r0 = MemoryInline::FlatRead32((r16 + 48));
    MemoryInline::FlatWrite32((r15 + 48), r0);
    r16 = (r16 + 64);
    r15 = (r15 + 48);
    r17 = (r17 + 48);
    r31 = (r31 + 1);
}

loc_8042601C:
{
    r0 = MemoryInline::FlatRead32((r30 + 1632));
}

loc_80426024:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_80425FDC;
    }
}

loc_80426028:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
}

loc_80426030:
{
    r3 = r29;
    ctx->lr = 0x80426038u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_BD59 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_BD59);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_BD59 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_8042603C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8042604C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426080;
    }
}

loc_80426050:
{
    r15 = MemoryInline::FlatRead32((r29 + 8));
    r28 = 19;
    MemoryInline::FlatWrite32((r30 + 25232), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl13_0x8041A5E4:
{
}

loc_inl13_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl13_0x8041A5FC;
    }
}

loc_inl13_0x8041A5EC:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl13_cont_8041A5E4;
}

loc_inl13_0x8041A5FC:
{
    r3 = 0;
}

loc_inl13_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32(r15);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8042607Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_80426080:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426088:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_8042608C:
{
    r28 = 19;
    r0 = MemoryInline::FlatRead32((r30 + 25232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_8042609C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804260AC;
    }
}

loc_804260A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_804260B4;
}

loc_804260AC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
}

loc_804260B4:
{
    r3 = r29;
    ctx->lr = 0x804260BCu;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_CE68 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_CE68);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_CE68 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_804260C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804260D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804260FC;
    }
}

loc_804260D4:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r28 = 4;
    MemoryInline::FlatWrite32((r30 + 25172), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl15_0x8041A5E4:
{
}

loc_inl15_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl15_0x8041A5FC;
    }
}

loc_inl15_0x8041A5EC:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl15_cont_8041A5E4;
}

loc_inl15_0x8041A5FC:
{
    r3 = 0;
}

loc_inl15_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x804260FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804260FC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426104:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426108:
{
    r28 = 4;
    r0 = MemoryInline::FlatRead32((r30 + 25172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426128;
    }
}

loc_8042611C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_8042616C;
}

loc_80426128:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite32((r30 + 25104), r21);
    MemoryInline::FlatWrite32((r30 + 25108), r21);
    MemoryInline::FlatWrite32((r30 + 25112), r21);
    MemoryInline::FlatWrite32((r30 + 25116), r21);
    r0 = MemoryInline::FlatRead32((r30 + 100));
}

loc_80426148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80426154;
    }
}

loc_8042614C:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16188), static_cast<uint8_t>(r19));
}

loc_80426154:
{
    r0 = MemoryInline::FlatRead32((r30 + 100));
}

loc_8042615C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80426168;
    }
}

loc_80426160:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16124), static_cast<uint8_t>(r19));
}

loc_80426168:
{
    ctx->lr = 0x8042616Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042C9CC_E2AE = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_E2AE);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_E2AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8042616C:
{
    r3 = r29;
    ctx->lr = 0x80426174u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_EAF6 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_EAF6);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_EAF6 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426178:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426188:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804261EC;
    }
}

loc_8042618C:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r28 = 5;
    MemoryInline::FlatWrite32((r30 + 25176), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804261A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804261C8;
    }
}

loc_804261A4:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl17_0x8041A5E4:
{
}

loc_inl17_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl17_0x8041A5FC;
    }
}

loc_inl17_0x8041A5EC:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl17_cont_8041A5E4;
}

loc_inl17_0x8041A5FC:
{
    r3 = 0;
}

loc_inl17_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x804261C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_804261EC;
}

loc_804261C8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl19_0x8041A5E4:
{
}

loc_inl19_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl19_0x8041A5FC;
    }
}

loc_inl19_0x8041A5EC:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl19_cont_8041A5E4;
}

loc_inl19_0x8041A5FC:
{
    r3 = 0;
}

loc_inl19_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x804261E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 16), r19);
}

loc_804261EC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804261F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_804261F8:
{
    r28 = 5;
    r0 = MemoryInline::FlatRead32((r30 + 25176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426208:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426230;
    }
}

loc_8042620C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16124), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite32((r30 + 25104), r21);
    MemoryInline::FlatWrite32((r30 + 25108), r21);
    MemoryInline::FlatWrite32((r30 + 25112), r21);
    MemoryInline::FlatWrite32((r30 + 25116), r21);
    goto loc_80426268;
}

loc_80426230:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl21_0x8041A5E4:
{
}

loc_inl21_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl21_0x8041A5FC;
    }
}

loc_inl21_0x8041A5EC:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl21_cont_8041A5E4;
}

loc_inl21_0x8041A5FC:
{
    r3 = 0;
}

loc_inl21_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + 1344);
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r0 * 124);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_108D4 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_108D4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->lr = 0x80426268u;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042C9CC_10D4D = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_10D4D);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_10D4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80426268:
{
    r3 = r29;
    ctx->lr = 0x80426270u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_11598 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_11598);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_11598 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426274:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426284:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426320;
    }
}

loc_80426288:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r28 = 5;
    MemoryInline::FlatWrite32((r30 + 25176), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8042629C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804262E4;
    }
}

loc_804262A0:
{
    r15 = MemoryInline::FlatRead32((r29 + 16));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl23_0x8041A5E4:
{
}

loc_inl23_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl23_0x8041A5FC;
    }
}

loc_inl23_0x8041A5EC:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl23_cont_8041A5E4;
}

loc_inl23_0x8041A5FC:
{
    r3 = 0;
}

loc_inl23_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = (r15 * 124);
    r16 = (r3 + r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl25_0x8041A5E4:
{
}

loc_inl25_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl25_0x8041A5FC;
    }
}

loc_inl25_0x8041A5EC:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl25_cont_8041A5E4;
}

loc_inl25_0x8041A5FC:
{
    r3 = 0;
}

loc_inl25_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = r15;
    r5 = MemoryInline::FlatRead32((r16 + 1424));
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x804262E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80426320;
}

loc_804262E4:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl27_0x8041A5E4:
{
}

loc_inl27_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl27_0x8041A5FC;
    }
}

loc_inl27_0x8041A5EC:
{
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl27_cont_8041A5E4;
}

loc_inl27_0x8041A5FC:
{
    r3 = 0;
}

loc_inl27_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r15 = r3;
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl29_0x8041A5E4:
{
}

loc_inl29_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl29_0x8041A5FC;
    }
}

loc_inl29_0x8041A5EC:
{
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl29_cont_8041A5E4;
}

loc_inl29_0x8041A5FC:
{
    r3 = 0;
}

loc_inl29_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r15 + 1424));
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8042631Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 16), r19);
}

loc_80426320:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426328:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_8042632C:
{
    r28 = 5;
    r0 = MemoryInline::FlatRead32((r30 + 25176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_8042633C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426364;
    }
}

loc_80426340:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16124), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite32((r30 + 25104), r21);
    MemoryInline::FlatWrite32((r30 + 25108), r21);
    MemoryInline::FlatWrite32((r30 + 25112), r21);
    MemoryInline::FlatWrite32((r30 + 25116), r21);
    goto loc_8042639C;
}

loc_80426364:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl31_0x8041A5E4:
{
}

loc_inl31_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl31_0x8041A5FC;
    }
}

loc_inl31_0x8041A5EC:
{
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl31_cont_8041A5E4;
}

loc_inl31_0x8041A5FC:
{
    r3 = 0;
}

loc_inl31_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + 1344);
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r0 * 124);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_13A25 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_13A25;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->lr = 0x8042639Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042C9CC_13E9E = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_13E9E);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_13E9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8042639C:
{
    r3 = r29;
    ctx->lr = 0x804263A4u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_146E9 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_146E9);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_146E9 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_804263A8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804263B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804263C0;
    }
}

loc_804263BC:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_804263C0:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804263C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_804263CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x804263DCu;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_14E43 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_14E43);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_14E43 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_804263E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804263F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804263F8;
    }
}

loc_804263F4:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_804263F8:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426400:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426404:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80426414u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_1559D = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_1559D);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_1559D >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426418:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r28 = 9;
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8042642C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8042645C;
    }
}

loc_80426430:
{
    r28 = 9;
    MemoryInline::FlatWrite32((r30 + 25192), r19);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl33_0x8041A5E4:
{
}

loc_inl33_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl33_0x8041A5FC;
    }
}

loc_inl33_0x8041A5EC:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl33_cont_8041A5E4;
}

loc_inl33_0x8041A5FC:
{
    r3 = 0;
}

loc_inl33_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 40;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x8042645Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8042645C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426464:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426468:
{
    r28 = 9;
    r0 = MemoryInline::FlatRead32((r30 + 25192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426478:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426488;
    }
}

loc_8042647C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426490;
}

loc_80426488:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
}

loc_80426490:
{
    r3 = r29;
    ctx->lr = 0x80426498u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_16670 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_16670);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_16670 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_8042649C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804264AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804264DC;
    }
}

loc_804264B0:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r28 = 10;
    MemoryInline::FlatWrite32((r30 + 25196), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl35_0x8041A5E4:
{
}

loc_inl35_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl35_0x8041A5FC;
    }
}

loc_inl35_0x8041A5EC:
{
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_44 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl35_cont_8041A5E4;
}

loc_inl35_0x8041A5FC:
{
    r3 = 0;
}

loc_inl35_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 40;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x804264DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804264DC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804264E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_804264E8:
{
    r28 = 10;
    r0 = MemoryInline::FlatRead32((r30 + 25196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804264F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_804264F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426508;
    }
}

loc_804264FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426510;
}

loc_80426508:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
}

loc_80426510:
{
    r3 = r29;
    ctx->lr = 0x80426518u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_17737 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_17737);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_17737 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_8042651C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8042652C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804265BC;
    }
}

loc_80426530:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8042653C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80426568;
    }
}

loc_80426540:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl37_0x8041A5E4:
{
}

loc_inl37_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl37_0x8041A5FC;
    }
}

loc_inl37_0x8041A5EC:
{
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_47 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl37_cont_8041A5E4;
}

loc_inl37_0x8041A5FC:
{
    r3 = 0;
}

loc_inl37_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = (r30 + 24908);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 200));
    ctr = r12;
    ctx->lr = 0x80426564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8042658C;
}

loc_80426568:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl39_0x8041A5E4:
{
}

loc_inl39_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl39_0x8041A5FC;
    }
}

loc_inl39_0x8041A5EC:
{
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_49 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl39_cont_8041A5E4;
}

loc_inl39_0x8041A5FC:
{
    r3 = 0;
}

loc_inl39_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 0;
    r5 = (r30 + 24908);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 200));
    ctr = r12;
    ctx->lr = 0x8042658Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8042658C:
{
    r28 = 27;
    MemoryInline::FlatWrite32((r30 + 25264), r19);
    ctx->lr = 0x80426598u;
    if constexpr (KnownRegArgsCpuCall<0x804286C0u>(&func_804286C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804286C0_18D30 = func_804286C0_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804286C0_18D30);
        r4 = static_cast<uint32_t>(regargs_result_804286C0_18D30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804286C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl41_0x8041A5E4:
{
}

loc_inl41_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl41_0x8041A5FC;
    }
}

loc_inl41_0x8041A5EC:
{
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_52 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl41_cont_8041A5E4;
}

loc_inl41_0x8041A5FC:
{
    r3 = 0;
}

loc_inl41_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r30 + 24908);
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x804265BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804265BC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804265C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_804265C8:
{
    r28 = 27;
    r0 = MemoryInline::FlatRead32((r30 + 25264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804265D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_804265D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804265E8;
    }
}

loc_804265DC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426654;
}

loc_804265E8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    r3 = (r30 + 65536);
    r3 = (r3 + -15616);
    r4 = (r30 + 65536);
    r4 = (r4 + -15612);
    r5 = (r30 + 65536);
    r5 = (r5 + -15608);
    r6 = (r30 + 65536);
    r6 = (r6 + -15604);
    ctx->lr = 0x80426614u;
    if constexpr (KnownRegArgsCpuCall<0x80428700u>(&func_80428700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80428700_1A0F8 = func_80428700_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80428700_1A0F8);
        r4 = static_cast<uint32_t>(regargs_result_80428700_1A0F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80428700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x8044E370 (14 guest instruction(s))
}

loc_inl42_0x8044E370:
{
    r5 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -15612));
    r0 = MemoryInline::FlatRead32((r4 + -15600));
}

loc_inl42_0x8044E384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_inl42_0x8044E398;
    }
}

loc_inl42_0x8044E388:
{
    r3 = MemoryInline::FlatRead32((r4 + -15608));
    r0 = MemoryInline::FlatRead32((r4 + -15596));
}

loc_inl42_0x8044E394:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_inl42_return;
    }
}

loc_inl42_0x8044E398:
{
    r0 = 0;
    r3 = (r5 + 65536);
    MemoryInline::FlatWrite32((r3 + -15228), r0);
    goto loc_inl42_cont_8044E370;
}

loc_inl42_return:
{
}

loc_inl42_cont_8044E370:
{
    // end of inlined leaf 0x8044E370
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl44_0x8041A5E4:
{
}

loc_inl44_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl44_0x8041A5FC;
    }
}

loc_inl44_0x8041A5EC:
{
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_55 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl44_cont_8041A5E4;
}

loc_inl44_0x8041A5FC:
{
    r3 = 0;
}

loc_inl44_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + 6308);
    r3 = (r30 + 65536);
    r3 = (r3 + -16188);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r0 * 184);
    r4 = (r4 + r0);
    r4 = (r4 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1B082 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1B082;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16124), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r30 + 104), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r30 + 105), static_cast<uint8_t>(r19));
}

loc_80426654:
{
    r3 = r29;
    ctx->lr = 0x8042665Cu;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_1B5A3 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_1B5A3);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_1B5A3 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426660:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r3 = MemoryInline::FlatRead8(r29);
}

loc_80426670:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804267AC;
    }
}

loc_80426674:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_8042667C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_8042673C;
    }
}

loc_80426680:
{
    // inline leaf 0x8042CED0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 23856);
    r3 = (r3 + 296);
    // end of inlined leaf 0x8042CED0
    r15 = r3;
    // inline leaf 0x8042CD58 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 23856);
    r3 = (r3 + 40);
    // end of inlined leaf 0x8042CD58
    r4 = r3;
}

loc_80426690:
{
    r3 = r15;
    ctx->lr = 0x80426698u;
    if constexpr (KnownRegArgsCpuCall<0x804287F0u>(&func_804287F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804287F0_1BE2A = func_804287F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804287F0_1BE2A);
        r4 = static_cast<uint32_t>(regargs_result_804287F0_1BE2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804287F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8042669C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_804266BC;
    }
}

loc_804266A0:
{
}

loc_804266A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80426700;
    }
}

loc_804266A8:
{
}

loc_804266AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80426714;
    }
}

loc_804266B0:
{
}

loc_804266B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80426728;
    }
}

loc_804266B8:
{
    goto loc_80427174;
}

loc_804266BC:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    r28 = 27;
    MemoryInline::FlatWrite32((r30 + 25264), r19);
    ctx->lr = 0x804266CCu;
    if constexpr (KnownRegArgsCpuCall<0x804286C0u>(&func_804286C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804286C0_1C986 = func_804286C0_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804286C0_1C986);
        r4 = static_cast<uint32_t>(regargs_result_804286C0_1C986 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804286C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl48_0x8041A5E4:
{
}

loc_inl48_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl48_0x8041A5FC;
    }
}

loc_inl48_0x8041A5EC:
{
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_61 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl48_cont_8041A5E4;
}

loc_inl48_0x8041A5FC:
{
    r3 = 0;
}

loc_inl48_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = r15;
    r5 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r5 + -23);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x804266FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80427174;
}

loc_80426700:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r23));
    r3 = r29;
    ctx->lr = 0x80426710u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_1DA57 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_1DA57);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_1DA57 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426714:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r24));
    r3 = r29;
    ctx->lr = 0x80426724u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_1DF74 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_1DF74);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_1DF74 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426728:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r25));
    r3 = r29;
    ctx->lr = 0x80426738u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_1E491 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_1E491);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_1E491 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_8042673C:
{
}

loc_80426740:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80426780;
    }
}

loc_80426744:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    ctx->lr = 0x8042674Cu;
    if constexpr (KnownRegArgsCpuCall<0x80428658u>(&func_80428658)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428658_1E9DD = func_80428658_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80428658_1E9DD);
        r4 = static_cast<uint32_t>(regargs_result_80428658_1E9DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428658u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r15 = r3;
    r28 = 28;
    MemoryInline::FlatWrite32((r30 + 25268), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl50_0x8041A5E4:
{
}

loc_inl50_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl50_0x8041A5FC;
    }
}

loc_inl50_0x8041A5EC:
{
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_58 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl50_cont_8041A5E4;
}

loc_inl50_0x8041A5FC:
{
    r3 = 0;
}

loc_inl50_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = r15;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80426778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r26));
    goto loc_80427174;
}

loc_80426780:
{
}

loc_80426784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_804267AC;
    }
}

loc_80426788:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r30 + 65536);
    MemoryInline::FlatWrite8((r4 + -15375), static_cast<uint8_t>(r19));
    r4 = (r4 + -15375);
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x804267A4u;
    if constexpr (KnownRegArgsCpuCall<0x8042CC54u>(&func_8042CC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042CC54_1F6B7 = func_8042CC54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042CC54_1F6B7);
        r4 = static_cast<uint32_t>(regargs_result_8042CC54_1F6B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042CC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r27));
    goto loc_80427174;
}

loc_804267AC:
{
}

loc_804267B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_80426AE8;
    }
}

loc_804267B4:
{
    r28 = 27;
    r0 = MemoryInline::FlatRead32((r30 + 25264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804267C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_804267C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426844;
    }
}

loc_804267C8:
{
    ctx->lr = 0x804267CCu;
    if constexpr (KnownRegArgsCpuCall<0x804289CCu>(&func_804289CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804289CC_201B9 = func_804289CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804289CC_201B9);
        r4 = static_cast<uint32_t>(regargs_result_804289CC_201B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804289CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804267D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804267E8;
    }
}

loc_804267D4:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r21));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426AE0;
}

loc_804267E8:
{
    r0 = (r3 + -2);
}

loc_804267F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8042680C;
    }
}

loc_804267F4:
{
    r3 = 3;
    ctx->lr = 0x804267FCu;
    if constexpr (KnownRegArgsCpuCall<0x8042DFC8u>(&func_8042DFC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DFC8_20C93 = func_8042DFC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DFC8_20C93);
        r4 = static_cast<uint32_t>(regargs_result_8042DFC8_20C93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042DFC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r21));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r14));
    goto loc_80427174;
}

loc_8042680C:
{
}

loc_80426810:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80426830;
    }
}

loc_80426814:
{
    r3 = 3;
    ctx->lr = 0x8042681Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042DFC8u>(&func_8042DFC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DFC8_21696 = func_8042DFC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DFC8_21696);
        r4 = static_cast<uint32_t>(regargs_result_8042DFC8_21696 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042DFC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r21));
    r0 = 6;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    goto loc_80427174;
}

loc_80426830:
{
    r0 = MemoryInline::FlatRead32((r30 + 25264));
    MemoryInline::FlatWrite32((r30 + 88), r0);
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453864_21FD0 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_21FD0);
        r4 = static_cast<uint32_t>(regargs_result_80453864_21FD0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_80426AE0;
}

loc_80426844:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    r3 = (r30 + 65536);
    r3 = (r3 + -15616);
    r4 = (r30 + 65536);
    r4 = (r4 + -15612);
    r5 = (r30 + 65536);
    r5 = (r5 + -15608);
    r6 = (r30 + 65536);
    r6 = (r6 + -15604);
    ctx->lr = 0x80426870u;
    if constexpr (KnownRegArgsCpuCall<0x80428700u>(&func_80428700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80428700_224B5 = func_80428700_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80428700_224B5);
        r4 = static_cast<uint32_t>(regargs_result_80428700_224B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80428700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->lr = 0x80426874u;
    if constexpr (KnownRegArgsCpuCall<0x80377174u>(&func_80377174)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80377174_22EFB = func_80377174_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377174_22EFB);
        r4 = static_cast<uint32_t>(regargs_result_80377174_22EFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        r28 = ctx->gpr[28];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377174u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        r28 = ctx->gpr[28];
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
        xer = ctx->xer;
    }
    ctx->lr = 0x80426878u;
    if constexpr (KnownRegArgsCpuCall<0x804274B8u>(&func_804274B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804274B8_23CA7 = func_804274B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804274B8_23CA7);
        r4 = static_cast<uint32_t>(regargs_result_804274B8_23CA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804274B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r30 + 104), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r30 + 105), static_cast<uint8_t>(r19));
    r4 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -15616));
}

loc_8042688C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80426914;
    }
}

loc_80426890:
{
    r6 = (r30 + 1632);
    r7 = 0;
    r5 = r6;
    r0 = MemoryInline::FlatRead32(r6);
    ctr = r0;
}

loc_804268A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_804268D0;
    }
}

loc_804268AC:
{
    r3 = MemoryInline::FlatRead32((r4 + -15612));
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_804268B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_804268C4;
    }
}

loc_804268BC:
{
    MemoryInline::FlatWrite32((r4 + -24300), r7);
    goto loc_804268D0;
}

loc_804268C4:
{
    r5 = (r5 + 64);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804268AC;
    }
}

loc_804268D0:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_804268D8:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_8042690C;
    }
}

loc_804268DC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_64 & -4);
    r4 = (r30 + r0);
    MemoryInline::FlatWrite32((r4 + 25156), r21);
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead32((r4 + 25156));
    MemoryInline::FlatWrite32((r30 + 88), r0);
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453864_24839 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_24839);
        r4 = static_cast<uint32_t>(regargs_result_80453864_24839 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_80427174;
}

loc_8042690C:
{
    r3 = 3;
    ctx->lr = 0x80426914u;
    if constexpr (KnownRegArgsCpuCall<0x8042DFC8u>(&func_8042DFC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DFC8_24BF6 = func_8042DFC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DFC8_24BF6);
        r4 = static_cast<uint32_t>(regargs_result_8042DFC8_24BF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042DFC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80426914:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r19));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r3 + -15604));
}

loc_80426930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042693C;
    }
}

loc_80426934:
{
    r4 = 2;
    goto loc_8042694C;
}

loc_8042693C:
{
    r0 = MemoryInline::FlatRead32((r3 + -15608));
}

loc_80426944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042694C;
    }
}

loc_80426948:
{
    r4 = 1;
}

loc_8042694C:
{
    MemoryInline::FlatWrite32((r30 + 25104), r21);
    MemoryInline::FlatWrite32((r30 + 25108), r21);
    MemoryInline::FlatWrite32((r30 + 25112), r21);
    MemoryInline::FlatWrite32((r30 + 25116), r21);
}

loc_80426960:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80426978;
    }
}

loc_80426964:
{
}

loc_80426968:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8042698C;
    }
}

loc_8042696C:
{
}

loc_80426970:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_804269A0;
    }
}

loc_80426974:
{
    goto loc_80426A10;
}

loc_80426978:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite32((r30 + 25152), r22);
    MemoryInline::FlatWrite32((r30 + 100), r19);
    goto loc_80426A10;
}

loc_8042698C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r20));
    MemoryInline::FlatWrite32((r30 + 25152), r20);
    MemoryInline::FlatWrite32((r30 + 100), r22);
    goto loc_80426A10;
}

loc_804269A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite32((r30 + 25152), r27);
    MemoryInline::FlatWrite32((r30 + 100), r20);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl52_0x8041A5E4:
{
}

loc_inl52_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl52_0x8041A5FC;
    }
}

loc_inl52_0x8041A5EC:
{
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_65 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl52_cont_8041A5E4;
}

loc_inl52_0x8041A5FC:
{
    r3 = 0;
}

loc_inl52_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4028));
    MemoryInline::FlatWrite32((r30 + 25104), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl54_0x8041A5E4:
{
}

loc_inl54_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl54_0x8041A5FC;
    }
}

loc_inl54_0x8041A5EC:
{
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_67 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl54_cont_8041A5E4;
}

loc_inl54_0x8041A5FC:
{
    r3 = 0;
}

loc_inl54_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4020));
    MemoryInline::FlatWrite32((r30 + 25108), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl56_0x8041A5E4:
{
}

loc_inl56_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl56_0x8041A5FC;
    }
}

loc_inl56_0x8041A5EC:
{
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_69 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl56_cont_8041A5E4;
}

loc_inl56_0x8041A5FC:
{
    r3 = 0;
}

loc_inl56_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4012));
    MemoryInline::FlatWrite32((r30 + 25112), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl58_0x8041A5E4:
{
}

loc_inl58_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl58_0x8041A5FC;
    }
}

loc_inl58_0x8041A5EC:
{
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_71 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl58_cont_8041A5E4;
}

loc_inl58_0x8041A5FC:
{
    r3 = 0;
}

loc_inl58_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4004));
    MemoryInline::FlatWrite32((r30 + 25116), r0);
}

loc_80426A10:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80426A18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80426A84;
    }
}

loc_80426A1C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl60_0x8041A5E4:
{
}

loc_inl60_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl60_0x8041A5FC;
    }
}

loc_inl60_0x8041A5EC:
{
    r0_rot_74 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_74 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl60_cont_8041A5E4;
}

loc_inl60_0x8041A5FC:
{
    r3 = 0;
}

loc_inl60_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + 458752);
    r3 = (r30 + 65536);
    r3 = (r3 + -16188);
    r4 = (r4 + -8024);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_26EAD = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_26EAD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426A44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80426A60;
    }
}

loc_80426A48:
{
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80426AD8;
}

loc_80426A60:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl62_0x8041A5E4:
{
}

loc_inl62_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl62_0x8041A5FC;
    }
}

loc_inl62_0x8041A5EC:
{
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_76 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl62_cont_8041A5E4;
}

loc_inl62_0x8041A5FC:
{
    r3 = 0;
}

loc_inl62_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + 458752);
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    r4 = (r4 + -7960);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_277F8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_277F8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80426AD8;
}

loc_80426A84:
{
    r3 = 1;
    // inline leaf 0x8042CEE0 (7 guest instruction(s))
    r4 = 0x806D0000u;
    r4 = (r4 + 23856);
    r0 = (r3 & 255);
    r0_rot_78 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_78 & -64);
    r3 = (r4 + r0);
    r3 = (r3 + 364);
    // end of inlined leaf 0x8042CEE0
    r4 = r3;
    r3 = (r30 + 65536);
    r3 = (r3 + -16188);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_27DDA = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_27DDA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426AA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80426AC0;
    }
}

loc_80426AA8:
{
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80426AD8;
}

loc_80426AC0:
{
    r3 = 2;
    // inline leaf 0x8042CEE0 (7 guest instruction(s))
    r4 = 0x806D0000u;
    r4 = (r4 + 23856);
    r0 = (r3 & 255);
    r0_rot_79 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_79 & -64);
    r3 = (r4 + r0);
    r3 = (r3 + 364);
    // end of inlined leaf 0x8042CEE0
    r4 = r3;
    r3 = (r30 + 65536);
    r3 = (r3 + -16124);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_28561 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_28561;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80426AD8:
{
    ctx->lr = 0x80426ADCu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042C9CC_289F1 = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_289F1);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_289F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x8044E370 (14 guest instruction(s))
}

loc_inl65_0x8044E370:
{
    r5 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -15612));
    r0 = MemoryInline::FlatRead32((r4 + -15600));
}

loc_inl65_0x8044E384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_inl65_0x8044E398;
    }
}

loc_inl65_0x8044E388:
{
    r3 = MemoryInline::FlatRead32((r4 + -15608));
    r0 = MemoryInline::FlatRead32((r4 + -15596));
}

loc_inl65_0x8044E394:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_inl65_return;
    }
}

loc_inl65_0x8044E398:
{
    r0 = 0;
    r3 = (r5 + 65536);
    MemoryInline::FlatWrite32((r3 + -15228), r0);
    goto loc_inl65_cont_8044E370;
}

loc_inl65_return:
{
}

loc_inl65_cont_8044E370:
{
    // end of inlined leaf 0x8044E370
}

loc_80426AE0:
{
    r3 = r29;
    ctx->lr = 0x80426AE8u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_295DF = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_295DF);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_295DF >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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

loc_80426AE8:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426AF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80426B38;
    }
}

loc_80426AF4:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15375));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426B04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426B24;
    }
}

loc_80426B0C:
{
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r21));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80426B20u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_29D9A = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_29D9A);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_29D9A >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426B24:
{
    // inline leaf 0x8042CED0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 23856);
    r3 = (r3 + 296);
    // end of inlined leaf 0x8042CED0
    r15 = r3;
    // inline leaf 0x8042CD58 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 23856);
    r3 = (r3 + 40);
    // end of inlined leaf 0x8042CD58
    r4 = r3;
    goto loc_80426690;
}

loc_80426B38:
{
}

loc_80426B3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80426B84;
    }
}

loc_80426B40:
{
    r28 = 28;
    r0 = MemoryInline::FlatRead32((r30 + 25268));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426B70;
    }
}

loc_80426B54:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r21));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80426B6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_2A6AD = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_2A6AD);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_2A6AD >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426B70:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    ctx->lr = 0x80426B78u;
    if constexpr (KnownRegArgsCpuCall<0x80428658u>(&func_80428658)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428658_2AB63 = func_80428658_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80428658_2AB63);
        r4 = static_cast<uint32_t>(regargs_result_80428658_2AB63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428658u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r15 = r3;
    r4 = 0;
    goto loc_80426690;
}

loc_80426B84:
{
}

loc_80426B88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80426BF4;
    }
}

loc_80426B8C:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80426B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80427174;
    }
}

loc_80426BA0:
{
    ctx->lr = 0x80426BA4u;
    if constexpr (KnownRegArgsCpuCall<0x80377174u>(&func_80377174)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80377174_2B2C1 = func_80377174_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377174_2B2C1);
        r4 = static_cast<uint32_t>(regargs_result_80377174_2B2C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        r28 = ctx->gpr[28];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377174u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
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
        r28 = ctx->gpr[28];
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
        xer = ctx->xer;
    }
    ctx->lr = 0x80426BA8u;
    if constexpr (KnownRegArgsCpuCall<0x804274B8u>(&func_804274B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804274B8_2C06D = func_804274B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804274B8_2C06D);
        r4 = static_cast<uint32_t>(regargs_result_804274B8_2C06D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804274B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r30 + 104), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r30 + 105), static_cast<uint8_t>(r19));
    r4 = (r30 + 65536);
    MemoryInline::FlatWrite8((r4 + -32060), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r4 + -32059), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r4 + -32057), static_cast<uint8_t>(r19));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite32((r30 + 25152), r22);
    MemoryInline::FlatWrite32((r30 + 100), r19);
    MemoryInline::FlatWrite32((r30 + 25104), r21);
    MemoryInline::FlatWrite32((r30 + 25108), r21);
    MemoryInline::FlatWrite32((r30 + 25112), r21);
    MemoryInline::FlatWrite32((r30 + 25116), r21);
    MemoryInline::FlatWrite8((r4 + -16188), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r4 + -16124), static_cast<uint8_t>(r19));
    ctx->lr = 0x80426BECu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042C9CC_2C94F = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_2C94F);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_2C94F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r29;
    ctx->lr = 0x80426BF4u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_2D183 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_2D183);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_2D183 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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

loc_80426BF4:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426BFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80427174;
    }
}

loc_80426C00:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80426C10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80427174;
    }
}

loc_80426C14:
{
    goto loc_80426844;
}

loc_80426C18:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426C28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426C5C;
    }
}

loc_80426C2C:
{
    r28 = 11;
    MemoryInline::FlatWrite32((r30 + 25200), r19);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl69_0x8041A5E4:
{
}

loc_inl69_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl69_0x8041A5FC;
    }
}

loc_inl69_0x8041A5EC:
{
    r0_rot_83 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_83 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl69_cont_8041A5E4;
}

loc_inl69_0x8041A5FC:
{
    r3 = 0;
}

loc_inl69_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 100;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x80426C54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    goto loc_80427174;
}

loc_80426C5C:
{
}

loc_80426C60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426C64:
{
    r28 = 11;
    r0 = MemoryInline::FlatRead32((r30 + 25200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426C74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426C84;
    }
}

loc_80426C78:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426D6C;
}

loc_80426C84:
{
    ctx->lr = 0x80426C88u;
    if constexpr (KnownRegArgsCpuCall<0x80427334u>(&func_80427334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80427334_2E403 = func_80427334_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427334_2E403);
        r4 = static_cast<uint32_t>(regargs_result_80427334_2E403 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80427334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl71_0x8041A5E4:
{
}

loc_inl71_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl71_0x8041A5FC;
    }
}

loc_inl71_0x8041A5EC:
{
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_85 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl71_cont_8041A5E4;
}

loc_inl71_0x8041A5FC:
{
    r3 = 0;
}

loc_inl71_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = MemoryInline::FlatRead32((r3 + 13672));
    MemoryInline::FlatWrite32((r30 + 6876), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl73_0x8041A5E4:
{
}

loc_inl73_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl73_0x8041A5FC;
    }
}

loc_inl73_0x8041A5EC:
{
    r0_rot_87 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_87 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl73_cont_8041A5E4;
}

loc_inl73_0x8041A5FC:
{
    r3 = 0;
}

loc_inl73_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
}

loc_80426CB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80426D38;
    }
}

loc_80426CB8:
{
    r15 = 0;
    r17 = 0;
    r16 = (r30 + 6880);
    goto loc_80426D2C;
}

loc_80426CC8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl75_0x8041A5E4:
{
}

loc_inl75_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl75_0x8041A5FC;
    }
}

loc_inl75_0x8041A5EC:
{
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_90 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl75_cont_8041A5E4;
}

loc_inl75_0x8041A5FC:
{
    r3 = 0;
}

loc_inl75_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl77_0x8041A5E4:
{
}

loc_inl77_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl77_0x8041A5FC;
    }
}

loc_inl77_0x8041A5EC:
{
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_92 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl77_cont_8041A5E4;
}

loc_inl77_0x8041A5FC:
{
    r3 = 0;
}

loc_inl77_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + r17);
    r3 = r16;
    r4 = (r4 + 13676);
    ctx->lr = 0x80426CF0u;
    if constexpr (KnownRegArgsCpuCall<0x803DFD90u>(&func_803DFD90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803DFD90_2FA5F = func_803DFD90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFD90_2FA5F);
        r4 = static_cast<uint32_t>(regargs_result_803DFD90_2FA5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFD90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80426CF4:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_80426D20;
    }
}

loc_80426CF8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl79_0x8041A5E4:
{
}

loc_inl79_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl79_0x8041A5FC;
    }
}

loc_inl79_0x8041A5EC:
{
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_94 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl79_cont_8041A5E4;
}

loc_inl79_0x8041A5FC:
{
    r3 = 0;
}

loc_inl79_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl81_0x8041A5E4:
{
}

loc_inl81_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl81_0x8041A5FC;
    }
}

loc_inl81_0x8041A5EC:
{
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_96 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl81_cont_8041A5E4;
}

loc_inl81_0x8041A5FC:
{
    r3 = 0;
}

loc_inl81_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r3 + r17);
    r3 = (r30 + 16088);
    r4 = (r4 + 13676);
    ctx->lr = 0x80426D20u;
    if constexpr (KnownRegArgsCpuCall<0x803DFD90u>(&func_803DFD90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803DFD90_309AF = func_803DFD90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFD90_309AF);
        r4 = static_cast<uint32_t>(regargs_result_803DFD90_309AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFD90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80426D20:
{
    r17 = (r17 + 56);
    r16 = (r16 + 56);
    r15 = (r15 + 1);
}

loc_80426D2C:
{
    r0 = MemoryInline::FlatRead32((r30 + 6876));
}

loc_80426D34:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(r0))) {
        goto loc_80426CC8;
    }
}

loc_80426D38:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl83_0x8041A5E4:
{
}

loc_inl83_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl83_0x8041A5FC;
    }
}

loc_inl83_0x8041A5EC:
{
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_100 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl83_cont_8041A5E4;
}

loc_inl83_0x8041A5FC:
{
    r3 = 0;
}

loc_inl83_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = MemoryInline::FlatRead32((r3 + 13672));
    MemoryInline::FlatWrite32((r30 + 25324), r0);
    r0 = MemoryInline::FlatRead32((r30 + 100));
}

loc_80426D54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80426D6C;
    }
}

loc_80426D58:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl85_0x8041A5E4:
{
}

loc_inl85_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl85_0x8041A5FC;
    }
}

loc_inl85_0x8041A5EC:
{
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_102 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl85_cont_8041A5E4;
}

loc_inl85_0x8041A5FC:
{
    r3 = 0;
}

loc_inl85_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = MemoryInline::FlatRead32((r3 + 13672));
    MemoryInline::FlatWrite32((r30 + 25320), r0);
}

loc_80426D6C:
{
    r3 = r29;
    ctx->lr = 0x80426D74u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_31AA6 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_31AA6);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_31AA6 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426D78:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426D88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426E10;
    }
}

loc_80426D8C:
{
    r28 = 11;
    MemoryInline::FlatWrite32((r30 + 25200), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80426D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80426DE0;
    }
}

loc_80426DA0:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl87_0x8041A5E4:
{
}

loc_inl87_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl87_0x8041A5FC;
    }
}

loc_inl87_0x8041A5EC:
{
    r0_rot_105 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_105 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl87_cont_8041A5E4;
}

loc_inl87_0x8041A5FC:
{
    r3 = 0;
}

loc_inl87_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r0 * 124);
    r15 = (r3 + r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl89_0x8041A5E4:
{
}

loc_inl89_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl89_0x8041A5FC;
    }
}

loc_inl89_0x8041A5EC:
{
    r0_rot_107 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_107 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl89_cont_8041A5E4;
}

loc_inl89_0x8041A5FC:
{
    r3 = 0;
}

loc_inl89_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 100;
    r5 = MemoryInline::FlatRead32((r15 + 1348));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x80426DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80426E08;
}

loc_80426DE0:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl91_0x8041A5E4:
{
}

loc_inl91_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl91_0x8041A5FC;
    }
}

loc_inl91_0x8041A5EC:
{
    r0_rot_109 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_109 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl91_cont_8041A5E4;
}

loc_inl91_0x8041A5FC:
{
    r3 = 0;
}

loc_inl91_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 100;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x80426E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 9;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
}

loc_80426E08:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    goto loc_80427174;
}

loc_80426E10:
{
}

loc_80426E14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426E18:
{
    r28 = 11;
    r0 = MemoryInline::FlatRead32((r30 + 25200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426E24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426E28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426E38;
    }
}

loc_80426E2C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426E40;
}

loc_80426E38:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
}

loc_80426E40:
{
    r3 = r29;
    ctx->lr = 0x80426E48u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_33749 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_33749);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_33749 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426E4C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426E5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426E64;
    }
}

loc_80426E60:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_80426E64:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426E6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426E70:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80426E80u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_33EA3 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_33EA3);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_33EA3 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426E84:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426E94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426E9C;
    }
}

loc_80426E98:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
}

loc_80426E9C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426EA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426EA8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80426EB8u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_345FD = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_345FD);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_345FD >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426EBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r28 = 36;
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426ED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426F30;
    }
}

loc_80426ED4:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    MemoryInline::FlatWrite32((r30 + 25300), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80426EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80426F10;
    }
}

loc_80426EE8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl93_0x8041A5E4:
{
}

loc_inl93_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl93_0x8041A5FC;
    }
}

loc_inl93_0x8041A5EC:
{
    r0_rot_112 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_112 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl93_cont_8041A5E4;
}

loc_inl93_0x8041A5FC:
{
    r3 = 0;
}

loc_inl93_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = 1;
    ctx->lr = 0x80426F00u;
    if constexpr (KnownRegArgsCpuCall<0x803E28F4u>(&func_803E28F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803E28F4_350AB = func_803E28F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E28F4_350AB);
        r4 = static_cast<uint32_t>(regargs_result_803E28F4_350AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E28F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -16192), r0);
    goto loc_80426F30;
}

loc_80426F10:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl95_0x8041A5E4:
{
}

loc_inl95_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl95_0x8041A5FC;
    }
}

loc_inl95_0x8041A5EC:
{
    r0_rot_114 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_114 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl95_cont_8041A5E4;
}

loc_inl95_0x8041A5FC:
{
    r3 = 0;
}

loc_inl95_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x80426F28u;
    if constexpr (KnownRegArgsCpuCall<0x803E28F4u>(&func_803E28F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803E28F4_35CF6 = func_803E28F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E28F4_35CF6);
        r4 = static_cast<uint32_t>(regargs_result_803E28F4_35CF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E28F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -16192), r19);
}

loc_80426F30:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426F38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426F3C:
{
    r0 = MemoryInline::FlatRead32((r30 + 25300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80426F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80426F48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80426F58;
    }
}

loc_80426F4C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80426F6C;
}

loc_80426F58:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r22));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16195), static_cast<uint8_t>(r22));
}

loc_80426F6C:
{
    r3 = r29;
    ctx->lr = 0x80426F74u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_36969 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_36969);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_36969 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80426F78:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r28 = 36;
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426F8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80426FEC;
    }
}

loc_80426F90:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    MemoryInline::FlatWrite32((r30 + 25300), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80426FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80426FCC;
    }
}

loc_80426FA4:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl97_0x8041A5E4:
{
}

loc_inl97_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl97_0x8041A5FC;
    }
}

loc_inl97_0x8041A5EC:
{
    r0_rot_117 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_117 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl97_cont_8041A5E4;
}

loc_inl97_0x8041A5FC:
{
    r3 = 0;
}

loc_inl97_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = 0;
    ctx->lr = 0x80426FBCu;
    if constexpr (KnownRegArgsCpuCall<0x803E28F4u>(&func_803E28F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803E28F4_37417 = func_803E28F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E28F4_37417);
        r4 = static_cast<uint32_t>(regargs_result_803E28F4_37417 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E28F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -16192), r0);
    goto loc_80426FEC;
}

loc_80426FCC:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl99_0x8041A5E4:
{
}

loc_inl99_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl99_0x8041A5FC;
    }
}

loc_inl99_0x8041A5EC:
{
    r0_rot_119 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_119 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl99_cont_8041A5E4;
}

loc_inl99_0x8041A5FC:
{
    r3 = 0;
}

loc_inl99_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80426FE4u;
    if constexpr (KnownRegArgsCpuCall<0x803E28F4u>(&func_803E28F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803E28F4_38062 = func_803E28F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E28F4_38062);
        r4 = static_cast<uint32_t>(regargs_result_803E28F4_38062 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E28F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -16192), r19);
}

loc_80426FEC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80426FF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80426FF8:
{
    r0 = MemoryInline::FlatRead32((r30 + 25300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80427000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80427004:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80427014;
    }
}

loc_80427008:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_80427028;
}

loc_80427014:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r22));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16195), static_cast<uint8_t>(r19));
}

loc_80427028:
{
    r3 = r29;
    ctx->lr = 0x80427030u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_38CD5 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_38CD5);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_38CD5 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_80427034:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r28 = 31;
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80427048:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80427098;
    }
}

loc_8042704C:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    MemoryInline::FlatWrite32((r30 + 25280), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8042705C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80427088;
    }
}

loc_80427060:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl101_0x8041A5E4:
{
}

loc_inl101_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl101_0x8041A5FC;
    }
}

loc_inl101_0x8041A5EC:
{
    r0_rot_122 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_122 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl101_cont_8041A5E4;
}

loc_inl101_0x8041A5FC:
{
    r3 = 0;
}

loc_inl101_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x80427084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80427098;
}

loc_80427088:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80427098u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_39BD4 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_39BD4);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_39BD4 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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

loc_80427098:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804270A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_804270A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 25280));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804270AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_804270B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804270C0;
    }
}

loc_804270B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_804270CC;
}

loc_804270C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r22));
}

loc_804270CC:
{
    r3 = r29;
    ctx->lr = 0x804270D4u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_3A3E5 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_3A3E5);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_3A3E5 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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
    goto loc_80427174;
}

loc_804270D8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r19));
    r28 = 33;
    r0 = MemoryInline::FlatRead8(r29);
}

loc_804270EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80427138;
    }
}

loc_804270F0:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r20));
    MemoryInline::FlatWrite32((r30 + 25288), r19);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80427100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80427128;
    }
}

loc_80427104:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl103_0x8041A5E4:
{
}

loc_inl103_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl103_0x8041A5FC;
    }
}

loc_inl103_0x8041A5EC:
{
    r0_rot_125 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_125 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl103_cont_8041A5E4;
}

loc_inl103_0x8041A5FC:
{
    r3 = 0;
}

loc_inl103_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80427124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80427138;
}

loc_80427128:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    r3 = r29;
    ctx->lr = 0x80427138u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_3B2D7 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_3B2D7);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_3B2D7 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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

loc_80427138:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80427140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80427174;
    }
}

loc_80427144:
{
    r0 = MemoryInline::FlatRead32((r30 + 25288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8042714C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80427174;
    }
}

loc_80427150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80427160;
    }
}

loc_80427154:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r21));
    goto loc_8042716C;
}

loc_80427160:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r22));
}

loc_8042716C:
{
    r3 = r29;
    ctx->lr = 0x80427174u;
    if constexpr (KnownRegArgsCpuCall<0x80425BE4u>(&func_80425BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80425BE4_3BAE8 = func_80425BE4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80425BE4_3BAE8);
        r4 = static_cast<uint32_t>(regargs_result_80425BE4_3BAE8 >> 32);
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
        InvokeDirectCpu<0x80425BE4u>(ctx);
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

loc_80427174:
{
    r31 = (r31 + 1);
    r29 = (r29 + 32);
}

loc_8042717C:
{
}

loc_80427180:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(128))) {
        goto loc_80425F28;
    }
}

loc_80427184:
{
    r3 = r30;
    ctx->lr = 0x8042718Cu;
    if constexpr (KnownRegArgsCpuCall<0x80425ADCu>(&func_80425ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80425ADC_3C074 = func_80425ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80425ADC_3C074);
        r4 = static_cast<uint32_t>(regargs_result_80425ADC_3C074 >> 32);
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
        InvokeDirectCpu<0x80425ADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8042718C:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
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
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80425C24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80425C24_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80425C24 func_80425C24 preserves=true fpr_mask=0x00000000
