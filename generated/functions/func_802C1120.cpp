#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C554(CpuContext* ctx);
extern "C" void func_8004C554_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800652E8(CpuContext* ctx);
extern "C" uint64_t func_800652E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8007B1C4(CpuContext* ctx);
extern "C" uint64_t func_8007B1C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B288(CpuContext* ctx);
extern "C" uint64_t func_8007B288_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80192444(CpuContext* ctx);
extern "C" uint64_t func_80192444_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802AFCE8(CpuContext* ctx);
extern "C" uint32_t func_802AFCE8_ra0_0_8_0(CpuContext*);
extern "C" void func_802B02C0(CpuContext* ctx);
extern "C" uint32_t func_802B02C0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B0328(CpuContext* ctx);
extern "C" uint32_t func_802B0328_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BF4CC(CpuContext* ctx);
extern "C" uint32_t func_802BF4CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF698(CpuContext* ctx);
extern "C" uint64_t func_802BF698_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BFC80(CpuContext* ctx);
extern "C" uint64_t func_802BFC80_ra38_1e2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802BFFFC(CpuContext* ctx);
extern "C" uint64_t func_802BFFFC_ra38_1ea_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802C0098(CpuContext* ctx);
extern "C" uint64_t func_802C0098_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802C023C(CpuContext* ctx);
extern "C" uint64_t func_802C023C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0A10(CpuContext* ctx);
extern "C" uint32_t func_802C0A10_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0B60(CpuContext* ctx);
extern "C" uint64_t func_802C0B60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0BE8(CpuContext* ctx);
extern "C" uint64_t func_802C0BE8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802C0DB8(CpuContext* ctx);
extern "C" uint64_t func_802C0DB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0E30(CpuContext* ctx);
extern "C" uint64_t func_802C0E30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0E88(CpuContext* ctx);
extern "C" uint64_t func_802C0E88_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802C1B3C(CpuContext* ctx);
extern "C" uint32_t func_802C1B3C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802C1D30(CpuContext* ctx);
extern "C" uint64_t func_802C1D30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802C1E78(CpuContext* ctx);
extern "C" uint64_t func_802C1E78_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802C24A4(CpuContext* ctx);
extern "C" uint32_t func_802C24A4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004C554_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_802AFCE8_statefree();
extern "C" MkwStateFreeResult2 func_802B02C0_statefree(uint32_t, uint32_t);
extern "C" void func_8004C554_statefree_v0(uint32_t, uint32_t);
extern "C" uint64_t func_802B02C0_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_802C1120_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802C1B10_loc_0 = 0;
    uint32_t addr_psqx_802C1B1C_loc_0 = 0;
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
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802C1120;

loc_802C1120:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 288);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r27 = r3;
    r3 = 0;
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
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r15 = r3;
    r3 = (r1 + 204);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 192);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 180);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_802C1180:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802C1B04;
    }
}

loc_802C1184:
{
    ctx->lr = 0x802C1188u;
    if constexpr (KnownRegArgsCpuCall<0x802BF4CCu>(&func_802BF4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BF4CC_2C89 = func_802BF4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF4CC_2C89;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BF4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802C118C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C119C;
    }
}

loc_802C1190:
{
    r3 = r27;
    ctx->lr = 0x802C1198u;
    if constexpr (KnownRegArgsCpuCall<0x802C1D30u>(&func_802C1D30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802C1D30_316B = func_802C1D30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C1D30_316B);
        r4 = static_cast<uint32_t>(regargs_result_802C1D30_316B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x802C1D30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802C1B0C;
}

loc_802C119C:
{
    r3 = r15;
    // inline leaf 0x80065218 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80065218
    r31 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl8_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl8_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CFB10;
    }
}

loc_inl8_0x800CFB08:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl8_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl8_0x800CFB24;
    }
}

loc_inl8_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl8_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r17 = r3;
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl9_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl9_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CFB50;
    }
}

loc_inl9_0x800CFB48:
{
    r3 = 0;
    goto loc_inl9_cont_800CFB34;
}

loc_inl9_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl9_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl9_0x800CFB64;
    }
}

loc_inl9_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl9_cont_800CFB34;
}

loc_inl9_0x800CFB64:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl9_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r19 = (r3 & 65535);
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_802C11CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802C11D4;
    }
}

