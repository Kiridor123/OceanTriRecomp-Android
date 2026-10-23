#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064804(CpuContext* ctx);
extern "C" uint64_t func_80064804_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BF494(CpuContext* ctx);
extern "C" uint32_t func_802BF494_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805318F0(CpuContext* ctx);
extern "C" uint32_t func_805318F0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_805318FC(CpuContext* ctx);
extern "C" uint32_t func_805318FC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80531908(CpuContext* ctx);
extern "C" uint32_t func_80531908_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_805319C4(CpuContext* ctx);
extern "C" void func_805319C4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_805319D0(CpuContext* ctx);
extern "C" void func_805319D0_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_805319FC(CpuContext* ctx);
extern "C" void func_805319FC_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531A20(CpuContext* ctx);
extern "C" void func_80531A20_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531ACC(CpuContext* ctx);
extern "C" void func_80531ACC_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531AF0(CpuContext* ctx);
extern "C" void func_80531AF0_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B14(CpuContext* ctx);
extern "C" uint32_t func_80531B14_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B1C(CpuContext* ctx);
extern "C" uint32_t func_80531B1C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B24(CpuContext* ctx);
extern "C" uint32_t func_80531B24_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B2C(CpuContext* ctx);
extern "C" uint32_t func_80531B2C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B34(CpuContext* ctx);
extern "C" uint32_t func_80531B34_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531B74(CpuContext* ctx);
extern "C" uint32_t func_80531B74_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80531CA0(CpuContext* ctx);
extern "C" uint64_t func_80531CA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80532484(CpuContext* ctx);
extern "C" uint64_t func_80532484_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_805324B8(CpuContext* ctx);
extern "C" uint64_t func_805324B8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_805324F4(CpuContext* ctx);
extern "C" uint64_t func_805324F4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80532538(CpuContext* ctx);
extern "C" uint64_t func_80532538_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80532584(CpuContext* ctx);
extern "C" uint64_t func_80532584_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_805325D8(CpuContext* ctx);
extern "C" uint64_t func_805325D8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80532634(CpuContext* ctx);
extern "C" uint64_t func_80532634_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80532698(CpuContext* ctx);
extern "C" uint64_t func_80532698_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805326D4(CpuContext* ctx);
extern "C" void func_805326D4_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80532764(CpuContext* ctx);
extern "C" void func_80532764_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805327EC(CpuContext* ctx);
extern "C" void func_805327EC_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8053290C(CpuContext* ctx);
extern "C" void func_8053290C_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805318F0_statefree(uint32_t);
extern "C" uint64_t func_805318FC_statefree(uint32_t);
extern "C" uint64_t func_80531908_statefree(uint32_t);
extern "C" void func_805319C4_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B14_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B1C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B24_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B2C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B34_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80531B74_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8053122C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
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
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053122C;

loc_8053122C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r6 = 0x80650000u;
    r17 = r3;
    r6 = (r6 + -12976);
    r18 = r4;
    MemoryInline::FlatWrite32(r3, r6);
    r19 = r5;
    r3 = (r3 + 4);
    // inline leaf 0x8053120C (8 guest instruction(s))
    r0 = 0;
    r4 = (r3 + 4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x8053120C
    r4 = 0x80060000u;
    r5 = 0x80060000u;
    r3 = (r17 + 40);
    r6 = 4;
    r4 = (r4 + 18584);
    r5 = (r5 + -19828);
    r7 = 4;
    ctx->lr = 0x80531280u;
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
        const auto regargs_result_80457198_279B = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_279B);
        r4 = static_cast<uint32_t>(regargs_result_80457198_279B >> 32);
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
    r3 = r17;
    // inline leaf 0x80531B84 (28 guest instruction(s))
    r7 = (r2 + -688);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r6 = 255;
    r4 = 0;
    r10 = MemoryInline::FlatRead16((r2 + -688));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = MemoryInline::FlatRead16((r7 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r5 & 31);
    r8 = MemoryInline::FlatRead16((r7 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r0 & 31);
    r7 = MemoryInline::FlatRead16((r7 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 56), r5);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite8((r3 + 89), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 64), r4);
    // end of inlined leaf 0x80531B84
    r3 = r17;
    r4 = r18;
    ctx->lr = 0x80531294u;
    if constexpr (KnownRegArgsCpuCall<0x80532698u>(&func_80532698)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80532698_3831 = func_80532698_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80532698_3831);
        r4 = static_cast<uint32_t>(regargs_result_80532698_3831 >> 32);
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
        InvokeDirectCpu<0x80532698u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r14 = (r18 + 20);
    r15 = (r17 + 16);
    r16 = 0;
}

