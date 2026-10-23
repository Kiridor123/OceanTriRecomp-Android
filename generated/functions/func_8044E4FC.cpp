#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AA70(CpuContext* ctx);
extern "C" uint32_t func_8004AA70_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004DEE0(CpuContext* ctx);
extern "C" uint64_t func_8004DEE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800E4AE0(CpuContext* ctx);
extern "C" uint64_t func_800E4AE0_ra0_0_18_0(CpuContext*);
extern "C" void func_802A8F50(CpuContext* ctx);
extern "C" uint64_t func_802A8F50_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D9F08(CpuContext* ctx);
extern "C" uint64_t func_802D9F08_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_80395CE8(CpuContext* ctx);
extern "C" uint64_t func_80395CE8_rae0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803CCE5C(CpuContext* ctx);
extern "C" uint64_t func_803CCE5C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F1148(CpuContext* ctx);
extern "C" uint64_t func_803F1148_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F1388(CpuContext* ctx);
extern "C" uint64_t func_803F1388_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F881C(CpuContext* ctx);
extern "C" uint64_t func_803F881C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FE7D0(CpuContext* ctx);
extern "C" uint32_t func_803FE7D0_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_803FE8F4(CpuContext* ctx);
extern "C" uint64_t func_803FE8F4_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80413F70(CpuContext* ctx);
extern "C" uint64_t func_80413F70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804140E8(CpuContext* ctx);
extern "C" uint64_t func_804140E8_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804143E8(CpuContext* ctx);
extern "C" uint64_t func_804143E8_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804144F8(CpuContext* ctx);
extern "C" uint64_t func_804144F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804147F8(CpuContext* ctx);
extern "C" uint64_t func_804147F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80414858(CpuContext* ctx);
extern "C" uint64_t func_80414858_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80414898(CpuContext* ctx);
extern "C" uint64_t func_80414898_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80414934(CpuContext* ctx);
extern "C" uint32_t func_80414934_ra0_0_8_0(CpuContext*);
extern "C" void func_80414C38(CpuContext* ctx);
extern "C" uint32_t func_80414C38_ra0_0_8_0(CpuContext*);
extern "C" void func_80414CA8(CpuContext* ctx);
extern "C" uint32_t func_80414CA8_ra0_0_8_0(CpuContext*);
extern "C" void func_80414CE0(CpuContext* ctx);
extern "C" uint32_t func_80414CE0_ra0_0_8_0(CpuContext*);
extern "C" void func_80414F00(CpuContext* ctx);
extern "C" uint64_t func_80414F00_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80414FA4(CpuContext* ctx);
extern "C" uint32_t func_80414FA4_ra0_0_8_0(CpuContext*);
extern "C" void func_8041528C(CpuContext* ctx);
extern "C" uint64_t func_8041528C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804152F0(CpuContext* ctx);
extern "C" uint64_t func_804152F0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80415340(CpuContext* ctx);
extern "C" uint64_t func_80415340_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80415390(CpuContext* ctx);
extern "C" uint64_t func_80415390_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804153E0(CpuContext* ctx);
extern "C" uint64_t func_804153E0_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80415474(CpuContext* ctx);
extern "C" uint64_t func_80415474_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80416D24(CpuContext* ctx);
extern "C" uint64_t func_80416D24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80416DA0(CpuContext* ctx);
extern "C" uint64_t func_80416DA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8041A0C0(CpuContext* ctx);
extern "C" uint64_t func_8041A0C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8041A2B0(CpuContext* ctx);
extern "C" uint64_t func_8041A2B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8041A448(CpuContext* ctx);
extern "C" uint64_t func_8041A448_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8041A538(CpuContext* ctx);
extern "C" uint64_t func_8041A538_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042462C(CpuContext* ctx);
extern "C" uint64_t func_8042462C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80425ADC(CpuContext* ctx);
extern "C" uint64_t func_80425ADC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80425C24(CpuContext* ctx);
extern "C" uint64_t func_80425C24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80427334(CpuContext* ctx);
extern "C" uint64_t func_80427334_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042A92C(CpuContext* ctx);
extern "C" uint32_t func_8042A92C_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B050(CpuContext* ctx);
extern "C" uint32_t func_8042B050_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B1E4(CpuContext* ctx);
extern "C" uint32_t func_8042B1E4_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B3C8(CpuContext* ctx);
extern "C" uint64_t func_8042B3C8_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B428(CpuContext* ctx);
extern "C" uint64_t func_8042B428_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B670(CpuContext* ctx);
extern "C" uint32_t func_8042B670_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042BDD4(CpuContext* ctx);
extern "C" uint64_t func_8042BDD4_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042C1C4(CpuContext* ctx);
extern "C" uint64_t func_8042C1C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8042C4F0(CpuContext* ctx);
extern "C" uint64_t func_8042C4F0_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042C9CC(CpuContext* ctx);
extern "C" uint64_t func_8042C9CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042CB3C(CpuContext* ctx);
extern "C" uint64_t func_8042CB3C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042DE60(CpuContext* ctx);
extern "C" uint64_t func_8042DE60_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80440738(CpuContext* ctx);
extern "C" uint64_t func_80440738_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8044073C(CpuContext* ctx);
extern "C" uint64_t func_8044073C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80440788(CpuContext* ctx);
extern "C" uint64_t func_80440788_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8044078C(CpuContext* ctx);
extern "C" uint64_t func_8044078C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8044DC1C(CpuContext* ctx);
extern "C" uint64_t func_8044DC1C_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8044E1B8(CpuContext* ctx);
extern "C" uint64_t func_8044E1B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8044E2AC(CpuContext* ctx);
extern "C" uint64_t func_8044E2AC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8044E2FC(CpuContext* ctx);
extern "C" uint64_t func_8044E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8044E418(CpuContext* ctx);
extern "C" uint64_t func_8044E418_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804513B0(CpuContext* ctx);
extern "C" uint64_t func_804513B0_rae0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80451F00(CpuContext* ctx);
extern "C" uint32_t func_80451F00_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80451F4C(CpuContext* ctx);
extern "C" uint64_t func_80451F4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80452590(CpuContext* ctx);
extern "C" uint64_t func_80452590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80452790(CpuContext* ctx);
extern "C" uint64_t func_80452790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80453864(CpuContext* ctx);
extern "C" uint64_t func_80453864_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804546B8(CpuContext* ctx);
extern "C" uint64_t func_804546B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80456268(CpuContext* ctx);
extern "C" uint64_t func_80456268_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80456324(CpuContext* ctx);
extern "C" uint64_t func_80456324_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804565D8(CpuContext* ctx);
extern "C" uint64_t func_804565D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_803FE7D0_statefree(uint32_t);

extern "C" void func_8044E4FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
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
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
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
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
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

    goto loc_8044E4FC;

loc_8044E4FC:
{
    MemoryAlias::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = MemoryAlias::FlatRead32((r13 + -16440));
    r4 = (r29 + 65536);
    r26 = MemoryAlias::FlatRead32((r4 + -16588));
    r30 = MemoryAlias::FlatRead32((r4 + -16592));
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r28 = MemoryAlias::FlatRead16((r3 + 708));
    r0 = MemoryAlias::FlatRead16((r3 + 724));
    r0 = (r0 | r28);
    r27 = (r0 & 65535);
    r3 = MemoryAlias::FlatRead8((r29 + 23));
}

loc_8044E540:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(33))) {
        goto loc_8044E5AC;
    }
}

loc_8044E544:
{
    r0 = MemoryAlias::FlatRead8((r4 + -15937));
}

loc_8044E54C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8044E5AC;
    }
}

loc_8044E550:
{
    r0 = MemoryAlias::FlatRead8((r4 + -15938));
}

loc_8044E558:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8044E5AC;
    }
}

loc_8044E55C:
{
}

loc_8044E560:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(50))) {
        goto loc_8044E5AC;
    }
}

loc_8044E564:
{
    r0 = MemoryAlias::FlatRead32((r29 + 84));
}

loc_8044E56C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E5A4;
    }
}

loc_8044E570:
{
    r0 = MemoryAlias::FlatRead32((r29 + 88));
}

loc_8044E578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E5A4;
    }
}

loc_8044E57C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 92));
}

loc_8044E584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E5A4;
    }
}

loc_8044E588:
{
    r0 = MemoryAlias::FlatRead32((r29 + 96));
}

loc_8044E590:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E5A4;
    }
}

loc_8044E594:
{
    r0 = MemoryAlias::FlatRead8((r4 + -15784));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8044E5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044E5AC;
    }
}

loc_8044E5A4:
{
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
}

loc_8044E5AC:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15207));
}

loc_8044E5B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044E5EC;
    }
}

loc_8044E5BC:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15206));
}

loc_8044E5C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E5EC;
    }
}

loc_8044E5C8:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
    // inline leaf 0x8044DF0C (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead8((r3 + 12));
    r0 = (r3 + -20);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8044DF0C
}

loc_8044E5D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8044E5EC;
    }
}

loc_8044E5D8:
{
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15206), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + -15207), static_cast<uint8_t>(r0));
}

loc_8044E5EC:
{
    if constexpr (KnownRegArgsCpuCall<0x8044E2FCu>(&func_8044E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8044E2FC_62C6 = func_8044E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8044E2FC_62C6);
        r4 = static_cast<uint32_t>(regargs_result_8044E2FC_62C6 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8044E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r4 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r4 + -16046));
}

loc_8044E5FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_8044E6A4;
    }
}

loc_8044E600:
{
    r3 = 0x80610000u;
    r3 = (r3 + -4128);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8044E6A4u:
        goto loc_8044E6A4;
        break;
    case 0x8044E618u:
        goto loc_8044E618;
        break;
    case 0x8044E67Cu:
        goto loc_8044E67C;
        break;
    case 0x8044E620u:
        goto loc_8044E620;
        break;
    case 0x8044E654u:
        goto loc_8044E654;
        break;
    case 0x8044E65Cu:
        goto loc_8044E65C;
        break;
    case 0x8044E664u:
        goto loc_8044E664;
        break;
    case 0x8044E66Cu:
        goto loc_8044E66C;
        break;
    case 0x8044E674u:
        goto loc_8044E674;
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
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8044E618:
{
    ctx->lr = 0x8044E61Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8042B2FCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_8044E6A4;
}

loc_8044E620:
{
    r0 = MemoryAlias::FlatRead32((r29 + 92));
}

loc_8044E628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E6A4;
    }
}

loc_8044E62C:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r4 + -24180), r0);
    r3 = (r29 + 25036);
    ctx->lr = 0x8044E63Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042C1C4u>(&func_8042C1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8042C1C4_72B1 = func_8042C1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8042C1C4_72B1);
        r4 = static_cast<uint32_t>(regargs_result_8042C1C4_72B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl5_0x8041A4F4:
{
}

loc_inl5_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8041A50C;
    }
}

loc_inl5_0x8041A4FC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl5_cont_8041A4F4;
}

loc_inl5_0x8041A50C:
{
    r3 = 0;
}

loc_inl5_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r4 = (r29 + 25036);
    ctx->lr = 0x8044E650u;
    if constexpr (KnownRegArgsCpuCall<0x803F1148u>(&func_803F1148)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803F1148_7A54 = func_803F1148_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F1148_7A54);
        r4 = static_cast<uint32_t>(regargs_result_803F1148_7A54 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803F1148u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E654:
{
    ctx->lr = 0x8044E658u;
    if constexpr (KnownRegArgsCpuCall<0x8042B1E4u>(&func_8042B1E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042B1E4_8345 = func_8042B1E4_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8042B1E4_8345;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042B1E4u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E65C:
{
    ctx->lr = 0x8044E660u;
    if constexpr (KnownRegArgsCpuCall<0x8042B050u>(&func_8042B050)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042B050_8BF1 = func_8042B050_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8042B050_8BF1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042B050u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E664:
{
    ctx->lr = 0x8044E668u;
    if constexpr (KnownRegArgsCpuCall<0x8042B3C8u>(&func_8042B3C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042B3C8_9482 = func_8042B3C8_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B3C8_9482);
        r4 = static_cast<uint32_t>(regargs_result_8042B3C8_9482 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042B3C8u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E66C:
{
    ctx->lr = 0x8044E670u;
    if constexpr (KnownRegArgsCpuCall<0x8042B428u>(&func_8042B428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042B428_9D58 = func_8042B428_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B428_9D58);
        r4 = static_cast<uint32_t>(regargs_result_8042B428_9D58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042B428u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E674:
{
    ctx->lr = 0x8044E678u;
    if constexpr (KnownRegArgsCpuCall<0x8042B670u>(&func_8042B670)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042B670_A649 = func_8042B670_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8042B670_A649;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042B670u>(ctx);
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
    goto loc_8044E6A4;
}

loc_8044E67C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
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
    r3_addr_2 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_2);
    goto loc_inl7_cont_8041A358;
}

loc_inl7_0x8041A36C:
{
    r3 = 0;
}

loc_inl7_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (r29 + 65536);
    r4 = (r4 + -15372);
    r5 = 136;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x8044E6A4u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8044E6A4:
{
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + -15207));
}

loc_8044E6B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044E710;
    }
}

loc_8044E6BC:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15206));
}

loc_8044E6C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044E710;
    }
}

loc_8044E6C8:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15202));
}

loc_8044E6D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044E6F8;
    }
}

loc_8044E6D4:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
    // inline leaf 0x80416EAC (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead8((r3 + 12));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x80416EAC
}

loc_8044E6E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8044E6F8;
    }
}

loc_8044E6E4:
{
    r0 = 2;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15202), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x8044E6F8u;
    if constexpr (KnownRegArgsCpuCall<0x80456268u>(&func_80456268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456268_BB63 = func_80456268_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456268_BB63);
        r4 = static_cast<uint32_t>(regargs_result_80456268_BB63 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456268u>(ctx);
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

loc_8044E6F8:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15202));
}

loc_8044E704:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8044E710;
    }
}

loc_8044E708:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + -15202), static_cast<uint8_t>(r0));
}

loc_8044E710:
{
    r0 = MemoryAlias::FlatRead8((r29 + 23));
}

loc_8044E718:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(180))) {
        goto loc_804512E4;
    }
}