loc_802C11D0:
{
    r19 = 1;
}

loc_802C11D4:
{
    r3 = (r1 + 168);
    ctx->lr = 0x802C11DCu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 180);
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    ctx->lr = 0x802C11ECu;
    if constexpr (KnownRegArgsCpuCall<0x802BF4CCu>(&func_802BF4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BF4CC_4B5C = func_802BF4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF4CC_4B5C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BF4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802C11F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802C1284;
    }
}

loc_802C11F4:
{
    r3 = (r31 + 204);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r31 + 272);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r18 = 0;
}

loc_802C1208:
{
    r3 = r27;
    r4 = (r1 + 180);
    r5 = r18;
    r6 = 1;
    ctx->lr = 0x802C121Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BFC80u>(&func_802BFC80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802BFC80_50B9 = func_802BFC80_ra38_1e2_18_0(ctx, r3, r4, r5, f1.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFC80_50B9);
        r4 = static_cast<uint32_t>(regargs_result_802BFC80_50B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BFC80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r16 = r3;
}

loc_802C1224:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C1264;
    }
}

loc_802C1228:
{
}

loc_802C122C:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(2))) {
        goto loc_802C124C;
    }
}

loc_802C1230:
{
    r3 = r27;
    r4 = r16;
    ctx->lr = 0x802C123Cu;
    if constexpr (KnownRegArgsCpuCall<0x802C0A10u>(&func_802C0A10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802C0A10_59BB = func_802C0A10_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802C0A10_59BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0A10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = r27;
    r4 = r16;
    ctx->lr = 0x802C1248u;
    if constexpr (KnownRegArgsCpuCall<0x802C0E30u>(&func_802C0E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802C0E30_5D9A = func_802C0E30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C0E30_5D9A);
        r4 = static_cast<uint32_t>(regargs_result_802C0E30_5D9A >> 32);
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
        InvokeDirectCpu<0x802C0E30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802C1264;
}

loc_802C124C:
{
    r3 = r27;
    r4 = r16;
    ctx->lr = 0x802C1258u;
    if constexpr (KnownRegArgsCpuCall<0x802C0DB8u>(&func_802C0DB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802C0DB8_61D3 = func_802C0DB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C0DB8_61D3);
        r4 = static_cast<uint32_t>(regargs_result_802C0DB8_61D3 >> 32);
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
        InvokeDirectCpu<0x802C0DB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r27;
    r4 = r16;
    if constexpr (KnownRegArgsCpuCall<0x802C0B60u>(&func_802C0B60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802C0B60_65C1 = func_802C0B60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C0B60_65C1);
        r4 = static_cast<uint32_t>(regargs_result_802C0B60_65C1 >> 32);
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
        InvokeDirectCpu<0x802C0B60u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_802C1264:
{
    r18 = (r18 + 1);
}

loc_802C126C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(10))) {
        goto loc_802C1208;
    }
}

loc_802C1270:
{
    r3 = r27;
    r4 = r31;
    ctx->lr = 0x802C127Cu;
    if constexpr (KnownRegArgsCpuCall<0x802C0BE8u>(&func_802C0BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C0BE8_6AC8 = func_802C0BE8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C0BE8_6AC8);
        r4 = static_cast<uint32_t>(regargs_result_802C0BE8_6AC8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r27;
    ctx->lr = 0x802C1284u;
    if constexpr (KnownRegArgsCpuCall<0x802C0E88u>(&func_802C0E88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C0E88_737D = func_802C0E88_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C0E88_737D);
        r4 = static_cast<uint32_t>(regargs_result_802C0E88_737D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C1284:
{
    r30 = 0;
    r28 = 0;
    r29 = 0;
    // inline leaf 0x802AFF9C (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802AFF9C
}

loc_802C1298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C12E4;
    }
}

loc_802C129C:
{
    r28 = 1;
    ctx->lr = 0x802C12A4u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BE0EC_7DFB = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_7DFB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C12A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C12B0;
    }
}

loc_802C12AC:
{
    r30 = 1;
}

loc_802C12B0:
{
    // inline leaf 0x8004045C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8004045C
}

loc_802C12B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C12E4;
    }
}

loc_802C12BC:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r16 = (r3 & 255);
    r3 = 1;
    // inline leaf 0x800CF3F8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 39), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800CF3F8
    ctx->lr = 0x802C12D0u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BE0EC_8688 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_8688;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C12D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C12DC;
    }
}

loc_802C12D8:
{
    r29 = 1;
}

loc_802C12DC:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    // inline leaf 0x800CF3F8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 39), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800CF3F8
}

