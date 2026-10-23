#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8012A2B8(CpuContext* ctx);
extern "C" uint64_t func_8012A2B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80130198(CpuContext* ctx);
extern "C" uint64_t func_80130198_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80130E5C(CpuContext* ctx);
extern "C" uint64_t func_80130E5C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801381E0(CpuContext* ctx);
extern "C" uint64_t func_801381E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013A964(CpuContext* ctx);
extern "C" uint64_t func_8013A964_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013AB30(CpuContext* ctx);
extern "C" uint32_t func_8013AB30_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013ABD0(CpuContext* ctx);
extern "C" uint64_t func_8013ABD0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013AC64(CpuContext* ctx);
extern "C" uint32_t func_8013AC64_ra40_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8013AC6C(CpuContext* ctx);
extern "C" uint32_t func_8013AC6C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013C2B8(CpuContext* ctx);
extern "C" uint32_t func_8013C2B8_ra8_8_8_0(CpuContext*, uint32_t, double);
extern "C" void func_8013C5E0(CpuContext* ctx);
extern "C" uint64_t func_8013C5E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013C7F8(CpuContext* ctx);
extern "C" uint64_t func_8013C7F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013C844(CpuContext* ctx);
extern "C" uint64_t func_8013C844_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8013C9EC(CpuContext* ctx);
extern "C" uint64_t func_8013C9EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CB04(CpuContext* ctx);
extern "C" uint64_t func_8013CB04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CC48(CpuContext* ctx);
extern "C" uint64_t func_8013CC48_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CC70(CpuContext* ctx);
extern "C" uint64_t func_8013CC70_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CC98(CpuContext* ctx);
extern "C" uint64_t func_8013CC98_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CCC0(CpuContext* ctx);
extern "C" uint64_t func_8013CCC0_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CCE8(CpuContext* ctx);
extern "C" uint64_t func_8013CCE8_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CD0C(CpuContext* ctx);
extern "C" uint64_t func_8013CD0C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CD34(CpuContext* ctx);
extern "C" uint64_t func_8013CD34_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CE18(CpuContext* ctx);
extern "C" uint64_t func_8013CE18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CF14(CpuContext* ctx);
extern "C" uint64_t func_8013CF14_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013CFD0(CpuContext* ctx);
extern "C" uint64_t func_8013CFD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D0B8(CpuContext* ctx);
extern "C" uint64_t func_8013D0B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D234(CpuContext* ctx);
extern "C" uint64_t func_8013D234_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013D244(CpuContext* ctx);
extern "C" uint64_t func_8013D244_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D32C(CpuContext* ctx);
extern "C" uint64_t func_8013D32C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D350(CpuContext* ctx);
extern "C" uint64_t func_8013D350_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D374(CpuContext* ctx);
extern "C" uint64_t func_8013D374_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D3B0(CpuContext* ctx);
extern "C" uint64_t func_8013D3B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D480(CpuContext* ctx);
extern "C" uint64_t func_8013D480_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013D4C0(CpuContext* ctx);
extern "C" uint64_t func_8013D4C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D528(CpuContext* ctx);
extern "C" uint64_t func_8013D528_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D5EC(CpuContext* ctx);
extern "C" uint64_t func_8013D5EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D6F8(CpuContext* ctx);
extern "C" uint64_t func_8013D6F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D7B4(CpuContext* ctx);
extern "C" uint64_t func_8013D7B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013D870(CpuContext* ctx);
extern "C" uint64_t func_8013D870_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D92C(CpuContext* ctx);
extern "C" uint64_t func_8013D92C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013D9F4(CpuContext* ctx);
extern "C" uint64_t func_8013D9F4_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DA1C(CpuContext* ctx);
extern "C" uint64_t func_8013DA1C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DAE0(CpuContext* ctx);
extern "C" uint64_t func_8013DAE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DBD4(CpuContext* ctx);
extern "C" uint64_t func_8013DBD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DCBC(CpuContext* ctx);
extern "C" uint64_t func_8013DCBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DDAC(CpuContext* ctx);
extern "C" uint64_t func_8013DDAC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DE6C(CpuContext* ctx);
extern "C" uint64_t func_8013DE6C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DE94(CpuContext* ctx);
extern "C" uint64_t func_8013DE94_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DEBC(CpuContext* ctx);
extern "C" uint64_t func_8013DEBC_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013DEE4(CpuContext* ctx);
extern "C" uint64_t func_8013DEE4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013DF60(CpuContext* ctx);
extern "C" uint64_t func_8013DF60_ra58_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8013DFDC(CpuContext* ctx);
extern "C" uint64_t func_8013DFDC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E0CC(CpuContext* ctx);
extern "C" uint64_t func_8013E0CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8013E0D0(CpuContext* ctx);
extern "C" uint64_t func_8013E0D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E1E4(CpuContext* ctx);
extern "C" uint64_t func_8013E1E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E314(CpuContext* ctx);
extern "C" uint64_t func_8013E314_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E3EC(CpuContext* ctx);
extern "C" uint64_t func_8013E3EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E4C8(CpuContext* ctx);
extern "C" uint64_t func_8013E4C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E58C(CpuContext* ctx);
extern "C" uint64_t func_8013E58C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E764(CpuContext* ctx);
extern "C" uint64_t func_8013E764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E824(CpuContext* ctx);
extern "C" uint64_t func_8013E824_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013E964(CpuContext* ctx);
extern "C" uint64_t func_8013E964_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EA38(CpuContext* ctx);
extern "C" uint64_t func_8013EA38_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EA60(CpuContext* ctx);
extern "C" uint64_t func_8013EA60_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EB48(CpuContext* ctx);
extern "C" uint64_t func_8013EB48_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EC04(CpuContext* ctx);
extern "C" uint64_t func_8013EC04_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EC2C(CpuContext* ctx);
extern "C" uint64_t func_8013EC2C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013ED08(CpuContext* ctx);
extern "C" uint64_t func_8013ED08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EDCC(CpuContext* ctx);
extern "C" uint64_t func_8013EDCC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EE90(CpuContext* ctx);
extern "C" uint64_t func_8013EE90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EF78(CpuContext* ctx);
extern "C" uint64_t func_8013EF78_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EFA0(CpuContext* ctx);
extern "C" uint64_t func_8013EFA0_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EFC8(CpuContext* ctx);
extern "C" uint64_t func_8013EFC8_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013EFF0(CpuContext* ctx);
extern "C" uint64_t func_8013EFF0_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013F038(CpuContext* ctx);
extern "C" uint64_t func_8013F038_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013F61C(CpuContext* ctx);
extern "C" uint64_t func_8013F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013F7C8(CpuContext* ctx);
extern "C" uint64_t func_8013F7C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013F93C(CpuContext* ctx);
extern "C" uint64_t func_8013F93C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013F9F8(CpuContext* ctx);
extern "C" void func_8013F9F8_ra28_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013FA3C(CpuContext* ctx);
extern "C" uint64_t func_8013FA3C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FB00(CpuContext* ctx);
extern "C" uint64_t func_8013FB00_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FB6C(CpuContext* ctx);
extern "C" uint64_t func_8013FB6C_ra98_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FC00(CpuContext* ctx);
extern "C" uint64_t func_8013FC00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FCC4(CpuContext* ctx);
extern "C" uint64_t func_8013FCC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FD8C(CpuContext* ctx);
extern "C" uint64_t func_8013FD8C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FDB4(CpuContext* ctx);
extern "C" uint64_t func_8013FDB4_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FDD8(CpuContext* ctx);
extern "C" uint64_t func_8013FDD8_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FDFC(CpuContext* ctx);
extern "C" uint64_t func_8013FDFC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FF6C(CpuContext* ctx);
extern "C" uint64_t func_8013FF6C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FF9C(CpuContext* ctx);
extern "C" uint64_t func_8013FF9C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013FFC0(CpuContext* ctx);
extern "C" uint64_t func_8013FFC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140080(CpuContext* ctx);
extern "C" uint64_t func_80140080_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140120(CpuContext* ctx);
extern "C" uint64_t func_80140120_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801401DC(CpuContext* ctx);
extern "C" uint64_t func_801401DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801402A8(CpuContext* ctx);
extern "C" uint64_t func_801402A8_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801402D0(CpuContext* ctx);
extern "C" uint64_t func_801402D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801402FC(CpuContext* ctx);
extern "C" uint64_t func_801402FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801403B8(CpuContext* ctx);
extern "C" uint64_t func_801403B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8014051C(CpuContext* ctx);
extern "C" uint64_t func_8014051C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801405E4(CpuContext* ctx);
extern "C" uint64_t func_801405E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801406AC(CpuContext* ctx);
extern "C" uint64_t func_801406AC_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801406D4(CpuContext* ctx);
extern "C" uint64_t func_801406D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801407CC(CpuContext* ctx);
extern "C" uint64_t func_801407CC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80140918(CpuContext* ctx);
extern "C" uint64_t func_80140918_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80140A2C(CpuContext* ctx);
extern "C" uint64_t func_80140A2C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80140B5C(CpuContext* ctx);
extern "C" uint64_t func_80140B5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AB9F8(CpuContext* ctx);
extern "C" uint64_t func_802AB9F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802ABC0C(CpuContext* ctx);
extern "C" uint64_t func_802ABC0C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8013AD28_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8013BE0C_loc_0 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8013AD28;

loc_8013AD28:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 144);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r18 = r3;
    r31 = 0;
    r30 = 0;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r23 = 0;
    r22 = 0;
    r21 = 0;
    r20 = 0;
    r19 = 0;
    r0 = MemoryInline::FlatRead32((r18 + 2392));
}

