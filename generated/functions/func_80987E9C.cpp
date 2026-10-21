#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8005B714(CpuContext* ctx);
extern "C" uint32_t func_8005B714_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B780(CpuContext* ctx);
extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B7EC(CpuContext* ctx);
extern "C" uint32_t func_8005B7EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005B8D8(CpuContext* ctx);
extern "C" uint64_t func_8005B8D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802E0FC0(CpuContext* ctx);
extern "C" uint64_t func_802E0FC0_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E2104(CpuContext* ctx);
extern "C" uint64_t func_802E2104_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80987E9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_801FB24C_loc_0 = 0;
    uint32_t addr_lhax_801FB2B4_loc_0 = 0;
    uint32_t addr_lhax_809885C4_loc_0 = 0;
    uint32_t addr_lhax_809885D0_loc_0 = 0;
    uint32_t addr_psqx_80989CB0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
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
    uint32_t r0_rot_130 = 0;
    uint32_t r0_rot_131 = 0;
    uint32_t r0_rot_132 = 0;
    uint32_t r0_rot_133 = 0;
    uint32_t r0_rot_134 = 0;
    uint32_t r0_rot_135 = 0;
    uint32_t r0_rot_136 = 0;
    uint32_t r0_rot_137 = 0;
    uint32_t r0_rot_138 = 0;
    uint32_t r0_rot_139 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_140 = 0;
    uint32_t r0_rot_141 = 0;
    uint32_t r0_rot_142 = 0;
    uint32_t r0_rot_143 = 0;
    uint32_t r0_rot_144 = 0;
    uint32_t r0_rot_145 = 0;
    uint32_t r0_rot_146 = 0;
    uint32_t r0_rot_147 = 0;
    uint32_t r0_rot_148 = 0;
    uint32_t r0_rot_149 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_150 = 0;
    uint32_t r0_rot_151 = 0;
    uint32_t r0_rot_152 = 0;
    uint32_t r0_rot_153 = 0;
    uint32_t r0_rot_154 = 0;
    uint32_t r0_rot_155 = 0;
    uint32_t r0_rot_156 = 0;
    uint32_t r0_rot_157 = 0;
    uint32_t r0_rot_158 = 0;
    uint32_t r0_rot_159 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_160 = 0;
    uint32_t r0_rot_161 = 0;
    uint32_t r0_rot_162 = 0;
    uint32_t r0_rot_163 = 0;
    uint32_t r0_rot_164 = 0;
    uint32_t r0_rot_165 = 0;
    uint32_t r0_rot_166 = 0;
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
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_10 = 0;
    uint32_t r14_addr_11 = 0;
    uint32_t r14_addr_12 = 0;
    uint32_t r14_addr_13 = 0;
    uint32_t r14_addr_14 = 0;
    uint32_t r14_addr_15 = 0;
    uint32_t r14_addr_16 = 0;
    uint32_t r14_addr_17 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r14_addr_4 = 0;
    uint32_t r14_addr_5 = 0;
    uint32_t r14_addr_6 = 0;
    uint32_t r14_addr_7 = 0;
    uint32_t r14_addr_8 = 0;
    uint32_t r14_addr_9 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_10 = 0;
    uint32_t r16_addr_11 = 0;
    uint32_t r16_addr_12 = 0;
    uint32_t r16_addr_13 = 0;
    uint32_t r16_addr_14 = 0;
    uint32_t r16_addr_15 = 0;
    uint32_t r16_addr_16 = 0;
    uint32_t r16_addr_17 = 0;
    uint32_t r16_addr_18 = 0;
    uint32_t r16_addr_19 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_20 = 0;
    uint32_t r16_addr_21 = 0;
    uint32_t r16_addr_22 = 0;
    uint32_t r16_addr_23 = 0;
    uint32_t r16_addr_24 = 0;
    uint32_t r16_addr_25 = 0;
    uint32_t r16_addr_26 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_addr_5 = 0;
    uint32_t r16_addr_6 = 0;
    uint32_t r16_addr_7 = 0;
    uint32_t r16_addr_8 = 0;
    uint32_t r16_addr_9 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_10 = 0;
    uint32_t r17_addr_11 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r17_addr_6 = 0;
    uint32_t r17_addr_7 = 0;
    uint32_t r17_addr_8 = 0;
    uint32_t r17_addr_9 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r21_addr_7 = 0;
    uint32_t r21_addr_8 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_23 = nullptr;
    uint8_t* guest_range_24 = nullptr;
    uint8_t* guest_range_25 = nullptr;
    uint8_t* guest_range_26 = nullptr;
    uint8_t* guest_range_27 = nullptr;
    uint8_t* guest_range_28 = nullptr;
    uint8_t* guest_range_29 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_30 = nullptr;
    uint8_t* guest_range_31 = nullptr;
    uint8_t* guest_range_32 = nullptr;
    uint8_t* guest_range_33 = nullptr;
    uint8_t* guest_range_34 = nullptr;
    uint8_t* guest_range_35 = nullptr;
    uint8_t* guest_range_36 = nullptr;
    uint8_t* guest_range_37 = nullptr;
    uint8_t* guest_range_38 = nullptr;
    uint8_t* guest_range_39 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_40 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80987E9Cu);
    goto loc_80987E9C;

loc_80987E9C:
{
    guest_range_17 = MemoryHw::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryHw::WriteResolved32(guest_range_17, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_17, 260u, (r1 + 260), r0);
    MemoryHw::WriteResolvedFloat64(guest_range_17, 240u, (r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = 1127219200;
    MemoryHw::WriteResolved32(guest_range_17, 112u, (r1 + 112), r0);
    r0 = 1127219200;
    MemoryHw::WriteResolved32(guest_range_17, 120u, (r1 + 120), r0);
    r5 = -1;
    MemoryHw::WriteResolved32(guest_range_17, 16u, (r1 + 16), r5);
    r0 = 0;
    MemoryHw::WriteResolved32(guest_range_17, 148u, (r1 + 148), r0);
    r14 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryHw::FlatReadFloat32((r4 + 4));
    MemoryHw::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r4 + 8));
    MemoryHw::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    f1.d = MemoryHw::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_17, 128u, (r1 + 128), f0.d);
    r28 = fctiwzword0;
    ctx->lr = 0x80987F18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4349));
}

loc_80987F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80987FD0;
    }
}

loc_80987F28:
{
    r5 = 0x809A0000u;
    r0 = MemoryHw::FlatRead8((r5 + -9840));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1296);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryHw::FlatRead32(r3_addr_1);
    r3 = (r5 + -9840);
    r0 = MemoryHw::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r4 + r0);
    r5 = MemoryHw::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80987F64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984E10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x8005B738 (9 guest instruction(s))
}

loc_inl2_0x8005B738:
{
    r3 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl2_0x8005B740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8005B74C;
    }
}

loc_inl2_0x8005B744:
{
    r3 = 0;
    goto loc_inl2_cont_8005B738;
}

loc_inl2_0x8005B74C:
{
    r3 = (r3 + 65536);
    r0 = MemoryHw::FlatRead32((r3 + 20576));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl2_cont_8005B738:
{
    // end of inlined leaf 0x8005B738
    r15 = r3;
    // inline leaf 0x8005B75C (9 guest instruction(s))
}

loc_inl3_0x8005B75C:
{
    r3 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8005B770;
    }
}

loc_inl3_0x8005B768:
{
    r3 = 0;
    goto loc_inl3_cont_8005B75C;
}

loc_inl3_0x8005B770:
{
    r3 = (r3 + 65536);
    r0 = MemoryHw::FlatRead32((r3 + 20580));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl3_cont_8005B75C:
{
    // end of inlined leaf 0x8005B75C
    r14 = r3;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31104);
    r3_addr_2 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_2);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl4_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl4_cont_8005B714;
}

loc_inl4_return:
{
}

loc_inl4_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r0 = (r28 + 170);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = 190;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl5_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl5_cont_8005B780;
}

loc_inl5_return:
{
}

loc_inl5_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl6_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl6_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl6_cont_8005B7EC;
}

loc_inl6_return:
{
}

loc_inl6_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = MemoryHw::FlatRead32(r16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80987FC4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_629D = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_629D);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_629D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl7_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl7_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl7_cont_8005B714;
}

loc_inl7_return:
{
}

loc_inl7_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
}

loc_80987FD0:
{
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r4 = MemoryHw::FlatRead8((r3 + 4347));
}

loc_80987FE0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80987FF8;
    }
}

loc_80987FE4:
{
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80987FEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80987FF8;
    }
}

loc_80987FF0:
{
}

loc_80987FF4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(12))) {
        goto loc_809888DC;
    }
}

loc_80987FF8:
{
    r0 = MemoryHw::FlatRead8((r3 + 4432));
}

loc_80988000:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098805C;
    }
}

loc_80988004:
{
    r3 = 0x809A0000u;
    r15 = (r3 + -6384);
    r16 = 0;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
}

loc_80988018:
{
    r0 = MemoryHw::FlatRead8(r15);
    r0_rot_95 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_95 & -4);
    r14_addr_16 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_16);
    r0 = MemoryHw::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_96 & -4);
    r0_rot_97 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_97 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryHw::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r16 = (r16 + 1);
    r15 = (r15 + 20);
}

loc_80988054:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(2))) {
        goto loc_80988018;
    }
}

loc_80988058:
{
    goto loc_80989620;
}

loc_8098805C:
{
}

loc_80988060:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_809880A8;
    }
}