loc_802C12E4:
{
    r20 = 0;
    r23 = 5;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13400));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13396));
    r26 = 0x805D0000u;
    goto loc_802C15D8;
}

loc_802C12FC:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_802C1304:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C15CC;
    }
}

loc_802C1308:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r17 + 22));
}

loc_802C1318:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802C15CC;
    }
}

loc_802C131C:
{
    r18 = 0;
    r24 = (r26 + 16824);
    r25 = r17;
}

loc_802C1328:
{
    r0 = (r23 + r18);
    r0 = (r0 * 68);
    r22 = (r31 + r0);
    r3 = r22;
    r0 = MemoryInline::FlatRead32(r24);
    r0 = (r0 * 68);
    r4 = (r31 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C134C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_802C1514;
    }
}

loc_802C1350:
{
    // inline leaf 0x8004045C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8004045C
}

loc_802C1358:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C13A4;
    }
}

loc_802C135C:
{
}

loc_802C1360:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_802C139C;
    }
}

loc_802C1364:
{
}

loc_802C1368:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_802C137C;
    }
}

loc_802C136C:
{
}

loc_802C1370:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_802C137C;
    }
}

loc_802C1374:
{
    r15 = 1;
    goto loc_802C13B0;
}

loc_802C137C:
{
}

loc_802C1380:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(1))) {
        goto loc_802C1394;
    }
}

loc_802C1384:
{
}

loc_802C1388:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802C1394;
    }
}

loc_802C138C:
{
    r15 = 1;
    goto loc_802C13B0;
}

loc_802C1394:
{
    r15 = 0;
    goto loc_802C13B0;
}

loc_802C139C:
{
    r15 = 0;
    goto loc_802C13B0;
}

loc_802C13A4:
{
}

loc_802C13A8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_802C13B0;
    }
}

loc_802C13AC:
{
    r15 = 1;
}

loc_802C13B0:
{
}

loc_802C13B4:
{
    if ((static_cast<uint32_t>(r15) != static_cast<uint32_t>(1))) {
        goto loc_802C14C4;
    }
}

loc_802C13B8:
{
    r3 = MemoryInline::FlatRead8((r17 + 1451));
    r0 = (r3 + 3);
    r3 = (r0 & 255);
    r4 = (r18 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 64);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 156);
    r4 = 3;
    r5 = (r18 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_9DC8 = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_9DC8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 156);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r17 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_802C1408:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802C1464;
    }
}

loc_802C140C:
{
    r3 = MemoryInline::FlatRead8((r1 + 72));
    r3 = (r3 + 64);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl20_0x802C2574:
{
}

loc_inl20_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl20_0x802C2584;
    }
}

loc_inl20_0x802C257C:
{
    r3 = r4;
    goto loc_inl20_cont_802C2574;
}

loc_inl20_0x802C2584:
{
}

loc_inl20_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl20_return;
    }
}

loc_inl20_0x802C258C:
{
    r3 = r5;
    goto loc_inl20_cont_802C2574;
}

loc_inl20_return:
{
}

loc_inl20_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 72), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 73));
    r3 = (r3 + 64);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl21_0x802C2574:
{
}

loc_inl21_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl21_0x802C2584;
    }
}

loc_inl21_0x802C257C:
{
    r3 = r4;
    goto loc_inl21_cont_802C2574;
}

loc_inl21_0x802C2584:
{
}

loc_inl21_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl21_return;
    }
}

loc_inl21_0x802C258C:
{
    r3 = r5;
    goto loc_inl21_cont_802C2574;
}

loc_inl21_return:
{
}

loc_inl21_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 74));
    r3 = (r3 + 64);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl22_0x802C2574:
{
}

loc_inl22_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl22_0x802C2584;
    }
}

loc_inl22_0x802C257C:
{
    r3 = r4;
    goto loc_inl22_cont_802C2574;
}

loc_inl22_0x802C2584:
{
}

