#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8082C720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_8082CD68_loc_0 = 0;
    uint32_t addr_stbux_8082CDC0_loc_0 = 0;
    uint32_t addr_stbux_8082CE28_loc_0 = 0;
    uint32_t addr_stbux_8082D7FC_loc_0 = 0;
    uint32_t addr_stbux_8082D86C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
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
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r14_rot_3 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_10 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_addr_5 = 0;
    uint32_t r16_addr_6 = 0;
    uint32_t r16_addr_7 = 0;
    uint32_t r16_addr_8 = 0;
    uint32_t r16_addr_9 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
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
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_21 = 0;
    uint32_t r5_rot_22 = 0;
    uint32_t r5_rot_23 = 0;
    uint32_t r5_rot_24 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_21 = 0;
    uint32_t r6_rot_22 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
    uint32_t r7_rot_17 = 0;
    uint32_t r7_rot_18 = 0;
    uint32_t r7_rot_19 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_20 = 0;
    uint32_t r7_rot_21 = 0;
    uint32_t r7_rot_22 = 0;
    uint32_t r7_rot_23 = 0;
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
    uint32_t r9_rot_8 = 0;
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
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082C720u);
    goto loc_8082C720;

loc_8082C720:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r6 = 0x80840000u;
    r0 = (r3 + 28);
    r6 = (r6 + 25912);
    r14 = 0;
    MemoryInline::FlatWrite32(r3, r6);
    r7 = 0x80830000u;
    r16 = r4;
    r6 = 0x80830000u;
    r17 = r5;
    r4 = (r7 + -14736);
    r5 = (r6 + -25344);
    MemoryInline::FlatWrite32((r3 + 24), r14);
    r15 = r3;
    r6 = 4;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r7 = 4;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r3 = (r3 + 60);
    ctx->lr = 0x8082C780u;
    if constexpr (KnownRegArgsCpuCall<0x80457198u>(&func_80457198)) {
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
        const auto regargs_result_80457198_2BBF = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_2BBF);
        r4 = static_cast<uint32_t>(regargs_result_80457198_2BBF >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457198u>(ctx);
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
    r4 = 0x80840000u;
    r7 = 255;
    r5 = (r4 + 18584);
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r11 = MemoryInline::FlatRead16((r4 + 18584));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r4 = r16;
    r3 = MemoryInline::FlatRead32((r15 + 76));
    r0 = (r0 & 31);
    r10 = MemoryInline::FlatRead16((r5 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r6 = (r3 & 31);
    r9 = MemoryInline::FlatRead16((r5 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::FlatRead16((r5 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r3 = (r15 + 4);
    MemoryInline::FlatWrite16((r15 + 36), static_cast<uint16_t>(r11));
    r5 = 20;
    MemoryInline::FlatWrite16((r15 + 38), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r15 + 40), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r15 + 42), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r15 + 44), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 46), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 48), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 50), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 52), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 56), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 58), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r15 + 76), r6);
    MemoryInline::FlatWrite32((r15 + 80), r0);
    MemoryInline::FlatWrite8((r15 + 84), static_cast<uint8_t>(r14));
    MemoryInline::FlatWrite32((r15 + 88), r14);
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FC94_3ABE = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_3ABE;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r16 + 20), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r16 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r23 = (r16 + 64);
    guest_range_17 = MemoryInline::ResolveRangeHost((r15 + 36), 0, 40u, false, true);
    MemoryInline::WriteResolved16(guest_range_17, 0u, (r15 + 36), static_cast<uint16_t>(r0));
    r18 = 8;
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r16 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 2u, (r15 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r16 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 4u, (r15 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r16 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 6u, (r15 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r16 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 8u, (r15 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r16 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 10u, (r15 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r16 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 12u, (r15 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r16 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 14u, (r15 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r16 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 16u, (r15 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r16 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 18u, (r15 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r16 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 20u, (r15 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r16 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 22u, (r15 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r16 + 44));
    MemoryInline::WriteResolved32(guest_range_17, 24u, (r15 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r16 + 48));
    MemoryInline::WriteResolved32(guest_range_17, 28u, (r15 + 64), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r16 + 52));
    MemoryInline::WriteResolved32(guest_range_17, 32u, (r15 + 68), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r16 + 56));
    MemoryInline::WriteResolved32(guest_range_17, 36u, (r15 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r16 + 60));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_0 & 15);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 60);
    r4 = (r6 * 20);
    r5 = (r0 & 15);
    r24 = (r3 + 64);
}

loc_8082C8A0:
{
    r22 = (r16 + r24);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_1 & 60);
    r24 = (r24 + r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_0 & 15);
    r21 = (r16 + r24);
    r24 = (r24 + r3);
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_8082C8C0;
    }
}

loc_8082C8BC:
{
    r18 = r5;
}

loc_8082C8C0:
{
}

loc_8082C8C4:
{
    r14 = 10;
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(10))) {
        goto loc_8082C8D0;
    }
}

