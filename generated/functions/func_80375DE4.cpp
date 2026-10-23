#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040890(CpuContext* ctx);
extern "C" uint64_t func_80040890_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800490D4(CpuContext* ctx);
extern "C" uint64_t func_800490D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004A610(CpuContext* ctx);
extern "C" uint64_t func_8004A610_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8004EDB0(CpuContext* ctx);
extern "C" uint64_t func_8004EDB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80212540(CpuContext* ctx);
extern "C" uint64_t func_80212540_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021FD34(CpuContext* ctx);
extern "C" uint64_t func_8021FD34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AFCF8(CpuContext* ctx);
extern "C" uint64_t func_802AFCF8_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_802AFE6C(CpuContext* ctx);
extern "C" uint64_t func_802AFE6C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80375C00(CpuContext* ctx);
extern "C" uint64_t func_80375C00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80376F84(CpuContext* ctx);
extern "C" uint64_t func_80376F84_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A2090(CpuContext* ctx);
extern "C" uint64_t func_803A2090_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80427AC8(CpuContext* ctx);
extern "C" uint32_t func_80427AC8_ra0_0_8_0(CpuContext*);
extern "C" void func_80427B10(CpuContext* ctx);
extern "C" uint32_t func_80427B10_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80427CA8(CpuContext* ctx);
extern "C" uint32_t func_80427CA8_ra0_0_8_0(CpuContext*);
extern "C" void func_80428094(CpuContext* ctx);
extern "C" uint64_t func_80428094_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042CEFC(CpuContext* ctx);
extern "C" uint64_t func_8042CEFC_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80452ABC(CpuContext* ctx);
extern "C" uint64_t func_80452ABC_ra108_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80452EB0(CpuContext* ctx);
extern "C" uint64_t func_80452EB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80453864(CpuContext* ctx);
extern "C" uint64_t func_80453864_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80453920(CpuContext* ctx);
extern "C" uint64_t func_80453920_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804539A4(CpuContext* ctx);
extern "C" uint64_t func_804539A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80453BB0(CpuContext* ctx);
extern "C" uint64_t func_80453BB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80375DE4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80375DE4;

loc_80375DE4:
{
    r3 = 44;
    ctx->lr = 0x80375DECu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        const auto regargs_result_800CF80C_1BFE = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_1BFE);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_1BFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    r30 = r3;
    r3 = r29;
    ctx->lr = 0x80375DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80452EB0u>(&func_80452EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80452EB0_2616 = func_80452EB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80452EB0_2616);
        r4 = static_cast<uint32_t>(regargs_result_80452EB0_2616 >> 32);
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
        InvokeDirectCpu<0x80452EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r23 = 0;
    r3 = 0x806C0000u;
    r25 = (r3 + 1984);
}

loc_80375E04:
{
    r3 = r25;
    r4 = 0;
    r5 = 304;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = (r25 + 304);
    r23 = (r23 + 1);
}

loc_80375E20:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(10))) {
        goto loc_80375E04;
    }
}

loc_80375E24:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2225));
}

loc_80375E34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80375ED4;
    }
}

loc_80375E38:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = (r24 * 2848);
    r26 = (r3 + r0);
    ctx->lr = 0x80375E54u;
    if constexpr (KnownRegArgsCpuCall<0x80427AC8u>(&func_80427AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427AC8_31B6 = func_80427AC8_ra0_0_8_0(ctx);
        r3 = regargs_result_80427AC8_31B6;
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
        InvokeDirectCpu<0x80427AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r23 = r3;
}

loc_80375E5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80376050;
    }
}

