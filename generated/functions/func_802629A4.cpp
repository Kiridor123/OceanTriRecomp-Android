#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802617D4(CpuContext* ctx);
extern "C" uint64_t func_802617D4_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80262214(CpuContext* ctx);
extern "C" uint64_t func_80262214_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802626EC(CpuContext* ctx);
extern "C" uint64_t func_802626EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026A3A0(CpuContext* ctx);
extern "C" uint64_t func_8026A3A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026A40C(CpuContext* ctx);
extern "C" uint32_t func_8026A40C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027621C(CpuContext* ctx);
extern "C" uint64_t func_8027621C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80279160(CpuContext* ctx);
extern "C" uint64_t func_80279160_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802794F4(CpuContext* ctx);
extern "C" uint64_t func_802794F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80279960(CpuContext* ctx);
extern "C" uint64_t func_80279960_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027BD44(CpuContext* ctx);
extern "C" uint64_t func_8027BD44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027CB80(CpuContext* ctx);
extern "C" uint64_t func_8027CB80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027D904(CpuContext* ctx);
extern "C" uint64_t func_8027D904_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027D9CC(CpuContext* ctx);
extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8027DEEC(CpuContext* ctx);
extern "C" uint64_t func_8027DEEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027DF9C(CpuContext* ctx);
extern "C" uint64_t func_8027DF9C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028E554(CpuContext* ctx);
extern "C" uint32_t func_8028E554_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802D87EC(CpuContext* ctx);
extern "C" uint64_t func_802D87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80331204(CpuContext* ctx);
extern "C" uint32_t func_80331204_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B2CC4(CpuContext* ctx);
extern "C" uint64_t func_803B2CC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B3244(CpuContext* ctx);
extern "C" uint64_t func_803B3244_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B60DC(CpuContext* ctx);
extern "C" uint64_t func_803B60DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_802629A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80264258_loc_0 = 0;
    uint32_t addr_psqx_80264264_loc_0 = 0;
    uint32_t addr_psqx_80264270_loc_0 = 0;
    uint32_t addr_psqx_8026427C_loc_0 = 0;
    uint32_t addr_psqx_80264288_loc_0 = 0;
    uint32_t addr_psqx_80264294_loc_0 = 0;
    uint32_t addr_psqx_802642A0_loc_0 = 0;
    uint32_t addr_psqx_802642AC_loc_0 = 0;
    uint32_t addr_psqx_802642B8_loc_0 = 0;
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
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_10 = 0;
    uint32_t r0_subfc_sub_11 = 0;
    uint32_t r0_subfc_sub_12 = 0;
    uint32_t r0_subfc_sub_13 = 0;
    uint32_t r0_subfc_sub_14 = 0;
    uint32_t r0_subfc_sub_15 = 0;
    uint32_t r0_subfc_sub_16 = 0;
    uint32_t r0_subfc_sub_17 = 0;
    uint32_t r0_subfc_sub_18 = 0;
    uint32_t r0_subfc_sub_19 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_20 = 0;
    uint32_t r0_subfc_sub_21 = 0;
    uint32_t r0_subfc_sub_22 = 0;
    uint32_t r0_subfc_sub_23 = 0;
    uint32_t r0_subfc_sub_24 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r0_subfc_sub_5 = 0;
    uint32_t r0_subfc_sub_6 = 0;
    uint32_t r0_subfc_sub_7 = 0;
    uint32_t r0_subfc_sub_8 = 0;
    uint32_t r0_subfc_sub_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_10 = 0;
    uint32_t r3_adde_right_11 = 0;
    uint32_t r3_adde_right_12 = 0;
    uint32_t r3_adde_right_13 = 0;
    uint32_t r3_adde_right_14 = 0;
    uint32_t r3_adde_right_15 = 0;
    uint32_t r3_adde_right_16 = 0;
    uint32_t r3_adde_right_17 = 0;
    uint32_t r3_adde_right_18 = 0;
    uint32_t r3_adde_right_19 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_20 = 0;
    uint32_t r3_adde_right_21 = 0;
    uint32_t r3_adde_right_22 = 0;
    uint32_t r3_adde_right_23 = 0;
    uint32_t r3_adde_right_24 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
    uint32_t r3_adde_right_6 = 0;
    uint32_t r3_adde_right_7 = 0;
    uint32_t r3_adde_right_8 = 0;
    uint32_t r3_adde_right_9 = 0;
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_11 = 0;
    uint32_t r3_ca_12 = 0;
    uint32_t r3_ca_13 = 0;
    uint32_t r3_ca_14 = 0;
    uint32_t r3_ca_15 = 0;
    uint32_t r3_ca_16 = 0;
    uint32_t r3_ca_17 = 0;
    uint32_t r3_ca_18 = 0;
    uint32_t r3_ca_19 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_20 = 0;
    uint32_t r3_ca_21 = 0;
    uint32_t r3_ca_22 = 0;
    uint32_t r3_ca_23 = 0;
    uint32_t r3_ca_24 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
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
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
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

    goto loc_802629A4;

loc_802629A4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 308u, (r1 + 308), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r24 = r3;
    r0 = MemoryInline::FlatRead32((r15 + 792));
}

loc_80262A30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80262A3C;
    }
}

loc_80262A34:
{
    r3 = 0;
    goto loc_80264254;
}

loc_80262A3C:
{
    r0 = MemoryInline::FlatRead8((r15 + 787));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80262A48:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80262A54;
    }
}

loc_80262A4C:
{
    r3 = 0;
    goto loc_80264254;
}

loc_80262A54:
{
    r3 = r15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80262A60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80262A6C;
    }
}

loc_80262A64:
{
    r3 = 0;
    goto loc_80264254;
}

loc_80262A6C:
{
    r21 = MemoryInline::FlatRead32((r15 + 792));
    r3 = r15;
    // inline leaf 0x8026A3BC (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 168));
    // end of inlined leaf 0x8026A3BC
    f29.d = f1.d;
    r0 = MemoryInline::FlatRead32((r15 + 168));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r17 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15512));
    r25 = 0;
    f26.d = MemoryInline::FlatReadFloat64((r2 + -15384));
    f30.d = MemoryInline::FlatReadFloat64((r2 + -15040));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -15044));
    r26 = 65536;
    r27 = 1;
    r28 = 70;
    r29 = 4;
    r3 = 0x805C0000u;
    r30 = (r3 + 24960);
    r3 = 0x805C0000u;
    r31 = (r3 + 25000);
    f28.d = MemoryInline::FlatReadFloat32((r2 + -15520));
    r14 = 9;
    goto loc_80264244;
}

loc_80262AC8:
{
}

loc_80262ACC:
{
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(48))) {
        goto loc_80264250;
    }
}

loc_80262AD0:
{
    r20 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r15 + 796));
}

loc_80262AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262AF4;
    }
}

loc_80262AE4:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    goto loc_80262B54;
}

loc_80262AF4:
{
    r0 = MemoryInline::FlatRead16((r21 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80262AFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(999))) {
        goto loc_80262B24;
    }
}

loc_80262B00:
{
    r3 = r15;
    // inline leaf 0x8026A3C8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8026A3C8
}

loc_80262B0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80262B18;
    }
}

loc_80262B10:
{
    f25.d = f29.d;
    goto loc_80262B1C;
}

loc_80262B18:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
}

loc_80262B1C:
{
    r20 = 1;
    goto loc_80262B54;
}

loc_80262B24:
{
}

loc_80262B28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80262B44;
    }
}

loc_80262B2C:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    goto loc_80262B54;
}

loc_80262B44:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
}

loc_80262B54:
{
    r0 = MemoryInline::FlatRead16((r15 + 800));
}

loc_80262B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262B7C;
    }
}

loc_80262B60:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    SetCRFloatResident(cr, 0, f24.d, f29.d);
}

loc_80262B70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80262BD8;
    }
}

loc_80262B74:
{
    f24.d = f29.d;
    goto loc_80262BD8;
}

loc_80262B7C:
{
    r0 = MemoryInline::FlatRead16((r21 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80262B84:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(999))) {
        goto loc_80262BA8;
    }
}

loc_80262B88:
{
    r3 = r15;
    // inline leaf 0x8026A3C8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x8026A3C8
}