loc_8082C8CC:
{
    r14 = r6;
}

loc_8082C8D0:
{
}

loc_8082C8D4:
{
    r27 = 8;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(8))) {
        goto loc_8082C8E0;
    }
}

loc_8082C8DC:
{
    r27 = r4;
}

loc_8082C8E0:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r6 = (r6_rot_1 & 1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4 = (r4_rot_1 & 1);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r7 = (r7_rot_0 & 3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r3 = (r3_rot_2 & 1);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r3));
    r5 = (0 - r6);
    r3 = (0 - r4);
}

loc_8082C900:
{
    r4 = (r3 | r4);
    r5 = (r5 | r6);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r3 = (r3_rot_3 & 1);
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r28 = 3;
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & 1);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r3));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r3));
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(3))) {
        goto loc_8082C934;
    }
}

loc_8082C930:
{
    r28 = r7;
}

loc_8082C934:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 7);
    r29 = 4;
}

loc_8082C940:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(4))) {
        goto loc_8082C948;
    }
}

loc_8082C944:
{
    r29 = r3;
}

loc_8082C948:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_0 & 31);
    r30 = 16;
}

loc_8082C954:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_8082C95C;
    }
}

loc_8082C958:
{
    r30 = r0;
}

loc_8082C95C:
{
    r0 = MemoryInline::FlatRead8((r1 + 41));
    r3 = r15;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r18 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 40));
    r5 = (r14 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = (r27 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 43));
    r7 = (r30 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r9 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 42));
    r10 = (r28 & 255);
    r8 = MemoryInline::FlatRead8((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8082C9A0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082D9F0u>(ctx);
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
    r4 = MemoryInline::FlatRead32((r15 + 88));
}

loc_8082C9A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082D888;
    }
}

loc_8082C9AC:
{
    r19 = (r18 & 255);
}

loc_8082C9B0:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8082C9F4;
    }
}

loc_8082C9B4:
{
    r3 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r0 = (r0_rot_1 & 480);
    r20_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r20 = (r20_rot_1 & 15);
    r25 = (r4 + r0);
    goto loc_8082C9E0;
}

loc_8082C9C8:
{
    r3 = r25;
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = (r25 + 32);
    r20 = (r20 + 1);
}

loc_8082C9E0:
{
}

loc_8082C9E4:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(r19))) {
        goto loc_8082C9C8;
    }
}

loc_8082C9E8:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(28));
    r0_mrot_1 = (r0_rot_2 & -268435456);
    r0_mdest_1 = (r0 & 268435455);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_8082C9F4:
{
    r0 = (r18 & 255);
}

loc_8082C9F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082CA88;
    }
}

loc_8082C9FC:
{
    r3 = MemoryInline::FlatRead32(r17);
    r18 = 0;
    r19 = MemoryInline::FlatRead32((r15 + 88));
    r31 = 1953038336;
    r20 = (r3 + 12);
    goto loc_8082CA74;
}

loc_8082CA14:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r26 = (r23 + r0);
    r23_addr_2 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_2);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 28007);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r6 = 0;
    r20_addr_2 = (r20 + r0);
    r0 = MemoryInline::FlatRead32(r20_addr_2);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r5 = (r20 + r0);
    ctr = r12;
    ctx->lr = 0x8082CA48u;
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
    ctx->cr = cr;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r15 + 88));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(5));
    r25 = (r25_rot_2 & 8160);
    r4 = r3;
    r5 = 0;
    r3 = (r0 + r25);
    ctx->lr = 0x8082CA60u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082ADC0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r26 + 2));
    r3 = (r19 + r25);
    r5 = MemoryInline::FlatRead8((r26 + 3));
    ctx->lr = 0x8082CA70u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8A10u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r18 = (r18 + 1);
}

loc_8082CA74:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r3 = (r18 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 15);
}

loc_8082CA84:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8082CA14;
    }
}

loc_8082CA88:
{
    r0 = MemoryInline::FlatRead32((r15 + 76));
    r3 = (r14 & 255);
}

loc_8082CA90:
{
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & 480);
    r4 = (r4 + r0);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8082CB98;
    }
}

loc_8082CAA0:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_10 & 1073741823);
}

loc_8082CAA4:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082CB60;
    }
}

loc_8082CAAC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r22, 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r22);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 80u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r22 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r4 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r22 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r22 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r4 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r22 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r4 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r22 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r4 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r22 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r4 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r22 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r4 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r22 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r4 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r22 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r4 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r22 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r4 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r22 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r4 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r22 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r4 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r22 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r4 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r22 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r4 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r22 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r4 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r22 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r4 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r22 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r4 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r22 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r4 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r22 + 76));
    r22 = (r22 + 80);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r4 + 76), f0.d);
    r4 = (r4 + 80);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082CAAC;
    }
}