loc_80988064:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -6384);
    r3 = (r3 + 20);
    r0 = MemoryHw::FlatRead8(r3);
    r0_rot_125 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_125 & -4);
    r4 = 0x809A0000u;
    r4 = (r4 + -1248);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryHw::FlatRead32(r4_addr_1);
    r0 = MemoryHw::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_126 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_126 & -4);
    r0_rot_127 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_127 & -2);
    r4 = (r4 + r0);
    r5 = MemoryHw::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809880A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809886E4;
}

loc_809880A8:
{
    r3 = 0x809A0000u;
    r14 = (r3 + -6384);
    r15 = 0;
    r17 = 2;
    r3 = 0x809A0000u;
    r16 = (r3 + -1248);
    r18 = 0x809D0000u;
}

loc_809880C4:
{
}

loc_809880C8:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(3))) {
        goto loc_809880DC;
    }
}

loc_809880CC:
{
    r3 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_809880D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_809880F4;
    }
}

loc_809880DC:
{
}

loc_809880E0:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(2))) {
        goto loc_8098812C;
    }
}

loc_809880E4:
{
    r3 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_809880F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098812C;
    }
}

loc_809880F4:
{
    r3 = (r1 + 48);
    r4 = r14;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_18 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_18, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_18, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_18, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_18, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_18, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_18, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_18, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_18, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_18, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_18, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    MemoryHw::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r17));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_132 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_132 & -4);
    r16_addr_11 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_11);
    r4 = (r4 + 16);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098815C;
}

loc_8098812C:
{
    r0 = MemoryHw::FlatRead8(r14);
    r0_rot_129 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_129 & -4);
    r16_addr_10 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_10);
    r0 = MemoryHw::FlatRead16((r14 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_130 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_130 & -4);
    r0_rot_131 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_131 & -2);
    r4 = (r4 + r0);
    r3 = r14;
    r5 = MemoryHw::FlatRead32((r14 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x8098815Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8098815C:
{
    r15 = (r15 + 1);
    r14 = (r14 + 20);
}

loc_80988168:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(4))) {
        goto loc_809880C4;
    }
}

loc_8098816C:
{
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_8098817C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80988198;
    }
}

loc_80988180:
{
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -6304);
    r4 = (r4 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_1, 0u, r4);
    guest_range_2 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    goto loc_809881AC;
}

loc_80988198:
{
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -6304);
    r4 = (r4 + 40);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_3 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_3, 0u, r4);
    guest_range_4 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_4, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_3, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_4, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_3, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_3, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_3, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_4, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_3, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_3, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_4, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_3, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_4, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_3, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_4, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_3, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_4, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
}

loc_809881AC:
{
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_134 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_134 & -4);
    r3 = 0x809A0000u;
    r16 = (r3 + -1248);
    r16_addr_13 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_13);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_135 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_135 & -4);
    r0_rot_136 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_136 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809881E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    r15 = 0x809D0000u;
    r4 = MemoryHw::FlatRead32((r15 + 13672));
    r0 = MemoryHw::FlatRead8((r4 + 4321));
    r5 = (r0 * 20);
    r4 = 0x809A0000u;
    r0 = (r4 + -6240);
    r4 = (r0 + r5);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_5 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_5, 0u, r4);
    guest_range_6 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_6, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_5, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_6, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_5, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_6, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_5, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_6, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_5, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_6, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_5, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_6, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_5, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_6, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_5, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_6, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_5, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_6, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_5, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_6, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_137 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_137 & -4);
    r16_addr_14 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_14);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_138 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_138 & -4);
    r0_rot_139 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_139 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r18 = 0;
    r3 = 0x809A0000u;
    r17 = (r3 + -5932);
    r14 = 0x809A0000u;
    r19 = (r14 + -6160);
}

loc_8098824C:
{
    r3 = MemoryHw::FlatRead32((r15 + 13672));
    r3 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80988258:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(2))) {
        goto loc_809882B4;
    }
}

loc_8098825C:
{
    r0 = (r3 + -3);
}

loc_80988264:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(r0))) {
        goto loc_809882B4;
    }
}

loc_80988268:
{
    r3 = (r1 + 48);
    r4 = (r14 + -6160);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_19 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_19, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_19, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_19, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_19, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_19, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_19, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_19, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_19, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_19, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_19, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_141 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_141 & -4);
    r16_addr_16 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_16);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_142 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_142 & -4);
    r0_rot_143 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_143 & -2);
    r4 = (r4 + r0);
    r3 = MemoryHw::FlatRead16(r17);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 12);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r17 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    goto loc_809882EC;
}

loc_809882B4:
{
    r3 = (r1 + 48);
    r4 = (r19 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_20 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_20, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_20, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_20, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_20, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_20, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_20, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_20, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_20, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_20, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_20, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_144 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_144 & -4);
    r16_addr_17 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_17);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_145 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_145 & -4);
    r0_rot_146 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_146 & -2);
    r4 = (r4 + r0);
    r0 = MemoryHw::FlatRead16(r17);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r17 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
}

loc_809882EC:
{
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 4);
    r18 = (r18 + 1);
}

loc_8098830C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(9))) {
        goto loc_8098824C;
    }
}

loc_80988310:
{
    r3 = 0x809A0000u;
    r20 = (r3 + -5760);
    r21 = 0;
    r23 = 0;
    r3 = 0x809A0000u;
    r19 = (r3 + -5896);
    r18 = 0x809D0000u;
    r3 = 0x809A0000u;
    r17 = (r3 + -1248);
    r15 = -725024768;
    r16 = -7340032;
    r14 = 0x809A0000u;
}

loc_80988340:
{
    r22 = 0;
    r3 = (r1 + 48);
    r4 = r20;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_21 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_21, 0u, r4);
    guest_range_22 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_22, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_21, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_22, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_21, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_22, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_21, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_22, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_21, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_22, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_21, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_22, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_21, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_22, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_21, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_22, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_21, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_22, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_21, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_22, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
}

loc_80988354:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(10))) {
        goto loc_80988368;
    }
}

loc_80988358:
{
    r3 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80988364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80988380;
    }
}

loc_80988368:
{
}

loc_8098836C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8098838C;
    }
}

loc_80988370:
{
    r3 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_8098837C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098838C;
    }
}

loc_80988380:
{
    r3 = MemoryHw::FlatRead16((r1 + 56));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryHw::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r0));
}

loc_8098838C:
{
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_149 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_149 & -4);
    r17_addr_9 = (r17 + r0);
    r4 = MemoryHw::FlatRead32(r17_addr_9);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_150 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_150 & -4);
    r0_rot_151 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_151 & -2);
    r4 = (r4 + r0);
    r3 = MemoryHw::FlatRead16(r19);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r3));
    r0 = MemoryHw::FlatRead16((r19 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r5 = MemoryHw::FlatRead32((r18 + 13672));
    r6 = MemoryHw::FlatRead8((r5 + 4346));
}

loc_809883C4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(2))) {
        goto loc_809883E4;
    }
}

loc_809883C8:
{
}

loc_809883CC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(10))) {
        goto loc_809883E4;
    }
}

loc_809883D0:
{
    r0 = (r21 + 2);
}

loc_809883D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_809883E4;
    }
}

loc_809883DC:
{
    r0 = (r3 + 12);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
}

loc_809883E4:
{
}

loc_809883E8:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_809883F4;
    }
}

loc_809883EC:
{
}

loc_809883F0:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(10))) {
        goto loc_80988400;
    }
}

loc_809883F4:
{
    r5 = MemoryHw::FlatRead32((r1 + 52));
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    goto loc_80988430;
}

loc_80988400:
{
    r3 = MemoryHw::FlatRead8((r5 + 4346));
}

loc_80988408:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(2))) {
        goto loc_80988428;
    }
}

loc_8098840C:
{
    r0 = (r21 + 2);
}

loc_80988414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80988428;
    }
}

loc_80988418:
{
    r5 = (r16 + 255);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r22 = 1;
    goto loc_80988430;
}

loc_80988428:
{
    r5 = (r15 + -27393);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
}

loc_80988430:
{
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryHw::FlatRead16(r19);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryHw::FlatRead16((r19 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r6 = MemoryHw::FlatRead32((r18 + 13672));
    r5 = MemoryHw::FlatRead8((r6 + 4346));
}

loc_80988454:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(2))) {
        goto loc_80988474;
    }
}

loc_80988458:
{
}

loc_8098845C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(10))) {
        goto loc_80988474;
    }
}

loc_80988460:
{
    r0 = (r21 + 2);
}

loc_80988468:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_80988474;
    }
}

loc_8098846C:
{
    r0 = (r3 + 12);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80988474:
{
}

loc_80988478:
{
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(9))) {
        goto loc_8098857C;
    }
}

