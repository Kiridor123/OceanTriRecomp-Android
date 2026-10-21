#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804736F0(CpuContext* ctx);
extern "C" uint64_t func_804736F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80473C60(CpuContext* ctx);
extern "C" uint32_t func_80473C60_ra38_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804740C0(CpuContext* ctx);
extern "C" uint32_t func_804740C0_ra38_1e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80474440(CpuContext* ctx);
extern "C" double func_80474440_ra38_e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80474750(CpuContext* ctx);
extern "C" uint64_t func_80474750_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80474EC0(CpuContext* ctx);
extern "C" uint32_t func_80474EC0_ra38_fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_80472A10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_80472FEC_loc_0 = 0;
    uint32_t addr_lfdx_80473034_loc_0 = 0;
    uint32_t addr_lfdx_80473070_loc_0 = 0;
    uint32_t addr_lfdx_80473088_loc_0 = 0;
    uint32_t addr_lfdx_804730A0_loc_0 = 0;
    uint32_t addr_lfdx_804730B8_loc_0 = 0;
    uint32_t addr_lfdx_804730D0_loc_0 = 0;
    uint32_t addr_lfdx_804730E8_loc_0 = 0;
    uint32_t addr_lfdx_8047312C_loc_0 = 0;
    uint32_t addr_lfdx_80473374_loc_0 = 0;
    uint32_t addr_lfdx_804733BC_loc_0 = 0;
    uint32_t addr_lfdx_804733F8_loc_0 = 0;
    uint32_t addr_lfdx_80473410_loc_0 = 0;
    uint32_t addr_lfdx_80473428_loc_0 = 0;
    uint32_t addr_lfdx_80473440_loc_0 = 0;
    uint32_t addr_lfdx_80473458_loc_0 = 0;
    uint32_t addr_lfdx_80473470_loc_0 = 0;
    uint32_t addr_lfdx_804734B8_loc_0 = 0;
    uint32_t addr_lfdx_80473530_loc_0 = 0;
    uint32_t addr_lfdx_80473554_loc_0 = 0;
    uint32_t addr_lfdx_80473560_loc_0 = 0;
    uint32_t addr_stfdx_8047354C_loc_0 = 0;
    uint32_t addr_stfdx_8047355C_loc_0 = 0;
    uint32_t addr_stfdx_80473568_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_12 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r3_subfic_ra_1 = 0;
    uint32_t r3_subfic_ra_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
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
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80472A10u);
    goto loc_80472A10;