loc_80375E60:
{
    r4 = (r24 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + 1984);
    r25 = (r0 + r4);
    r0 = 1;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r0 = (r24 & 255);
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r25 + 292), r26);
    r3 = (r25 + 3);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_36DB = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_36DB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r25 + 13);
    r4 = (r23 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_3AC4 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3AC4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5808);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_3EA8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3EA8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5819);
    r4 = (r23 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_4293 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4293;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r26 + 1499);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_4677 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4677;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r25 + 36);
    ctx->lr = 0x80375ED0u;
    if constexpr (KnownRegArgsCpuCall<0x8004A610u>(&func_8004A610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8004A610_4A83 = func_8004A610_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8004A610_4A83);
        r4 = static_cast<uint32_t>(regargs_result_8004A610_4A83 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8004A610u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80376050;
}

loc_80375ED4:
{
    r3 = 2;
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r23 = r3;
    ctx->lr = 0x80375EE4u;
    if constexpr (KnownRegArgsCpuCall<0x80427CA8u>(&func_80427CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427CA8_54C1 = func_80427CA8_ra0_0_8_0(ctx);
        r3 = regargs_result_80427CA8_54C1;
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
        InvokeDirectCpu<0x80427CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80375EE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80375F88;
    }
}

loc_80375EEC:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = (r24 * 2848);
    r26 = (r3 + r0);
    ctx->lr = 0x80375F08u;
    if constexpr (KnownRegArgsCpuCall<0x80427AC8u>(&func_80427AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427AC8_5D34 = func_80427AC8_ra0_0_8_0(ctx);
        r3 = regargs_result_80427AC8_5D34;
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
        InvokeDirectCpu<0x80427AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r23 = r3;
}

loc_80375F10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80376050;
    }
}

loc_80375F14:
{
    r4 = (r24 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + 1984);
    r25 = (r0 + r4);
    r0 = 1;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r0 = (r24 & 255);
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r25 + 292), r26);
    r3 = (r25 + 3);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_6259 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6259;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r25 + 13);
    r4 = (r23 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_6642 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6642;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5808);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_6A26 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6A26;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5819);
    r4 = (r23 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_6E11 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6E11;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r26 + 1499);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_71F5 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_71F5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r25 + 36);
    ctx->lr = 0x80375F84u;
    if constexpr (KnownRegArgsCpuCall<0x8004A610u>(&func_8004A610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8004A610_7601 = func_8004A610_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8004A610_7601);
        r4 = static_cast<uint32_t>(regargs_result_8004A610_7601 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8004A610u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80376050;
}

loc_80375F88:
{
    r3 = r29;
    ctx->lr = 0x80375F90u;
    if constexpr (KnownRegArgsCpuCall<0x80428094u>(&func_80428094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80428094_7C9A = func_80428094_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80428094_7C9A);
        r4 = static_cast<uint32_t>(regargs_result_80428094_7C9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80428094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        xer = ctx->xer;
    }
    r27 = r3;
    r24 = 0;
    r3 = 0x806C0000u;
    r26 = (r3 + 1984);
    r25 = (r29 + 4);
    r28 = 1;
    r29 = 0;
    goto loc_80376048;
}

loc_80375FB0:
{
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r28));
    r0 = (r24 & 255);
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r26 + 2), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite32((r26 + 292), r23);
    r3 = (r26 + 3);
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_8635 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8635;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r26 + 13);
    r4 = (r25 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_8A1E = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8A1E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80375FE8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r0))) {
        goto loc_8037601C;
    }
}

loc_80375FEC:
{
    r3 = (r31 + 5808);
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_8F8F = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8F8F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5819);
    r4 = (r25 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_937A = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_937A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r23 + 1499);
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_975E = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_975E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r26 + 36);
    ctx->lr = 0x80376018u;
    if constexpr (KnownRegArgsCpuCall<0x8004A610u>(&func_8004A610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8004A610_9B6A = func_8004A610_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8004A610_9B6A);
        r4 = static_cast<uint32_t>(regargs_result_8004A610_9B6A >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8004A610u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80376038;
}

loc_8037601C:
{
    r3 = r24;
    ctx->lr = 0x80376024u;
    if constexpr (KnownRegArgsCpuCall<0x80427B10u>(&func_80427B10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427B10_A1E6 = func_80427B10_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80427B10_A1E6;
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
        InvokeDirectCpu<0x80427B10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = r23;
    r5 = (r24 & 255);
    r6 = 0;
    ctx->lr = 0x80376038u;
    if constexpr (KnownRegArgsCpuCall<0x80376F84u>(&func_80376F84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        const auto regargs_result_80376F84_A5B3 = func_80376F84_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80376F84_A5B3);
        r4 = static_cast<uint32_t>(regargs_result_80376F84_A5B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80376F84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        xer = ctx->xer;
    }
}

loc_80376038:
{
    r26 = (r26 + 304);
    r23 = (r23 + 2848);
    r25 = (r25 + 288);
    r24 = (r24 + 1);
}

loc_80376048:
{
}

loc_8037604C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r27))) {
        goto loc_80375FB0;
    }
}

