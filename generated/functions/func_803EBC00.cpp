#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DEB9C(CpuContext* ctx);
extern "C" uint64_t func_803DEB9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DEDBC(CpuContext* ctx);
extern "C" uint64_t func_803DEDBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DFA04(CpuContext* ctx);
extern "C" uint64_t func_803DFA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E0DD4(CpuContext* ctx);
extern "C" uint64_t func_803E0DD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E0EF8(CpuContext* ctx);
extern "C" uint64_t func_803E0EF8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E1138(CpuContext* ctx);
extern "C" uint64_t func_803E1138_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E11E4(CpuContext* ctx);
extern "C" uint64_t func_803E11E4_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E6DE0(CpuContext* ctx);
extern "C" uint64_t func_803E6DE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E6E3C(CpuContext* ctx);
extern "C" uint64_t func_803E6E3C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EA7E0(CpuContext* ctx);
extern "C" uint64_t func_803EA7E0_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803EA890(CpuContext* ctx);
extern "C" uint64_t func_803EA890_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803EA924(CpuContext* ctx);
extern "C" uint64_t func_803EA924_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EABEC(CpuContext* ctx);
extern "C" uint32_t func_803EABEC_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EAC64(CpuContext* ctx);
extern "C" uint64_t func_803EAC64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803EAD48(CpuContext* ctx);
extern "C" uint32_t func_803EAD48_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EAEA4(CpuContext* ctx);
extern "C" uint64_t func_803EAEA4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EAF78(CpuContext* ctx);
extern "C" uint64_t func_803EAF78_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EB238(CpuContext* ctx);
extern "C" uint64_t func_803EB238_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EB6DC(CpuContext* ctx);
extern "C" uint64_t func_803EB6DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803EB7C0(CpuContext* ctx);
extern "C" uint64_t func_803EB7C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EB97C(CpuContext* ctx);
extern "C" uint64_t func_803EB97C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EB9D8(CpuContext* ctx);
extern "C" uint64_t func_803EB9D8_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EBB54(CpuContext* ctx);
extern "C" uint64_t func_803EBB54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EDF10(CpuContext* ctx);
extern "C" uint64_t func_803EDF10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EDF6C(CpuContext* ctx);
extern "C" uint64_t func_803EDF6C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EDF9C(CpuContext* ctx);
extern "C" uint64_t func_803EDF9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EDFF8(CpuContext* ctx);
extern "C" uint64_t func_803EDFF8_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EEB5C(CpuContext* ctx);
extern "C" uint64_t func_803EEB5C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EEC08(CpuContext* ctx);
extern "C" uint64_t func_803EEC08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EED04(CpuContext* ctx);
extern "C" uint64_t func_803EED04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EEE30(CpuContext* ctx);
extern "C" uint32_t func_803EEE30_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803F8894(CpuContext* ctx);
extern "C" uint64_t func_803F8894_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FD840(CpuContext* ctx);
extern "C" uint64_t func_803FD840_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803FDECC(CpuContext* ctx);
extern "C" uint64_t func_803FDECC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8041C604(CpuContext* ctx);
extern "C" uint64_t func_8041C604_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8041C948(CpuContext* ctx);
extern "C" uint32_t func_8041C948_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8041C9A8(CpuContext* ctx);
extern "C" uint32_t func_8041C9A8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8041CA40(CpuContext* ctx);
extern "C" uint32_t func_8041CA40_rac8_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8041D9C4(CpuContext* ctx);
extern "C" uint64_t func_8041D9C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FED8(CpuContext* ctx);
extern "C" uint64_t func_8045FED8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803EBC00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
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
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
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

    MKW_GUEST_ENTER(0x803EBC00u);
    goto loc_803EBC00;

loc_803EBC00:
{
    MemoryInline::FlatWriteRam32((r1 + -2880), r1);
    r1 = (r1 + -2880);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2884), r0);
    r11 = (r1 + 2880);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r31 = r3;
    r27 = r7;
    r26 = r8;
    r0 = (r4 + -32768);
}

loc_803EBC28:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(113))) {
        goto loc_803EDEF8;
    }
}

loc_803EBC2C:
{
    r4 = 0x80600000u;
    r4 = (r4 + -14376);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803EBC44u:
        goto loc_803EBC44;
        break;
    case 0x803EDEF8u:
        goto loc_803EDEF8;
        break;
    case 0x803EBE60u:
        goto loc_803EBE60;
        break;
    case 0x803EBEE8u:
        goto loc_803EBEE8;
        break;
    case 0x803EBFFCu:
        goto loc_803EBFFC;
        break;
    case 0x803EBE2Cu:
        goto loc_803EBE2C;
        break;
    case 0x803EC030u:
        goto loc_803EC030;
        break;
    case 0x803EC04Cu:
        goto loc_803EC04C;
        break;
    case 0x803EC0D4u:
        goto loc_803EC0D4;
        break;
    case 0x803EC0FCu:
        goto loc_803EC0FC;
        break;
    case 0x803EC340u:
        goto loc_803EC340;
        break;
    case 0x803EC388u:
        goto loc_803EC388;
        break;
    case 0x803EC3A4u:
        goto loc_803EC3A4;
        break;
    case 0x803EC3B4u:
        goto loc_803EC3B4;
        break;
    case 0x803EC408u:
        goto loc_803EC408;
        break;
    case 0x803EC524u:
        goto loc_803EC524;
        break;
    case 0x803EC4A8u:
        goto loc_803EC4A8;
        break;
    case 0x803EC654u:
        goto loc_803EC654;
        break;
    case 0x803EC6FCu:
        goto loc_803EC6FC;
        break;
    case 0x803EC714u:
        goto loc_803EC714;
        break;
    case 0x803EC724u:
        goto loc_803EC724;
        break;
    case 0x803EC734u:
        goto loc_803EC734;
        break;
    case 0x803EC944u:
        goto loc_803EC944;
        break;
    case 0x803ECA20u:
        goto loc_803ECA20;
        break;
    case 0x803ECA40u:
        goto loc_803ECA40;
        break;
    case 0x803ECAACu:
        goto loc_803ECAAC;
        break;
    case 0x803ECB68u:
        goto loc_803ECB68;
        break;
    case 0x803ECD10u:
        goto loc_803ECD10;
        break;
    case 0x803ECD20u:
        goto loc_803ECD20;
        break;
    case 0x803ECDE0u:
        goto loc_803ECDE0;
        break;
    case 0x803ECF44u:
        goto loc_803ECF44;
        break;
    case 0x803ECF54u:
        goto loc_803ECF54;
        break;
    case 0x803ECFC4u:
        goto loc_803ECFC4;
        break;
    case 0x803EDA94u:
        goto loc_803EDA94;
        break;
    case 0x803EDAA4u:
        goto loc_803EDAA4;
        break;
    case 0x803ED018u:
        goto loc_803ED018;
        break;
    case 0x803ED120u:
        goto loc_803ED120;
        break;
    case 0x803ED13Cu:
        goto loc_803ED13C;
        break;
    case 0x803ED21Cu:
        goto loc_803ED21C;
        break;
    case 0x803EDBBCu:
        goto loc_803EDBBC;
        break;
    case 0x803EDBD8u:
        goto loc_803EDBD8;
        break;
    case 0x803EDCB8u:
        goto loc_803EDCB8;
        break;
    case 0x803ED404u:
        goto loc_803ED404;
        break;
    case 0x803EDA1Cu:
        goto loc_803EDA1C;
        break;
    case 0x803EDB04u:
        goto loc_803EDB04;
        break;
    case 0x803EDAF4u:
        goto loc_803EDAF4;
        break;
    case 0x803EDD30u:
        goto loc_803EDD30;
        break;
    case 0x803EDD3Cu:
        goto loc_803EDD3C;
        break;
    case 0x803EDDA4u:
        goto loc_803EDDA4;
        break;
    case 0x803EDDB4u:
        goto loc_803EDDB4;
        break;
    case 0x803EDE1Cu:
        goto loc_803EDE1C;
        break;
    case 0x803ED22Cu:
        goto loc_803ED22C;
        break;
    case 0x803ED248u:
        goto loc_803ED248;
        break;
    case 0x803ED3F4u:
        goto loc_803ED3F4;
        break;
    case 0x803EDCC8u:
        goto loc_803EDCC8;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803EBC44:
{
    r5 = 0;
    r4 = r31;
    r0 = 3;
    ctr = r0;
}

loc_803EBC54:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_803EBC5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC60:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_803EBC6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC70:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_803EBC7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC80:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_803EBC8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC90:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_803EBC9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCA0:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_803EBCAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCB0:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_803EBCBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCC0:
{
    r4 = (r4 + 28);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EBC54;
    }
}

loc_803EBCCC:
{
}

loc_803EBCD0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(21))) {
        goto loc_803EBD20;
    }
}

loc_803EBCD4:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 448));
}

loc_803EBCE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCE8;
    }
}

loc_803EBCE4:
{
    r4 = 1;
}

loc_803EBCE8:
{
}

loc_803EBCEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_803EBD20;
    }
}

loc_803EBCF0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 0x80060000u;
    r4 = (r4 + 51);
    r5 = (r1 + 304);
    ctx->lr = 0x803EBD04u;
    if constexpr (KnownRegArgsCpuCall<0x803FD840u>(&func_803FD840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803FD840_515A = func_803FD840_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803FD840_515A);
        r4 = static_cast<uint32_t>(regargs_result_803FD840_515A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FD840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 3;
    r5 = MemoryInline::FlatRead32((r1 + 304));
    r6 = 1;
    r7 = (r1 + 304);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EBD20u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_55B9 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_55B9);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_55B9 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EBD20:
{
    r0 = MemoryInline::FlatRead32((r31 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 784), r0);
    r0 = MemoryInline::FlatRead32((r31 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 788), r0);
    r0 = MemoryInline::FlatRead32((r31 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 792), r0);
    r0 = MemoryInline::FlatRead32((r31 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 796), r0);
    r0 = MemoryInline::FlatRead32((r31 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 800), r0);
    r0 = MemoryInline::FlatRead32((r31 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = MemoryInline::FlatRead32((r31 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 812), r0);
    r0 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = MemoryInline::FlatRead32((r31 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 820), r0);
    r0 = MemoryInline::FlatRead32((r31 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 824), r0);
    r0 = MemoryInline::FlatRead32((r31 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 828), r0);
    r0 = MemoryInline::FlatRead32((r31 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 832), r0);
    r0 = MemoryInline::FlatRead32((r31 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 836), r0);
    r0 = MemoryInline::FlatRead32((r31 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 840), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    r0 = MemoryInline::FlatRead32((r31 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 848), r0);
    r0 = MemoryInline::FlatRead32((r31 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 852), r0);
    r0 = MemoryInline::FlatRead32((r31 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 856), r0);
    r0 = MemoryInline::FlatRead32((r31 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 860), r0);
    r0 = MemoryInline::FlatRead32((r31 + 864));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 864), r0);
    r0 = MemoryInline::FlatRead32((r31 + 868));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 868), r0);
    goto loc_803EDEF8;
}