loc_8044E71C:
{
    r3 = 0x80610000u;
    r3 = (r3 + -4852);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_5);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8044E734u:
        goto loc_8044E734;
        break;
    case 0x804512E4u:
        goto loc_804512E4;
        break;
    case 0x8044E7A8u:
        goto loc_8044E7A8;
        break;
    case 0x80450998u:
        goto loc_80450998;
        break;
    case 0x8044F854u:
        goto loc_8044F854;
        break;
    case 0x8044F34Cu:
        goto loc_8044F34C;
        break;
    case 0x8044F744u:
        goto loc_8044F744;
        break;
    case 0x8044F7D8u:
        goto loc_8044F7D8;
        break;
    case 0x8044F818u:
        goto loc_8044F818;
        break;
    case 0x8044F904u:
        goto loc_8044F904;
        break;
    case 0x8044FB84u:
        goto loc_8044FB84;
        break;
    case 0x804509C8u:
        goto loc_804509C8;
        break;
    case 0x80450110u:
        goto loc_80450110;
        break;
    case 0x804501ACu:
        goto loc_804501AC;
        break;
    case 0x8045020Cu:
        goto loc_8045020C;
        break;
    case 0x80450284u:
        goto loc_80450284;
        break;
    case 0x80450308u:
        goto loc_80450308;
        break;
    case 0x80450378u:
        goto loc_80450378;
        break;
    case 0x80450408u:
        goto loc_80450408;
        break;
    case 0x804504ACu:
        goto loc_804504AC;
        break;
    case 0x80450780u:
        goto loc_80450780;
        break;
    case 0x804507E8u:
        goto loc_804507E8;
        break;
    case 0x80450830u:
        goto loc_80450830;
        break;
    case 0x80450A10u:
        goto loc_80450A10;
        break;
    case 0x80450AFCu:
        goto loc_80450AFC;
        break;
    case 0x80450B60u:
        goto loc_80450B60;
        break;
    case 0x80450CDCu:
        goto loc_80450CDC;
        break;
    case 0x80450CF4u:
        goto loc_80450CF4;
        break;
    case 0x80450D74u:
        goto loc_80450D74;
        break;
    case 0x80450E2Cu:
        goto loc_80450E2C;
        break;
    case 0x80450EA8u:
        goto loc_80450EA8;
        break;
    case 0x804511E8u:
        goto loc_804511E8;
        break;
    case 0x80451290u:
        goto loc_80451290;
        break;
    case 0x80451294u:
        goto loc_80451294;
        break;
    case 0x804512C4u:
        goto loc_804512C4;
        break;
    case 0x8044E91Cu:
        goto loc_8044E91C;
        break;
    case 0x8044E938u:
        goto loc_8044E938;
        break;
    case 0x8044E96Cu:
        goto loc_8044E96C;
        break;
    case 0x8044ECACu:
        goto loc_8044ECAC;
        break;
    case 0x8044ECF4u:
        goto loc_8044ECF4;
        break;
    case 0x8044EE30u:
        goto loc_8044EE30;
        break;
    case 0x8044EE44u:
        goto loc_8044EE44;
        break;
    case 0x8044EEACu:
        goto loc_8044EEAC;
        break;
    case 0x8044EEC4u:
        goto loc_8044EEC4;
        break;
    case 0x8044EF4Cu:
        goto loc_8044EF4C;
        break;
    case 0x8044F0BCu:
        goto loc_8044F0BC;
        break;
    case 0x8044EF08u:
        goto loc_8044EF08;
        break;
    case 0x8044F010u:
        goto loc_8044F010;
        break;
    case 0x8044F07Cu:
        goto loc_8044F07C;
        break;
    case 0x8044F0E8u:
        goto loc_8044F0E8;
        break;
    case 0x8044F138u:
        goto loc_8044F138;
        break;
    case 0x8044F250u:
        goto loc_8044F250;
        break;
    case 0x8044F30Cu:
        goto loc_8044F30C;
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
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8044E734:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044E73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044E76C;
    }
}

loc_8044E740:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044E750;
    }
}

loc_8044E744:
{
}

loc_8044E748:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044E75C;
    }
}

loc_8044E74C:
{
    goto loc_804512E4;
}

loc_8044E750:
{
}

loc_8044E754:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_804512E4;
    }
}

loc_8044E758:
{
    goto loc_8044E79C;
}

loc_8044E75C:
{
    ctx->lr = 0x8044E760u;
    if constexpr (KnownRegArgsCpuCall<0x80440788u>(&func_80440788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440788_D786 = func_80440788_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440788_D786);
        r4 = static_cast<uint32_t>(regargs_result_80440788_D786 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
}

loc_8044E76C:
{
    ctx->lr = 0x8044E770u;
    if constexpr (KnownRegArgsCpuCall<0x8044078Cu>(&func_8044078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044078C_DE06 = func_8044078C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044078C_DE06);
        r4 = static_cast<uint32_t>(regargs_result_8044078C_DE06 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044078Cu>(ctx);
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

loc_8044E774:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044E778:
{
}

loc_8044E77C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8044E78C;
    }
}

loc_8044E780:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E78C:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E79C:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E7A8:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8044E7C0u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_8044E7C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8044E908;
    }
}

loc_8044E7CC:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044E7D4u;
    if constexpr (KnownRegArgsCpuCall<0x80413F70u>(&func_80413F70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80413F70_EFC5 = func_80413F70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80413F70_EFC5);
        r4 = static_cast<uint32_t>(regargs_result_80413F70_EFC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80413F70u>(ctx);
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

loc_8044E7D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8044E7EC;
    }
}

loc_8044E7DC:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8044E3FC (7 guest instruction(s))
    r5 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r5 + -16594), static_cast<uint8_t>(r4));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8044E3FC
    goto loc_804512E4;
}

loc_8044E7EC:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044E7F4u;
    if constexpr (KnownRegArgsCpuCall<0x804143E8u>(&func_804143E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804143E8_FBD0 = func_804143E8_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804143E8_FBD0);
        r4 = static_cast<uint32_t>(regargs_result_804143E8_FBD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804143E8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 1;
    r24 = 0x90040000u;
    r5 = (r24 + -15520);
    r6 = 16384;
    ctx->lr = 0x8044E80Cu;
    if constexpr (KnownRegArgsCpuCall<0x80414898u>(&func_80414898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414898_106BE = func_80414898_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80414898_106BE);
        r4 = static_cast<uint32_t>(regargs_result_80414898_106BE >> 32);
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
        InvokeDirectCpu<0x80414898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 2;
    r5 = (r24 + 864);
    r6 = 16384;
    ctx->lr = 0x8044E820u;
    if constexpr (KnownRegArgsCpuCall<0x80414898u>(&func_80414898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414898_10BA7 = func_80414898_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80414898_10BA7);
        r4 = static_cast<uint32_t>(regargs_result_80414898_10BA7 >> 32);
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
        InvokeDirectCpu<0x80414898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15768));
    ctr = r12;
    ctx->lr = 0x8044E830u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 0x80450000u;
    r4 = (r4 + -8204);
    r5 = 0;
    ctx->lr = 0x8044E844u;
    if constexpr (KnownRegArgsCpuCall<0x8041528Cu>(&func_8041528C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8041528C_114F3 = func_8041528C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041528C_114F3);
        r4 = static_cast<uint32_t>(regargs_result_8041528C_114F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8041528Cu>(ctx);
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
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 4;
    ctx->lr = 0x8044E850u;
    if constexpr (KnownRegArgsCpuCall<0x804152F0u>(&func_804152F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804152F0_11D99 = func_804152F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804152F0_11D99);
        r4 = static_cast<uint32_t>(regargs_result_804152F0_11D99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804152F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044E858u;
    if constexpr (KnownRegArgsCpuCall<0x804140E8u>(&func_804140E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804140E8_1224B = func_804140E8_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804140E8_1224B);
        r4 = static_cast<uint32_t>(regargs_result_804140E8_1224B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804140E8u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r24 = r3;
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = r24;
    ctx->lr = 0x8044E868u;
    if constexpr (KnownRegArgsCpuCall<0x80415340u>(&func_80415340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80415340_12A11 = func_80415340_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80415340_12A11);
        r4 = static_cast<uint32_t>(regargs_result_80415340_12A11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80415340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = 0x80660000u;
    r6 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r6 + 9));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = 0x80610000u;
    r5 = (r3 + -5048);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryAlias::FlatRead32(r5_addr_1);
    r4 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r4 + -15212), r0);
    r0 = MemoryAlias::FlatRead8((r6 + 9));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r0 = (r3 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryAlias::FlatRead32(r5_addr_2);
    MemoryAlias::FlatWrite32((r4 + -15216), r0);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = MemoryAlias::FlatRead32((r4 + -15216));
    ctx->lr = 0x8044E8B8u;
    if constexpr (KnownRegArgsCpuCall<0x80415390u>(&func_80415390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80415390_131F8 = func_80415390_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80415390_131F8);
        r4 = static_cast<uint32_t>(regargs_result_80415390_131F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80415390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -15928);
    ctx->lr = 0x8044E8C8u;
    if constexpr (KnownRegArgsCpuCall<0x804153E0u>(&func_804153E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804153E0_136DC = func_804153E0_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804153E0_136DC);
        r4 = static_cast<uint32_t>(regargs_result_804153E0_136DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804153E0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -15906);
    ctx->lr = 0x8044E8D8u;
    if constexpr (KnownRegArgsCpuCall<0x80415474u>(&func_80415474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80415474_13F43 = func_80415474_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80415474_13F43);
        r4 = static_cast<uint32_t>(regargs_result_80415474_13F43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80415474u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 0;
    ctx->lr = 0x8044E8E4u;
    if constexpr (KnownRegArgsCpuCall<0x80414858u>(&func_80414858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414858_146C6 = func_80414858_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80414858_146C6);
        r4 = static_cast<uint32_t>(regargs_result_80414858_146C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 0x80610000u;
    r4 = (r4 + -4920);
    r5 = 0x80570000u;
    r5 = (r5 + 10304);
    r6 = MemoryAlias::FlatRead32((r13 + -20952));
    ctx->lr = 0x8044E900u;
    if constexpr (KnownRegArgsCpuCall<0x804147F8u>(&func_804147F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804147F8_14B66 = func_804147F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804147F8_14B66);
        r4 = static_cast<uint32_t>(regargs_result_804147F8_14B66 >> 32);
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
        InvokeDirectCpu<0x804147F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E2F8 (1 guest instruction(s))
    // end of inlined leaf 0x8044E2F8
}

loc_8044E908:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 372), r0);
    r0 = 150;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E91C:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 372), r0);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    // inline leaf 0x804144C4 (8 guest instruction(s))
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 30), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + 31), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + 1674), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x804144C4
    r0 = 151;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E938:
{
    r0 = MemoryAlias::FlatRead32((r29 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8044E940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8044E944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044E958;
    }
}

loc_8044E948:
{
    r3 = r29;
    r4 = 2;
    // inline leaf 0x8044E3FC (7 guest instruction(s))
    r5 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r5 + -16594), static_cast<uint8_t>(r4));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8044E3FC
    goto loc_804512E4;
}

loc_8044E958:
{
    r0 = 160;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044E96C:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8044E974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044EB08;
    }
}

loc_8044E978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044E98C;
    }
}

loc_8044E97C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8044E980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044E99C;
    }
}

loc_8044E984:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044EA98;
    }
}

loc_8044E988:
{
    goto loc_804512E4;
}

loc_8044E98C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8044E990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044EC38;
    }
}

loc_8044E994:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044E998:
{
    goto loc_8044EB14;
}

loc_8044E99C:
{
    r0 = (r28 & 32);
}

loc_8044E9A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044E9D0;
    }
}

loc_8044E9A8:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 14;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044E9CCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_15E74 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_15E74);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_15E74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044E9D0:
{
    r0 = MemoryAlias::FlatRead8((r30 + 292));
}

loc_8044E9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EA34;
    }
}

loc_8044E9DC:
{
    r0 = (r28 & 8);
}

loc_8044E9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EA08;
    }
}

loc_8044E9E8:
{
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044E9F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044EA08;
    }
}

loc_8044E9F4:
{
    r3 = 3;
    ctx->lr = 0x8044E9FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_16997 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_16997);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_16997 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 293), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EA08:
{
    r0 = (r28 & 4);
}

loc_8044EA10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EA34;
    }
}

loc_8044EA14:
{
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044EA1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044EA34;
    }
}

loc_8044EA20:
{
    r3 = 3;
    ctx->lr = 0x8044EA28u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1744C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1744C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1744C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 293), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EA34:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044EA3C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044EA4C;
    }
}

loc_8044EA40:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EA4C:
{
    r0 = (r28 & 16);
}

loc_8044EA54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EA58:
{
    r3 = 0;
    ctx->lr = 0x8044EA60u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_17FCF = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_17FCF);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_17FCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044EA68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044EA78;
    }
}

loc_8044EA6C:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EA78:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 14;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EA98:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044EAA0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044EAB0;
    }
}

loc_8044EAA4:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EAB0:
{
    r0 = (r28 & 16);
}

loc_8044EAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EAD8;
    }
}

loc_8044EABC:
{
    r3 = 0;
    ctx->lr = 0x8044EAC4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_18D87 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_18D87);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_18D87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EAD8:
{
    r0 = (r28 & 32);
}

loc_8044EAE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EAE4:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044EB04u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_198FE = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_198FE);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_198FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044EB08:
{
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EB14:
{
    r0 = (r28 & 32);
}

loc_8044EB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EB4C;
    }
}

loc_8044EB20:
{
    r0 = 4;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 14;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044EB48u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1A46C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1A46C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1A46C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044EB4C:
{
    r0 = MemoryAlias::FlatRead8((r30 + 292));
}

loc_8044EB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EBB0;
    }
}

loc_8044EB58:
{
    r0 = (r28 & 8);
}

loc_8044EB60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EB84;
    }
}

loc_8044EB64:
{
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044EB6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044EB84;
    }
}

loc_8044EB70:
{
    r3 = 3;
    ctx->lr = 0x8044EB78u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1AF8F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1AF8F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1AF8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 293), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EB84:
{
    r0 = (r28 & 4);
}

loc_8044EB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EBB0;
    }
}

loc_8044EB90:
{
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044EB98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044EBB0;
    }
}

loc_8044EB9C:
{
    r3 = 3;
    ctx->lr = 0x8044EBA4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1BA44 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1BA44);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1BA44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 293), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EBB0:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044EBB8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044EBC8;
    }
}

loc_8044EBBC:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EBC8:
{
    r0 = (r28 & 16);
}

loc_8044EBD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EBD4:
{
    r3 = 0;
    ctx->lr = 0x8044EBDCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1C5C7 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1C5C7);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1C5C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = MemoryAlias::FlatRead8((r30 + 293));
}

loc_8044EBE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044EC14;
    }
}

loc_8044EBE8:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044EBF0u;
    if constexpr (KnownRegArgsCpuCall<0x80414934u>(&func_80414934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414934_1CF19 = func_80414934_ra0_0_8_0(ctx);
        r3 = regargs_result_80414934_1CF19;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r4 + -15872), r3);
    r12 = MemoryAlias::FlatRead32((r4 + -15760));
    ctr = r12;
    ctx->lr = 0x8044EC04u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15511), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EC14:
{
    r0 = 4;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 14;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EC38:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044EC40:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044EC50;
    }
}

loc_8044EC44:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EC50:
{
    r0 = (r28 & 16);
}

loc_8044EC58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EC78;
    }
}

loc_8044EC5C:
{
    r3 = 0;
    ctx->lr = 0x8044EC64u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1DAE5 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1DAE5);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1DAE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EC78:
{
    r0 = (r28 & 32);
}

loc_8044EC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EC84:
{
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044ECA8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1E669 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1E669);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1E669 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044ECAC:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044ECB4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044ECC4;
    }
}

loc_8044ECB8:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044ECC4:
{
    r0 = (r28 & 16);
}

loc_8044ECCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044ECD0:
{
    r3 = 0;
    ctx->lr = 0x8044ECD8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_1F199 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1F199);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1F199 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15496), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044ECF4:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044ECFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044EDFC;
    }
}

loc_8044ED00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044ED04:
{
}

loc_8044ED08:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044ED10;
    }
}

loc_8044ED0C:
{
    goto loc_804512E4;
}

loc_8044ED10:
{
    r0 = MemoryAlias::FlatRead8((r30 + 294));
}

loc_8044ED18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044ED90;
    }
}

loc_8044ED1C:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044ED24:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044ED34;
    }
}

