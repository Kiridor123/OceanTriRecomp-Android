#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A67C(CpuContext* ctx);
extern "C" uint32_t func_8026A67C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A6A8(CpuContext* ctx);
extern "C" uint32_t func_8026A6A8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A6DC(CpuContext* ctx);
extern "C" uint32_t func_8026A6DC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A758(CpuContext* ctx);
extern "C" uint32_t func_8026A758_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026BA00(CpuContext* ctx);
extern "C" uint32_t func_8026BA00_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026CC48(CpuContext* ctx);
extern "C" uint32_t func_8026CC48_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FA08(CpuContext* ctx);
extern "C" uint64_t func_8026FA08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FAD0(CpuContext* ctx);
extern "C" uint64_t func_8026FAD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FB84(CpuContext* ctx);
extern "C" uint64_t func_8026FB84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026FCA4(CpuContext* ctx);
extern "C" uint64_t func_8026FCA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8026CCE0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_100 = 0;
    uint32_t r0_addze_src_101 = 0;
    uint32_t r0_addze_src_102 = 0;
    uint32_t r0_addze_src_103 = 0;
    uint32_t r0_addze_src_104 = 0;
    uint32_t r0_addze_src_105 = 0;
    uint32_t r0_addze_src_106 = 0;
    uint32_t r0_addze_src_107 = 0;
    uint32_t r0_addze_src_108 = 0;
    uint32_t r0_addze_src_109 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_110 = 0;
    uint32_t r0_addze_src_111 = 0;
    uint32_t r0_addze_src_112 = 0;
    uint32_t r0_addze_src_113 = 0;
    uint32_t r0_addze_src_114 = 0;
    uint32_t r0_addze_src_115 = 0;
    uint32_t r0_addze_src_116 = 0;
    uint32_t r0_addze_src_117 = 0;
    uint32_t r0_addze_src_118 = 0;
    uint32_t r0_addze_src_119 = 0;
    uint32_t r0_addze_src_12 = 0;
    uint32_t r0_addze_src_120 = 0;
    uint32_t r0_addze_src_121 = 0;
    uint32_t r0_addze_src_122 = 0;
    uint32_t r0_addze_src_123 = 0;
    uint32_t r0_addze_src_124 = 0;
    uint32_t r0_addze_src_125 = 0;
    uint32_t r0_addze_src_126 = 0;
    uint32_t r0_addze_src_127 = 0;
    uint32_t r0_addze_src_128 = 0;
    uint32_t r0_addze_src_129 = 0;
    uint32_t r0_addze_src_13 = 0;
    uint32_t r0_addze_src_130 = 0;
    uint32_t r0_addze_src_131 = 0;
    uint32_t r0_addze_src_132 = 0;
    uint32_t r0_addze_src_133 = 0;
    uint32_t r0_addze_src_134 = 0;
    uint32_t r0_addze_src_135 = 0;
    uint32_t r0_addze_src_136 = 0;
    uint32_t r0_addze_src_137 = 0;
    uint32_t r0_addze_src_138 = 0;
    uint32_t r0_addze_src_139 = 0;
    uint32_t r0_addze_src_14 = 0;
    uint32_t r0_addze_src_140 = 0;
    uint32_t r0_addze_src_141 = 0;
    uint32_t r0_addze_src_142 = 0;
    uint32_t r0_addze_src_143 = 0;
    uint32_t r0_addze_src_144 = 0;
    uint32_t r0_addze_src_145 = 0;
    uint32_t r0_addze_src_146 = 0;
    uint32_t r0_addze_src_147 = 0;
    uint32_t r0_addze_src_148 = 0;
    uint32_t r0_addze_src_149 = 0;
    uint32_t r0_addze_src_15 = 0;
    uint32_t r0_addze_src_150 = 0;
    uint32_t r0_addze_src_151 = 0;
    uint32_t r0_addze_src_152 = 0;
    uint32_t r0_addze_src_153 = 0;
    uint32_t r0_addze_src_154 = 0;
    uint32_t r0_addze_src_155 = 0;
    uint32_t r0_addze_src_156 = 0;
    uint32_t r0_addze_src_16 = 0;
    uint32_t r0_addze_src_17 = 0;
    uint32_t r0_addze_src_18 = 0;
    uint32_t r0_addze_src_19 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_20 = 0;
    uint32_t r0_addze_src_21 = 0;
    uint32_t r0_addze_src_22 = 0;
    uint32_t r0_addze_src_23 = 0;
    uint32_t r0_addze_src_24 = 0;
    uint32_t r0_addze_src_25 = 0;
    uint32_t r0_addze_src_26 = 0;
    uint32_t r0_addze_src_27 = 0;
    uint32_t r0_addze_src_28 = 0;
    uint32_t r0_addze_src_29 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_30 = 0;
    uint32_t r0_addze_src_31 = 0;
    uint32_t r0_addze_src_32 = 0;
    uint32_t r0_addze_src_33 = 0;
    uint32_t r0_addze_src_34 = 0;
    uint32_t r0_addze_src_35 = 0;
    uint32_t r0_addze_src_36 = 0;
    uint32_t r0_addze_src_37 = 0;
    uint32_t r0_addze_src_38 = 0;
    uint32_t r0_addze_src_39 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_40 = 0;
    uint32_t r0_addze_src_41 = 0;
    uint32_t r0_addze_src_42 = 0;
    uint32_t r0_addze_src_43 = 0;
    uint32_t r0_addze_src_44 = 0;
    uint32_t r0_addze_src_45 = 0;
    uint32_t r0_addze_src_46 = 0;
    uint32_t r0_addze_src_47 = 0;
    uint32_t r0_addze_src_48 = 0;
    uint32_t r0_addze_src_49 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_50 = 0;
    uint32_t r0_addze_src_51 = 0;
    uint32_t r0_addze_src_52 = 0;
    uint32_t r0_addze_src_53 = 0;
    uint32_t r0_addze_src_54 = 0;
    uint32_t r0_addze_src_55 = 0;
    uint32_t r0_addze_src_56 = 0;
    uint32_t r0_addze_src_57 = 0;
    uint32_t r0_addze_src_58 = 0;
    uint32_t r0_addze_src_59 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_60 = 0;
    uint32_t r0_addze_src_61 = 0;
    uint32_t r0_addze_src_62 = 0;
    uint32_t r0_addze_src_63 = 0;
    uint32_t r0_addze_src_64 = 0;
    uint32_t r0_addze_src_65 = 0;
    uint32_t r0_addze_src_66 = 0;
    uint32_t r0_addze_src_67 = 0;
    uint32_t r0_addze_src_68 = 0;
    uint32_t r0_addze_src_69 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_addze_src_70 = 0;
    uint32_t r0_addze_src_71 = 0;
    uint32_t r0_addze_src_72 = 0;
    uint32_t r0_addze_src_73 = 0;
    uint32_t r0_addze_src_74 = 0;
    uint32_t r0_addze_src_75 = 0;
    uint32_t r0_addze_src_76 = 0;
    uint32_t r0_addze_src_77 = 0;
    uint32_t r0_addze_src_78 = 0;
    uint32_t r0_addze_src_79 = 0;
    uint32_t r0_addze_src_8 = 0;
    uint32_t r0_addze_src_80 = 0;
    uint32_t r0_addze_src_81 = 0;
    uint32_t r0_addze_src_82 = 0;
    uint32_t r0_addze_src_83 = 0;
    uint32_t r0_addze_src_84 = 0;
    uint32_t r0_addze_src_85 = 0;
    uint32_t r0_addze_src_86 = 0;
    uint32_t r0_addze_src_87 = 0;
    uint32_t r0_addze_src_88 = 0;
    uint32_t r0_addze_src_89 = 0;
    uint32_t r0_addze_src_9 = 0;
    uint32_t r0_addze_src_90 = 0;
    uint32_t r0_addze_src_91 = 0;
    uint32_t r0_addze_src_92 = 0;
    uint32_t r0_addze_src_93 = 0;
    uint32_t r0_addze_src_94 = 0;
    uint32_t r0_addze_src_95 = 0;
    uint32_t r0_addze_src_96 = 0;
    uint32_t r0_addze_src_97 = 0;
    uint32_t r0_addze_src_98 = 0;
    uint32_t r0_addze_src_99 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_100 = 0;
    uint32_t r0_ca_101 = 0;
    uint32_t r0_ca_102 = 0;
    uint32_t r0_ca_103 = 0;
    uint32_t r0_ca_104 = 0;
    uint32_t r0_ca_105 = 0;
    uint32_t r0_ca_106 = 0;
    uint32_t r0_ca_107 = 0;
    uint32_t r0_ca_108 = 0;
    uint32_t r0_ca_109 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_110 = 0;
    uint32_t r0_ca_111 = 0;
    uint32_t r0_ca_112 = 0;
    uint32_t r0_ca_113 = 0;
    uint32_t r0_ca_114 = 0;
    uint32_t r0_ca_115 = 0;
    uint32_t r0_ca_116 = 0;
    uint32_t r0_ca_117 = 0;
    uint32_t r0_ca_118 = 0;
    uint32_t r0_ca_119 = 0;
    uint32_t r0_ca_12 = 0;
    uint32_t r0_ca_120 = 0;
    uint32_t r0_ca_121 = 0;
    uint32_t r0_ca_122 = 0;
    uint32_t r0_ca_123 = 0;
    uint32_t r0_ca_124 = 0;
    uint32_t r0_ca_125 = 0;
    uint32_t r0_ca_126 = 0;
    uint32_t r0_ca_127 = 0;
    uint32_t r0_ca_128 = 0;
    uint32_t r0_ca_129 = 0;
    uint32_t r0_ca_13 = 0;
    uint32_t r0_ca_130 = 0;
    uint32_t r0_ca_131 = 0;
    uint32_t r0_ca_132 = 0;
    uint32_t r0_ca_133 = 0;
    uint32_t r0_ca_134 = 0;
    uint32_t r0_ca_135 = 0;
    uint32_t r0_ca_136 = 0;
    uint32_t r0_ca_137 = 0;
    uint32_t r0_ca_138 = 0;
    uint32_t r0_ca_139 = 0;
    uint32_t r0_ca_14 = 0;
    uint32_t r0_ca_140 = 0;
    uint32_t r0_ca_141 = 0;
    uint32_t r0_ca_142 = 0;
    uint32_t r0_ca_143 = 0;
    uint32_t r0_ca_144 = 0;
    uint32_t r0_ca_145 = 0;
    uint32_t r0_ca_146 = 0;
    uint32_t r0_ca_147 = 0;
    uint32_t r0_ca_148 = 0;
    uint32_t r0_ca_149 = 0;
    uint32_t r0_ca_15 = 0;
    uint32_t r0_ca_150 = 0;
    uint32_t r0_ca_151 = 0;
    uint32_t r0_ca_152 = 0;
    uint32_t r0_ca_153 = 0;
    uint32_t r0_ca_154 = 0;
    uint32_t r0_ca_155 = 0;
    uint32_t r0_ca_156 = 0;
    uint32_t r0_ca_16 = 0;
    uint32_t r0_ca_17 = 0;
    uint32_t r0_ca_18 = 0;
    uint32_t r0_ca_19 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_20 = 0;
    uint32_t r0_ca_21 = 0;
    uint32_t r0_ca_22 = 0;
    uint32_t r0_ca_23 = 0;
    uint32_t r0_ca_24 = 0;
    uint32_t r0_ca_25 = 0;
    uint32_t r0_ca_26 = 0;
    uint32_t r0_ca_27 = 0;
    uint32_t r0_ca_28 = 0;
    uint32_t r0_ca_29 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_30 = 0;
    uint32_t r0_ca_31 = 0;
    uint32_t r0_ca_32 = 0;
    uint32_t r0_ca_33 = 0;
    uint32_t r0_ca_34 = 0;
    uint32_t r0_ca_35 = 0;
    uint32_t r0_ca_36 = 0;
    uint32_t r0_ca_37 = 0;
    uint32_t r0_ca_38 = 0;
    uint32_t r0_ca_39 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_40 = 0;
    uint32_t r0_ca_41 = 0;
    uint32_t r0_ca_42 = 0;
    uint32_t r0_ca_43 = 0;
    uint32_t r0_ca_44 = 0;
    uint32_t r0_ca_45 = 0;
    uint32_t r0_ca_46 = 0;
    uint32_t r0_ca_47 = 0;
    uint32_t r0_ca_48 = 0;
    uint32_t r0_ca_49 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_50 = 0;
    uint32_t r0_ca_51 = 0;
    uint32_t r0_ca_52 = 0;
    uint32_t r0_ca_53 = 0;
    uint32_t r0_ca_54 = 0;
    uint32_t r0_ca_55 = 0;
    uint32_t r0_ca_56 = 0;
    uint32_t r0_ca_57 = 0;
    uint32_t r0_ca_58 = 0;
    uint32_t r0_ca_59 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_60 = 0;
    uint32_t r0_ca_61 = 0;
    uint32_t r0_ca_62 = 0;
    uint32_t r0_ca_63 = 0;
    uint32_t r0_ca_64 = 0;
    uint32_t r0_ca_65 = 0;
    uint32_t r0_ca_66 = 0;
    uint32_t r0_ca_67 = 0;
    uint32_t r0_ca_68 = 0;
    uint32_t r0_ca_69 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_70 = 0;
    uint32_t r0_ca_71 = 0;
    uint32_t r0_ca_72 = 0;
    uint32_t r0_ca_73 = 0;
    uint32_t r0_ca_74 = 0;
    uint32_t r0_ca_75 = 0;
    uint32_t r0_ca_76 = 0;
    uint32_t r0_ca_77 = 0;
    uint32_t r0_ca_78 = 0;
    uint32_t r0_ca_79 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_80 = 0;
    uint32_t r0_ca_81 = 0;
    uint32_t r0_ca_82 = 0;
    uint32_t r0_ca_83 = 0;
    uint32_t r0_ca_84 = 0;
    uint32_t r0_ca_85 = 0;
    uint32_t r0_ca_86 = 0;
    uint32_t r0_ca_87 = 0;
    uint32_t r0_ca_88 = 0;
    uint32_t r0_ca_89 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_ca_90 = 0;
    uint32_t r0_ca_91 = 0;
    uint32_t r0_ca_92 = 0;
    uint32_t r0_ca_93 = 0;
    uint32_t r0_ca_94 = 0;
    uint32_t r0_ca_95 = 0;
    uint32_t r0_ca_96 = 0;
    uint32_t r0_ca_97 = 0;
    uint32_t r0_ca_98 = 0;
    uint32_t r0_ca_99 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8026CCE0;