loc_80376050:
{
    r3 = r30;
    ctx->lr = 0x80376058u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800CF878u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 5772), static_cast<uint16_t>(r0));
    r3 = 3;
    // inline leaf 0x804537E4 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -26988));
    // end of inlined leaf 0x804537E4
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 5774), static_cast<uint16_t>(r0));
    r3 = 4;
    // inline leaf 0x804537E4 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -26988));
    // end of inlined leaf 0x804537E4
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 5776), static_cast<uint16_t>(r0));
    r3 = 1;
    // inline leaf 0x804537E4 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -26988));
    // end of inlined leaf 0x804537E4
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 5778), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 374));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803760B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803760E0;
    }
}

loc_803760B4:
{
    goto loc_803763A0;
}

loc_803760E0:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 374), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2225));
}

loc_80376100:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80376124;
    }
}

loc_80376104:
{
    r3 = (r31 + 5840);
    r4 = (r31 + 7644);
    ctx->lr = 0x80376110u;
    if constexpr (KnownRegArgsCpuCall<0x80453BB0u>(&func_80453BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80453BB0_BD37 = func_80453BB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80453BB0_BD37);
        r4 = static_cast<uint32_t>(regargs_result_80453BB0_BD37 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80453BB0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 5840);
    ctx->lr = 0x80376118u;
    if constexpr (KnownRegArgsCpuCall<0x8004EDB0u>(&func_8004EDB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8004EDB0_C507 = func_8004EDB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004EDB0_C507);
        r4 = static_cast<uint32_t>(regargs_result_8004EDB0_C507 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004EDB0u>(ctx);
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
        xer = ctx->xer;
    }
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80376150;
}

loc_80376124:
{
    // inline leaf 0x8042869C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -15616));
    // end of inlined leaf 0x8042869C
}

loc_8037612C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8037613C;
    }
}

loc_80376130:
{
    r3 = (r31 + 5782);
    ctx->lr = 0x80376138u;
    if constexpr (KnownRegArgsCpuCall<0x8042CEFCu>(&func_8042CEFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8042CEFC_CBED = func_8042CEFC_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042CEFC_CBED);
        r4 = static_cast<uint32_t>(regargs_result_8042CEFC_CBED >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8042CEFCu>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80376144;
}

loc_8037613C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 5782), static_cast<uint8_t>(r0));
}

loc_80376144:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80376150:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_803763A0:
{
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 5468));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803763B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803763D4;
    }
}

loc_803763B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 5469));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803763C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803763D4;
    }
}

loc_803763C4:
{
    r3 = r31;
    r4 = 0;
    // inline leaf 0x803769C8 (1 guest instruction(s))
    // end of inlined leaf 0x803769C8
    MemoryInline::FlatWrite8((r31 + 5468), static_cast<uint8_t>(r29));
}

loc_803763D4:
{
    r3 = 0x80660000u;
    r29 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r29 + 2149));
}

loc_803763E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8037693C;
    }
}

loc_803763E8:
{
    r3 = 0;
    // inline leaf 0x80375A20 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r13 + -16940), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80375A20
    // inline leaf 0x80453830 (13 guest instruction(s))
}

loc_inl12_0x80453830:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl12_0x80453838:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl12_0x80453844;
    }
}