loc_80472A10:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -656), 0, 664u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -656), r1);
    r1 = (r1 + -656);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 660u, (r1 + 660), r0);
    r11 = (r1 + 544);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 640u, (r1 + 640), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 648);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 624u, (r1 + 624), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 632);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 608u, (r1 + 608), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 616);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 592u, (r1 + 592), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 576u, (r1 + 576), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 560u, (r1 + 560), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 568);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 544u, (r1 + 544), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r23 = 0;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 464u, (r1 + 464), r0);
    r27 = r3;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -2824));
    r28 = r4;
    MemoryInline::WriteResolved32(guest_range_3, 472u, (r1 + 472), r0);
    r29 = r6;
    f28.d = MemoryInline::FlatReadFloat64((r2 + -2832));
    r22 = r6;
    MemoryInline::WriteResolved16(guest_range_3, 72u, (r1 + 72), static_cast<uint16_t>(r23));
    r31 = (r5 + 28);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -2808));
    r24 = (r1 + 72);
    MemoryInline::WriteResolved16(guest_range_3, 74u, (r1 + 74), static_cast<uint16_t>(r23));
    r30 = 0;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -2816));
    r25 = 0x80000000u;
    MemoryInline::WriteResolved16(guest_range_3, 76u, (r1 + 76), static_cast<uint16_t>(r23));
    r26 = 2;
    f26.d = MemoryInline::FlatReadFloat64((r2 + -2848));
    MemoryInline::WriteResolved16(guest_range_3, 78u, (r1 + 78), static_cast<uint16_t>(r23));
    f25.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    MemoryInline::WriteResolved16(guest_range_3, 80u, (r1 + 80), static_cast<uint16_t>(r23));
    f27.d = MemoryInline::FlatReadFloat64((r2 + -2840));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 82u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 82u, (r1 + 82), r23);
        MemoryInline::WriteResolved16(guest_range_3, 84u, (r1 + 84), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 86u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 86u, (r1 + 86), r23);
        MemoryInline::WriteResolved16(guest_range_3, 88u, (r1 + 88), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 90u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 90u, (r1 + 90), r23);
        MemoryInline::WriteResolved16(guest_range_3, 92u, (r1 + 92), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 94u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 94u, (r1 + 94), r23);
        MemoryInline::WriteResolved16(guest_range_3, 96u, (r1 + 96), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 98u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 98u, (r1 + 98), r23);
        MemoryInline::WriteResolved16(guest_range_3, 100u, (r1 + 100), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 102u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 102u, (r1 + 102), r23);
        MemoryInline::WriteResolved16(guest_range_3, 104u, (r1 + 104), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 106u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 106u, (r1 + 106), r23);
        MemoryInline::WriteResolved16(guest_range_3, 108u, (r1 + 108), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 110u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 110u, (r1 + 110), r23);
        MemoryInline::WriteResolved16(guest_range_3, 112u, (r1 + 112), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 114u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 114u, (r1 + 114), r23);
        MemoryInline::WriteResolved16(guest_range_3, 116u, (r1 + 116), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 118u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 118u, (r1 + 118), r23);
        MemoryInline::WriteResolved16(guest_range_3, 120u, (r1 + 120), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 122u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_3, 122u, (r1 + 122), r23);
        MemoryInline::WriteResolved16(guest_range_3, 124u, (r1 + 124), r23);
    }
    MemoryInline::WriteResolved16(guest_range_3, 126u, (r1 + 126), static_cast<uint16_t>(r23));
    goto loc_80473164;
}

loc_80472B20:
{
    r9 = MemoryInline::FlatRead16((r1 + 100));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
}

loc_80472B28:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 102), 0, 26u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r1 + 102));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = 14;
    r7 = MemoryInline::ReadResolved16(guest_range_4, 2u, (r1 + 104));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::ReadResolved16(guest_range_4, 4u, (r1 + 106));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_4, 6u, (r1 + 108));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r1 + 110));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r1 + 112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r1 + 72), static_cast<uint16_t>(r9));
    r9 = MemoryInline::ReadResolved16(guest_range_4, 12u, (r1 + 114));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r1 + 74), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_4, 14u, (r1 + 116));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r1 + 76), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_4, 16u, (r1 + 118));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 6u, (r1 + 78), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_4, 18u, (r1 + 120));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r1 + 80), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_4, 20u, (r1 + 122));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r1 + 82), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_4, 22u, (r1 + 124));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r1 + 84), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 24u, (r1 + 126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_5, 14u, (r1 + 86), r9);
        MemoryInline::WriteResolved16(guest_range_5, 16u, (r1 + 88), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 18u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_5, 18u, (r1 + 90), r7);
        MemoryInline::WriteResolved16(guest_range_5, 20u, (r1 + 92), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 22u, (r1 + 94), r4);
        MemoryInline::WriteResolved16(guest_range_5, 24u, (r1 + 96), r3);
    }
    MemoryInline::WriteResolved16(guest_range_5, 26u, (r1 + 98), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(14))) {
        goto loc_80472BA0;
    }
}

loc_80472B9C:
{
    r5 = r28;
}

loc_80472BA0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80472BA4:
{
    r28 = (r28 - r5);
    r3 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80472C78;
    }
}

loc_80472BB0:
{
}

loc_80472BB4:
{
    r4 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_80472C44;
    }
}

loc_80472BBC:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80472BD4;
    }
}

loc_80472BC4:
{
    r0 = (r25 + -2);
}

loc_80472BCC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80472BD4;
    }
}

loc_80472BD0:
{
    r6 = 1;
}