loc_8082CB58:
{
    r3 = (r3 & 3);
}

loc_8082CB5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082CB98;
    }
}

loc_8082CB60:
{
    ctr = r3;
}

loc_8082CB64:
{
    f0.d = MemoryInline::FlatReadFloat32(r22);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 16));
    r22 = (r22 + 20);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082CB64;
    }
}

loc_8082CB98:
{
    r3 = MemoryInline::FlatRead32((r15 + 76));
    r5 = (r27 & 255);
}

loc_8082CBA0:
{
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 15);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_8 & 480);
    r0 = (r0 * 20);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082CCEC;
    }
}

loc_8082CBBC:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4 = (r4_rot_2 & 15);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_8082CBC8:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8082CCE0;
    }
}

loc_8082CBCC:
{
    r0 = (r5 - r4);
    r9 = (r5 + -8);
}

loc_8082CBD8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8082CC9C;
    }
}

loc_8082CBDC:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8082CC9C;
    }
}

loc_8082CBE0:
{
    r0 = (r9 + 7);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r0 - r4);
    r8 = 1;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    r10 = (r3 + r5);
    r7 = 4;
    r6 = 60;
    r5 = 0;
    ctr = r0;
}

loc_8082CC0C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r9))) {
        goto loc_8082CC9C;
    }
}

loc_8082CC10:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r10, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r10, static_cast<uint8_t>(r8));
    r4 = (r4 + 8);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r10 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r10 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r10 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r10 + 4), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r10 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r10 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r10 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r10 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r10 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r10 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r10 + 11), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 12u, (r10 + 12), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r10 + 13), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 14u, (r10 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 15u, (r10 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r10 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 17u, (r10 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 18u, (r10 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 19u, (r10 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 20u, (r10 + 20), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 21u, (r10 + 21), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 22u, (r10 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 23u, (r10 + 23), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r10 + 24), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 25u, (r10 + 25), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 26u, (r10 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 27u, (r10 + 27), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 28u, (r10 + 28), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 29u, (r10 + 29), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 30u, (r10 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 31u, (r10 + 31), static_cast<uint8_t>(r5));
    r10 = (r10 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082CC10;
    }
}

loc_8082CC9C:
{
    r5 = (r27 & 255);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r0 = (r5 - r4);
    r9 = 1;
    r10 = (r3 + r6);
    r8 = 4;
    r7 = 60;
    r6 = 0;
    ctr = r0;
}

loc_8082CCC4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_8082CCE0;
    }
}

loc_8082CCC8:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r6));
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082CCC8;
    }
}

loc_8082CCE0:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(20));
    r0_mrot_3 = (r0_rot_16 & 15728640);
    r0_mdest_3 = (r0 & -15728641);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_8082CCEC:
{
    r4 = 0;
    goto loc_8082CD20;
}

loc_8082CCF4:
{
    r0 = MemoryInline::FlatRead8(r21);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 3));
    r21 = (r21 + 4);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = (r3 + 4);
}

loc_8082CD20:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_19 & 15);
}

loc_8082CD2C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8082CCF4;
    }
}

loc_8082CD30:
{
    r0 = MemoryInline::FlatRead8((r1 + 41));
}

loc_8082CD38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082CD84;
    }
}

loc_8082CD3C:
{
    r4 = MemoryInline::FlatRead32((r15 + 76));
    r7 = (r16 + r24);
    r6 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_20 & 15);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_5 & 60);
    r3 = (r0 * 20);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_4 & 480);
    r16_addr_1 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_1);
    r24 = (r24 + 4);
    r4 = (r5 + r4);
    r3 = (r6 + r3);
    addr_stbux_8082CD68_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite8(addr_stbux_8082CD68_loc_0, static_cast<uint8_t>(r0));
    r3 = addr_stbux_8082CD68_loc_0;
    r0 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8082CD84:
{
    r0 = MemoryInline::FlatRead8((r1 + 40));
}

loc_8082CD8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082CDE0;
    }
}

loc_8082CD90:
{
    r6 = MemoryInline::FlatRead32((r15 + 76));
    r8 = (r16 + r24);
    r7 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_22 & 15);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r5 = (r5_rot_7 & 60);
    r4 = (r0 * 20);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(9));
    r3 = (r3_rot_9 & 480);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_5 & 4);
    r16_addr_3 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_3);
    r3 = (r5 + r3);
    r4 = (r6 + r4);
    r3 = (r7 + r3);
    addr_stbux_8082CDC0_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite8(addr_stbux_8082CDC0_loc_0, static_cast<uint8_t>(r0));
    r3 = addr_stbux_8082CDC0_loc_0;
    r24 = (r24 + 4);
    r0 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8082CDE0:
{
    r0 = MemoryInline::FlatRead8((r1 + 44));
}