loc_inl12_0x8045383C:
{
    r3 = 0;
    goto loc_inl12_cont_80453830;
}

loc_inl12_0x80453844:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
}

loc_inl12_0x8045384C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(50))) {
        goto loc_inl12_0x80453858;
    }
}

loc_inl12_0x80453850:
{
    r3 = 0;
    goto loc_inl12_cont_80453830;
}

loc_inl12_0x80453858:
{
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -16595));
}

loc_inl12_cont_80453830:
{
    // end of inlined leaf 0x80453830
    r4 = 0x806B0000u;
    r31 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r31 + 355), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
}

loc_80376408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80376420;
    }
}

loc_8037640C:
{
}

loc_80376410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8037642C;
    }
}

loc_80376414:
{
}

loc_80376418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80376484;
    }
}

loc_8037641C:
{
    goto loc_803765A0;
}

loc_80376420:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 364), static_cast<uint8_t>(r0));
    goto loc_803765A0;
}

loc_8037642C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r31 + 360), r29);
    r3 = 9;
    r4 = 0x80370000u;
    r4 = (r4 + 23080);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800490D4_E0BF = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_E0BF);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_E0BF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 364), static_cast<uint8_t>(r29));
    r3 = 0;
    // inline leaf 0x80058150 (12 guest instruction(s))
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = 0;
    r3 = 0x80670000u;
    r3 = (r3 + -12024);
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWriteRam32(r3_addr_1, r0);
    r3 = (r3 + r4);
    MemoryInline::FlatWriteRam32((r3 + 48), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
    MemoryInline::FlatWriteRam32((r3 + 80), r0);
    MemoryInline::FlatWriteRam32((r3 + 96), r0);
    // end of inlined leaf 0x80058150
    ctx->lr = 0x80376474u;
    if constexpr (KnownRegArgsCpuCall<0x80040890u>(&func_80040890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80040890_E886 = func_80040890_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040890_E886);
        r4 = static_cast<uint32_t>(regargs_result_80040890_E886 >> 32);
        r0 = ctx->gpr[0];
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80040890u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    MemoryInline::FlatWriteRam8((r3 + 813), static_cast<uint8_t>(r29));
    goto loc_8037693C;
}

loc_80376484:
{
    r0 = MemoryInline::FlatRead8((r31 + 364));
}

loc_8037648C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80376518;
    }
}

loc_80376490:
{
    r29 = 1;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r29));
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_803764A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80376558;
    }
}

loc_803764A8:
{
    r0 = MemoryInline::FlatRead16((r31 + 356));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803764B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803764D8;
    }
}

loc_803764B4:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803764C0u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800CEA98_F4B2 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_F4B2);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_F4B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803764C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80376558;
    }
}

loc_803764C8:
{
    r3 = MemoryInline::FlatRead16((r31 + 356));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 356), static_cast<uint16_t>(r0));
    goto loc_80376558;
}

loc_803764D8:
{
    r3 = 1;
    // inline leaf 0x80375A20 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r13 + -16940), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80375A20
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 708));
    r0 = (r0 & 16);
}

loc_803764F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80376558;
    }
}

loc_803764F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16944), r0);
    r0 = 20;
    MemoryInline::FlatWriteRam16((r31 + 356), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 364), static_cast<uint8_t>(r29));
    r3 = 0;
    ctx->lr = 0x80376514u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_800DBC94_FDD3 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_FDD3);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_FDD3 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80376558;
}

loc_80376518:
{
    r0 = MemoryInline::FlatRead16((r31 + 356));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80376520:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80376548;
    }
}

loc_80376524:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x80376530u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800CEA98_106B1 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_106B1);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_106B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80376534:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80376558;
    }
}

loc_80376538:
{
    r3 = MemoryInline::FlatRead16((r31 + 356));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r31 + 356), static_cast<uint16_t>(r0));
    goto loc_80376558;
}

loc_80376548:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 176), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r29 + 1998), static_cast<uint8_t>(r0));
}