loc_80262B94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80262BA0;
    }
}

loc_80262B98:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    goto loc_80262BD8;
}

loc_80262BA0:
{
    f24.d = f29.d;
    goto loc_80262BD8;
}

loc_80262BA8:
{
}

loc_80262BAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80262BC8;
    }
}

loc_80262BB0:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    goto loc_80262BD8;
}

loc_80262BC8:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
}

loc_80262BD8:
{
    r0 = MemoryInline::FlatRead16((r15 + 798));
}

loc_80262BE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262BF4;
    }
}

loc_80262BE4:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    goto loc_80262C08;
}

loc_80262BF4:
{
    r0 = MemoryInline::FlatRead16((r21 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
}

loc_80262C08:
{
    SetCRFloatResident(cr, 0, f23.d, f27.d);
}

loc_80262C0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80262C6C;
    }
}

loc_80262C10:
{
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_80262C14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80262C50;
    }
}

loc_80262C18:
{
}

loc_80262C1C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80262C30;
    }
}

loc_80262C20:
{
    r3 = r15;
    ctx->lr = 0x80262C28u;
    if constexpr (KnownRegArgsCpuCall<0x8026A3A0u>(&func_8026A3A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8026A3A0_657A = func_8026A3A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A3A0_657A);
        r4 = static_cast<uint32_t>(regargs_result_8026A3A0_657A >> 32);
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
        InvokeDirectCpu<0x8026A3A0u>(ctx);
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

loc_80262C2C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80262C6C;
    }
}

loc_80262C30:
{
    r3 = r15;
    r4 = 6;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f23.d));
    f2.d = f24.d;
    ctx->lr = 0x80262C44u;
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
    InvokeDirectCpu<0x8026A378u>(ctx);
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
}

loc_80262C48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262C4C:
{
    goto loc_80262C6C;
}

loc_80262C50:
{
    r3 = r15;
    r4 = 7;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f23.d));
    f2.d = f24.d;
    ctx->lr = 0x80262C64u;
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
    InvokeDirectCpu<0x8026A378u>(ctx);
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
}

loc_80262C68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262C6C:
{
    r18 = 0;
    r19 = (r26 + -1);
    r3 = r15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80262C80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80262CB0;
    }
}

loc_80262C84:
{
    SetCRFloatResident(cr, 0, f23.d, f31.d);
}

loc_80262C88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80262C94;
    }
}

loc_80262C8C:
{
    r3 = (r15 + r17);
    MemoryInline::FlatWrite8((r3 + 802), static_cast<uint8_t>(r25));
}

loc_80262C94:
{
    r3 = r15;
    r4 = r21;
    ctx->lr = 0x80262CA0u;
    if constexpr (KnownRegArgsCpuCall<0x80262214u>(&func_80262214)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80262214_7B14 = func_80262214_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80262214_7B14);
        r4 = static_cast<uint32_t>(regargs_result_80262214_7B14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80262214u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80262CA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80262CB0;
    }
}

loc_80262CA8:
{
    r3 = (r15 + r17);
    MemoryInline::FlatWrite8((r3 + 802), static_cast<uint8_t>(r27));
}

loc_80262CB0:
{
    r22 = (r15 + r17);
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80262CBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262CC0:
{
    r0 = MemoryInline::FlatRead16((r21 + 6));
    r0 = (r0 & 32768);
}

loc_80262CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80262CD0:
{
    r0 = MemoryInline::FlatRead16((r21 + 14));
    r0 = (r0 & 32768);
}

loc_80262CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262D18;
    }
}

loc_80262CE0:
{
    r3 = r15;
    // inline leaf 0x80264F08 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1020));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 50;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_2 = r0;
    r0 = (r5 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r3_adde_right_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_2);
    r3 = (r3 + r3_ca_2);
    // end of inlined leaf 0x80264F08
}

loc_80262CEC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80262D10;
    }
}

loc_80262CF0:
{
    r3 = r15;
    // inline leaf 0x80264F24 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1046));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80264F24
}

loc_80262CFC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80262D10;
    }
}

loc_80262D00:
{
    r3 = r15;
    // inline leaf 0x80264F38 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1052));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x80264F38
}

loc_80262D0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80262D18;
    }
}

loc_80262D10:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262D18:
{
    r0 = MemoryInline::FlatRead16((r21 + 6));
    r0 = (r0 & 32768);
}

loc_80262D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262D50;
    }
}

loc_80262D28:
{
    r0 = MemoryInline::FlatRead16((r21 + 14));
    r0 = (r0 & 16384);
}

loc_80262D34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80262D50;
    }
}

loc_80262D38:
{
    r0 = MemoryInline::FlatRead8((r15 + 788));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80262D44:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80262D50;
    }
}

loc_80262D48:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262D50:
{
    r0 = MemoryInline::FlatRead16((r21 + 14));
    r0 = (r0 & 4095);
}

loc_80262D5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(57))) {
        goto loc_80262D78;
    }
}

loc_80262D60:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25608);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802636B4u:
        goto loc_802636B4;
        break;
    case 0x80262D80u:
        goto loc_80262D80;
        break;
    case 0x80262DE0u:
        goto loc_80262DE0;
        break;
    case 0x80263044u:
        goto loc_80263044;
        break;
    case 0x8026308Cu:
        goto loc_8026308C;
        break;
    case 0x802630D8u:
        goto loc_802630D8;
        break;
    case 0x802630F8u:
        goto loc_802630F8;
        break;
    case 0x80263118u:
        goto loc_80263118;
        break;
    case 0x80262E0Cu:
        goto loc_80262E0C;
        break;
    case 0x80262E80u:
        goto loc_80262E80;
        break;
    case 0x80263138u:
        goto loc_80263138;
        break;
    case 0x80262FB0u:
        goto loc_80262FB0;
        break;
    case 0x80263148u:
        goto loc_80263148;
        break;
    case 0x8026315Cu:
        goto loc_8026315C;
        break;
    case 0x802631B4u:
        goto loc_802631B4;
        break;
    case 0x802631C8u:
        goto loc_802631C8;
        break;
    case 0x802631DCu:
        goto loc_802631DC;
        break;
    case 0x80263204u:
        goto loc_80263204;
        break;
    case 0x80263244u:
        goto loc_80263244;
        break;
    case 0x80262D78u:
        goto loc_80262D78;
        break;
    case 0x80262D9Cu:
        goto loc_80262D9C;
        break;
    case 0x80262DB4u:
        goto loc_80262DB4;
        break;
    case 0x8026328Cu:
        goto loc_8026328C;
        break;
    case 0x80262F58u:
        goto loc_80262F58;
        break;
    case 0x80262EF8u:
        goto loc_80262EF8;
        break;
    case 0x802632A8u:
        goto loc_802632A8;
        break;
    case 0x802632B0u:
        goto loc_802632B0;
        break;
    case 0x80262FF8u:
        goto loc_80262FF8;
        break;
    case 0x80263348u:
        goto loc_80263348;
        break;
    case 0x80263364u:
        goto loc_80263364;
        break;
    case 0x80263380u:
        goto loc_80263380;
        break;
    case 0x8026339Cu:
        goto loc_8026339C;
        break;
    case 0x802633B8u:
        goto loc_802633B8;
        break;
    case 0x80263070u:
        goto loc_80263070;
        break;
    case 0x802633D0u:
        goto loc_802633D0;
        break;
    case 0x802633E8u:
        goto loc_802633E8;
        break;
    case 0x802633FCu:
        goto loc_802633FC;
        break;
    case 0x8026325Cu:
        goto loc_8026325C;
        break;
    case 0x80263274u:
        goto loc_80263274;
        break;
    case 0x80263430u:
        goto loc_80263430;
        break;
    case 0x80263448u:
        goto loc_80263448;
        break;
    case 0x80263460u:
        goto loc_80263460;
        break;
    case 0x80263478u:
        goto loc_80263478;
        break;
    case 0x8026349Cu:
        goto loc_8026349C;
        break;
    case 0x802634B4u:
        goto loc_802634B4;
        break;
    case 0x802634D0u:
        goto loc_802634D0;
        break;
    case 0x802634ECu:
        goto loc_802634EC;
        break;
    case 0x80263518u:
        goto loc_80263518;
        break;
    case 0x80263648u:
        goto loc_80263648;
        break;
    case 0x80263664u:
        goto loc_80263664;
        break;
    case 0x8026341Cu:
        goto loc_8026341C;
        break;
    case 0x80263560u:
        goto loc_80263560;
        break;
    case 0x8026367Cu:
        goto loc_8026367C;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80262D78:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262D80:
{
    r3 = r15;
    r4 = 150;
    // inline leaf 0x802762B8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 888));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    r0_subfc_sub_4 = r0;
    r0 = (r5 - r0_subfc_sub_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_4) ? 1u : 0u) << 29);
    r3_adde_right_4 = r3;
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_4);
    r3 = (r3 + r3_ca_4);
    // end of inlined leaf 0x802762B8
}