loc_8082CDE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082CE44;
    }
}

loc_8082CDEC:
{
    r3 = MemoryInline::FlatRead32((r15 + 76));
    r9 = (r16 + r24);
    r8 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_24 & 15);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 4);
    r5 = (r0 * 20);
    r16_addr_5 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_5);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r6 = (r6_rot_7 & 4);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r4 = (r4_rot_6 & 60);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_11 & 480);
    r24 = (r24 + 4);
    r4 = (r4 + r3);
    r3 = (r7 + r6);
    r4 = (r5 + r4);
    r3 = (r8 + r3);
    addr_stbux_8082CE28_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite8(addr_stbux_8082CE28_loc_0, static_cast<uint8_t>(r0));
    r3 = addr_stbux_8082CE28_loc_0;
    r0 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8082CE44:
{
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082CE4C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8082D0A0;
    }
}

loc_8082CE50:
{
    r12 = MemoryInline::FlatRead32((r15 + 76));
    r5 = (r16 + r24);
    r17 = MemoryInline::FlatRead32((r15 + 88));
    r6 = 0;
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & 15);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(28));
    r11 = (r11_rot_1 & 4);
    r4 = (r0 * 20);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(26));
    r9 = (r9_rot_1 & 4);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(20));
    r10 = (r10_rot_1 & 4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 4);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(14));
    r7 = (r7_rot_3 & 60);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(9));
    r0 = (r0_rot_27 & 480);
    r0 = (r7 + r0);
    r14_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(19));
    r14 = (r14_rot_1 & 28);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r12 = (r12_rot_1 & 4);
    r8 = (r10 + r8);
    r7 = (r11 + r9);
    r4 = (r4 + r0);
    r7 = (r8 + r7);
    r0 = (r14 + r12);
    r4 = (r7 + r4);
    r0 = (r17 + r0);
    r0 = (r4 + r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082D0A0;
    }
}

loc_8082CEB0:
{
}

loc_8082CEB4:
{
    r8 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8082D04C;
    }
}

loc_8082CEBC:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082CED8;
    }
}

loc_8082CEC4:
{
    r4 = 0x80000000u;
    r4 = (r4 + -2);
}

loc_8082CED0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_8082CED8;
    }
}

loc_8082CED4:
{
    r7 = 1;
}

loc_8082CED8:
{
}

loc_8082CEDC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8082D04C;
    }
}

loc_8082CEE0:
{
    r7 = (r8 + 7);
    r3 = r5;
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_4 & 536870911);
    r4 = r0;
    ctr = r7;
}

loc_8082CEF8:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8082D04C;
    }
}

loc_8082CEFC:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 160u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
    r6 = (r6 + 8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 0u, r3);
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, r4, r8);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r4 + 4), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r4 + 8), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 16));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r3 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r4 + 12), r8);
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r4 + 16), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 20u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r3 + 24));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r4 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r4 + 24), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r4 + 28), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r3 + 36));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r3 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r4 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r4 + 36), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r3 + 44));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r4 + 40), r8);
        MemoryInline::WriteResolved32(guest_range_6, 44u, (r4 + 44), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 48u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 48u, (r4 + 48), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 52u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r3 + 56));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r3 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 52u, (r4 + 52), r8);
        MemoryInline::WriteResolved32(guest_range_6, 56u, (r4 + 56), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 60u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r3 + 64));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 60u, (r4 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_6, 64u, (r4 + 64), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 68u, (r4 + 68), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 72u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 76u, (r3 + 76));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 72u, (r3 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 72u, (r4 + 72), r8);
        MemoryInline::WriteResolved32(guest_range_6, 76u, (r4 + 76), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 80u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 84u, (r3 + 84));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 80u, (r3 + 80));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 80u, (r4 + 80), r8);
        MemoryInline::WriteResolved32(guest_range_6, 84u, (r4 + 84), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 88u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 88u, (r4 + 88), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 92u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 96u, (r3 + 96));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 92u, (r3 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 92u, (r4 + 92), r8);
        MemoryInline::WriteResolved32(guest_range_6, 96u, (r4 + 96), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 100u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 104u, (r3 + 104));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 100u, (r3 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 100u, (r4 + 100), r8);
        MemoryInline::WriteResolved32(guest_range_6, 104u, (r4 + 104), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 108u, (r3 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 108u, (r4 + 108), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 112u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 116u, (r3 + 116));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 112u, (r3 + 112));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 112u, (r4 + 112), r8);
        MemoryInline::WriteResolved32(guest_range_6, 116u, (r4 + 116), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 120u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 124u, (r3 + 124));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 120u, (r3 + 120));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 120u, (r4 + 120), r8);
        MemoryInline::WriteResolved32(guest_range_6, 124u, (r4 + 124), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 128u, (r3 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 128u, (r4 + 128), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 132u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 136u, (r3 + 136));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 132u, (r3 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 132u, (r4 + 132), r8);
        MemoryInline::WriteResolved32(guest_range_6, 136u, (r4 + 136), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 140u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 144u, (r3 + 144));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 140u, (r3 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 140u, (r4 + 140), r8);
        MemoryInline::WriteResolved32(guest_range_6, 144u, (r4 + 144), r7);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 148u, (r3 + 148));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 148u, (r4 + 148), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 152u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_5, 156u, (r3 + 156));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 152u, (r3 + 152));
        }
    }
    r3 = (r3 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 152u, (r4 + 152), r8);
        MemoryInline::WriteResolved32(guest_range_6, 156u, (r4 + 156), r7);
    }
    r4 = (r4 + 160);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082CEFC;
    }
}