loc_8026CCE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = (r3 + 184);
    r4 = r31;
    // inline leaf 0x8026CCD4 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 112));
    // end of inlined leaf 0x8026CCD4
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_8026CD10:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_8026F7FC;
    }
}

loc_8026CD14:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 26464);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8026CD2Cu:
        goto loc_8026CD2C;
        break;
    case 0x8026D714u:
        goto loc_8026D714;
        break;
    case 0x8026E5E0u:
        goto loc_8026E5E0;
        break;
    case 0x8026DF80u:
        goto loc_8026DF80;
        break;
    case 0x8026D310u:
        goto loc_8026D310;
        break;
    case 0x8026E944u:
        goto loc_8026E944;
        break;
    case 0x8026EE98u:
        goto loc_8026EE98;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8026CD2C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r31, 0, 127u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 112u, (r31 + 112));
}

loc_8026CD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026CD44;
    }
}

loc_8026CD38:
{
}

loc_8026CD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026D060;
    }
}

loc_8026CD40:
{
    goto loc_8026F7FC;
}

loc_8026CD44:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026CD4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CEB4;
    }
}

loc_8026CD50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 126u, (r31 + 126));
    r0 = (r0 & 11);
}

loc_8026CD58:
{
}

loc_8026CD5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CD6C;
    }
}

loc_8026CD60:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_41 = r0;
    r0_ca_41 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_41 + r0_ca_41);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_42 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CD6C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 126u, (r31 + 126));
    r0 = (r0 & 8);
}

loc_8026CD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CDC0;
    }
}

loc_8026CD7C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026CD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CD9C;
    }
}

loc_8026CD8C:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_43 = r0;
    r0_ca_43 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_43 + r0_ca_43);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_44 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026CDA8;
}

loc_8026CD9C:
{
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_44 = r0;
    r0_ca_44 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_44 + r0_ca_44);
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_45 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026CDA8:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_46 = r0;
    r0_ca_46 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_46 + r0_ca_46);
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_47 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_47 = r0;
    r0_ca_47 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_47 + r0_ca_47);
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_48 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CDC0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 126u, (r31 + 126));
    r0 = (r0 & 1);
}