loc_8044ED28:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044ED34:
{
    r0 = (r28 & 16);
}

loc_8044ED3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044ED64;
    }
}

loc_8044ED40:
{
    r3 = 0;
    ctx->lr = 0x8044ED48u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_200AF = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_200AF);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_200AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044ED64:
{
    r0 = (r28 & 32);
}

loc_8044ED6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044ED70:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044ED8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_20C6D = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_20C6D);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_20C6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044ED90:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044ED98:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044EDA8;
    }
}

loc_8044ED9C:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044EDA8:
{
    r0 = (r28 & 32);
}

loc_8044EDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044EDD8;
    }
}

loc_8044EDB4:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 13;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044EDD4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2189A = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2189A);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2189A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044EDD8:
{
    r0 = (r28 & 16);
}

loc_8044EDE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EDE4:
{
    r3 = 0;
    ctx->lr = 0x8044EDECu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_22238 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_22238);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_22238 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EDFC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 2154));
}

loc_8044EE0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044EE1C;
    }
}

loc_8044EE10:
{
    r0 = 172;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_8044EE24;
}

loc_8044EE1C:
{
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
}

loc_8044EE24:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EE30:
{
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15756));
    ctr = r12;
    ctx->lr = 0x8044EE40u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_804512E4;
}

loc_8044EE44:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
}

loc_8044EE4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8044EE54;
    }
}

loc_8044EE50:
{
    goto loc_804512E4;
}

loc_8044EE54:
{
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15748));
    ctr = r12;
    ctx->lr = 0x8044EE64u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8044EE68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EE6C:
{
    r0 = 7;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r3));
    r0 = 1;
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    MemoryAlias::FlatWrite32((r29 + 32), r3);
    MemoryAlias::FlatWrite32((r29 + 36), r3);
    MemoryAlias::FlatWrite32((r29 + 44), r3);
    MemoryAlias::FlatWrite32((r29 + 48), r3);
    r0 = 15;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15220), r0);
    goto loc_804512E4;
}

loc_8044EEAC:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = 169;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EEC4:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15939));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8044EEE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8044EEF4;
    }
}

loc_8044EEE4:
{
    r3 = r29;
    r4 = 0;
    // inline leaf 0x8044E3FC (7 guest instruction(s))
    r5 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r5 + -16594), static_cast<uint8_t>(r4));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8044E3FC
    goto loc_804512E4;
}

loc_8044EEF4:
{
    r0 = 8;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EF08:
{
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 372), r24);
    MemoryAlias::FlatWrite32((r29 + 88), r24);
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15784), static_cast<uint8_t>(r24));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
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
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl33_cont_8041A5E4;
}

loc_inl33_0x8041A5FC:
{
    r3 = 0;
}

loc_inl33_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8044EF38u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    MemoryAlias::FlatWrite8((r29 + 21), static_cast<uint8_t>(r24));
    r0 = 170;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    goto loc_804512E4;
}

loc_8044EF4C:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 372));
}

loc_8044EF60:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8044EF70;
    }
}

loc_8044EF64:
{
    r0 = MemoryAlias::FlatRead32((r29 + 88));
}

loc_8044EF6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044EF70:
{
    r0 = MemoryAlias::FlatRead32((r29 + 372));
}

loc_8044EF78:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8044EF88;
    }
}

loc_8044EF7C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 88));
}

loc_8044EF84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044EFE4;
    }
}

loc_8044EF88:
{
    r3 = MemoryAlias::FlatRead32((r29 + 308));
    r0 = (r3 + 2147090432);
}

loc_8044EF94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(52))) {
        goto loc_8044EFBC;
    }
}

loc_8044EF98:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044EFA0u;
    if constexpr (KnownRegArgsCpuCall<0x80414FA4u>(&func_80414FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414FA4_24C91 = func_80414FA4_ra0_0_8_0(ctx);
        r3 = regargs_result_80414FA4_24C91;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 + 1);
    r0 = (r0 * 30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = 174;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EFBC:
{
    r0 = MemoryAlias::FlatRead32((r29 + 312));
}

loc_8044EFC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(114))) {
        goto loc_8044EFD4;
    }
}

loc_8044EFC8:
{
    r0 = 179;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044EFD4:
{
    r3 = r29;
    r4 = 3;
    // inline leaf 0x8044E3FC (7 guest instruction(s))
    r5 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r5 + -16594), static_cast<uint8_t>(r4));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8044E3FC
    goto loc_804512E4;
}

loc_8044EFE4:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -15906);
    r5 = 32;
    ctx->lr = 0x8044EFF8u;
    if constexpr (KnownRegArgsCpuCall<0x80414F00u>(&func_80414F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80414F00_25508 = func_80414F00_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80414F00_25508);
        r4 = static_cast<uint32_t>(regargs_result_80414F00_25508 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414F00u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8044EFFCu;
    if constexpr (KnownRegArgsCpuCall<0x80440738u>(&func_80440738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440738_25C55 = func_80440738_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440738_25C55);
        r4 = static_cast<uint32_t>(regargs_result_80440738_25C55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 171;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F010:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044F018:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(30))) {
        goto loc_8044F028;
    }
}

loc_8044F01C:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F028:
{
    r0 = (r28 & 16);
}

loc_8044F030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F034:
{
    r3 = 0;
    ctx->lr = 0x8044F03Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_26556 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_26556);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_26556 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044F044u;
    if constexpr (KnownRegArgsCpuCall<0x80414C38u>(&func_80414C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414C38_26DE3 = func_80414C38_ra0_0_8_0(ctx);
        r3 = regargs_result_80414C38_26DE3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8044F048:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8044F068;
    }
}

loc_8044F04C:
{
    r0 = 175;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15744));
    ctr = r12;
    ctx->lr = 0x8044F064u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_804512E4;
}

loc_8044F068:
{
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F07C:
{
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15740));
    ctr = r12;
    ctx->lr = 0x8044F08Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8044F090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044F0A4;
    }
}

loc_8044F094:
{
    r3 = r29;
    r4 = 3;
    // inline leaf 0x8044E3FC (7 guest instruction(s))
    r5 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r5 + -16594), static_cast<uint8_t>(r4));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8044E3FC
    goto loc_804512E4;
}

loc_8044F0A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044F0A8:
{
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F0BC:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x8044F0CCu;
    if constexpr (KnownRegArgsCpuCall<0x8044073Cu>(&func_8044073C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044073C_27F35 = func_8044073C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044073C_27F35);
        r4 = static_cast<uint32_t>(regargs_result_8044073C_27F35 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044073Cu>(ctx);
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

loc_8044F0D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F0D4:
{
    r0 = 177;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F0E8:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044F0F0u;
    if constexpr (KnownRegArgsCpuCall<0x80414CA8u>(&func_80414CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414CA8_28936 = func_80414CA8_ra0_0_8_0(ctx);
        r3 = regargs_result_80414CA8_28936;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8044F0F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044F10C;
    }
}

loc_8044F0F8:
{
    r0 = 179;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F10C:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044F114u;
    if constexpr (KnownRegArgsCpuCall<0x80414FA4u>(&func_80414FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414FA4_28DF0 = func_80414FA4_ra0_0_8_0(ctx);
        r3 = regargs_result_80414FA4_28DF0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 + 1);
    r0 = (r0 * 30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = 178;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F138:
{
    r4 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8044F140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044F180;
    }
}

loc_8044F144:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044F148:
{
}

loc_8044F14C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8044F154;
    }
}

loc_8044F150:
{
    goto loc_804512E4;
}

loc_8044F154:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044F15C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(30))) {
        goto loc_8044F16C;
    }
}

loc_8044F160:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F16C:
{
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F180:
{
    r0 = MemoryAlias::FlatRead8((r30 + 294));
}

loc_8044F188:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044F1F8;
    }
}

loc_8044F18C:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044F194:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F1A4;
    }
}

loc_8044F198:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F1A4:
{
    r0 = (r28 & 16);
}

loc_8044F1AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F1D4;
    }
}

loc_8044F1B0:
{
    r3 = 0;
    ctx->lr = 0x8044F1B8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_29A85 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_29A85);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_29A85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F1D4:
{
    r0 = (r28 & 32);
}

loc_8044F1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F1E0:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044F1F4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2A5ED = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2A5ED);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2A5ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044F1F8:
{
    r0 = (r28 & 32);
}

loc_8044F200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F228;
    }
}

loc_8044F204:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r30 + 294), static_cast<uint8_t>(r0));
    r0 = 13;
    MemoryAlias::FlatWrite8((r30 + 295), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044F224u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2B088 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2B088);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2B088 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_804512E4;
}

loc_8044F228:
{
    r0 = (r28 & 16);
}

loc_8044F230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F234:
{
    r3 = 0;
    ctx->lr = 0x8044F23Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2BA26 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2BA26);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2BA26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 179;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F250:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044F258u;
    if constexpr (KnownRegArgsCpuCall<0x80414CE0u>(&func_80414CE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80414CE0_2C388 = func_80414CE0_ra0_0_8_0(ctx);
        r3 = regargs_result_80414CE0_2C388;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80414CE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8044F25C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044F2F0;
    }
}

loc_8044F260:
{
    r25 = 1;
    MemoryAlias::FlatWrite8((r29 + 21), static_cast<uint8_t>(r25));
    r0 = 7;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r25));
    r3 = r29;
    ctx->lr = 0x8044F284u;
    if constexpr (KnownRegArgsCpuCall<0x8042462Cu>(&func_8042462C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042462C_2C979 = func_8042462C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042462C_2C979);
        r4 = static_cast<uint32_t>(regargs_result_8042462C_2C979 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042462Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    MemoryAlias::FlatWrite32((r29 + 28), r25);
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 32), r24);
    MemoryAlias::FlatWrite32((r29 + 36), r24);
    MemoryAlias::FlatWrite32((r29 + 44), r24);
    MemoryAlias::FlatWrite32((r29 + 48), r24);
    r0 = 15;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15220), r0);
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryAlias::FlatRead32((r3 + 2396));
    MemoryAlias::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = r3;
    MemoryAlias::FlatWrite8((r29 + 29554), static_cast<uint8_t>(r24));
    r3 = (r29 + 29554);
    r4 = (r4 + 3);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_2D68F = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2D68F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15207));
}

loc_8044F2CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804512E4;
    }
}

loc_8044F2D0:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15206));
}

loc_8044F2D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F2DC:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x8044F2E4u;
    if constexpr (KnownRegArgsCpuCall<0x80416DA0u>(&func_80416DA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80416DA0_2DD3A = func_80416DA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80416DA0_2DD3A);
        r4 = static_cast<uint32_t>(regargs_result_80416DA0_2DD3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80416DA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15202), static_cast<uint8_t>(r25));
    goto loc_804512E4;
}

loc_8044F2F0:
{
    r0 = 180;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F30C:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044F314:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F324;
    }
}

loc_8044F318:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F324:
{
    r0 = (r28 & 16);
}

loc_8044F32C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F330:
{
    r3 = 0;
    ctx->lr = 0x8044F338u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2E55D = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2E55D);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2E55D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F34C:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_8044F354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044F6B0;
    }
}

loc_8044F358:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044F374;
    }
}

loc_8044F35C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044F360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044F650;
    }
}

loc_8044F364:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044F368:
{
}

loc_8044F36C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044F380;
    }
}

loc_8044F370:
{
    goto loc_804512E4;
}

loc_8044F374:
{
}

loc_8044F378:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(102))) {
        goto loc_804512E4;
    }
}

loc_8044F37C:
{
    goto loc_8044F718;
}

loc_8044F380:
{
    ctx->lr = 0x8044F384u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_2F236 = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_2F236);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_2F236 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryAlias::FlatRead32((r29 + 44));
}

loc_8044F38C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F398;
    }
}

loc_8044F390:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r29 + 44), r0);
}

loc_8044F398:
{
    r3 = MemoryAlias::FlatRead32((r29 + 48));
}

loc_8044F3A0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F3AC;
    }
}

loc_8044F3A4:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r29 + 48), r0);
}

loc_8044F3AC:
{
    r4 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead32((r4 + -15220));
}

loc_8044F3B8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F3C8;
    }
}

loc_8044F3BC:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r4 + -15220), r0);
    goto loc_804512E4;
}

loc_8044F3C8:
{
    r0 = (r28 & 8);
}

loc_8044F3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F3F4;
    }
}

loc_8044F3D4:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044F3DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044F3F4;
    }
}

loc_8044F3E0:
{
    r3 = 3;
    ctx->lr = 0x8044F3E8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_2FC4C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2FC4C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2FC4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 1;
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    goto loc_804512E4;
}

loc_8044F3F4:
{
    r0 = (r28 & 4);
}

loc_8044F3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F420;
    }
}

loc_8044F400:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044F408:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8044F420;
    }
}

loc_8044F40C:
{
    r3 = 3;
    ctx->lr = 0x8044F414u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_306E9 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_306E9);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_306E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    goto loc_804512E4;
}

loc_8044F420:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044F428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F518;
    }
}

loc_8044F42C:
{
    r0 = (r27 & 1);
}

loc_8044F434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F494;
    }
}

loc_8044F438:
{
    r0 = MemoryAlias::FlatRead32((r29 + 32));
}

loc_8044F440:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8044F45C;
    }
}

loc_8044F444:
{
    r3 = 3;
    ctx->lr = 0x8044F44Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_31249 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_31249);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_31249 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r29 + 32));
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    goto loc_804512E4;
}

loc_8044F45C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 36));
}

loc_8044F464:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8044F494;
    }
}

loc_8044F468:
{
    r3 = 3;
    ctx->lr = 0x8044F470u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_31C76 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_31C76);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_31C76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r29 + 36));
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r29 + 36), r0);
    r0 = MemoryAlias::FlatRead32((r29 + 36));
}

loc_8044F484:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F488:
{
    r0 = 4;
    MemoryAlias::FlatWrite32((r29 + 44), r0);
    goto loc_804512E4;
}

loc_8044F494:
{
    r0 = (r27 & 2);
}

loc_8044F49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F518;
    }
}

loc_8044F4A0:
{
    r3 = MemoryAlias::FlatRead32((r29 + 32));
}

loc_8044F4A8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_8044F4C4;
    }
}

loc_8044F4AC:
{
    r3 = 3;
    ctx->lr = 0x8044F4B4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_3284B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_3284B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_3284B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r29 + 32));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    goto loc_804512E4;
}

loc_8044F4C4:
{
    r0 = MemoryAlias::FlatRead32((r29 + 36));
    r4 = (r0 + r3);
    r3 = MemoryAlias::FlatRead32((r29 + 376));
    r0 = (r3 + -1);
}

loc_8044F4D8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8044F518;
    }
}

loc_8044F4DC:
{
    r3 = 3;
    ctx->lr = 0x8044F4E4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_332D5 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_332D5);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_332D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r29 + 36));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r29 + 36), r0);
    r3 = MemoryAlias::FlatRead32((r29 + 36));
    r0 = MemoryAlias::FlatRead32((r29 + 32));
    r4 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r29 + 376));
    r0 = (r3 + -1);
}

loc_8044F508:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_804512E4;
    }
}

loc_8044F50C:
{
    r0 = 4;
    MemoryAlias::FlatWrite32((r29 + 48), r0);
    goto loc_804512E4;
}

loc_8044F518:
{
    r0 = (r27 & 32);
}