loc_8082D04C:
{
    r7 = (r6 * 20);
    r4 = (r28 & 255);
    r3 = (r4 - r6);
    r5 = (r5 + r7);
    r7 = (r0 + r7);
    ctr = r3;
}

loc_8082D068:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r4))) {
        goto loc_8082D0A0;
    }
}

loc_8082D06C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r7, r3);
    MemoryInline::FlatWrite32((r7 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r5 = (r5 + 20);
    MemoryInline::FlatWrite32((r7 + 12), r3);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    r7 = (r7 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D06C;
    }
}

loc_8082D0A0:
{
    r0 = MemoryInline::FlatRead32((r16 + 60));
    r12 = (r29 & 255);
}

loc_8082D0A8:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_29 & 3);
    r0 = (r0 * 20);
    r24 = (r24 + r0);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082D424;
    }
}

loc_8082D0B8:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r3 = (r3_rot_13 & 15);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r9 = (r9_rot_3 & 4);
    r4 = (r3 * 20);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r7 = (r7_rot_7 & 4);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_14 & 7);
    r11 = MemoryInline::FlatRead32((r15 + 88));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r8 = (r8_rot_3 & 4);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r6 = (r6_rot_9 & 4);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r5 = (r5_rot_9 & 60);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r0 = (r0_rot_30 & 480);
    r0 = (r5 + r0);
    r6 = (r8 + r6);
    r5 = (r9 + r7);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(r12));
}

loc_8082D0F8:
{
    r0 = (r4 + r0);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r7 = (r7_rot_8 & 4);
    r4 = (r6 + r5);
    r4 = (r7 + r4);
    r0 = (r11 + r0);
    r7 = (r4 + r0);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8082D210;
    }
}

loc_8082D114:
{
    r0 = (r12 - r3);
    r6 = (r12 + -8);
}

loc_8082D120:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8082D1D8;
    }
}

loc_8082D124:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8082D1D8;
    }
}

loc_8082D128:
{
    r0 = (r6 + 7);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_10 & -4);
    r0 = (r0 - r3);
    r4 = 0;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_31 & 536870911);
    r5 = (r7 + r5);
    ctr = r0;
}

loc_8082D148:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r6))) {
        goto loc_8082D1D8;
    }
}

loc_8082D14C:
{
    guest_range_7 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, r5, static_cast<uint8_t>(r4));
    r3 = (r3 + 8);
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r5 + 7), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 8u, (r5 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 9u, (r5 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 10u, (r5 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 11u, (r5 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 12u, (r5 + 12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 13u, (r5 + 13), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 14u, (r5 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 15u, (r5 + 15), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 16u, (r5 + 16), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 17u, (r5 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 18u, (r5 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 19u, (r5 + 19), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 20u, (r5 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 21u, (r5 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 22u, (r5 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 23u, (r5 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 24u, (r5 + 24), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 25u, (r5 + 25), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 26u, (r5 + 26), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 27u, (r5 + 27), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 28u, (r5 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 29u, (r5 + 29), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 30u, (r5 + 30), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 31u, (r5 + 31), static_cast<uint8_t>(r4));
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D14C;
    }
}

loc_8082D1D8:
{
    r4 = (r29 & 255);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_10 & -4);
    r0 = (r4 - r3);
    r5 = 0;
    r6 = (r7 + r6);
    ctr = r0;
}

loc_8082D1F4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8082D210;
    }
}

loc_8082D1F8:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D1F8;
    }
}

loc_8082D210:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r4 = (r29 & 255);
    r5 = MemoryInline::FlatRead32((r15 + 80));
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(15));
    r5_mrot_1 = (r5_rot_13 & 229376);
    r5_mdest_1 = (r5 & -229377);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0 = (r0_rot_34 & 15);
    MemoryInline::FlatWrite32((r15 + 80), r5);
    r3 = (r0 * 20);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r9 = (r9_rot_4 & 4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r7 = (r7_rot_9 & 4);
    r11 = MemoryInline::FlatRead32((r15 + 88));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r8 = (r8_rot_4 & 4);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r6 = (r6_rot_12 & 4);
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r5 = (r5_rot_14 & 60);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r0 = (r0_rot_35 & 480);
    r0 = (r5 + r0);
    r6 = (r8 + r6);
    r5 = (r9 + r7);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8082D258:
{
    r0 = (r3 + r0);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r7 = (r7_rot_10 & 4);
    r3 = (r6 + r5);
    r5 = (r16 + r24);
    r3 = (r7 + r3);
    r0 = (r11 + r0);
    r0 = (r3 + r0);
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082D424;
    }
}

loc_8082D27C:
{
}

loc_8082D280:
{
    r8 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_8082D3D8;
    }
}

loc_8082D288:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082D2A4;
    }
}

loc_8082D290:
{
    r3 = 0x80000000u;
    r3 = (r3 + -2);
}

loc_8082D29C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r3))) {
        goto loc_8082D2A4;
    }
}