loc_805312A0:
{
    r3 = r15;
    r4 = r14;
    // inline leaf 0x80096400 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80096400
    r16 = (r16 + 1);
    r15 = (r15 + 8);
}

loc_805312B8:
{
    r14 = (r14 + 8);
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(3))) {
        goto loc_805312A0;
    }
}

loc_805312C0:
{
    r14 = (r18 + 44);
    r15 = (r17 + 40);
    r16 = 0;
}

loc_805312CC:
{
    r3 = r15;
    r4 = r14;
    ctx->lr = 0x805312D8u;
    if constexpr (KnownRegArgsCpuCall<0x80064804u>(&func_80064804)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80064804_40FB = func_80064804_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80064804_40FB);
        r4 = static_cast<uint32_t>(regargs_result_80064804_40FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064804u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r16 = (r16 + 1);
    r15 = (r15 + 4);
}

loc_805312E4:
{
    r14 = (r14 + 4);
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_805312CC;
    }
}

loc_805312EC:
{
    r3 = r18;
    r4 = 64;
    // inline leaf 0x80531B7C (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B7C
    r28 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x80531890 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 15);
    // end of inlined leaf 0x80531890
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
    r3 = r18;
    r25 = (r4 + 64);
    r4 = r25;
    // inline leaf 0x80531B74 (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B74
    r24 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x8053189C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r3 = (r3_rot_0 & 15);
    // end of inlined leaf 0x8053189C
    r0 = (r3 & 255);
    r3 = r18;
    r0 = (r0 * 20);
    r25 = (r25 + r0);
    r4 = r25;
    // inline leaf 0x80531B6C (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B6C
    r23 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x805318A8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 15);
    // end of inlined leaf 0x805318A8
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = (r18 + 60);
    r25 = (r25 + r0);
    // inline leaf 0x80531890 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 15);
    // end of inlined leaf 0x80531890
    r3 = (r3 & 255);
    r4 = 8;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl11_0x80531B5C:
{
}

loc_inl11_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x80531B64:
{
    r3 = r4;
    goto loc_inl11_cont_80531B5C;
}

loc_inl11_return:
{
}

loc_inl11_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    r15 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x8053189C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r3 = (r3_rot_2 & 15);
    // end of inlined leaf 0x8053189C
    r3 = (r3 & 255);
    r4 = 10;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl13_0x80531B5C:
{
}

loc_inl13_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80531B64:
{
    r3 = r4;
    goto loc_inl13_cont_80531B5C;
}

loc_inl13_return:
{
}

loc_inl13_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r18 + 60);
    // inline leaf 0x805318A8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_3 & 15);
    // end of inlined leaf 0x805318A8
    r3 = (r3 & 255);
    r4 = 8;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl15_0x80531B5C:
{
}

loc_inl15_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x80531B64:
{
    r3 = r4;
    goto loc_inl15_cont_80531B5C;
}

loc_inl15_return:
{
}

loc_inl15_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r18 + 60);
    // inline leaf 0x805318B4 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x805318B4
    r4 = (r3 & 255);
    r3 = (r18 + 60);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    // inline leaf 0x805318C0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x805318C0
    r4 = (r3 & 255);
    r3 = (r18 + 60);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x805318CC (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x805318CC
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r3));
    r3 = (r18 + 60);
    // inline leaf 0x805318D8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x805318D8
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r18 + 60);
    // inline leaf 0x805318E4 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x805318E4
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r18 + 60);
    // inline leaf 0x805318F0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r3 = (r3_rot_9 & 3);
    // end of inlined leaf 0x805318F0
    r3 = (r3 & 255);
    r4 = 3;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl22_0x80531B5C:
{
}

loc_inl22_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x80531B64:
{
    r3 = r4;
    goto loc_inl22_cont_80531B5C;
}

loc_inl22_return:
{
}

loc_inl22_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    r29 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x805318FC (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 7);
    // end of inlined leaf 0x805318FC
    r3 = (r3 & 255);
    r4 = 4;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl24_0x80531B5C:
{
}