loc_80262D90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80262D94:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262D9C:
{
    r3 = r15;
    // inline leaf 0x80278878 (18 guest instruction(s))
}

loc_inl10_0x80278878:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl10_0x80278880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x802788B8;
    }
}

loc_inl10_0x80278884:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl10_0x80278898:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl10_0x802788B8;
    }
}

loc_inl10_0x802788A0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl10_0x802788A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl10_0x802788B8;
    }
}

loc_inl10_0x802788B0:
{
    r3 = 1;
    goto loc_inl10_cont_80278878;
}

loc_inl10_0x802788B8:
{
    r3 = 0;
}

loc_inl10_cont_80278878:
{
    // end of inlined leaf 0x80278878
}

loc_80262DA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262DAC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262DB4:
{
    r3 = r15;
    r4 = 150;
    // inline leaf 0x802762B8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 888));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    r0_subfc_sub_5 = r0;
    r0 = (r5 - r0_subfc_sub_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_5) ? 1u : 0u) << 29);
    r3_adde_right_5 = r3;
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_5);
    r3 = (r3 + r3_ca_5);
    // end of inlined leaf 0x802762B8
}

loc_80262DC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80262DD8;
    }
}

loc_80262DC8:
{
    r3 = r15;
    // inline leaf 0x80278878 (18 guest instruction(s))
}

loc_inl12_0x80278878:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl12_0x80278880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl12_0x802788B8;
    }
}

loc_inl12_0x80278884:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl12_0x80278898:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl12_0x802788B8;
    }
}

loc_inl12_0x802788A0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl12_0x802788A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl12_0x802788B8;
    }
}

loc_inl12_0x802788B0:
{
    r3 = 1;
    goto loc_inl12_cont_80278878;
}

loc_inl12_0x802788B8:
{
    r3 = 0;
}

loc_inl12_cont_80278878:
{
    // end of inlined leaf 0x80278878
}

loc_80262DD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262DD8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262DE0:
{
    r4 = MemoryInline::FlatRead8(r21);
    r0 = (r4 & 128);
}

loc_80262DEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262DF0:
{
    r3 = r15;
    r5 = MemoryInline::FlatRead16((r21 + 2));
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl13_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl13_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl13_0x8026FEF4;
    }
}

loc_inl13_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl13_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl13_0x8026FEF4;
    }
}

loc_inl13_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl13_cont_8026FECC;
}

loc_inl13_0x8026FEF4:
{
    r3 = 0;
}

loc_inl13_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80262E00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262E04:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262E0C:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80262E18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262E1C:
{
    r3 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80262E24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80262E64;
    }
}

loc_80262E28:
{
    r4 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r4 + -24);
}

loc_80262E34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80262E60;
    }
}

loc_80262E38:
{
}

loc_80262E3C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80262E60;
    }
}

loc_80262E40:
{
}

loc_80262E44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80262E60;
    }
}

loc_80262E48:
{
}

loc_80262E4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(15))) {
        goto loc_80262E60;
    }
}

loc_80262E50:
{
}

loc_80262E54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(39))) {
        goto loc_80262E60;
    }
}

loc_80262E58:
{
}

loc_80262E5C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80262E64;
    }
}

loc_80262E60:
{
    r18 = 1;
}

loc_80262E64:
{
}

loc_80262E68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(12))) {
        goto loc_802636B4;
    }
}

loc_80262E6C:
{
    r0 = MemoryInline::FlatRead16((r15 + 12));
}

loc_80262E74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262E78:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262E80:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80262E8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262E90:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80262E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80262EA8;
    }
}

loc_80262E9C:
{
}

loc_80262EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80262EE4;
    }
}

loc_80262EA4:
{
    goto loc_802636B4;
}

loc_80262EA8:
{
    r3 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r3 + -14);
}

loc_80262EB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80262EDC;
    }
}

loc_80262EB8:
{
    r0 = (r3 + -2);
}

loc_80262EC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80262EDC;
    }
}

loc_80262EC4:
{
}

loc_80262EC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(39))) {
        goto loc_80262EDC;
    }
}

loc_80262ECC:
{
}

loc_80262ED0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(35))) {
        goto loc_80262EDC;
    }
}

loc_80262ED4:
{
}

loc_80262ED8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(27))) {
        goto loc_802636B4;
    }
}

loc_80262EDC:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262EE4:
{
    r0 = MemoryInline::FlatRead16((r15 + 12));
}

loc_80262EEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802636B4;
    }
}

loc_80262EF0:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262EF8:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80262F04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262F08:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80262F10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80262F40;
    }
}

loc_80262F14:
{
    r3 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r3 + -6);
}

loc_80262F20:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_80262F40;
    }
}

loc_80262F24:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25484);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80262F3Cu:
        goto loc_80262F3C;
        break;
    case 0x80262F40u:
        goto loc_80262F40;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80262F3C:
{
    r18 = 1;
}

loc_80262F40:
{
    r3 = r15;
    // inline leaf 0x8027A5B8 (10 guest instruction(s))
}

loc_inl14_0x8027A5B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_inl14_0x8027A5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl14_0x8027A5D8;
    }
}

loc_inl14_0x8027A5C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1510));
}

loc_inl14_0x8027A5CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x8027A5D8;
    }
}

loc_inl14_0x8027A5D0:
{
    r3 = 0;
    goto loc_inl14_cont_8027A5B8;
}

loc_inl14_0x8027A5D8:
{
    r3 = 1;
}

loc_inl14_cont_8027A5B8:
{
    // end of inlined leaf 0x8027A5B8
}

loc_80262F4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80262F50:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80262F58:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80262F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262F68:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80262F70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262F74:
{
    r3 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r3 + -33);
}

loc_80262F80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80262FA8;
    }
}

loc_80262F84:
{
    r0 = (r3 + -6);
}

loc_80262F8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80262FA8;
    }
}

loc_80262F90:
{
}

loc_80262F94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_80262FA8;
    }
}

loc_80262F98:
{
}

loc_80262F9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(27))) {
        goto loc_80262FA8;
    }
}

loc_80262FA0:
{
}

loc_80262FA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(36))) {
        goto loc_802636B4;
    }
}

loc_80262FA8:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262FB0:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80262FBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80262FC0:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80262FC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80262FCC:
{
    r0 = MemoryInline::FlatRead16((r15 + 12));
}

loc_80262FD4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_802636B4;
    }
}

loc_80262FD8:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25324);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802636B4u:
        goto loc_802636B4;
        break;
    case 0x80262FF0u:
        goto loc_80262FF0;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80262FF0:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80262FF8:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80263004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263008:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80263010:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80263014:
{
    r3 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r3 + -6);
}

loc_80263020:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_802636B4;
    }
}

loc_80263024:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25200);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8026303Cu:
        goto loc_8026303C;
        break;
    case 0x802636B4u:
        goto loc_802636B4;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8026303C:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_80263044:
{
    r3 = r15;
    r4 = 384;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl15_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl15_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl15_0x8026FF14;
    }
}

loc_inl15_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl15_cont_8026FEFC;
}

loc_inl15_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl15_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_80263054:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263060;
    }
}

loc_80263058:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263060:
{
    r0 = MemoryInline::FlatRead16((r21 + 14));
}

loc_80263068:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(24))) {
        goto loc_802631DC;
    }
}

loc_8026306C:
{
    goto loc_802636B4;
}

loc_80263070:
{
    r3 = r15;
    r4 = 384;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl16_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl16_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl16_0x8026FF14;
    }
}