loc_80472BD4:
{
}

loc_80472BD8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80472C44;
    }
}

loc_80472BDC:
{
    r0 = (r4 + 7);
    r6 = (r1 + 72);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_80472BF0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80472C44;
    }
}

loc_80472BF4:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r27, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_6, 0u, r27);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 8);
    guest_range_7 = MemoryInline::ResolveRangeHost((r6 + 28), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r6 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 2u, (r27 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 2u, (r6 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 4u, (r27 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 4u, (r6 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 6u, (r27 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 6u, (r6 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 8u, (r27 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r6 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 10u, (r27 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r6 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 12u, (r27 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r6 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 14u, (r27 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r27 = (r27 + 16);
    MemoryInline::WriteResolved16(guest_range_7, 14u, (r6 + 42), static_cast<uint16_t>(r0));
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472BF4;
    }
}

loc_80472C44:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r6 = (r1 + 72);
    r0 = (r5 - r3);
    r6 = (r6 + r4);
    ctr = r0;
}

loc_80472C5C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_80472C78;
    }
}

loc_80472C60:
{
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r27 = (r27 + 2);
    MemoryInline::FlatWrite16((r6 + 28), static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472C60;
    }
}

loc_80472C78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_80472C7C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r1 + 72);
    r3_subfic_ra_2 = r3;
    r3 = (14 - r3_subfic_ra_2);
    r4 = (r4 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80472CDC;
    }
}

loc_80472C90:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
}

loc_80472C94:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80472CCC;
    }
}

loc_80472C9C:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r4 + 28), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_8, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_8, 0u, (r4 + 28), r23);
        MemoryInline::WriteResolved16(guest_range_8, 2u, (r4 + 30), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_8, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_8, 4u, (r4 + 32), r23);
        MemoryInline::WriteResolved16(guest_range_8, 6u, (r4 + 34), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_8, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_8, 8u, (r4 + 36), r23);
        MemoryInline::WriteResolved16(guest_range_8, 10u, (r4 + 38), r23);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_8, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_8, 12u, (r4 + 40), r23);
        MemoryInline::WriteResolved16(guest_range_8, 14u, (r4 + 42), r23);
    }
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472C9C;
    }
}

loc_80472CC4:
{
    r3 = (r3 & 7);
}

loc_80472CC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80472CDC;
    }
}

loc_80472CCC:
{
    ctr = r3;
}

loc_80472CD0:
{
    MemoryInline::FlatWrite16((r4 + 28), static_cast<uint16_t>(r23));
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472CD0;
    }
}

loc_80472CDC:
{
    r5 = (r1 + 48);
    r4 = 0;
    // nop
}

loc_80472CE8:
{
    MemoryInline::FlatWriteFloat64(r5, f25.d);
    r6 = (r1 + 72);
    r3 = 0;
    ctr = r26;
}