loc_8098847C:
{
    r5 = (r14 + -324);
    r5_addr_2 = (r5 + r23);
    r5 = MemoryHw::FlatRead32(r5_addr_2);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8098848Cu:
        goto loc_8098848C;
        break;
    case 0x8098857Cu:
        goto loc_8098857C;
        break;
    case 0x80988498u:
        goto loc_80988498;
        break;
    case 0x80988510u:
        goto loc_80988510;
        break;
    case 0x809884ACu:
        goto loc_809884AC;
        break;
    case 0x809884C0u:
        goto loc_809884C0;
        break;
    case 0x809884D4u:
        goto loc_809884D4;
        break;
    case 0x809884E8u:
        goto loc_809884E8;
        break;
    case 0x80988548u:
        goto loc_80988548;
        break;
    case 0x809884FCu:
        goto loc_809884FC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8098848C:
{
    r5 = (r6 + 4312);
    ctx->lr = 0x80988494u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80987ACCu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8098857C;
}

loc_80988498:
{
    r5 = MemoryHw::FlatRead8((r6 + 4326));
    r6 = r22;
    r7 = 0;
    ctx->lr = 0x809884A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_809884AC:
{
    r5 = MemoryHw::FlatRead8((r6 + 4334));
    r6 = r22;
    r7 = 0;
    ctx->lr = 0x809884BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_809884C0:
{
    r5 = MemoryHw::FlatRead8((r6 + 4335));
    r6 = r22;
    r7 = 0;
    ctx->lr = 0x809884D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_809884D4:
{
    r5 = MemoryHw::FlatRead8((r6 + 4336));
    r6 = r22;
    r7 = 1;
    ctx->lr = 0x809884E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_809884E8:
{
    r5 = MemoryHw::FlatRead8((r6 + 4337));
    r6 = r22;
    r7 = 0;
    ctx->lr = 0x809884F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_809884FC:
{
    r5 = MemoryHw::FlatRead8((r6 + 4345));
    r6 = r22;
    r7 = 0;
    ctx->lr = 0x8098850Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809879A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_80988510:
{
    r6 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r6 + 4327));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_7 & -16777216);
    r0 = MemoryHw::FlatRead8((r6 + 4328));
    r0_rot_152 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_152 & -65536);
    r5 = (r5 | r0);
    r0 = MemoryHw::FlatRead8((r6 + 4329));
    r0_rot_153 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_153 & -256);
    r0 = (r0 | 255);
    r5 = (r5 | r0);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r6 = r22;
    ctx->lr = 0x80988544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80987B68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8098857C;
}

loc_80988548:
{
    r6 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r6 + 4338));
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_8 & -16777216);
    r0 = MemoryHw::FlatRead8((r6 + 4339));
    r0_rot_154 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_154 & -65536);
    r5 = (r5 | r0);
    r0 = MemoryHw::FlatRead8((r6 + 4340));
    r0_rot_155 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_155 & -256);
    r0 = (r0 | 255);
    r5 = (r5 | r0);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r6 = r22;
    ctx->lr = 0x8098857Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80987B68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8098857C:
{
    r19 = (r19 + 4);
    r21 = (r21 + 1);
    r23 = (r23 + 4);
    r20 = (r20 + 20);
}

loc_80988590:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(11))) {
        goto loc_80988340;
    }
}

loc_80988594:
{
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r3 = MemoryHw::FlatRead8((r3 + 4346));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_809885AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_809885D8;
    }
}

loc_809885B0:
{
    r0 = (r3 + -1);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_10 & -2);
    r0_rot_157 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_157 & -2);
    r3 = 0x809A0000u;
    r4 = (r3 + -5848);
    addr_lhax_809885C4_loc_0 = (r4 + r0);
    r3 = MemoryHw::FlatRead16(addr_lhax_809885C4_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r5 + 1);
    r0_rot_158 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_158 & -2);
    addr_lhax_809885D0_loc_0 = (r4 + r0);
    r4 = MemoryHw::FlatRead16(addr_lhax_809885D0_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x809885D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8098538Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_809885D8:
{
    r15 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r15 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_809885E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_809886E4;
    }
}

loc_809885EC:
{
    r0 = MemoryHw::FlatRead8((r3 + 4347));
}

loc_809885F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809886E4;
    }
}

loc_809885F8:
{
    r3 = 0x809A0000u;
    r16 = (r3 + -6200);
    r17 = 0;
    r14 = 0x809A0000u;
    r3 = 0x80990000u;
    f31.d = MemoryHw::FlatReadFloat64((r3 + 14696));
    r3 = 0x809A0000u;
    r18 = (r3 + -1248);
}

loc_80988618:
{
}

loc_8098861C:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_8098862C;
    }
}

loc_80988620:
{
    r3 = MemoryHw::FlatRead32((r15 + 13672));
    r20 = MemoryHw::FlatRead8((r3 + 4322));
    goto loc_80988634;
}

loc_8098862C:
{
    r3 = MemoryHw::FlatRead32((r15 + 13672));
    r20 = MemoryHw::FlatRead8((r3 + 4323));
}

loc_80988634:
{
    r3 = (r14 + -5800);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80052364_13FEA = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_13FEA;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    guest_range_23 = MemoryHw::ResolveRangeHost((r1 + 48), 0, 88u, false, true);
    MemoryHw::WriteResolvedFloat64(guest_range_23, 80u, (r1 + 128), f0.d);
    r19 = fctiwzword1;
    r3 = (r1 + 48);
    r4 = r16;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_24 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_24, 0u, r4);
    MemoryHw::WriteResolved8(guest_range_23, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_24, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_23, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_24, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_23, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_24, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_23, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_24, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_23, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_24, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_23, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_24, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_23, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_24, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_23, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_24, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_23, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_24, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_23, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
}

loc_80988670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80988680;
    }
}

loc_80988674:
{
    r3 = MemoryHw::FlatRead16((r1 + 56));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 2);
    MemoryHw::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r0));
}

loc_80988680:
{
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_161 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_161 & -4);
    r18_addr_2 = (r18 + r0);
    r4 = MemoryHw::FlatRead32(r18_addr_2);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_162 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_162 & -4);
    r0_rot_163 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_163 & -2);
    r4 = (r4 + r0);
}

loc_809886A0:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_809886B4;
    }
}

loc_809886A4:
{
    r0 = MemoryHw::FlatRead16((r1 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r19);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    goto loc_809886C0;
}

loc_809886B4:
{
    r0 = MemoryHw::FlatRead16((r1 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r19);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
}

loc_809886C0:
{
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809886D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 1);
    r16 = (r16 + 20);
}

loc_809886E0:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(2))) {
        goto loc_80988618;
    }
}

loc_809886E4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_165 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_165 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31368);
    r3_addr_31 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_31);
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r4 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80988710:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80989CAC;
    }
}

loc_80988714:
{
    r15 = (r4 + -1);
    r14 = (r28 + 94);
    r3 = MemoryHw::FlatRead8((r3 + 4347));
}

loc_80988724:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80988788;
    }
}

loc_80988728:
{
}

loc_8098872C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_80988788;
    }
}

loc_80988730:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r3 = (r3 + 2);
    r4 = 390;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl16_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl16_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl16_cont_8005B780;
}

loc_inl16_return:
{
}

loc_inl16_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl17_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl17_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl17_return;
    }
}

loc_inl17_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl17_cont_8005B7EC;
}

loc_inl17_return:
{
}

loc_inl17_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r15_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r15 = (r15_rot_1 & -4);
    r16_addr_20 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_20);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098875Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_1635C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1635C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1635C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r4 = 388;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl18_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl18_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl18_return;
    }
}

loc_inl18_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl18_cont_8005B780;
}

loc_inl18_return:
{
}

loc_inl18_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl19_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl19_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl19_return;
    }
}

loc_inl19_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl19_cont_8005B7EC;
}

loc_inl19_return:
{
}

loc_inl19_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r16_addr_21 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_21);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098877Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_17220 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_17220);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_17220 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0;
    ctx->lr = 0x80988784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809878B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989CAC;
}

loc_80988788:
{
}

loc_8098878C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_809887A4;
    }
}

loc_80988790:
{
}

loc_80988794:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(3))) {
        goto loc_80988820;
    }
}

loc_80988798:
{
}

loc_8098879C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_809887AC;
    }
}

loc_809887A0:
{
    goto loc_80988878;
}

loc_809887A4:
{
    r15 = 0;
    goto loc_809887B0;
}

loc_809887AC:
{
    r15 = 4;
}

loc_809887B0:
{
    r3 = 0x809A0000u;
    r3 = (r3 + 31392);
    r3_addr_34 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_34);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r3 = (r3 + 2);
    r4 = 390;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl20_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl20_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl20_return;
    }
}

loc_inl20_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl20_cont_8005B780;
}

loc_inl20_return:
{
}

loc_inl20_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl21_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl21_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl21_return;
    }
}

loc_inl21_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl21_cont_8005B7EC;
}

loc_inl21_return:
{
}

loc_inl21_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r15_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r15 = (r15_rot_3 & -4);
    r16_addr_24 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_24);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809887E8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_18831 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_18831);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_18831 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r4 = 388;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl22_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl22_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl22_cont_8005B780;
}

loc_inl22_return:
{
}

loc_inl22_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl23_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl23_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl23_return;
    }
}

loc_inl23_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl23_cont_8005B7EC;
}

loc_inl23_return:
{
}

loc_inl23_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r16_addr_25 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_25);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80988808u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_196F5 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_196F5);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_196F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r3 = MemoryHw::FlatRead8((r3 + 4348));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    ctx->lr = 0x8098881Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80987C8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989CAC;
}

loc_80988820:
{
    r3 = 0x809A0000u;
    r3 = (r3 + 31392);
    r3_addr_33 = (r3 + r0);
    r15 = MemoryHw::FlatRead32(r3_addr_33);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r3 = (r3 + 2);
    r4 = 390;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl24_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl24_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl24_return;
    }
}

loc_inl24_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl24_cont_8005B780;
}

loc_inl24_return:
{
}

loc_inl24_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl25_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl25_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl25_return;
    }
}

loc_inl25_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl25_cont_8005B7EC;
}

loc_inl25_return:
{
}

loc_inl25_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = MemoryHw::FlatRead32((r15 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80988854u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_1AAFA = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1AAFA);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1AAFA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r4 = 388;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl26_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl26_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl26_cont_8005B780;
}

loc_inl26_return:
{
}

loc_inl26_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl27_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl27_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl27_return;
    }
}

loc_inl27_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl27_cont_8005B7EC;
}

loc_inl27_return:
{
}