loc_8044F520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F540;
    }
}

loc_8044F524:
{
    r3 = 1;
    ctx->lr = 0x8044F52Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_33E75 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_33E75);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_33E75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F540:
{
    r0 = (r28 & 16);
}

loc_8044F548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F54C:
{
    r3 = 0;
    ctx->lr = 0x8044F554u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_348BB = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_348BB);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_348BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044F55C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044F5A4;
    }
}

loc_8044F560:
{
    r0 = 161;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r24 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r3 + -15752));
    ctr = r12;
    ctx->lr = 0x8044F588u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 4;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16040), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryAlias::FlatWrite8((r3 + -16039), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -15496), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_8044F5A4:
{
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryAlias::FlatRead32((r3 + 2396));
    MemoryAlias::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r30 = r3;
    r31 = 0;
    MemoryAlias::FlatWrite32((r29 + 25160), r31);
    MemoryAlias::FlatWrite32((r29 + 372), r31);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = MemoryAlias::FlatRead32((r29 + 36));
    r0 = MemoryAlias::FlatRead32((r29 + 32));
    r0 = (r4 + r0);
    r0 = (r0 * 92);
    r4 = (r29 + r0);
    r4 = MemoryAlias::FlatRead32((r4 + 380));
    // inline leaf 0x803FE8E8 (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + -29860), r4);
    // end of inlined leaf 0x803FE8E8
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r30 + 3);
    ctx->lr = 0x8044F5E4u;
    if constexpr (KnownRegArgsCpuCall<0x803FE8F4u>(&func_803FE8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803FE8F4_35C50 = func_803FE8F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FE8F4_35C50);
        r4 = static_cast<uint32_t>(regargs_result_803FE8F4_35C50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803FE8F4u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r29 + 65536);
    r4 = MemoryAlias::FlatRead32((r4 + -15212));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & -16);
    r4 = (r0 - r4);
    r0 = (r4 + 5);
    r4 = (r0 & 255);
    // inline leaf 0x803FE498 (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r3 + -11264), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x803FE498
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x803FE7D0u) && KnownTranslatedCpuCall<0x803FE7D0u>::kAvailable && !KnownTranslatedCpuCall<0x803FE7D0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803FE7D0u>()) {
        func_803FE7D0_statefree(r3);
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
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803FE7D0u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    MemoryAlias::FlatWrite8((r29 + 29544), static_cast<uint8_t>(r31));
    MemoryAlias::FlatWrite8((r29 + 29554), static_cast<uint8_t>(r31));
    r3 = (r29 + 29544);
    r4 = MemoryAlias::FlatRead32((r29 + 36));
    r0 = MemoryAlias::FlatRead32((r29 + 32));
    r0 = (r4 + r0);
    r0 = (r0 * 92);
    r4 = (r29 + r0);
    r4 = (r4 + 384);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_36D1B = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_36D1B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r29 + 29554);
    r4 = (r30 + 3);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_3720A = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3720A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 8;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r31));
    goto loc_804512E4;
}

loc_8044F650:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044F658:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044F668;
    }
}

loc_8044F65C:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_8044F668:
{
    r0 = (r28 & 32);
}

loc_8044F670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044F688;
    }
}

loc_8044F674:
{
    r3 = 1;
    ctx->lr = 0x8044F67Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_37A4B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_37A4B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_37A4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F688:
{
    r0 = (r28 & 16);
}

loc_8044F690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F694:
{
    r3 = 0;
    ctx->lr = 0x8044F69Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_3843B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_3843B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_3843B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F6B0:
{
    r3 = 28;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl51_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl51_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl51_0x803BECF4;
    }
}

loc_inl51_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryAlias::FlatRead8(r3_addr_7);
    r3 = (r0 ^ 1);
    goto loc_inl51_cont_803BECD4;
}

loc_inl51_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryAlias::FlatRead8(r3_addr_8);
}

loc_inl51_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8044F6C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044F6D0;
    }
}

loc_8044F6C4:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_8044F380;
}

loc_8044F6D0:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15201));
}

loc_8044F6DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044F6EC;
    }
}

loc_8044F6E0:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_8044F380;
}

loc_8044F6EC:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15207));
}

loc_8044F6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044F710;
    }
}

loc_8044F6F8:
{
    r0 = MemoryAlias::FlatRead8((r3 + -15206));
}

loc_8044F700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044F710;
    }
}

loc_8044F704:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_8044F380;
}

loc_8044F710:
{
    r0 = 101;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
}

loc_8044F718:
{
    r0 = (r28 & 16);
}

loc_8044F720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8044F724:
{
    r3 = 0;
    ctx->lr = 0x8044F72Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_3963C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_3963C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_3963C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15201), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F744:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044F758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044F794;
    }
}

loc_8044F75C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_8044F760:
{
}

loc_8044F764:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044F76C;
    }
}

loc_8044F768:
{
    goto loc_804512E4;
}

loc_8044F76C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 25160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8044F774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8044F778:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044F788;
    }
}

loc_8044F77C:
{
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_8044F788:
{
    r0 = 168;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8044F794:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl54_0x8041A358:
{
}

loc_inl54_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl54_0x8041A36C;
    }
}

loc_inl54_0x8041A360:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_11);
    goto loc_inl54_cont_8041A358;
}

loc_inl54_0x8041A36C:
{
    r3 = 0;
}

loc_inl54_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8044F7B8u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r0);
    MemoryAlias::FlatWrite32((r3 + -32044), r0);
    goto loc_804512E4;
}

loc_8044F7D8:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r29 + 20));
}

loc_8044F7EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804512E4;
    }
}

loc_8044F7F0:
{
    r0 = 10;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl56_0x8041A4F4:
{
}

loc_inl56_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl56_0x8041A50C;
    }
}

loc_inl56_0x8041A4FC:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl56_cont_8041A4F4;
}

loc_inl56_0x8041A50C:
{
    r3 = 0;
}

loc_inl56_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8044F814u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_804512E4;
}

loc_8044F818:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r29 + 22));
}

loc_8044F82C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804512E4;
    }
}

loc_8044F830:
{
    ctx->lr = 0x8044F834u;
    if constexpr (KnownRegArgsCpuCall<0x8042C4F0u>(&func_8042C4F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042C4F0_3B95F = func_8042C4F0_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C4F0_3B95F);
        r4 = static_cast<uint32_t>(regargs_result_8042C4F0_3B95F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C4F0u>(ctx);
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
    r0 = 5;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r0);
    MemoryAlias::FlatWrite32((r3 + -32044), r0);
    goto loc_804512E4;
}

loc_8044F854:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8044F86Cu;
    if constexpr (KnownRegArgsCpuCall<0x80451F4Cu>(&func_80451F4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80451F4C_3C4D6 = func_80451F4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80451F4C_3C4D6);
        r4 = static_cast<uint32_t>(regargs_result_80451F4C_3C4D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80451F4Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8044F870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8044F874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044F88C;
    }
}

loc_8044F878:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_3CF8D = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_3CF8D);
        r4 = static_cast<uint32_t>(regargs_result_80453864_3CF8D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_8044F88C:
{
    r26 = 0;
    r24 = 0;
    r25 = (r29 + 65536);
}

loc_8044F898:
{
    r3 = r26;
    // inline leaf 0x804537E4 (6 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead16((r3 + -26988));
    // end of inlined leaf 0x804537E4
    r0 = (r3 & 65535);
    r3 = (r25 + r24);
    MemoryAlias::FlatWrite32((r3 + -15492), r0);
    r26 = (r26 + 1);
    r24 = (r24 + 4);
}

loc_8044F8B8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_8044F898;
    }
}

loc_8044F8BC:
{
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 25228), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
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
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl60_cont_8041A5E4;
}

loc_inl60_0x8041A5FC:
{
    r3 = 0;
}

loc_inl60_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 80;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8044F8E4u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 11;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15376), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_8044F904:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 25228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8044F918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8044F91C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044F92C;
    }
}

loc_8044F920:
{
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_8044F92C:
{
    r0 = 12;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    r6 = (r29 + 65536);
    guest_range_1 = MemoryAlias::ResolveRangeHost((r6 + -24320), 0, 48u, false, true);
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 0u, (r6 + -24320), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 4u, (r6 + -24316), r0);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 8u, (r6 + -24312), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 12u, (r6 + -24308), r0);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 32u, (r6 + -24288), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 36u, (r6 + -24284), r0);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 40u, (r6 + -24280), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 44u, (r6 + -24276), r0);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 16u, (r6 + -24304), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 20u, (r6 + -24300), r0);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryAlias::WriteResolved32(guest_range_1, 24u, (r6 + -24296), r0);
        MemoryAlias::WriteResolved32(guest_range_1, 28u, (r6 + -24292), r0);
    }
    r7 = (r29 + 1632);
    r24 = 0;
    r3 = 0;
    goto loc_8044F9B8;
}

loc_8044F988:
{
    r4 = (r7 + r3);
    r5 = MemoryAlias::FlatRead32((r4 + 68));
    r5 = (r5 + -1);
}

loc_8044F998:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8044F9B0;
    }
}

loc_8044F99C:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r5 = (r6 + r0);
    r4 = MemoryAlias::FlatRead32((r5 + -24320));
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite32((r5 + -24320), r0);
}

loc_8044F9B0:
{
    r24 = (r24 + 1);
    r3 = (r3 + 64);
}

loc_8044F9B8:
{
    r0 = MemoryAlias::FlatRead32(r7);
}

loc_8044F9C0:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r0))) {
        goto loc_8044F988;
    }
}

loc_8044F9C4:
{
    r24 = 0;
    r25 = 0;
    r31 = (r29 + 65536);
}

loc_8044F9D0:
{
    r3 = (r31 + r25);
    r0 = MemoryAlias::FlatRead32((r3 + -24320));
}

loc_8044F9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FA54;
    }
}

loc_8044F9E0:
{
    r3 = r24;
    // inline leaf 0x80452F90 (12 guest instruction(s))
}

loc_inl62_0x80452F90:
{
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r4 = (r4 + -32040);
}

loc_inl62_0x80452FA0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl62_0x80452FAC;
    }
}

loc_inl62_0x80452FA4:
{
}

loc_inl62_0x80452FA8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_inl62_0x80452FB4;
    }
}

loc_inl62_0x80452FAC:
{
    r3 = (r13 + -20920);
    goto loc_inl62_cont_80452F90;
}

loc_inl62_0x80452FB4:
{
    r0 = (r3 * 192);
    r3 = (r4 + r0);
}

loc_inl62_cont_80452F90:
{
    // end of inlined leaf 0x80452F90
    r4 = r3;
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24304));
    r0 = (r0 * 146);
    r3 = (r26 + r0);
    r3 = (r3 + 14);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_3F62E = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3F62E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r24;
    // inline leaf 0x80452FC0 (6 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0 = (r3 * 192);
    r3 = (r4 + r0);
    r3 = (r3 + -32016);
    // end of inlined leaf 0x80452FC0
    r4 = r3;
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24304));
    r0 = (r0 * 146);
    r3 = (r26 + r0);
    r3 = (r3 + 30);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_3FC88 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3FC88;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = (r29 + 65536);
    r3 = (r5 + r25);
    r0 = MemoryAlias::FlatRead32((r3 + -24320));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryAlias::FlatRead32((r5 + -24304));
    r0 = (r0 * 146);
    r3 = (r26 + r0);
    MemoryAlias::FlatWrite16((r3 + 12), static_cast<uint16_t>(r4));
    r3 = MemoryAlias::FlatRead32((r5 + -24304));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r5 + -24304), r0);
}

loc_8044FA54:
{
    r24 = (r24 + 1);
    r25 = (r25 + 4);
}

loc_8044FA60:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(4))) {
        goto loc_8044F9D0;
    }
}

loc_8044FA64:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24304));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 8), static_cast<uint16_t>(r0));
    r6 = 0;
    MemoryAlias::FlatWrite16((r26 + 10), static_cast<uint16_t>(r6));
    r0 = 2;
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r4 = (r24 * 146);
    r3 = (8 - r24);
}

loc_8044FA90:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(8))) {
        goto loc_8044FB6C;
    }
}

loc_8044FA94:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_26 & 536870911);
}

loc_8044FA9C:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8044FB50;
    }
}

loc_8044FAA4:
{
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8044FAA4;
    }
}

loc_8044FB48:
{
    r3 = (r3 & 7);
}

loc_8044FB4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8044FB6C;
    }
}

loc_8044FB50:
{
    ctr = r3;
}

loc_8044FB54:
{
    r5 = (r26 + r4);
    MemoryAlias::FlatWrite8((r5 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite8((r5 + 30), static_cast<uint8_t>(r6));
    MemoryAlias::FlatWrite16((r5 + 12), static_cast<uint16_t>(r6));
    r4 = (r4 + 146);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8044FB54;
    }
}

loc_8044FB6C:
{
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite32((r3 + -15220), r0);
    goto loc_804512E4;
}

loc_8044FB84:
{
    ctx->lr = 0x8044FB88u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_4121F = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_4121F);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_4121F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r31 = 0;
    MemoryAlias::FlatWrite16((r26 + 6), static_cast<uint16_t>(r31));
    r25 = (r29 + 1632);
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044FB9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044FDFC;
    }
}

loc_8044FBA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044FBB0;
    }
}

loc_8044FBA4:
{
}

loc_8044FBA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044FBBC;
    }
}

loc_8044FBAC:
{
    goto loc_804512E4;
}

loc_8044FBB0:
{
}

loc_8044FBB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_804512E4;
    }
}

loc_8044FBB8:
{
    goto loc_804500AC;
}

loc_8044FBBC:
{
    r0 = MemoryAlias::FlatRead8((r29 + 25));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8044FBC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044FDC0;
    }
}

loc_8044FBC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044FDF0;
    }
}

loc_8044FBCC:
{
}

loc_8044FBD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044FBD8;
    }
}

loc_8044FBD4:
{
    goto loc_8044FDF0;
}

loc_8044FBD8:
{
    r4 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead32((r4 + -15220));
}

loc_8044FBE4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044FBF4;
    }
}

loc_8044FBE8:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r4 + -15220), r0);
    goto loc_8044FDF0;
}

loc_8044FBF4:
{
    r0 = (r27 & 3);
}

loc_8044FBFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FC2C;
    }
}

loc_8044FC00:
{
    r3 = MemoryAlias::FlatRead16((r26 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryAlias::FlatRead32((r4 + -24304));
    r5 = r27;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x8044FC18u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802A8F60_41F5B = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_41F5B);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_41F5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802A8F60u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryAlias::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    goto loc_8044FDF0;
}

loc_8044FC2C:
{
    r0 = (r27 & 32);
}

loc_8044FC34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FC58;
    }
}

loc_8044FC38:
{
    r3 = 1;
    ctx->lr = 0x8044FC40u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_42A1E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_42A1E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_42A1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r31));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_8044FDF0;
}

loc_8044FC58:
{
    r0 = (r28 & 16);
}

loc_8044FC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FDF0;
    }
}

loc_8044FC64:
{
    r6 = 0;
    r24 = 0;
    r0 = MemoryAlias::FlatRead32((r4 + -24320));
}

loc_8044FC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FC88;
    }
}

loc_8044FC78:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044FC80:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8044FCE8;
    }
}

loc_8044FC84:
{
    r6 = 1;
}