loc_inl16_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl16_cont_8026FEFC;
}

loc_inl16_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl16_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_80263080:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263084:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026308C:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80263098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_8026309C:
{
    r3 = r15;
    r4 = 150;
    // inline leaf 0x802762B8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 888));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    r0_subfc_sub_6 = r0;
    r0 = (r5 - r0_subfc_sub_6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_6) ? 1u : 0u) << 29);
    r3_adde_right_6 = r3;
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_6);
    r3 = (r3 + r3_ca_6);
    // end of inlined leaf 0x802762B8
}

loc_802630AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802630B8;
    }
}

loc_802630B0:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802630B8:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8(r21);
    r5 = MemoryInline::FlatRead16((r21 + 2));
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl18_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl18_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl18_0x8026FEF4;
    }
}

loc_inl18_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl18_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl18_0x8026FEF4;
    }
}

loc_inl18_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl18_cont_8026FECC;
}

loc_inl18_0x8026FEF4:
{
    r3 = 0;
}

loc_inl18_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802630CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_802630D0:
{
    r18 = 1;
    goto loc_802636B4;
}

loc_802630D8:
{
    r3 = r15;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15352));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15280));
    r4 = (r1 + 36);
    ctx->lr = 0x802630ECu;
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
    InvokeDirectCpu<0x80277CF8u>(ctx);
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
}

loc_802630F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_802630F4:
{
    goto loc_802636B4;
}

loc_802630F8:
{
    r3 = r15;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15508));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15464));
    r4 = (r1 + 36);
    ctx->lr = 0x8026310Cu;
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
    InvokeDirectCpu<0x80277CF8u>(ctx);
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
}

loc_80263110:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263114:
{
    goto loc_802636B4;
}

loc_80263118:
{
    r3 = r15;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15500));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15484));
    r4 = (r1 + 36);
    ctx->lr = 0x8026312Cu;
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
    InvokeDirectCpu<0x80277CF8u>(ctx);
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
}

loc_80263130:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263134:
{
    goto loc_802636B4;
}

loc_80263138:
{
    r0 = MemoryInline::FlatRead8((r15 + 873));
}

loc_80263140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026423C;
    }
}

loc_80263144:
{
    goto loc_802636B4;
}

loc_80263148:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x80279160u>(&func_80279160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80279160_1110E = func_80279160_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80279160_1110E);
        r4 = static_cast<uint32_t>(regargs_result_80279160_1110E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80279160u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80263154:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263158:
{
    goto loc_802636B4;
}

loc_8026315C:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (r0 & 128);
}

loc_80263168:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_8026316C:
{
    r3 = r15;
    r4 = 150;
    // inline leaf 0x802762B8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 888));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    r0_subfc_sub_7 = r0;
    r0 = (r5 - r0_subfc_sub_7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_7) ? 1u : 0u) << 29);
    r3_adde_right_7 = r3;
    r3_ca_7 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_7);
    r3 = (r3 + r3_ca_7);
    // end of inlined leaf 0x802762B8
}

loc_8026317C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263188;
    }
}

loc_80263180:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263188:
{
    r0 = MemoryInline::FlatRead8((r15 + 10));
}

loc_80263190:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802631AC;
    }
}

loc_80263194:
{
    r3 = MemoryInline::FlatRead16((r15 + 12));
    r0 = (r3 + -16);
}

loc_802631A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_802631A4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802631AC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802631B4:
{
    r0 = MemoryInline::FlatRead8((r15 + 617));
}

loc_802631BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802631C0:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802631C8:
{
    r0 = MemoryInline::FlatRead8((r15 + 617));
}

loc_802631D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802631D4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802631DC:
{
    r3 = r15;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_13 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_802631E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802631EC:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x80279960u>(&func_80279960)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80279960_12136 = func_80279960_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80279960_12136);
        r4 = static_cast<uint32_t>(regargs_result_80279960_12136 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80279960u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802631F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802631FC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263204:
{
    r4 = MemoryInline::FlatRead8(r21);
    r0 = (r4 & 128);
}

loc_80263210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263214:
{
    r3 = r15;
    r5 = MemoryInline::FlatRead16((r21 + 2));
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl21_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl21_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl21_0x8026FEF4;
    }
}

loc_inl21_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl21_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl21_0x8026FEF4;
    }
}

loc_inl21_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl21_cont_8026FECC;
}

loc_inl21_0x8026FEF4:
{
    r3 = 0;
}

loc_inl21_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80263224:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026322C;
    }
}

loc_80263228:
{
    r18 = 1;
}

loc_8026322C:
{
    r3 = r15;
    // inline leaf 0x8027A5B8 (10 guest instruction(s))
}

loc_inl22_0x8027A5B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_inl22_0x8027A5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl22_0x8027A5D8;
    }
}

loc_inl22_0x8027A5C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1510));
}

loc_inl22_0x8027A5CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl22_0x8027A5D8;
    }
}

loc_inl22_0x8027A5D0:
{
    r3 = 0;
    goto loc_inl22_cont_8027A5B8;
}

loc_inl22_0x8027A5D8:
{
    r3 = 1;
}

loc_inl22_cont_8027A5B8:
{
    // end of inlined leaf 0x8027A5B8
}

loc_80263238:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_8026323C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263244:
{
    r3 = r15;
    // inline leaf 0x80264F08 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1020));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 50;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_8 = r0;
    r0 = (r5 - r0_subfc_sub_8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_8) ? 1u : 0u) << 29);
    r3_adde_right_8 = r3;
    r3_ca_8 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_8);
    r3 = (r3 + r3_ca_8);
    // end of inlined leaf 0x80264F08
}

loc_80263250:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263254:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026325C:
{
    r3 = r15;
    // inline leaf 0x80264F24 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1046));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x80264F24
}

loc_80263268:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_8026326C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263274:
{
    r3 = r15;
    // inline leaf 0x80264F38 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1052));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x80264F38
}

loc_80263280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263284:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026328C:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027BD44_13671 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_13671);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_13671 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
}

loc_8026329C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802636B4;
    }
}

loc_802632A0:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802632A8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802632B0:
{
    r3 = r15;
    r4 = 43;
    ctx->lr = 0x802632BCu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80273218_13C5F = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_13C5F);
        r4 = static_cast<uint32_t>(regargs_result_80273218_13C5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_802632C0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_802632CC;
    }
}

loc_802632C4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802632CC:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x802632ECu;
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
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    r0 = (r3 & 65535);
}

loc_802632F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263340;
    }
}

loc_802632F8:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80263300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(17))) {
        goto loc_8026330C;
    }
}

loc_80263304:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026330C:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = 0;
    ctx->lr = 0x8026332Cu;
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
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r15 + 1146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r15 + 1144), static_cast<uint16_t>(r0));
    goto loc_802636B4;
}

loc_80263340:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263348:
{
    r3 = r15;
    r4 = 15;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl26_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl26_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl26_0x8027CA7C;
    }
}

loc_inl26_0x8027CA74:
{
    r3 = 0;
    goto loc_inl26_cont_8027CA68;
}

loc_inl26_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl26_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl26_0x8027CA90;
    }
}

loc_inl26_0x8027CA88:
{
    r3 = 1;
    goto loc_inl26_cont_8027CA68;
}

loc_inl26_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & 1);
    r0_subfc_sub_9 = r0;
    r0 = (r5 - r0_subfc_sub_9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_9) ? 1u : 0u) << 29);
    r3_adde_right_9 = r3;
    r3_ca_9 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_9);
    r3 = (r3 + r3_ca_9);
}

loc_inl26_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263358:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_8026335C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263364:
{
    r3 = r15;
    r4 = 20;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl27_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl27_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl27_0x8027CA7C;
    }
}

loc_inl27_0x8027CA74:
{
    r3 = 0;
    goto loc_inl27_cont_8027CA68;
}

loc_inl27_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl27_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl27_0x8027CA90;
    }
}

loc_inl27_0x8027CA88:
{
    r3 = 1;
    goto loc_inl27_cont_8027CA68;
}

loc_inl27_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & 1);
    r0_subfc_sub_11 = r0;
    r0 = (r5 - r0_subfc_sub_11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_11) ? 1u : 0u) << 29);
    r3_adde_right_11 = r3;
    r3_ca_11 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_11);
    r3 = (r3 + r3_ca_11);
}