loc_inl27_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = MemoryHw::FlatRead32((r15 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80988874u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_1B99E = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1B99E);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1B99E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989CAC;
}

loc_80988878:
{
    r3 = 0x809A0000u;
    r3 = (r3 + 31344);
    r3_addr_32 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_32);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r3 = (r3 + 2);
    r4 = 390;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl28_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl28_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl28_return;
    }
}

loc_inl28_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl28_cont_8005B780;
}

loc_inl28_return:
{
}

loc_inl28_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl29_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl29_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl29_return;
    }
}

loc_inl29_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl29_cont_8005B7EC;
}

loc_inl29_return:
{
}

loc_inl29_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r15_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r15 = (r15_rot_2 & -4);
    r16_addr_22 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_22);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809888B0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_1C9A8 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1C9A8);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1C9A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r4 = 388;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl30_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl30_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl30_return;
    }
}

loc_inl30_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl30_cont_8005B780;
}

loc_inl30_return:
{
}

loc_inl30_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl31_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl31_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl31_return;
    }
}

loc_inl31_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl31_cont_8005B7EC;
}

loc_inl31_return:
{
}

loc_inl31_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r16_addr_23 = (r16 + r15);
    r3 = MemoryHw::FlatRead32(r16_addr_23);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809888D0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_1D86C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1D86C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1D86C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0;
    ctx->lr = 0x809888D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809878B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989CAC;
}

loc_809888DC:
{
    r3 = 0x809A0000u;
    r15 = (r3 + -6384);
    r16 = 0;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
}

loc_809888F0:
{
    r0 = MemoryHw::FlatRead8(r15);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r14_addr_2 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_2);
    r0 = MemoryHw::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryHw::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r16 = (r16 + 1);
    r15 = (r15 + 20);
}

loc_8098892C:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(2))) {
        goto loc_809888F0;
    }
}

loc_80988930:
{
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r4 = MemoryHw::FlatRead8((r3 + 4346));
    r0 = (r4 + -6);
}

loc_80988944:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80988A90;
    }
}

loc_80988948:
{
}

loc_8098894C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80988964;
    }
}

loc_80988950:
{
}

loc_80988954:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80988A90;
    }
}

loc_80988958:
{
}

loc_8098895C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(11))) {
        goto loc_80988A90;
    }
}

loc_80988960:
{
    goto loc_80988AE4;
}

loc_80988964:
{
    r0 = MemoryHw::FlatRead8((r3 + 4349));
}

loc_8098896C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80988AE4;
    }
}

loc_80988970:
{
    r5 = 0x809A0000u;
    r0 = MemoryHw::FlatRead8((r5 + -9756));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1296);
    r3_addr_4 = (r3 + r0);
    r4 = MemoryHw::FlatRead32(r3_addr_4);
    r3 = (r5 + -9756);
    r0 = MemoryHw::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r4 = (r4 + r0);
    r5 = MemoryHw::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809889ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984E10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E46ECu>(ctx);
    r3 = 4;
    r4 = 5;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E45D8u>(ctx);
    r0 = (r28 + 480);
    r14 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 7;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl32_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl32_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl32_0x803BECF4;
    }
}

loc_inl32_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryHw::FlatRead8(r3_addr_5);
    r3 = (r0 ^ 1);
    goto loc_inl32_cont_803BECD4;
}

loc_inl32_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryHw::FlatRead8(r3_addr_6);
}

loc_inl32_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_809889E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80988A08;
    }
}

loc_809889E8:
{
    r3 = r14;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 2;
    r8 = 0;
    ctx->lr = 0x80988A04u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802E0FC0_1FD7F = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_1FD7F);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_1FD7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802E0FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80988A24;
}

loc_80988A08:
{
    r3 = r14;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80988A24u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802E0FC0_20757 = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_20757);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_20757 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802E0FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80988A24:
{
    // inline leaf 0x8005B738 (9 guest instruction(s))
}

loc_inl33_0x8005B738:
{
    r3 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl33_0x8005B740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl33_0x8005B74C;
    }
}

loc_inl33_0x8005B744:
{
    r3 = 0;
    goto loc_inl33_cont_8005B738;
}

loc_inl33_0x8005B74C:
{
    r3 = (r3 + 65536);
    r0 = MemoryHw::FlatRead32((r3 + 20576));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl33_cont_8005B738:
{
    // end of inlined leaf 0x8005B738
    r15 = r3;
    // inline leaf 0x8005B75C (9 guest instruction(s))
}

loc_inl34_0x8005B75C:
{
    r3 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl34_0x8005B764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl34_0x8005B770;
    }
}

loc_inl34_0x8005B768:
{
    r3 = 0;
    goto loc_inl34_cont_8005B75C;
}

loc_inl34_0x8005B770:
{
    r3 = (r3 + 65536);
    r0 = MemoryHw::FlatRead32((r3 + 20580));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl34_cont_8005B75C:
{
    // end of inlined leaf 0x8005B75C
    r14 = r3;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31104);
    r3_addr_8 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_8);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl35_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl35_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl35_return;
    }
}

loc_inl35_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl35_cont_8005B714;
}

loc_inl35_return:
{
}

loc_inl35_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r3 = (r3 + 100);
    r4 = 200;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl36_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl36_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl36_return;
    }
}

loc_inl36_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl36_cont_8005B780;
}

loc_inl36_return:
{
}

loc_inl36_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl37_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl37_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl37_return;
    }
}

loc_inl37_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl37_cont_8005B7EC;
}

loc_inl37_return:
{
}

loc_inl37_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = MemoryHw::FlatRead32(r16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80988A80u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_21E5A = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_21E5A);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_21E5A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl38_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl38_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl38_return;
    }
}

loc_inl38_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl38_cont_8005B714;
}

loc_inl38_return:
{
}

loc_inl38_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    goto loc_80988AE4;
}

loc_80988A90:
{
    r3 = 0x809A0000u;
    r15 = (r3 + -5536);
    r16 = 0;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
}

loc_80988AA4:
{
    r0 = MemoryHw::FlatRead8(r15);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r14_addr_4 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_4);
    r0 = MemoryHw::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryHw::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988AD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r16 = (r16 + 1);
    r15 = (r15 + 20);
}

loc_80988AE0:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(2))) {
        goto loc_80988AA4;
    }
}

loc_80988AE4:
{
    r3 = 0x809D0000u;
    r4 = MemoryHw::FlatRead32((r3 + 13672));
    r5 = MemoryHw::FlatRead8((r4 + 4346));
    r0 = (r5 + -3);
}

loc_80988AF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_80989584;
    }
}

loc_80988AFC:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -360);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_10);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80988B14u:
        goto loc_80988B14;
        break;
    case 0x809891C0u:
        goto loc_809891C0;
        break;
    case 0x80988C9Cu:
        goto loc_80988C9C;
        break;
    case 0x809891D0u:
        goto loc_809891D0;
        break;
    case 0x809891E0u:
        goto loc_809891E0;
        break;
    case 0x809891ECu:
        goto loc_809891EC;
        break;
    case 0x809891FCu:
        goto loc_809891FC;
        break;
    case 0x8098920Cu:
        goto loc_8098920C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80988B14:
{
    r3 = 0x809A0000u;
    r15 = (r3 + -5384);
    r16 = 0;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
}

loc_80988B28:
{
    r0 = MemoryHw::FlatRead8(r15);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r14_addr_7 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_7);
    r0 = MemoryHw::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryHw::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988B58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r16 = (r16 + 1);
    r15 = (r15 + 20);
}

loc_80988B64:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_80988B28;
    }
}

loc_80988B68:
{
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -5304);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_7 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_7, 0u, r4);
    guest_range_8 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_8, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_7, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_8, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_7, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_8, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_7, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_8, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_7, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_8, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_7, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_8, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_7, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_8, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_7, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_8, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_7, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_8, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_7, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_8, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = 0x809D0000u;
    r4 = MemoryHw::FlatRead32((r3 + 13672));
    r0 = MemoryHw::FlatRead8((r4 + 4324));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80990000u;
    f1.d = MemoryHw::FlatReadFloat64((r3 + 14696));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80990000u;
    f3.d = MemoryHw::FlatReadFloat32((r3 + 14736));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0 = MemoryHw::FlatRead8((r4 + 4325));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14672));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r4 = MemoryHw::FlatRead16((r1 + 58));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 128), f0.d);
    r3 = fctiwzword2;
    r0 = (r3 + 93);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r0);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 60));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 219);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
    r14_addr_8 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_8);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -5760);
    r4 = (r4 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_9 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_9, 0u, r4);
    guest_range_10 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_10, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_9, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_10, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_9, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_10, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_9, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_10, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_9, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_10, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_9, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_10, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_9, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_10, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_9, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_10, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_9, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_10, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_9, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_10, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = -7340032;
    r5 = (r3 + 255);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r0 = 89;
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = 176;
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r14_addr_9 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_9);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989584;
}

loc_80988C9C:
{
}

loc_80988CA0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(5))) {
        goto loc_80988CAC;
    }
}

loc_80988CA4:
{
    r30 = (r4 + 4327);
    goto loc_80988CB8;
}

loc_80988CAC:
{
}

loc_80988CB0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(10))) {
        goto loc_80989584;
    }
}

loc_80988CB4:
{
    r30 = (r4 + 4338);
}

loc_80988CB8:
{
    r27 = MemoryHw::FlatRead8((r30 + 3));
    r0 = MemoryHw::FlatRead8((r30 + 4));
    MemoryHw::FlatWriteRam32((r1 + 148), r0);
    r0 = MemoryHw::FlatRead8((r30 + 5));
    MemoryHw::FlatWriteRam16((r1 + 144), static_cast<uint16_t>(r0));
    r31 = MemoryHw::FlatRead8((r30 + 6));
    r3 = 0x809A0000u;
    r16 = (r3 + -5284);
    r18 = 0;
    r15 = 0x809A0000u;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
    r20 = 299;
    r19 = 93;
}