loc_8044FC88:
{
    r24 = 1;
    r0 = MemoryAlias::FlatRead32((r4 + -24316));
}

loc_8044FC94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FCA8;
    }
}

loc_8044FC98:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044FCA0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8044FCE8;
    }
}

loc_8044FCA4:
{
    r6 = (r6 + 1);
}

loc_8044FCA8:
{
    r24 = 2;
    r0 = MemoryAlias::FlatRead32((r4 + -24312));
}

loc_8044FCB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FCC8;
    }
}

loc_8044FCB8:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044FCC0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8044FCE8;
    }
}

loc_8044FCC4:
{
    r6 = (r6 + 1);
}

loc_8044FCC8:
{
    r24 = 3;
    r0 = MemoryAlias::FlatRead32((r4 + -24308));
}

loc_8044FCD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FCE4;
    }
}

loc_8044FCD8:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
}

loc_8044FCE0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8044FCE8;
    }
}

loc_8044FCE4:
{
    r24 = 4;
}

loc_8044FCE8:
{
}

loc_8044FCEC:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(4))) {
        goto loc_8044FD10;
    }
}

loc_8044FCF0:
{
    r3 = MemoryAlias::FlatRead32((r13 + -17824));
    ctx->lr = 0x8044FCF8u;
    if constexpr (KnownRegArgsCpuCall<0x8004DEE0u>(&func_8004DEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004DEE0_43BE8 = func_8004DEE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DEE0_43BE8);
        r4 = static_cast<uint32_t>(regargs_result_8004DEE0_43BE8 >> 32);
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
        InvokeDirectCpu<0x8004DEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = r3;
    r3 = r24;
    r4 = (r0 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80451F00u>(&func_80451F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80451F00_44058 = func_80451F00_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80451F00_44058;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80451F00u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8044FD0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044FD2C;
    }
}

loc_8044FD10:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x8044FD28u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_44561 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_44561);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_44561 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    goto loc_8044FDF0;
}

loc_8044FD2C:
{
    r3 = 0;
    ctx->lr = 0x8044FD34u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_44E56 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_44E56);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_44E56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r4 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r4 + -24292), r24);
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r3));
    MemoryAlias::FlatWrite32((r29 + 32), r3);
    r0 = 2;
    MemoryAlias::FlatWrite8((r4 + -16048), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r26 + 1180), static_cast<uint16_t>(r3));
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r26 + 1182), static_cast<uint16_t>(r3));
    r24 = 0;
    goto loc_8044FD88;
}

loc_8044FD6C:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1182));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r26 + 1182), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 1182));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8044FD80:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_8044FDA0;
    }
}

loc_8044FD84:
{
    r24 = (r24 + 1);
}

loc_8044FD88:
{
    r0 = MemoryAlias::FlatRead32((r4 + -24292));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32((r3 + -24320));
}

loc_8044FD9C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_8044FD6C;
    }
}

loc_8044FDA0:
{
    r3 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead32((r3 + -24292));
    r3 = (r3 + 1);
    r4 = (r26 + 1188);
    r5 = 0;
    r6 = 8;
    ctx->lr = 0x8044FDBCu;
    if constexpr (KnownRegArgsCpuCall<0x80452590u>(&func_80452590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80452590_45D73 = func_80452590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452590_45D73);
        r4 = static_cast<uint32_t>(regargs_result_80452590_45D73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80452590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8044FDF0;
}

loc_8044FDC0:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044FDC8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044FDD8;
    }
}

loc_8044FDCC:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_8044FDF0;
}

loc_8044FDD8:
{
    r0 = (r28 & 16);
}

loc_8044FDE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FDF0;
    }
}

loc_8044FDE4:
{
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r31));
    r3 = 0;
    ctx->lr = 0x8044FDF0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_4666B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4666B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4666B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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

loc_8044FDF0:
{
    r3 = r29;
    ctx->lr = 0x8044FDF8u;
    if constexpr (KnownRegArgsCpuCall<0x80425ADCu>(&func_80425ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80425ADC_46EC1 = func_80425ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80425ADC_46EC1);
        r4 = static_cast<uint32_t>(regargs_result_80425ADC_46EC1 >> 32);
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
    goto loc_804512E4;
}

loc_8044FDFC:
{
    r0 = MemoryAlias::FlatRead32((r29 + 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 1184), static_cast<uint16_t>(r0));
    r4 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r4 + -24292));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32((r3 + -24320));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 1186), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r4 + -24292));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + -24320));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_33 & -536870912);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r0 = (r0 - r3);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_34 & -1);
    r0 = (r0 + r3);
}

loc_8044FE5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FE6C;
    }
}

loc_8044FE60:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1186));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r26 + 1186), static_cast<uint16_t>(r0));
}

loc_8044FE6C:
{
    r0 = MemoryAlias::FlatRead16((r26 + 1184));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r0 = 0;
    MemoryAlias::FlatWrite16((r26 + 1182), static_cast<uint16_t>(r0));
    r24 = r5;
    r4 = (r29 + 65536);
    goto loc_8044FEA4;
}

loc_8044FE88:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1182));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r26 + 1182), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 1182));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8044FE9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_8044FEBC;
    }
}

loc_8044FEA0:
{
    r24 = (r24 + 1);
}

loc_8044FEA4:
{
    r0 = MemoryAlias::FlatRead32((r4 + -24292));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32((r3 + -24320));
}

loc_8044FEB8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_8044FE88;
    }
}

loc_8044FEBC:
{
    r3 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead32((r3 + -24292));
    r3 = (r3 + 1);
    r4 = (r26 + 1188);
    r6 = 8;
    ctx->lr = 0x8044FED4u;
    if constexpr (KnownRegArgsCpuCall<0x80452590u>(&func_80452590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80452590_484AF = func_80452590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452590_484AF);
        r4 = static_cast<uint32_t>(regargs_result_80452590_484AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80452590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryAlias::FlatRead16((r26 + 1180));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryAlias::FlatRead16((r26 + 1182));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8044FEE0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8044FEF0;
    }
}

loc_8044FEE4:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 1180), static_cast<uint16_t>(r0));
}

loc_8044FEF0:
{
    r0 = (r27 & 3);
}

loc_8044FEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FF34;
    }
}

loc_8044FEFC:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1180));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryAlias::FlatRead16((r26 + 1182));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = r27;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x8044FF14u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802A8F60_48ECF = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_48ECF);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_48ECF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802A8F60u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryAlias::FlatWrite16((r26 + 1180), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead16((r26 + 1180));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead16((r26 + 1184));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_37 & -8);
    r0 = (r3 + r0);
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    goto loc_804512E4;
}

loc_8044FF34:
{
    r0 = (r27 & 12);
}

loc_8044FF3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FF80;
    }
}

loc_8044FF40:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryAlias::FlatRead16((r26 + 1186));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = r27;
    r6 = 4;
    r7 = 8;
    r8 = 6;
    r9 = (r26 + 6);
    ctx->lr = 0x8044FF60u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F50u>(&func_802A8F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802A8F50_49BB8 = func_802A8F50_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F50_49BB8);
        r4 = static_cast<uint32_t>(regargs_result_802A8F50_49BB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802A8F50u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryAlias::FlatWrite16((r26 + 1184), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead16((r26 + 1180));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead16((r26 + 1184));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_38 & -8);
    r0 = (r3 + r0);
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    goto loc_804512E4;
}

loc_8044FF80:
{
    r0 = (r28 & 32);
}

loc_8044FF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044FFC0;
    }
}

loc_8044FF8C:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8044FFB0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_4A886 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4A886);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4A886 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 15;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15220), r0);
    goto loc_804512E4;
}

loc_8044FFC0:
{
    r0 = (r28 & 16);
}

loc_8044FFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804500A0;
    }
}

loc_8044FFCC:
{
    r3 = 0;
    ctx->lr = 0x8044FFD4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_4B27E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4B27E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4B27E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r6 = 0;
    r24 = 0;
    r3 = 0;
    r4 = (r29 + 65536);
    goto loc_8045002C;
}

loc_8044FFE8:
{
    r5 = (r25 + r3);
    r26 = (r5 + 8);
    r5 = MemoryAlias::FlatRead32((r26 + 60));
    r5 = (r5 + -1);
}

loc_8044FFFC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80450024;
    }
}

loc_80450000:
{
    r0 = MemoryAlias::FlatRead32((r4 + -24292));
}

loc_80450008:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80450024;
    }
}

loc_8045000C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 32));
}

loc_80450014:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_80450020;
    }
}

loc_80450018:
{
    MemoryAlias::FlatWrite32((r4 + -24300), r24);
    goto loc_80450038;
}

loc_80450020:
{
    r6 = (r6 + 1);
}

loc_80450024:
{
    r24 = (r24 + 1);
    r3 = (r3 + 64);
}

loc_8045002C:
{
    r0 = MemoryAlias::FlatRead32(r25);
}

loc_80450034:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r0))) {
        goto loc_8044FFE8;
    }
}

loc_80450038:
{
    r0 = MemoryAlias::FlatRead32((r29 + 28));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -24288), r0);
    r0 = MemoryAlias::FlatRead32((r29 + 32));
    MemoryAlias::FlatWrite32((r3 + -24284), r0);
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 25232), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl65_0x8041A5E4:
{
}

loc_inl65_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl65_0x8041A5FC;
    }
}

loc_inl65_0x8041A5EC:
{
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl65_cont_8041A5E4;
}

loc_inl65_0x8041A5FC:
{
    r3 = 0;
}

loc_inl65_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryAlias::FlatRead32(r26);
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80450074u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 15;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    MemoryAlias::FlatWrite32((r29 + 32), r24);
    r0 = 3;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804500A0:
{
    r3 = r29;
    ctx->lr = 0x804500A8u;
    if constexpr (KnownRegArgsCpuCall<0x80425ADCu>(&func_80425ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80425ADC_4C970 = func_80425ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80425ADC_4C970);
        r4 = static_cast<uint32_t>(regargs_result_80425ADC_4C970 >> 32);
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
    goto loc_804512E4;
}

loc_804500AC:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_804500B4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_804500C4;
    }
}

loc_804500B8:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_804500C4:
{
    r0 = (r28 & 32);
}

loc_804500CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804500E0;
    }
}

loc_804500D0:
{
    r3 = 1;
    ctx->lr = 0x804500D8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_4D0FD = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4D0FD);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4D0FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r31));
    goto loc_804512E4;
}

loc_804500E0:
{
    r0 = (r28 & 16);
}

loc_804500E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_804500EC:
{
    r3 = 0;
    ctx->lr = 0x804500F4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_4DAE1 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4DAE1);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4DAE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r31));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r31));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r31));
    goto loc_804512E4;
}

loc_80450110:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x80450120u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_4E51A = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_4E51A);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_4E51A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryAlias::FlatRead32((r29 + 25232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8045012C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045013C;
    }
}

loc_80450130:
{
    r3 = r29;
    ctx->lr = 0x80450138u;
    if constexpr (KnownRegArgsCpuCall<0x8044E418u>(&func_8044E418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044E418_4EB90 = func_8044E418_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E418_4EB90);
        r4 = static_cast<uint32_t>(regargs_result_8044E418_4EB90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E418u>(ctx);
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
    goto loc_804512E4;
}

loc_8045013C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80450144u;
    if constexpr (KnownRegArgsCpuCall<0x803F881Cu>(&func_803F881C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803F881C_4F47D = func_803F881C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F881C_4F47D);
        r4 = static_cast<uint32_t>(regargs_result_803F881C_4F47D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803F881Cu>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl67_0x8041A5E4:
{
}

loc_inl67_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl67_0x8041A5FC;
    }
}

loc_inl67_0x8041A5EC:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl67_cont_8041A5E4;
}

loc_inl67_0x8041A5FC:
{
    r3 = 0;
}

loc_inl67_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r1 + 8);
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x80450164u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r24 = 0;
    MemoryAlias::FlatWrite8((r29 + 29544), static_cast<uint8_t>(r24));
    r3 = (r29 + 29544);
    r4 = (r1 + 8);
    ctx->lr = 0x80450178u;
    if constexpr (KnownRegArgsCpuCall<0x8042DE60u>(&func_8042DE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042DE60_50490 = func_8042DE60_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DE60_50490);
        r4 = static_cast<uint32_t>(regargs_result_8042DE60_50490 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042DE60u>(ctx);
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
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x80450184u;
    if constexpr (KnownRegArgsCpuCall<0x803CCE5Cu>(&func_803CCE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803CCE5C_50E08 = func_803CCE5C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CCE5C_50E08);
        r4 = static_cast<uint32_t>(regargs_result_803CCE5C_50E08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803CCE5Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    ctx->lr = 0x80450188u;
    if constexpr (KnownRegArgsCpuCall<0x8042C4F0u>(&func_8042C4F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042C4F0_51884 = func_8042C4F0_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C4F0_51884);
        r4 = static_cast<uint32_t>(regargs_result_8042C4F0_51884 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C4F0u>(ctx);
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
    ctx->lr = 0x8045018Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042C9CC_5214A = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_5214A);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_5214A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
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
    r0 = 16;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r24);
    MemoryAlias::FlatWrite32((r3 + -32044), r24);
    goto loc_804512E4;
}

loc_804501AC:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x804501BCu;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_52BB1 = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_52BB1);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_52BB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x804501C8u;
    if constexpr (KnownRegArgsCpuCall<0x80451F4Cu>(&func_80451F4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80451F4C_5314B = func_80451F4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80451F4C_5314B);
        r4 = static_cast<uint32_t>(regargs_result_80451F4C_5314B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80451F4Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804501CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_804501D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804501E8;
    }
}

loc_804501D4:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_53C02 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_53C02);
        r4 = static_cast<uint32_t>(regargs_result_80453864_53C02 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_804501E8:
{
    r0 = 17;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r0);
    MemoryAlias::FlatWrite32((r3 + -32044), r0);
    goto loc_804512E4;
}

loc_8045020C:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x8045021Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_543BD = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_543BD);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_543BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = 3;
    ctx->lr = 0x80450228u;
    if constexpr (KnownRegArgsCpuCall<0x80451F4Cu>(&func_80451F4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80451F4C_54957 = func_80451F4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80451F4C_54957);
        r4 = static_cast<uint32_t>(regargs_result_80451F4C_54957 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80451F4Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r24 = r3;
}

loc_80450230:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450234:
{
    r3 = 0;
    // inline leaf 0x804537E4 (6 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead16((r3 + -26988));
    // end of inlined leaf 0x804537E4
    r0 = (r3 & 65535);
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15508), r0);
}

loc_8045024C:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(0))) {
        goto loc_80450264;
    }
}

loc_80450250:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_555F1 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_555F1);
        r4 = static_cast<uint32_t>(regargs_result_80453864_555F1 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_80450264:
{
    r0 = 18;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite32((r3 + -32048), r0);
    MemoryAlias::FlatWrite32((r3 + -32044), r0);
    goto loc_804512E4;
}

loc_80450284:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x80450294u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_55D93 = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_55D93);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_55D93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = 4;
    ctx->lr = 0x804502A0u;
    if constexpr (KnownRegArgsCpuCall<0x80451F4Cu>(&func_80451F4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80451F4C_5632D = func_80451F4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80451F4C_5632D);
        r4 = static_cast<uint32_t>(regargs_result_80451F4C_5632D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80451F4Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804502A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_804502A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804502C0;
    }
}