loc_8026CDCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CE60;
    }
}

loc_8026CDD0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026CDDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CDF0;
    }
}

loc_8026CDE0:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_49 = r0;
    r0_ca_49 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_49 + r0_ca_49);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_50 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026CDFC;
}

loc_8026CDF0:
{
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_50 = r0;
    r0_ca_50 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_50 + r0_ca_50);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_51 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026CDFC:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_52 = r0;
    r0_ca_52 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_52 + r0_ca_52);
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_53 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_53 = r0;
    r0_ca_53 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_53 + r0_ca_53);
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_54 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_54 = r0;
    r0_ca_54 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_54 + r0_ca_54);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_55 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_8050 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_8050);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_8050 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026CE34:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026CE48;
    }
}

loc_8026CE38:
{
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_55 = r0;
    r0_ca_55 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_55 + r0_ca_55);
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_56 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026CE60;
}

loc_8026CE48:
{
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_56 = r0;
    r0_ca_56 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_56 + r0_ca_56);
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_57 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_57 = r0;
    r0_ca_57 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_57 + r0_ca_57);
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_58 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CE60:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026CE6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CE88;
    }
}

loc_8026CE70:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_59 = r0;
    r0_ca_59 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_59 + r0_ca_59);
    r0_rot_60 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_60 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_60 = r0;
    r0_ca_60 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_60 + r0_ca_60);
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_61 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CE88:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 256);
}

loc_8026CE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026CE98:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_62 = r0;
    r0_ca_62 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_62 + r0_ca_62);
    r0_rot_63 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_63 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 17;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_63 = r0;
    r0_ca_63 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_63 + r0_ca_63);
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_64 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026F7FC;
}

loc_8026CEB4:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026CEC8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_A668 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_A668);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_A668 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CECC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF1C;
    }
}

loc_8026CED0:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_64 = r0;
    r0_ca_64 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_64 + r0_ca_64);
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_65 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_65 = r0;
    r0_ca_65 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_65 + r0_ca_65);
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_66 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_66 = r0;
    r0_ca_66 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_66 + r0_ca_66);
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_67 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_67 = r0;
    r0_ca_67 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_67 + r0_ca_67);
    r0_rot_68 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_68 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 11;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_68 = r0;
    r0_ca_68 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_68 + r0_ca_68);
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_69 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_69 = r0;
    r0_ca_69 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_69 + r0_ca_69);
    r0_rot_70 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_70 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026CFE8;
}

loc_8026CF1C:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026CF38u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_C65D = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_C65D);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_C65D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CF3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF5C;
    }
}

loc_8026CF40:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_70 = r0;
    r0_ca_70 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_70 + r0_ca_70);
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_71 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_71 = r0;
    r0_ca_71 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_71 + r0_ca_71);
    r0_rot_72 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_72 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026CFE8;
}

loc_8026CF5C:
{
    r3 = r30;
    r4 = 1;
    r5 = 24576;
    r6 = (r29 + -24576);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026CF74u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_D47E = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_D47E);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_D47E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CF78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF98;
    }
}

loc_8026CF7C:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_72 = r0;
    r0_ca_72 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_72 + r0_ca_72);
    r0_rot_73 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_73 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_73 = r0;
    r0_ca_73 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_73 + r0_ca_73);
    r0_rot_74 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_74 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026CFE8;
}

loc_8026CF98:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -24576);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026CFB0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_E29E = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_E29E);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_E29E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CFB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CFE8;
    }
}

loc_8026CFB8:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_74 = r0;
    r0_ca_74 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_74 + r0_ca_74);
    r0_rot_75 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_75 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_75 = r0;
    r0_ca_75 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_75 + r0_ca_75);
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_76 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_76 = r0;
    r0_ca_76 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_76 + r0_ca_76);
    r0_rot_77 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_77 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_77 = r0;
    r0_ca_77 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_77 + r0_ca_77);
    r0_rot_78 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_78 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CFE8:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026CFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D004;
    }
}

loc_8026CFF8:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_79 = r0;
    r0_ca_79 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_79 + r0_ca_79);
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_80 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D004:
{
    r3 = r30;
    r4 = 1;
    r5 = 65536;
    r5 = (r5 + -24576);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026D020u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_FEF8 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_FEF8);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_FEF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D024:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D034;
    }
}

loc_8026D028:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_81 = r0;
    r0_ca_81 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_81 + r0_ca_81);
    r0_rot_82 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_82 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D034:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026D048u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_1086F = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_1086F);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_1086F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D04C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026D050:
{
    r3 = r30;
    r4 = 17;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_83 = r0;
    r0_ca_83 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_83 + r0_ca_83);
    r0_rot_84 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_84 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026F7FC;
}

loc_8026D060:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D06C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D0E0;
    }
}

loc_8026D070:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D07C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D0E0;
    }
}

loc_8026D084:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_4 + r0_ca_4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_5 = r0;
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_5 + r0_ca_5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8026D0C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026D0E0;
    }
}

loc_8026D0C8:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_6 = r0;
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_6 + r0_ca_6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_7 + r0_ca_7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D0E0:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_13468 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_13468;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026D0F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D120;
    }
}

loc_8026D0FC:
{
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_9 = r0;
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_9 + r0_ca_9);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_10 = r0;
    r0_ca_10 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_10 + r0_ca_10);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 28;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_11 = r0;
    r0_ca_11 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_11 + r0_ca_11);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D120:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_1452A = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_1452A;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026D138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D148;
    }
}

loc_8026D13C:
{
    r3 = r30;
    r4 = 17;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_13 = r0;
    r0_ca_13 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_13 + r0_ca_13);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D148:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 512);
}

loc_8026D154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D170;
    }
}

loc_8026D158:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_15 = r0;
    r0_ca_15 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_15 + r0_ca_15);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 17;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_16 = r0;
    r0_ca_16 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_16 + r0_ca_16);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D170:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D1A4;
    }
}

loc_8026D180:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_18 = r0;
    r0_ca_18 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_18 + r0_ca_18);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_19 = r0;
    r0_ca_19 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_19 + r0_ca_19);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 14;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_20 = r0;
    r0_ca_20 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_20 + r0_ca_20);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D1A4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D1B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D21C;
    }
}

loc_8026D1B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D1C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D1D8;
    }
}

loc_8026D1C8:
{
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_22 = r0;
    r0_ca_22 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_22 + r0_ca_22);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D21C;
}

loc_8026D1D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D1E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D1F8;
    }
}

loc_8026D1E8:
{
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_23 = r0;
    r0_ca_23 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_23 + r0_ca_23);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D21C;
}

loc_8026D1F8:
{
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_24 = r0;
    r0_ca_24 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_24 + r0_ca_24);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 11;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_25 = r0;
    r0_ca_25 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_25 + r0_ca_25);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_26 = r0;
    r0_ca_26 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_26 + r0_ca_26);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D21C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D28C;
    }
}

loc_8026D22C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D238:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D250;
    }
}

loc_8026D240:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_28 = r0;
    r0_ca_28 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_28 + r0_ca_28);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D2F0;
}

loc_8026D250:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D258:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D270;
    }
}

loc_8026D260:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_29 = r0;
    r0_ca_29 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_29 + r0_ca_29);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D2F0;
}

loc_8026D270:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_30 = r0;
    r0_ca_30 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_30 + r0_ca_30);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_31 = r0;
    r0_ca_31 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_31 + r0_ca_31);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D2F0;
}

loc_8026D28C:
{
    r3 = r30;
    ctx->lr = 0x8026D294u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_195FB = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_195FB;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026D298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D2F0;
    }
}

loc_8026D29C:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_32 = r0;
    r0_ca_32 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_32 + r0_ca_32);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_33 = r0;
    r0_ca_33 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_33 + r0_ca_33);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_34 = r0;
    r0_ca_34 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_34 + r0_ca_34);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_35 = r0;
    r0_ca_35 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_35 + r0_ca_35);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_36 = r0;
    r0_ca_36 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_36 + r0_ca_36);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_37 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_37 = r0;
    r0_ca_37 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_37 + r0_ca_37);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_38 = r0;
    r0_ca_38 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_38 + r0_ca_38);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D2F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 & 1);
}