loc_803EBE2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EBE60:
{
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    r3 = 0;
    r0 = 11;
    ctr = r0;
}

loc_803EBEA8:
{
    r0 = MemoryInline::FlatRead32((r31 + 872));
}

loc_803EBEB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EBEC0;
    }
}

loc_803EBEB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 784));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 784), r0);
}

loc_803EBEC0:
{
    r0 = MemoryInline::FlatRead32((r31 + 876));
}

loc_803EBEC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EBED8;
    }
}

loc_803EBECC:
{
    r0 = MemoryInline::FlatRead32((r31 + 788));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 788), r0);
}

loc_803EBED8:
{
    r31 = (r31 + 8);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EBEA8;
    }
}

loc_803EBEE4:
{
    goto loc_803EDEF8;
}

loc_803EBEE8:
{
}

loc_803EBEEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EBEF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 804), r0);
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    r0 = MemoryInline::FlatRead32((r3 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 812), r0);
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    r0 = MemoryInline::FlatRead32((r3 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 820), r0);
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    r0 = MemoryInline::FlatRead32((r3 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 828), r0);
    r0 = MemoryInline::FlatRead32((r3 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 832), r0);
    r0 = MemoryInline::FlatRead32((r3 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 836), r0);
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    r0 = MemoryInline::FlatRead32((r3 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 848), r0);
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 852), r0);
    r0 = MemoryInline::FlatRead32((r3 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 856), r0);
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    r0 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 864), r0);
    r0 = MemoryInline::FlatRead32((r3 + 868));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 868), r0);
    goto loc_803EDEF8;
}

loc_803EBFFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC030:
{
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC04C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 977), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1224), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FE544 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 25948));
    // end of inlined leaf 0x803FE544
    MemoryInline::FlatWrite32((r31 + 1140), r3);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDF94 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -32704));
    // end of inlined leaf 0x803FDF94
    MemoryInline::FlatWrite32((r31 + 1144), r3);
    r3 = (r31 + 1148);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r26 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    r4 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 1224));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 1148), static_cast<uint16_t>(r4));
    r3 = r31;
    r4 = r26;
    ctx->lr = 0x803EC0ACu;
    if constexpr (KnownRegArgsCpuCall<0x803EA7E0u>(&func_803EA7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EA7E0_83EB = func_803EA7E0_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803EA7E0_83EB);
        r4 = static_cast<uint32_t>(regargs_result_803EA7E0_83EB >> 32);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EA7E0u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 788));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r31 + 788), r0);
    r0 = MemoryInline::FlatRead32((r31 + 800));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r31 + 800), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC0D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC0FC:
{
    r28 = (r8 + 4);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    r0 = MemoryInline::FlatRead32((r28 + 92));
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
    r0 = MemoryInline::FlatRead32((r28 + 88));
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    r0 = MemoryInline::FlatRead32((r28 + 100));
    MemoryInline::FlatWriteRam32((r1 + 328), r0);
    r0 = MemoryInline::FlatRead32((r28 + 108));
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    r0 = MemoryInline::FlatRead32((r3 + 1224));
}

loc_803EC130:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_803EDEF8;
    }
}

loc_803EC134:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_803EC13C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EC158;
    }
}

loc_803EC140:
{
    r4 = 21;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 316);
    r8 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x803EC158u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_92B3 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_92B3);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_92B3 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC158:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_803EC160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803EC178;
    }
}

loc_803EC164:
{
}

loc_803EC168:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EC1C4;
    }
}

loc_803EC16C:
{
    r0 = MemoryInline::FlatRead32((r31 + 1224));
}

loc_803EC174:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC1C4;
    }
}

loc_803EC178:
{
    r0 = MemoryInline::FlatRead32((r28 + 92));
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -4052), r0);
    r0 = MemoryInline::FlatRead32((r28 + 88));
    MemoryInline::FlatWrite32((r3 + -4048), r0);
    r0 = MemoryInline::FlatRead32((r28 + 100));
    MemoryInline::FlatWrite32((r3 + -4044), r0);
    r0 = MemoryInline::FlatRead32((r28 + 108));
    MemoryInline::FlatWrite32((r3 + -4040), r0);
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC1A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC1C4;
    }
}

loc_803EC1A8:
{
    r3 = r31;
    r4 = 20;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 316);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC1C4u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_A0E8 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_A0E8);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_A0E8 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC1C4:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_803EC1CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803EC24C;
    }
}

loc_803EC1D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 1224));
    r0 = (r3 + 1);
}

loc_803EC1DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803EDEF8;
    }
}

loc_803EC1E0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
}

loc_803EC1F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_803EDEF8;
    }
}

loc_803EC1FC:
{
    r0 = (r0 * 124);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 320));
    MemoryInline::FlatWrite32((r3 + 1416), r0);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    MemoryInline::FlatWrite32((r3 + 1420), r0);
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWrite32((r3 + 1424), r0);
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWrite32((r3 + 1428), r0);
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC22C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC24C;
    }
}

loc_803EC230:
{
    r3 = r31;
    r4 = 23;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 316);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC24Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_B034 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_B034);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_B034 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC24C:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_803EC254:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803EC2C0;
    }
}

loc_803EC258:
{
    r3 = MemoryInline::FlatRead32((r31 + 1224));
    r0 = (r3 + -1);
}

loc_803EC264:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC268:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -3672));
}

loc_803EC274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EC298;
    }
}

loc_803EC278:
{
    r0 = MemoryInline::FlatRead32((r1 + 320));
    MemoryInline::FlatWrite32((r31 + 1292), r0);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    MemoryInline::FlatWrite32((r31 + 1296), r0);
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWrite32((r31 + 1300), r0);
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWrite32((r31 + 1304), r0);
}

loc_803EC298:
{
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC2A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC2C0;
    }
}

loc_803EC2A4:
{
    r3 = r31;
    r4 = 22;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 316);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC2C0u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_BEBB = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_BEBB);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_BEBB >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC2C0:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_803EC2C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803EDEF8;
    }
}

loc_803EC2CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 1224));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
}

loc_803EC2E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_803EDEF8;
    }
}

loc_803EC2EC:
{
    r0 = (r0 * 184);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 320));
    MemoryInline::FlatWrite32((r3 + 6444), r0);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    MemoryInline::FlatWrite32((r3 + 6448), r0);
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWrite32((r3 + 6452), r0);
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWrite32((r3 + 6456), r0);
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC31C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC320:
{
    r3 = r31;
    r4 = 24;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 316);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC33Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_CD6C = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_CD6C);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_CD6C >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EC340:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 977), static_cast<uint8_t>(r0));
    r0 = -1;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite8((r4 + -16260), static_cast<uint8_t>(r0));
    r0 = -2;
    MemoryInline::FlatWrite32((r4 + -16256), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1080), r0);
    MemoryInline::FlatWrite32((r3 + 1084), r0);
    MemoryInline::FlatWrite8((r3 + 1088), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC388:
{
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    r0 = MemoryInline::FlatRead32((r3 + 868));
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r3 + 868), r0);
    goto loc_803EDEF8;
}

loc_803EC3A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 4194304);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    goto loc_803EDEF8;
}

loc_803EC3B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 896));
}

loc_803EC3BC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EC3EC;
    }
}

loc_803EC3C0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 977), static_cast<uint8_t>(r0));
    r0 = -1;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite8((r4 + -16260), static_cast<uint8_t>(r0));
    r0 = -2;
    MemoryInline::FlatWrite32((r4 + -16256), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1080), r0);
    MemoryInline::FlatWrite32((r3 + 1084), r0);
    MemoryInline::FlatWrite8((r3 + 1088), static_cast<uint8_t>(r0));
}

loc_803EC3EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 8388608);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    r0 = MemoryInline::FlatRead32((r3 + 868));
    r0 = (r0 | 8388608);
    MemoryInline::FlatWrite32((r3 + 868), r0);
    goto loc_803EDEF8;
}

loc_803EC408:
{
    r5 = MemoryInline::FlatRead16(r8);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 977), static_cast<uint8_t>(r0));
    r0 = -1;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite8((r4 + -16260), static_cast<uint8_t>(r0));
    r0 = -2;
    MemoryInline::FlatWrite32((r4 + -16256), r0);
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 1080), r4);
    MemoryInline::FlatWrite32((r3 + 1084), r4);
    MemoryInline::FlatWrite8((r3 + 1088), static_cast<uint8_t>(r4));
}

loc_803EC43C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_803EC478;
    }
}

loc_803EC440:
{
    r0 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRam32((r1 + 296), r4);
    MemoryInline::FlatWriteRam32((r1 + 300), r4);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 152), r4);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 148);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803EC474u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803EC478:
{
    r4 = MemoryInline::FlatRead32((r3 + 1224));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1224), r4);
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 1148), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    goto loc_803EDEF8;
}

loc_803EC4A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 977), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 1224));
}

loc_803EC4B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803EC4F8;
    }
}

loc_803EC4BC:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 280), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    MemoryInline::FlatWriteRam32((r1 + 288), r0);
    MemoryInline::FlatWriteRam32((r1 + 136), r3);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 136);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803EC4F4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803EC4F8:
{
    r5 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 1148), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 1224));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 1224), r0);
    r0 = MemoryInline::FlatRead32((r3 + 804));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r3 + 804), r0);
    goto loc_803EDEF8;
}

loc_803EC524:
{
    r4 = r26;
    r5 = r26;
    ctx->lr = 0x803EC530u;
    if constexpr (KnownRegArgsCpuCall<0x803EAF78u>(&func_803EAF78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAF78_F462 = func_803EAF78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAF78_F462);
        r4 = static_cast<uint32_t>(regargs_result_803EAF78_F462 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAF78u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
    r4 = r3;
    r0 = MemoryInline::FlatRead32((r31 + 13672));
    r5 = (r31 + 65536);
    MemoryInline::FlatWrite32((r5 + -4052), r0);
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC548:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC54C:
{
}

loc_803EC550:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803EC55C;
    }
}

loc_803EC554:
{
    r3 = r31;
    ctx->lr = 0x803EC55Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EB7C0u>(&func_803EB7C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EB7C0_1031D = func_803EB7C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EB7C0_1031D);
        r4 = static_cast<uint32_t>(regargs_result_803EB7C0_1031D >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EB7C0u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
}

loc_803EC55C:
{
    r0 = MemoryInline::FlatRead32((r31 + 1224));
}

loc_803EC564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803EDEF8;
    }
}

loc_803EC568:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4044));
}

loc_803EC574:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_803EDEF8;
    }
}

loc_803EC578:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803EC580:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC584:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    // inline leaf 0x8041C840 (7 guest instruction(s))
}

loc_inl10_0x8041C840:
{
    r0 = MemoryInline::FlatRead32((r3 + 108));
}

loc_inl10_0x8041C848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x8041C854;
    }
}

loc_inl10_0x8041C84C:
{
    r3 = MemoryInline::FlatRead32((r3 + 44));
    goto loc_inl10_cont_8041C840;
}

loc_inl10_0x8041C854:
{
    r3 = -1;
}

loc_inl10_cont_8041C840:
{
    // end of inlined leaf 0x8041C840
}