loc_inl27_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263374:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263378:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263380:
{
    r3 = r15;
    r4 = 25;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl28_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl28_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl28_0x8027CA7C;
    }
}

loc_inl28_0x8027CA74:
{
    r3 = 0;
    goto loc_inl28_cont_8027CA68;
}

loc_inl28_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl28_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl28_0x8027CA90;
    }
}

loc_inl28_0x8027CA88:
{
    r3 = 1;
    goto loc_inl28_cont_8027CA68;
}

loc_inl28_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_21 & 1);
    r0_subfc_sub_13 = r0;
    r0 = (r5 - r0_subfc_sub_13);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_13) ? 1u : 0u) << 29);
    r3_adde_right_13 = r3;
    r3_ca_13 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_13);
    r3 = (r3 + r3_ca_13);
}

loc_inl28_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263390:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263394:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026339C:
{
    r3 = r15;
    r4 = 10;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl29_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl29_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl29_0x8027CA7C;
    }
}

loc_inl29_0x8027CA74:
{
    r3 = 0;
    goto loc_inl29_cont_8027CA68;
}

loc_inl29_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl29_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl29_0x8027CA90;
    }
}

loc_inl29_0x8027CA88:
{
    r3 = 1;
    goto loc_inl29_cont_8027CA68;
}

loc_inl29_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_23 & 1);
    r0_subfc_sub_15 = r0;
    r0 = (r5 - r0_subfc_sub_15);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_15) ? 1u : 0u) << 29);
    r3_adde_right_15 = r3;
    r3_ca_15 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_15);
    r3 = (r3 + r3_ca_15);
}

loc_inl29_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_802633AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802633B0:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802633B8:
{
    r3 = r15;
    // inline leaf 0x8027CC90 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1444));
    r3 = (r0 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_25 & 1);
    // end of inlined leaf 0x8027CC90
}

loc_802633C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802633C8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802633D0:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_26 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_802633DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802633E0:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802633E8:
{
    r0 = MemoryInline::FlatRead8((r15 + 1620));
}

loc_802633F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802633F4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802633FC:
{
    r3 = r15;
    ctx->lr = 0x80263404u;
    if constexpr (KnownRegArgsCpuCall<0x802626ECu>(&func_802626EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802626EC_1706C = func_802626EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802626EC_1706C);
        r4 = static_cast<uint32_t>(regargs_result_802626EC_1706C >> 32);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802626ECu>(ctx);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80263408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263414;
    }
}

loc_8026340C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263414:
{
    r3 = 1;
    goto loc_80264254;
}

loc_8026341C:
{
    ctx->lr = 0x80263420u;
    if constexpr (KnownRegArgsCpuCall<0x802D87ECu>(&func_802D87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802D87EC_17B75 = func_802D87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D87EC_17B75);
        r4 = static_cast<uint32_t>(regargs_result_802D87EC_17B75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80263424:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263428:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263430:
{
    r3 = r15;
    // inline leaf 0x8027D6E8 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 1;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r3_rot_27 & 1);
    // end of inlined leaf 0x8027D6E8
}

loc_8026343C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263440:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263448:
{
    r3 = r15;
    // inline leaf 0x8027D6E8 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 1;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r3_rot_28 & 1);
    // end of inlined leaf 0x8027D6E8
}

loc_80263454:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_80263458:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263460:
{
    MemoryInline::FlatWrite8((r15 + 1481), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead8((r15 + 1480));
}

loc_8026346C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263470:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263478:
{
    r3 = 1;
    ctx->lr = 0x80263480u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_18812 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_18812;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80263484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80263494;
    }
}

loc_80263488:
{
    r0 = MemoryInline::FlatRead8((r15 + 119));
}

loc_80263490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263494:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026349C:
{
    r3 = r15;
    // inline leaf 0x8027CC90 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1444));
    r3 = (r0 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_29 & 1);
    // end of inlined leaf 0x8027CC90
}

loc_802634A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_802634AC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802634B4:
{
    r3 = r15;
    r4 = 0;
    ctx->lr = 0x802634C0u;
    if constexpr (KnownRegArgsCpuCall<0x8027D904u>(&func_8027D904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027D904_18FB9 = func_8027D904_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027D904_18FB9);
        r4 = static_cast<uint32_t>(regargs_result_8027D904_18FB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027D904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_802634C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802634C8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802634D0:
{
    r3 = r15;
    r4 = 1;
    ctx->lr = 0x802634DCu;
    if constexpr (KnownRegArgsCpuCall<0x8027D904u>(&func_8027D904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027D904_19582 = func_8027D904_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027D904_19582);
        r4 = static_cast<uint32_t>(regargs_result_8027D904_19582 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027D904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_802634E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_802634E4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802634EC:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_30 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_802634F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80263510;
    }
}

loc_802634FC:
{
    r3 = r15;
    r4 = 43;
    ctx->lr = 0x80263508u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80273218_19CE0 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_19CE0);
        r4 = static_cast<uint32_t>(regargs_result_80273218_19CE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8026350C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263510:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263518:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027BD44_1A242 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_1A242);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_1A242 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
}

loc_80263528:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(381))) {
        goto loc_80263548;
    }
}

loc_8026352C:
{
    r3 = r15;
    r4 = (r1 + 52);
    r5 = (r1 + 24);
    r6 = (r1 + 28);
    ctx->lr = 0x80263540u;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027D9CC_1A855 = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_1A855);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_1A855 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80263544:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80263550;
    }
}

loc_80263548:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263550:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    goto loc_802636B4;
}

loc_80263560:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x80263580u;
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
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    r0 = (r3 & 65535);
}

loc_80263588:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263640;
    }
}

loc_8026358C:
{
    r3 = 0;
    ctx->lr = 0x80263594u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_1B680 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_1B680;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80263598:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263640;
    }
}

loc_8026359C:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802635A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80263640;
    }
}

loc_802635A8:
{
    r3 = 0;
    ctx->lr = 0x802635B0u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_1BB54 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_1BB54;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802635B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80263640;
    }
}

loc_802635B8:
{
}

loc_802635BC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80263640;
    }
}

loc_802635C0:
{
    r0 = MemoryInline::FlatRead32((r24 + 220));
}

loc_802635C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263640;
    }
}

loc_802635CC:
{
    r16 = 0;
}

loc_802635D0:
{
    r3 = (r16 & 65535);
    r4 = (r1 + 20);
    ctx->lr = 0x802635DCu;
    if constexpr (KnownRegArgsCpuCall<0x803B60DCu>(&func_803B60DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803B60DC_1C0F7 = func_803B60DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B60DC_1C0F7);
        r4 = static_cast<uint32_t>(regargs_result_803B60DC_1C0F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803B60DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_802635E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263620;
    }
}

loc_802635E8:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    ctx->lr = 0x802635F0u;
    if constexpr (KnownRegArgsCpuCall<0x803B3244u>(&func_803B3244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803B3244_1C6E7 = func_803B3244_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B3244_1C6E7);
        r4 = static_cast<uint32_t>(regargs_result_803B3244_1C6E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803B3244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_802635F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80263620;
    }
}

loc_802635F8:
{
    r23 = MemoryInline::FlatRead16((r1 + 20));
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027BD44_1CC73 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_1CC73);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_1CC73 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
}

loc_8026360C:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(r0))) {
        goto loc_80263620;
    }
}

loc_80263610:
{
    r3 = r15;
    r4 = r23;
    r5 = 1;
    ctx->lr = 0x80263620u;
    if constexpr (KnownRegArgsCpuCall<0x803B2CC4u>(&func_803B2CC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803B2CC4_1D39E = func_803B2CC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B2CC4_1D39E);
        r4 = static_cast<uint32_t>(regargs_result_803B2CC4_1D39E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
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
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803B2CC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80263620:
{
    r16 = (r16 + 1);
}

loc_80263628:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(3))) {
        goto loc_802635D0;
    }
}

loc_8026362C:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027BD44_1E194 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_1E194);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_1E194 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
}

loc_8026363C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802636B4;
    }
}