loc_80988CF0:
{
}

loc_80988CF4:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(2))) {
        goto loc_80988D40;
    }
}

loc_80988CF8:
{
}

loc_80988CFC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(12))) {
        goto loc_80988D40;
    }
}

loc_80988D00:
{
    r3 = (r1 + 48);
    r4 = (r15 + -5184);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_25 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_25, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_25, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_25, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_25, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_25, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_25, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_25, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_25, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_25, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_25, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r14_addr_11 = (r14 + r0);
    r4 = MemoryHw::FlatRead32(r14_addr_11);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r4 = (r4 + r0);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988D40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80988D40:
{
    guest_range_26 = MemoryHw::ResolveRangeHost(r16, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_26, 0u, r16);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r14_addr_13 = (r14 + r0);
    r17 = MemoryHw::FlatRead32(r14_addr_13);
    r0 = MemoryHw::ReadResolved16(guest_range_26, 8u, (r16 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r17 = (r17 + r0);
    r5 = MemoryHw::ReadResolved32(guest_range_26, 4u, (r16 + 4));
    guest_range_27 = MemoryHw::ResolveRangeHost((r1 + 16), 0, 50u, false, true);
    MemoryHw::WriteResolved32(guest_range_27, 0u, (r1 + 16), r5);
    r3 = (r1 + 48);
    r4 = r16;
    // inline leaf 0x8098545C (21 guest instruction(s))
    r0 = MemoryHw::ReadResolved8(guest_range_26, 0u, r4);
    MemoryHw::WriteResolved8(guest_range_27, 32u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_26, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_27, 33u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_26, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_27, 34u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_26, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_27, 35u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_26, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_27, 36u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_26, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_27, 40u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_26, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_27, 42u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_26, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_27, 44u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_26, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_27, 46u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_26, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_27, 48u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
}

loc_80988D74:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(1))) {
        goto loc_80988DA8;
    }
}

loc_80988D78:
{
    r0 = MemoryHw::FlatRead8(r30);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_2 & -16777216);
    r0 = MemoryHw::FlatRead8((r30 + 1));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_38 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryHw::FlatRead8((r30 + 2));
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_39 & -256);
    r0 = (r0 | 255);
    r5 = (r3 | r0);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r20));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r19));
}

loc_80988DA8:
{
    r3 = (r1 + 48);
    r4 = r17;
    r5 = MemoryHw::FlatRead32((r1 + 16));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r18 = (r18 + 1);
    r16 = (r16 + 20);
}

loc_80988DCC:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(5))) {
        goto loc_80988CF0;
    }
}

loc_80988DD0:
{
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80988DE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80988DF4;
    }
}

loc_80988DE4:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -5760);
    r14 = (r3 + 60);
    goto loc_80988E08;
}

loc_80988DF4:
{
}

loc_80988DF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80989584;
    }
}

loc_80988DFC:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -5760);
    r14 = (r3 + 160);
}

loc_80988E08:
{
    r3 = (r1 + 48);
    r4 = r14;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_11 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_11, 0u, r4);
    guest_range_12 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_12, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_11, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_12, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_11, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_12, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_11, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_12, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_11, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_12, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_11, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_12, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_11, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_12, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_11, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_12, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_11, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_12, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_11, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_12, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8(r14);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r3 = 0x809A0000u;
    r21 = (r3 + -1248);
    r21_addr_1 = (r21 + r0);
    r4 = MemoryHw::FlatRead32(r21_addr_1);
    r0 = MemoryHw::FlatRead16((r14 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_42 & -4);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r4 = (r4 + r0);
    r3 = -7340032;
    r5 = (r3 + 255);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r0 = 65;
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = 82;
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988E64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r26 = 0;
    r3 = 0x809A0000u;
    r22 = (r3 + -5080);
    r20 = 0x809A0000u;
    r19 = (r20 + -5160);
    r17 = -757923840;
    r18 = -252641280;
    r16 = 0x809D0000u;
    r15 = 51;
    r14 = 6;
}

loc_80988E8C:
{
    r24 = MemoryHw::FlatRead16(r22);
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    r25 = MemoryHw::FlatRead16((r22 + 2));
    r25 = (r25 << 16);
    r25 = (static_cast<int32_t>(r25) >> 16);
}

loc_80988E98:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r27))) {
        goto loc_80988EF4;
    }
}

loc_80988E9C:
{
    r3 = (r1 + 48);
    r4 = (r20 + -5160);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_28 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_28, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_28, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_28, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_28, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_28, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_28, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_28, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_28, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_28, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_28, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r24));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r25));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_45 & -4);
    r21_addr_3 = (r21 + r0);
    r4 = MemoryHw::FlatRead32(r21_addr_3);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_46 & -4);
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_47 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988EE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    r4 = (r19 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_29 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_29, 0u, r4);
    guest_range_30 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_30, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_29, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_30, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_29, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_30, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_29, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_30, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_29, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_30, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_29, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_30, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_29, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_30, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_29, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_30, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_29, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_30, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_29, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_30, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r29 = (r18 + -3841);
    goto loc_80988F04;
}

loc_80988EF4:
{
    r3 = (r1 + 48);
    r4 = (r19 + 40);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_31 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_31, 0u, r4);
    guest_range_32 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_32, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_31, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_32, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_31, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_32, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_31, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_32, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_31, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_32, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_31, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_32, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_31, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_32, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_31, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_32, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_31, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_32, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_31, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_32, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r29 = (r17 + -11521);
}

loc_80988F04:
{
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r24));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r25));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_49 & -4);
    r21_addr_5 = (r21 + r0);
    r4 = MemoryHw::FlatRead32(r21_addr_5);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_50 & -4);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_51 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988F3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    r4 = (r19 + 60);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_33 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_33, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_33, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_33, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_33, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_33, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_33, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_33, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_33, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_33, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_33, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = (r24 + 5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = (r25 + 6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_52 & -4);
    r21_addr_6 = (r21 + r0);
    r23 = MemoryHw::FlatRead32(r21_addr_6);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_53 & -4);
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_54 & -2);
    r23 = (r23 + r0);
    r3 = MemoryHw::FlatRead32((r16 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_80988F88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80988FA8;
    }
}

loc_80988F8C:
{
    r3 = (r26 & 255);
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 10);
    r7 = (r1 + 8);
    // inline leaf 0x801FB2A4 (26 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_55 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + -28748);
    addr_lhax_801FB2B4_loc_0 = (r3 + r0);
    r0 = MemoryHw::FlatRead16(addr_lhax_801FB2B4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r0 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + -29132);
    r8 = (r0 + r8);
    r0 = MemoryHw::FlatRead16(r8);
    MemoryHw::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r8 + 3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_5 & -16777216);
    r0 = MemoryHw::FlatRead8((r8 + 4));
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_56 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryHw::FlatRead8((r8 + 5));
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_57 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryHw::FlatWriteRam32(r4, r0);
    r0 = MemoryHw::FlatRead16((r8 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r8 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801FB2A4
    goto loc_80988FC0;
}

loc_80988FA8:
{
    r3 = (r26 & 255);
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 10);
    r7 = (r1 + 8);
    // inline leaf 0x801FB23C (26 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_58 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + -28776);
    addr_lhax_801FB24C_loc_0 = (r3 + r0);
    r0 = MemoryHw::FlatRead16(addr_lhax_801FB24C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r0 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + -29132);
    r8 = (r0 + r8);
    r0 = MemoryHw::FlatRead16(r8);
    MemoryHw::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r8 + 3));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_6 & -16777216);
    r0 = MemoryHw::FlatRead8((r8 + 4));
    r0_rot_59 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_59 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryHw::FlatRead8((r8 + 5));
    r0_rot_60 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_60 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryHw::FlatWriteRam32(r4, r0);
    r0 = MemoryHw::FlatRead16((r8 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r8 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801FB23C
}

loc_80988FC0:
{
    r3 = (r1 + 48);
    r4 = r23;
    r5 = MemoryHw::FlatRead32((r1 + 16));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80988FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryHw::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r24));
    MemoryHw::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r25));
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r15));
    MemoryHw::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r14));
    r3 = 0;
    r4 = MemoryHw::FlatRead16((r1 + 12));
    // inline leaf 0x80211E80 (19 guest instruction(s))
}

loc_inl50_0x80211E80:
{
    r0 = (r3 & 255);
}

loc_inl50_0x80211E88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(5))) {
        goto loc_inl50_0x80211EA8;
    }
}

loc_inl50_0x80211E8C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r4 = (r4 & 65535);
    r3 = 0x805C0000u;
    r3 = (r3 + -25584);
    r3_addr_12 = (r3 + r5);
    r0 = MemoryHw::FlatRead32(r3_addr_12);
}

loc_inl50_0x80211EA4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl50_0x80211EB8;
    }
}

loc_inl50_0x80211EA8:
{
    r3 = MemoryHw::FlatRead32((r13 + -17204));
    r3 = MemoryHw::FlatRead32((r3 + 4));
    r3 = MemoryHw::FlatRead32(r3);
    goto loc_inl50_cont_80211E80;
}

loc_inl50_0x80211EB8:
{
    r3 = MemoryHw::FlatRead32((r13 + -17204));
    r3_addr_13 = (r3 + r5);
    r3 = MemoryHw::FlatRead32(r3_addr_13);
    r0_rot_62 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_62 & -4);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_14);
}