loc_8026D2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D300:
{
    r3 = r30;
    r4 = 13;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_40 = r0;
    r0_ca_40 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_40 + r0_ca_40);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026F7FC;
}

loc_8026D310:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 127u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 112u, (r31 + 112));
}

loc_8026D318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026D328;
    }
}

loc_8026D31C:
{
}

loc_8026D320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026D534;
    }
}

loc_8026D324:
{
    goto loc_8026F7FC;
}

loc_8026D328:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026D334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D364;
    }
}

loc_8026D338:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 106u, (r31 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8026D344:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8026D384;
    }
}

loc_8026D348:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_8026D350:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026D384;
    }
}

loc_8026D354:
{
    r3 = r30;
    r4 = 29;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_108 = r0;
    r0_ca_108 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_108 + r0_ca_108);
    r0_rot_109 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_109 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026D384;
}

loc_8026D364:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 106u, (r31 + 106));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
}

loc_8026D374:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8026D384;
    }
}

loc_8026D378:
{
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_109 = r0;
    r0_ca_109 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_109 + r0_ca_109);
    r0_rot_110 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_110 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D384:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r3 & 8192);
}

loc_8026D390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D3A4;
    }
}

loc_8026D394:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_111 = r0;
    r0_ca_111 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_111 + r0_ca_111);
    r0_rot_112 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_112 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D3BC;
}

loc_8026D3A4:
{
    r0 = (r3 & 4096);
}

loc_8026D3AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D3BC;
    }
}

loc_8026D3B0:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_112 = r0;
    r0_ca_112 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_112 + r0_ca_112);
    r0_rot_113 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_113 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D3BC:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r3 & 2048);
}

loc_8026D3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D3DC;
    }
}

loc_8026D3CC:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_114 = r0;
    r0_ca_114 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_114 + r0_ca_114);
    r0_rot_115 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_115 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D3F4;
}

loc_8026D3DC:
{
    r0 = (r3 & 1024);
}

loc_8026D3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D3F4;
    }
}

loc_8026D3E8:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_115 = r0;
    r0_ca_115 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_115 + r0_ca_115);
    r0_rot_116 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_116 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D3F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026D3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D4A8;
    }
}

loc_8026D400:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 8);
}

loc_8026D40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D428;
    }
}

loc_8026D410:
{
    r0 = MemoryInline::FlatRead8((r30 + 1510));
}

loc_8026D418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026D428;
    }
}

loc_8026D41C:
{
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_117 = r0;
    r0_ca_117 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_117 + r0_ca_117);
    r0_rot_118 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_118 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D428:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 1);
}

loc_8026D434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D444;
    }
}

loc_8026D438:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_119 = r0;
    r0_ca_119 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_119 + r0_ca_119);
    r0_rot_120 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_120 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D444:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 2);
}

loc_8026D450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D460;
    }
}

loc_8026D454:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_121 = r0;
    r0_ca_121 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_121 + r0_ca_121);
    r0_rot_122 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_122 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D460:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026D46C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D470:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 8);
}

loc_8026D47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D480:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_123 = r0;
    r0_ca_123 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_123 + r0_ca_123);
    r0_rot_124 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_124 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_124 = r0;
    r0_ca_124 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_124 + r0_ca_124);
    r0_rot_125 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_125 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_125 = r0;
    r0_ca_125 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_125 + r0_ca_125);
    r0_rot_126 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_126 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026F7FC;
}

loc_8026D4A8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r0 = (r0 & 256);
}

loc_8026D4B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D4C4;
    }
}

loc_8026D4B8:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_126 = r0;
    r0_ca_126 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_126 + r0_ca_126);
    r0_rot_127 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_127 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D4C4:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026D4D8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_20A50 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_20A50);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_20A50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D4DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D4F0;
    }
}

loc_8026D4E0:
{
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_128 = r0;
    r0_ca_128 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_128 + r0_ca_128);
    r0_rot_129 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_129 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026F7FC;
}

loc_8026D4F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026D4F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D4FC:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 16);
}

loc_8026D508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D50C:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_129 = r0;
    r0_ca_129 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_129 + r0_ca_129);
    r0_rot_130 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_130 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_130 = r0;
    r0_ca_130 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_130 + r0_ca_130);
    r0_rot_131 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_131 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_131 = r0;
    r0_ca_131 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_131 + r0_ca_131);
    r0_rot_132 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_132 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026F7FC;
}

loc_8026D534:
{
    r3 = r30;
    r4 = 1;
    r5 = 1;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_222D9 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_222D9;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026D54C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D568;
    }
}

loc_8026D550:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_84 = r0;
    r0_ca_84 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_84 + r0_ca_84);
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_85 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_85 = r0;
    r0_ca_85 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_85 + r0_ca_85);
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_86 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D568:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 112u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D584;
    }
}

loc_8026D578:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_87 = r0;
    r0_ca_87 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_87 + r0_ca_87);
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_88 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D584:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D5B0;
    }
}

loc_8026D594:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r31);
    r0 = (r0 & 256);
}

loc_8026D5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D5B0;
    }
}

loc_8026D5A4:
{
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_89 = r0;
    r0_ca_89 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_89 + r0_ca_89);
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_90 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D5B0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r31);
    r0 = (r0 & 4);
}

loc_8026D5BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D608;
    }
}

loc_8026D5C0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 111u, (r31 + 111));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8026D5CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8026D5E8;
    }
}

loc_8026D5D0:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_8026D5D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026D5E8;
    }
}

loc_8026D5DC:
{
    r3 = r30;
    r4 = 29;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_91 = r0;
    r0_ca_91 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_91 + r0_ca_91);
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_92 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D5E8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    r0 = (r0 & 64);
}

loc_8026D5F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D628;
    }
}

loc_8026D5F8:
{
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_93 = r0;
    r0_ca_93 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_93 + r0_ca_93);
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_94 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026D628;
}

loc_8026D608:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 111u, (r31 + 111));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
}

loc_8026D618:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8026D628;
    }
}

loc_8026D61C:
{
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_94 = r0;
    r0_ca_94 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_94 + r0_ca_94);
    r0_rot_95 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_95 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D628:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    r0 = (r0 & 64);
}

loc_8026D634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D678;
    }
}

loc_8026D638:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_96 = r0;
    r0_ca_96 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_96 + r0_ca_96);
    r0_rot_97 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_97 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r31);
    r0 = (r0 & 4);
}

loc_8026D650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D678;
    }
}

loc_8026D654:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_97 = r0;
    r0_ca_97 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_97 + r0_ca_97);
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_98 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_98 = r0;
    r0_ca_98 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_98 + r0_ca_98);
    r0_rot_99 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_99 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 11;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_99 = r0;
    r0_ca_99 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_99 + r0_ca_99);
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_100 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026D678:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 0u, r31);
    r0 = (r3 & 8192);
}

loc_8026D684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D698;
    }
}

loc_8026D688:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_101 = r0;
    r0_ca_101 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_101 + r0_ca_101);
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_102 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D6B0;
}

loc_8026D698:
{
    r0 = (r3 & 4096);
}

loc_8026D6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D6B0;
    }
}

loc_8026D6A4:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_102 = r0;
    r0_ca_102 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_102 + r0_ca_102);
    r0_rot_103 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_103 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D6B0:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 0u, r31);
    r0 = (r3 & 2048);
}

loc_8026D6BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D6D0;
    }
}

loc_8026D6C0:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_104 = r0;
    r0_ca_104 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_104 + r0_ca_104);
    r0_rot_105 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_105 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026D6E8;
}

loc_8026D6D0:
{
    r0 = (r3 & 1024);
}

loc_8026D6D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D6E8;
    }
}

loc_8026D6DC:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_105 = r0;
    r0_ca_105 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_105 + r0_ca_105);
    r0_rot_106 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_106 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D6E8:
{
    r3 = r30;
    ctx->lr = 0x8026D6F0u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_27722 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_27722;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026D6F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026D6F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 1510));
}

loc_8026D700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D704:
{
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_107 = r0;
    r0_ca_107 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_107 + r0_ca_107);
    r0_rot_108 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_108 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026F7FC;
}

loc_8026D714:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 127u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 112u, (r31 + 112));
}

loc_8026D71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026D72C;
    }
}

loc_8026D720:
{
}

loc_8026D724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026DB7C;
    }
}

loc_8026D728:
{
    goto loc_8026F7FC;
}

loc_8026D72C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026D734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D934;
    }
}