loc_80263640:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263648:
{
    r3 = r15;
    ctx->lr = 0x80263650u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331204_1E6E5 = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_1E6E5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263658:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_8026365C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263664:
{
    ctx->lr = 0x80263668u;
    if constexpr (KnownRegArgsCpuCall<0x8028E554u>(&func_8028E554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8028E554_1EAE3 = func_8028E554_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028E554_1EAE3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8028E554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80263674:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_8026367C:
{
    r0 = MemoryInline::FlatRead8((r15 + 1381));
}

loc_80263684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263690;
    }
}

loc_80263688:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263690:
{
    r3 = r15;
    ctx->lr = 0x80263698u;
    if constexpr (KnownRegArgsCpuCall<0x8027CB80u>(&func_8027CB80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027CB80_1F05F = func_8027CB80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027CB80_1F05F);
        r4 = static_cast<uint32_t>(regargs_result_8027CB80_1F05F >> 32);
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
        InvokeDirectCpu<0x8027CB80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802636A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802636B4;
    }
}

loc_802636A4:
{
}

loc_802636A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802636B4;
    }
}

loc_802636AC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802636B4:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_802636BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_802636C0:
{
    r3 = MemoryInline::FlatRead8(r21);
    r0 = (r3 & 128);
}

loc_802636CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263F24;
    }
}

loc_802636D0:
{
    r0 = MemoryInline::FlatRead16((r21 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(251));
}

loc_802636D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263D7C;
    }
}

loc_802636DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263710;
    }
}

loc_802636E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(246));
}

loc_802636E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802637A8;
    }
}

loc_802636E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263700;
    }
}

loc_802636EC:
{
}

loc_802636F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_80263F1C;
    }
}

loc_802636F4:
{
}

loc_802636F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80263BE4;
    }
}

loc_802636FC:
{
    goto loc_80263F1C;
}

loc_80263700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(248));
}

loc_80263704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263E24;
    }
}

loc_80263708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263DD0;
    }
}

loc_8026370C:
{
    goto loc_80263E30;
}

loc_80263710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(254));
}

loc_80263714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263888;
    }
}

loc_80263718:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263728;
    }
}

loc_8026371C:
{
}

loc_80263720:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(253))) {
        goto loc_80263A84;
    }
}

loc_80263724:
{
    goto loc_80263D28;
}

loc_80263728:
{
}

loc_8026372C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(256))) {
        goto loc_80263F1C;
    }
}

loc_80263730:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = (r26 + -1);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = (r1 + 8);
    r5 = (r1 + 16);
    r6 = (r1 + 14);
    r7 = (r1 + 32);
    r8 = MemoryInline::FlatRead16((r15 + 772));
    r9 = (r1 + 12);
    ctx->lr = 0x80263760u;
    if constexpr (KnownRegArgsCpuCall<0x802617D4u>(&func_802617D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802617D4_20174 = func_802617D4_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802617D4_20174);
        r4 = static_cast<uint32_t>(regargs_result_802617D4_20174 >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802617D4u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80263764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263770;
    }
}

loc_80263768:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263770:
{
    r0 = MemoryInline::FlatRead16((r15 + 772));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3 = (r15 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 632));
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_80263788:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263798;
    }
}

loc_8026378C:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80263798:
{
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_802637A8:
{
    r3 = r15;
    r4 = (r1 + 52);
    r5 = (r1 + 24);
    r6 = (r1 + 28);
    ctx->lr = 0x802637BCu;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027D9CC_2107E = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_2107E);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_2107E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_802637C0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_802637E8;
    }
}

loc_802637C4:
{
}

loc_802637C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_802637E8;
    }
}

loc_802637CC:
{
}

loc_802637D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_802637E8;
    }
}

loc_802637D4:
{
}

loc_802637D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802637F0;
    }
}

loc_802637DC:
{
}

loc_802637E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80263840;
    }
}

loc_802637E4:
{
    goto loc_80263880;
}

loc_802637E8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802637F0:
{
    // inline leaf 0x8027DCC8 (5 guest instruction(s))
    r3 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r3 + -9184));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_37 & 134217727);
    // end of inlined leaf 0x8027DCC8
}

loc_802637F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263838;
    }
}

loc_802637FC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80263808:
{
    r0 = 167;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263814;
    }
}

loc_80263810:
{
    r0 = 178;
}

loc_80263814:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r15 + 60);
    r4 = (r1 + 52);
    ctx->lr = 0x8026382Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80050AF4_2204A = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_2204A);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_2204A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    goto loc_80263F3C;
}

loc_80263838:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263840:
{
    // inline leaf 0x8027DCDC (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -9184);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_36 & 134217727);
    // end of inlined leaf 0x8027DCDC
}

loc_80263848:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263878;
    }
}

loc_8026384C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 168;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r15 + 60);
    r4 = (r1 + 52);
    ctx->lr = 0x8026386Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80050AF4_22CEC = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_22CEC);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_22CEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    goto loc_80263F3C;
}

loc_80263878:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263880:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263888:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x802638A8u;
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
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    r0 = (r3 & 65535);
}

loc_802638B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263A7C;
    }
}

loc_802638B4:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r15 + 1144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802638C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802638FC;
    }
}

loc_802638C8:
{
}

loc_802638CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_802638FC;
    }
}

loc_802638D0:
{
}

loc_802638D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80263944;
    }
}

loc_802638D8:
{
}

loc_802638DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80263970;
    }
}

loc_802638E0:
{
}

loc_802638E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802639B8;
    }
}

loc_802638E8:
{
}

loc_802638EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802639E4;
    }
}

loc_802638F0:
{
}

loc_802638F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80263A24;
    }
}

loc_802638F8:
{
    goto loc_80263A64;
}

loc_802638FC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80263918;
    }
}

loc_8026390C:
{
}

loc_80263910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263924;
    }
}

loc_80263914:
{
    goto loc_80263930;
}

loc_80263918:
{
    r0 = 45;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263938;
}

loc_80263924:
{
    r0 = 98;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263938;
}

loc_80263930:
{
    r0 = 44;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
}

loc_80263938:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263944:
{
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_8026394C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80263968;
    }
}

loc_80263950:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 127;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263968:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263970:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_8026397C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026398C;
    }
}

loc_80263980:
{
}

loc_80263984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263998;
    }
}

loc_80263988:
{
    goto loc_802639A4;
}

loc_8026398C:
{
    r0 = 52;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_802639AC;
}

loc_80263998:
{
    r0 = 97;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_802639AC;
}

loc_802639A4:
{
    r0 = 51;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
}

loc_802639AC:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_802639B8:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_41 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_802639C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802639D0;
    }
}

loc_802639C8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802639D0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r28));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_802639E4:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_802639F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80263A04;
    }
}

loc_802639F4:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_39 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_80263A00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263A0C;
    }
}

loc_80263A04:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A0C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 87;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263A24:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_38 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_80263A30:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80263A44;
    }
}

loc_80263A34:
{
    r3 = 0;
    ctx->lr = 0x80263A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_254DC = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_254DC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80263A40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263A4C;
    }
}

loc_80263A44:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A4C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 88;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263A64:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A6C:
{
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_80263A7C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A84:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x80263AA4u;
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
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    r0 = (r3 & 65535);
}

loc_80263AAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263BDC;
    }
}

loc_80263AB0:
{
    r16 = (r26 + -1);
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r15 + 1144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80263AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263ADC;
    }
}

loc_80263AC8:
{
}

loc_80263ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80263B0C;
    }
}

loc_80263AD0:
{
}

loc_80263AD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80263B3C;
    }
}

loc_80263AD8:
{
    goto loc_80263B68;
}

loc_80263ADC:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_26421 = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_26421);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_26421 >> 32);
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
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263AF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263AF8:
{
    r3 = r15;
    r4 = 0;
    ctx->lr = 0x80263B04u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_26937 = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_26937);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_26937 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
    goto loc_80263B68;
}

loc_80263B0C:
{
    r3 = r15;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_26DDD = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_26DDD);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_26DDD >> 32);
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
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263B24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263B28:
{
    r3 = r15;
    r4 = 1;
    ctx->lr = 0x80263B34u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_272F3 = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_272F3);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_272F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
    goto loc_80263B68;
}