loc_8013AD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AD80;
    }
}

loc_8013AD78:
{
    r3 = 0;
    goto loc_8013BE08;
}

loc_8013AD80:
{
    r3 = MemoryInline::FlatRead8((r18 + 2399));
}

loc_8013AD88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013AD9C;
    }
}

loc_8013AD8C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r18 + 2399), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8013BE08;
}

loc_8013AD9C:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x8013A964u>(&func_8013A964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013A964_6ABD = func_8013A964_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013A964_6ABD);
        r4 = static_cast<uint32_t>(regargs_result_8013A964_6ABD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A964u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8013ADAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8013ADE8;
    }
}

loc_8013ADB0:
{
    r3 = r18;
    r4 = 12;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl2_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl2_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8013A8FC;
    }
}

loc_inl2_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl2_cont_8013A8E8;
}

loc_inl2_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013ADC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013ADE8;
    }
}

loc_8013ADC4:
{
    r3 = r18;
    r4 = 0;
    ctx->lr = 0x8013ADD0u;
    if constexpr (KnownRegArgsCpuCall<0x80130198u>(&func_80130198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80130198_7270 = func_80130198_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80130198_7270);
        r4 = static_cast<uint32_t>(regargs_result_80130198_7270 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130198u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8013ADD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013ADE8;
    }
}

loc_8013ADD8:
{
    r3 = r18;
    r4 = 12;
    r5 = 0;
    ctx->lr = 0x8013ADE8u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_764F = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_764F);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_764F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8013ADE8:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl3_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF40;
    }
}

loc_inl3_0x800CEF3C:
{
    r0 = 1;
}

loc_inl3_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl3_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r18 + 1946));
}

loc_8013ADFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AECC;
    }
}

loc_8013AE00:
{
    r28 = MemoryInline::FlatRead8((r18 + 896));
    r27 = MemoryInline::FlatRead8((r18 + 897));
    r26 = MemoryInline::FlatRead8((r18 + 898));
    r25 = MemoryInline::FlatRead8((r18 + 899));
    f31.d = MemoryInline::FlatReadFloat32((r18 + 900));
    r24 = MemoryInline::FlatRead32((r18 + 1060));
    r3 = (r1 + 8);
    r4 = (r18 + 876);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r18 + 2396));
    r0 = (r3 + -3);
}

loc_8013AE30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8013AE40;
    }
}

loc_8013AE34:
{
}

loc_8013AE38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_8013AE78;
    }
}

loc_8013AE3C:
{
    goto loc_8013AE8C;
}

loc_8013AE40:
{
    r6 = MemoryInline::FlatRead8((r18 + 1944));
}

loc_8013AE48:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(255))) {
        goto loc_8013AE60;
    }
}

loc_8013AE4C:
{
    r3 = r18;
    r4 = 1;
    r5 = 2;
    ctx->lr = 0x8013AE5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_83C0 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_83C0);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_83C0 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013AE8C;
}

loc_8013AE60:
{
    r3 = r18;
    r4 = 4;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8013AE74u;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_8C27 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_8C27);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_8C27 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013AE8C;
}

loc_8013AE78:
{
    r3 = r18;
    r4 = 4;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8013AE8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_948E = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_948E);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_948E >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
}

loc_8013AE8C:
{
    r19 = MemoryInline::FlatRead8((r18 + 2472));
    r14 = 0;
    goto loc_8013AEB8;
}

loc_8013AE98:
{
    r0 = (r14 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r1 + 24);
    r3 = (r3 + r0);
    r4 = (r18 + r0);
    r4 = (r4 + 2476);
    // inline leaf 0x8013BE2C (7 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8013BE2C
    r14 = (r14 + 1);
}

loc_8013AEB8:
{
    r0 = (r14 & 255);
}

loc_8013AEC0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r19))) {
        goto loc_8013AE98;
    }
}

loc_8013AEC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r18 + 2472), static_cast<uint8_t>(r0));
}

loc_8013AECC:
{
    r3 = r18;
    r4 = 0;
    ctx->lr = 0x8013AED8u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_A0E5 = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_A0E5);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_A0E5 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r15 = 0;
    r16 = 1;
    r14 = 0x805A0000u;
    goto loc_8013BDE4;
}

loc_8013AEE8:
{
    r22 = (r22 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
}

loc_8013AEF4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1000))) {
        goto loc_8013AF00;
    }
}

loc_8013AEF8:
{
    r3 = r18;
    ctx->lr = 0x8013AF00u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_A892 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_A892);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_A892 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8013AF00:
{
    r4 = MemoryInline::FlatRead32((r18 + 2392));
    r3 = MemoryInline::FlatRead32((r18 + 2388));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8013AF14:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8013AFA8;
    }
}

loc_8013AF18:
{
    r0 = MemoryInline::FlatRead16((r18 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8013AF20:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8013AF4C;
    }
}

loc_8013AF24:
{
    r3 = r18;
    r4 = 8;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl5_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl5_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8013A8FC;
    }
}

loc_inl5_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl5_cont_8013A8E8;
}

loc_inl5_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
}

loc_inl5_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013AF34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AF4C;
    }
}

loc_8013AF38:
{
    r3 = r18;
    r4 = 8;
    r5 = 0;
    ctx->lr = 0x8013AF48u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_B221 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_B221);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_B221 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013AFA8;
}

loc_8013AF4C:
{
    r0 = MemoryInline::FlatRead8((r18 + 2207));
}

loc_8013AF54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8013AF80;
    }
}

loc_8013AF58:
{
    r3 = r18;
    r4 = 9;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl6_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl6_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x8013A8FC;
    }
}

loc_inl6_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl6_cont_8013A8E8;
}

loc_inl6_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
}

loc_inl6_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013AF68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AF80;
    }
}

loc_8013AF6C:
{
    r3 = r18;
    r4 = 9;
    r5 = 0;
    ctx->lr = 0x8013AF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_BA10 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_BA10);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_BA10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013AFA8;
}

loc_8013AF80:
{
}

loc_8013AF84:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8013AFA8;
    }
}

loc_8013AF88:
{
    r3 = r18;
    r4 = (r29 & 65535);
    ctx->lr = 0x8013AF94u;
    if constexpr (KnownRegArgsCpuCall<0x8012A2B8u>(&func_8012A2B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8012A2B8_BE3A = func_8012A2B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012A2B8_BE3A);
        r4 = static_cast<uint32_t>(regargs_result_8012A2B8_BE3A >> 32);
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012A2B8u>(ctx);
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r18;
    r4 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8013AC64u>(&func_8013AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AC64_C5D6 = func_8013AC64_ra40_0_8_0(ctx, r6);
        r3 = regargs_result_8013AC64_C5D6;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8013AC64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = r3;
    r23 = 1;
}

loc_8013AFA8:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    if constexpr (KnownRegArgsCpuCall<0x801407CCu>(&func_801407CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801407CC_C911 = func_801407CC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801407CC_C911);
        r4 = static_cast<uint32_t>(regargs_result_801407CC_C911 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801407CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r17 = r3;
    r0 = (r3 & 255);
}

loc_8013AFBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8013AFDC;
    }
}

loc_8013AFC0:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8013AFCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8013AFDC;
    }
}

loc_8013AFD0:
{
    r3 = r18;
    ctx->lr = 0x8013AFD8u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_CD7B = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_CD7B);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_CD7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013AFDC:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r4 = (r3 + 1);
    MemoryInline::FlatWrite32((r18 + 2392), r4);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8013AFF0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8013BDC0;
    }
}