loc_8026D738:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026D744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D764;
    }
}

loc_8026D748:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D764;
    }
}

loc_8026D758:
{
    r3 = r30;
    r4 = 21;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_132 = r0;
    r0_ca_132 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_132 + r0_ca_132);
    r0_rot_133 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_133 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D764:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    r0 = (r0 & 32768);
}

loc_8026D770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D7B0;
    }
}

loc_8026D774:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_134 = r0;
    r0_ca_134 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_134 + r0_ca_134);
    r0_rot_135 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_135 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_135 = r0;
    r0_ca_135 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_135 + r0_ca_135);
    r0_rot_136 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_136 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_136 = r0;
    r0_ca_136 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_136 + r0_ca_136);
    r0_rot_137 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_137 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_137 = r0;
    r0_ca_137 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_137 + r0_ca_137);
    r0_rot_138 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_138 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 20;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_138 = r0;
    r0_ca_138 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_138 + r0_ca_138);
    r0_rot_139 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_139 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D7B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 126u, (r31 + 126));
    r0 = (r0 & 11);
}

loc_8026D7B8:
{
}

loc_8026D7BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D7CC;
    }
}

loc_8026D7C0:
{
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_140 = r0;
    r0_ca_140 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_140 + r0_ca_140);
    r0_rot_141 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_141 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D7CC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 126u, (r31 + 126));
    r0 = (r0 & 8);
}

loc_8026D7D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D7E8;
    }
}

loc_8026D7DC:
{
    r3 = r30;
    r4 = 7;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_142 = r0;
    r0_ca_142 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_142 + r0_ca_142);
    r0_rot_143 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_143 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D7E8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 126u, (r31 + 126));
    r0 = (r0 & 1);
}

loc_8026D7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D8BC;
    }
}

loc_8026D7F8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_2AD13 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_2AD13);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_2AD13 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026D80C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026D828;
    }
}

loc_8026D810:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_144 = r0;
    r0_ca_144 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_144 + r0_ca_144);
    r0_rot_145 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_145 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_145 = r0;
    r0_ca_145 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_145 + r0_ca_145);
    r0_rot_146 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_146 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D828:
{
    r3 = r30;
    r4 = 0;
    r6 = 65536;
    r5 = (r6 + -21845);
    r5 = (r5 & 65535);
    r6 = (r6 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026D848u;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FAD0_2BB3A = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_2BB3A);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_2BB3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026D84C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D85C;
    }
}

loc_8026D850:
{
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_147 = r0;
    r0_ca_147 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_147 + r0_ca_147);
    r0_rot_148 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_148 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026D85C:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_149 = r0;
    r0_ca_149 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_149 + r0_ca_149);
    r0_rot_150 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_150 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_150 = r0;
    r0_ca_150 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_150 + r0_ca_150);
    r0_rot_151 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_151 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 13;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_151 = r0;
    r0_ca_151 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_151 + r0_ca_151);
    r0_rot_152 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_152 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 14;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_152 = r0;
    r0_ca_152 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_152 + r0_ca_152);
    r0_rot_153 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_153 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 17;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_153 = r0;
    r0_ca_153 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_153 + r0_ca_153);
    r0_rot_154 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_154 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_154 = r0;
    r0_ca_154 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_154 + r0_ca_154);
    r0_rot_155 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_155 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2DEDE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2DEDE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2E23A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2E23A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D8BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026D8C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D8CC:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2E684 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2E684;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2E9E0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2E9E0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_2ED37 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_2ED37);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_2ED37 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026D8F8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026D918;
    }
}

loc_8026D8FC:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2F1D0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2F1D0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 75;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_2F52C = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_2F52C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026D918:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_2F8B6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_2F8B6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 74;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_2FC12 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_2FC12;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026D934:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D950;
    }
}

loc_8026D944:
{
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3008C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3008C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D950:
{
    r3 = r30;
    r4 = 1;
    r5 = 5461;
    r6 = 27307;
    ctx->lr = 0x8026D964u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_30437 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_30437);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_30437 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D968:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DA00;
    }
}

loc_8026D96C:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_308ED = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_308ED);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_308ED >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026D980:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026D99C;
    }
}

loc_8026D984:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_30D86 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_30D86;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_310E1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_310E1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D99C:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_31453 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_31453;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_317AE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_317AE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_31B0A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_31B0A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_31E66 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_31E66;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_321C2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_321C2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3251E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3251E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_32879 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_32879;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_32BD5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_32BD5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DB10;
}

loc_8026DA00:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -10923);
    r5 = (r5 & 65535);
    r6 = 5461;
    ctx->lr = 0x8026DA1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_32FCB = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_32FCB);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_32FCB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026DA20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DA74;
    }
}

loc_8026DA24:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_33485 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_33485;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_337E1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_337E1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_33B38 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_33B38);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_33B38 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026DA50:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026DA64;
    }
}

loc_8026DA54:
{
    r3 = r30;
    r4 = 75;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_33FD2 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_33FD2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DB10;
}

loc_8026DA64:
{
    r3 = r30;
    r4 = 74;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_3435D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_3435D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DB10;
}

loc_8026DA74:
{
    r3 = r30;
    r4 = 1;
    r5 = 27307;
    r6 = (r29 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026DA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_34742 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_34742);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_34742 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026DA90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DAB0;
    }
}

loc_8026DA94:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_34BFC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_34BFC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_34F58 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_34F58;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DB10;
}

loc_8026DAB0:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -21845);
    r5 = (r5 & 65535);
    r6 = (r29 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026DACCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_3535E = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_3535E);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_3535E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026DAD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DB10;
    }
}

loc_8026DAD4:
{
    r3 = r30;
    r4 = 0;
    r5 = (r29 + -21845);
    r5 = (r5 & 65535);
    r6 = (r29 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026DAF0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FAD0_35894 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_35894);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_35894 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026DAF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DB04;
    }
}

loc_8026DAF8:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_35CE3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_35CE3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DB04:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_36055 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_36055;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DB10:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026DB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DB5C;
    }
}

loc_8026DB20:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3649F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3649F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_367FA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_367FA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_36B56 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_36B56;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_36EB2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_36EB2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3720E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3720E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DB5C:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026DB68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026DB6C:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_37659 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_37659;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026DB7C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DB88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DBCC;
    }
}

loc_8026DB90:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026DB9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DBCC;
    }
}

loc_8026DBA0:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_37C6F = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_37C6F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026DBB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026DBCC;
    }
}

loc_8026DBB4:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_3800D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_3800D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_38369 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_38369;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DBCC:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_386D6 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_386D6;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026DBE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DC0C;
    }
}

loc_8026DBE8:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_38A38 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_38A38;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_38D94 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_38D94;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_390F0 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_390F0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DC0C:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_3945D = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_3945D;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026DC24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DC34;
    }
}

loc_8026DC28:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_397BF = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_397BF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DC34:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A758_39B17 = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_39B17;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8026DC44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026DC78;
    }
}

loc_8026DC48:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026DC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DC78;
    }
}

loc_8026DC58:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DC64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DC78;
    }
}

loc_8026DC6C:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3A0FA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3A0FA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DC78:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026DC84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DD38;
    }
}

loc_8026DC88:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A758_3A52A = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_3A52A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8026DC98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026DD38;
    }
}

loc_8026DC9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DCA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DCC0;
    }
}

loc_8026DCB0:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3AA35 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3AA35;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DCF8;
}

loc_8026DCC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DCC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DCE0;
    }
}

loc_8026DCD0:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3AF28 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3AF28;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DCF8;
}

loc_8026DCE0:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3B2B2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3B2B2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3B60D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3B60D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DCF8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_3B97B = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_3B97B);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_3B97B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026DD0C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026DD1C;
    }
}

loc_8026DD10:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3BE14 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3BE14;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DD1C:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3C186 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3C186;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3C4E2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3C4E2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DD9C;
}

loc_8026DD38:
{
    r3 = r30;
    ctx->lr = 0x8026DD40u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_3C892 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_3C892;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026DD44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DD9C;
    }
}

loc_8026DD48:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3CCAC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3CCAC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3D007 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3D007;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3D363 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3D363;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3D6BE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3D6BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3DA1A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3DA1A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3DD76 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3DD76;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3E0D1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3E0D1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DD9C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026DDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DECC;
    }
}