loc_8082D2A0:
{
    r7 = 1;
}

loc_8082D2A4:
{
}

loc_8082D2A8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8082D3D8;
    }
}

loc_8082D2AC:
{
    r7 = (r8 + 7);
    r3 = r5;
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_11 & 536870911);
    r4 = r0;
    ctr = r7;
}

loc_8082D2C4:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8082D3D8;
    }
}

loc_8082D2C8:
{
    guest_range_8 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_8, 0u, r3);
    r6 = (r6 + 8);
    guest_range_9 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, r4, static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r4 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r4 + 2), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_9, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r4 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r4 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r4 + 6), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_9, 7u, (r4 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_9, 8u, (r4 + 8), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_9, 9u, (r4 + 9), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r4 + 10), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_9, 11u, (r4 + 11), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_9, 12u, (r4 + 12), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_9, 13u, (r4 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_9, 14u, (r4 + 14), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_9, 15u, (r4 + 15), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_9, 16u, (r4 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_9, 17u, (r4 + 17), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_9, 18u, (r4 + 18), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_9, 19u, (r4 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_9, 20u, (r4 + 20), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_9, 21u, (r4 + 21), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_9, 22u, (r4 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_9, 23u, (r4 + 23), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_9, 24u, (r4 + 24), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_9, 25u, (r4 + 25), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_9, 26u, (r4 + 26), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_9, 27u, (r4 + 27), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_9, 28u, (r4 + 28), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_9, 29u, (r4 + 29), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_9, 30u, (r4 + 30), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 31u, (r3 + 31));
    r3 = (r3 + 32);
    MemoryInline::WriteResolved8(guest_range_9, 31u, (r4 + 31), static_cast<uint8_t>(r7));
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D2C8;
    }
}

loc_8082D3D8:
{
    r4 = (r29 & 255);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_13 & -4);
    r3 = (r4 - r6);
    r5 = (r5 + r7);
    r7 = (r0 + r7);
    ctr = r3;
}

loc_8082D3F4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r4))) {
        goto loc_8082D424;
    }
}

loc_8082D3F8:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = (r5 + 4);
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D3F8;
    }
}

loc_8082D424:
{
    r3 = MemoryInline::FlatRead32((r16 + 60));
    r0 = (r30 & 255);
}

loc_8082D42C:
{
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(19));
    r3 = (r3_rot_16 & 28);
    r24 = (r24 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082D7A0;
    }
}

loc_8082D438:
{
    r11 = MemoryInline::FlatRead32((r15 + 76));
    r3 = MemoryInline::FlatRead32((r15 + 80));
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r5 = (r5_rot_16 & 3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r4 = (r4_rot_8 & 15);
    r4 = (r5 + r4);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r3 = (r3_rot_17 & 31);
    r10 = (r4 * 20);
    r6_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(27));
    r6 = (r6_rot_14 & 4);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(20));
    r4 = (r4_rot_9 & 4);
    r12 = MemoryInline::FlatRead32((r15 + 88));
    r7_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(26));
    r7 = (r7_rot_15 & 4);
    r4 = (r6 + r4);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r5 = (r5_rot_17 & 4);
    r6 = (r10 + r7);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(9));
    r9 = (r9_rot_6 & 480);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r8 = (r8_rot_6 & 60);
    r8 = (r9 + r8);
    r5 = (r5 + r4);
    r4 = (r8 + r6);
    r7_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r7 = (r7_rot_16 & 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8082D48C:
{
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(19));
    r6 = (r6_rot_15 & 28);
    r5 = (r7 + r5);
    r4 = (r12 + r4);
    r5 = (r6 + r5);
    r14 = (r5 + r4);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082D60C;
    }
}

loc_8082D4A4:
{
    r10 = 0;
    r12 = 255;
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r4 = (r4_rot_10 & -16);
    r9 = 175;
    r8 = 119;
    r7 = 87;
    r6 = 97;
    r5 = 129;
    r11 = 4;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r12));
    r14 = (r14 + r4);
    r3 = (r0 - r3);
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r10));
    r4 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r12));
    r5 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r10));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082D60C;
    }
}