loc_80472CF8:
{
    r0 = (r3 - r4);
    r7 = (r3 + 1);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & -2);
    r11 = MemoryInline::FlatRead16((r6 + 28));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r8 = (r24 + r8);
    r7 = (r7 - r4);
    r10 = MemoryInline::FlatRead16((r8 + 28));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & -2);
    r9 = (r24 + r7);
    r0 = (r3 + 2);
    r11 = (r11 * r10);
    r7 = (r3 + 3);
    r8 = (r0 - r4);
    r10 = MemoryInline::FlatRead16((r6 + 30));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = MemoryInline::FlatRead16((r9 + 28));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r7 = (r7 - r4);
    r9 = (r10 * r9);
    r11 = (r11 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 468), r11);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_5 & -2);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & -2);
    r10 = MemoryInline::FlatRead16((r6 + 32));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r8 = (r24 + r8);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r8 = MemoryInline::FlatRead16((r8 + 28));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (r24 + r7);
    r0 = (r3 + 4);
    r9 = (r9 ^ -2147483648);
    r10 = (r10 * r8);
    f1.d = (f1.d - f26.d);
    f0.d = MemoryInline::FlatReadFloat64(r5);
    r0 = (r0 - r4);
    MemoryInline::FlatWriteRam32((r1 + 476), r9);
    f1.d = (f0.d - f1.d);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 472));
    r9 = (r24 + r0);
    r10 = (r10 ^ -2147483648);
    f0.d = (f0.d - f26.d);
    MemoryInline::FlatWriteRam32((r1 + 468), r10);
    r8 = MemoryInline::FlatRead16((r6 + 34));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r3 + 5);
    r7 = MemoryInline::FlatRead16((r7 + 28));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWriteFloat64(r5, f1.d);
    r8 = (r8 * r7);
    r7 = (r0 - r4);
    r0 = (r3 + 6);
    f0.d = (f1.d - f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_6 & -2);
    r0 = (r0 - r4);
    r8 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 476), r8);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r8 = (r24 + r7);
    r10 = MemoryInline::FlatRead16((r6 + 36));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r7 = (r24 + r0);
    r0 = MemoryInline::FlatRead16((r9 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteFloat64(r5, f0.d);
    f2.d = (f1.d - f26.d);
    r10 = (r10 * r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 472));
    f1.d = MemoryInline::FlatReadFloat64(r5);
    r3 = (r3 + 7);
    r0 = MemoryInline::FlatRead16((r8 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = MemoryInline::FlatRead16((r6 + 38));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    f1.d = (f1.d - f2.d);
    r10 = (r10 ^ -2147483648);
    r9 = (r9 * r0);
    r8 = MemoryInline::FlatRead16((r6 + 40));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = MemoryInline::FlatRead16((r7 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = (f0.d - f26.d);
    MemoryInline::FlatWriteFloat64(r5, f1.d);
    r6 = (r6 + 14);
    f1.d = (f1.d - f0.d);
    MemoryInline::FlatWriteRam32((r1 + 468), r10);
    r7 = (r9 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r0 = (r8 * r0);
    MemoryInline::FlatWriteRam32((r1 + 476), r7);
    f0.d = (f0.d - f26.d);
    MemoryInline::FlatWriteFloat64(r5, f1.d);
    f1.d = (f1.d - f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 472));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    f0.d = (f0.d - f26.d);
    MemoryInline::FlatWriteFloat64(r5, f1.d);
    f1.d = (f1.d - f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 464));
    f0.d = (f0.d - f26.d);
    f0.d = (f1.d - f0.d);
    MemoryInline::FlatWriteFloat64(r5, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472CF8;
    }
}

loc_80472E70:
{
    r4 = (r4 + 1);
    r5 = (r5 + 8);
}

loc_80472E7C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(2))) {
        goto loc_80472CE8;
    }
}

loc_80472E80:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_80472E8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80473164;
    }
}

loc_80472E90:
{
    r3 = (r1 + 100);
    r5 = (r1 + 200);
    r4 = 14;
    ctx->lr = 0x80472EA0u;
    if constexpr (KnownRegArgsCpuCall<0x80474440u>(&func_80474440)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80474440_7B92 = func_80474440_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80474440_7B92;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80474440u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 200);
    r4 = (r1 + 8);
    ctx->lr = 0x80472EACu;
    if constexpr (KnownRegArgsCpuCall<0x80474750u>(&func_80474750)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80474750_82F3 = func_80474750_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80474750_82F3);
        r4 = static_cast<uint32_t>(regargs_result_80474750_82F3 >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80474750u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80472EB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80473164;
    }
}

loc_80472EB4:
{
    r3 = (r1 + 200);
    r4 = (r1 + 8);
    r5 = (r1 + 48);
    ctx->lr = 0x80472EC4u;
    if constexpr (KnownRegArgsCpuCall<0x80474EC0u>(&func_80474EC0)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80474EC0_8DA6 = func_80474EC0_ra38_fe_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r4 = regargs_result_80474EC0_8DA6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80474EC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f28.d);
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x804740C0u>(&func_804740C0)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804740C0_96D9 = func_804740C0_ra38_1e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804740C0_96D9;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804740C0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80472ED8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80473164;
    }
}