loc_inl22_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x802C258C:
{
    r3 = r5;
    goto loc_inl22_cont_802C2574;
}

loc_inl22_return:
{
}

loc_inl22_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r0));
    goto loc_802C14FC;
}

loc_802C1464:
{
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802C1468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802C14FC;
    }
}

loc_802C146C:
{
    r3 = MemoryInline::FlatRead8((r1 + 72));
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl23_0x802C2574:
{
}

loc_inl23_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl23_0x802C2584;
    }
}

loc_inl23_0x802C257C:
{
    r3 = r4;
    goto loc_inl23_cont_802C2574;
}

loc_inl23_0x802C2584:
{
}

loc_inl23_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl23_return;
    }
}

loc_inl23_0x802C258C:
{
    r3 = r5;
    goto loc_inl23_cont_802C2574;
}

loc_inl23_return:
{
}

loc_inl23_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 72), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 73));
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl24_0x802C2574:
{
}

loc_inl24_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl24_0x802C2584;
    }
}

loc_inl24_0x802C257C:
{
    r3 = r4;
    goto loc_inl24_cont_802C2574;
}

loc_inl24_0x802C2584:
{
}

loc_inl24_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl24_return;
    }
}

loc_inl24_0x802C258C:
{
    r3 = r5;
    goto loc_inl24_cont_802C2574;
}

loc_inl24_return:
{
}

loc_inl24_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 74));
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 255;
    // inline leaf 0x802C2574 (8 guest instruction(s))
}

loc_inl25_0x802C2574:
{
}

loc_inl25_0x802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_inl25_0x802C2584;
    }
}

loc_inl25_0x802C257C:
{
    r3 = r4;
    goto loc_inl25_cont_802C2574;
}

loc_inl25_0x802C2584:
{
}

loc_inl25_0x802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_inl25_return;
    }
}

loc_inl25_0x802C258C:
{
    r3 = r5;
    goto loc_inl25_cont_802C2574;
}

loc_inl25_return:
{
}

loc_inl25_cont_802C2574:
{
    // end of inlined leaf 0x802C2574
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r0));
    goto loc_802C14FC;
}

loc_802C14C4:
{
    r3 = MemoryInline::FlatRead8((r17 + 1451));
    r4 = (r18 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 60);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 144);
    r4 = 0;
    r5 = (r18 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_BC41 = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_BC41;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802C14FC:
{
}

loc_802C1500:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_802C1548;
    }
}

loc_802C1504:
{
    r3 = r22;
    r4 = (r1 + 192);
    ctx->lr = 0x802C1510u;
    if constexpr (KnownRegArgsCpuCall<0x802C1E78u>(&func_802C1E78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C1E78_C17A = func_802C1E78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E78_C17A);
        r4 = static_cast<uint32_t>(regargs_result_802C1E78_C17A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C1E78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802C1548;
}

loc_802C1514:
{
    r3 = MemoryInline::FlatRead8((r17 + 1451));
}

loc_802C151C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C153C;
    }
}

loc_802C1520:
{
    r4 = (r18 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 56);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_802C1548;
}

loc_802C153C:
{
    r3 = r22;
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A864u>(ctx);
}

loc_802C1548:
{
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32((r25 + 1588));
    if constexpr (KnownRegArgsCpuCall<0x802C0098u>(&func_802C0098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802C0098_CE3B = func_802C0098_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_802C0098_CE3B);
        r4 = static_cast<uint32_t>(regargs_result_802C0098_CE3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r1 + 68);
    r4 = (r1 + 52);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = MemoryInline::FlatRead8((r1 + 68));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_8 & -16777216);
    r0 = MemoryInline::FlatRead8((r1 + 69));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r1 + 70));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r25 + 1588), r0);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = r22;
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r18 = (r18 + 1);
}

loc_802C15B0:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(4))) {
        goto loc_802C1328;
    }
}

loc_802C15B4:
{
    r3 = r27;
    r0 = (r23 + 3);
    r0 = (r0 * 68);
    r4 = (r31 + r0);
    r5 = (r17 + 60);
    ctx->lr = 0x802C15CCu;
    if constexpr (KnownRegArgsCpuCall<0x802BFFFCu>(&func_802BFFFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802BFFFC_DC34 = func_802BFFFC_ra38_1ea_18_0(ctx, r3, r4, r5, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFFFC_DC34);
        r4 = static_cast<uint32_t>(regargs_result_802BFFFC_DC34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BFFFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C15CC:
{
    r23 = (r23 + 4);
    r20 = (r20 + 1);
    r17 = (r17 + 2848);
}

loc_802C15D8:
{
}

loc_802C15DC:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r19))) {
        goto loc_802C12FC;
    }
}