loc_8082D51C:
{
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_37 & 1073741823);
}

loc_8082D520:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082D5D8;
    }
}

loc_8082D528:
{
    guest_range_10 = MemoryInline::ResolveRangeHost(r14, 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 0u, r14, static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 1u, (r14 + 1), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 2u, (r14 + 2), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 3u, (r14 + 3), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_10, 4u, (r14 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_10, 8u, (r14 + 8), r5);
    }
    MemoryInline::WriteResolved8(guest_range_10, 12u, (r14 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 13u, (r14 + 13), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 14u, (r14 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 15u, (r14 + 15), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 16u, (r14 + 16), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 17u, (r14 + 17), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 18u, (r14 + 18), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 19u, (r14 + 19), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_10, 20u, (r14 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_10, 24u, (r14 + 24), r5);
    }
    MemoryInline::WriteResolved8(guest_range_10, 28u, (r14 + 28), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 29u, (r14 + 29), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 30u, (r14 + 30), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 31u, (r14 + 31), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 32u, (r14 + 32), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 33u, (r14 + 33), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 34u, (r14 + 34), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 35u, (r14 + 35), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_10, 36u, (r14 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_10, 40u, (r14 + 40), r5);
    }
    MemoryInline::WriteResolved8(guest_range_10, 44u, (r14 + 44), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 45u, (r14 + 45), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 46u, (r14 + 46), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 47u, (r14 + 47), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 48u, (r14 + 48), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 49u, (r14 + 49), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 50u, (r14 + 50), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 51u, (r14 + 51), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_10, 52u, (r14 + 52), r4);
        MemoryInline::WriteResolved32(guest_range_10, 56u, (r14 + 56), r5);
    }
    MemoryInline::WriteResolved8(guest_range_10, 60u, (r14 + 60), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 61u, (r14 + 61), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 62u, (r14 + 62), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 63u, (r14 + 63), static_cast<uint8_t>(r10));
    r14 = (r14 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D528;
    }
}

loc_8082D5D0:
{
    r3 = (r3 & 3);
}

loc_8082D5D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082D60C;
    }
}

loc_8082D5D8:
{
    ctr = r3;
}

loc_8082D5DC:
{
    guest_range_11 = MemoryInline::ResolveRangeHost(r14, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_11, 0u, r14, static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 1u, (r14 + 1), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_11, 2u, (r14 + 2), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 3u, (r14 + 3), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_11, 4u, (r14 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_11, 8u, (r14 + 8), r5);
    }
    MemoryInline::WriteResolved8(guest_range_11, 12u, (r14 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_11, 13u, (r14 + 13), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_11, 14u, (r14 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_11, 15u, (r14 + 15), static_cast<uint8_t>(r10));
    r14 = (r14 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D5DC;
    }
}

loc_8082D60C:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r3 = (r30 & 255);
}

loc_8082D614:
{
    r7 = MemoryInline::FlatRead32((r15 + 80));
    r7_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r7_mrot_1 = (r7_rot_17 & 15872);
    r7_mdest_1 = (r7 & -15873);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r4 = (r4_rot_12 & 3);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0 = (r0_rot_39 & 15);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r15 + 80), r7);
    r9 = (r0 * 20);
    r5_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r5 = (r5_rot_18 & 4);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r0 = (r0_rot_40 & 4);
    r11 = MemoryInline::FlatRead32((r15 + 88));
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r6 = (r6_rot_16 & 4);
    r0 = (r5 + r0);
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r4 = (r4_rot_13 & 4);
    r5 = (r9 + r6);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r8 = (r8_rot_7 & 480);
    r7_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r7 = (r7_rot_18 & 60);
    r7 = (r8 + r7);
    r4 = (r4 + r0);
    r0 = (r7 + r5);
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r6 = (r6_rot_17 & 4);
    r5_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r5 = (r5_rot_19 & 28);
    r4 = (r6 + r4);
    r0 = (r11 + r0);
    r4 = (r5 + r4);
    r5 = (r16 + r24);
    r4 = (r4 + r0);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8082D7A0;
    }
}

loc_8082D680:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r0 = (r0_rot_41 & 2147483647);
}

loc_8082D684:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082D740;
    }
}