loc_80472EDC:
{
    MemoryInline::FlatWriteFloat64(r22, f28.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80472EE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80472EF4;
    }
}

loc_80472EF0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f29.d);
}

loc_80472EF4:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80472EFC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80472F08;
    }
}

loc_80472F04:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
}

loc_80472F08:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80472F10:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80472F1C;
    }
}

loc_80472F18:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f29.d);
}

loc_80472F1C:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80472F24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80472F30;
    }
}

loc_80472F2C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f31.d);
}

loc_80472F30:
{
    MemoryInline::FlatWriteFloat64(r22, f28.d);
    r5 = (r1 + 32);
    r6 = (r22 + 8);
    r4 = 1;
}

loc_80472F40:
{
    f0.d = MemoryInline::FlatReadFloat64(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80472F48:
{
    MemoryInline::FlatWriteFloat64(r6, f0.d);
    r3 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80473148;
    }
}

loc_80472F54:
{
    r0 = (r4 + -1);
    r8 = (r4 + -8);
}

loc_80472F60:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80473104;
    }
}

loc_80472F64:
{
    r7 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80472F80;
    }
}

loc_80472F70:
{
    r0 = (r25 + -2);
}

loc_80472F78:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80472F80;
    }
}

loc_80472F7C:
{
    r9 = 1;
}

loc_80472F80:
{
}

loc_80472F84:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80472FBC;
    }
}

loc_80472F88:
{
    r10 = (r4 & -2147483648);
    r9 = 1;
    r0 = (r10 + -2147483648);
}

loc_80472F98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80472FB0;
    }
}

loc_80472F9C:
{
    r0 = (r4 + -1);
    r0 = (r0 & -2147483648);
}

loc_80472FA8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(r0))) {
        goto loc_80472FB0;
    }
}

loc_80472FAC:
{
    r9 = 0;
}

loc_80472FB0:
{
}

loc_80472FB4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80472FBC;
    }
}

loc_80472FB8:
{
    r7 = 1;
}

loc_80472FBC:
{
}

loc_80472FC0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80473104;
    }
}

loc_80472FC4:
{
    r0 = (r8 + 6);
    r7 = (r22 + 8);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    ctr = r0;
}

loc_80472FD8:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(1))) {
        goto loc_80473104;
    }
}

loc_80472FDC:
{
    r0 = (r4 - r3);
    r8 = (r3 + 1);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r9 = (r9_rot_4 & -8);
    guest_range_9 = MemoryInline::ResolveRangeHost(r6, 0, 8u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_80472FEC_loc_0 = (r22 + r9);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80472FEC_loc_0);
    r21 = (r4 - r8);
    r0 = (r3 + 2);
    r8 = (r3 + 3);
    f1.d = (f1.d * f0.d);
    r12 = (r4 - r0);
    r11 = (r4 - r8);
    f0.d = MemoryInline::FlatReadFloat64(r7);
    r0 = (r3 + 4);
    r9 = (r3 + 5);
    f0.d = (f0.d + f1.d);
    r10 = (r4 - r0);
    r9 = (r4 - r9);
    r8 = (r3 + 6);
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r21_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(3));
    r21 = (r21_rot_4 & -8);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    r0 = (r3 + 7);
    addr_lfdx_80473034_loc_0 = (r22 + r21);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473034_loc_0);
    r8 = (r4 - r8);
    r0 = (r4 - r0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 8));
    f1.d = (f2.d * f1.d);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_4 & -8);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_4 & -8);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_4 & -8);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_5 & -8);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_8 & -8);
    f0.d = (f0.d + f1.d);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    r3 = (r3 + 8);
    MemoryInline::FlatWriteFloat64((r7 + 8), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_80473070_loc_0 = (r22 + r12);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473070_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 16), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_80473088_loc_0 = (r22 + r11);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473088_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 24));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 24), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_804730A0_loc_0 = (r22 + r10);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804730A0_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 32));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 32), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_804730B8_loc_0 = (r22 + r9);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804730B8_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 40));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 40), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_804730D0_loc_0 = (r22 + r8);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804730D0_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 48));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 48), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, r6);
    addr_lfdx_804730E8_loc_0 = (r22 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804730E8_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r7 + 56));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r7 + 56), f0.d);
    r7 = (r7 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472FDC;
    }
}