loc_804502AC:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_56DE4 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_56DE4);
        r4 = static_cast<uint32_t>(regargs_result_80453864_56DE4 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_804502C0:
{
    r24 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -24228), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl73_0x8041A4F4:
{
}

loc_inl73_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl73_0x8041A50C;
    }
}

loc_inl73_0x8041A4FC:
{
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_44 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl73_cont_8041A4F4;
}

loc_inl73_0x8041A50C:
{
    r3 = 0;
}

loc_inl73_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x804502E8u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 19;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r24);
    MemoryAlias::FlatWrite32((r3 + -32044), r24);
    goto loc_804512E4;
}

loc_80450308:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x80450318u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_57CA6 = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_57CA6);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_57CA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_80450328:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450340;
    }
}

loc_8045032C:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_58258 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_58258);
        r4 = static_cast<uint32_t>(regargs_result_80453864_58258 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_80450340:
{
    r24 = 0;
    MemoryAlias::FlatWrite32((r3 + -24156), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl76_0x8041A4F4:
{
}

loc_inl76_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl76_0x8041A50C;
    }
}

loc_inl76_0x8041A4FC:
{
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_46 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl76_cont_8041A4F4;
}

loc_inl76_0x8041A50C:
{
    r3 = 0;
}

loc_inl76_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    ctx->lr = 0x80450358u;
    if constexpr (KnownRegArgsCpuCall<0x803F1388u>(&func_803F1388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803F1388_58B9A = func_803F1388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F1388_58B9A);
        r4 = static_cast<uint32_t>(regargs_result_803F1388_58B9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803F1388u>(ctx);
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
    r0 = 20;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r24);
    MemoryAlias::FlatWrite32((r3 + -32044), r24);
    goto loc_804512E4;
}

loc_80450378:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x80450388u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_59601 = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_59601);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_59601 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_80450398:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804503B0;
    }
}

loc_8045039C:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_59BB3 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_59BB3);
        r4 = static_cast<uint32_t>(regargs_result_80453864_59BB3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_804503B0:
{
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 100), r24);
    ctx->lr = 0x804503BCu;
    if constexpr (KnownRegArgsCpuCall<0x8004AA70u>(&func_8004AA70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004AA70_5A144 = func_8004AA70_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AA70_5A144;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004AA70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_804503C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804503E8;
    }
}

loc_804503C4:
{
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -24180), r24);
    r3 = (r29 + 25036);
    ctx->lr = 0x804503D4u;
    if constexpr (KnownRegArgsCpuCall<0x8042C1C4u>(&func_8042C1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8042C1C4_5A500 = func_8042C1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8042C1C4_5A500);
        r4 = static_cast<uint32_t>(regargs_result_8042C1C4_5A500 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl79_0x8041A4F4:
{
}

loc_inl79_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl79_0x8041A50C;
    }
}

loc_inl79_0x8041A4FC:
{
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_48 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl79_cont_8041A4F4;
}

loc_inl79_0x8041A50C:
{
    r3 = 0;
}

loc_inl79_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r4 = (r29 + 25036);
    ctx->lr = 0x804503E8u;
    if constexpr (KnownRegArgsCpuCall<0x803F1148u>(&func_803F1148)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803F1148_5ACAF = func_803F1148_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F1148_5ACAF);
        r4 = static_cast<uint32_t>(regargs_result_803F1148_5ACAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803F1148u>(ctx);
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

loc_804503E8:
{
    r0 = 21;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -32048), r0);
    MemoryAlias::FlatWrite32((r3 + -32044), r0);
    goto loc_804512E4;
}

loc_80450408:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    ctx->lr = 0x80450418u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_5B6EE = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_5B6EE);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_5B6EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    ctx->lr = 0x8045041Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AA70u>(&func_8004AA70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004AA70_5BB39 = func_8004AA70_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AA70_5BB39;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004AA70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80450420:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045044C;
    }
}

loc_80450424:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_80450434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045044C;
    }
}

loc_80450438:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_5BFF6 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_5BFF6);
        r4 = static_cast<uint32_t>(regargs_result_80453864_5BFF6 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_8045044C:
{
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 25192), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl82_0x8041A5E4:
{
}

loc_inl82_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl82_0x8041A5FC;
    }
}

loc_inl82_0x8041A5EC:
{
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_51 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl82_cont_8041A5E4;
}

loc_inl82_0x8041A5FC:
{
    r3 = 0;
}

loc_inl82_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 40;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80450474u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 22;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 100), r24);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    r3 = r29;
    ctx->lr = 0x80450494u;
    if constexpr (KnownRegArgsCpuCall<0x8044E2ACu>(&func_8044E2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8044E2AC_5CDB6 = func_8044E2AC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E2AC_5CDB6);
        r4 = static_cast<uint32_t>(regargs_result_8044E2AC_5CDB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E2ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    MemoryAlias::FlatWrite16((r26 + 1182), static_cast<uint16_t>(r24));
    r3 = (r26 + 1548);
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x804504A8u;
    if constexpr (KnownRegArgsCpuCall<0x80452790u>(&func_80452790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80452790_5D35F = func_80452790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452790_5D35F);
        r4 = static_cast<uint32_t>(regargs_result_80452790_5D35F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80452790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804512E4;
}

loc_804504AC:
{
    ctx->lr = 0x804504B0u;
    if constexpr (KnownRegArgsCpuCall<0x802D9F08u>(&func_802D9F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D9F08_5D90A = func_802D9F08_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9F08_5D90A);
        r4 = static_cast<uint32_t>(regargs_result_802D9F08_5D90A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D9F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = 0;
    MemoryAlias::FlatWrite16((r26 + 6), static_cast<uint16_t>(r3));
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_804504C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804505A0;
    }
}

loc_804504C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804512E4;
    }
}

loc_804504C8:
{
}

loc_804504CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804504D4;
    }
}

loc_804504D0:
{
    goto loc_804512E4;
}

loc_804504D4:
{
    r0 = MemoryAlias::FlatRead8((r29 + 25));
}

loc_804504DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80450508;
    }
}

loc_804504E0:
{
    r3 = MemoryAlias::FlatRead16((r30 + 296));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 25192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804504F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_804504F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450508;
    }
}

loc_804504FC:
{
    r3 = r29;
    ctx->lr = 0x80450504u;
    if constexpr (KnownRegArgsCpuCall<0x8044E418u>(&func_8044E418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044E418_5E37F = func_8044E418_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E418_5E37F);
        r4 = static_cast<uint32_t>(regargs_result_8044E418_5E37F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E418u>(ctx);
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
    goto loc_804512E4;
}

loc_80450508:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl84_0x8041A5E4:
{
}

loc_inl84_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl84_0x8041A5FC;
    }
}

loc_inl84_0x8041A5EC:
{
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_53 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl84_cont_8041A5E4;
}

loc_inl84_0x8041A5FC:
{
    r3 = 0;
}

loc_inl84_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r0 = MemoryAlias::FlatRead32((r3 + 1344));
    r5 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r5 + -24256), r0);
    r0 = 8;
    MemoryAlias::FlatWrite32((r5 + -24260), r0);
    r3 = MemoryAlias::FlatRead32((r5 + -24256));
    r0 = MemoryAlias::FlatRead32((r5 + -24260));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryAlias::FlatWrite32((r5 + -24264), r0);
    r4 = MemoryAlias::FlatRead32((r5 + -24256));
    r3 = MemoryAlias::FlatRead32((r5 + -24260));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_80450550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80450560;
    }
}

loc_80450554:
{
    r3 = MemoryAlias::FlatRead32((r5 + -24264));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r5 + -24264), r0);
}

loc_80450560:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 15;
    r4 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r4 + -15220), r0);
    r3 = 0;
    MemoryAlias::FlatWrite32((r29 + 28), r3);
    MemoryAlias::FlatWrite32((r29 + 32), r3);
    MemoryAlias::FlatWrite16((r26 + 1540), static_cast<uint16_t>(r3));
    r0 = MemoryAlias::FlatRead32((r4 + -24264));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 1546), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite16((r26 + 1544), static_cast<uint16_t>(r3));
    r0 = 3;
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804505A0:
{
    r0 = MemoryAlias::FlatRead16((r26 + 1544));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r24 = (r24_rot_1 & -8);
    MemoryAlias::FlatWrite16((r26 + 1542), static_cast<uint16_t>(r3));
    r3 = (r29 + 65536);
    goto loc_804505D0;
}

loc_804505B4:
{
    r4 = MemoryAlias::FlatRead16((r26 + 1542));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite16((r26 + 1542), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 1542));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804505C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_804505DC;
    }
}

loc_804505CC:
{
    r24 = (r24 + 1);
}

loc_804505D0:
{
    r0 = MemoryAlias::FlatRead32((r3 + -24256));
}

loc_804505D8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_804505B4;
    }
}

loc_804505DC:
{
    r3 = (r26 + 1548);
    r0 = MemoryAlias::FlatRead16((r26 + 1544));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r5 = 8;
    ctx->lr = 0x804505F0u;
    if constexpr (KnownRegArgsCpuCall<0x80452790u>(&func_80452790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80452790_5FAF2 = func_80452790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452790_5FAF2);
        r4 = static_cast<uint32_t>(regargs_result_80452790_5FAF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80452790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead32((r4 + -15220));
}

loc_804505FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8045060C;
    }
}

loc_80450600:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite32((r4 + -15220), r0);
    goto loc_804512E4;
}

loc_8045060C:
{
    r0 = (r27 & 3);
}

loc_80450614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80450644;
    }
}

loc_80450618:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1540));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryAlias::FlatRead16((r26 + 1542));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = r27;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x80450630u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802A8F60_6043C = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_6043C);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_6043C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802A8F60u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryAlias::FlatWrite16((r26 + 1540), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 1540));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    goto loc_804512E4;
}

loc_80450644:
{
    r0 = (r27 & 12);
}

loc_8045064C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80450684;
    }
}

loc_80450650:
{
    r3 = MemoryAlias::FlatRead16((r26 + 1544));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryAlias::FlatRead16((r26 + 1546));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = r27;
    r6 = 4;
    r7 = 8;
    r8 = 6;
    r9 = (r26 + 6);
    ctx->lr = 0x80450670u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F50u>(&func_802A8F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802A8F50_61029 = func_802A8F50_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F50_61029);
        r4 = static_cast<uint32_t>(regargs_result_802A8F50_61029 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802A8F50u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryAlias::FlatWrite16((r26 + 1544), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r26 + 1544));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    goto loc_804512E4;
}

loc_80450684:
{
    r0 = (r28 & 32);
}

loc_8045068C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804506DC;
    }
}

loc_80450690:
{
    r0 = 12;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead32((r4 + -24288));
    MemoryAlias::FlatWrite32((r29 + 28), r0);
    r0 = MemoryAlias::FlatRead32((r4 + -24284));
    MemoryAlias::FlatWrite32((r29 + 32), r0);
    r0 = 2;
    MemoryAlias::FlatWrite8((r4 + -16048), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x804506CCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_61D40 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_61D40);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_61D40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r0 = 15;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15220), r0);
    goto loc_804512E4;
}

loc_804506DC:
{
    r0 = (r28 & 16);
}

loc_804506E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80450774;
    }
}

loc_804506E8:
{
    r3 = 0;
    ctx->lr = 0x804506F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_62738 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_62738);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_62738 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl86_0x8041A5E4:
{
}

loc_inl86_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl86_0x8041A5FC;
    }
}

loc_inl86_0x8041A5EC:
{
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_55 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl86_cont_8041A5E4;
}

loc_inl86_0x8041A5FC:
{
    r3 = 0;
}

loc_inl86_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r6 = (r3 + 1344);
    r5 = MemoryAlias::FlatRead32((r29 + 32));
    r4 = MemoryAlias::FlatRead32((r29 + 28));
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24260));
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    MemoryAlias::FlatWrite32((r3 + -24268), r0);
    r0 = MemoryAlias::FlatRead32((r3 + -24268));
    r0 = (r0 * 124);
    r25 = (r6 + r0);
    r3 = (r3 + -16188);
    r4 = (r25 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045FBD4_6341E = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6341E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 25176), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl88_0x8041A5E4:
{
}

loc_inl88_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl88_0x8041A5FC;
    }
}

loc_inl88_0x8041A5EC:
{
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_57 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl88_cont_8041A5E4;
}

loc_inl88_0x8041A5FC:
{
    r3 = 0;
}

loc_inl88_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = MemoryAlias::FlatRead32((r25 + 4));
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8045075Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 23;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    MemoryAlias::FlatWrite32((r29 + 32), r24);
}

loc_80450774:
{
    r3 = r29;
    ctx->lr = 0x8045077Cu;
    if constexpr (KnownRegArgsCpuCall<0x80425ADCu>(&func_80425ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80425ADC_64155 = func_80425ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80425ADC_64155);
        r4 = static_cast<uint32_t>(regargs_result_80425ADC_64155 >> 32);
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
    goto loc_804512E4;
}

loc_80450780:
{
    r0 = MemoryAlias::FlatRead32((r29 + 25176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_8045078C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804507A8;
    }
}

loc_80450790:
{
    r3 = r29;
    ctx->lr = 0x80450798u;
    if constexpr (KnownRegArgsCpuCall<0x8044E418u>(&func_8044E418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044E418_64806 = func_8044E418_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E418_64806);
        r4 = static_cast<uint32_t>(regargs_result_8044E418_64806 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E418u>(ctx);
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
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16188), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804507A8:
{
    ctx->lr = 0x804507ACu;
    if constexpr (KnownRegArgsCpuCall<0x8042C9CCu>(&func_8042C9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042C9CC_65168 = func_8042C9CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042C9CC_65168);
        r4 = static_cast<uint32_t>(regargs_result_8042C9CC_65168 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042C9CCu>(ctx);
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
    ctx->lr = 0x804507B0u;
    if constexpr (KnownRegArgsCpuCall<0x80427334u>(&func_80427334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80427334_65A2D = func_80427334_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427334_65A2D);
        r4 = static_cast<uint32_t>(regargs_result_80427334_65A2D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80427334u>(ctx);
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
    r0 = 25;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32056), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    // inline leaf 0x8044E3A8 (5 guest instruction(s))
    r0 = 0;
    r3 = MemoryAlias::FlatRead32((r13 + -16440));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + -15228), r0);
    // end of inlined leaf 0x8044E3A8
    goto loc_804512E4;
}

loc_804507E8:
{
    r0 = MemoryAlias::FlatRead32((r29 + 25176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804507F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_804507F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450804;
    }
}

loc_804507F8:
{
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_80450804:
{
    ctx->lr = 0x80450808u;
    if constexpr (KnownRegArgsCpuCall<0x80427334u>(&func_80427334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80427334_669D0 = func_80427334_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427334_669D0);
        r4 = static_cast<uint32_t>(regargs_result_80427334_669D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80427334u>(ctx);
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
    r0 = 25;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite16((r3 + -15520), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite16((r3 + -15518), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite32((r3 + -15516), r0);
    goto loc_804512E4;
}

loc_80450830:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -15376));
}

loc_8045083C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045085C;
    }
}

loc_80450840:
{
    r0 = 38;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8045085C:
{
    r0 = MemoryAlias::FlatRead8((r3 + -16596));
}

loc_80450864:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045087C;
    }
}

loc_80450868:
{
    r0 = 90;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8045087C:
{
    ctx->lr = 0x80450880u;
    if constexpr (KnownRegArgsCpuCall<0x80425C24u>(&func_80425C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80425C24_677F7 = func_80425C24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80425C24_677F7);
        r4 = static_cast<uint32_t>(regargs_result_80425C24_677F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80425C24u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r0 = MemoryAlias::FlatRead32((r29 + 100));
}

loc_80450888:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8045098C;
    }
}

loc_8045088C:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -32059));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80450898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804508B8;
    }
}

loc_8045089C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804508F8;
    }
}