loc_802C15E0:
{
    // inline leaf 0x802D2844 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -2080);
    // end of inlined leaf 0x802D2844
    r16 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802C15F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C177C;
    }
}

loc_802C15F4:
{
    r19 = 0;
    r3 = 0x805D0000u;
    r23 = (r3 + 16824);
    r24 = 0;
    r25 = r16;
}

loc_802C1608:
{
    r3 = (r24 + r31);
    r22 = (r3 + 1156);
    r3 = r22;
    r0 = MemoryInline::FlatRead32(r23);
    r0 = (r0 * 68);
    r4 = (r31 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C1628:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_802C16C8;
    }
}

loc_802C162C:
{
}

loc_802C1630:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802C1670;
    }
}

loc_802C1634:
{
    r3 = MemoryInline::FlatRead8((r16 + 811));
    r4 = (r19 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 44);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 132);
    r4 = 0;
    r5 = (r19 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_EE1C = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_EE1C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802C16B0;
}

loc_802C1670:
{
    r3 = MemoryInline::FlatRead8((r16 + 811));
    r0 = (r3 + 3);
    r3 = (r0 & 255);
    r4 = (r19 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 40);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 120);
    r4 = 3;
    r5 = (r19 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_F6C7 = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_F6C7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802C16B0:
{
}

loc_802C16B4:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_802C16FC;
    }
}

loc_802C16B8:
{
    r3 = r22;
    r4 = (r1 + 192);
    ctx->lr = 0x802C16C4u;
    if constexpr (KnownRegArgsCpuCall<0x802C1E78u>(&func_802C1E78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C1E78_FC00 = func_802C1E78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E78_FC00);
        r4 = static_cast<uint32_t>(regargs_result_802C1E78_FC00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C1E78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802C16FC;
}

loc_802C16C8:
{
    r3 = MemoryInline::FlatRead8((r16 + 811));
}

loc_802C16D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C16F0;
    }
}

loc_802C16D4:
{
    r4 = (r19 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 36);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_802C16FC;
}

loc_802C16F0:
{
    r3 = r22;
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A864u>(ctx);
}

loc_802C16FC:
{
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32((r25 + 1160));
    if constexpr (KnownRegArgsCpuCall<0x802C0098u>(&func_802C0098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802C0098_108C0 = func_802C0098_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_802C0098_108C0);
        r4 = static_cast<uint32_t>(regargs_result_802C0098_108C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 68);
    r4 = (r1 + 32);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = MemoryInline::FlatRead8((r1 + 68));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_11 & -16777216);
    r0 = MemoryInline::FlatRead8((r1 + 69));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r1 + 70));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_24 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r25 + 1160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = r22;
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r23 = (r23 + 4);
    r24 = (r24 + 68);
    r25 = (r25 + 4);
    r19 = (r19 + 1);
}

loc_802C1768:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(4))) {
        goto loc_802C1608;
    }
}