loc_80473104:
{
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r7 = (r7_rot_8 & -8);
    r0 = (r4 - r3);
    r7 = (r22 + r7);
    ctr = r0;
}

loc_80473118:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_80473148;
    }
}

loc_8047311C:
{
    r0 = (r4 - r3);
    f2.d = MemoryInline::FlatReadFloat64(r6);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & -8);
    f0.d = MemoryInline::FlatReadFloat64(r7);
    addr_lfdx_8047312C_loc_0 = (r22 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8047312C_loc_0);
    r3 = (r3 + 1);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047311C;
    }
}

loc_80473148:
{
    r4 = (r4 + 1);
    r6 = (r6 + 8);
}

loc_80473154:
{
    r5 = (r5 + 8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(2))) {
        goto loc_80472F40;
    }
}

loc_8047315C:
{
    r30 = (r30 + 1);
    r22 = (r22 + 24);
}

loc_80473164:
{
}

loc_80473168:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(0))) {
        goto loc_80472B20;
    }
}

loc_8047316C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r3 = r29;
    f7.d = MemoryInline::FlatReadFloat64((r2 + -2832));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f7.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    ctr = r30;
}

loc_8047318C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80473200;
    }
}

loc_80473190:
{
    f1.d = MemoryInline::FlatReadFloat64((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 16));
    r3 = (r3 + 24);
    f6.d = (-(f1.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f5.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f7.d);
    f2.d = (f5.d * f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f6.d);
    f3.d = (f5.d * f5.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f5.d);
    f4.d = (f6.d + f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f7.d);
    f2.d = (f5.d * f7.d);
    f3.d = (f7.d - f3.d);
    f3.d = (f4.d / f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f3.d);
    f4.d = (f3.d * f7.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 280), f4.d);
    f3.d = (f6.d * f4.d);
    f1.d = (f1.d + f4.d);
    f2.d = (f3.d + f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f2.d);
    f0.d = (f0.d + f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473190;
    }
}

loc_80473200:
{
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 476), r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2848));
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 472));
    r5 = (r1 + 272);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 464));
    f3.d = (f1.d - f4.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = (f0.d - f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f2.d = (f2.d / f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    f0.d = (f0.d / f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    ctx->lr = 0x80473248u;
    if constexpr (KnownRegArgsCpuCall<0x80473C60u>(&func_80473C60)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80473C60_CC43 = func_80473C60_ra38_1fe_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_80473C60_CC43;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80473C60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -2864), 0, 72u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -2832));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -2824));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80473258:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -2808));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -2816));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8047326C;
    }
}

loc_80473268:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f3.d);
}

loc_8047326C:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80473274:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80473280;
    }
}

loc_8047327C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
}

loc_80473280:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80473288:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80473294;
    }
}

loc_80473290:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f3.d);
}

loc_80473294:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8047329C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804732A8;
    }
}

loc_804732A4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
}

loc_804732A8:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -2832));
    r6 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f0.d);
    r7 = (r1 + 280);
    r9 = (r1 + 272);
    r5 = 1;
    r3 = 0x80000000u;
    // nop
}

loc_804732C8:
{
    f0.d = MemoryInline::FlatReadFloat64(r6);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_804732D0:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r4 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804734D4;
    }
}

loc_804732DC:
{
    r0 = (r5 + -1);
    r10 = (r5 + -8);
}

loc_804732E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8047348C;
    }
}

loc_804732EC:
{
    r8 = 0;
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80473308;
    }
}

loc_804732F8:
{
    r0 = (r3 + -2);
}

loc_80473300:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80473308;
    }
}

loc_80473304:
{
    r11 = 1;
}

loc_80473308:
{
}

loc_8047330C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80473344;
    }
}