loc_inl50_cont_80211E80:
{
    // end of inlined leaf 0x80211E80
    r7 = r3;
    r3 = (r1 + 20);
    r4 = 18;
    r5 = 18;
    r6 = r29;
    r8 = 5;
    r9 = (r1 + 24);
    ctx->lr = 0x80989014u;
    if constexpr (KnownRegArgsCpuCall<0x802E2104u>(&func_802E2104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802E2104_2F127 = func_802E2104_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2104_2F127);
        r4 = static_cast<uint32_t>(regargs_result_802E2104_2F127 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802E2104u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = (r22 + 4);
    r26 = (r26 + 1);
}

loc_80989020:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(12))) {
        goto loc_80988E8C;
    }
}

loc_80989024:
{
    r0 = MemoryHw::FlatRead32((r1 + 148));
}

loc_8098902C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80989584;
    }
}

loc_80989030:
{
    ctx->lr = 0x80989034u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B67E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0x809A0000u;
    r14 = (r3 + -5284);
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -5032);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_13 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_13, 0u, r4);
    guest_range_14 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_14, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_13, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_14, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_13, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_14, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_13, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_14, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_13, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_14, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_13, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_14, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_13, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_14, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_13, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_14, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_13, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_14, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_13, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_14, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = MemoryHw::FlatRead16((r14 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 144));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 0x80990000u;
    f3.d = MemoryHw::FlatReadFloat64((r3 + 14696));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 120));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = 0x80660000u;
    r0 = MemoryHw::FlatRead16((r3 + -19268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r4 = (r3 + -19268);
    f0.d = MemoryHw::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 128), f0.d);
    r3 = fctiwzword3;
    r3 = (r3 & 65535);
    r0 = MemoryHw::FlatRead16((r14 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 120));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryHw::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryHw::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 136), f0.d);
    r4 = fctiwzword4;
    r4 = (r4 & 65535);
    r5 = (r1 + 16);
    ctx->lr = 0x80989100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B6A10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r0 = MemoryHw::FlatRead32((r1 + 16));
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_64 & -256);
    r0 = (r0 | 255);
    MemoryHw::FlatWriteRam32((r1 + 16), r0);
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_65 & 255);
    MemoryHw::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead32((r1 + 16));
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_66 & 255);
    MemoryHw::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead32((r1 + 16));
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_67 & 255);
    MemoryHw::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 62));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_68 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_68 & 1);
    r0 = (r0 + r3);
    r4 = (static_cast<int32_t>(r0) >> 1);
    r3 = MemoryHw::FlatRead16((r14 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 144));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (r0 - r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 64));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_69 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryHw::FlatRead16((r14 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r31);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_70 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_70 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1248);
    r3_addr_17 = (r3 + r0);
    r14 = MemoryHw::FlatRead32(r3_addr_17);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_71 & -4);
    r0_rot_72 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_72 & -2);
    r14 = (r14 + r0);
    ctx->lr = 0x809891A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r3 = (r1 + 48);
    r4 = r14;
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809891BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989584;
}

loc_809891C0:
{
    r14 = 4;
    r4 = MemoryHw::FlatRead8((r4 + 4326));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    goto loc_80989218;
}

loc_809891D0:
{
    r14 = 9;
    r4 = MemoryHw::FlatRead8((r4 + 4334));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    goto loc_80989218;
}

loc_809891E0:
{
    r14 = 10;
    r4 = MemoryHw::FlatRead8((r4 + 4335));
    goto loc_80989218;
}

loc_809891EC:
{
    r14 = 13;
    r4 = MemoryHw::FlatRead8((r4 + 4336));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    goto loc_80989218;
}

loc_809891FC:
{
    r14 = 11;
    r4 = MemoryHw::FlatRead8((r4 + 4337));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    goto loc_80989218;
}

loc_8098920C:
{
    r14 = 20;
    r4 = MemoryHw::FlatRead8((r4 + 4345));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80989218:
{
    r0 = 7;
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r0 = 0;
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    r0 = (r4 + -7);
    r30 = (r0 & r3);
    r29 = (r4 - r30);
    MemoryHw::FlatWriteRam32((r1 + 152), r30);
    r3 = 18;
    r4 = 18;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl52_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl52_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl52_return;
    }
}

loc_inl52_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl52_cont_8005B714;
}

loc_inl52_return:
{
}

loc_inl52_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r31 = 0;
    r3 = 0x809A0000u;
    r19 = (r3 + -5416);
    r24 = 0x809A0000u;
    r20 = 538968064;
    r21 = -791609344;
    r22 = -252641280;
    r23 = 0x809D0000u;
    r25 = 0x809A0000u;
}

loc_8098926C:
{
}

loc_80989270:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r14))) {
        goto loc_80989488;
    }
}

loc_80989274:
{
    r15 = MemoryHw::FlatRead16(r19);
    r15 = (r15 << 16);
    r15 = (static_cast<int32_t>(r15) >> 16);
    r16 = MemoryHw::FlatRead16((r19 + 2));
    r16 = (r16 << 16);
    r16 = (static_cast<int32_t>(r16) >> 16);
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -5496);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_34 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_34, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_34, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_34, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_34, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_34, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_34, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_34, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_34, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_34, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_34, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_74 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_74 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1248);
    r3_addr_19 = (r3 + r0);
    r4 = MemoryHw::FlatRead32(r3_addr_19);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_75 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_75 & -4);
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_76 & -2);
    r4 = (r4 + r0);
    r0 = MemoryHw::FlatRead16((r1 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r15);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r1 + 60));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r16);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
}

loc_809892CC:
{
    r3 = -1229258752;
    r5 = (r3 + -27649);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r29))) {
        goto loc_809892E0;
    }
}

loc_809892D8:
{
    r3 = -90177536;
    r5 = (r3 + 5375);
}

loc_809892E0:
{
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809892F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    r4 = (r25 + -5496);
    r4 = (r4 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_35 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_35, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_35, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_35, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_35, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_35, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_35, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_35, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_35, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_35, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_35, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_77 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_77 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1248);
    r3_addr_20 = (r3 + r0);
    r4 = MemoryHw::FlatRead32(r3_addr_20);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_78 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_78 & -4);
    r0_rot_79 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_79 & -2);
    r4 = (r4 + r0);
    r0 = MemoryHw::FlatRead16((r1 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r15);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r1 + 60));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r16);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
}

loc_80989344:
{
    r3 = 1447559168;
    r5 = (r3 + 14079);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r29))) {
        goto loc_80989358;
    }
}

loc_80989350:
{
    r3 = 807927808;
    r5 = (r3 + 7935);
}

loc_80989358:
{
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x8098936Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_80 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30816);
    r3_addr_21 = (r3 + r0);
    r26 = MemoryHw::FlatRead32(r3_addr_21);
    r27 = 0;
    r18 = (r16 + 4);
    r17 = (r15 + 32);
    r16 = (r16 + 2);
    r15 = (r15 + 30);
}

loc_8098939C:
{
}

loc_809893A0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_809893BC;
    }
}

loc_809893A4:
{
    r3 = r17;
    r4 = r18;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl55_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl55_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl55_return;
    }
}

loc_inl55_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl55_cont_8005B780;
}

loc_inl55_return:
{
}

loc_inl55_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = (r20 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl56_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl56_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl56_return;
    }
}

loc_inl56_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl56_cont_8005B7EC;
}

loc_inl56_return:
{
}

loc_inl56_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_809893E4;
}

loc_809893BC:
{
    r3 = r15;
    r4 = r16;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl57_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl57_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl57_return;
    }
}

loc_inl57_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl57_cont_8005B780;
}

loc_inl57_return:
{
}

loc_inl57_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
}

loc_809893CC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r29))) {
        goto loc_809893DC;
    }
}

loc_809893D0:
{
    r3 = (r21 + -12033);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl58_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl58_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl58_return;
    }
}

loc_inl58_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl58_cont_8005B7EC;
}

loc_inl58_return:
{
}

loc_inl58_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_809893E4;
}

loc_809893DC:
{
    r3 = (r22 + -3841);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl59_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl59_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl59_return;
    }
}

loc_inl59_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl59_cont_8005B7EC;
}

loc_inl59_return:
{
}

loc_inl59_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
}

loc_809893E4:
{
    r3 = MemoryHw::FlatRead32((r23 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_809893F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8098943C;
    }
}

loc_809893F4:
{
}

loc_809893F8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8098940C;
    }
}

loc_809893FC:
{
    r3 = MemoryHw::FlatRead32((r26 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989408u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_3645E = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_3645E);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_3645E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989468;
}

loc_8098940C:
{
    r3 = MemoryHw::FlatRead32(r26);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989418u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_36E87 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_36E87);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_36E87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    r4 = (r24 + -364);
    r5 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098942Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_37897 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_37897);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_37897 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989438u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_38282 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_38282);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_38282 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989468;
}

loc_8098943C:
{
    r3 = MemoryHw::FlatRead32(r26);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989448u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_38CAB = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_38CAB);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_38CAB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    r4 = (r24 + -364);
    r5 = (r30 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098945Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_396C1 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_396C1);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_396C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989468u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_3A0AC = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_3A0AC);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_3A0AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989468:
{
    r27 = (r27 + 1);
}

loc_80989470:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_8098939C;
    }
}

loc_80989474:
{
    r19 = (r19 + 4);
    r31 = (r31 + 1);
    r30 = (r30 + 1);
}

loc_80989484:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(8))) {
        goto loc_8098926C;
    }
}