loc_inl24_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl24_return;
    }
}

loc_inl24_0x80531B64:
{
    r3 = r4;
    goto loc_inl24_cont_80531B5C;
}

loc_inl24_return:
{
}

loc_inl24_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    r30 = r3;
    r3 = (r18 + 60);
    // inline leaf 0x80531908 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r3 = (r3_rot_11 & 31);
    // end of inlined leaf 0x80531908
    r3 = (r3 & 255);
    r4 = 16;
    // inline leaf 0x80531B5C (4 guest instruction(s))
}

loc_inl26_0x80531B5C:
{
}

loc_inl26_0x80531B60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x80531B64:
{
    r3 = r4;
    goto loc_inl26_cont_80531B5C;
}

loc_inl26_return:
{
}

loc_inl26_cont_80531B5C:
{
    // end of inlined leaf 0x80531B5C
    r0 = MemoryInline::FlatRead8((r1 + 26));
    r14 = r3;
    r8 = MemoryInline::FlatRead8((r1 + 24));
    r3 = r17;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r15 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 25));
    r7 = (r14 & 255);
    r9 = (r30 & 255);
    r10 = (r29 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r5 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r6 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80531488u;
    if constexpr (KnownRegArgsCpuCall<0x80531CA0u>(&func_80531CA0)) {
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
        const auto regargs_result_80531CA0_6729 = func_80531CA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80531CA0_6729);
        r4 = static_cast<uint32_t>(regargs_result_80531CA0_6729 >> 32);
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
        InvokeDirectCpu<0x80531CA0u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r17 + 64));
}

loc_80531490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80531874;
    }
}

loc_80531494:
{
    r3 = r17;
    r4 = (r15 & 255);
    if constexpr (KnownRegArgsCpuCall<0x805326D4u>(&func_805326D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        func_805326D4_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805326D4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r15 & 255);
}

loc_805314A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80531598;
    }
}

loc_805314A8:
{
    r3 = MemoryInline::FlatRead32(r19);
    r4 = 12;
    // inline leaf 0x80531B54 (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B54
    r22 = r3;
    r3 = r17;
    // inline leaf 0x80532414 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x80532414
    r31 = r3;
    r16 = (r15 & 255);
    r21 = 0;
    r20 = 0;
    goto loc_80531580;
}

loc_805314D4:
{
    r15_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r15 = (r15_rot_2 & 1020);
    r3 = r22;
    r28_addr_2 = (r28 + r15);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r22_addr_2 = (r22 + r0);
    r4 = MemoryInline::FlatRead32(r22_addr_2);
    // inline leaf 0x80531B4C (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B4C
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r19 + 12));
    r4 = 1953038336;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 28007);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80531510u;
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
    r0 = (r21 & 255);
    r4 = r3;
    r0 = (r0 * 28);
    r5 = 0;
    r26 = (r31 + r0);
    r3 = r26;
    ctx->lr = 0x8053152Cu;
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
    InvokeDirectCpu<0x80533EACu>(ctx);
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
    r27 = (r28 + r15);
    r3 = r27;
    // inline leaf 0x80531934 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r0 & 3);
    // end of inlined leaf 0x80531934
    r15 = r3;
    r3 = r27;
    // inline leaf 0x80531928 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = (r0 & 3);
    // end of inlined leaf 0x80531928
    r4 = r3;
    r3 = r26;
    r5 = r15;
    // inline leaf 0x80531914 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r0_mrot_2 = (r0_rot_5 & 100663296);
    r0_mdest_2 = (r0 & -100663297);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(23));
    r0_mrot_3 = (r0_rot_6 & 25165824);
    r0_mdest_3 = (r0 & -25165825);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    // end of inlined leaf 0x80531914
    r3 = r27;
    // inline leaf 0x80531968 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_13 & 1);
    r0 = (r3 + 1);
    r3 = (r0 & 1);
    // end of inlined leaf 0x80531968
    r15 = r3;
    r3 = r27;
    // inline leaf 0x80531954 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_14 & 7);
    r0 = (r3 + 1);
    r3 = (r0 & 7);
    // end of inlined leaf 0x80531954
    r4 = r3;
    r3 = r26;
    r5 = r15;
    // inline leaf 0x80531940 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0_mrot_4 = (r0_rot_7 & 7340032);
    r0_mdest_4 = (r0 & -7340033);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(19));
    r0_mrot_5 = (r0_rot_8 & 524288);
    r0_mdest_5 = (r0 & -524289);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    // end of inlined leaf 0x80531940
    r21 = (r21 + 1);
    r20 = (r20 + 1);
}