loc_803EC590:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_803EDEF8;
    }
}

loc_803EC594:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    // inline leaf 0x8041C838 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 116));
    // end of inlined leaf 0x8041C838
}

loc_803EC5A0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC5A4:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 1;
    r5 = (r1 + 924);
    if constexpr (KnownRegArgsCpuCall<0x803FDECCu>(&func_803FDECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_803FDECC_1177C = func_803FDECC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDECC_1177C);
        r4 = static_cast<uint32_t>(regargs_result_803FDECC_1177C >> 32);
        r0 = ctx->gpr[0];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FDECCu>(ctx);
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
        ctr = ctx->ctr;
    }
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    ctx->lr = 0x803EC5BCu;
    if constexpr (KnownRegArgsCpuCall<0x8041CA40u>(&func_8041CA40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8041CA40_11EE9 = func_8041CA40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_8041CA40_11EE9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x8041CA40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r4 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -16260));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + -15940));
    // inline leaf 0x8041D9BC (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 17538), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x8041D9BC
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDF94 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -32704));
    // end of inlined leaf 0x803FDF94
    r24 = r3;
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r5 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -4044));
    r0 = MemoryInline::FlatRead8((r5 + -16260));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + -15952));
    r8 = MemoryInline::FlatRead8((r1 + 1183));
    r0 = MemoryInline::FlatRead8((r1 + 1182));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & -256);
    r0 = MemoryInline::FlatRead8((r1 + 1180));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & -16777216);
    r0 = MemoryInline::FlatRead8((r1 + 1181));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_10 & -65536);
    r6 = (r8 + r6);
    r0 = (r7 + r0);
    r6 = (r6 + r0);
    r7 = MemoryInline::FlatRead16((r1 + 1184));
    r8 = r24;
    r0 = MemoryInline::FlatRead16((r31 + 1150));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r9 = (r9_rot_1 & -65536);
    r0 = MemoryInline::FlatRead16((r31 + 1152));
    r9 = (r9 + r0);
    r10 = MemoryInline::FlatRead32((r31 + 980));
    ctx->lr = 0x803EC650u;
    if constexpr (KnownRegArgsCpuCall<0x8041C604u>(&func_8041C604)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8041C604_12C97 = func_8041C604_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041C604_12C97);
        r4 = static_cast<uint32_t>(regargs_result_8041C604_12C97 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041C604u>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EC654:
{
    r3 = (r1 + 504);
    ctx->lr = 0x803EC65Cu;
    if constexpr (KnownRegArgsCpuCall<0x803E11E4u>(&func_803E11E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E11E4_13626 = func_803E11E4_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E11E4_13626);
        r4 = static_cast<uint32_t>(regargs_result_803E11E4_13626 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E11E4u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r31;
    r4 = r26;
    r5 = (r1 + 504);
    ctx->lr = 0x803EC66Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EB238u>(&func_803EB238)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EB238_140A1 = func_803EB238_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EB238_140A1);
        r4 = static_cast<uint32_t>(regargs_result_803EB238_140A1 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EB238u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        f0 = ctx->fpr[0];
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
    r24 = r3;
    r4 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -4052), r4);
    r0 = MemoryInline::FlatRead32((r31 + 1224));
}

loc_803EC684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803EC6AC;
    }
}

loc_803EC688:
{
}

loc_803EC68C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_803EC6AC;
    }
}

loc_803EC690:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803EC698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EC6AC;
    }
}

loc_803EC69C:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    if constexpr (KnownRegArgsCpuCall<0x8041C948u>(&func_8041C948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041C948_14F4B = func_8041C948_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8041C948_14F4B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8041C948u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    // inline leaf 0x8041C7A0 (21 guest instruction(s))
}

loc_inl23_0x8041C7A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_inl23_0x8041C7A8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl23_0x8041C7BC;
    }
}

loc_inl23_0x8041C7AC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = -1;
    goto loc_inl23_cont_8041C7A0;
}

loc_inl23_0x8041C7BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 108));
}

loc_inl23_0x8041C7C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl23_0x8041C7D0;
    }
}

loc_inl23_0x8041C7C8:
{
    r3 = 0;
    goto loc_inl23_cont_8041C7A0;
}

loc_inl23_0x8041C7D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    MemoryInline::FlatWrite32((r3 + 116), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 292), static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_inl23_cont_8041C7A0:
{
    // end of inlined leaf 0x8041C7A0
}

loc_803EC6AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EC6C8;
    }
}

loc_803EC6B8:
{
    r3 = (r1 + 504);
    r4 = -1;
    ctx->lr = 0x803EC6C4u;
    if constexpr (KnownRegArgsCpuCall<0x803E0EF8u>(&func_803E0EF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E0EF8_158C6 = func_803E0EF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E0EF8_158C6);
        r4 = static_cast<uint32_t>(regargs_result_803E0EF8_158C6 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E0EF8u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EC6C8:
{
}

loc_803EC6CC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(0))) {
        goto loc_803EC6EC;
    }
}

loc_803EC6D0:
{
    r3 = r31;
    r4 = 7;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 504);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC6ECu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_16683 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_16683);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_16683 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC6EC:
{
    r3 = (r1 + 504);
    r4 = -1;
    ctx->lr = 0x803EC6F8u;
    if constexpr (KnownRegArgsCpuCall<0x803E0EF8u>(&func_803E0EF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E0EF8_1711E = func_803E0EF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E0EF8_1711E);
        r4 = static_cast<uint32_t>(regargs_result_803E0EF8_1711E >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E0EF8u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EC6FC:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 984), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC714:
{
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    goto loc_803EDEF8;
}

loc_803EC724:
{
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r3 + 852), r0);
    goto loc_803EDEF8;
}

loc_803EC734:
{
    r28 = (r8 + 4);
    r30 = (r8 + 580);
    r3 = (r8 + 8);
    r4 = (r31 + 1140);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045BD3C_17F9F = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_17F9F);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_17F9F >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_803EC750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803EC7B0;
    }
}

loc_803EC754:
{
    r0 = MemoryInline::FlatRead16((r28 + 574));
}

loc_803EC75C:
{
    r24 = 256;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_803EC768;
    }
}

loc_803EC764:
{
    r24 = r0;
}

loc_803EC768:
{
    r3 = (r1 + 668);
    r4 = (r28 + 318);
    r5 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 664), r24);
    r3 = r31;
    r4 = (r31 + 65536);
    r4 = (r4 + -4036);
    r5 = r30;
    ctx->lr = 0x803EC790u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_185D7 = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_185D7);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_185D7 >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r31;
    r4 = 30;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 664);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC7ACu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_18AE7 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_18AE7);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_18AE7 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EC7B0:
{
    r4 = MemoryInline::FlatRead32((r31 + 1224));
}

loc_803EC7B8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC7BC:
{
    r0 = (r4 + 1);
}

loc_803EC7C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803EDEF8;
    }
}

loc_803EC7C8:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r28 + r0);
    r5 = MemoryInline::FlatRead16((r3 + 14));
}

loc_803EC7D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC7DC:
{
    r0 = (r4 + 2);
}

loc_803EC7E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803EC7F4;
    }
}

loc_803EC7E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
}

loc_803EC7F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EC7F4:
{
    r29 = (r5 + -1);
}

loc_803EC7FC:
{
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(39))) {
        goto loc_803EDEF8;
    }
}

loc_803EC800:
{
    r0 = MemoryInline::FlatRead8((r28 + 118));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EC80C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EC8AC;
    }
}

loc_803EC810:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_12 & 134217727);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_13 & 134217727);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = (r29 * 124);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 1348), r29);
    r0 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWrite8((r3 + 1468), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r3 + 1469), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_803EC858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC884;
    }
}

loc_803EC85C:
{
    r0 = MemoryInline::FlatRead8((r1 + 13));
}

loc_803EC864:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EC884;
    }
}

loc_803EC868:
{
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -3684));
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_803EC878:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_803EC884;
    }
}

loc_803EC87C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + -3684), r0);
}

loc_803EC884:
{
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC88C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC8AC;
    }
}

loc_803EC890:
{
    r3 = r31;
    r4 = 37;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 8);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC8ACu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_1A156 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_1A156);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_1A156 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC8AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 20));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EC8B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EC928;
    }
}

loc_803EC8BC:
{
    MemoryInline::FlatWriteRam32((r1 + 560), r29);
    r3 = (r1 + 564);
    r4 = (r28 + 20);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 627), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r1 + 628);
    r5 = r30;
    ctx->lr = 0x803EC8E8u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_1AC8C = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_1AC8C);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_1AC8C >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r29 * 124);
    r3 = (r31 + r0);
    r3 = (r3 + 1352);
    r4 = (r1 + 564);
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 977));
}

loc_803EC908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EC928;
    }
}

loc_803EC90C:
{
    r3 = r31;
    r4 = 38;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 560);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EC928u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_1B34B = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_1B34B);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_1B34B >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803EC928:
{
    r3 = r31;
    r0 = (r29 * 124);
    r4 = (r31 + r0);
    r4 = (r4 + 1432);
    r5 = r30;
    ctx->lr = 0x803EC940u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_1BC6B = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_1BC6B);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_1BC6B >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_803EDEF8;
}

loc_803EC944:
{
    r3 = (r3 + 458752);
    r3 = (r3 + -8156);
    r4 = 3;
    r5 = (r8 + 8);
    r6 = 16;
    ctx->lr = 0x803EC95Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DFA04u>(&func_803DFA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DFA04_1C18A = func_803DFA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFA04_1C18A);
        r4 = static_cast<uint32_t>(regargs_result_803DFA04_1C18A >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFA04u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r27 = 0;
    r3 = (r31 + 458752);
    MemoryInline::FlatWrite32((r3 + -8092), r27);
    MemoryInline::FlatWrite8((r3 + -8088), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + -8024), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + -7960), static_cast<uint8_t>(r27));
    r3 = (r26 + 130);
    r4 = (r13 + -21728);
    if constexpr (KnownRegArgsCpuCall<0x8045FED8u>(&func_8045FED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FED8_1CB95 = func_8045FED8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FED8_1CB95);
        r4 = static_cast<uint32_t>(regargs_result_8045FED8_1CB95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r23 = r3;
    r25 = (r31 + 458752);
    goto loc_803ECA08;
}

loc_803EC98C:
{
    r22 = MemoryInline::FlatRead32((r25 + -8092));
}

loc_803EC994:
{
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(3))) {
        goto loc_803ECA10;
    }
}

loc_803EC998:
{
    r3 = r23;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1D090 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1D090);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1D090 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803EC9A4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(63))) {
        goto loc_803EC9B8;
    }
}

loc_803EC9A8:
{
    r3 = r23;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1D398 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1D398);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1D398 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r24 = r3;
    goto loc_803EC9BC;
}

loc_803EC9B8:
{
    r24 = 63;
}