loc_80263B3C:
{
    r3 = r15;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_27799 = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_27799);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_27799 >> 32);
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
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263B54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263B58:
{
    r3 = r15;
    r4 = 2;
    ctx->lr = 0x80263B64u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_27CAF = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_27CAF);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_27CAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
}

loc_80263B68:
{
    r8 = (r16 & 65535);
}

loc_80263B70:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(65535))) {
        goto loc_80263BD4;
    }
}

loc_80263B74:
{
    r0 = (r8 & 128);
}

loc_80263B7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263BD4;
    }
}

loc_80263B80:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = (r1 + 8);
    r5 = (r1 + 16);
    r6 = (r1 + 14);
    r7 = (r1 + 32);
    r9 = (r1 + 12);
    ctx->lr = 0x80263BA4u;
    if constexpr (KnownRegArgsCpuCall<0x802617D4u>(&func_802617D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802617D4_28482 = func_802617D4_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802617D4_28482);
        r4 = static_cast<uint32_t>(regargs_result_802617D4_28482 >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802617D4u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80263BA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263BB4;
    }
}

loc_80263BAC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BB4:
{
    r0 = (r16 & 65535);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r15 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 632));
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_80263BD4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BDC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BE4:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + 24920);
    r3_addr_9 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_9);
    r3 = MemoryInline::FlatRead8((r15 + 2));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r0 = (r0 - r3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_80263C10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263C30;
    }
}

loc_80263C14:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80263C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263C28;
    }
}

loc_80263C20:
{
}

loc_80263C24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_80263C30;
    }
}

loc_80263C28:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263C30:
{
    r0 = MemoryInline::FlatRead16(r5);
    r4 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 2));
}

loc_80263C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80263C64;
    }
}

loc_80263C58:
{
}

loc_80263C5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80263CC0;
    }
}

loc_80263C60:
{
    goto loc_80263F3C;
}

loc_80263C64:
{
}

loc_80263C68:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80263F3C;
    }
}

loc_80263C6C:
{
}

loc_80263C70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(20))) {
        goto loc_80263C80;
    }
}

loc_80263C74:
{
}

loc_80263C78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(37))) {
        goto loc_80263CA0;
    }
}

loc_80263C7C:
{
    goto loc_80263F3C;
}

loc_80263C80:
{
    r3 = r15;
    r4 = 15;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl42_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl42_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl42_0x8027CA7C;
    }
}

loc_inl42_0x8027CA74:
{
    r3 = 0;
    goto loc_inl42_cont_8027CA68;
}

loc_inl42_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl42_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl42_0x8027CA90;
    }
}

loc_inl42_0x8027CA88:
{
    r3 = 1;
    goto loc_inl42_cont_8027CA68;
}

loc_inl42_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_34 & 1);
    r0_subfc_sub_20 = r0;
    r0 = (r5 - r0_subfc_sub_20);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_20) ? 1u : 0u) << 29);
    r3_adde_right_20 = r3;
    r3_ca_20 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_20);
    r3 = (r3 + r3_ca_20);
}

loc_inl42_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263C90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263F3C;
    }
}

loc_80263C94:
{
    r0 = 21;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263CA0:
{
    r3 = r15;
    r4 = 15;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl43_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl43_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl43_0x8027CA7C;
    }
}

loc_inl43_0x8027CA74:
{
    r3 = 0;
    goto loc_inl43_cont_8027CA68;
}

loc_inl43_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl43_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl43_0x8027CA90;
    }
}

loc_inl43_0x8027CA88:
{
    r3 = 1;
    goto loc_inl43_cont_8027CA68;
}

loc_inl43_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_32 & 1);
    r0_subfc_sub_18 = r0;
    r0 = (r5 - r0_subfc_sub_18);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_18) ? 1u : 0u) << 29);
    r3_adde_right_18 = r3;
    r3_ca_18 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_18);
    r3 = (r3 + r3_ca_18);
}

loc_inl43_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263CB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263F3C;
    }
}

loc_80263CB4:
{
    r0 = 38;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263CC0:
{
}

loc_80263CC4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80263F3C;
    }
}

loc_80263CC8:
{
}

loc_80263CCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(15))) {
        goto loc_80263CEC;
    }
}

loc_80263CD0:
{
}

loc_80263CD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(80))) {
        goto loc_80263CEC;
    }
}

loc_80263CD8:
{
}

loc_80263CDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(60))) {
        goto loc_80263D08;
    }
}

loc_80263CE0:
{
}

loc_80263CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(81))) {
        goto loc_80263D08;
    }
}

loc_80263CE8:
{
    goto loc_80263F3C;
}

loc_80263CEC:
{
    r3 = r15;
    ctx->lr = 0x80263CF4u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331204_2AC3A = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_2AC3A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263CFC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80263F3C;
    }
}

loc_80263D00:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r28));
    goto loc_80263F3C;
}

loc_80263D08:
{
    r3 = r15;
    ctx->lr = 0x80263D10u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331204_2B02F = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_2B02F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263D18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80263F3C;
    }
}

loc_80263D1C:
{
    r0 = 71;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263D28:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r15 + 620));
    ctx->lr = 0x80263D38u;
    if constexpr (KnownRegArgsCpuCall<0x802794F4u>(&func_802794F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802794F4_2B4C3 = func_802794F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802794F4_2B4C3);
        r4 = static_cast<uint32_t>(regargs_result_802794F4_2B4C3 >> 32);
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
        InvokeDirectCpu<0x802794F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263D40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80263D5C;
    }
}

loc_80263D44:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_80263D6C;
}

loc_80263D5C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_28 & -2);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(r30_addr_2);
}

loc_80263D6C:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263D7C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r15 + 620));
    ctx->lr = 0x80263D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802794F4u>(&func_802794F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802794F4_2BE6B = func_802794F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802794F4_2BE6B);
        r4 = static_cast<uint32_t>(regargs_result_802794F4_2BE6B >> 32);
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
        InvokeDirectCpu<0x802794F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263D94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80263DB0;
    }
}

loc_80263D98:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_80263DC0;
}

loc_80263DB0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_36 & -2);
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead16(r31_addr_2);
}

loc_80263DC0:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263DD0:
{
    r0 = MemoryInline::FlatRead8((r15 + 1480));
}

loc_80263DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263E1C;
    }
}

loc_80263DDC:
{
    r0 = 11;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 2));
}

loc_80263DEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(250))) {
        goto loc_80263E00;
    }
}

loc_80263DF0:
{
    r3 = r15;
    r4 = 0;
    // inline leaf 0x80274640 (18 guest instruction(s))
}

loc_inl44_0x80274640:
{
    r3 = MemoryInline::FlatRead8((r3 + 1480));
}

loc_inl44_0x80274648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl44_0x80274654;
    }
}

loc_inl44_0x8027464C:
{
    r3 = 0;
    goto loc_inl44_cont_80274640;
}

loc_inl44_0x80274654:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl44_0x8027465C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl44_0x80274674;
    }
}

loc_inl44_0x80274660:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26608);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_10);
    goto loc_inl44_cont_80274640;
}

loc_inl44_0x80274674:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26636);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_11);
}

loc_inl44_cont_80274640:
{
    // end of inlined leaf 0x80274640
    goto loc_80263E0C;
}

loc_80263E00:
{
    r3 = r15;
    r4 = 1;
    // inline leaf 0x80274640 (18 guest instruction(s))
}

loc_inl45_0x80274640:
{
    r3 = MemoryInline::FlatRead8((r3 + 1480));
}

loc_inl45_0x80274648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl45_0x80274654;
    }
}

loc_inl45_0x8027464C:
{
    r3 = 0;
    goto loc_inl45_cont_80274640;
}

loc_inl45_0x80274654:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl45_0x8027465C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl45_0x80274674;
    }
}

loc_inl45_0x80274660:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26608);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_13);
    goto loc_inl45_cont_80274640;
}

loc_inl45_0x80274674:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26636);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_14);
}

loc_inl45_cont_80274640:
{
    // end of inlined leaf 0x80274640
}

loc_80263E0C:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263E1C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263E24:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15520));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_80263E38;
}

loc_80263E30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15512));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80263E38:
{
}

loc_80263E3C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80263E48;
    }
}

loc_80263E40:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263E48:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r14));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r24 + 250));
    r0 = (r3 + -5);
}