loc_80531580:
{
    r0 = (r20 & 255);
}

loc_80531588:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r16))) {
        goto loc_805314D4;
    }
}

loc_8053158C:
{
    r3 = r17;
    r4 = (r21 & 255);
    if constexpr (KnownRegArgsCpuCall<0x805326D4u>(&func_805326D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        func_805326D4_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805326D4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80531598:
{
    r3 = r17;
    // inline leaf 0x8053241C (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 15);
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8053241C
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r16 = r3;
    r19 = r24;
    r20 = 0;
    r15 = (r0 & 255);
    goto loc_805315E8;
}

loc_805315B8:
{
    r3 = r16;
    r4 = r24;
    ctx->lr = 0x805315C4u;
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
    InvokeDirectCpu<0x800AA7C0u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r19 + 8));
    r3 = (r16 + 12);
    r4 = (r24 + 12);
    MemoryInline::FlatWriteFloat32((r16 + 8), f0.d);
    ctx->lr = 0x805315D8u;
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
    InvokeDirectCpu<0x800AA7C0u>(ctx);
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
    r24 = (r24 + 20);
    r16 = (r16 + 20);
    r19 = (r19 + 20);
    r20 = (r20 + 1);
}

loc_805315E8:
{
}

loc_805315EC:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r15))) {
        goto loc_805315B8;
    }
}

loc_805315F0:
{
    r3 = r17;
    // inline leaf 0x80532434 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_16 & 15);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 15);
    r4 = (r3 * 20);
    r3 = (r0 * 28);
    r0 = (r5 + r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80532434
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r15 = r3;
    r3 = r17;
    r4 = (r0 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80532764u>(&func_80532764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        func_80532764_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80532764u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r16 = 0;
    goto loc_8053162C;
}

loc_80531614:
{
    r3 = r15;
    r4 = r23;
    // inline leaf 0x8053197C (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8053197C
    r23 = (r23 + 4);
    r15 = (r15 + 4);
    r16 = (r16 + 1);
}

loc_8053162C:
{
    r0 = MemoryInline::FlatRead32((r17 + 60));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_13 & 15);
}

loc_80531638:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_80531614;
    }
}

loc_8053163C:
{
    r0 = MemoryInline::FlatRead8((r1 + 26));
}

loc_80531644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053166C;
    }
}

loc_80531648:
{
    r3 = r18;
    r4 = r25;
    // inline leaf 0x80531B44 (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B44
    r15 = r3;
    r3 = r17;
    // inline leaf 0x80532458 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_17 & 15);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & 15);
    r0 = (r0 * 28);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r4 = (r4_rot_1 & 60);
    r3 = (r3 * 20);
    r0 = (r5 + r0);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80532458
    r4 = r15;
    // inline leaf 0x805319A0 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805319A0
    r25 = (r25 + 4);
}

loc_8053166C:
{
    r0 = MemoryInline::FlatRead8((r1 + 25));
}

loc_80531674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053169C;
    }
}

loc_80531678:
{
    r3 = r18;
    r4 = r25;
    // inline leaf 0x80531B3C (2 guest instruction(s))
    r3 = (r3 + r4);
    // end of inlined leaf 0x80531B3C
    r15 = r3;
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x80532484u>(&func_80532484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80532484_B38E = func_80532484_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80532484_B38E);
        r4 = static_cast<uint32_t>(regargs_result_80532484_B38E >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80532484u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = r15;
    ctx->lr = 0x80531698u;
    if constexpr (KnownRegArgsCpuCall<0x802BF494u>(&func_802BF494)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF494_B724 = func_802BF494_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802BF494_B724;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BF494u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r25 = (r25 + 4);
}

loc_8053169C:
{
    r0 = MemoryInline::FlatRead8((r1 + 24));
}

loc_805316A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805316E4;
    }
}