loc_804508A0:
{
}

loc_804508A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804508B0;
    }
}

loc_804508A8:
{
    goto loc_804508F8;
}

loc_804508B0:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r0));
}

loc_804508B8:
{
    r3 = r29;
    ctx->lr = 0x804508C0u;
    if constexpr (KnownRegArgsCpuCall<0x804546B8u>(&func_804546B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804546B8_684FD = func_804546B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804546B8_684FD);
        r4 = static_cast<uint32_t>(regargs_result_804546B8_684FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804546B8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804508C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045098C;
    }
}

loc_804508C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804508DC;
    }
}

loc_804508CC:
{
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    goto loc_804508E8;
}

loc_804508DC:
{
    r0 = 1;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -32058), static_cast<uint8_t>(r0));
}

loc_804508E8:
{
    r0 = 2;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r0));
    goto loc_8045098C;
}

loc_804508F8:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -32057));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80450904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80450950;
    }
}

loc_80450908:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450970;
    }
}

loc_8045090C:
{
}

loc_80450910:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8045091C;
    }
}

loc_80450914:
{
    goto loc_80450970;
}

loc_8045091C:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + -16196), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite32((r29 + 25296), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl92_0x8041A5E4:
{
}

loc_inl92_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl92_0x8041A5FC;
    }
}

loc_inl92_0x8041A5EC:
{
    r0_rot_60 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_60 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl92_cont_8041A5E4;
}

loc_inl92_0x8041A5FC:
{
    r3 = 0;
}

loc_inl92_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 32;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 132));
    ctr = r12;
    ctx->lr = 0x80450950u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_80450950:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -16196));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80450960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045098C;
    }
}

loc_80450964:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r0));
    goto loc_8045098C;
}

loc_80450970:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -32060));
}

loc_8045097C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045098C;
    }
}

loc_80450980:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r0));
    ctx->lr = 0x8045098Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042A92Cu>(&func_8042A92C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042A92C_69F58 = func_8042A92C_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8042A92C_69F58;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042A92Cu>(ctx);
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

loc_8045098C:
{
    ctx->lr = 0x80450990u;
    if constexpr (KnownRegArgsCpuCall<0x804565D8u>(&func_804565D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804565D8_6A845 = func_804565D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804565D8_6A845);
        r4 = static_cast<uint32_t>(regargs_result_804565D8_6A845 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804565D8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    ctx->lr = 0x80450994u;
    if constexpr (KnownRegArgsCpuCall<0x80456324u>(&func_80456324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80456324_6B2A0 = func_80456324_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456324_6B2A0);
        r4 = static_cast<uint32_t>(regargs_result_80456324_6B2A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456324u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    goto loc_804512E4;
}

loc_80450998:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 20), static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl94_0x8041A358:
{
}

loc_inl94_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl94_0x8041A36C;
    }
}

loc_inl94_0x8041A360:
{
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_64 & -4);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_13);
    goto loc_inl94_cont_8041A358;
}

loc_inl94_0x8041A36C:
{
    r3 = 0;
}

loc_inl94_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x804509BCu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 13;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804509C8:
{
    r0 = MemoryAlias::FlatRead32((r29 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804509D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804512E4;
    }
}

loc_804509D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804509E4;
    }
}

loc_804509D8:
{
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_804512E4;
}

loc_804509E4:
{
    r0 = 7;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 20), static_cast<uint8_t>(r0));
    r3 = r29;
    ctx->lr = 0x80450A04u;
    if constexpr (KnownRegArgsCpuCall<0x8042462Cu>(&func_8042462C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042462C_6C97E = func_8042462C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042462C_6C97E);
        r4 = static_cast<uint32_t>(regargs_result_8042462C_6C97E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042462Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r0 = 15;
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r0));
    goto loc_804512E4;
}

loc_80450A10:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80450A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80450A7C;
    }
}

loc_80450A1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450A2C;
    }
}

loc_80450A20:
{
}

loc_80450A24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80450A38;
    }
}

loc_80450A28:
{
    goto loc_80450830;
}

loc_80450A2C:
{
}

loc_80450A30:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80450830;
    }
}

loc_80450A34:
{
    goto loc_80450AC8;
}

loc_80450A38:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450A44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80450830;
    }
}

loc_80450A48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450A60;
    }
}

loc_80450A4C:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_6D83A = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_6D83A);
        r4 = static_cast<uint32_t>(regargs_result_80453864_6D83A >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_80450830;
}

loc_80450A60:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r3 + -24204), r0);
    r3 = 0;
    ctx->lr = 0x80450A70u;
    if constexpr (KnownRegArgsCpuCall<0x8042CB3Cu>(&func_8042CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042CB3C_6DE97 = func_8042CB3C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042CB3C_6DE97);
        r4 = static_cast<uint32_t>(regargs_result_8042CB3C_6DE97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042CB3Cu>(ctx);
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
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_80450830;
}

loc_80450A7C:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80450A88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80450830;
    }
}

loc_80450A8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80450AA4;
    }
}

loc_80450A90:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80453864_6E885 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_6E885);
        r4 = static_cast<uint32_t>(regargs_result_80453864_6E885 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8044E3D0 (11 guest instruction(s))
    r5 = 1;
    r4 = (r3 + 65536);
    MemoryAlias::FlatWrite8((r4 + -16595), static_cast<uint8_t>(r5));
    r0 = 90;
    MemoryAlias::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8044E3D0
    goto loc_80450830;
}

loc_80450AA4:
{
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r3 = 31;
    ctx->lr = 0x80450AB4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBCE8_6EEF5 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_6EEF5);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_6EEF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
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
    ctx->lr = 0x80450AB8u;
    if constexpr (KnownRegArgsCpuCall<0x800E4AE0u>(&func_800E4AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_800E4AE0_6F70A = func_800E4AE0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4AE0_6F70A);
        r4 = static_cast<uint32_t>(regargs_result_800E4AE0_6F70A >> 32);
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
        InvokeDirectCpu<0x800E4AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 60;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite16((r3 + -15224), static_cast<uint16_t>(r0));
    goto loc_80450830;
}

loc_80450AC8:
{
    r4 = (r29 + 65536);
    r3 = MemoryAlias::FlatRead16((r4 + -15224));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80450AD4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80450AE4;
    }
}

loc_80450AD8:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r4 + -15224), static_cast<uint16_t>(r0));
    goto loc_80450830;
}

loc_80450AE4:
{
    // inline leaf 0x80338AE8 (20 guest instruction(s))
    r0 = 0;
    r4 = (r13 + -17040);
    guest_range_2 = MemoryAlias::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryAlias::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r0));
    r3 = (r13 + -17032);
    guest_range_3 = MemoryAlias::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryAlias::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    MemoryAlias::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80338AE8
    r0 = 32;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_80450830;
}

loc_80450AFC:
{
    r0 = MemoryAlias::FlatRead32((r29 + 76));
}

loc_80450B04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80450B44;
    }
}

loc_80450B08:
{
    r4 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite16((r3 + -15520), static_cast<uint16_t>(r4));
    MemoryAlias::FlatWrite16((r3 + -15518), static_cast<uint16_t>(r4));
    MemoryAlias::FlatWrite32((r3 + -15516), r4);
    r0 = 25;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r4));
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r4));
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r4));
    MemoryAlias::FlatWrite8((r3 + -32056), static_cast<uint8_t>(r4));
    ctx->lr = 0x80450B40u;
    if constexpr (KnownRegArgsCpuCall<0x80395CE8u>(&func_80395CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80395CE8_708A2 = func_80395CE8_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80395CE8_708A2);
        r4 = static_cast<uint32_t>(regargs_result_80395CE8_708A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80395CE8u>(ctx);
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
    goto loc_804512E4;
}

loc_80450B44:
{
    r0 = 7;
    MemoryAlias::FlatWrite8((r29 + 17), static_cast<uint8_t>(r0));
    r0 = 33;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450B60:
{
    r25 = (r29 + 31960);
    r24 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80450B70:
{
    r0 = MemoryAlias::FlatRead8(r25);
}

loc_80450B78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450B7C:
{
    r0 = MemoryAlias::FlatRead8((r25 + 92));
}

loc_80450B84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450B88:
{
    r0 = MemoryAlias::FlatRead8((r25 + 184));
}

loc_80450B90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450B94:
{
    r0 = MemoryAlias::FlatRead8((r25 + 276));
}

loc_80450B9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450BA0:
{
    r0 = MemoryAlias::FlatRead8((r25 + 368));
}

loc_80450BA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450BAC:
{
    r0 = MemoryAlias::FlatRead8((r25 + 460));
}

loc_80450BB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450BB8:
{
    r0 = MemoryAlias::FlatRead8((r25 + 552));
}

loc_80450BC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450BC4:
{
    r0 = MemoryAlias::FlatRead8((r25 + 644));
}

loc_80450BCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80450CD0;
    }
}

loc_80450BD0:
{
    r24 = (r24 + 7);
    r25 = (r25 + 736);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80450B70;
    }
}

loc_80450BDC:
{
    r25 = (r29 + 31960);
    r0 = 16;
    ctr = r0;
}

loc_80450BE8:
{
    r0 = MemoryAlias::FlatRead8(r25);
}

loc_80450BF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80450CC8;
    }
}

loc_80450BF4:
{
    r0 = MemoryAlias::FlatRead8((r25 + 2));
}

loc_80450BFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80450C08;
    }
}

loc_80450C00:
{
}

loc_80450C04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80450C3C;
    }
}

loc_80450C08:
{
    r3 = 18;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_71 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl101_0x8041A358:
{
}

loc_inl101_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl101_0x8041A36C;
    }
}

loc_inl101_0x8041A360:
{
    r0_rot_72 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_72 & -4);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_17);
    goto loc_inl101_cont_8041A358;
}

loc_inl101_0x8041A36C:
{
    r3 = 0;
}

loc_inl101_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (r25 + 4);
    r5 = MemoryAlias::FlatRead32((r25 + 76));
    r6 = -1;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x80450C38u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_80450CBC;
}

loc_80450C3C:
{
    r3 = (r25 + 80);
    ctx->lr = 0x80450C44u;
    if constexpr (KnownRegArgsCpuCall<0x8042BDD4u>(&func_8042BDD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8042BDD4_72568 = func_8042BDD4_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042BDD4_72568);
        r4 = static_cast<uint32_t>(regargs_result_8042BDD4_72568 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8042BDD4u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r24 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80450C50:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80450C88;
    }
}

loc_80450C54:
{
    r3 = 18;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_66 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl104_0x8041A358:
{
}

loc_inl104_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl104_0x8041A36C;
    }
}

loc_inl104_0x8041A360:
{
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_67 & -4);
    r3_addr_15 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_15);
    goto loc_inl104_cont_8041A358;
}

loc_inl104_0x8041A36C:
{
    r3 = 0;
}

loc_inl104_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (r25 + 4);
    r5 = MemoryAlias::FlatRead32((r25 + 76));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r24)));
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x80450C84u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_80450CBC;
}

loc_80450C88:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 25216), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl106_0x8041A5E4:
{
}

loc_inl106_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl106_0x8041A5FC;
    }
}

loc_inl106_0x8041A5EC:
{
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_69 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl106_cont_8041A5E4;
}

loc_inl106_0x8041A5FC:
{
    r3 = 0;
}

loc_inl106_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = (r25 + 4);
    r5 = MemoryAlias::FlatRead32((r25 + 76));
    r6 = 1;
    r7 = MemoryAlias::FlatRead8((r25 + 3));
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80450CBCu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_80450CBC:
{
    r0 = 2;
    MemoryAlias::FlatWrite8(r25, static_cast<uint8_t>(r0));
    goto loc_80450CD0;
}

loc_80450CC8:
{
    r25 = (r25 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80450BE8;
    }
}

loc_80450CD0:
{
    ctx->lr = 0x80450CD4u;
    if constexpr (KnownRegArgsCpuCall<0x804565D8u>(&func_804565D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804565D8_742B8 = func_804565D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804565D8_742B8);
        r4 = static_cast<uint32_t>(regargs_result_804565D8_742B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804565D8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    ctx->lr = 0x80450CD8u;
    if constexpr (KnownRegArgsCpuCall<0x80456324u>(&func_80456324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80456324_74D13 = func_80456324_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456324_74D13);
        r4 = static_cast<uint32_t>(regargs_result_80456324_74D13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456324u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    goto loc_804512E4;
}

loc_80450CDC:
{
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450CF4:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
}

loc_80450CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80450D0C;
    }
}

loc_80450D00:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450D0C:
{
    r0 = (r28 & 16);
}

loc_80450D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450D18:
{
    r3 = 0;
    ctx->lr = 0x80450D20u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_75A74 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_75A74);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_75A74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r24 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 25228), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl108_0x8041A5E4:
{
}

loc_inl108_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl108_0x8041A5FC;
    }
}

loc_inl108_0x8041A5EC:
{
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_76 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl108_cont_8041A5E4;
}

loc_inl108_0x8041A5FC:
{
    r3 = 0;
}

loc_inl108_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 80;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80450D50u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 11;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15376), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_80450D74:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
}

loc_80450D7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80450D8C;
    }
}

loc_80450D80:
{
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450D8C:
{
    r0 = (r28 & 16);
}

loc_80450D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450D98:
{
    r3 = 0;
    ctx->lr = 0x80450DA0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800DBC94_76E87 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_76E87);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_76E87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    r24 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r24));
    r0 = 22;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r0 = 1;
    MemoryAlias::FlatWrite8((r29 + 25), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite32((r29 + 100), r24);
    r3 = r29;
    ctx->lr = 0x80450DCCu;
    if constexpr (KnownRegArgsCpuCall<0x8044E2ACu>(&func_8044E2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8044E2AC_7781D = func_8044E2AC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E2AC_7781D);
        r4 = static_cast<uint32_t>(regargs_result_8044E2AC_7781D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E2ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = 3;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r3 + -24256), r24);
    MemoryAlias::FlatWrite32((r3 + -24260), r24);
    MemoryAlias::FlatWrite32((r3 + -24264), r24);
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    MemoryAlias::FlatWrite32((r29 + 32), r24);
    MemoryAlias::FlatWrite16((r26 + 1540), static_cast<uint16_t>(r24));
    r0 = MemoryAlias::FlatRead32((r3 + -24264));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::FlatWrite16((r26 + 1546), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWrite16((r26 + 1544), static_cast<uint16_t>(r24));
    r0 = 4;
    MemoryAlias::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r3 = (r26 + 1548);
    r0 = MemoryAlias::FlatRead16((r26 + 1544));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r5 = 8;
    ctx->lr = 0x80450E28u;
    if constexpr (KnownRegArgsCpuCall<0x80452790u>(&func_80452790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80452790_78232 = func_80452790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452790_78232);
        r4 = static_cast<uint32_t>(regargs_result_80452790_78232 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80452790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804512E4;
}

loc_80450E2C:
{
    r3 = r29;
    r4 = (r29 + 65536);
    r12 = MemoryAlias::FlatRead32((r4 + -15780));
    ctr = r12;
    ctx->lr = 0x80450E40u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r4 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r4 + -16592), r3);
    ctx->lr = 0x80450E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8044DC1Cu>(&func_8044DC1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044DC1C_78D25 = func_8044DC1C_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044DC1C_78D25);
        r4 = static_cast<uint32_t>(regargs_result_8044DC1C_78D25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044DC1Cu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r0 = 2;
    MemoryAlias::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    r24 = 0;
    MemoryAlias::FlatWrite32((r29 + 25228), r24);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl110_0x8041A5E4:
{
}

loc_inl110_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl110_0x8041A5FC;
    }
}

loc_inl110_0x8041A5EC:
{
    r0_rot_78 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_78 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl110_cont_8041A5E4;
}

loc_inl110_0x8041A5FC:
{
    r3 = 0;
}

loc_inl110_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = 80;
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80450E7Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = 11;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite16((r30 + 296), static_cast<uint16_t>(r24));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryAlias::FlatWrite32((r29 + 28), r24);
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15376), static_cast<uint8_t>(r24));
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + -15374), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r3 + -16048), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450EA8:
{
    r4 = MemoryAlias::FlatRead8((r29 + 24));
}