loc_803EC9BC:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(6));
    r0 = (r0_rot_16 & -64);
    r3 = (r25 + r0);
    r3 = (r3 + -8088);
    r4 = r23;
    r5 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r25 + -8092));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r4 = (r4_rot_2 & -64);
    r3 = (r24 + r31);
    r3 = (r3 + 458752);
    r0 = (r3 + -8088);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r25 + -8092));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r25 + -8092), r0);
    r3 = 0;
    r4 = (r13 + -21728);
    if constexpr (KnownRegArgsCpuCall<0x8045FED8u>(&func_8045FED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FED8_1D9E0 = func_8045FED8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FED8_1D9E0);
        r4 = static_cast<uint32_t>(regargs_result_8045FED8_1D9E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r23 = r3;
}

loc_803ECA08:
{
}

loc_803ECA0C:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_803EC98C;
    }
}

loc_803ECA10:
{
    r0 = MemoryInline::FlatRead32((r31 + 848));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r31 + 848), r0);
    goto loc_803EDEF8;
}

loc_803ECA20:
{
    r4 = (r3 + 1228);
    r5 = (r8 + 4);
    r6 = (r8 + 580);
    ctx->lr = 0x803ECA30u;
    if constexpr (KnownRegArgsCpuCall<0x803EA890u>(&func_803EA890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_803EA890_1E038 = func_803EA890_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803EA890_1E038);
        r4 = static_cast<uint32_t>(regargs_result_803EA890_1E038 >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EA890u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 812));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r31 + 812), r0);
    goto loc_803EDEF8;
}

loc_803ECA40:
{
    r22 = (r8 + 4);
    r23 = (r8 + 580);
    r0 = MemoryInline::FlatRead16((r8 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803ECA50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803ECA70;
    }
}

loc_803ECA54:
{
    r4 = r22;
    ctx->lr = 0x803ECA5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EA7E0u>(&func_803EA7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EA7E0_1E9D4 = func_803EA7E0_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803EA7E0_1E9D4);
        r4 = static_cast<uint32_t>(regargs_result_803EA7E0_1E9D4 >> 32);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EA7E0u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = (r31 + 65536);
    r4 = (r4 + -4036);
    r5 = r23;
    ctx->lr = 0x803ECA70u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_1F17E = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_1F17E);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_1F17E >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_803ECA70:
{
    r0 = MemoryInline::FlatRead32((r22 + 112));
    MemoryInline::FlatWrite32((r31 + 980), r0);
    r0 = MemoryInline::FlatRead32((r31 + 800));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 800), r0);
    r0 = MemoryInline::FlatRead32((r31 + 804));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    goto loc_803EDEF8;
}

loc_803ECAAC:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -3676), r0);
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 1344), r5);
    r6 = (r3 + 1348);
    r4 = -1;
    r0 = 5;
    ctr = r0;
}

loc_803ECAD0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 956u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r4);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r6 + 76), r4);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r6 + 84), r4);
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r6 + 124), r4);
    MemoryInline::WriteResolved8(guest_range_1, 128u, (r6 + 128), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 200u, (r6 + 200), r4);
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r6 + 208), r4);
    MemoryInline::WriteResolved32(guest_range_1, 248u, (r6 + 248), r4);
    MemoryInline::WriteResolved8(guest_range_1, 252u, (r6 + 252), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 324u, (r6 + 324), r4);
    MemoryInline::WriteResolved32(guest_range_1, 332u, (r6 + 332), r4);
    MemoryInline::WriteResolved32(guest_range_1, 372u, (r6 + 372), r4);
    MemoryInline::WriteResolved8(guest_range_1, 376u, (r6 + 376), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 448u, (r6 + 448), r4);
    MemoryInline::WriteResolved32(guest_range_1, 456u, (r6 + 456), r4);
    MemoryInline::WriteResolved32(guest_range_1, 496u, (r6 + 496), r4);
    MemoryInline::WriteResolved8(guest_range_1, 500u, (r6 + 500), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 572u, (r6 + 572), r4);
    MemoryInline::WriteResolved32(guest_range_1, 580u, (r6 + 580), r4);
    MemoryInline::WriteResolved32(guest_range_1, 620u, (r6 + 620), r4);
    MemoryInline::WriteResolved8(guest_range_1, 624u, (r6 + 624), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 696u, (r6 + 696), r4);
    MemoryInline::WriteResolved32(guest_range_1, 704u, (r6 + 704), r4);
    MemoryInline::WriteResolved32(guest_range_1, 744u, (r6 + 744), r4);
    MemoryInline::WriteResolved8(guest_range_1, 748u, (r6 + 748), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 820u, (r6 + 820), r4);
    MemoryInline::WriteResolved32(guest_range_1, 828u, (r6 + 828), r4);
    MemoryInline::WriteResolved32(guest_range_1, 868u, (r6 + 868), r4);
    MemoryInline::WriteResolved8(guest_range_1, 872u, (r6 + 872), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 944u, (r6 + 944), r4);
    MemoryInline::WriteResolved32(guest_range_1, 952u, (r6 + 952), r4);
    r6 = (r6 + 992);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ECAD0;
    }
}

loc_803ECB58:
{
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    goto loc_803EDEF8;
}

loc_803ECB68:
{
}

loc_803ECB6C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803ECBAC;
    }
}

loc_803ECB70:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 268), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 272), r0);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r3);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 124);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ECBA8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ECBAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 1344));
    r0_subfic_ra_1 = r0;
    r0 = (40 - r0_subfic_ra_1);
}

loc_803ECBB8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803ECBC0;
    }
}

loc_803ECBBC:
{
    r27 = r0;
}

loc_803ECBC0:
{
    r28 = 0;
    r24 = 0;
    goto loc_803ECCE8;
}

loc_803ECBCC:
{
    r30 = (r26 + 580);
    r0 = MemoryInline::FlatRead16((r26 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803ECBD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803ECC18;
    }
}

loc_803ECBDC:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 256), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 264), r0);
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 112);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ECC14u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803ECCF0;
}

loc_803ECC18:
{
    r3 = MemoryInline::FlatRead32((r31 + 1344));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 1344), r0);
    r0 = (r3 * 124);
    r29 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r29 + 1348));
}

loc_803ECC34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803ECC70;
    }
}

loc_803ECC38:
{
    r0 = MemoryInline::FlatRead16((r26 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r29 + 1348), r0);
    r0 = MemoryInline::FlatRead8((r26 + 122));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_18 & 134217727);
    MemoryInline::FlatWrite8((r29 + 1468), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 122));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_19 & 134217727);
    MemoryInline::FlatWrite8((r29 + 1469), static_cast<uint8_t>(r0));
}

loc_803ECC70:
{
    r0 = MemoryInline::FlatRead8((r29 + 1352));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803ECC7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ECC94;
    }
}

loc_803ECC80:
{
    r3 = (r29 + 1352);
    r4 = (r26 + 24);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r29 + 1415), static_cast<uint8_t>(r24));
}

loc_803ECC94:
{
    r3 = MemoryInline::FlatRead32((r29 + 1432));
    r0 = (r3 + 65536);
}

loc_803ECCA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803ECCB4;
    }
}

loc_803ECCA4:
{
    r3 = r31;
    r4 = (r29 + 1432);
    r5 = r30;
    ctx->lr = 0x803ECCB4u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_21BCD = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_21BCD);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_21BCD >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_803ECCB4:
{
    r0 = MemoryInline::FlatRead32((r29 + 1424));
}

loc_803ECCBC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803ECCE0;
    }
}

loc_803ECCC0:
{
    r0 = MemoryInline::FlatRead32((r26 + 96));
    MemoryInline::FlatWrite32((r29 + 1416), r0);
    r0 = MemoryInline::FlatRead32((r26 + 92));
    MemoryInline::FlatWrite32((r29 + 1420), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWrite32((r29 + 1424), r0);
    r0 = MemoryInline::FlatRead32((r26 + 112));
    MemoryInline::FlatWrite32((r29 + 1428), r0);
}

loc_803ECCE0:
{
    r26 = (r26 + 840);
    r28 = (r28 + 1);
}

loc_803ECCE8:
{
}

loc_803ECCEC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r27))) {
        goto loc_803ECBCC;
    }
}

loc_803ECCF0:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + -3680), r0);
    r0 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    goto loc_803EDEF8;
}

loc_803ECD10:
{
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    goto loc_803EDEF8;
}

loc_803ECD20:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -3676), r0);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 6452), r0);
    MemoryInline::FlatWrite32((r3 + 6636), r0);
    MemoryInline::FlatWrite32((r3 + 6820), r0);
    MemoryInline::FlatWrite32((r3 + 7004), r0);
    MemoryInline::FlatWrite32((r3 + 7188), r0);
    MemoryInline::FlatWrite32((r3 + 7372), r0);
    MemoryInline::FlatWrite32((r3 + 7556), r0);
    MemoryInline::FlatWrite32((r3 + 7740), r0);
    MemoryInline::FlatWrite32((r3 + 7924), r0);
    MemoryInline::FlatWrite32((r3 + 8108), r0);
    MemoryInline::FlatWrite32((r3 + 8292), r0);
    MemoryInline::FlatWrite32((r3 + 8476), r0);
    MemoryInline::FlatWrite32((r3 + 8660), r0);
    MemoryInline::FlatWrite32((r3 + 8844), r0);
    MemoryInline::FlatWrite32((r3 + 9028), r0);
    MemoryInline::FlatWrite32((r3 + 9212), r0);
    MemoryInline::FlatWrite32((r3 + 9396), r0);
    MemoryInline::FlatWrite32((r3 + 9580), r0);
    MemoryInline::FlatWrite32((r3 + 9764), r0);
    MemoryInline::FlatWrite32((r3 + 9948), r0);
    MemoryInline::FlatWrite32((r3 + 10132), r0);
    MemoryInline::FlatWrite32((r3 + 10316), r0);
    MemoryInline::FlatWrite32((r3 + 10500), r0);
    MemoryInline::FlatWrite32((r3 + 10684), r0);
    MemoryInline::FlatWrite32((r3 + 10868), r0);
    MemoryInline::FlatWrite32((r3 + 11052), r0);
    MemoryInline::FlatWrite32((r3 + 11236), r0);
    MemoryInline::FlatWrite32((r3 + 11420), r0);
    MemoryInline::FlatWrite32((r3 + 11604), r0);
    MemoryInline::FlatWrite32((r3 + 11788), r0);
    MemoryInline::FlatWrite32((r3 + 11972), r0);
    MemoryInline::FlatWrite32((r3 + 12156), r0);
    MemoryInline::FlatWrite32((r3 + 12340), r0);
    MemoryInline::FlatWrite32((r3 + 12524), r0);
    MemoryInline::FlatWrite32((r3 + 12708), r0);
    MemoryInline::FlatWrite32((r3 + 12892), r0);
    MemoryInline::FlatWrite32((r3 + 13076), r0);
    MemoryInline::FlatWrite32((r3 + 13260), r0);
    MemoryInline::FlatWrite32((r3 + 13444), r0);
    MemoryInline::FlatWrite32((r3 + 13628), r0);
    r0 = MemoryInline::FlatRead32((r3 + 820));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 820), r0);
    goto loc_803EDEF8;
}

loc_803ECDE0:
{
}

loc_803ECDE4:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803ECE24;
    }
}