loc_80376558:
{
    ctx->lr = 0x8037655Cu;
    if constexpr (KnownRegArgsCpuCall<0x80453920u>(&func_80453920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453920_10D7E = func_80453920_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80453920_10D7E);
        r4 = static_cast<uint32_t>(regargs_result_80453920_10D7E >> 32);
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
        InvokeDirectCpu<0x80453920u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    MemoryInline::FlatWriteRam32((r4 + 360), r3);
}

loc_8037656C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80376588;
    }
}

loc_80376570:
{
    r3 = 9;
    r4 = 0x80370000u;
    r4 = (r4 + 23080);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800490D4_1124C = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_1124C);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_1124C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
}

loc_80376588:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r0));
    goto loc_8037693C;
}

loc_803765A0:
{
    r3 = 0x806B0000u;
    r30 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r30 + 375));
}

loc_803765B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803767D8;
    }
}

loc_803765B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 366));
}

loc_803765BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803765D4;
    }
}

loc_803765C0:
{
}

loc_803765C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80376634;
    }
}

loc_803765C8:
{
}

loc_803765CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80376724;
    }
}

loc_803765D0:
{
    goto loc_803767D8;
}

loc_803765D4:
{
    // inline leaf 0x804538B0 (12 guest instruction(s))
}

loc_inl16_0x804538B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl16_0x804538B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl16_0x804538C4;
    }
}

loc_inl16_0x804538BC:
{
    r3 = 0;
    goto loc_inl16_cont_804538B0;
}

loc_inl16_0x804538C4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl16_cont_804538B0:
{
    // end of inlined leaf 0x804538B0
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r30 + 367), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803765EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803767D8;
    }
}

loc_803765F0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r0));
    r29 = 0;
    MemoryInline::FlatWriteRam16((r30 + 368), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead8((r30 + 366));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 366), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r29));
    r3 = 0;
    // inline leaf 0x80058150 (12 guest instruction(s))
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r0 = 0;
    r3 = 0x80670000u;
    r3 = (r3 + -12024);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWriteRam32(r3_addr_2, r0);
    r3 = (r3 + r4);
    MemoryInline::FlatWriteRam32((r3 + 48), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
    MemoryInline::FlatWriteRam32((r3 + 80), r0);
    MemoryInline::FlatWriteRam32((r3 + 96), r0);
    // end of inlined leaf 0x80058150
    ctx->lr = 0x80376628u;
    if constexpr (KnownRegArgsCpuCall<0x80040890u>(&func_80040890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80040890_1237F = func_80040890_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040890_1237F);
        r4 = static_cast<uint32_t>(regargs_result_80040890_1237F >> 32);
        r0 = ctx->gpr[0];
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80040890u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    MemoryInline::FlatWriteRam8((r3 + 813), static_cast<uint8_t>(r29));
}

loc_80376634:
{
    r3 = 0x806B0000u;
    r29 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r29 + 367));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80376648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803767A8;
    }
}

loc_8037664C:
{
    ctx->lr = 0x80376650u;
    if constexpr (KnownRegArgsCpuCall<0x804539A4u>(&func_804539A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804539A4_12C8A = func_804539A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804539A4_12C8A);
        r4 = static_cast<uint32_t>(regargs_result_804539A4_12C8A >> 32);
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
        InvokeDirectCpu<0x804539A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r29 + 360), r3);
}

loc_80376658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80376674;
    }
}

loc_8037665C:
{
    r3 = 9;
    r4 = 0x80370000u;
    r4 = (r4 + 23080);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800490D4_13129 = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_13129);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_13129 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
}

loc_80376674:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r29 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_80376690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80376708;
    }
}

loc_80376694:
{
    r0 = MemoryInline::FlatRead16((r29 + 368));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8037669C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803766C4;
    }
}

loc_803766A0:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803766ACu;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800CEA98_138F1 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_138F1);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_138F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803766B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803767D8;
    }
}

loc_803766B4:
{
    r3 = MemoryInline::FlatRead16((r29 + 368));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r29 + 368), static_cast<uint16_t>(r0));
    goto loc_80376708;
}