loc_805316A8:
{
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B34u) && KnownTranslatedCpuCall<0x80531B34u>::kAvailable && !KnownTranslatedCpuCall<0x80531B34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B34u>()) {
        const auto state_free_result_80531B34_BAE2 = func_80531B34_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B34_BAE2);
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
        InvokeDirectCpu<0x80531B34u>(ctx);
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
    r16 = r3;
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x805324B8u>(&func_805324B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_805324B8_C1D5 = func_805324B8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_805324B8_C1D5);
        r4 = static_cast<uint32_t>(regargs_result_805324B8_C1D5 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x805324B8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r15 = r3;
    r19 = 0;
}

loc_805316C8:
{
    r3 = (r15 + r19);
    r4 = (r16 + r19);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805319C4u) && KnownTranslatedCpuCall<0x805319C4u>::kAvailable && !KnownTranslatedCpuCall<0x805319C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805319C4u>()) {
        func_805319C4_statefree(r3, r4);
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
        InvokeDirectCpu<0x805319C4u>(ctx);
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
    r19 = (r19 + 1);
}

loc_805316DC:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(4))) {
        goto loc_805316C8;
    }
}

loc_805316E0:
{
    r25 = (r25 + 4);
}

loc_805316E4:
{
    r0 = (r29 & 255);
}

loc_805316E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80531734;
    }
}

loc_805316EC:
{
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x805325D8u>(&func_805325D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_805325D8_CEB4 = func_805325D8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_805325D8_CEB4);
        r4 = static_cast<uint32_t>(regargs_result_805325D8_CEB4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x805325D8u>(ctx);
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
    }
    r19 = r3;
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B74u) && KnownTranslatedCpuCall<0x80531B74u>::kAvailable && !KnownTranslatedCpuCall<0x80531B74u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B74u>()) {
        const auto state_free_result_80531B74_D417 = func_80531B74_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B74_D417);
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
        InvokeDirectCpu<0x80531B74u>(ctx);
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
    r16 = r3;
    r15 = (r29 & 255);
    r20 = 0;
    goto loc_8053172C;
}

loc_80531714:
{
    r3 = r19;
    r4 = r16;
    if constexpr (KnownRegArgsCpuCall<0x805319D0u>(&func_805319D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        func_805319D0_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x805319D0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r16 = (r16 + 20);
    r19 = (r19 + 20);
    r20 = (r20 + 1);
}

loc_8053172C:
{
}

loc_80531730:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r15))) {
        goto loc_80531714;
    }
}

loc_80531734:
{
    r3 = (r18 + 60);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805318F0u) && KnownTranslatedCpuCall<0x805318F0u>::kAvailable && !KnownTranslatedCpuCall<0x805318F0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805318F0u>()) {
        const auto state_free_result_805318F0_DFC3 = func_805318F0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_805318F0_DFC3);
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
        InvokeDirectCpu<0x805318F0u>(ctx);
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
    r0 = (r3 & 255);
    r4 = (r30 & 255);
}

loc_80531744:
{
    r0 = (r0 * 20);
    r25 = (r25 + r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805317A0;
    }
}

loc_80531750:
{
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x8053290Cu>(&func_8053290C)) {
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
        ctx->ctr = ctr;
        func_8053290C_ra38_0_0_0(ctx, r3, r4, r5);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8053290Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x80532584u>(&func_80532584)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80532584_EDA0 = func_80532584_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80532584_EDA0);
        r4 = static_cast<uint32_t>(regargs_result_80532584_EDA0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80532584u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r19 = r3;
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B2Cu) && KnownTranslatedCpuCall<0x80531B2Cu>::kAvailable && !KnownTranslatedCpuCall<0x80531B2Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B2Cu>()) {
        const auto state_free_result_80531B2C_F255 = func_80531B2C_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B2C_F255);
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
        InvokeDirectCpu<0x80531B2Cu>(ctx);
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
    r16 = r3;
    r15 = (r30 & 255);
    r20 = 0;
    goto loc_80531798;
}

loc_80531780:
{
    r3 = r19;
    r4 = r16;
    if constexpr (KnownRegArgsCpuCall<0x805319FCu>(&func_805319FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_805319FC_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x805319FCu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r16 = (r16 + 4);
    r19 = (r19 + 4);
    r20 = (r20 + 1);
}

loc_80531798:
{
}

loc_8053179C:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r15))) {
        goto loc_80531780;
    }
}