loc_8026DDAC:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A758_3E501 = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_3E501;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8026DDBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026DECC;
    }
}

loc_8026DDC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DDCC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DDE4;
    }
}

loc_8026DDD4:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3EA0D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3EA0D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DE50;
}

loc_8026DDE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026DDEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026DE38;
    }
}

loc_8026DDF4:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3EF01 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3EF01;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_3F258 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_3F258);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_3F258 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026DE14:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026DE28;
    }
}

loc_8026DE18:
{
    r3 = r30;
    r4 = 75;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_3F6F2 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_3F6F2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DE50;
}

loc_8026DE28:
{
    r3 = r30;
    r4 = 74;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_3FA7D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_3FA7D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026DE50;
}

loc_8026DE38:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_3FE08 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_3FE08;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_40164 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_40164;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DE50:
{
    r3 = r30;
    r4 = 0;
    r6 = 65536;
    r5 = (r6 + -24576);
    r5 = (r5 & 65535);
    r6 = (r6 + -8192);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026DE70u;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FAD0_40560 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_40560);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_40560 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026DE74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026DE84;
    }
}

loc_8026DE78:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_409AF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_409AF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DE84:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_40D1D = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_40D1D);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_40D1D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026DE98:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026DEA8;
    }
}

loc_8026DE9C:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_411B6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_411B6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DEA8:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_41528 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_41528;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_41884 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_41884;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_41BE0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_41BE0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DECC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026DED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DF48;
    }
}

loc_8026DEDC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_42025 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_42025);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_42025 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026DEF0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026DF0C;
    }
}

loc_8026DEF4:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_424BE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_424BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_42819 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_42819;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DF0C:
{
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_42B8C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_42B8C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_42EE8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_42EE8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_43243 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_43243;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4359F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4359F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_438FA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_438FA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DF48:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 & 32);
}

loc_8026DF54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026DF70;
    }
}

loc_8026DF58:
{
    r0 = (r3 & 512);
}

loc_8026DF60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026DF64:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026DF6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026DF70:
{
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_43EB2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_43EB2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026DF80:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
}

loc_8026DF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026DF98;
    }
}

loc_8026DF8C:
{
}

loc_8026DF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026E2C8;
    }
}

loc_8026DF94:
{
    goto loc_8026F7FC;
}

loc_8026DF98:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026DFA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DFB4;
    }
}

loc_8026DFA8:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_44498 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_44498;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DFB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026DFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E114;
    }
}

loc_8026DFC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32768);
}

loc_8026DFCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DFDC;
    }
}

loc_8026DFD0:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_449A8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_449A8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DFDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 11);
}

loc_8026DFE4:
{
}

loc_8026DFE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026DFF8;
    }
}

loc_8026DFEC:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_44E09 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_44E09;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026DFF8:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 8);
}

loc_8026E004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E020;
    }
}

loc_8026E008:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_45253 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_45253;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_455AF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_455AF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E020:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 1);
}

loc_8026E02C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E0A0;
    }
}

loc_8026E030:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_459F8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_459F8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_45D53 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_45D53;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_460AE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_460AE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4640A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4640A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_46766 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_46766;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_46ABD = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_46ABD);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_46ABD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026E080:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026E094;
    }
}

loc_8026E084:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_46F57 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_46F57;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E0A0;
}

loc_8026E094:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_472E1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_472E1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E0A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026E0AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E0C8;
    }
}

loc_8026E0B0:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4772A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4772A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_47A85 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_47A85;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E0C8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026E0D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E104;
    }
}

loc_8026E0D8:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026E0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E0E8:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_47FA1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_47FA1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_482FD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_482FD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E104:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_48688 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_48688;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E114:
{
    r3 = r30;
    r4 = 1;
    r5 = 5461;
    r6 = 27307;
    ctx->lr = 0x8026E128u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_48A4B = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_48A4B);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_48A4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E12C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E1A4;
    }
}

loc_8026E130:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_48F05 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_48F05;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_49260 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_49260;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_495BB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_495BB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_49912 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_49912);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_49912 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026E168:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026E17C;
    }
}

loc_8026E16C:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_49DAC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_49DAC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E188;
}

loc_8026E17C:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4A136 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4A136;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E188:
{
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4A4A9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4A4A9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4A805 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4A805;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E25C;
}

loc_8026E1A4:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -10923);
    r5 = (r5 & 65535);
    r6 = 5461;
    ctx->lr = 0x8026E1C0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_4ABFB = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_4ABFB);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_4ABFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E1C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E1E4;
    }
}

loc_8026E1C8:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4B0B6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4B0B6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4B412 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4B412;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E25C;
}

loc_8026E1E4:
{
    r3 = r30;
    r4 = 1;
    r5 = 27307;
    r6 = (r29 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026E1FCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_4B7F7 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_4B7F7);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_4B7F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E200:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E220;
    }
}

loc_8026E204:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4BCB1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4BCB1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4C00D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4C00D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E25C;
}

loc_8026E220:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -21845);
    r5 = (r5 & 65535);
    r6 = (r29 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026E23Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_4C413 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_4C413);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_4C413 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E240:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E25C;
    }
}

loc_8026E244:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4C8CD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4C8CD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4CC28 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4CC28;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E25C:
{
    r3 = r30;
    r4 = 1;
    r5 = 27307;
    r6 = 65536;
    r6 = (r6 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026E278u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_4D005 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_4D005);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_4D005 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E27C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026E28C;
    }
}

loc_8026E280:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4D4BE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4D4BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E28C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026E298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E2A8;
    }
}

loc_8026E29C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4D908 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4D908;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E2A8:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026E2B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E2B8:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4DD53 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4DD53;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E2C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E2D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E318;
    }
}

loc_8026E2DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E318;
    }
}

loc_8026E2EC:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_4E33A = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_4E33A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026E2FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026E318;
    }
}

loc_8026E300:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4E6D7 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4E6D7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4EA33 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4EA33;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E318:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 512);
}

loc_8026E324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E338;
    }
}

loc_8026E328:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 & 1);
}

loc_8026E334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E344;
    }
}

loc_8026E338:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4EF4F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4EF4F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E344:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026E350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E360;
    }
}

loc_8026E354:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4F399 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4F399;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E360:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026E36C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E37C;
    }
}

loc_8026E370:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_4F7E2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_4F7E2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E37C:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_4FB4F = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_4FB4F;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026E394:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E3BC;
    }
}

loc_8026E398:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_4FEB1 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_4FEB1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5020D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5020D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_50569 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_50569;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E3BC:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_508D6 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_508D6;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026E3D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E3E4;
    }
}

loc_8026E3D8:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_50C38 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_50C38;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E3E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E3F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E4BC;
    }
}

loc_8026E3F4:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A758_51068 = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_51068;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8026E404:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026E4BC;
    }
}

loc_8026E408:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_513D4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_513D4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E420:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E444;
    }
}

loc_8026E428:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_518CF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_518CF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_51C2A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_51C2A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E488;
}

loc_8026E444:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E44C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E470;
    }
}

loc_8026E454:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5211E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5211E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5247A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5247A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E488;
}

loc_8026E470:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_52804 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_52804;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_52B5F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_52B5F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E488:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_52ED1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_52ED1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5322C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5322C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_53588 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_53588;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_538E4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_538E4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E52C;
}

loc_8026E4BC:
{
    r3 = r30;
    ctx->lr = 0x8026E4C4u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_53C94 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_53C94;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026E4C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E52C;
    }
}

loc_8026E4CC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_540AD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_540AD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_54408 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_54408;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_54764 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_54764;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_54ABF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_54ABF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_54E1B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_54E1B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_55177 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_55177;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_554D3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_554D3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5582E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5582E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E52C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E53C:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A758_55C5E = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_55C5E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8026E54C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E550:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E55C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E580;
    }
}

loc_8026E564:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_56169 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_56169;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_564C4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_564C4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E5C4;
}

loc_8026E580:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E588:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E5AC;
    }
}

loc_8026E590:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_569B8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_569B8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_56D14 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_56D14;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E5C4;
}

loc_8026E5AC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5709E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5709E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_573F9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_573F9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E5C4:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5776B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5776B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_57AC6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_57AC6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E5E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
}

loc_8026E5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026E5F8;
    }
}

loc_8026E5EC:
{
}

loc_8026E5F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026E794;
    }
}

loc_8026E5F4:
{
    goto loc_8026F7FC;
}