loc_803ECDE8:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 244), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 100);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ECE20u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ECE24:
{
    r0 = MemoryInline::FlatRead32((r3 + 6308));
    r0_subfic_ra_2 = r0;
    r0 = (40 - r0_subfic_ra_2);
}

loc_803ECE30:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803ECE38;
    }
}

loc_803ECE34:
{
    r27 = r0;
}

loc_803ECE38:
{
    r22 = 0;
    r24 = 0;
    goto loc_803ECF1C;
}

loc_803ECE44:
{
    r23 = (r26 + 580);
    r4 = MemoryInline::FlatRead16((r26 + 88));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803ECE50:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_803ECE90;
    }
}

loc_803ECE54:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 232), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 88);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ECE8Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803ECF24;
}

loc_803ECE90:
{
    r0 = MemoryInline::FlatRead32((r31 + 6308));
    r0 = (r0 * 184);
    r3 = (r31 + r0);
    r25 = (r3 + 6312);
    MemoryInline::FlatWrite32((r25 + 64), r4);
    r3 = (r25 + 68);
    r4 = (r26 + 24);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r25 + 131), static_cast<uint8_t>(r24));
    r0 = MemoryInline::FlatRead32((r25 + 140));
}

loc_803ECEC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803ECEE4;
    }
}

loc_803ECEC4:
{
    r0 = MemoryInline::FlatRead32((r26 + 96));
    MemoryInline::FlatWrite32((r25 + 132), r0);
    r0 = MemoryInline::FlatRead32((r26 + 92));
    MemoryInline::FlatWrite32((r25 + 136), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWrite32((r25 + 140), r0);
    r0 = MemoryInline::FlatRead32((r26 + 112));
    MemoryInline::FlatWrite32((r25 + 144), r0);
}

loc_803ECEE4:
{
    r3 = r31;
    r4 = (r25 + 148);
    r5 = r23;
    ctx->lr = 0x803ECEF4u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_24168 = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_24168);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_24168 >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r25;
    r4 = 3;
    r5 = (r26 + 8);
    r6 = 16;
    ctx->lr = 0x803ECF08u;
    if constexpr (KnownRegArgsCpuCall<0x803DFA04u>(&func_803DFA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DFA04_2463D = func_803DFA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFA04_2463D);
        r4 = static_cast<uint32_t>(regargs_result_803DFA04_2463D >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFA04u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = MemoryInline::FlatRead32((r31 + 6308));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 6308), r0);
    r26 = (r26 + 840);
    r22 = (r22 + 1);
}

loc_803ECF1C:
{
}

loc_803ECF20:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803ECE44;
    }
}

loc_803ECF24:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + -3680), r0);
    r0 = MemoryInline::FlatRead32((r31 + 820));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r31 + 820), r0);
    goto loc_803EDEF8;
}

loc_803ECF44:
{
    r0 = MemoryInline::FlatRead32((r3 + 820));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r3 + 820), r0);
    goto loc_803EDEF8;
}

loc_803ECF54:
{
    r4 = r26;
    ctx->lr = 0x803ECF5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EAEA4u>(&func_803EAEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAEA4_253BF = func_803EAEA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAEA4_253BF);
        r4 = static_cast<uint32_t>(regargs_result_803EAEA4_253BF >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAEA4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
}

loc_803ECF60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_803ECFA0;
    }
}

loc_803ECF64:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 220), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 76);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ECF9Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ECFA0:
{
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + -16256), r3);
    r0 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    goto loc_803EDEF8;
}

loc_803ECFC4:
{
    r4 = r26;
    ctx->lr = 0x803ECFCCu;
    if constexpr (KnownRegArgsCpuCall<0x803EAEA4u>(&func_803EAEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAEA4_269C2 = func_803EAEA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAEA4_269C2);
        r4 = static_cast<uint32_t>(regargs_result_803EAEA4_269C2 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAEA4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
}

loc_803ECFD0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ECFD4:
{
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + -16256), r3);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl30_0x8041A358:
{
}

loc_inl30_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl30_0x8041A36C;
    }
}

loc_inl30_0x8041A360:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_inl30_cont_8041A358;
}

loc_inl30_0x8041A36C:
{
    r3 = 0;
}

loc_inl30_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_803ECFEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ECFF0:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl32_0x8041A358:
{
}

loc_inl32_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl32_0x8041A36C;
    }
}

loc_inl32_0x8041A360:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_inl32_cont_8041A358;
}

loc_inl32_0x8041A36C:
{
    r3 = 0;
}

loc_inl32_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -16256));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + -4352));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x803ED014u;
    if constexpr (KnownRegArgsCpuCall<0x803DEDBCu>(&func_803DEDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEDBC_27E23 = func_803DEDBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEDBC_27E23);
        r4 = static_cast<uint32_t>(regargs_result_803DEDBC_27E23 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEDBCu>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803ED018:
{
}

loc_803ED01C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803ED05C;
    }
}

loc_803ED020:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 208), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 64);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ED058u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ED05C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 13672), r0);
    r23 = 0;
    r22 = (r3 + 13676);
}

loc_803ED06C:
{
    r3 = r31;
    r4 = r22;
    ctx->lr = 0x803ED078u;
    if constexpr (KnownRegArgsCpuCall<0x803EABECu>(&func_803EABEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EABEC_28F46 = func_803EABEC_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_803EABEC_28F46;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EABECu>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r31;
    r4 = r23;
    ctx->lr = 0x803ED084u;
    if constexpr (KnownRegArgsCpuCall<0x803EAC64u>(&func_803EAC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EAC64_297CC = func_803EAC64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EAC64_297CC);
        r4 = static_cast<uint32_t>(regargs_result_803EAC64_297CC >> 32);
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
        InvokeDirectCpu<0x803EAC64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r22 = (r22 + 56);
    r23 = (r23 + 1);
}

loc_803ED090:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(100))) {
        goto loc_803ED06C;
    }
}

loc_803ED094:
{
}

loc_803ED098:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(100))) {
        goto loc_803ED0A0;
    }
}

loc_803ED09C:
{
    r27 = 100;
}

loc_803ED0A0:
{
    r22 = 0;
    r24 = 1;
    goto loc_803ED0D8;
}

loc_803ED0AC:
{
    r3 = r31;
    r4 = r26;
    r5 = r26;
    ctx->lr = 0x803ED0BCu;
    if constexpr (KnownRegArgsCpuCall<0x803EAF78u>(&func_803EAF78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAF78_29EFA = func_803EAF78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAF78_29EFA);
        r4 = static_cast<uint32_t>(regargs_result_803EAF78_29EFA >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAF78u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
}

loc_803ED0C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803ED0D0;
    }
}

loc_803ED0C4:
{
    r3 = (r3 + 65536);
    r0 = (r3 + -4152);
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r24));
}

loc_803ED0D0:
{
    r26 = (r26 + 320);
    r22 = (r22 + 1);
}

loc_803ED0D8:
{
}

loc_803ED0DC:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803ED0AC;
    }
}

loc_803ED0E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -4052), r0);
    r0 = MemoryInline::FlatRead32((r31 + 800));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r31 + 800), r0);
    r0 = MemoryInline::FlatRead32((r31 + 804));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r31 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    goto loc_803EDEF8;
}

loc_803ED120:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -3676), r0);
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    goto loc_803EDEF8;
}

loc_803ED13C:
{
}

loc_803ED140:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803ED180;
    }
}

loc_803ED144:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 196), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ED17Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ED180:
{
    r4 = (r3 + 458752);
    r0 = MemoryInline::FlatRead32((r4 + -17360));
    r0_subfic_ra_3 = r0;
    r0 = (100 - r0_subfic_ra_3);
}

loc_803ED190:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803ED198;
    }
}

loc_803ED194:
{
    r27 = r0;
}

loc_803ED198:
{
    r22 = 0;
    r24 = (r3 + 458752);
    goto loc_803ED1F4;
}

loc_803ED1A4:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r24 + -17360));
    r0 = (r0 * 92);
    r4 = (r24 + r0);
    r4 = (r4 + -17356);
    r5 = r26;
    r6 = (r26 + 8);
    ctx->lr = 0x803ED1C4u;
    if constexpr (KnownRegArgsCpuCall<0x803EAD48u>(&func_803EAD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAD48_2B98B = func_803EAD48_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_803EAD48_2B98B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAD48u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r24 + -17360));
    r0 = (r0 * 92);
    r4 = (r24 + r0);
    r4 = (r4 + -17300);
    r5 = (r26 + 320);
    ctx->lr = 0x803ED1E0u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_2C28D = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_2C28D);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_2C28D >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r24 + -17360));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r24 + -17360), r0);
    r26 = (r26 + 580);
    r22 = (r22 + 1);
}

loc_803ED1F4:
{
}

loc_803ED1F8:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803ED1A4;
    }
}

loc_803ED1FC:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + -3680), r0);
    r0 = MemoryInline::FlatRead32((r31 + 824));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r31 + 824), r0);
    goto loc_803EDEF8;
}

loc_803ED21C:
{
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    goto loc_803EDEF8;
}

loc_803ED22C:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -3676), r0);
    r0 = MemoryInline::FlatRead32((r3 + 836));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r3 + 836), r0);
    goto loc_803EDEF8;
}

loc_803ED248:
{
}

loc_803ED24C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803ED28C;
    }
}

loc_803ED250:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 184), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 40);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803ED288u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803ED28C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -3668));
    r0_subfic_ra_4 = r0;
    r0 = (40 - r0_subfic_ra_4);
}

loc_803ED29C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803ED2A4;
    }
}

loc_803ED2A0:
{
    r27 = r0;
}

loc_803ED2A4:
{
    r28 = 0;
    r25 = 0;
    r29 = (r3 + 65536);
    r24 = 100;
    goto loc_803ED3CC;
}

loc_803ED2B8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r29 + -3668));
    r0 = (r0 * 9488);
    r4 = (r29 + r0);
    r4 = (r4 + -3664);
    r5 = (r26 + 12);
    r6 = (r26 + 588);
    ctx->lr = 0x803ED2D8u;
    if constexpr (KnownRegArgsCpuCall<0x803EA924u>(&func_803EA924)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EA924_2D48E = func_803EA924_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EA924_2D48E);
        r4 = static_cast<uint32_t>(regargs_result_803EA924_2D48E >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EA924u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r21 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead32((r29 + -3668));
    r0 = (r0 * 9488);
    r3 = (r29 + r0);
    r30 = (r3 + -3380);
    r0 = MemoryInline::FlatRead32(r26);
}

loc_803ED2F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_803ED2FC;
    }
}

loc_803ED2F8:
{
    MemoryInline::FlatWrite32(r26, r24);
}

loc_803ED2FC:
{
    r20 = 0;
    r23 = (r30 + 4);
    r22 = (r30 + 5604);
    goto loc_803ED340;
}