loc_80989488:
{
    r3 = (r1 + 48);
    r4 = 0x809D0000u;
    r4 = MemoryHw::FlatRead32((r4 + 13672));
    r4 = MemoryHw::FlatRead8((r4 + 4346));
    r0 = (r4 + -2);
    r5 = (r0 * 20);
    r4 = 0x809A0000u;
    r0 = (r4 + -5760);
    r4 = (r0 + r5);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_15 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_15, 0u, r4);
    guest_range_16 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_16, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_15, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_16, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_15, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_16, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_15, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_16, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_15, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_16, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_15, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_16, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_15, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_16, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_15, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_16, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_15, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_16, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_15, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_16, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = -7340032;
    r5 = (r3 + 255);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r0 = 103;
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = 73;
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_82 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_82 & -4);
    r3 = 0x809A0000u;
    r16 = (r3 + -1248);
    r16_addr_1 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_1);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_83 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_83 & -4);
    r0_rot_84 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_84 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80989500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0x809A0000u;
    r15 = (r3 + -5456);
    r0 = MemoryHw::FlatRead32((r1 + 152));
}

loc_80989510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80989544;
    }
}

loc_80989514:
{
    r0 = MemoryHw::FlatRead8(r15);
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_85 & -4);
    r16_addr_2 = (r16 + r0);
    r4 = MemoryHw::FlatRead32(r16_addr_2);
    r0 = MemoryHw::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_86 & -4);
    r0_rot_87 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_87 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryHw::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80989544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989544:
{
}

loc_80989548:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r14))) {
        goto loc_80989584;
    }
}

loc_8098954C:
{
    r0 = MemoryHw::FlatRead8((r15 + 20));
    r0_rot_89 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_89 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1248);
    r3_addr_23 = (r3 + r0);
    r4 = MemoryHw::FlatRead32(r3_addr_23);
    r0 = MemoryHw::FlatRead16((r15 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_90 & -4);
    r0_rot_91 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_91 & -2);
    r4 = (r4 + r0);
    r3 = (r15 + 20);
    r5 = MemoryHw::FlatRead32((r15 + 24));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80989584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989584:
{
    r0 = MemoryHw::FlatRead32((r1 + 148));
}

loc_8098958C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80989598;
    }
}

loc_80989590:
{
    r3 = 0;
    ctx->lr = 0x80989598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x809878B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989598:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_93 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_93 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31368);
    r3_addr_25 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_25);
    r3 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r3 + 13672));
    r14 = MemoryHw::FlatRead8((r3 + 4346));
}

loc_809895C4:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_80989CAC;
    }
}

loc_809895C8:
{
    r15 = (r28 + 94);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = 390;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl61_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl61_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl61_return;
    }
}

loc_inl61_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl61_cont_8005B780;
}

loc_inl61_return:
{
}

loc_inl61_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 538968064;
    r3 = (r3 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl62_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl62_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl62_return;
    }
}

loc_inl62_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl62_cont_8005B7EC;
}

loc_inl62_return:
{
}

loc_inl62_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r0 = (r14 + -1);
    r14_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r14 = (r14_rot_1 & -4);
    r16_addr_5 = (r16 + r14);
    r3 = MemoryHw::FlatRead32(r16_addr_5);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809895FCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_3D8DA = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_3D8DA);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_3D8DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = 388;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl63_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl63_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl63_return;
    }
}

loc_inl63_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl63_cont_8005B780;
}

loc_inl63_return:
{
}

loc_inl63_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl64_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl64_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl64_return;
    }
}

loc_inl64_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl64_cont_8005B7EC;
}

loc_inl64_return:
{
}

loc_inl64_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r16_addr_6 = (r16 + r14);
    r3 = MemoryHw::FlatRead32(r16_addr_6);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098961Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_3E79C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_3E79C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_3E79C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989CAC;
}

loc_80989620:
{
    r18 = 0x809D0000u;
    r6 = MemoryHw::FlatRead32((r18 + 13672));
    r0 = MemoryHw::FlatRead8((r6 + 4311));
    r4 = (r0 * 20);
    r3 = 0x809A0000u;
    r0 = (r3 + -4876);
    r21 = (r0 + r4);
    r0 = MemoryHw::FlatRead8(r21);
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_98 & -4);
    r3 = 0x809A0000u;
    r17 = (r3 + -1248);
    r17_addr_1 = (r17 + r0);
    r14 = MemoryHw::FlatRead32(r17_addr_1);
    r0 = MemoryHw::FlatRead16((r21 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_99 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_99 & -4);
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_100 & -2);
    r14 = (r14 + r0);
    r3 = -90177536;
    r5 = (r3 + 5120);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r0 = MemoryHw::FlatRead32((r6 + 4172));
    r3 = 0x80990000u;
    f1.d = MemoryHw::FlatReadFloat64((r3 + 14688));
    MemoryHw::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14712));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14716));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80985644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x80990000u;
    f0.d = MemoryHw::FlatReadFloat32((r3 + 14708));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80457360_3F866 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_3F866;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + 60);
    r3 = (r0 & 255);
    r0 = MemoryHw::FlatRead32((r1 + 16));
    r5 = (r0 | r3);
    MemoryHw::FlatWriteRam32((r1 + 16), r5);
    r3 = r21;
    r4 = r14;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x809896D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r24 = 0;
    r3 = 0x809A0000u;
    r19 = (r3 + -4888);
    r20 = 0;
    r16 = 0x809A0000u;
    r3 = 0x809A0000u;
    r15 = (r3 + -4736);
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
    r14 = 0x809A0000u;
}

loc_80989700:
{
    r0 = MemoryHw::FlatRead32((r18 + 13672));
    r3 = (r0 + r24);
    r0 = MemoryHw::FlatRead8((r3 + 4308));
}

loc_80989710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80989728;
    }
}

loc_80989714:
{
    r3 = (r1 + 48);
    r4 = 0x809A0000u;
    r4 = (r4 + -4928);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_36 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_36, 0u, r4);
    guest_range_37 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_37, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_36, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_37, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_36, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_37, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_36, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_37, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_36, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_37, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_36, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_37, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_36, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_37, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_36, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_37, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_36, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_37, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_36, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_37, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    goto loc_80989738;
}

loc_80989728:
{
    r3 = (r1 + 48);
    r4 = (r14 + -4928);
    r4 = (r4 + 20);
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_38 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_38, 0u, r4);
    guest_range_39 = MemoryHw::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryHw::WriteResolved8(guest_range_39, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_38, 1u, (r4 + 1));
    MemoryHw::WriteResolved8(guest_range_39, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_38, 2u, (r4 + 2));
    MemoryHw::WriteResolved8(guest_range_39, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_38, 3u, (r4 + 3));
    MemoryHw::WriteResolved8(guest_range_39, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_38, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_39, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_38, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_39, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_38, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_39, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_38, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_39, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_38, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_39, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_38, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_39, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
}

loc_80989738:
{
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_102 & -4);
    r17_addr_3 = (r17 + r0);
    r4 = MemoryHw::FlatRead32(r17_addr_3);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_103 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_103 & -4);
    r0_rot_104 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_104 & -2);
    r4 = (r4 + r0);
    r3 = MemoryHw::FlatRead16((r1 + 58));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16(r19);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 60));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r19 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r21 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80989788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r25 = MemoryHw::FlatRead16(r19);
    r25 = (r25 << 16);
    r25 = (static_cast<int32_t>(r25) >> 16);
    r26 = MemoryHw::FlatRead16((r19 + 2));
    r26 = (r26 << 16);
    r26 = (static_cast<int32_t>(r26) >> 16);
    r4 = MemoryHw::FlatRead32((r18 + 13672));
    r3 = (r4 + r24);
    r0 = MemoryHw::FlatRead8((r3 + 4308));
}

loc_809897A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80989B1C;
    }
}

loc_809897A4:
{
    r3 = (r4 + r20);
    r29 = MemoryHw::FlatRead32((r3 + 4296));
    r23 = 0;
    r3 = 0x809A0000u;
    r22 = (r3 + -4816);
}

loc_809897B8:
{
}

loc_809897BC:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(3))) {
        goto loc_809897CC;
    }
}

loc_809897C0:
{
    r0 = MemoryHw::FlatRead16((r29 + 15844));
}

loc_809897C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80989820;
    }
}

loc_809897CC:
{
    r3 = (r1 + 48);
    r4 = r22;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_40 = MemoryHw::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryHw::ReadResolved8(guest_range_40, 0u, r4);
    MemoryHw::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_40, 1u, (r4 + 1));
    MemoryHw::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_40, 2u, (r4 + 2));
    MemoryHw::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_40, 3u, (r4 + 3));
    MemoryHw::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_40, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_40, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_40, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_40, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_40, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_40, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryHw::FlatRead16((r1 + 58));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r25);
    MemoryHw::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r1 + 60));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r26);
    MemoryHw::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead8((r1 + 48));
    r0_rot_106 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_106 & -4);
    r17_addr_5 = (r17 + r0);
    r4 = MemoryHw::FlatRead32(r17_addr_5);
    r0 = MemoryHw::FlatRead16((r1 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_107 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_107 & -4);
    r0_rot_108 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_108 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 48);
    r5 = MemoryHw::FlatRead32((r1 + 52));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x80989820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80984FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989820:
{
    r22 = (r22 + 20);
    r23 = (r23 + 1);
}

loc_8098982C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_809897B8;
    }
}

loc_80989830:
{
    r25 = (r25 + r28);
    r0 = (r25 + 82);
    r22 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r26 + 11);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r29 + 3);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456C40_432B3 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_432B3);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_432B3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r0_subfic_ra_2 = r0;
    r0 = (134 - r0_subfic_ra_2);
    r0_rot_110 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_110 & 2147483647);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = (r22 + r0);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl68_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl68_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl68_return;
    }
}