loc_8013AFF4:
{
    r3 = (r14 + 7568);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8013B008u:
        goto loc_8013B008;
        break;
    case 0x8013B034u:
        goto loc_8013B034;
        break;
    case 0x8013B048u:
        goto loc_8013B048;
        break;
    case 0x8013B078u:
        goto loc_8013B078;
        break;
    case 0x8013B084u:
        goto loc_8013B084;
        break;
    case 0x8013B090u:
        goto loc_8013B090;
        break;
    case 0x8013B09Cu:
        goto loc_8013B09C;
        break;
    case 0x8013B0A8u:
        goto loc_8013B0A8;
        break;
    case 0x8013B0C4u:
        goto loc_8013B0C4;
        break;
    case 0x8013B0E0u:
        goto loc_8013B0E0;
        break;
    case 0x8013B0FCu:
        goto loc_8013B0FC;
        break;
    case 0x8013B118u:
        goto loc_8013B118;
        break;
    case 0x8013B134u:
        goto loc_8013B134;
        break;
    case 0x8013B150u:
        goto loc_8013B150;
        break;
    case 0x8013B15Cu:
        goto loc_8013B15C;
        break;
    case 0x8013B178u:
        goto loc_8013B178;
        break;
    case 0x8013BA84u:
        goto loc_8013BA84;
        break;
    case 0x8013B184u:
        goto loc_8013B184;
        break;
    case 0x8013B1A0u:
        goto loc_8013B1A0;
        break;
    case 0x8013B1BCu:
        goto loc_8013B1BC;
        break;
    case 0x8013B1D8u:
        goto loc_8013B1D8;
        break;
    case 0x8013B1E4u:
        goto loc_8013B1E4;
        break;
    case 0x8013B200u:
        goto loc_8013B200;
        break;
    case 0x8013B21Cu:
        goto loc_8013B21C;
        break;
    case 0x8013B238u:
        goto loc_8013B238;
        break;
    case 0x8013B254u:
        goto loc_8013B254;
        break;
    case 0x8013B260u:
        goto loc_8013B260;
        break;
    case 0x8013B26Cu:
        goto loc_8013B26C;
        break;
    case 0x8013B280u:
        goto loc_8013B280;
        break;
    case 0x8013B29Cu:
        goto loc_8013B29C;
        break;
    case 0x8013B2B8u:
        goto loc_8013B2B8;
        break;
    case 0x8013B2C4u:
        goto loc_8013B2C4;
        break;
    case 0x8013B2E0u:
        goto loc_8013B2E0;
        break;
    case 0x8013B2ECu:
        goto loc_8013B2EC;
        break;
    case 0x8013B308u:
        goto loc_8013B308;
        break;
    case 0x8013B338u:
        goto loc_8013B338;
        break;
    case 0x8013B354u:
        goto loc_8013B354;
        break;
    case 0x8013B370u:
        goto loc_8013B370;
        break;
    case 0x8013B38Cu:
        goto loc_8013B38C;
        break;
    case 0x8013B3A8u:
        goto loc_8013B3A8;
        break;
    case 0x8013B3C4u:
        goto loc_8013B3C4;
        break;
    case 0x8013B3E0u:
        goto loc_8013B3E0;
        break;
    case 0x8013B3FCu:
        goto loc_8013B3FC;
        break;
    case 0x8013B418u:
        goto loc_8013B418;
        break;
    case 0x8013B424u:
        goto loc_8013B424;
        break;
    case 0x8013B430u:
        goto loc_8013B430;
        break;
    case 0x8013B43Cu:
        goto loc_8013B43C;
        break;
    case 0x8013B458u:
        goto loc_8013B458;
        break;
    case 0x8013B488u:
        goto loc_8013B488;
        break;
    case 0x8013B494u:
        goto loc_8013B494;
        break;
    case 0x8013B4D4u:
        goto loc_8013B4D4;
        break;
    case 0x8013B4F0u:
        goto loc_8013B4F0;
        break;
    case 0x8013B50Cu:
        goto loc_8013B50C;
        break;
    case 0x8013B528u:
        goto loc_8013B528;
        break;
    case 0x8013B544u:
        goto loc_8013B544;
        break;
    case 0x8013B550u:
        goto loc_8013B550;
        break;
    case 0x8013B55Cu:
        goto loc_8013B55C;
        break;
    case 0x8013BDD4u:
        goto loc_8013BDD4;
        break;
    case 0x8013B578u:
        goto loc_8013B578;
        break;
    case 0x8013B5A0u:
        goto loc_8013B5A0;
        break;
    case 0x8013B5BCu:
        goto loc_8013B5BC;
        break;
    case 0x8013B5C8u:
        goto loc_8013B5C8;
        break;
    case 0x8013B5E4u:
        goto loc_8013B5E4;
        break;
    case 0x8013B600u:
        goto loc_8013B600;
        break;
    case 0x8013B61Cu:
        goto loc_8013B61C;
        break;
    case 0x8013B638u:
        goto loc_8013B638;
        break;
    case 0x8013B654u:
        goto loc_8013B654;
        break;
    case 0x8013B670u:
        goto loc_8013B670;
        break;
    case 0x8013B68Cu:
        goto loc_8013B68C;
        break;
    case 0x8013B6A8u:
        goto loc_8013B6A8;
        break;
    case 0x8013B6C4u:
        goto loc_8013B6C4;
        break;
    case 0x8013B6E0u:
        goto loc_8013B6E0;
        break;
    case 0x8013B6FCu:
        goto loc_8013B6FC;
        break;
    case 0x8013B704u:
        goto loc_8013B704;
        break;
    case 0x8013B720u:
        goto loc_8013B720;
        break;
    case 0x8013B73Cu:
        goto loc_8013B73C;
        break;
    case 0x8013B758u:
        goto loc_8013B758;
        break;
    case 0x8013B774u:
        goto loc_8013B774;
        break;
    case 0x8013B788u:
        goto loc_8013B788;
        break;
    case 0x8013B7A4u:
        goto loc_8013B7A4;
        break;
    case 0x8013B7B0u:
        goto loc_8013B7B0;
        break;
    case 0x8013B7CCu:
        goto loc_8013B7CC;
        break;
    case 0x8013B7E8u:
        goto loc_8013B7E8;
        break;
    case 0x8013B804u:
        goto loc_8013B804;
        break;
    case 0x8013B820u:
        goto loc_8013B820;
        break;
    case 0x8013B83Cu:
        goto loc_8013B83C;
        break;
    case 0x8013B848u:
        goto loc_8013B848;
        break;
    case 0x8013B864u:
        goto loc_8013B864;
        break;
    case 0x8013B880u:
        goto loc_8013B880;
        break;
    case 0x8013B89Cu:
        goto loc_8013B89C;
        break;
    case 0x8013B8B8u:
        goto loc_8013B8B8;
        break;
    case 0x8013B8C4u:
        goto loc_8013B8C4;
        break;
    case 0x8013B8E0u:
        goto loc_8013B8E0;
        break;
    case 0x8013B8FCu:
        goto loc_8013B8FC;
        break;
    case 0x8013B904u:
        goto loc_8013B904;
        break;
    case 0x8013B920u:
        goto loc_8013B920;
        break;
    case 0x8013B93Cu:
        goto loc_8013B93C;
        break;
    case 0x8013B948u:
        goto loc_8013B948;
        break;
    case 0x8013B964u:
        goto loc_8013B964;
        break;
    case 0x8013B980u:
        goto loc_8013B980;
        break;
    case 0x8013B99Cu:
        goto loc_8013B99C;
        break;
    case 0x8013B9A4u:
        goto loc_8013B9A4;
        break;
    case 0x8013B9C4u:
        goto loc_8013B9C4;
        break;
    case 0x8013B9E0u:
        goto loc_8013B9E0;
        break;
    case 0x8013B9FCu:
        goto loc_8013B9FC;
        break;
    case 0x8013BA18u:
        goto loc_8013BA18;
        break;
    case 0x8013BA34u:
        goto loc_8013BA34;
        break;
    case 0x8013BA50u:
        goto loc_8013BA50;
        break;
    case 0x8013BA68u:
        goto loc_8013BA68;
        break;
    case 0x8013BDC0u:
        goto loc_8013BDC0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8013B008:
{
    r0 = MemoryInline::FlatRead8((r18 + 1946));
}

loc_8013B010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013B020;
    }
}