loc_8082D68C:
{
    guest_range_12 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_12, 0u, r5);
    guest_range_13 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_13, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 1u, (r5 + 1));
    MemoryInline::WriteResolved8(guest_range_13, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_13, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_13, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r5 + 4));
    MemoryInline::WriteResolved32(guest_range_13, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_13, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_12, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_13, 12u, (r4 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 13u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_13, 13u, (r4 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 14u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_13, 14u, (r4 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 15u, (r5 + 15));
    MemoryInline::WriteResolved8(guest_range_13, 15u, (r4 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 16u, (r5 + 16));
    MemoryInline::WriteResolved8(guest_range_13, 16u, (r4 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 17u, (r5 + 17));
    MemoryInline::WriteResolved8(guest_range_13, 17u, (r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 18u, (r5 + 18));
    MemoryInline::WriteResolved8(guest_range_13, 18u, (r4 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 19u, (r5 + 19));
    MemoryInline::WriteResolved8(guest_range_13, 19u, (r4 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r5 + 20));
    MemoryInline::WriteResolved32(guest_range_13, 20u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r5 + 24));
    MemoryInline::WriteResolved32(guest_range_13, 24u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_12, 28u, (r5 + 28));
    MemoryInline::WriteResolved8(guest_range_13, 28u, (r4 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 29u, (r5 + 29));
    MemoryInline::WriteResolved8(guest_range_13, 29u, (r4 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 30u, (r5 + 30));
    MemoryInline::WriteResolved8(guest_range_13, 30u, (r4 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 31u, (r5 + 31));
    r5 = (r5 + 32);
    MemoryInline::WriteResolved8(guest_range_13, 31u, (r4 + 31), static_cast<uint8_t>(r0));
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D68C;
    }
}

loc_8082D738:
{
    r3 = (r3 & 1);
}

loc_8082D73C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082D7A0;
    }
}

loc_8082D740:
{
    ctr = r3;
}

loc_8082D744:
{
    guest_range_14 = MemoryInline::ResolveRangeHost(r5, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_14, 0u, r5);
    guest_range_15 = MemoryInline::ResolveRangeHost(r4, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_15, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 1u, (r5 + 1));
    MemoryInline::WriteResolved8(guest_range_15, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_15, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_15, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_14, 4u, (r5 + 4));
    MemoryInline::WriteResolved32(guest_range_15, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_15, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_14, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_15, 12u, (r4 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 13u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_15, 13u, (r4 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 14u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_15, 14u, (r4 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 15u, (r5 + 15));
    r5 = (r5 + 16);
    MemoryInline::WriteResolved8(guest_range_15, 15u, (r4 + 15), static_cast<uint8_t>(r0));
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082D744;
    }
}

loc_8082D7A0:
{
    r0 = MemoryInline::FlatRead8((r1 + 43));
    r3 = MemoryInline::FlatRead32((r16 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082D7AC:
{
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r0 = (r0_rot_43 & 496);
    r24 = (r24 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082D818;
    }
}

loc_8082D7B8:
{
    r6 = MemoryInline::FlatRead32((r15 + 76));
    r9 = (r16 + r24);
    r8 = MemoryInline::FlatRead32((r15 + 88));
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r3 = (r3_rot_19 & 4);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r0 = (r0_rot_44 & 4);
    r3 = (r3 + r0);
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r5 = (r5_rot_21 & 4);
    r3 = (r5 + r3);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r4 = (r4_rot_15 & 15);
    r7_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r7 = (r7_rot_20 & 60);
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(9));
    r6 = (r6_rot_19 & 480);
    r5 = (r4 * 20);
    r16_addr_7 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_7);
    r4 = (r7 + r6);
    r3 = (r8 + r3);
    r4 = (r5 + r4);
    r24 = (r24 + 4);
    addr_stbux_8082D7FC_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite8(addr_stbux_8082D7FC_loc_0, static_cast<uint8_t>(r0));
    r3 = addr_stbux_8082D7FC_loc_0;
    r0 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8082D818:
{
    r0 = MemoryInline::FlatRead8((r1 + 42));
}

loc_8082D820:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082D888;
    }
}

loc_8082D824:
{
    r4 = MemoryInline::FlatRead32((r15 + 76));
    r10 = (r16 + r24);
    r9 = MemoryInline::FlatRead32((r15 + 88));
    r5_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_23 & 15);
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r3 = (r3_rot_21 & 4);
    r5 = (r5 * 20);
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_46 & 4);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8 = (r8_rot_9 & 4);
    r7_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7 = (r7_rot_22 & 4);
    r6_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r6 = (r6_rot_21 & 60);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_17 & 480);
    r3 = (r3 + r0);
    r7 = (r8 + r7);
    r4 = (r6 + r4);
    r16_addr_9 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_9);
    r3 = (r7 + r3);
    r4 = (r5 + r4);
    r3 = (r9 + r3);
    addr_stbux_8082D86C_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite8(addr_stbux_8082D86C_loc_0, static_cast<uint8_t>(r0));
    r3 = addr_stbux_8082D86C_loc_0;
    r0 = MemoryInline::FlatRead8((r10 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8082D888:
{
    r11 = (r1 + 128);
    r3 = r15;
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_16 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082C720 func_8082C720 preserves=true fpr_mask=0x00000000