loc_80450EB0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(12))) {
        goto loc_804512E4;
    }
}

loc_80450EB4:
{
    r3 = 0x80610000u;
    r3 = (r3 + -4904);
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_80 & -4);
    r3_addr_21 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_21);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80450ECCu:
        goto loc_80450ECC;
        break;
    case 0x80450F28u:
        goto loc_80450F28;
        break;
    case 0x80450F6Cu:
        goto loc_80450F6C;
        break;
    case 0x80450FB0u:
        goto loc_80450FB0;
        break;
    case 0x80450FD0u:
        goto loc_80450FD0;
        break;
    case 0x8045101Cu:
        goto loc_8045101C;
        break;
    case 0x80451088u:
        goto loc_80451088;
        break;
    case 0x804510F4u:
        goto loc_804510F4;
        break;
    case 0x80451124u:
        goto loc_80451124;
        break;
    case 0x80451130u:
        goto loc_80451130;
        break;
    case 0x80451150u:
        goto loc_80451150;
        break;
    case 0x80451168u:
        goto loc_80451168;
        break;
    case 0x80451174u:
        goto loc_80451174;
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
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80450ECC:
{
    r3 = 0;
    ctx->lr = 0x80450ED4u;
    if constexpr (KnownRegArgsCpuCall<0x80456268u>(&func_80456268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456268_7A947 = func_80456268_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456268_7A947);
        r4 = static_cast<uint32_t>(regargs_result_80456268_7A947 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456268u>(ctx);
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
    ctx->lr = 0x80450ED8u;
    if constexpr (KnownRegArgsCpuCall<0x804513B0u>(&func_804513B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804513B0_7AEC1 = func_804513B0_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804513B0_7AEC1);
        r4 = static_cast<uint32_t>(regargs_result_804513B0_7AEC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804513B0u>(ctx);
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

loc_80450EDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80450F1C;
    }
}

loc_80450EE0:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 152), r0);
    r3 = 32;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_81 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_81 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl113_0x8041A358:
{
}

loc_inl113_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl113_0x8041A36C;
    }
}

loc_inl113_0x8041A360:
{
    r0_rot_82 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_82 & -4);
    r3_addr_22 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_22);
    goto loc_inl113_cont_8041A358;
}

loc_inl113_0x8041A36C:
{
    r3 = 0;
}

loc_inl113_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 208));
    ctr = r12;
    ctx->lr = 0x80450F0Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450F1C:
{
    r0 = 4;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450F28:
{
    r3 = 32;
    // inline leaf 0x8042A1BC (5 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_84 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_84 & -4);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 120));
    // end of inlined leaf 0x8042A1BC
}

loc_80450F34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450F38:
{
    r3 = 16;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_85 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl117_0x8041A358:
{
}

loc_inl117_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl117_0x8041A36C;
    }
}

loc_inl117_0x8041A360:
{
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_86 & -4);
    r3_addr_24 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_24);
    goto loc_inl117_cont_8041A358;
}

loc_inl117_0x8041A36C:
{
    r3 = 0;
}

loc_inl117_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 172));
    ctr = r12;
    ctx->lr = 0x80450F5Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450F6C:
{
    r3 = 16;
    // inline leaf 0x8042A1BC (5 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_88 & -4);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 120));
    // end of inlined leaf 0x8042A1BC
}

loc_80450F78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450F7C:
{
    r3 = 8;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_89 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_89 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl121_0x8041A358:
{
}

loc_inl121_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl121_0x8041A36C;
    }
}

loc_inl121_0x8041A360:
{
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_90 & -4);
    r3_addr_26 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_26);
    goto loc_inl121_cont_8041A358;
}

loc_inl121_0x8041A36C:
{
    r3 = 0;
}

loc_inl121_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80450FA0u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450FB0:
{
    r3 = 8;
    // inline leaf 0x8042A1BC (5 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_92 & -4);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 120));
    // end of inlined leaf 0x8042A1BC
}

loc_80450FBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80450FC0:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80450FD0:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl124_0x8041A4F4:
{
}

loc_inl124_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl124_0x8041A50C;
    }
}

loc_inl124_0x8041A4FC:
{
    r0_rot_93 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_93 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl124_cont_8041A4F4;
}

loc_inl124_0x8041A50C:
{
    r3 = 0;
}

loc_inl124_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
}

loc_80450FE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045100C;
    }
}

loc_80450FE4:
{
    r0 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite32((r3 + -24244), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl126_0x8041A4F4:
{
}

loc_inl126_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl126_0x8041A50C;
    }
}

loc_inl126_0x8041A4FC:
{
    r0_rot_95 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_95 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl126_cont_8041A4F4;
}

loc_inl126_0x8041A50C:
{
    r3 = 0;
}

loc_inl126_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8045100Cu;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8045100C:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_8045101C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl128_0x8041A4F4:
{
}

loc_inl128_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl128_0x8041A50C;
    }
}

loc_inl128_0x8041A4FC:
{
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_98 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl128_cont_8041A4F4;
}

loc_inl128_0x8041A50C:
{
    r3 = 0;
}

loc_inl128_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
}

loc_8045102C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451040;
    }
}

loc_80451030:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + -24244));
}

loc_8045103C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80451040:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl130_0x8041A358:
{
}

loc_inl130_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl130_0x8041A36C;
    }
}

loc_inl130_0x8041A360:
{
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_100 & -4);
    r3_addr_28 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_28);
    goto loc_inl130_cont_8041A358;
}

loc_inl130_0x8041A36C:
{
    r3 = 0;
}

loc_inl130_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_80451050:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451078;
    }
}

loc_80451054:
{
    r3 = 2;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_102 & -4);
    r3 = (r4 + r0);
    MemoryAlias::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl133_0x8041A358:
{
}

loc_inl133_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl133_0x8041A36C;
    }
}

loc_inl133_0x8041A360:
{
    r0_rot_103 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_103 & -4);
    r3_addr_30 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_30);
    goto loc_inl133_cont_8041A358;
}

loc_inl133_0x8041A36C:
{
    r3 = 0;
}

loc_inl133_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80451078u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_80451078:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451088:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl135_0x8041A358:
{
}

loc_inl135_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl135_0x8041A36C;
    }
}

loc_inl135_0x8041A360:
{
    r0_rot_106 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_106 & -4);
    r3_addr_33 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_33);
    goto loc_inl135_cont_8041A358;
}

loc_inl135_0x8041A36C:
{
    r3 = 0;
}

loc_inl135_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_80451098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804510AC;
    }
}

loc_8045109C:
{
    r3 = 2;
    // inline leaf 0x8042A1BC (5 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r13 + -16440));
    r0_rot_108 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_108 & -4);
    r3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 120));
    // end of inlined leaf 0x8042A1BC
}

loc_804510A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_804510AC:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl138_0x8041A5E4:
{
}

loc_inl138_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl138_0x8041A5FC;
    }
}

loc_inl138_0x8041A5EC:
{
    r0_rot_110 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_110 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl138_cont_8041A5E4;
}

loc_inl138_0x8041A5FC:
{
    r3 = 0;
}

loc_inl138_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
}

loc_804510BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804510E4;
    }
}

loc_804510C0:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 25164), r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl140_0x8041A5E4:
{
}

loc_inl140_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl140_0x8041A5FC;
    }
}

loc_inl140_0x8041A5EC:
{
    r0_rot_112 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_112 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl140_cont_8041A5E4;
}

loc_inl140_0x8041A5FC:
{
    r3 = 0;
}

loc_inl140_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x804510E4u;
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_804510E4:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804510F4:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl142_0x8041A5E4:
{
}

loc_inl142_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl142_0x8041A5FC;
    }
}

loc_inl142_0x8041A5EC:
{
    r0_rot_115 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_115 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl142_cont_8041A5E4;
}

loc_inl142_0x8041A5FC:
{
    r3 = 0;
}

loc_inl142_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
}

loc_80451104:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451114;
    }
}

loc_80451108:
{
    r0 = MemoryAlias::FlatRead32((r29 + 25164));
}

loc_80451110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_80451114:
{
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451124:
{
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451130:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r29 + 372), r0);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    // inline leaf 0x804144E4 (5 guest instruction(s))
    r0 = 1;
    MemoryAlias::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x804144E4
    r3 = MemoryAlias::FlatRead8((r29 + 24));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451150:
{
    r0 = MemoryAlias::FlatRead32((r29 + 372));
}

loc_80451158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804512E4;
    }
}

loc_8045115C:
{
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451168:
{
    r0 = (r4 + 1);
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_80451174:
{
    // inline leaf 0x800D2978 (5 guest instruction(s))
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2648), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800D2978
    r24 = 0;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -15207), static_cast<uint8_t>(r24));
    r0 = MemoryAlias::FlatRead8((r3 + -16594));
}

loc_8045118C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804511A8;
    }
}

loc_80451190:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x80451198u;
    if constexpr (KnownRegArgsCpuCall<0x80416D24u>(&func_80416D24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80416D24_81321 = func_80416D24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80416D24_81321);
        r4 = static_cast<uint32_t>(regargs_result_80416D24_81321 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80416D24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = 101;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_804511A8:
{
    r0 = MemoryAlias::FlatRead8((r3 + -16595));
}

loc_804511B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804511D8;
    }
}

loc_804511B4:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x804511BCu;
    if constexpr (KnownRegArgsCpuCall<0x80416D24u>(&func_80416D24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80416D24_818A2 = func_80416D24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80416D24_818A2);
        r4 = static_cast<uint32_t>(regargs_result_80416D24_818A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80416D24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = 100;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    r0 = 2;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16595), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804511D8:
{
    r0 = 98;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_804511E8:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl149_0x8041A4F4:
{
}

loc_inl149_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl149_0x8041A50C;
    }
}

loc_inl149_0x8041A4FC:
{
    r0_rot_117 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_117 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    goto loc_inl149_cont_8041A4F4;
}

loc_inl149_0x8041A50C:
{
    r3 = 0;
}

loc_inl149_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
}

loc_804511F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451208;
    }
}

loc_804511FC:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    ctx->lr = 0x80451208u;
    if constexpr (KnownRegArgsCpuCall<0x8041A448u>(&func_8041A448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8041A448_822EC = func_8041A448_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041A448_822EC);
        r4 = static_cast<uint32_t>(regargs_result_8041A448_822EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8041A448u>(ctx);
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

loc_80451208:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl152_0x8041A358:
{
}

loc_inl152_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl152_0x8041A36C;
    }
}

loc_inl152_0x8041A360:
{
    r0_rot_119 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_119 & -4);
    r3_addr_35 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_35);
    goto loc_inl152_cont_8041A358;
}

loc_inl152_0x8041A36C:
{
    r3 = 0;
}

loc_inl152_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_80451218:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451228;
    }
}

loc_8045121C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    ctx->lr = 0x80451228u;
    if constexpr (KnownRegArgsCpuCall<0x8041A2B0u>(&func_8041A2B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8041A2B0_82FFE = func_8041A2B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041A2B0_82FFE);
        r4 = static_cast<uint32_t>(regargs_result_8041A2B0_82FFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8041A2B0u>(ctx);
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

loc_80451228:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl155_0x8041A5E4:
{
}

loc_inl155_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl155_0x8041A5FC;
    }
}

loc_inl155_0x8041A5EC:
{
    r0_rot_121 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_121 & -4);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    goto loc_inl155_cont_8041A5E4;
}

loc_inl155_0x8041A5FC:
{
    r3 = 0;
}

loc_inl155_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
}

loc_80451238:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80451248;
    }
}

loc_8045123C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    ctx->lr = 0x80451248u;
    if constexpr (KnownRegArgsCpuCall<0x8041A538u>(&func_8041A538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8041A538_83D07 = func_8041A538_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041A538_83D07);
        r4 = static_cast<uint32_t>(regargs_result_8041A538_83D07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8041A538u>(ctx);
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

loc_80451248:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    ctx->lr = 0x80451250u;
    if constexpr (KnownRegArgsCpuCall<0x804144F8u>(&func_804144F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804144F8_84676 = func_804144F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804144F8_84676);
        r4 = static_cast<uint32_t>(regargs_result_804144F8_84676 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804144F8u>(ctx);
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
    r3 = MemoryAlias::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    ctx->lr = 0x80451258u;
    if constexpr (KnownRegArgsCpuCall<0x8041A0C0u>(&func_8041A0C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8041A0C0_84FCE = func_8041A0C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041A0C0_84FCE);
        r4 = static_cast<uint32_t>(regargs_result_8041A0C0_84FCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8041A0C0u>(ctx);
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
    ctx->lr = 0x8045125Cu;
    if constexpr (KnownRegArgsCpuCall<0x8044E1B8u>(&func_8044E1B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044E1B8_858EA = func_8044E1B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E1B8_858EA);
        r4 = static_cast<uint32_t>(regargs_result_8044E1B8_858EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8044E1B8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    r24 = 0;
    MemoryAlias::FlatWrite32(r29, r24);
    r0 = 2;
    r3 = (r29 + 65536);
    MemoryAlias::FlatWrite8((r3 + -16596), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryAlias::FlatWriteRam8((r3 + 2155), static_cast<uint8_t>(r24));
    // inline leaf 0x8044D610 (1 guest instruction(s))
    // end of inlined leaf 0x8044D610
    r0 = 99;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    goto loc_804512E4;
}

loc_80451290:
{
    goto loc_804512E4;
}

loc_80451294:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryAlias::FlatRead8((r3 + 176));
}

loc_804512A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804512B0;
    }
}

loc_804512A8:
{
}

loc_804512AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804512E4;
    }
}

loc_804512B0:
{
    r0 = 98;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    goto loc_804512E4;
}

loc_804512C4:
{
    r3 = (r29 + 65536);
    r0 = MemoryAlias::FlatRead8((r3 + -16594));
}

loc_804512D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_804512E4;
    }
}

loc_804512D4:
{
    r0 = 98;
    MemoryAlias::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
}

loc_804512E4:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_4 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8044E4FC func_8044E4FC preserves=true fpr_mask=0x00000000