loc_803ED30C:
{
    r3 = r31;
    r4 = r23;
    r5 = r21;
    r6 = (r21 + 8);
    ctx->lr = 0x803ED320u;
    if constexpr (KnownRegArgsCpuCall<0x803EAD48u>(&func_803EAD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAD48_2E02C = func_803EAD48_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_803EAD48_2E02C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAD48u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r31;
    r4 = r22;
    r5 = (r21 + 320);
    ctx->lr = 0x803ED330u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_2E8C8 = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_2E8C8);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_2E8C8 >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r21 = (r21 + 580);
    r23 = (r23 + 56);
    r22 = (r22 + 36);
    r20 = (r20 + 1);
}

loc_803ED340:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_803ED348:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_803ED30C;
    }
}

loc_803ED34C:
{
    r0 = (r20 * 56);
    r4 = (r30 + r0);
    r3 = (100 - r20);
}

loc_803ED35C:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(100))) {
        goto loc_803ED3B0;
    }
}

loc_803ED360:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_26 & 536870911);
}

loc_803ED368:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803ED3A0;
    }
}

loc_803ED370:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 57), 0, 393u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + 57), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 56u, (r4 + 113), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 112u, (r4 + 169), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 168u, (r4 + 225), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 224u, (r4 + 281), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 280u, (r4 + 337), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 336u, (r4 + 393), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 392u, (r4 + 449), static_cast<uint8_t>(r25));
    r4 = (r4 + 448);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ED370;
    }
}

loc_803ED398:
{
    r3 = (r3 & 7);
}

loc_803ED39C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ED3B0;
    }
}

loc_803ED3A0:
{
    ctr = r3;
}

loc_803ED3A4:
{
    MemoryInline::FlatWrite8((r4 + 57), static_cast<uint8_t>(r25));
    r4 = (r4 + 56);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ED3A4;
    }
}

loc_803ED3B0:
{
    r0 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = MemoryInline::FlatRead32((r29 + -3668));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + -3668), r0);
    r26 = (r26 + 848);
    r28 = (r28 + 1);
}

loc_803ED3CC:
{
}

loc_803ED3D0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r27))) {
        goto loc_803ED2B8;
    }
}

loc_803ED3D4:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + -3680), r0);
    r0 = MemoryInline::FlatRead32((r31 + 836));
    r0 = (r0 | 33554432);
    MemoryInline::FlatWrite32((r31 + 836), r0);
    goto loc_803EDEF8;
}

loc_803ED3F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 836));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r3 + 836), r0);
    goto loc_803EDEF8;
}

loc_803ED404:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    r0 = MemoryInline::FlatRead8((r8 + 10));
}

loc_803ED410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED414:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_803ED41C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(64))) {
        goto loc_803ED584;
    }
}

loc_803ED420:
{
    r3 = (r1 + 1768);
    ctx->lr = 0x803ED428u;
    if constexpr (KnownRegArgsCpuCall<0x803EDFF8u>(&func_803EDFF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EDFF8_2FA79 = func_803EDFF8_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EDFF8_2FA79);
        r4 = static_cast<uint32_t>(regargs_result_803EDFF8_2FA79 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EDFF8u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r28 = (r1 + 1800);
    r3 = (r1 + 1768);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803ED440u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_30436 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_30436);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_30436 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r28;
    r4 = 0;
    r5 = 1032;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r26 + 10));
}

loc_803ED458:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65))) {
        goto loc_803ED464;
    }
}

loc_803ED45C:
{
    r0 = 65;
    MemoryInline::FlatWrite8((r26 + 10), static_cast<uint8_t>(r0));
}

loc_803ED464:
{
    r9 = 1;
    r6 = 16;
    r4 = 0x80600000u;
    goto loc_803ED54C;
}

loc_803ED474:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    r7 = (r0 + r6);
    r8 = MemoryInline::FlatRead8(r7);
}

loc_803ED484:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(64))) {
        goto loc_803ED544;
    }
}

loc_803ED488:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_29 & -16);
    r5 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 1));
}

loc_803ED498:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_803ED544;
    }
}

loc_803ED49C:
{
    r3 = (r4 + -14416);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803ED544u:
        goto loc_803ED544;
        break;
    case 0x803ED4B0u:
        goto loc_803ED4B0;
        break;
    case 0x803ED4BCu:
        goto loc_803ED4BC;
        break;
    case 0x803ED4C8u:
        goto loc_803ED4C8;
        break;
    case 0x803ED4D4u:
        goto loc_803ED4D4;
        break;
    case 0x803ED4E8u:
        goto loc_803ED4E8;
        break;
    case 0x803ED4F4u:
        goto loc_803ED4F4;
        break;
    case 0x803ED500u:
        goto loc_803ED500;
        break;
    case 0x803ED50Cu:
        goto loc_803ED50C;
        break;
    case 0x803ED518u:
        goto loc_803ED518;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803ED4B0:
{
    r0 = MemoryInline::FlatRead8((r7 + 8));
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r0));
    goto loc_803ED528;
}

loc_803ED4BC:
{
    r0 = MemoryInline::FlatRead16((r7 + 8));
    MemoryInline::FlatWrite16((r5 + 16), static_cast<uint16_t>(r0));
    goto loc_803ED528;
}

loc_803ED4C8:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_803ED528;
}

loc_803ED4D4:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r3 = MemoryInline::FlatRead32((r7 + 12));
    MemoryInline::FlatWrite32((r5 + 20), r3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_803ED528;
}

loc_803ED4E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    goto loc_803ED528;
}

loc_803ED4F4:
{
    f0.d = MemoryInline::FlatReadFloat64((r7 + 8));
    MemoryInline::FlatWriteFloat64((r5 + 16), f0.d);
    goto loc_803ED528;
}

loc_803ED500:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_803ED528;
}

loc_803ED50C:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_803ED528;
}

loc_803ED518:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead16((r7 + 12));
    MemoryInline::FlatWrite16((r5 + 20), static_cast<uint16_t>(r0));
}

loc_803ED528:
{
    r0 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 1800));
}

loc_803ED538:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r8))) {
        goto loc_803ED544;
    }
}

loc_803ED53C:
{
    r0 = (r8 + 1);
    MemoryInline::FlatWriteRam32((r1 + 1800), r0);
}

loc_803ED544:
{
    r6 = (r6 + 16);
    r9 = (r9 + 1);
}

loc_803ED54C:
{
    r0 = MemoryInline::FlatRead8((r26 + 10));
}

loc_803ED554:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_803ED474;
    }
}

loc_803ED558:
{
    r3 = r31;
    r4 = 17;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 1768);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803ED574u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_32247 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_32247);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_32247 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 1768);
    r4 = -1;
    ctx->lr = 0x803ED580u;
    if constexpr (KnownRegArgsCpuCall<0x803EDF9Cu>(&func_803EDF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EDF9C_32CD0 = func_803EDF9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EDF9C_32CD0);
        r4 = static_cast<uint32_t>(regargs_result_803EDF9C_32CD0 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EDF9Cu>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803ED584:
{
}

loc_803ED588:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EDEF8;
    }
}

loc_803ED58C:
{
    r27 = MemoryInline::FlatRead8((r4 + 8));
    r4 = r26;
    ctx->lr = 0x803ED598u;
    if constexpr (KnownRegArgsCpuCall<0x803EAEA4u>(&func_803EAEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAEA4_33B51 = func_803EAEA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAEA4_33B51);
        r4 = static_cast<uint32_t>(regargs_result_803EAEA4_33B51 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAEA4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16260));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803ED5AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED5B0:
{
}

loc_803ED5B4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED5B8:
{
    r0 = MemoryInline::FlatRead8((r26 + 10));
}

loc_803ED5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803ED610;
    }
}

loc_803ED5C4:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_803ED5D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803EDEF8;
    }
}

loc_803ED5D4:
{
    r20 = MemoryInline::FlatRead32((r3 + 24));
}

loc_803ED5DC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(5))) {
        goto loc_803ED5EC;
    }
}

loc_803ED5E0:
{
}

loc_803ED5E4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(4))) {
        goto loc_803ED5FC;
    }
}

loc_803ED5E8:
{
    goto loc_803EDEF8;
}

loc_803ED5EC:
{
    r3 = r31;
    r4 = r28;
    r5 = 0;
    ctx->lr = 0x803ED5FCu;
    if constexpr (KnownRegArgsCpuCall<0x803EEB5Cu>(&func_803EEB5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EEB5C_34CE5 = func_803EEB5C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EEB5C_34CE5);
        r4 = static_cast<uint32_t>(regargs_result_803EEB5C_34CE5 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EEB5Cu>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803ED5FC:
{
    r3 = r31;
    r4 = r28;
    r5 = r20;
    // inline leaf 0x803EEA50 (22 guest instruction(s))
}

loc_inl36_0x803EEA50:
{
    r0 = (r4 & 255);
}

loc_inl36_0x803EEA58:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_inl36_return;
    }
}

loc_inl36_0x803EEA5C:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r7 * 56);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 13729));
}

loc_inl36_0x803EEA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl36_return;
    }
}

loc_inl36_0x803EEA74:
{
    r4 = (r5 & 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r0 = (r3 + 65536);
    r4 = (r0 + r7);
    MemoryInline::FlatWrite8((r4 + -16252), static_cast<uint8_t>(r6));
    r3 = (r5 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_32 & 1);
    MemoryInline::FlatWrite8((r4 + -16152), static_cast<uint8_t>(r0));
    goto loc_inl36_cont_803EEA50;
}

loc_inl36_return:
{
}

loc_inl36_cont_803EEA50:
{
    // end of inlined leaf 0x803EEA50
    goto loc_803EDEF8;
}

loc_803ED610:
{
}

loc_803ED614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803ED740;
    }
}

loc_803ED618:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 58u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r3 + 16));
}

loc_803ED624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803EDEF8;
    }
}

loc_803ED628:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r3 + 32));
}

loc_803ED630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803EDEF8;
    }
}

loc_803ED634:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 32u, (r3 + 48));
}

loc_803ED63C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803EDEF8;
    }
}

loc_803ED640:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 48u, (r3 + 64));
}

loc_803ED648:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_803EDEF8;
    }
}

loc_803ED64C:
{
    r20 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 24));
    r21 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r3 + 40));
    r22 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r3 + 56));
    r23 = MemoryInline::ReadResolved16(guest_range_2, 56u, (r3 + 72));
}

loc_803ED660:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(6))) {
        goto loc_803ED670;
    }
}

loc_803ED664:
{
}

loc_803ED668:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(7))) {
        goto loc_803ED680;
    }
}

loc_803ED66C:
{
    goto loc_803EDEF8;
}

loc_803ED670:
{
    r3 = r31;
    r4 = r28;
    r5 = 0;
    ctx->lr = 0x803ED680u;
    if constexpr (KnownRegArgsCpuCall<0x803EEC08u>(&func_803EEC08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EEC08_36239 = func_803EEC08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EEC08_36239);
        r4 = static_cast<uint32_t>(regargs_result_803EEC08_36239 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EEC08u>(ctx);
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
        f0 = ctx->fpr[0];
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
}

loc_803ED680:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r3 = (r3_rot_1 & -16);
    r0 = (r31 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + -15952), r20);
    MemoryInline::FlatWrite32((r3 + -15948), r21);
    MemoryInline::FlatWrite32((r3 + -15944), r22);
    MemoryInline::FlatWrite16((r3 + -15940), static_cast<uint16_t>(r23));
    r26 = (r0 + r28);
    r0 = MemoryInline::FlatRead8((r26 + -4352));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803ED6AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED6B0:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl38_0x8041A358:
{
}

loc_inl38_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl38_0x8041A36C;
    }
}