loc_803766C4:
{
    r3 = 1;
    // inline leaf 0x80375A20 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r13 + -16940), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80375A20
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 708));
    r0 = (r0 & 16);
}

loc_803766E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80376708;
    }
}

loc_803766E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16944), r0);
    r3 = MemoryInline::FlatRead8((r29 + 366));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r29 + 366), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWriteRam16((r29 + 368), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->lr = 0x80376708u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_800DBC94_14258 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_14258);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_14258 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80376708:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r0));
    ctx->lr = 0x80376720u;
    if constexpr (KnownRegArgsCpuCall<0x80212540u>(&func_80212540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80212540_14AD2 = func_80212540_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80212540_14AD2);
        r4 = static_cast<uint32_t>(regargs_result_80212540_14AD2 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80212540u>(ctx);
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
    goto loc_8037693C;
}

loc_80376724:
{
    r0 = MemoryInline::FlatRead16((r30 + 368));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8037672C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80376754;
    }
}

loc_80376730:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x8037673Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800CEA98_15074 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_15074);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_15074 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80376740:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8037693C;
    }
}

loc_80376744:
{
    r3 = MemoryInline::FlatRead16((r30 + 368));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r30 + 368), static_cast<uint16_t>(r0));
    goto loc_8037693C;
}

loc_80376754:
{
    // inline leaf 0x80453968 (8 guest instruction(s))
}

loc_inl20_0x80453968:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl20_0x80453970:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl20_0x8045397C;
    }
}

loc_inl20_0x80453974:
{
    r3 = 0;
    goto loc_inl20_cont_80453968;
}

loc_inl20_0x8045397C:
{
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15208));
}

loc_inl20_cont_80453968:
{
    // end of inlined leaf 0x80453968
    r0 = (r3 & 255);
}

loc_80376760:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803767A8;
    }
}

loc_80376764:
{
    ctx->lr = 0x80376768u;
    if constexpr (KnownRegArgsCpuCall<0x803A2090u>(&func_803A2090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803A2090_15940 = func_803A2090_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A2090_15940);
        r4 = static_cast<uint32_t>(regargs_result_803A2090_15940 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803A2090u>(ctx);
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
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r30 = r3;
    r3 = (r3 & 255);
    r4 = 0;
    ctx->lr = 0x8037677Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AFE6Cu>(&func_802AFE6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802AFE6C_15F77 = func_802AFE6C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AFE6C_15F77);
        r4 = static_cast<uint32_t>(regargs_result_802AFE6C_15F77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFE6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = (r3 & 65535);
    r3 = (r30 & 255);
    r4 = 0;
    ctx->lr = 0x8037678Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AFCF8u>(&func_802AFCF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802AFCF8_162E2 = func_802AFCF8_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802AFCF8_162E2);
        r4 = static_cast<uint32_t>(regargs_result_802AFCF8_162E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFCF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = 0;
    r5 = r29;
    ctx->lr = 0x8037679Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021FD34u>(&func_8021FD34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8021FD34_1675A = func_8021FD34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021FD34_1675A);
        r4 = static_cast<uint32_t>(regargs_result_8021FD34_1675A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8021FD34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->lr = 0x803767A0u;
    if constexpr (KnownRegArgsCpuCall<0x80375C00u>(&func_80375C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        const auto regargs_result_80375C00_16CB2 = func_80375C00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80375C00_16CB2);
        r4 = static_cast<uint32_t>(regargs_result_80375C00_16CB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x80375C00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    r3 = 0;
    // inline leaf 0x80453988 (7 guest instruction(s))
}

loc_inl22_0x80453988:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl22_0x80453990:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x80453994:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite8((r3 + -15208), static_cast<uint8_t>(r0));
    goto loc_inl22_cont_80453988;
}

loc_inl22_return:
{
}

loc_inl22_cont_80453988:
{
    // end of inlined leaf 0x80453988
}

loc_803767A8:
{
    r30 = 0;
    r3 = 0x806B0000u;
    r29 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r29 + 366), static_cast<uint8_t>(r30));
    // inline leaf 0x804538E0 (7 guest instruction(s))
}

loc_inl23_0x804538E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl23_0x804538E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl23_return;
    }
}

loc_inl23_0x804538EC:
{
    r0 = 0;
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    goto loc_inl23_cont_804538E0;
}

loc_inl23_return:
{
}

loc_inl23_cont_804538E0:
{
    // end of inlined leaf 0x804538E0
    MemoryInline::FlatWriteRam8((r29 + 8), static_cast<uint8_t>(r30));
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r30));
    ctx->lr = 0x803767D4u;
    if constexpr (KnownRegArgsCpuCall<0x80212540u>(&func_80212540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80212540_17CC9 = func_80212540_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80212540_17CC9);
        r4 = static_cast<uint32_t>(regargs_result_80212540_17CC9 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80212540u>(ctx);
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
    goto loc_8037693C;
}

loc_803767D8:
{
    r31 = 0x806B0000u;
    r30 = (r31 + -12348);
    r0 = MemoryInline::FlatRead8((r30 + 375));
}

loc_803767E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80376800;
    }
}