loc_802C176C:
{
    r3 = r27;
    r4 = (r31 + 1360);
    r5 = (r16 + 376);
    ctx->lr = 0x802C177Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BFFFCu>(&func_802BFFFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802BFFFC_116AE = func_802BFFFC_ra38_1ea_18_0(ctx, r3, r4, r5, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFFFC_116AE);
        r4 = static_cast<uint32_t>(regargs_result_802BFFFC_116AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BFFFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C177C:
{
    r26 = 0x805D0000u;
    r0 = MemoryInline::FlatRead32((r26 + 16840));
    r0 = (r0 * 68);
    r3 = (r31 + r0);
    r4 = (r1 + 192);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A82Cu>(ctx);
    r3 = (r31 + 2040);
    r4 = (r1 + 192);
    ctx->lr = 0x802C17A0u;
    if constexpr (KnownRegArgsCpuCall<0x802C1B3Cu>(&func_802C1B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802C1B3C_12032 = func_802C1B3C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802C1B3C_12032;
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
        InvokeDirectCpu<0x802C1B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = (r31 + 2244);
    r4 = (r1 + 192);
    ctx->lr = 0x802C17ACu;
    if constexpr (KnownRegArgsCpuCall<0x802C1B3Cu>(&func_802C1B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802C1B3C_12455 = func_802C1B3C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802C1B3C_12455;
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
        InvokeDirectCpu<0x802C1B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl39_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl39_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl39_0x800CFB10;
    }
}

loc_inl39_0x800CFB08:
{
    r3 = 0;
    goto loc_inl39_cont_800CFAF4;
}

loc_inl39_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl39_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl39_0x800CFB24;
    }
}

loc_inl39_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl39_cont_800CFAF4;
}

loc_inl39_0x800CFB24:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl39_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r16 = r3;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800CFB34_12BC9 = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_12BC9);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_12BC9 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r21 = (r3 & 65535);
    r20 = 0;
    r25 = 0;
    r15 = (r1 + 88);
    r18 = (r1 + 80);
    goto loc_802C1AFC;
}

loc_802C17D8:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_802C17E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C1AF0;
    }
}

loc_802C17E4:
{
    r0 = MemoryInline::FlatRead32((r16 + 456));
    r0 = (r0 & 1);
}

loc_802C17F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C1A50;
    }
}

loc_802C17F4:
{
    r0 = MemoryInline::FlatRead8((r16 + 2));
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4096));
}

loc_802C1804:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_802C1AF0;
    }
}

loc_802C1808:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = (r0 - r3);
    r17 = (r3 + 21);
    r0 = MemoryInline::FlatRead8((r16 + 3));
}

loc_802C181C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802C18A4;
    }
}

loc_802C1820:
{
    r3 = (r1 + 88);
    r4 = (r20 + 8);
    ctx->lr = 0x802C182Cu;
    if constexpr (KnownRegArgsCpuCall<0x802C023Cu>(&func_802C023C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_802C023C_13396 = func_802C023C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_802C023C_13396);
        r4 = static_cast<uint32_t>(regargs_result_802C023C_13396 >> 32);
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
        InvokeDirectCpu<0x802C023Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r15;
    r4 = -1;
    ctx->lr = 0x802C1838u;
    if constexpr (KnownRegArgsCpuCall<0x800652E8u>(&func_800652E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800652E8_13970 = func_800652E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800652E8_13970);
        r4 = static_cast<uint32_t>(regargs_result_800652E8_13970 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x800652E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r16;
    ctx->lr = 0x802C1840u;
    if constexpr (KnownRegArgsCpuCall<0x80192444u>(&func_80192444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80192444_145ED = func_80192444_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80192444_145ED);
        r4 = static_cast<uint32_t>(regargs_result_80192444_145ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80192444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C1844:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C1878;
    }
}

loc_802C1848:
{
    r19 = 0;
}

loc_802C184C:
{
    r3 = r15;
    r4 = r19;
    r5 = -1;
    ctx->lr = 0x802C185Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B1C4_149B7 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_149B7);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_149B7 >> 32);
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
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + 1);
}

loc_802C1864:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(3))) {
        goto loc_802C184C;
    }
}

loc_802C1868:
{
    r3 = r15;
    r4 = -1;
    ctx->lr = 0x802C1874u;
    if constexpr (KnownRegArgsCpuCall<0x8007B288u>(&func_8007B288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B288_14E1D = func_8007B288_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B288_14E1D);
        r4 = static_cast<uint32_t>(regargs_result_8007B288_14E1D >> 32);
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
        InvokeDirectCpu<0x8007B288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802C18A4;
}

loc_802C1878:
{
    r19 = 0;
}

loc_802C187C:
{
    r3 = r15;
    r4 = r19;
    r5 = (r17 + r19);
    ctx->lr = 0x802C188Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B1C4_15246 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_15246);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_15246 >> 32);
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
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + 1);
}

loc_802C1894:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(3))) {
        goto loc_802C187C;
    }
}