loc_8026E5F8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026E604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E618;
    }
}

loc_8026E608:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_580A8 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_580A8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E624;
}

loc_8026E618:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_58432 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_58432;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E624:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026E62C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E6C4;
    }
}

loc_8026E630:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 11);
}

loc_8026E638:
{
}

loc_8026E63C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E658;
    }
}

loc_8026E640:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_58957 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_58957;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_58CB2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_58CB2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E658:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 9);
}

loc_8026E660:
{
}

loc_8026E664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E698;
    }
}

loc_8026E668:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_59112 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_59112;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5946D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5946D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_597C9 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_597C9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_59B25 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_59B25;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E698:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026E6A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E6A8:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_59F6E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_59F6E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5A2C9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5A2C9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E6C4:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -5461);
    r5 = (r5 & 65535);
    r6 = (r29 + -27307);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026E6E4u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_5A6E0 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_5A6E0);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_5A6E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E6E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E72C;
    }
}

loc_8026E6EC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5AB9A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5AB9A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5AEF5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5AEF5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026E70C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026E768;
    }
}

loc_8026E710:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5B314 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5B314;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5B670 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5B670;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E768;
}

loc_8026E72C:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -27307);
    r5 = (r5 & 65535);
    r6 = (r29 + -5461);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026E748u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_5BA75 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_5BA75);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_5BA75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E74C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E768;
    }
}

loc_8026E750:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5BF2F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5BF2F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5C28A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5C28A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E768:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026E774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E778:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5C6D5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5C6D5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5CA30 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5CA30;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E794:
{
    r3 = r30;
    r4 = 0;
    r5 = 1;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_5CDB5 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_5CDB5;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026E7AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E7E4;
    }
}

loc_8026E7B0:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5D117 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5D117;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5D473 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5D473;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5D7CF = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5D7CF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_5DB2B = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_5DB2B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E7F0;
}

loc_8026E7E4:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5DEB5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5DEB5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E7F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E80C;
    }
}

loc_8026E800:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5E2FF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5E2FF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E80C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E868;
    }
}

loc_8026E81C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5E749 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5E749;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E834:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E84C;
    }
}

loc_8026E83C:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5EC44 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5EC44;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E868;
}

loc_8026E84C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E854:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E868;
    }
}

loc_8026E85C:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5F137 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5F137;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E868:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026E874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E8D8;
    }
}

loc_8026E878:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5F581 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5F581;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E890:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E8A8;
    }
}

loc_8026E898:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5FA7C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5FA7C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E918;
}

loc_8026E8A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026E8B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026E8C8;
    }
}

loc_8026E8B8:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_5FF6F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_5FF6F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E918;
}

loc_8026E8C8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_602F9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_602F9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026E918;
}

loc_8026E8D8:
{
    r3 = r30;
    ctx->lr = 0x8026E8E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_606A9 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_606A9;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026E8E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026E918;
    }
}

loc_8026E8E8:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_60AC2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_60AC2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_60E1D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_60E1D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_61178 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_61178;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_614D3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_614D3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E918:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026E924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026E928:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6191C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6191C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_61C77 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_61C77;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026E944:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
}

loc_8026E94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026E95C;
    }
}

loc_8026E950:
{
}

loc_8026E954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026EC40;
    }
}

loc_8026E958:
{
    goto loc_8026F7FC;
}

loc_8026E95C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 128);
}

loc_8026E968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E990;
    }
}

loc_8026E96C:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6225E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6225E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_625B9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_625B9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_62915 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_62915;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E990:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026E998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EAC0;
    }
}

loc_8026E99C:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 11);
}

loc_8026E9A4:
{
}

loc_8026E9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026E9B8;
    }
}

loc_8026E9AC:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_62E3A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_62E3A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026E9B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 8);
}

loc_8026E9C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EA24;
    }
}

loc_8026E9C8:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_63283 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_63283;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_635DE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_635DE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 2048;
    ctx->lr = 0x8026E9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_6396F = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_6396F);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_6396F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026E9F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EA04;
    }
}

loc_8026E9F4:
{
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_63E26 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_63E26;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EA24;
}

loc_8026EA04:
{
    r3 = r30;
    r4 = 1024;
    ctx->lr = 0x8026EA10u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_641E6 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_641E6);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_641E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026EA14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EA24;
    }
}

loc_8026EA18:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6469D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6469D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EA24:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 1);
}

loc_8026EA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EA7C;
    }
}

loc_8026EA34:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_64AE6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_64AE6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_64E41 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_64E41;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6519C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6519C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_654F8 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_654F8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_65854 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_65854;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_65BB0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_65BB0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EA7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026EA88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026EA8C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_65FF9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_65FF9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_66355 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_66355;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_666B0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_666B0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_66A0C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_66A0C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026EAC0:
{
    r3 = r30;
    r4 = 1;
    r5 = 5461;
    r6 = 27307;
    ctx->lr = 0x8026EAD4u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_66DCF = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_66DCF);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_66DCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026EAD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EB34;
    }
}

loc_8026EADC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_67289 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_67289;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_675E4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_675E4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6793F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6793F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_67C9B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_67C9B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026EB14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026EBEC;
    }
}

loc_8026EB18:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_680BA = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_680BA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_68416 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_68416;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EBEC;
}

loc_8026EB34:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -10923);
    r5 = (r5 & 65535);
    r6 = 5461;
    ctx->lr = 0x8026EB50u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_6880C = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_6880C);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_6880C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026EB54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EB74;
    }
}

loc_8026EB58:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_68CC7 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_68CC7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_69023 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_69023;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EBEC;
}

loc_8026EB74:
{
    r3 = r30;
    r4 = 1;
    r5 = 27307;
    r6 = (r29 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026EB8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_69408 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_69408);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_69408 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026EB90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EBB0;
    }
}

loc_8026EB94:
{
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_698C3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_698C3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_69C1F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_69C1F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EBEC;
}

loc_8026EBB0:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -21845);
    r5 = (r5 & 65535);
    r6 = (r29 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026EBCCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_6A025 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_6A025);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_6A025 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026EBD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EBEC;
    }
}

loc_8026EBD4:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6A4DF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6A4DF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6A83A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6A83A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EBEC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026EBF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EC20;
    }
}

loc_8026EBFC:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6AC84 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6AC84;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6AFE0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6AFE0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6B33B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6B33B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EC20:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026EC2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026EC30:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6B786 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6B786;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026EC40:
{
    r3 = r30;
    r4 = 1;
    r5 = 1;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_6BB0B = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_6BB0B;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026EC58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EC98;
    }
}

loc_8026EC5C:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_6BE6D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_6BE6D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_6C1C9 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_6C1C9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_6C525 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_6C525;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6C880 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6C880;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6CBDB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6CBDB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EC98:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026ECA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ED4C;
    }
}

loc_8026ECA8:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6D026 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6D026;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6D382 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6D382;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6D6DD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6D6DD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6DA39 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6DA39;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026ECE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026ED08;
    }
}

loc_8026ECEC:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6DF34 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6DF34;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6E290 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6E290;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026ED4C;
}

loc_8026ED08:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026ED10:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026ED34;
    }
}

loc_8026ED18:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6E783 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6E783;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6EADF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6EADF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026ED4C;
}

loc_8026ED34:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6EE69 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6EE69;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6F1C5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6F1C5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026ED4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026ED58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EDBC;
    }
}

loc_8026ED5C:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6F60F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6F60F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026ED74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026ED8C;
    }
}

loc_8026ED7C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6FB0A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6FB0A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EE14;
}

loc_8026ED8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026ED94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026EDAC;
    }
}

loc_8026ED9C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6FFFD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6FFFD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EE14;
}

loc_8026EDAC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_70387 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_70387;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026EE14;
}

loc_8026EDBC:
{
    r3 = r30;
    ctx->lr = 0x8026EDC4u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_70737 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_70737;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026EDC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026EE14;
    }
}

loc_8026EDCC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_70B50 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_70B50;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_70EAB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_70EAB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_71206 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_71206;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_71561 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_71561;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_718BD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_718BD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_71C19 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_71C19;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EE14:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026EE20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026EE24:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_72062 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_72062;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_723BD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_723BD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026EE48:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026EE6C;
    }
}

loc_8026EE50:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_728B9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_728B9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_72C15 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_72C15;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026EE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026EE74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F7FC;
    }
}

loc_8026EE7C:
{
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_73109 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_73109;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_73465 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_73465;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026EE98:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
}