loc_80263E60:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80263EA4;
    }
}

loc_80263E64:
{
}

loc_80263E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80263E80;
    }
}

loc_80263E6C:
{
}

loc_80263E70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(7))) {
        goto loc_80263EC8;
    }
}

loc_80263E74:
{
}

loc_80263E78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_80263EFC;
    }
}

loc_80263E7C:
{
    goto loc_80263F3C;
}

loc_80263E80:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263E98;
    }
}

loc_80263E8C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263E98:
{
    r0 = 6;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EA4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263EAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263EBC;
    }
}

loc_80263EB0:
{
    r0 = 3;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EBC:
{
    r0 = 7;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EC8:
{
    r0 = MemoryInline::FlatRead8((r15 + 1413));
}

loc_80263ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263EF4;
    }
}

loc_80263ED4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263EE8;
    }
}

loc_80263EE0:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r29));
    goto loc_80263F3C;
}

loc_80263EE8:
{
    r0 = 8;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EF4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263EFC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263F04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263F14;
    }
}

loc_80263F08:
{
    r0 = 5;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263F14:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r14));
    goto loc_80263F3C;
}

loc_80263F1C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263F24:
{
    r0 = (r3 & 127);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 2));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80263F3C:
{
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_80263F40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263F98;
    }
}

loc_80263F44:
{
}

loc_80263F48:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80263F6C;
    }
}

loc_80263F4C:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263F58:
{
    r3 = r15;
    ctx->lr = 0x80263F60u;
    if constexpr (KnownRegArgsCpuCall<0x8026A3A0u>(&func_8026A3A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8026A3A0_2E814 = func_8026A3A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A3A0_2E814);
        r4 = static_cast<uint32_t>(regargs_result_8026A3A0_2E814 >> 32);
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
        InvokeDirectCpu<0x8026A3A0u>(ctx);
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

loc_80263F64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FC0;
    }
}

loc_80263F68:
{
    goto loc_8026423C;
}

loc_80263F6C:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263F78:
{
    r3 = r15;
    r4 = 6;
    f1.d = f25.d;
    f2.d = f24.d;
    ctx->lr = 0x80263F8Cu;
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
    InvokeDirectCpu<0x8026A378u>(ctx);
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
}

loc_80263F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FC0;
    }
}

loc_80263F94:
{
    goto loc_8026423C;
}

loc_80263F98:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263FA4:
{
    r3 = r15;
    r4 = 7;
    f1.d = f25.d;
    f2.d = f24.d;
    ctx->lr = 0x80263FB8u;
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
    InvokeDirectCpu<0x8026A378u>(ctx);
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
}

loc_80263FBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263FC0:
{
}

loc_80263FC4:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80264234;
    }
}

loc_80263FC8:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80263FD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FF8;
    }
}

loc_80263FD4:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80263FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263FF8;
    }
}

loc_80263FE0:
{
    r3 = r15;
    r4 = 0;
    r5 = 10;
    r6 = 0;
    ctx->lr = 0x80263FF4u;
    if constexpr (KnownRegArgsCpuCall<0x8027621Cu>(&func_8027621C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027621C_2FFBC = func_8027621C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8027621C_2FFBC);
        r4 = static_cast<uint32_t>(regargs_result_8027621C_2FFBC >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027621Cu>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80264234;
}

loc_80263FF8:
{
}

loc_80263FFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_80264000:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80264008:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_80264118;
    }
}

loc_8026400C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25040);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r3_addr_18 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_18);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80264080u:
        goto loc_80264080;
        break;
    case 0x80264024u:
        goto loc_80264024;
        break;
    case 0x80264118u:
        goto loc_80264118;
        break;
    case 0x802640A4u:
        goto loc_802640A4;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80264024:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_31296 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_31296);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_31296 >> 32);
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

loc_80264038:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_8026403C:
{
    r3 = r15;
    ctx->lr = 0x80264044u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_3171F = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_3171F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r3 = MemoryInline::FlatRead32((r15 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r0 = (r3 + -24576);
}

loc_80264060:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80264118;
    }
}

loc_80264064:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80264118;
}

loc_80264080:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_31C82 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_31C82);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_31C82 >> 32);
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

loc_80264094:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_80264098:
{
    r3 = r15;
    ctx->lr = 0x802640A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_3210B = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_3210B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_80264118;
}

loc_802640A4:
{
    r3 = r15;
    // inline leaf 0x80277144 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80277144
}

loc_802640B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264118;
    }
}

loc_802640B4:
{
    r0 = MemoryInline::FlatRead8((r15 + 24));
}

loc_802640BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264118;
    }
}

loc_802640C0:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_325E8 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_325E8);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_325E8 >> 32);
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

loc_802640D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_802640D8:
{
    r3 = r15;
    ctx->lr = 0x802640E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_32A71 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_32A71;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r3 = MemoryInline::FlatRead32((r15 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r0 = (r3 + -24576);
}

loc_802640FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80264118;
    }
}

loc_80264100:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 23;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80264118:
{
    r0 = (r19 & 65535);
}

loc_80264120:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80264134;
    }
}

loc_80264124:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
    MemoryInline::FlatWrite16((r15 + 774), static_cast<uint16_t>(r19));
    goto loc_80264158;
}

loc_80264134:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8026413C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264158;
    }
}

loc_80264140:
{
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r3 + -167);
}

loc_8026414C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80264158;
    }
}

loc_80264150:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
}

loc_80264158:
{
    r0 = MemoryInline::FlatRead16((r21 + 6));
    r0 = (r0 & 16384);
}

loc_80264164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026418C;
    }
}

loc_80264168:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_33432 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_33432);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_33432 >> 32);
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

loc_8026417C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_80264180:
{
    r3 = r15;
    ctx->lr = 0x80264188u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_338BB = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_338BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_802641D4;
}

loc_8026418C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80264194:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802641D4;
    }
}

loc_80264198:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802641B4;
    }
}

loc_802641A4:
{
}

loc_802641A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802641B4;
    }
}

loc_802641AC:
{
}

loc_802641B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_802641D4;
    }
}

loc_802641B4:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_33E73 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_33E73);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_33E73 >> 32);
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

loc_802641C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_802641CC:
{
    r3 = r15;
    ctx->lr = 0x802641D4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_342FC = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_342FC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802641D4:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_802641DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802641EC;
    }
}

loc_802641E0:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20))) {
        goto loc_80264200;
    }
}

loc_802641EC:
{
}

loc_802641F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264208;
    }
}

loc_802641F4:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(158))) {
        goto loc_80264208;
    }
}

loc_80264200:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 1623), static_cast<uint8_t>(r0));
}

loc_80264208:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 & 32);
}

loc_80264214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264220;
    }
}

loc_80264218:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite16((r15 + 182), static_cast<uint16_t>(r0));
}

loc_80264220:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r6 = MemoryInline::FlatRead16((r1 + 14));
    ctx->lr = 0x80264234u;
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
    InvokeDirectCpu<0x80275754u>(ctx);
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
}

loc_80264234:
{
    r3 = 1;
    goto loc_80264254;
}

loc_8026423C:
{
    r17 = (r17 + 1);
    r21 = (r21 + 22);
}

loc_80264244:
{
    r0 = MemoryInline::FlatRead8(r21);
}

loc_8026424C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80262AC8;
    }
}

loc_80264250:
{
    r3 = 0;
}

loc_80264254:
{
    r0 = 296;
    addr_psqx_80264258_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264258_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 128u, (r1 + 288));
    r0 = 280;
    addr_psqx_80264264_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264264_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 272));
    r0 = 264;
    addr_psqx_80264270_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264270_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 256));
    r0 = 248;
    addr_psqx_8026427C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8026427C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 240));
    r0 = 232;
    addr_psqx_80264288_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264288_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 224));
    r0 = 216;
    addr_psqx_80264294_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264294_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 208));
    r0 = 200;
    addr_psqx_802642A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642A0_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 192));
    r0 = 184;
    addr_psqx_802642AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642AC_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 176));
    r0 = 168;
    addr_psqx_802642B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642B8_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::ReadResolved32(guest_range_3, 148u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802629A4 func_802629A4 preserves=true fpr_mask=0x00000000