loc_80473310:
{
    r12 = (r5 & -2147483648);
    r11 = 1;
    r0 = (r12 + -2147483648);
}

loc_80473320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80473338;
    }
}

loc_80473324:
{
    r0 = (r5 + -1);
    r0 = (r0 & -2147483648);
}

loc_80473330:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r0))) {
        goto loc_80473338;
    }
}

loc_80473334:
{
    r11 = 0;
}

loc_80473338:
{
}

loc_8047333C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80473344;
    }
}

loc_80473340:
{
    r8 = 1;
}

loc_80473344:
{
}

loc_80473348:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8047348C;
    }
}

loc_8047334C:
{
    r0 = (r10 + 6);
    r8 = (r1 + 280);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_21 & 536870911);
    ctr = r0;
}

loc_80473360:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(1))) {
        goto loc_8047348C;
    }
}

loc_80473364:
{
    r0 = (r5 - r4);
    r10 = (r4 + 1);
    r11_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r11 = (r11_rot_9 & -8);
    guest_range_10 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473374_loc_0 = (r9 + r11);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473374_loc_0);
    r24 = (r5 - r10);
    r0 = (r4 + 2);
    r10 = (r4 + 3);
    f1.d = (f1.d * f0.d);
    r23 = (r5 - r0);
    r22 = (r5 - r10);
    f0.d = MemoryInline::FlatReadFloat64(r8);
    r0 = (r4 + 4);
    r11 = (r4 + 5);
    f0.d = (f0.d + f1.d);
    r12 = (r5 - r0);
    r11 = (r5 - r11);
    r10 = (r4 + 6);
    MemoryInline::FlatWriteFloat64(r8, f0.d);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r24 = (r24_rot_3 & -8);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    r0 = (r4 + 7);
    addr_lfdx_804733BC_loc_0 = (r9 + r24);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804733BC_loc_0);
    r10 = (r5 - r10);
    r0 = (r5 - r0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 8));
    f1.d = (f2.d * f1.d);
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r23 = (r23_rot_3 & -8);
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r22 = (r22_rot_3 & -8);
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_9 & -8);
    r11_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_10 & -8);
    r10_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_9 & -8);
    f0.d = (f0.d + f1.d);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r4 = (r4 + 8);
    MemoryInline::FlatWriteFloat64((r8 + 8), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_804733F8_loc_0 = (r9 + r23);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804733F8_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 16));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 16), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473410_loc_0 = (r9 + r22);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473410_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 24));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 24), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473428_loc_0 = (r9 + r12);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473428_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 32));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 32), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473440_loc_0 = (r9 + r11);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473440_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 40));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 40), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473458_loc_0 = (r9 + r10);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473458_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 48));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 48), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r7);
    addr_lfdx_80473470_loc_0 = (r9 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473470_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 56));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 56), f0.d);
    r8 = (r8 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473364;
    }
}

loc_8047348C:
{
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r8 = (r8_rot_12 & -8);
    r10 = (r1 + 272);
    r0 = (r5 - r4);
    r10 = (r10 + r8);
    ctr = r0;
}

loc_804734A4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_804734D4;
    }
}

loc_804734A8:
{
    r0 = (r5 - r4);
    f2.d = MemoryInline::FlatReadFloat64(r7);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_26 & -8);
    f0.d = MemoryInline::FlatReadFloat64(r10);
    addr_lfdx_804734B8_loc_0 = (r9 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804734B8_loc_0);
    r4 = (r4 + 1);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64(r10, f0.d);
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804734A8;
    }
}

loc_804734D4:
{
    r5 = (r5 + 1);
    r7 = (r7 + 8);
}

loc_804734E0:
{
    r6 = (r6 + 8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(2))) {
        goto loc_804732C8;
    }
}

loc_804734E8:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    r23 = (r1 + 272);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -2800));
    r22 = 0;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -2816));
    r24 = 1;
    f26.d = (f0.d * f2.d);
    f25.d = (f0.d * f1.d);
}