loc_inl38_0x8041A360:
{
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    goto loc_inl38_cont_8041A358;
}

loc_inl38_0x8041A36C:
{
    r3 = 0;
}

loc_inl38_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_803ED6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED6C4:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl40_0x8041A358:
{
}

loc_inl40_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl40_0x8041A36C;
    }
}

loc_inl40_0x8041A360:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    goto loc_inl40_cont_8041A358;
}

loc_inl40_0x8041A36C:
{
    r3 = 0;
}

loc_inl40_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r0 = (r28 * 56);
    r4 = (r31 + r0);
    r4 = (r4 + 13676);
    r5 = r20;
    ctx->lr = 0x803ED6E4u;
    if constexpr (KnownRegArgsCpuCall<0x803DEB9Cu>(&func_803DEB9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEB9C_374C2 = func_803DEB9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEB9C_374C2);
        r4 = static_cast<uint32_t>(regargs_result_803DEB9C_374C2 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEB9Cu>(ctx);
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
        f0 = ctx->fpr[0];
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
    r25 = r3;
}

loc_803ED6EC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED6F0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r26 + -4352), static_cast<uint8_t>(r0));
    r0 = 2;
    r4 = (r31 + 65536);
    r3 = (r4 + r28);
    MemoryInline::FlatWrite8((r3 + -4252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + -16256));
}

loc_803ED710:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED714:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl42_0x8041A358:
{
}

loc_inl42_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl42_0x8041A36C;
    }
}

loc_inl42_0x8041A360:
{
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    goto loc_inl42_cont_8041A358;
}

loc_inl42_0x8041A36C:
{
    r3 = 0;
}

loc_inl42_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_803ED724:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED728:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl44_0x8041A358:
{
}

loc_inl44_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl44_0x8041A36C;
    }
}

loc_inl44_0x8041A360:
{
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & -4);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    goto loc_inl44_cont_8041A358;
}

loc_inl44_0x8041A36C:
{
    r3 = 0;
}

loc_inl44_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    ctx->lr = 0x803ED73Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DEDBCu>(&func_803DEDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEDBC_386EE = func_803DEDBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEDBC_386EE);
        r4 = static_cast<uint32_t>(regargs_result_803DEDBC_386EE >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEDBCu>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803ED740:
{
}

loc_803ED744:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803EDEF8;
    }
}

loc_803ED748:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_803ED754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_803EDEF8;
    }
}

loc_803ED758:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_803ED760:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_803EDEF8;
    }
}

loc_803ED764:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
}

loc_803ED76C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803EDEF8;
    }
}

loc_803ED770:
{
    r28 = MemoryInline::FlatRead32((r3 + 24));
    r26 = MemoryInline::FlatRead32((r3 + 40));
    r25 = MemoryInline::FlatRead8((r3 + 56));
    r3 = r31;
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x803EEE30u>(&func_803EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_803EEE30_3934B = func_803EEE30_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803EEE30_3934B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r29 = r3;
    r3 = r31;
    r4 = r26;
    if constexpr (KnownRegArgsCpuCall<0x803EEE30u>(&func_803EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_803EEE30_396EB = func_803EEE30_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803EEE30_396EB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_803ED7A0:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(8))) {
        goto loc_803EDEF8;
    }
}

loc_803ED7A4:
{
}

loc_803ED7A8:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(2))) {
        goto loc_803ED950;
    }
}

loc_803ED7AC:
{
    MemoryInline::FlatWrite32((r31 + 1080), r28);
    MemoryInline::FlatWrite32((r31 + 1084), r26);
    r7 = 0;
    MemoryInline::FlatWrite8((r31 + 1088), static_cast<uint8_t>(r7));
    r6 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r6 + -16260));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_42 & -16);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + -15952));
}

loc_803ED7D8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_803ED870;
    }
}

loc_803ED7DC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803ED7E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803ED84C;
    }
}

loc_803ED7E8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803ED7F0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803ED84C;
    }
}

loc_803ED7F4:
{
    r0 = (r5 * 100);
    r0 = (r6 + r0);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + -14352));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803ED80C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803EDEF8;
    }
}

loc_803ED810:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803ED818:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED81C:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r5 = (r31 + 65536);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_43 & -16);
    r4 = (r5 + r0);
    r4 = (r4 + -15952);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_44 & -16);
    r5 = (r5 + r0);
    r5 = (r5 + -15952);
    ctx->lr = 0x803ED848u;
    if constexpr (KnownRegArgsCpuCall<0x8041D9C4u>(&func_8041D9C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8041D9C4_3A4E4 = func_8041D9C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041D9C4_3A4E4);
        r4 = static_cast<uint32_t>(regargs_result_8041D9C4_3A4E4 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041D9C4u>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803ED84C:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 1080));
    r5 = MemoryInline::FlatRead32((r31 + 1084));
    r6 = 3;
    ctx->lr = 0x803ED860u;
    if constexpr (KnownRegArgsCpuCall<0x803EED04u>(&func_803EED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EED04_3AEF4 = func_803EED04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EED04_3AEF4);
        r4 = static_cast<uint32_t>(regargs_result_803EED04_3AEF4 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EED04u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1080), r0);
    MemoryInline::FlatWrite32((r31 + 1084), r0);
    goto loc_803EDEF8;
}

loc_803ED870:
{
}

loc_803ED874:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_803ED928;
    }
}

loc_803ED878:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803ED880:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_803ED904;
    }
}

loc_803ED884:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803ED88C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803ED904;
    }
}

loc_803ED890:
{
    r0 = (r5 * 100);
    r3 = (r6 + r0);
    r3 = (r3 + -14352);
    r3_addr_16 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_16);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803ED8A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_803ED8E8;
    }
}

loc_803ED8AC:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803ED8B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED8B8:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r5 = (r31 + 65536);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_45 & -16);
    r4 = (r5 + r0);
    r4 = (r4 + -15952);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_46 & -16);
    r5 = (r5 + r0);
    r5 = (r5 + -15952);
    ctx->lr = 0x803ED8E4u;
    if constexpr (KnownRegArgsCpuCall<0x8041D9C4u>(&func_8041D9C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8041D9C4_3BFC4 = func_8041D9C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041D9C4_3BFC4);
        r4 = static_cast<uint32_t>(regargs_result_8041D9C4_3BFC4 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041D9C4u>(ctx);
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
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803ED8E8:
{
    r3 = r31;
    r4 = r28;
    r5 = r26;
    ctx->lr = 0x803ED8F8u;
    if constexpr (KnownRegArgsCpuCall<0x803EED04u>(&func_803EED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EED04_3C982 = func_803EED04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EED04_3C982);
        r4 = static_cast<uint32_t>(regargs_result_803EED04_3C982 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EED04u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1088), static_cast<uint8_t>(r0));
    goto loc_803EDEF8;
}

loc_803ED904:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 1080));
    r5 = MemoryInline::FlatRead32((r31 + 1084));
    r6 = 3;
    ctx->lr = 0x803ED918u;
    if constexpr (KnownRegArgsCpuCall<0x803EED04u>(&func_803EED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EED04_3D3E4 = func_803EED04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EED04_3D3E4);
        r4 = static_cast<uint32_t>(regargs_result_803EED04_3D3E4 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EED04u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1080), r0);
    MemoryInline::FlatWrite32((r31 + 1084), r0);
    goto loc_803EDEF8;
}

loc_803ED928:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803ED930:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803ED938;
    }
}

loc_803ED934:
{
    MemoryInline::FlatWrite32((r31 + 1080), r7);
}

loc_803ED938:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803ED940:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803ED944:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1084), r0);
    goto loc_803EDEF8;
}

loc_803ED950:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803ED958:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_803ED9FC;
    }
}

loc_803ED95C:
{
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803ED964:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_803ED9FC;
    }
}

loc_803ED968:
{
}

loc_803ED96C:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(3))) {
        goto loc_803ED998;
    }
}

loc_803ED970:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    r4 = (r31 + 65536);
    r0 = (r7 * 100);
    r0 = (r4 + r0);
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + -14352), static_cast<uint8_t>(r5));
    r0 = (r6 * 100);
    r0 = (r4 + r0);
    r3 = (r0 + r7);
    MemoryInline::FlatWrite8((r3 + -14352), static_cast<uint8_t>(r5));
}

loc_803ED998:
{
}

loc_803ED99C:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(4))) {
        goto loc_803ED9FC;
    }
}

loc_803ED9A0:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16260));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_47 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -15952));
}

loc_803ED9BC:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_803ED9DC;
    }
}

loc_803ED9C0:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803ED9C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ED9FC;
    }
}

loc_803ED9CC:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r4 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8041C9A8u>(&func_8041C9A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8041C9A8_3E6C3 = func_8041C9A8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8041C9A8_3E6C3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041C9A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    goto loc_803ED9FC;
}

loc_803ED9DC:
{
}

loc_803ED9E0:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_803ED9FC;
    }
}

loc_803ED9E4:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803ED9EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ED9FC;
    }
}

loc_803ED9F0:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8041C9A8u>(&func_8041C9A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8041C9A8_3EC3D = func_8041C9A8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8041C9A8_3EC3D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041C9A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_803ED9FC:
{
}

loc_803EDA00:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDA04:
{
}

loc_803EDA08:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(4))) {
        goto loc_803EDEF8;
    }
}

loc_803EDA0C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1080), r0);
    MemoryInline::FlatWrite32((r31 + 1084), r0);
    goto loc_803EDEF8;
}