loc_803767EC:
{
}

loc_803767F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80376898;
    }
}

loc_803767F4:
{
}

loc_803767F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803768D4;
    }
}

loc_803767FC:
{
    goto loc_803768F8;
}

loc_80376800:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl24_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl24_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl24_0x800CFB10;
    }
}

loc_inl24_0x800CFB08:
{
    r3 = 0;
    goto loc_inl24_cont_800CFAF4;
}

loc_inl24_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl24_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl24_0x800CFB24;
    }
}

loc_inl24_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl24_cont_800CFAF4;
}

loc_inl24_0x800CFB24:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl24_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    ctx->lr = 0x80376810u;
    if constexpr (KnownRegArgsCpuCall<0x80427CA8u>(&func_80427CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427CA8_18775 = func_80427CA8_ra0_0_8_0(ctx);
        r3 = regargs_result_80427CA8_18775;
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
        InvokeDirectCpu<0x80427CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80376814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803768F8;
    }
}

loc_80376818:
{
    // inline leaf 0x80453968 (8 guest instruction(s))
}

loc_inl25_0x80453968:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl25_0x80453970:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl25_0x8045397C;
    }
}

loc_inl25_0x80453974:
{
    r3 = 0;
    goto loc_inl25_cont_80453968;
}

loc_inl25_0x8045397C:
{
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15208));
}

loc_inl25_cont_80453968:
{
    // end of inlined leaf 0x80453968
    r0 = (r3 & 255);
}

loc_80376824:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803768F8;
    }
}

loc_80376828:
{
    r0 = MemoryInline::FlatRead8((r31 + -12348));
}

loc_80376830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803768D4;
    }
}

loc_80376834:
{
    r0 = MemoryInline::FlatRead8((r29 + 2817));
    r0 = (r0 & 7);
}

loc_80376840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803768D4;
    }
}

loc_80376844:
{
    r3 = (r30 + 376);
    ctx->lr = 0x8037684Cu;
    if constexpr (KnownRegArgsCpuCall<0x80452ABCu>(&func_80452ABC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80452ABC_18FB1 = func_80452ABC_ra108_0_18_0(ctx, r3, r8);
        r3 = static_cast<uint32_t>(regargs_result_80452ABC_18FB1);
        r4 = static_cast<uint32_t>(regargs_result_80452ABC_18FB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80452ABCu>(ctx);
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
    }
}

loc_80376850:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80376860;
    }
}

loc_80376854:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 375), static_cast<uint8_t>(r0));
    goto loc_8037686C;
}

loc_80376860:
{
    r3 = MemoryInline::FlatRead8((r30 + 375));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 375), static_cast<uint8_t>(r0));
}