loc_80473508:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r22));
    r6 = (r1 + 272);
    r5 = 0;
    r3 = 0;
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r0 = (r0 - r4);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_30 & -8);
    r6 = (r6 + r0);
    ctr = r4;
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80473570;
    }
}

loc_80473530:
{
    addr_lfdx_80473530_loc_0 = (r23 + r3);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473530_loc_0);
    r4 = (r5 + 1);
    r0 = (r5 + 2);
    r5 = (r5 + 3);
    f0.d = (f0.d + f26.d);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_6 & -8);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_32 & -8);
    addr_stfdx_8047354C_loc_0 = (r6 + r3);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8047354C_loc_0, f0.d);
    r3 = (r3 + 24);
    addr_lfdx_80473554_loc_0 = (r23 + r4);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473554_loc_0);
    f0.d = (f0.d + f25.d);
    addr_stfdx_8047355C_loc_0 = (r6 + r4);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8047355C_loc_0, f0.d);
    addr_lfdx_80473560_loc_0 = (r23 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473560_loc_0);
    f0.d = (f0.d + f26.d);
    addr_stfdx_80473568_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80473568_loc_0, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473530;
    }
}

loc_80473570:
{
    r22 = (r22 + 1);
    r5 = r29;
    r6 = r30;
    r3 = (r1 + 272);
    r4 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r22));
    ctx->lr = 0x80473588u;
    if constexpr (KnownRegArgsCpuCall<0x804736F0u>(&func_804736F0)) {
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
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804736F0_103C4 = func_804736F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804736F0_103C4);
        r4 = static_cast<uint32_t>(regargs_result_804736F0_103C4 >> 32);
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
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
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
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804736F0u>(ctx);
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
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8047358C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(3))) {
        goto loc_80473508;
    }
}

loc_80473590:
{
    r0 = 1;
    r7 = (r1 + 272);
    r3 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r22));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2784));
    f6.d = MemoryInline::FlatReadFloat64((r2 + -2816));
    r4 = 0;
    f5.d = MemoryInline::FlatReadFloat64((r2 + -2792));
    r5 = -32768;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r6 = 32767;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2768));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2776));
    ctr = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80473698;
    }
}

loc_804735C8:
{
    f0.d = MemoryInline::FlatReadFloat64((r7 + 8));
    r8 = (r31 + r4);
    f0.d = (f6.d * f0.d);
    f0.d = (f5.d * f0.d);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_804735DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80473608;
    }
}

loc_804735E0:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_804735E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804735F0;
    }
}

loc_804735E8:
{
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r6));
    goto loc_8047362C;
}

loc_804735F0:
{
    f0.d = (f1.d + f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
    goto loc_8047362C;
}

loc_80473608:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047360C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80473618;
    }
}

loc_80473610:
{
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r5));
    goto loc_8047362C;
}

loc_80473618:
{
    f0.d = (f0.d - f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
}

loc_8047362C:
{
    f0.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f0.d = (f6.d * f0.d);
    f0.d = (f5.d * f0.d);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8047363C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80473668;
    }
}

loc_80473640:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80473644:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80473650;
    }
}

loc_80473648:
{
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r6));
    goto loc_8047368C;
}

loc_80473650:
{
    f0.d = (f1.d + f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
    goto loc_8047368C;
}

loc_80473668:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047366C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80473678;
    }
}

loc_80473670:
{
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r5));
    goto loc_8047368C;
}

loc_80473678:
{
    f0.d = (f0.d - f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
}

loc_8047368C:
{
    r7 = (r7 + 24);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804735C8;
    }
}

loc_80473698:
{
    r11 = (r1 + 544);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 544), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 96u, (r1 + 640));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 80u, (r1 + 624));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 64u, (r1 + 608));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 48u, (r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 32u, (r1 + 576));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 16u, (r1 + 560));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 0u, (r1 + 544));
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::ReadResolved32(guest_range_11, 116u, (r1 + 660));
    ctx->lr = r0;
    r1 = (r1 + 656);
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80472A10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80472A10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80472A10 func_80472A10 preserves=true fpr_mask=0x00000000