loc_inl68_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl68_cont_8005B714;
}

loc_inl68_return:
{
}

loc_inl68_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r3 = (r3 + 2);
    r4 = (r23 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl69_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl69_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl69_return;
    }
}

loc_inl69_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl69_cont_8005B780;
}

loc_inl69_return:
{
}

loc_inl69_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl70_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl70_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl70_return;
    }
}

loc_inl70_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl70_cont_8005B7EC;
}

loc_inl70_return:
{
}

loc_inl70_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r29 + 3);
    ctx->lr = 0x8098988Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BAB4_43EA9 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_43EA9);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_43EA9 >> 32);
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = r23;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl71_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl71_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl71_return;
    }
}

loc_inl71_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl71_cont_8005B780;
}

loc_inl71_return:
{
}

loc_inl71_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryHw::FlatRead32((r16 + -4704));
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl72_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl72_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl72_return;
    }
}

loc_inl72_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl72_cont_8005B7EC;
}

loc_inl72_return:
{
}

loc_inl72_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r29 + 3);
    ctx->lr = 0x809898A8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BAB4_44A91 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_44A91);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_44A91 >> 32);
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 18;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B714_45105 = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_45105;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B714u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r22 = MemoryHw::FlatRead16((r15 + 6));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r23 = MemoryHw::FlatRead16((r15 + 8));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r27 = MemoryHw::FlatRead16((r15 + 10));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    r0 = MemoryHw::FlatRead8((r31 + 9));
    r0_rot_111 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_111 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31488);
    r3_addr_27 = (r3 + r0);
    r30 = MemoryHw::FlatRead32(r3_addr_27);
    r0 = MemoryHw::FlatRead8(r29);
    r0_rot_112 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_112 & -4);
    r30_addr_2 = (r30 + r0);
    r3 = MemoryHw::FlatRead32(r30_addr_2);
    ctx->lr = 0x809898E4u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B8D8_4572D = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_4572D);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_4572D >> 32);
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
    r0_rot_113 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_113 & -8);
    r0 = (r0 + r3);
    r3 = (r27 - r0);
    r0_rot_114 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_114 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = (r22 + r0);
    r22 = (r22 + r25);
    r23 = (r23 + r26);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = (r4 + 2);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_45D95 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_45D95;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_46009 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_46009;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryHw::FlatRead8(r29);
    r0_rot_115 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_115 & -4);
    r30_addr_3 = (r30 + r0);
    r3 = MemoryHw::FlatRead32(r30_addr_3);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098993Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_46496 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_46496);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_46496 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_46D53 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_46D53;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryHw::FlatRead8(r29);
    r0_rot_116 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_116 & -4);
    r3 = (r16 + -4704);
    r3 = (r3 + r0);
    r3 = MemoryHw::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_470AC = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_470AC;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryHw::FlatRead8(r29);
    r0_rot_117 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_117 & -4);
    r30_addr_4 = (r30 + r0);
    r3 = MemoryHw::FlatRead32(r30_addr_4);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989974u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_47539 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_47539);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_47539 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryHw::FlatRead32((r29 + 28));
    r3 = 0x91A30000u;
    r3 = (r3 + -19515);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r3 = (r3 + r0);
    r3 = (static_cast<int32_t>(r3) >> 11);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r5 = (r3 + r4);
    r3 = (r5 * 3600);
    r0 = (r0 - r3);
    r3 = (r1 + 32);
    r4 = 0x809A0000u;
    r4 = (r4 + -4656);
    r4 = MemoryHw::FlatRead32((r4 + 8));
    r6 = 0x88890000u;
    r6 = (r6 + -30583);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r6 + r0);
    r0 = (static_cast<int32_t>(r0) >> 5);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r6 = (r0 + r6);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809899D0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_482C8 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_482C8);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_482C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = MemoryHw::FlatRead16((r15 + 12));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r23 = MemoryHw::FlatRead16((r15 + 14));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r22 = (r22 + r25);
    r23 = (r23 + r26);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = (r4 + 2);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_48CC1 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_48CC1;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_48F35 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_48F35;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989A08u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_492F0 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_492F0);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_492F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_49BAD = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_49BAD;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryHw::FlatRead32((r16 + -4704));
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_49E45 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_49E45;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989A28u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_4A200 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4A200);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4A200 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    r4 = 0x809A0000u;
    r4 = (r4 + -4656);
    r4 = MemoryHw::FlatRead32((r4 + 12));
    r5 = MemoryHw::FlatRead32((r29 + 24));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989A44u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_4AC75 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_4AC75);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_4AC75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = MemoryHw::FlatRead16((r15 + 18));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r23 = MemoryHw::FlatRead16((r15 + 20));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r22 = (r22 + r25);
    r23 = (r23 + r26);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = (r4 + 2);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_4B66E = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_4B66E;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_4B8E2 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_4B8E2;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_4BC9D = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4BC9D);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4BC9D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_4C55A = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_4C55A;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryHw::FlatRead32((r16 + -4704));
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_4C7F2 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_4C7F2;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_4CBAD = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4CBAD);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4CBAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r5 = MemoryHw::FlatRead16((r29 + 15844));
}

loc_80989AA4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80989BEC;
    }
}

loc_80989AA8:
{
    r3 = (r1 + 32);
    r4 = 0x809A0000u;
    r4 = (r4 + -368);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989ABCu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_4D67E = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_4D67E);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_4D67E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = MemoryHw::FlatRead16((r15 + 24));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r23 = MemoryHw::FlatRead16((r15 + 26));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r22 = (r22 + r25);
    r23 = (r23 + r26);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = (r4 + 2);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_4E077 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_4E077;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_4E2EB = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_4E2EB;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989AF4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_4E6A6 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4E6A6);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4E6A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_4EF63 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_4EF63;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r16 + -4704);
    r3 = MemoryHw::FlatRead32((r3 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_4F20F = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_4F20F;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989B18u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_4F5CA = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4F5CA);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4F5CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989BEC;
}

loc_80989B1C:
{
    r0 = MemoryHw::FlatRead8((r31 + 9));
    r0_rot_118 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_118 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31464);
    r3_addr_28 = (r3 + r0);
    r22 = MemoryHw::FlatRead32(r3_addr_28);
    r3 = 22;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B714_4FF6C = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_4FF6C;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B714u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryHw::FlatRead32((r18 + 13672));
    r3 = (r0 + r24);
    r0 = MemoryHw::FlatRead8((r3 + 4308));
}

loc_80989B4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80989BA0;
    }
}

loc_80989B50:
{
    r3 = MemoryHw::FlatRead32(r22);
    ctx->lr = 0x80989B58u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B8D8_50365 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_50365);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_50365 >> 32);
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
    r0 = (r3 * 11);
    r3 = (154 - r0);
    r0_rot_119 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_119 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = (r25 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + 72);
    r4 = (r26 + 40);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_508CB = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_508CB;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 1511260160;
    r3 = (r3 + 255);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_50B5B = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_50B5B;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryHw::FlatRead32(r22);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_50F2A = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_50F2A);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_50F2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80989BEC;
}

loc_80989BA0:
{
    r3 = MemoryHw::FlatRead32((r22 + 4));
    ctx->lr = 0x80989BA8u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B8D8_51830 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_51830);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_51830 >> 32);
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
    r0 = (r3 * 11);
    r3 = (154 - r0);
    r0_rot_120 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_120 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = (r25 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + 72);
    r4 = (r26 + 40);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_51D96 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_51D96;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 168427520;
    r3 = (r3 + 2815);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_52026 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_52026;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryHw::FlatRead32((r22 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989BECu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_523FB = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_523FB);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_523FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989BEC:
{
    r19 = (r19 + 4);
    r20 = (r20 + 4);
    r24 = (r24 + 1);
}

loc_80989BFC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(3))) {
        goto loc_80989700;
    }
}

loc_80989C00:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 9));
    r0_rot_122 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_122 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31080);
    r3_addr_30 = (r3 + r0);
    r16 = MemoryHw::FlatRead32(r3_addr_30);
    r3 = 18;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B714_52E7A = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_52E7A;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B714u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r15 = (r28 + 94);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = 390;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_53153 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_53153;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 538968064;
    r3 = (r3 + 8447);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_533E3 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_533E3;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r14 = 0x809D0000u;
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 2));
    r0_rot_123 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_123 & -4);
    r16_addr_7 = (r16 + r0);
    r3 = MemoryHw::FlatRead32(r16_addr_7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989C64u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_538BE = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_538BE);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_538BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = 388;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B780_5414D = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_5414D;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = -1;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8005B7EC_543C0 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_543C0;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 2));
    r0_rot_124 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_124 & -4);
    r16_addr_8 = (r16 + r0);
    r3 = MemoryHw::FlatRead32(r16_addr_8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80989C90u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005BA04_54884 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_54884);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_54884 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005BA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryHw::FlatRead32((r14 + 13672));
    r0 = MemoryHw::FlatRead8((r3 + 2));
}

loc_80989C9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80989CAC;
    }
}

loc_80989CA0:
{
    r3 = MemoryHw::FlatRead8((r3 + 4186));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    ctx->lr = 0x80989CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80987C8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80989CAC:
{
    r0 = 248;
    addr_psqx_80989CB0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80989CB0_loc_0));
    f31.d = MemoryHw::FlatReadFloat64((r1 + 240));
    r11 = (r1 + 240);
    r0 = MemoryHw::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80987E9C func_80987E9C preserves=true fpr_mask=0x00000000