loc_802C1898:
{
    r3 = r15;
    r4 = 0;
    ctx->lr = 0x802C18A4u;
    if constexpr (KnownRegArgsCpuCall<0x8007B288u>(&func_8007B288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B288_156AB = func_8007B288_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B288_156AB);
        r4 = static_cast<uint32_t>(regargs_result_8007B288_156AB >> 32);
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
        InvokeDirectCpu<0x8007B288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C18A4:
{
    r19 = 0;
    r24 = (r26 + 16840);
    r23 = r16;
}

loc_802C18B0:
{
    r0 = (r17 + r19);
    r0 = (r0 * 68);
    r22 = (r31 + r0);
    r3 = r22;
    r0 = MemoryInline::FlatRead32(r24);
    r0 = (r0 * 68);
    r4 = (r31 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r16 + 1888));
}

loc_802C18D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802C18E4;
    }
}

loc_802C18DC:
{
    r3 = MemoryInline::FlatRead8((r16 + 559));
    goto loc_802C18E8;
}

loc_802C18E4:
{
    r3 = 0;
}

loc_802C18E8:
{
}

loc_802C18EC:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_802C198C;
    }
}

loc_802C18F0:
{
}

loc_802C18F4:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(1))) {
        goto loc_802C1900;
    }
}

loc_802C18F8:
{
}

loc_802C18FC:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802C1940;
    }
}

loc_802C1900:
{
    r0 = (r3 + 3);
    r3 = (r0 & 255);
    r4 = (r19 & 255);
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        func_8004C554_statefree_v0(r3, r4);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 108);
    r4 = 3;
    r5 = (r19 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_16749 = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_16749;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802C1974;
}

loc_802C1940:
{
    r4 = (r19 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802B02C0u) && KnownTranslatedCpuCall<0x802B02C0u>::kAvailable && !KnownTranslatedCpuCall<0x802B02C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802B02C0u>()) {
        const auto state_free_result_802B02C0_16B4D = func_802B02C0_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_802B02C0_16B4D);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B02C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        func_8004C554_statefree_v0(r3, r4);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 96);
    r4 = 0;
    r5 = (r19 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802B0328u>(&func_802B0328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B0328_1773F = func_802B0328_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802B0328_1773F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802B0328u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 192);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802C1974:
{
}

loc_802C1978:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_802C19BC;
    }
}

loc_802C197C:
{
    r3 = r22;
    r4 = (r1 + 192);
    ctx->lr = 0x802C1988u;
    if constexpr (KnownRegArgsCpuCall<0x802C1E78u>(&func_802C1E78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C1E78_17C79 = func_802C1E78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E78_17C79);
        r4 = static_cast<uint32_t>(regargs_result_802C1E78_17C79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C1E78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802C19BC;
}

loc_802C198C:
{
}

loc_802C1990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C19B0;
    }
}

loc_802C1994:
{
    r4 = (r19 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802B02C0u) && KnownTranslatedCpuCall<0x802B02C0u>::kAvailable && !KnownTranslatedCpuCall<0x802B02C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802B02C0u>()) {
        const auto state_free_result_802B02C0_183A7 = func_802B02C0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_802B02C0_183A7[0]);
        r5 = static_cast<uint32_t>(state_free_result_802B02C0_183A7[1]);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B02C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 72);
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        const auto state_free_result_8004C554_18A66 = func_8004C554_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004C554_18A66);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802C19BC;
}

loc_802C19B0:
{
    r3 = r22;
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A864u>(ctx);
}

loc_802C19BC:
{
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32((r23 + 1872));
    if constexpr (KnownRegArgsCpuCall<0x802C0098u>(&func_802C0098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802C0098_1916C = func_802C0098_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_802C0098_1916C);
        r4 = static_cast<uint32_t>(regargs_result_802C0098_1916C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C0098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 68);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        func_8004C554_statefree_v0(r3, r4);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r1 + 68));
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_15 & -16777216);
    r0 = MemoryInline::FlatRead8((r1 + 69));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_34 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r1 + 70));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_35 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r23 + 1872), r0);
    r3 = r16;
    r4 = (r19 & 255);
    r5 = (r1 + 72);
    ctx->lr = 0x802C1A10u;
    if constexpr (KnownRegArgsCpuCall<0x802C24A4u>(&func_802C24A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802C24A4_1A03B = func_802C24A4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802C24A4_1A03B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C24A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802C1A14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C1A24;
    }
}