loc_8026EEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026EEB0;
    }
}

loc_8026EEA4:
{
}

loc_8026EEA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026F41C;
    }
}

loc_8026EEAC:
{
    goto loc_8026F7FC;
}

loc_8026EEB0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 128);
}

loc_8026EEBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EED8;
    }
}

loc_8026EEC0:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_73A4C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_73A4C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_73DA7 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_73DA7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EED8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026EEE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EEF4;
    }
}

loc_8026EEE8:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_741F0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_741F0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EEF4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026EEFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F150;
    }
}

loc_8026EF00:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 11);
}

loc_8026EF08:
{
}

loc_8026EF0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EF28;
    }
}

loc_8026EF10:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_74716 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_74716;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 31;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_74A72 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_74A72;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EF28:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 8);
}

loc_8026EF34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026EFB0;
    }
}

loc_8026EF38:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_74EBB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_74EBB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_75217 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_75217;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 25;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_75573 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_75573;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_758CF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_758CF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_75C2A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_75C2A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_75F81 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_75F81);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_75F81 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026EF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026EF98;
    }
}

loc_8026EF8C:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7641A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7641A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EF98:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7678D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7678D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_76AE9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_76AE9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026EFB0:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 1);
}

loc_8026EFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F094;
    }
}

loc_8026EFC0:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_76F33 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_76F33;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7728F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7728F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_775EB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_775EB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_77947 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_77947;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 29;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_77CA3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_77CA3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_77FFE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_77FFE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_78355 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_78355);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_78355 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026F01C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F02C;
    }
}

loc_8026F020:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_787EE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_787EE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F02C:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_78B61 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_78B61;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_78EBD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_78EBD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_79219 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_79219;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_79575 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_79575;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_798D0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_798D0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_79C2C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_79C2C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F080u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_79FBD = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_79FBD);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_79FBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F084:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F094;
    }
}

loc_8026F088:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7A473 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7A473;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F094:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026F0A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F0EC;
    }
}

loc_8026F0A4:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7A8BC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7A8BC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7AC18 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7AC18;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7AF74 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7AF74;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7B2D0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7B2D0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7B62C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7B62C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7B988 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7B988;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F0EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32768);
}

loc_8026F0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026F0FC:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7BDD4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7BDD4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7C12F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7C12F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7C48A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7C48A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7C7E6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7C7E6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F138u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_7CB77 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_7CB77);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_7CB77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F13C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026F140:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7D02D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7D02D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026F150:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026F164u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_7D3F0 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_7D3F0);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_7D3F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F168:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F238;
    }
}

loc_8026F16C:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7D8AB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7D8AB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7DC07 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7DC07;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7DF63 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7DF63;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 29;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7E2BF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7E2BF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7E61A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7E61A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7E976 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7E976;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7ECD2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7ECD2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7F02E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7F02E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7F38A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7F38A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_7F6E1 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_7F6E1);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_7F6E1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026F1EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F1FC;
    }
}

loc_8026F1F0:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7FB7A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7FB7A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F1FC:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7FEEC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7FEEC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_80248 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_80248;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F220u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_805D9 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_805D9);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_805D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F224:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F3F0;
    }
}

loc_8026F228:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_80A8F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_80A8F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F3F0;
}

loc_8026F238:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026F254u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_80E84 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_80E84);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_80E84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F258:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026F27C;
    }
}

loc_8026F25C:
{
    r3 = r30;
    r4 = 1;
    r5 = 24576;
    r6 = (r29 + -24576);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026F274u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_81399 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_81399);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_81399 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F278:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F2C8;
    }
}

loc_8026F27C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_81853 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_81853;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_81BAF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_81BAF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_81F0A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_81F0A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_82266 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_82266;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 25;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_825C2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_825C2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8291E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8291E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F36C;
}

loc_8026F2C8:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -24576);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026F2E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_82D02 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_82D02);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_82D02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F2E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F36C;
    }
}

loc_8026F2E8:
{
    r3 = r30;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_831BD = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_831BD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_83519 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_83519;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_83874 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_83874;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_83BD0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_83BD0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_83F2C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_83F2C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_84288 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_84288;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_845E4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_845E4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_84940 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_84940;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_84C97 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_84C97);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_84C97 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026F35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F36C;
    }
}

loc_8026F360:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_85130 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_85130;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F36C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026F378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F3B4;
    }
}

loc_8026F37C:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8557A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8557A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_858D5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_858D5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F3A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_85C66 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_85C66);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_85C66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F3A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F3B4;
    }
}

loc_8026F3A8:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8611C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8611C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F3B4:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026F3C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F3F0;
    }
}

loc_8026F3C4:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_86567 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_86567;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F3DCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_868F8 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_868F8);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_868F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F3E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F3F0;
    }
}

loc_8026F3E4:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_86DAE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_86DAE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F3F0:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026F3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026F400:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_871FA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_871FA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 31;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_87556 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_87556;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026F41C:
{
    r3 = r30;
    r4 = 1;
    r5 = 1;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_878DB = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_878DB;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026F434:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F474;
    }
}

loc_8026F438:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_87C3D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_87C3D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_87F99 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_87F99;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_882F5 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_882F5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_88650 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_88650;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_889AB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_889AB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F474:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F480:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F4D4;
    }
}

loc_8026F488:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026F494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F4D4;
    }
}

loc_8026F498:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_88F91 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_88F91);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_88F91 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026F4AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F4BC;
    }
}

loc_8026F4B0:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8942A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8942A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F4BC:
{
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8979D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8979D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_89AF9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_89AF9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F4D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026F4E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F4F0;
    }
}

loc_8026F4E4:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_89F43 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_89F43;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F4F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026F4FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F550;
    }
}

loc_8026F500:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8A38C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8A38C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8A6E7 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8A6E7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F524u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_8AA78 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_8AA78);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_8AA78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F528:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F538;
    }
}

loc_8026F52C:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8AF2E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8AF2E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F538:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8B2A0 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8B2A0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8B5FC = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8B5FC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F550:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026F55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F678;
    }
}

loc_8026F560:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8BA47 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8BA47;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 31;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8BDA3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8BDA3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8C0FF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8C0FF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8C45B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8C45B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8C7B7 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8C7B7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F5A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8026F5B8;
    }
}

loc_8026F5AC:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8CC27 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8CC27;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F5B8:
{
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8CF9A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8CF9A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8D2F5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8D2F5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F5DCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_8D686 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_8D686);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_8D686 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F5E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F5F0;
    }
}

loc_8026F5E4:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8DB3C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8DB3C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F5F0:
{
    r3 = r30;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8DEAF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8DEAF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 29;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8E20B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8E20B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F614:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F644;
    }
}

loc_8026F61C:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8E707 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8E707;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8EA63 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8EA63;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 25;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8EDBF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8EDBF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F678;
}

loc_8026F644:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F64C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F678;
    }
}

loc_8026F654:
{
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8F2B3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8F2B3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8F60F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8F60F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 26;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8F96B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8F96B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F678:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026F684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F724;
    }
}

loc_8026F688:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F694:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8026F6A4;
    }
}

loc_8026F698:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8FECA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8FECA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F6A4:
{
    r3 = r30;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9023D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9023D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_90598 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_90598;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_908F4 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_908F4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F6D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F6F8;
    }
}

loc_8026F6DC:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_90DEF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_90DEF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9114A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9114A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026F6F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026F700:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026F7FC;
    }
}

loc_8026F708:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9163D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9163D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_91999 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_91999;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026F724:
{
    r3 = r30;
    ctx->lr = 0x8026F72Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_91D49 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_91D49;
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
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026F730:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026F734:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_92162 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_92162;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_924BE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_924BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9281A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9281A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_92B76 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_92B76;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_92ED2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_92ED2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9322E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9322E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9358A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9358A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 31;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_938E6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_938E6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_93C41 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_93C41;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_93F9D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_93F9D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_942F9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_942F9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 4096;
    ctx->lr = 0x8026F7C4u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_9468A = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_9468A);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_9468A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026F7C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7D8;
    }
}

loc_8026F7CC:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_94B40 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_94B40;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F7D8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_94EAE = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_94EAE);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_94EAE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026F7EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026F7F0:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_95347 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_95347;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F7FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026CCE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026CCE0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026CCE0 func_8026CCE0 preserves=true fpr_mask=0x00000000