loc_8037686C:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r0));
    ctx->lr = 0x80376894u;
    if constexpr (KnownRegArgsCpuCall<0x80212540u>(&func_80212540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80212540_19770 = func_80212540_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80212540_19770);
        r4 = static_cast<uint32_t>(regargs_result_80212540_19770 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80212540u>(ctx);
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
    goto loc_8037693C;
}

loc_80376898:
{
    r0 = MemoryInline::FlatRead8((r30 + 376));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_803768A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803768F8;
    }
}

loc_803768A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803768B8;
    }
}

loc_803768AC:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 375), static_cast<uint8_t>(r0));
    goto loc_8037686C;
}

loc_803768B8:
{
    r3 = 5;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl26_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl26_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl26_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl26_cont_804538FC;
}

loc_inl26_return:
{
}

loc_inl26_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r3 = 2;
    // inline leaf 0x80453988 (7 guest instruction(s))
}

loc_inl27_0x80453988:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl27_0x80453990:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl27_return;
    }
}

loc_inl27_0x80453994:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite8((r3 + -15208), static_cast<uint8_t>(r0));
    goto loc_inl27_cont_80453988;
}

loc_inl27_return:
{
}

loc_inl27_cont_80453988:
{
    // end of inlined leaf 0x80453988
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 375), static_cast<uint8_t>(r0));
    goto loc_8037686C;
}

loc_803768D4:
{
    r3 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453864_1A3D0 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_1A3D0);
        r4 = static_cast<uint32_t>(regargs_result_80453864_1A3D0 >> 32);
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
    r3 = 0;
    // inline leaf 0x80453988 (7 guest instruction(s))
}

loc_inl28_0x80453988:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl28_0x80453990:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl28_return;
    }
}

loc_inl28_0x80453994:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite8((r3 + -15208), static_cast<uint8_t>(r0));
    goto loc_inl28_cont_80453988;
}

loc_inl28_return:
{
}

loc_inl28_cont_80453988:
{
    // end of inlined leaf 0x80453988
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 375), static_cast<uint8_t>(r0));
    goto loc_8037686C;
}

loc_803768F8:
{
    // inline leaf 0x8044E4B4 (8 guest instruction(s))
}

loc_inl29_0x8044E4B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl29_0x8044E4BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl29_0x8044E4C8;
    }
}

loc_inl29_0x8044E4C0:
{
    r3 = 0;
    goto loc_inl29_cont_8044E4B4;
}

loc_inl29_0x8044E4C8:
{
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15206));
}

loc_inl29_cont_8044E4B4:
{
    // end of inlined leaf 0x8044E4B4
    r0 = (r3 & 255);
}

loc_80376904:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8037693C;
    }
}

loc_80376908:
{
    r3 = 29;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl30_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl30_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl30_return;
    }
}

loc_inl30_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl30_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl30_return;
    }
}

loc_inl30_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl30_cont_804538FC;
}

loc_inl30_return:
{
}

loc_inl30_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    // inline leaf 0x8044E4D4 (10 guest instruction(s))
}

loc_inl31_0x8044E4D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl31_0x8044E4DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl31_return;
    }
}

loc_inl31_0x8044E4E0:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15206));
}

loc_inl31_0x8044E4EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl31_return;
    }
}

loc_inl31_0x8044E4F0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + -15206), static_cast<uint8_t>(r0));
    goto loc_inl31_cont_8044E4D4;
}

loc_inl31_return:
{
}

loc_inl31_cont_8044E4D4:
{
    // end of inlined leaf 0x8044E4D4
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    MemoryInline::FlatWriteRam16((r3 + 708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 724), static_cast<uint16_t>(r0));
    ctx->lr = 0x8037693Cu;
    if constexpr (KnownRegArgsCpuCall<0x80212540u>(&func_80212540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80212540_1B41A = func_80212540_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80212540_1B41A);
        r4 = static_cast<uint32_t>(regargs_result_80212540_1B41A >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80212540u>(ctx);
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

loc_8037693C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -4));
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80375DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80375DE4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFF803FFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80375DE4 func_80375DE4 preserves=true fpr_mask=0x00000000