loc_802C1A18:
{
    r3 = (r1 + 68);
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        func_8004C554_statefree_v0(r3, r4);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802C1A24:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r22;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r24 = (r24 + 4);
    r23 = (r23 + 4);
    r19 = (r19 + 1);
}

loc_802C1A48:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(3))) {
        goto loc_802C18B0;
    }
}

loc_802C1A4C:
{
    goto loc_802C1ADC;
}

loc_802C1A50:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AFCE8u) && KnownTranslatedCpuCall<0x802AFCE8u>::kAvailable && !KnownTranslatedCpuCall<0x802AFCE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AFCE8u>()) {
        const auto state_free_result_802AFCE8_1ABC1 = func_802AFCE8_statefree();
        r3 = static_cast<uint32_t>(state_free_result_802AFCE8_1ABC1);
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r16 + 481));
}

loc_802C1A60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802C1AF0;
    }
}

loc_802C1A64:
{
}

loc_802C1A68:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_802C1A74;
    }
}

loc_802C1A6C:
{
}

loc_802C1A70:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802C1ADC;
    }
}

loc_802C1A74:
{
    r3 = (r1 + 80);
    r4 = MemoryInline::FlatRead8((r16 + 2));
    r4 = (r4 + 8);
    ctx->lr = 0x802C1A84u;
    if constexpr (KnownRegArgsCpuCall<0x802C023Cu>(&func_802C023C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_802C023C_1B403 = func_802C023C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_802C023C_1B403);
        r4 = static_cast<uint32_t>(regargs_result_802C023C_1B403 >> 32);
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
        InvokeDirectCpu<0x802C023Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r18;
    r4 = -1;
    ctx->lr = 0x802C1A90u;
    if constexpr (KnownRegArgsCpuCall<0x800652E8u>(&func_800652E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800652E8_1B9DD = func_800652E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800652E8_1B9DD);
        r4 = static_cast<uint32_t>(regargs_result_800652E8_1B9DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x800652E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C1A94:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_802C1ABC;
    }
}

loc_802C1A98:
{
    r17 = 0;
}

loc_802C1A9C:
{
    r3 = r18;
    r4 = r17;
    r5 = (r17 + 33);
    ctx->lr = 0x802C1AACu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B1C4_1C751 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1C751);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1C751 >> 32);
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
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 1);
}

loc_802C1AB4:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(3))) {
        goto loc_802C1A9C;
    }
}

loc_802C1AB8:
{
    goto loc_802C1ADC;
}

loc_802C1ABC:
{
    r17 = 0;
}

loc_802C1AC0:
{
    r3 = r18;
    r4 = r17;
    r5 = (r17 + 30);
    ctx->lr = 0x802C1AD0u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007B1C4_1CC22 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1CC22);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1CC22 >> 32);
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
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 1);
}

loc_802C1AD8:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(3))) {
        goto loc_802C1AC0;
    }
}

loc_802C1ADC:
{
    r3 = r27;
    r4 = (r25 + r31);
    r4 = (r4 + 2448);
    r5 = (r16 + 392);
    ctx->lr = 0x802C1AF0u;
    if constexpr (KnownRegArgsCpuCall<0x802BFFFCu>(&func_802BFFFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802BFFFC_1D182 = func_802BFFFC_ra38_1ea_18_0(ctx, r3, r4, r5, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFFFC_1D182);
        r4 = static_cast<uint32_t>(regargs_result_802BFFFC_1D182 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BFFFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C1AF0:
{
    r25 = (r25 + 68);
    r20 = (r20 + 1);
    r16 = (r16 + 2840);
}

loc_802C1AFC:
{
}

loc_802C1B00:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r21))) {
        goto loc_802C17D8;
    }
}

loc_802C1B04:
{
    r3 = r27;
    ctx->lr = 0x802C1B0Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BF698u>(&func_802BF698)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802BF698_1DAC7 = func_802BF698_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BF698_1DAC7);
        r4 = static_cast<uint32_t>(regargs_result_802BF698_1DAC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x802BF698u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_802C1B0C:
{
    r0 = 312;
    addr_psqx_802C1B10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C1B10_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 304));
    r0 = 296;
    addr_psqx_802C1B1C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C1B1C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 288));
    r11 = (r1 + 288);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C1120(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C1120_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00007FFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C1120 func_802C1120 preserves=true fpr_mask=0x00000000