loc_805317A0:
{
    r3 = (r18 + 60);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805318FCu) && KnownTranslatedCpuCall<0x805318FCu>::kAvailable && !KnownTranslatedCpuCall<0x805318FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805318FCu>()) {
        const auto state_free_result_805318FC_FD93 = func_805318FC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_805318FC_FD93);
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
        InvokeDirectCpu<0x805318FCu>(ctx);
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
    r4 = (r14 & 255);
}

loc_805317AC:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & 1020);
    r25 = (r25 + r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80531808;
    }
}

loc_805317B8:
{
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x805327ECu>(&func_805327EC)) {
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
        ctx->ctr = ctr;
        func_805327EC_ra38_0_0_0(ctx, r3, r4, r5);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805327ECu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x80532634u>(&func_80532634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80532634_10B9F = func_80532634_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80532634_10B9F);
        r4 = static_cast<uint32_t>(regargs_result_80532634_10B9F >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80532634u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r16 = r3;
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B24u) && KnownTranslatedCpuCall<0x80531B24u>::kAvailable && !KnownTranslatedCpuCall<0x80531B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B24u>()) {
        const auto state_free_result_80531B24_11006 = func_80531B24_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B24_11006);
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
        InvokeDirectCpu<0x80531B24u>(ctx);
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
    r15 = r3;
    r14 = (r14 & 255);
    r19 = 0;
    goto loc_80531800;
}

loc_805317E8:
{
    r3 = r16;
    r4 = r15;
    ctx->lr = 0x805317F4u;
    if constexpr (KnownRegArgsCpuCall<0x80531A20u>(&func_80531A20)) {
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
        func_80531A20_ra18_0_0_0(ctx, r3, r4);
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
        InvokeDirectCpu<0x80531A20u>(ctx);
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
    }
    r15 = (r15 + 16);
    r16 = (r16 + 16);
    r19 = (r19 + 1);
}

loc_80531800:
{
}

loc_80531804:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r14))) {
        goto loc_805317E8;
    }
}

loc_80531808:
{
    r3 = (r18 + 60);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531908u) && KnownTranslatedCpuCall<0x80531908u>::kAvailable && !KnownTranslatedCpuCall<0x80531908u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531908u>()) {
        const auto state_free_result_80531908_11DCE = func_80531908_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80531908_11DCE);
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
        InvokeDirectCpu<0x80531908u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80531818:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & 4080);
    r25 = (r25 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80531848;
    }
}

loc_80531824:
{
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B1Cu) && KnownTranslatedCpuCall<0x80531B1Cu>::kAvailable && !KnownTranslatedCpuCall<0x80531B1Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B1Cu>()) {
        const auto state_free_result_80531B1C_12653 = func_80531B1C_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B1C_12653);
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
        InvokeDirectCpu<0x80531B1Cu>(ctx);
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
    r14 = r3;
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x805324F4u>(&func_805324F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_805324F4_12D63 = func_805324F4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_805324F4_12D63);
        r4 = static_cast<uint32_t>(regargs_result_805324F4_12D63 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x805324F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r4 = r14;
    if constexpr (KnownRegArgsCpuCall<0x80531ACCu>(&func_80531ACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_80531ACC_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80531ACCu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r25 = (r25 + 4);
}

loc_80531848:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
}

loc_80531850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80531874;
    }
}

loc_80531854:
{
    r3 = r18;
    r4 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531B14u) && KnownTranslatedCpuCall<0x80531B14u>::kAvailable && !KnownTranslatedCpuCall<0x80531B14u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531B14u>()) {
        const auto state_free_result_80531B14_135DE = func_80531B14_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80531B14_135DE);
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
        InvokeDirectCpu<0x80531B14u>(ctx);
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
    r14 = r3;
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x80532538u>(&func_80532538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80532538_13CEE = func_80532538_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80532538_13CEE);
        r4 = static_cast<uint32_t>(regargs_result_80532538_13CEE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80532538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r4 = r14;
    if constexpr (KnownRegArgsCpuCall<0x80531AF0u>(&func_80531AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_80531AF0_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80531AF0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80531874:
{
    r11 = (r1 + 128);
    r3 = r17;
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053122C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053122C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053122C func_8053122C preserves=true fpr_mask=0x00000000