loc_8013B014:
{
    r3 = r18;
    r4 = 1;
    ctx->lr = 0x8013B020u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB30u>(&func_8013AB30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013AB30_F52A = func_8013AB30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8013AB30_F52A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013AB30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8013B020:
{
    r3 = r18;
    r4 = MemoryInline::FlatRead32((r18 + 2392));
    ctx->lr = 0x8013B02Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013C4BCu>(ctx);
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
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r31 = 1;
    goto loc_8013BDD4;
}

loc_8013B034:
{
    r3 = r18;
    r5 = r21;
    ctx->lr = 0x8013B040u;
    if constexpr (KnownRegArgsCpuCall<0x8013C5E0u>(&func_8013C5E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013C5E0_FBF6 = func_8013C5E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013C5E0_FBF6);
        r4 = static_cast<uint32_t>(regargs_result_8013C5E0_FBF6 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013C5E0u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r21 = 0;
    goto loc_8013BDD4;
}

loc_8013B048:
{
    r3 = r18;
    r5 = (r29 & 65535);
    ctx->lr = 0x8013B054u;
    if constexpr (KnownRegArgsCpuCall<0x8013C7F8u>(&func_8013C7F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013C7F8_1045D = func_8013C7F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013C7F8_1045D);
        r4 = static_cast<uint32_t>(regargs_result_8013C7F8_1045D >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013C7F8u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    r3 = r18;
    r4 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8013AC64u>(&func_8013AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AC64_10C13 = func_8013AC64_ra40_0_8_0(ctx, r6);
        r3 = regargs_result_8013AC64_10C13;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8013AC64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = r3;
    goto loc_8013BDD4;
}

loc_8013B078:
{
    r3 = r18;
    ctx->lr = 0x8013B080u;
    if constexpr (KnownRegArgsCpuCall<0x8013C844u>(&func_8013C844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013C844_10FF7 = func_8013C844_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8013C844_10FF7);
        r4 = static_cast<uint32_t>(regargs_result_8013C844_10FF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013C844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013BDD4;
}

loc_8013B084:
{
    r3 = r18;
    // inline leaf 0x8013C9E0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 2553), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8013C9E0
    goto loc_8013BDD4;
}

loc_8013B090:
{
    r3 = r18;
    ctx->lr = 0x8013B098u;
    if constexpr (KnownRegArgsCpuCall<0x8013C9ECu>(&func_8013C9EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013C9EC_1174D = func_8013C9EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013C9EC_1174D);
        r4 = static_cast<uint32_t>(regargs_result_8013C9EC_1174D >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013C9ECu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8013BDD4;
}

loc_8013B09C:
{
    r3 = r18;
    ctx->lr = 0x8013B0A4u;
    if constexpr (KnownRegArgsCpuCall<0x8013CB04u>(&func_8013CB04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CB04_11FAD = func_8013CB04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CB04_11FAD);
        r4 = static_cast<uint32_t>(regargs_result_8013CB04_11FAD >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CB04u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8013BDE4;
}

loc_8013B0A8:
{
    r3 = r18;
    ctx->lr = 0x8013B0B0u;
    if constexpr (KnownRegArgsCpuCall<0x8013CC48u>(&func_8013CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CC48_12828 = func_8013CC48_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CC48_12828);
        r4 = static_cast<uint32_t>(regargs_result_8013CC48_12828 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CC48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B0C4:
{
    r3 = r18;
    ctx->lr = 0x8013B0CCu;
    if constexpr (KnownRegArgsCpuCall<0x8013CC70u>(&func_8013CC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CC70_1302E = func_8013CC70_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CC70_1302E);
        r4 = static_cast<uint32_t>(regargs_result_8013CC70_1302E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B0E0:
{
    r3 = r18;
    ctx->lr = 0x8013B0E8u;
    if constexpr (KnownRegArgsCpuCall<0x8013CC98u>(&func_8013CC98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CC98_13834 = func_8013CC98_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CC98_13834);
        r4 = static_cast<uint32_t>(regargs_result_8013CC98_13834 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CC98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B0FC:
{
    r3 = r18;
    ctx->lr = 0x8013B104u;
    if constexpr (KnownRegArgsCpuCall<0x8013CCC0u>(&func_8013CCC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CCC0_1403A = func_8013CCC0_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CCC0_1403A);
        r4 = static_cast<uint32_t>(regargs_result_8013CCC0_1403A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CCC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B118:
{
    r3 = r18;
    ctx->lr = 0x8013B120u;
    if constexpr (KnownRegArgsCpuCall<0x8013CCE8u>(&func_8013CCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CCE8_14840 = func_8013CCE8_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CCE8_14840);
        r4 = static_cast<uint32_t>(regargs_result_8013CCE8_14840 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B134:
{
    r3 = r18;
    ctx->lr = 0x8013B13Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013CD0Cu>(&func_8013CD0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CD0C_15046 = func_8013CD0C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CD0C_15046);
        r4 = static_cast<uint32_t>(regargs_result_8013CD0C_15046 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CD0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B150:
{
    r3 = r18;
    ctx->lr = 0x8013B158u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_157DE = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_157DE);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_157DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDD4;
}

loc_8013B15C:
{
    r3 = r18;
    ctx->lr = 0x8013B164u;
    if constexpr (KnownRegArgsCpuCall<0x8013CD34u>(&func_8013CD34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8013CD34_15B8B = func_8013CD34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CD34_15B8B);
        r4 = static_cast<uint32_t>(regargs_result_8013CD34_15B8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CD34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B178:
{
    r3 = r18;
    ctx->lr = 0x8013B180u;
    if constexpr (KnownRegArgsCpuCall<0x8013CE18u>(&func_8013CE18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CE18_16246 = func_8013CE18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CE18_16246);
        r4 = static_cast<uint32_t>(regargs_result_8013CE18_16246 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CE18u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013BDD4;
}

loc_8013B184:
{
    r3 = r18;
    ctx->lr = 0x8013B18Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013CF14u>(&func_8013CF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013CF14_16A53 = func_8013CF14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CF14_16A53);
        r4 = static_cast<uint32_t>(regargs_result_8013CF14_16A53 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013CF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B1A0:
{
    r3 = r18;
    ctx->lr = 0x8013B1A8u;
    if constexpr (KnownRegArgsCpuCall<0x8013CFD0u>(&func_8013CFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013CFD0_1708D = func_8013CFD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013CFD0_1708D);
        r4 = static_cast<uint32_t>(regargs_result_8013CFD0_1708D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013CFD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B1BC:
{
    r3 = r18;
    ctx->lr = 0x8013B1C4u;
    if constexpr (KnownRegArgsCpuCall<0x8013D0B8u>(&func_8013D0B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D0B8_17877 = func_8013D0B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D0B8_17877);
        r4 = static_cast<uint32_t>(regargs_result_8013D0B8_17877 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D0B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B1D8:
{
    r3 = r18;
    ctx->lr = 0x8013B1E0u;
    if constexpr (KnownRegArgsCpuCall<0x8013D234u>(&func_8013D234)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013D234_1800E = func_8013D234_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8013D234_1800E);
        r4 = static_cast<uint32_t>(regargs_result_8013D234_1800E >> 32);
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
        InvokeDirectCpu<0x8013D234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8013BDE4;
}

loc_8013B1E4:
{
    r3 = r18;
    ctx->lr = 0x8013B1ECu;
    if constexpr (KnownRegArgsCpuCall<0x8013D244u>(&func_8013D244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D244_18432 = func_8013D244_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D244_18432);
        r4 = static_cast<uint32_t>(regargs_result_8013D244_18432 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B200:
{
    r3 = r18;
    ctx->lr = 0x8013B208u;
    if constexpr (KnownRegArgsCpuCall<0x8013D32Cu>(&func_8013D32C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D32C_18C37 = func_8013D32C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D32C_18C37);
        r4 = static_cast<uint32_t>(regargs_result_8013D32C_18C37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D32Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B21C:
{
    r3 = r18;
    ctx->lr = 0x8013B224u;
    if constexpr (KnownRegArgsCpuCall<0x8013D350u>(&func_8013D350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D350_1943D = func_8013D350_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D350_1943D);
        r4 = static_cast<uint32_t>(regargs_result_8013D350_1943D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D350u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B238:
{
    r3 = r18;
    ctx->lr = 0x8013B240u;
    if constexpr (KnownRegArgsCpuCall<0x8013D374u>(&func_8013D374)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D374_19C43 = func_8013D374_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D374_19C43);
        r4 = static_cast<uint32_t>(regargs_result_8013D374_19C43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D374u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B254:
{
    r3 = r18;
    ctx->lr = 0x8013B25Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013D3B0u>(&func_8013D3B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D3B0_1A42E = func_8013D3B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D3B0_1A42E);
        r4 = static_cast<uint32_t>(regargs_result_8013D3B0_1A42E >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D3B0u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013BDD4;
}

loc_8013B260:
{
    r3 = r18;
    ctx->lr = 0x8013B268u;
    if constexpr (KnownRegArgsCpuCall<0x8013D480u>(&func_8013D480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8013D480_1AC1E = func_8013D480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013D480_1AC1E);
        r4 = static_cast<uint32_t>(regargs_result_8013D480_1AC1E >> 32);
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
        InvokeDirectCpu<0x8013D480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8013BDD4;
}

loc_8013B26C:
{
    r3 = r18;
    r5 = r21;
    ctx->lr = 0x8013B278u;
    if constexpr (KnownRegArgsCpuCall<0x8013D4C0u>(&func_8013D4C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D4C0_1B051 = func_8013D4C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D4C0_1B051);
        r4 = static_cast<uint32_t>(regargs_result_8013D4C0_1B051 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D4C0u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r21 = 0;
    goto loc_8013BDD4;
}

loc_8013B280:
{
    r3 = r18;
    ctx->lr = 0x8013B288u;
    if constexpr (KnownRegArgsCpuCall<0x8013D528u>(&func_8013D528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013D528_1B86C = func_8013D528_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D528_1B86C);
        r4 = static_cast<uint32_t>(regargs_result_8013D528_1B86C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013D528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B29C:
{
    r3 = r18;
    ctx->lr = 0x8013B2A4u;
    if constexpr (KnownRegArgsCpuCall<0x8013D5ECu>(&func_8013D5EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013D5EC_1BE70 = func_8013D5EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D5EC_1BE70);
        r4 = static_cast<uint32_t>(regargs_result_8013D5EC_1BE70 >> 32);
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013D5ECu>(ctx);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B2B8:
{
    r3 = r18;
    // inline leaf 0x8013D6E8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r0 * 100);
    MemoryInline::FlatWrite32((r3 + 1060), r0);
    // end of inlined leaf 0x8013D6E8
    goto loc_8013BDD4;
}

loc_8013B2C4:
{
    r3 = r18;
    ctx->lr = 0x8013B2CCu;
    if constexpr (KnownRegArgsCpuCall<0x8013D6F8u>(&func_8013D6F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013D6F8_1C79B = func_8013D6F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D6F8_1C79B);
        r4 = static_cast<uint32_t>(regargs_result_8013D6F8_1C79B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013D6F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B2E0:
{
    r3 = r18;
    ctx->lr = 0x8013B2E8u;
    if constexpr (KnownRegArgsCpuCall<0x8013D7B4u>(&func_8013D7B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8013D7B4_1CD82 = func_8013D7B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013D7B4_1CD82);
        r4 = static_cast<uint32_t>(regargs_result_8013D7B4_1CD82 >> 32);
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
        InvokeDirectCpu<0x8013D7B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8013BDE4;
}

loc_8013B2EC:
{
    r3 = r18;
    ctx->lr = 0x8013B2F4u;
    if constexpr (KnownRegArgsCpuCall<0x8013D870u>(&func_8013D870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013D870_1D170 = func_8013D870_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D870_1D170);
        r4 = static_cast<uint32_t>(regargs_result_8013D870_1D170 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013D870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B308:
{
    r3 = r18;
    r5 = (r29 & 65535);
    ctx->lr = 0x8013B314u;
    if constexpr (KnownRegArgsCpuCall<0x8013D92Cu>(&func_8013D92C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D92C_1D7C3 = func_8013D92C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D92C_1D7C3);
        r4 = static_cast<uint32_t>(regargs_result_8013D92C_1D7C3 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D92Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    r3 = r18;
    r4 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8013AC64u>(&func_8013AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AC64_1DF79 = func_8013AC64_ra40_0_8_0(ctx, r6);
        r3 = regargs_result_8013AC64_1DF79;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8013AC64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = r3;
    goto loc_8013BDD4;
}

loc_8013B338:
{
    r3 = r18;
    ctx->lr = 0x8013B340u;
    if constexpr (KnownRegArgsCpuCall<0x8013D9F4u>(&func_8013D9F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013D9F4_1E342 = func_8013D9F4_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013D9F4_1E342);
        r4 = static_cast<uint32_t>(regargs_result_8013D9F4_1E342 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013D9F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B354:
{
    r3 = r18;
    ctx->lr = 0x8013B35Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013DA1Cu>(&func_8013DA1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013DA1C_1EAF7 = func_8013DA1C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DA1C_1EAF7);
        r4 = static_cast<uint32_t>(regargs_result_8013DA1C_1EAF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013DA1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B370:
{
    r3 = r18;
    ctx->lr = 0x8013B378u;
    if constexpr (KnownRegArgsCpuCall<0x8013DAE0u>(&func_8013DAE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8013DAE0_1F114 = func_8013DAE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DAE0_1F114);
        r4 = static_cast<uint32_t>(regargs_result_8013DAE0_1F114 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DAE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B38C:
{
    r3 = r18;
    ctx->lr = 0x8013B394u;
    if constexpr (KnownRegArgsCpuCall<0x8013DBD4u>(&func_8013DBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013DBD4_1F7CF = func_8013DBD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DBD4_1F7CF);
        r4 = static_cast<uint32_t>(regargs_result_8013DBD4_1F7CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B3A8:
{
    r3 = r18;
    ctx->lr = 0x8013B3B0u;
    if constexpr (KnownRegArgsCpuCall<0x8013DCBCu>(&func_8013DCBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8013DCBC_1FF9C = func_8013DCBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DCBC_1FF9C);
        r4 = static_cast<uint32_t>(regargs_result_8013DCBC_1FF9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DCBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B3C4:
{
    r3 = r18;
    ctx->lr = 0x8013B3CCu;
    if constexpr (KnownRegArgsCpuCall<0x8013DDACu>(&func_8013DDAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013DDAC_20621 = func_8013DDAC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DDAC_20621);
        r4 = static_cast<uint32_t>(regargs_result_8013DDAC_20621 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013DDACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B3E0:
{
    r3 = r18;
    ctx->lr = 0x8013B3E8u;
    if constexpr (KnownRegArgsCpuCall<0x8013DE6Cu>(&func_8013DE6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013DE6C_20C76 = func_8013DE6C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DE6C_20C76);
        r4 = static_cast<uint32_t>(regargs_result_8013DE6C_20C76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DE6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B3FC:
{
    r3 = r18;
    ctx->lr = 0x8013B404u;
    if constexpr (KnownRegArgsCpuCall<0x8013DEBCu>(&func_8013DEBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013DEBC_2147C = func_8013DEBC_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DEBC_2147C);
        r4 = static_cast<uint32_t>(regargs_result_8013DEBC_2147C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DEBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B418:
{
    r3 = r18;
    ctx->lr = 0x8013B420u;
    if constexpr (KnownRegArgsCpuCall<0x8013DEE4u>(&func_8013DEE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8013DEE4_21C65 = func_8013DEE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013DEE4_21C65);
        r4 = static_cast<uint32_t>(regargs_result_8013DEE4_21C65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8013DEE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8013BDD4;
}

loc_8013B424:
{
    r3 = r18;
    // inline leaf 0x8013DF38 (10 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_18 & -256);
    MemoryInline::FlatWrite32((r3 + 444), r0);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_19 & -256);
    MemoryInline::FlatWrite32((r3 + 448), r0);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_20 & -256);
    MemoryInline::FlatWrite32((r3 + 452), r0);
    // end of inlined leaf 0x8013DF38
    goto loc_8013BDD4;
}

loc_8013B430:
{
    r3 = r18;
    ctx->lr = 0x8013B438u;
    if constexpr (KnownRegArgsCpuCall<0x8013DF60u>(&func_8013DF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_8013DF60_2244E = func_8013DF60_ra58_1e0_18_0(ctx, r3, r4, r6, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DF60_2244E);
        r4 = static_cast<uint32_t>(regargs_result_8013DF60_2244E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8013BDD4;
}

loc_8013B43C:
{
    r3 = r18;
    ctx->lr = 0x8013B444u;
    if constexpr (KnownRegArgsCpuCall<0x8013DFDCu>(&func_8013DFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013DFDC_22B4A = func_8013DFDC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DFDC_22B4A);
        r4 = static_cast<uint32_t>(regargs_result_8013DFDC_22B4A >> 32);
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013DFDCu>(ctx);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B458:
{
    r0 = MemoryInline::FlatRead8((r18 + 1946));
}

loc_8013B460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013B470;
    }
}

loc_8013B464:
{
    r3 = r18;
    r4 = 1;
    ctx->lr = 0x8013B470u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB30u>(&func_8013AB30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013AB30_23403 = func_8013AB30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8013AB30_23403;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013AB30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8013B470:
{
    r3 = r18;
    r4 = MemoryInline::FlatRead32((r18 + 2392));
    // inline leaf 0x8013E0C0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 2399), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8013E0C0
    r31 = 1;
    r30 = 1;
    goto loc_8013BDD4;
}

loc_8013B488:
{
    r3 = r18;
    ctx->lr = 0x8013B490u;
    if constexpr (KnownRegArgsCpuCall<0x8013E0CCu>(&func_8013E0CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        const auto regargs_result_8013E0CC_2380C = func_8013E0CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E0CC_2380C);
        r4 = static_cast<uint32_t>(regargs_result_8013E0CC_2380C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8013E0CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8013BDD4;
}

loc_8013B494:
{
    r0 = MemoryInline::FlatRead8((r18 + 1946));
}

loc_8013B49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013B4AC;
    }
}

loc_8013B4A0:
{
    r3 = r18;
    r4 = 1;
    ctx->lr = 0x8013B4ACu;
    if constexpr (KnownRegArgsCpuCall<0x8013AB30u>(&func_8013AB30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013AB30_23D92 = func_8013AB30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8013AB30_23D92;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013AB30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8013B4AC:
{
    r3 = r18;
    r4 = MemoryInline::FlatRead32((r18 + 2392));
    ctx->lr = 0x8013B4B8u;
    if constexpr (KnownRegArgsCpuCall<0x8013E0D0u>(&func_8013E0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013E0D0_24077 = func_8013E0D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E0D0_24077);
        r4 = static_cast<uint32_t>(regargs_result_8013E0D0_24077 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013E0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8013B4C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8013BDE4;
    }
}

loc_8013B4C4:
{
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B4D4:
{
    r3 = r18;
    ctx->lr = 0x8013B4DCu;
    if constexpr (KnownRegArgsCpuCall<0x8013E1E4u>(&func_8013E1E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013E1E4_24743 = func_8013E1E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E1E4_24743);
        r4 = static_cast<uint32_t>(regargs_result_8013E1E4_24743 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013E1E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B4F0:
{
    r3 = r18;
    ctx->lr = 0x8013B4F8u;
    if constexpr (KnownRegArgsCpuCall<0x8013E314u>(&func_8013E314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013E314_24F2D = func_8013E314_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E314_24F2D);
        r4 = static_cast<uint32_t>(regargs_result_8013E314_24F2D >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013E314u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B50C:
{
    r3 = r18;
    ctx->lr = 0x8013B514u;
    if constexpr (KnownRegArgsCpuCall<0x8013E3ECu>(&func_8013E3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013E3EC_2580C = func_8013E3EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E3EC_2580C);
        r4 = static_cast<uint32_t>(regargs_result_8013E3EC_2580C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013E3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B528:
{
    r3 = r18;
    ctx->lr = 0x8013B530u;
    if constexpr (KnownRegArgsCpuCall<0x8013E4C8u>(&func_8013E4C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013E4C8_25E10 = func_8013E4C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E4C8_25E10);
        r4 = static_cast<uint32_t>(regargs_result_8013E4C8_25E10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013E4C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B544:
{
    r3 = r18;
    ctx->lr = 0x8013B54Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013E58Cu>(&func_8013E58C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013E58C_264EC = func_8013E58C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E58C_264EC);
        r4 = static_cast<uint32_t>(regargs_result_8013E58C_264EC >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013E58Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013BDD4;
}

loc_8013B550:
{
    r3 = r18;
    // inline leaf 0x8013E758 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1106), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8013E758
    goto loc_8013BDD4;
}

loc_8013B55C:
{
    r3 = r18;
    ctx->lr = 0x8013B564u;
    if constexpr (KnownRegArgsCpuCall<0x8013E764u>(&func_8013E764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013E764_26DEB = func_8013E764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E764_26DEB);
        r4 = static_cast<uint32_t>(regargs_result_8013E764_26DEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013E764u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B578:
{
    r3 = r18;
    ctx->lr = 0x8013B580u;
    if constexpr (KnownRegArgsCpuCall<0x8013E824u>(&func_8013E824)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013E824_27425 = func_8013E824_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E824_27425);
        r4 = static_cast<uint32_t>(regargs_result_8013E824_27425 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013E824u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    r0 = MemoryInline::FlatRead8((r18 + 2396));
}

loc_8013B598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_8013BDE4;
    }
}

loc_8013B59C:
{
    goto loc_8013BDD4;
}

loc_8013B5A0:
{
    r3 = r18;
    ctx->lr = 0x8013B5A8u;
    if constexpr (KnownRegArgsCpuCall<0x8013E964u>(&func_8013E964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013E964_27DCB = func_8013E964_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013E964_27DCB);
        r4 = static_cast<uint32_t>(regargs_result_8013E964_27DCB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013E964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B5BC:
{
    r3 = r18;
    // inline leaf 0x8013EA2C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 2400), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8013EA2C
    goto loc_8013BDD4;
}

loc_8013B5C8:
{
    r3 = r18;
    ctx->lr = 0x8013B5D0u;
    if constexpr (KnownRegArgsCpuCall<0x8013EA38u>(&func_8013EA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EA38_2852A = func_8013EA38_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EA38_2852A);
        r4 = static_cast<uint32_t>(regargs_result_8013EA38_2852A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EA38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B5E4:
{
    r3 = r18;
    ctx->lr = 0x8013B5ECu;
    if constexpr (KnownRegArgsCpuCall<0x8013EA60u>(&func_8013EA60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EA60_28D15 = func_8013EA60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EA60_28D15);
        r4 = static_cast<uint32_t>(regargs_result_8013EA60_28D15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EA60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B600:
{
    r3 = r18;
    ctx->lr = 0x8013B608u;
    if constexpr (KnownRegArgsCpuCall<0x8013EB48u>(&func_8013EB48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013EB48_294C9 = func_8013EB48_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EB48_294C9);
        r4 = static_cast<uint32_t>(regargs_result_8013EB48_294C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013EB48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B61C:
{
    r3 = r18;
    ctx->lr = 0x8013B624u;
    if constexpr (KnownRegArgsCpuCall<0x8013EC04u>(&func_8013EC04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EC04_29B1E = func_8013EC04_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EC04_29B1E);
        r4 = static_cast<uint32_t>(regargs_result_8013EC04_29B1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EC04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B638:
{
    r3 = r18;
    ctx->lr = 0x8013B640u;
    if constexpr (KnownRegArgsCpuCall<0x8013EC2Cu>(&func_8013EC2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013EC2C_2A2D3 = func_8013EC2C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EC2C_2A2D3);
        r4 = static_cast<uint32_t>(regargs_result_8013EC2C_2A2D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013EC2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B654:
{
    r3 = r18;
    ctx->lr = 0x8013B65Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013ED08u>(&func_8013ED08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013ED08_2A8D7 = func_8013ED08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013ED08_2A8D7);
        r4 = static_cast<uint32_t>(regargs_result_8013ED08_2A8D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013ED08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B670:
{
    r3 = r18;
    ctx->lr = 0x8013B678u;
    if constexpr (KnownRegArgsCpuCall<0x8013EDCCu>(&func_8013EDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013EDCC_2AEDB = func_8013EDCC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EDCC_2AEDB);
        r4 = static_cast<uint32_t>(regargs_result_8013EDCC_2AEDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013EDCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B68C:
{
    r3 = r18;
    ctx->lr = 0x8013B694u;
    if constexpr (KnownRegArgsCpuCall<0x8013DE94u>(&func_8013DE94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013DE94_2B566 = func_8013DE94_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013DE94_2B566);
        r4 = static_cast<uint32_t>(regargs_result_8013DE94_2B566 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013DE94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B6A8:
{
    r3 = r18;
    ctx->lr = 0x8013B6B0u;
    if constexpr (KnownRegArgsCpuCall<0x8013EE90u>(&func_8013EE90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EE90_2BD51 = func_8013EE90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EE90_2BD51);
        r4 = static_cast<uint32_t>(regargs_result_8013EE90_2BD51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EE90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B6C4:
{
    r3 = r18;
    ctx->lr = 0x8013B6CCu;
    if constexpr (KnownRegArgsCpuCall<0x8013EF78u>(&func_8013EF78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EF78_2C556 = func_8013EF78_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EF78_2C556);
        r4 = static_cast<uint32_t>(regargs_result_8013EF78_2C556 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EF78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B6E0:
{
    r3 = r18;
    ctx->lr = 0x8013B6E8u;
    if constexpr (KnownRegArgsCpuCall<0x8013EFA0u>(&func_8013EFA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EFA0_2CD5C = func_8013EFA0_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EFA0_2CD5C);
        r4 = static_cast<uint32_t>(regargs_result_8013EFA0_2CD5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EFA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B6FC:
{
    r21 = 1;
    goto loc_8013BDD4;
}

loc_8013B704:
{
    r3 = r18;
    ctx->lr = 0x8013B70Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013EFC8u>(&func_8013EFC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EFC8_2D59F = func_8013EFC8_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EFC8_2D59F);
        r4 = static_cast<uint32_t>(regargs_result_8013EFC8_2D59F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EFC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B720:
{
    r3 = r18;
    ctx->lr = 0x8013B728u;
    if constexpr (KnownRegArgsCpuCall<0x8013EFF0u>(&func_8013EFF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013EFF0_2DDA5 = func_8013EFF0_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013EFF0_2DDA5);
        r4 = static_cast<uint32_t>(regargs_result_8013EFF0_2DDA5 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013EFF0u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B73C:
{
    r3 = r18;
    ctx->lr = 0x8013B744u;
    if constexpr (KnownRegArgsCpuCall<0x8013F038u>(&func_8013F038)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8013F038_2E5A9 = func_8013F038_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013F038_2E5A9);
        r4 = static_cast<uint32_t>(regargs_result_8013F038_2E5A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013F038u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B758:
{
    r3 = r18;
    ctx->lr = 0x8013B760u;
    if constexpr (KnownRegArgsCpuCall<0x8013F61Cu>(&func_8013F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013F61C_2EC9A = func_8013F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013F61C_2EC9A);
        r4 = static_cast<uint32_t>(regargs_result_8013F61C_2EC9A >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013F61Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B774:
{
    r3 = r18;
    ctx->lr = 0x8013B77Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013F7C8u>(&func_8013F7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013F7C8_2F5AF = func_8013F7C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013F7C8_2F5AF);
        r4 = static_cast<uint32_t>(regargs_result_8013F7C8_2F5AF >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013F7C8u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
}

loc_8013B780:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8013BDE4;
    }
}

loc_8013B784:
{
    goto loc_8013BDD4;
}

loc_8013B788:
{
    r3 = r18;
    ctx->lr = 0x8013B790u;
    if constexpr (KnownRegArgsCpuCall<0x8013F93Cu>(&func_8013F93C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013F93C_2FE51 = func_8013F93C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013F93C_2FE51);
        r4 = static_cast<uint32_t>(regargs_result_8013F93C_2FE51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013F93Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B7A4:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x8013F9F8u>(&func_8013F9F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        func_8013F9F8_ra28_0_0_0(ctx, r3, r5);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013F9F8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDD4;
}

loc_8013B7B0:
{
    r3 = r18;
    ctx->lr = 0x8013B7B8u;
    if constexpr (KnownRegArgsCpuCall<0x8013FA3Cu>(&func_8013FA3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013FA3C_306C5 = func_8013FA3C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FA3C_306C5);
        r4 = static_cast<uint32_t>(regargs_result_8013FA3C_306C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013FA3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B7CC:
{
    r3 = r18;
    ctx->lr = 0x8013B7D4u;
    if constexpr (KnownRegArgsCpuCall<0x8013FB00u>(&func_8013FB00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FB00_30D1A = func_8013FB00_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FB00_30D1A);
        r4 = static_cast<uint32_t>(regargs_result_8013FB00_30D1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FB00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B7E8:
{
    r3 = r18;
    ctx->lr = 0x8013B7F0u;
    if constexpr (KnownRegArgsCpuCall<0x8013FB6Cu>(&func_8013FB6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FB6C_31520 = func_8013FB6C_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FB6C_31520);
        r4 = static_cast<uint32_t>(regargs_result_8013FB6C_31520 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FB6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B804:
{
    r3 = r18;
    ctx->lr = 0x8013B80Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013FC00u>(&func_8013FC00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013FC00_31CD4 = func_8013FC00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FC00_31CD4);
        r4 = static_cast<uint32_t>(regargs_result_8013FC00_31CD4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013FC00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B820:
{
    r3 = r18;
    ctx->lr = 0x8013B828u;
    if constexpr (KnownRegArgsCpuCall<0x8013FCC4u>(&func_8013FCC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013FCC4_322D8 = func_8013FCC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FCC4_322D8);
        r4 = static_cast<uint32_t>(regargs_result_8013FCC4_322D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013FCC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B83C:
{
    r3 = r18;
    // inline leaf 0x8013FD80 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 898), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8013FD80
    goto loc_8013BDD4;
}

loc_8013B848:
{
    r3 = r18;
    ctx->lr = 0x8013B850u;
    if constexpr (KnownRegArgsCpuCall<0x8013FD8Cu>(&func_8013FD8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FD8C_32A36 = func_8013FD8C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FD8C_32A36);
        r4 = static_cast<uint32_t>(regargs_result_8013FD8C_32A36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FD8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B864:
{
    r3 = r18;
    ctx->lr = 0x8013B86Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013FDB4u>(&func_8013FDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FDB4_3323C = func_8013FDB4_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FDB4_3323C);
        r4 = static_cast<uint32_t>(regargs_result_8013FDB4_3323C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B880:
{
    r3 = r18;
    ctx->lr = 0x8013B888u;
    if constexpr (KnownRegArgsCpuCall<0x8013FDD8u>(&func_8013FDD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FDD8_33A42 = func_8013FDD8_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FDD8_33A42);
        r4 = static_cast<uint32_t>(regargs_result_8013FDD8_33A42 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FDD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B89C:
{
    r3 = r18;
    ctx->lr = 0x8013B8A4u;
    if constexpr (KnownRegArgsCpuCall<0x8013FDFCu>(&func_8013FDFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013FDFC_341F7 = func_8013FDFC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FDFC_341F7);
        r4 = static_cast<uint32_t>(regargs_result_8013FDFC_341F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013FDFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B8B8:
{
    r3 = r18;
    // inline leaf 0x8013FF58 (5 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2401), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8013FF58
    goto loc_8013BDD4;
}

loc_8013B8C4:
{
    r3 = r18;
    ctx->lr = 0x8013B8CCu;
    if constexpr (KnownRegArgsCpuCall<0x8013FF6Cu>(&func_8013FF6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FF6C_34998 = func_8013FF6C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FF6C_34998);
        r4 = static_cast<uint32_t>(regargs_result_8013FF6C_34998 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FF6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B8E0:
{
    r3 = r18;
    ctx->lr = 0x8013B8E8u;
    if constexpr (KnownRegArgsCpuCall<0x8013FF9Cu>(&func_8013FF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8013FF9C_3519E = func_8013FF9C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FF9C_3519E);
        r4 = static_cast<uint32_t>(regargs_result_8013FF9C_3519E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8013FF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B8FC:
{
    MemoryInline::FlatWrite8((r18 + 2459), static_cast<uint8_t>(r16));
    goto loc_8013BDD4;
}

loc_8013B904:
{
    r3 = r18;
    ctx->lr = 0x8013B90Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013FFC0u>(&func_8013FFC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013FFC0_359CA = func_8013FFC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013FFC0_359CA);
        r4 = static_cast<uint32_t>(regargs_result_8013FFC0_359CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013FFC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B920:
{
    r3 = r18;
    ctx->lr = 0x8013B928u;
    if constexpr (KnownRegArgsCpuCall<0x80140080u>(&func_80140080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80140080_3601F = func_80140080_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80140080_3601F);
        r4 = static_cast<uint32_t>(regargs_result_80140080_3601F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80140080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B93C:
{
    r3 = r18;
    // inline leaf 0x80140114 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 487), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80140114
    goto loc_8013BDD4;
}

loc_8013B948:
{
    r3 = r18;
    ctx->lr = 0x8013B950u;
    if constexpr (KnownRegArgsCpuCall<0x80140120u>(&func_80140120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80140120_368DD = func_80140120_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80140120_368DD);
        r4 = static_cast<uint32_t>(regargs_result_80140120_368DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80140120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B964:
{
    r3 = r18;
    ctx->lr = 0x8013B96Cu;
    if constexpr (KnownRegArgsCpuCall<0x801401DCu>(&func_801401DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_801401DC_36EE1 = func_801401DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801401DC_36EE1);
        r4 = static_cast<uint32_t>(regargs_result_801401DC_36EE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801401DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B980:
{
    r3 = r18;
    ctx->lr = 0x8013B988u;
    if constexpr (KnownRegArgsCpuCall<0x801402A8u>(&func_801402A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801402A8_37536 = func_801402A8_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801402A8_37536);
        r4 = static_cast<uint32_t>(regargs_result_801402A8_37536 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801402A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B99C:
{
    r20 = MemoryInline::FlatRead8(r4);
    goto loc_8013BDD4;
}

loc_8013B9A4:
{
    r3 = r18;
    r5 = r20;
    ctx->lr = 0x8013B9B0u;
    if constexpr (KnownRegArgsCpuCall<0x801402D0u>(&func_801402D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801402D0_37D87 = func_801402D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801402D0_37D87);
        r4 = static_cast<uint32_t>(regargs_result_801402D0_37D87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801402D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B9C4:
{
    r3 = r18;
    ctx->lr = 0x8013B9CCu;
    if constexpr (KnownRegArgsCpuCall<0x801402FCu>(&func_801402FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_801402FC_3853B = func_801402FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801402FC_3853B);
        r4 = static_cast<uint32_t>(regargs_result_801402FC_3853B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801402FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B9E0:
{
    r3 = r18;
    ctx->lr = 0x8013B9E8u;
    if constexpr (KnownRegArgsCpuCall<0x801403B8u>(&func_801403B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_801403B8_38B58 = func_801403B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801403B8_38B58);
        r4 = static_cast<uint32_t>(regargs_result_801403B8_38B58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801403B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013B9FC:
{
    r3 = r18;
    ctx->lr = 0x8013BA04u;
    if constexpr (KnownRegArgsCpuCall<0x8014051Cu>(&func_8014051C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8014051C_391A7 = func_8014051C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8014051C_391A7);
        r4 = static_cast<uint32_t>(regargs_result_8014051C_391A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8014051Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013BA18:
{
    r3 = r18;
    ctx->lr = 0x8013BA20u;
    if constexpr (KnownRegArgsCpuCall<0x801405E4u>(&func_801405E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_801405E4_397AB = func_801405E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801405E4_397AB);
        r4 = static_cast<uint32_t>(regargs_result_801405E4_397AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801405E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013BA34:
{
    r3 = r18;
    ctx->lr = 0x8013BA3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801406ACu>(&func_801406AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801406AC_39E00 = func_801406AC_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801406AC_39E00);
        r4 = static_cast<uint32_t>(regargs_result_801406AC_39E00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801406ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013BA50:
{
    MemoryInline::FlatWrite8((r18 + 910), static_cast<uint8_t>(r15));
    MemoryInline::FlatWrite8((r18 + 911), static_cast<uint8_t>(r15));
    r3 = r18;
    r4 = 0;
    // inline leaf 0x801307DC (11 guest instruction(s))
}

loc_inl16_0x801307DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
    r5 = (r4 & 255);
}

loc_inl16_0x801307E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x801307EC:
{
    MemoryInline::FlatWrite8((r3 + 1085), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_inl16_0x801307FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x80130800:
{
    MemoryInline::FlatWrite8((r3 + 1082), static_cast<uint8_t>(r0));
    goto loc_inl16_cont_801307DC;
}

loc_inl16_return:
{
}

loc_inl16_cont_801307DC:
{
    // end of inlined leaf 0x801307DC
    goto loc_8013BDD4;
}

loc_8013BA68:
{
    r3 = r18;
    ctx->lr = 0x8013BA70u;
    if constexpr (KnownRegArgsCpuCall<0x801406D4u>(&func_801406D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801406D4_3AA1D = func_801406D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801406D4_3AA1D);
        r4 = static_cast<uint32_t>(regargs_result_801406D4_3AA1D >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801406D4u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
    goto loc_8013BDD4;
}

loc_8013BA84:
{
    r4 = MemoryInline::FlatRead8((r18 + 2396));
}

loc_8013BA8C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(11))) {
        goto loc_8013BAA8;
    }
}

loc_8013BA90:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 7520);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_13);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8013BAB4u:
        goto loc_8013BAB4;
        break;
    case 0x8013BCB0u:
        goto loc_8013BCB0;
        break;
    case 0x8013BAD8u:
        goto loc_8013BAD8;
        break;
    case 0x8013BC1Cu:
        goto loc_8013BC1C;
        break;
    case 0x8013BCBCu:
        goto loc_8013BCBC;
        break;
    case 0x8013BCF4u:
        goto loc_8013BCF4;
        break;
    case 0x8013BD18u:
        goto loc_8013BD18;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8013BAA8:
{
    r3 = r18;
    ctx->lr = 0x8013BAB0u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_3BB16 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_3BB16);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_3BB16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BAB4:
{
    r0 = MemoryInline::FlatRead8((r18 + 2402));
}

loc_8013BABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013BACC;
    }
}

loc_8013BAC0:
{
    r3 = r18;
    ctx->lr = 0x8013BAC8u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD0u>(&func_8013ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013ABD0_3BF51 = func_8013ABD0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD0_3BF51);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD0_3BF51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BACC:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80140918u>(&func_80140918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140918_3C291 = func_80140918_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140918_3C291);
        r4 = static_cast<uint32_t>(regargs_result_80140918_3C291 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140918u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BAD8:
{
    r3 = MemoryInline::FlatRead8((r18 + 2457));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r18 + 2457), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_8013BAEC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10))) {
        goto loc_8013BB00;
    }
}

loc_8013BAF0:
{
    r3 = r18;
    ctx->lr = 0x8013BAF8u;
    if constexpr (KnownRegArgsCpuCall<0x8013C2B8u>(&func_8013C2B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        const auto regargs_result_8013C2B8_3C77F = func_8013C2B8_ra8_8_8_0(ctx, r3, f3.d);
        r3 = regargs_result_8013C2B8_3C77F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8013C2B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8013BAFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013BBA4;
    }
}

loc_8013BB00:
{
    r0 = MemoryInline::FlatRead8((r18 + 898));
}

loc_8013BB08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013BB18;
    }
}

loc_8013BB0C:
{
    r3 = r18;
    ctx->lr = 0x8013BB14u;
    if constexpr (KnownRegArgsCpuCall<0x801381E0u>(&func_801381E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801381E0_3CD75 = func_801381E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801381E0_3CD75);
        r4 = static_cast<uint32_t>(regargs_result_801381E0_3CD75 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801381E0u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8013BDE4;
}

loc_8013BB18:
{
    MemoryInline::FlatWrite8((r18 + 2457), static_cast<uint8_t>(r15));
    r3 = MemoryInline::FlatRead32((r18 + 2468));
}

loc_8013BB24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013BB3C;
    }
}

loc_8013BB28:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 11));
    goto loc_8013BB40;
}

loc_8013BB3C:
{
    r5 = 0;
}

loc_8013BB40:
{
    r3 = MemoryInline::FlatRead8((r18 + 898));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r18 + 898), static_cast<uint8_t>(r0));
    r3 = r18;
    r4 = (r0 & 255);
    ctx->lr = 0x8013BB58u;
    if constexpr (KnownRegArgsCpuCall<0x8013AC6Cu>(&func_8013AC6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013AC6C_3D80B = func_8013AC6C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8013AC6C_3D80B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8013AC6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWrite8((r18 + 898), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead32((r18 + 2468));
}

loc_8013BB64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8013BB80;
    }
}

loc_8013BB68:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 255);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r17 = MemoryInline::FlatRead8((r3 + 8));
    goto loc_8013BB84;
}

loc_8013BB80:
{
    r17 = 0;
}

loc_8013BB84:
{
    r3 = r18;
    r4 = 0;
    ctx->lr = 0x8013BB90u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_3DD5B = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_3DD5B);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_3DD5B >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = r18;
    r4 = MemoryInline::FlatRead8((r18 + 2396));
    r5 = r17;
    ctx->lr = 0x8013BBA0u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_3E3E4 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_3E3E4);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_3E3E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013BDE4;
}

loc_8013BBA4:
{
    r5 = MemoryInline::FlatRead32((r18 + 2468));
    r3 = r18;
    r4 = MemoryInline::FlatRead8((r18 + 898));
}

loc_8013BBB4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013BBCC;
    }
}

loc_8013BBB8:
{
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r4 * 12);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 11));
    goto loc_8013BBD0;
}

loc_8013BBCC:
{
    r5 = 0;
}

loc_8013BBD0:
{
    r5 = (r5 & 255);
    ctx->lr = 0x8013BBD8u;
    if constexpr (KnownRegArgsCpuCall<0x8013AC6Cu>(&func_8013AC6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013AC6C_3E914 = func_8013AC6C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8013AC6C_3E914;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8013AC6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
    }
    r5 = MemoryInline::FlatRead8((r18 + 2397));
    r4 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r18 + 898));
}

loc_8013BBE8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8013BC0C;
    }
}

loc_8013BBEC:
{
    MemoryInline::FlatWrite8((r18 + 898), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r18 + 2468));
}

loc_8013BBF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013BC0C;
    }
}

loc_8013BBFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8013BC0C:
{
    r3 = r18;
    r4 = MemoryInline::FlatRead8((r18 + 2396));
    ctx->lr = 0x8013BC18u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_3EED3 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_3EED3);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_3EED3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013BDE4;
}

loc_8013BC1C:
{
    r0 = MemoryInline::FlatRead8((r18 + 1946));
}

loc_8013BC24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013BCA4;
    }
}

loc_8013BC28:
{
    MemoryInline::FlatWrite8((r18 + 1946), static_cast<uint8_t>(r15));
    MemoryInline::FlatWrite8((r18 + 2472), static_cast<uint8_t>(r19));
    r17 = 0;
    goto loc_8013BC58;
}

loc_8013BC38:
{
    r0 = (r17 & 255);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r18 + r0);
    r3 = (r3 + 2476);
    r4 = (r1 + 24);
    r4 = (r4 + r0);
    // inline leaf 0x8013BE2C (7 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8013BE2C
    r17 = (r17 + 1);
}

loc_8013BC58:
{
    r0 = (r17 & 255);
}

loc_8013BC60:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r19))) {
        goto loc_8013BC38;
    }
}

loc_8013BC64:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80140918u>(&func_80140918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140918_3F6C1 = func_80140918_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140918_3F6C1);
        r4 = static_cast<uint32_t>(regargs_result_80140918_3F6C1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140918u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r18 + 896), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r18 + 897), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r18 + 898), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r18 + 899), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteFloat32((r18 + 900), f31.d);
    MemoryInline::FlatWrite32((r18 + 1060), r24);
    r3 = r18;
    r4 = (r1 + 8);
    ctx->lr = 0x8013BC90u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_3FBCB = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_3FBCB);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_3FBCB >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r18 + 2532));
}

loc_8013BC98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013BDE4;
    }
}

loc_8013BC9C:
{
    r31 = 1;
    goto loc_8013BDE4;
}

loc_8013BCA4:
{
    r3 = r18;
    ctx->lr = 0x8013BCACu;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_40330 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_40330);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_40330 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BCB0:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80140918u>(&func_80140918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140918_40670 = func_80140918_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140918_40670);
        r4 = static_cast<uint32_t>(regargs_result_80140918_40670 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140918u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BCBC:
{
    r0 = MemoryInline::FlatRead8((r18 + 2397));
}

loc_8013BCC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013BCE8;
    }
}

loc_8013BCC8:
{
    r0 = MemoryInline::FlatRead16((r18 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8013BCD0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8013BCE8;
    }
}

loc_8013BCD4:
{
    MemoryInline::FlatWrite8((r18 + 2397), static_cast<uint8_t>(r16));
    r3 = r18;
    r5 = 1;
    ctx->lr = 0x8013BCE4u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_40BBE = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_40BBE);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_40BBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013BDE4;
}

loc_8013BCE8:
{
    r3 = r18;
    ctx->lr = 0x8013BCF0u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_40F08 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_40F08);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_40F08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BCF4:
{
    r3 = r18;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_24 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8013BD00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013BD0C;
    }
}

loc_8013BD04:
{
    r3 = r18;
    ctx->lr = 0x8013BD0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80140A2Cu>(&func_80140A2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        const auto regargs_result_80140A2C_4151C = func_80140A2C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80140A2C_4151C);
        r4 = static_cast<uint32_t>(regargs_result_80140A2C_4151C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80140A2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_8013BD0C:
{
    r3 = r18;
    ctx->lr = 0x8013BD14u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_419D4 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_419D4);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_419D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BD18:
{
    r0 = MemoryInline::FlatRead8((r18 + 2397));
}

loc_8013BD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013BD30;
    }
}

loc_8013BD24:
{
}

loc_8013BD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013BDB4;
    }
}

loc_8013BD2C:
{
    goto loc_8013BDE4;
}

loc_8013BD30:
{
    r3 = MemoryInline::FlatRead8((r18 + 897));
    r4 = MemoryInline::FlatRead8((r18 + 898));
    ctx->lr = 0x8013BD3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB9F8u>(&func_802AB9F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB9F8_41F07 = func_802AB9F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB9F8_41F07);
        r4 = static_cast<uint32_t>(regargs_result_802AB9F8_41F07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB9F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r18;
    ctx->lr = 0x8013BD44u;
    if constexpr (KnownRegArgsCpuCall<0x802ABC0Cu>(&func_802ABC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802ABC0C_421E8 = func_802ABC0C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802ABC0C_421E8);
        r4 = static_cast<uint32_t>(regargs_result_802ABC0C_421E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802ABC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8013BD48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013BD60;
    }
}

loc_8013BD4C:
{
    r3 = r18;
    r4 = MemoryInline::FlatRead8((r18 + 2396));
    r5 = 1;
    ctx->lr = 0x8013BD5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_4259C = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_4259C);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_4259C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013BDE4;
}

loc_8013BD60:
{
    r3 = r18;
    ctx->lr = 0x8013BD68u;
    if constexpr (KnownRegArgsCpuCall<0x80130E5Cu>(&func_80130E5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80130E5C_42939 = func_80130E5C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80130E5C_42939);
        r4 = static_cast<uint32_t>(regargs_result_80130E5C_42939 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80130E5Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r17 = r3;
}

loc_8013BD70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013BDA8;
    }
}

loc_8013BD74:
{
    r3 = r18;
    r4 = 10;
    r5 = 0;
    ctx->lr = 0x8013BD84u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_431B9 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_431B9);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_431B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r18;
    r4 = 7;
    r5 = MemoryInline::FlatRead8((r17 + 5));
    r6 = MemoryInline::FlatRead8((r17 + 6));
    ctx->lr = 0x8013BD98u;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_43590 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_43590);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_43590 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    r3 = r18;
    r4 = 0;
    ctx->lr = 0x8013BDA4u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_43DB1 = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_43DB1);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_43DB1 >> 32);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
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
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8013BDE4;
}

loc_8013BDA8:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80140918u>(&func_80140918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140918_4440D = func_80140918_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140918_4440D);
        r4 = static_cast<uint32_t>(regargs_result_80140918_4440D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140918u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BDB4:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80140918u>(&func_80140918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140918_44720 = func_80140918_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140918_44720);
        r4 = static_cast<uint32_t>(regargs_result_80140918_44720 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140918u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013BDE4;
}

loc_8013BDC0:
{
    r3 = r18;
    r4 = 13;
    r5 = MemoryInline::FlatRead32((r18 + 2392));
    r5 = MemoryInline::FlatRead8(r5);
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80140B5C_44A9A = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_44A9A);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_44A9A >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8013BDD4:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r17 & 255);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
}

loc_8013BDE4:
{
}

loc_8013BDE8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8013AEE8;
    }
}

loc_8013BDEC:
{
}

loc_8013BDF0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8013BE04;
    }
}

loc_8013BDF4:
{
    r3 = r18;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    r3 = 1;
    goto loc_8013BE08;
}

loc_8013BE04:
{
    r3 = 0;
}

loc_8013BE08:
{
    r0 = 152;
    addr_psqx_8013BE0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013BE0C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
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

extern "C" void func_8013AD28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013AD28_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013AD28 func_8013AD28 preserves=true fpr_mask=0x00000000