loc_803EDA1C:
{
    r3 = (r1 + 448);
    ctx->lr = 0x803EDA24u;
    if constexpr (KnownRegArgsCpuCall<0x803EDF6Cu>(&func_803EDF6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EDF6C_3F1DC = func_803EDF6C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EDF6C_3F1DC);
        r4 = static_cast<uint32_t>(regargs_result_803EDF6C_3F1DC >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EDF6Cu>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 448);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803EDA38u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_3FB81 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_3FB81);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_3FB81 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 480), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 484), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 488), f0.d);
    r0 = MemoryInline::FlatRead32((r26 + 20));
    MemoryInline::FlatWriteRam32((r1 + 492), r0);
    r0 = MemoryInline::FlatRead32((r26 + 24));
    MemoryInline::FlatWriteRam32((r1 + 496), r0);
    r0 = MemoryInline::FlatRead32((r26 + 28));
    MemoryInline::FlatWriteRam32((r1 + 500), r0);
    r3 = r31;
    r4 = 14;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 448);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EDA84u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_407D0 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_407D0);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_407D0 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 448);
    r4 = -1;
    ctx->lr = 0x803EDA90u;
    if constexpr (KnownRegArgsCpuCall<0x803EDF10u>(&func_803EDF10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EDF10_41258 = func_803EDF10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EDF10_41258);
        r4 = static_cast<uint32_t>(regargs_result_803EDF10_41258 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EDF10u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EDA94:
{
    r0 = MemoryInline::FlatRead32((r3 + 828));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32((r3 + 828), r0);
    goto loc_803EDEF8;
}

loc_803EDAA4:
{
    r3 = (r1 + 408);
    ctx->lr = 0x803EDAACu;
    if constexpr (KnownRegArgsCpuCall<0x803EB9D8u>(&func_803EB9D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EB9D8_41FB2 = func_803EB9D8_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EB9D8_41FB2);
        r4 = static_cast<uint32_t>(regargs_result_803EB9D8_41FB2 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EB9D8u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 408);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803EDAC0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_42957 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_42957);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_42957 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = MemoryInline::FlatRead32((r26 + 56));
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = r31;
    r4 = 13;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 408);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EDAE4u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_43398 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_43398);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_43398 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 408);
    r4 = -1;
    ctx->lr = 0x803EDAF0u;
    if constexpr (KnownRegArgsCpuCall<0x803EB97Cu>(&func_803EB97C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EB97C_43E20 = func_803EB97C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EB97C_43E20);
        r4 = static_cast<uint32_t>(regargs_result_803EB97C_43E20 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EB97Cu>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EDAF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 832));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 832), r0);
    goto loc_803EDEF8;
}

loc_803EDB04:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EDB10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDB14:
{
    r0 = MemoryInline::FlatRead8((r8 + 264));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EDB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDB24:
{
    r3 = (r1 + 1192);
    ctx->lr = 0x803EDB2Cu;
    if constexpr (KnownRegArgsCpuCall<0x803E6E3Cu>(&func_803E6E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E6E3C_44D57 = func_803E6E3C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E6E3C_44D57);
        r4 = static_cast<uint32_t>(regargs_result_803E6E3C_44D57 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E6E3Cu>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 1192);
    r4 = 3;
    r5 = (r26 + 264);
    r6 = 8;
    ctx->lr = 0x803EDB40u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_45705 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_45705);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_45705 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 1224);
    r4 = (r26 + 272);
    r5 = 19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
    MemoryInline::FlatWriteRam8((r1 + 1243), static_cast<uint8_t>(r25));
    r3 = (r1 + 1244);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 1245);
    r4 = r26;
    r5 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam8((r1 + 1500), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 1757), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead32((r26 + 256));
    MemoryInline::FlatWriteRam32((r1 + 1760), r0);
    r0 = MemoryInline::FlatRead32((r26 + 260));
    MemoryInline::FlatWriteRam32((r1 + 1764), r0);
    r3 = r31;
    r4 = 16;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 1192);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EDBACu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_464EC = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_464EC);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_464EC >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 1192);
    r4 = -1;
    ctx->lr = 0x803EDBB8u;
    if constexpr (KnownRegArgsCpuCall<0x803E6DE0u>(&func_803E6DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E6DE0_46F75 = func_803E6DE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E6DE0_46F75);
        r4 = static_cast<uint32_t>(regargs_result_803E6DE0_46F75 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E6DE0u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EDBBC:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -3676), r0);
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    goto loc_803EDEF8;
}

loc_803EDBD8:
{
}

loc_803EDBDC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803EDC1C;
    }
}

loc_803EDBE0:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 172), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 28);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803EDC18u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803EDC1C:
{
    r4 = (r3 + 458752);
    r0 = MemoryInline::FlatRead32((r4 + -17360));
    r0_subfic_ra_5 = r0;
    r0 = (100 - r0_subfic_ra_5);
}

loc_803EDC2C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803EDC34;
    }
}

loc_803EDC30:
{
    r27 = r0;
}

loc_803EDC34:
{
    r20 = 0;
    r25 = (r3 + 458752);
    goto loc_803EDC90;
}

loc_803EDC40:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r25 + -17360));
    r0 = (r0 * 92);
    r4 = (r25 + r0);
    r4 = (r4 + -17356);
    r5 = r26;
    r6 = (r26 + 8);
    ctx->lr = 0x803EDC60u;
    if constexpr (KnownRegArgsCpuCall<0x803EAD48u>(&func_803EAD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAD48_48668 = func_803EAD48_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_803EAD48_48668;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAD48u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r25 + -17360));
    r0 = (r0 * 92);
    r4 = (r25 + r0);
    r4 = (r4 + -17300);
    r5 = (r26 + 560);
    ctx->lr = 0x803EDC7Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EB6DC_48F6A = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_48F6A);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_48F6A >> 32);
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
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r25 + -17360));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r25 + -17360), r0);
    r26 = (r26 + 820);
    r20 = (r20 + 1);
}

loc_803EDC90:
{
}

loc_803EDC94:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r27))) {
        goto loc_803EDC40;
    }
}

loc_803EDC98:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + -3680), r0);
    r0 = MemoryInline::FlatRead32((r31 + 840));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r31 + 840), r0);
    goto loc_803EDEF8;
}

loc_803EDCB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    goto loc_803EDEF8;
}

loc_803EDCC8:
{
    r4 = r26;
    ctx->lr = 0x803EDCD0u;
    if constexpr (KnownRegArgsCpuCall<0x803EAEA4u>(&func_803EAEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EAEA4_4981D = func_803EAEA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAEA4_4981D);
        r4 = static_cast<uint32_t>(regargs_result_803EAEA4_4981D >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAEA4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
}

loc_803EDCD4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDCD8:
{
    r0 = MemoryInline::FlatRead32((r26 + 272));
}

loc_803EDCE0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_803EDEF8;
    }
}

loc_803EDCE4:
{
    r5 = (256 - r0);
    r4 = MemoryInline::FlatRead32((r26 + 268));
}

loc_803EDCF0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_803EDCF8;
    }
}

loc_803EDCF4:
{
    r5 = r4;
}

loc_803EDCF8:
{
    r6 = (r0 + r5);
    r4 = (r3 * 260);
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 22876));
}

loc_803EDD0C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_803EDD14;
    }
}

loc_803EDD10:
{
    MemoryInline::FlatWrite32((r3 + 22876), r6);
}

loc_803EDD14:
{
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead32((r26 + 272));
    r3 = (r3 + r0);
    r3 = (r3 + 22880);
    r4 = (r26 + 9);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803EDEF8;
}

loc_803EDD30:
{
    r0 = 64;
    MemoryInline::FlatWrite32((r3 + 856), r0);
    goto loc_803EDEF8;
}

loc_803EDD3C:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EDD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDD4C:
{
    r3 = (r1 + 372);
    ctx->lr = 0x803EDD54u;
    if constexpr (KnownRegArgsCpuCall<0x803E1138u>(&func_803E1138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E1138_4AAB0 = func_803E1138_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E1138_4AAB0);
        r4 = static_cast<uint32_t>(regargs_result_803E1138_4AAB0 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E1138u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 372);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803EDD68u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_4B455 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_4B455);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_4B455 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = MemoryInline::FlatRead8((r26 + 8));
    MemoryInline::FlatWriteRam8((r1 + 404), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
    MemoryInline::FlatWriteRam8((r1 + 405), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 32;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 372);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EDD94u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_4BF1D = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_4BF1D);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_4BF1D >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 372);
    r4 = -1;
    ctx->lr = 0x803EDDA0u;
    if constexpr (KnownRegArgsCpuCall<0x803E0DD4u>(&func_803E0DD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E0DD4_4C9A5 = func_803E0DD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E0DD4_4C9A5);
        r4 = static_cast<uint32_t>(regargs_result_803E0DD4_4C9A5 >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E0DD4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EDDA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_803EDEF8;
}

loc_803EDDB4:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EDDC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EDEF8;
    }
}

loc_803EDDC4:
{
    r3 = (r1 + 336);
    ctx->lr = 0x803EDDCCu;
    if constexpr (KnownRegArgsCpuCall<0x803E1138u>(&func_803E1138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E1138_4D7E5 = func_803E1138_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E1138_4D7E5);
        r4 = static_cast<uint32_t>(regargs_result_803E1138_4D7E5 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E1138u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 336);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803EDDE0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_4E18A = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_4E18A);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_4E18A >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r0 = MemoryInline::FlatRead8((r26 + 8));
    MemoryInline::FlatWriteRam8((r1 + 368), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
    MemoryInline::FlatWriteRam8((r1 + 369), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 34;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 336);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EDE0Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_4EC52 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_4EC52);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_4EC52 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EBB54u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r3 = (r1 + 336);
    r4 = -1;
    ctx->lr = 0x803EDE18u;
    if constexpr (KnownRegArgsCpuCall<0x803E0DD4u>(&func_803E0DD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803E0DD4_4F6DA = func_803E0DD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E0DD4_4F6DA);
        r4 = static_cast<uint32_t>(regargs_result_803E0DD4_4F6DA >> 32);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E0DD4u>(ctx);
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
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    goto loc_803EDEF8;
}

loc_803EDE1C:
{
}

loc_803EDE20:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_803EDE60;
    }
}

loc_803EDE24:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 160), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 16);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803EDE5Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803EDEF8;
}

loc_803EDE60:
{
}

loc_803EDE64:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(32))) {
        goto loc_803EDE6C;
    }
}

loc_803EDE68:
{
    r27 = 32;
}

loc_803EDE6C:
{
    r0 = 0;
    r30 = (r3 + 458752);
    MemoryInline::FlatWrite32((r30 + -7896), r0);
    r25 = 0;
    goto loc_803EDEE4;
}

loc_803EDE80:
{
    r0 = MemoryInline::FlatRead32((r30 + -7896));
    r0 = (r0 * 36);
    r3 = (r30 + r0);
    r3 = (r3 + -7892);
    r4 = 3;
    r5 = r26;
    r6 = 8;
    ctx->lr = 0x803EDEA0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_50C69 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_50C69);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_50C69 >> 32);
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
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
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
        f0 = ctx->fpr[0];
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
    r4 = MemoryInline::FlatRead8((r26 + 8));
    r0 = MemoryInline::FlatRead32((r30 + -7896));
    r3 = (r0 * 36);
    r3 = (r3 + 458752);
    r0 = (r3 + -7860);
    r31_addr_5 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_5, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r26 + 9));
    r0 = MemoryInline::FlatRead32((r30 + -7896));
    r3 = (r0 * 36);
    r3 = (r3 + 458752);
    r0 = (r3 + -7859);
    r31_addr_6 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_6, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r30 + -7896));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + -7896), r0);
    r26 = (r26 + 10);
    r25 = (r25 + 1);
}

loc_803EDEE4:
{
}

loc_803EDEE8:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r27))) {
        goto loc_803EDE80;
    }
}

loc_803EDEEC:
{
    r0 = MemoryInline::FlatRead32((r31 + 864));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 864), r0);
}

loc_803EDEF8:
{
    r11 = (r1 + 2880);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 2884));
    ctx->lr = r0;
    r1 = (r1 + 2880);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
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

extern "C" void func_803EBC00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EBC00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x000FFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EBC00 func_803EBC00 preserves=true fpr_mask=0x00000000
