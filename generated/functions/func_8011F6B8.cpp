#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E748(CpuContext* ctx);
extern "C" uint32_t func_8011E748_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8011E7C4(CpuContext* ctx);
extern "C" double func_8011E7C4_ra18_2_0_2(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8011E858(CpuContext* ctx);
extern "C" uint64_t func_8011E858_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8011E918(CpuContext* ctx);
extern "C" uint64_t func_8011E918_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8011EAF4(CpuContext* ctx);
extern "C" uint64_t func_8011EAF4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011F484(CpuContext* ctx);
extern "C" uint64_t func_8011F484_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011F534(CpuContext* ctx);
extern "C" uint64_t func_8011F534_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011F584(CpuContext* ctx);
extern "C" uint64_t func_8011F584_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011F5D4(CpuContext* ctx);
extern "C" uint64_t func_8011F5D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801201FC(CpuContext* ctx);
extern "C" uint64_t func_801201FC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80123150(CpuContext* ctx);
extern "C" uint64_t func_80123150_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801266F4(CpuContext* ctx);
extern "C" uint64_t func_801266F4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80126914(CpuContext* ctx);
extern "C" uint64_t func_80126914_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D934(CpuContext* ctx);
extern "C" uint64_t func_8012D934_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DBA0(CpuContext* ctx);
extern "C" uint64_t func_8012DBA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DDBC(CpuContext* ctx);
extern "C" uint64_t func_8012DDBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DEDC(CpuContext* ctx);
extern "C" uint64_t func_8012DEDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DF3C(CpuContext* ctx);
extern "C" uint64_t func_8012DF3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DFCC(CpuContext* ctx);
extern "C" uint64_t func_8012DFCC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012E4C8(CpuContext* ctx);
extern "C" uint64_t func_8012E4C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012E5AC(CpuContext* ctx);
extern "C" uint64_t func_8012E5AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F040(CpuContext* ctx);
extern "C" uint64_t func_8012F040_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8011F6B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
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
    uint32_t r3_rot_46 = 0;
    uint32_t r3_rot_47 = 0;
    uint32_t r3_rot_48 = 0;
    uint32_t r3_rot_49 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_50 = 0;
    uint32_t r3_rot_51 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8011F6B8u);
    goto loc_8011F6B8;

loc_8011F6B8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r20 = r3;
    r23 = 0;
    r22 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 2328));
}

loc_8011F6E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8011F6F4;
    }
}

loc_8011F6E4:
{
    r24 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2328), static_cast<uint8_t>(r0));
    goto loc_8011F6F8;
}

loc_8011F6F4:
{
    r24 = 0;
}

loc_8011F6F8:
{
    r3 = r20;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_8011F704:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011F710;
    }
}

loc_8011F708:
{
    r3 = 0;
    goto loc_801201E4;
}

loc_8011F710:
{
    r0 = MemoryInline::FlatRead8((r20 + 504));
}

loc_8011F718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011F724;
    }
}

loc_8011F71C:
{
    r3 = 0;
    goto loc_801201E4;
}

loc_8011F724:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r20 + 2094), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r20 + 2098), static_cast<uint8_t>(r0));
    r3 = r20;
    ctx->lr = 0x8011F740u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D090_2208 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_2208);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_2208 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011F744:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201DC;
    }
}

loc_8011F748:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 1);
}

loc_8011F754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011F7E0;
    }
}

loc_8011F758:
{
    r0 = MemoryInline::FlatRead8((r20 + 2100));
}

loc_8011F760:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8011F780;
    }
}

loc_8011F764:
{
    r3 = r20;
    r4 = 65536;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011F774:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011F780;
    }
}

loc_8011F778:
{
    r22 = 1;
    goto loc_8011F7E0;
}

loc_8011F780:
{
    r3 = r20;
    r4 = 16384;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011F790:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011F7D8;
    }
}

loc_8011F794:
{
    r0 = MemoryInline::FlatRead8((r20 + 2101));
}

loc_8011F79C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011F7AC;
    }
}

loc_8011F7A0:
{
}

loc_8011F7A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011F7B8;
    }
}

loc_8011F7A8:
{
    goto loc_8011F7E0;
}

loc_8011F7AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r20 + 2100), static_cast<uint8_t>(r0));
    goto loc_8011F7E0;
}

loc_8011F7B8:
{
    r3 = r20;
    r4 = 0;
    ctx->lr = 0x8011F7C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012E4C8u>(&func_8012E4C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E4C8_2DC6 = func_8012E4C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E4C8_2DC6);
        r4 = static_cast<uint32_t>(regargs_result_8012E4C8_2DC6 >> 32);
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
        InvokeDirectCpu<0x8012E4C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011F7C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011F7E0;
    }
}

loc_8011F7CC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r20 + 2100), static_cast<uint8_t>(r0));
    goto loc_8011F7E0;
}

loc_8011F7D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r20 + 2100), static_cast<uint8_t>(r0));
}

loc_8011F7E0:
{
    r25 = 0;
    r26 = 0;
    r21 = 0;
    r30 = 1;
}

loc_8011F7F0:
{
    r4 = (r21 & 255);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r28 = (r28_rot_2 & -2);
    r3 = (r20 + r28);
    r31 = MemoryInline::FlatRead16((r3 + 1994));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r0 = (r4 * 6);
    r29 = (r20 + r0);
    r3 = MemoryInline::FlatRead16((r29 + 2106));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 - r31);
    r25 = (r25 + r31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8011F81C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011F874;
    }
}

loc_8011F820:
{
    r3 = MemoryInline::FlatRead16((r20 + 2094));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r20 + 2094), static_cast<uint16_t>(r0));
    r3 = r20;
    r5 = 1;
    // inline leaf 0x8011E83C (7 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2104));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 2104), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8011E83C
    r3 = r20;
    r4 = (r21 & 255);
    ctx->lr = 0x8011F84Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011E858u>(&func_8011E858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8011E858_3812 = func_8011E858_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8011E858_3812);
        r4 = static_cast<uint32_t>(regargs_result_8011E858_3812 >> 32);
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
        InvokeDirectCpu<0x8011E858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r20;
    r4 = (r21 & 255);
    r5 = 0;
    ctx->lr = 0x8011F85Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011EAF4u>(&func_8011EAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011EAF4_3CC9 = func_8011EAF4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011EAF4_3CC9);
        r4 = static_cast<uint32_t>(regargs_result_8011EAF4_3CC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
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
        InvokeDirectCpu<0x8011EAF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
}

loc_8011F864:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_8011F878;
    }
}

loc_8011F868:
{
    MemoryInline::FlatWrite8((r20 + 2097), static_cast<uint8_t>(r21));
    r26 = r31;
    goto loc_8011F878;
}

loc_8011F874:
{
    MemoryInline::FlatWrite16((r29 + 2106), static_cast<uint16_t>(r3));
}

loc_8011F878:
{
    r3 = MemoryInline::FlatRead8((r20 + 2080));
    r0 = (r21 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r0 = (r3 & r0);
}

loc_8011F88C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011F8A0;
    }
}

loc_8011F890:
{
    r0 = MemoryInline::FlatRead8((r20 + 2081));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8011F89C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FA0C;
    }
}

loc_8011F8A0:
{
    r3 = r20;
    r4 = (r21 & 255);
    ctx->lr = 0x8011F8ACu;
    if constexpr (KnownRegArgsCpuCall<0x80126914u>(&func_80126914)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126914_489D = func_80126914_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126914_489D);
        r4 = static_cast<uint32_t>(regargs_result_80126914_489D >> 32);
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
        InvokeDirectCpu<0x80126914u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r4 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead8((r29 + 2105));
}

loc_8011F8BC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_8011FA0C;
    }
}

loc_8011F8C0:
{
    r27 = -1;
    r4 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8011F8CC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8011F8F4;
    }
}

loc_8011F8D0:
{
    r3 = r20;
    ctx->lr = 0x8011F8D8u;
    if constexpr (KnownRegArgsCpuCall<0x801266F4u>(&func_801266F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801266F4_4DDA = func_801266F4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801266F4_4DDA);
        r4 = static_cast<uint32_t>(regargs_result_801266F4_4DDA >> 32);
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
        InvokeDirectCpu<0x801266F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8011F8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8011F8F4;
    }
}

loc_8011F8E4:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_6 & -16);
    r0 = (r28 + r20);
    r3 = (r3 + r0);
    r27 = MemoryInline::FlatRead16((r3 + 2010));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
}

loc_8011F8F4:
{
    r19 = -1;
    r4 = MemoryInline::FlatRead8((r31 + 3));
}

loc_8011F900:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8011F928;
    }
}

loc_8011F904:
{
    r3 = r20;
    ctx->lr = 0x8011F90Cu;
    if constexpr (KnownRegArgsCpuCall<0x801266F4u>(&func_801266F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801266F4_540F = func_801266F4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801266F4_540F);
        r4 = static_cast<uint32_t>(regargs_result_801266F4_540F >> 32);
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
        InvokeDirectCpu<0x801266F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8011F914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8011F928;
    }
}

loc_8011F918:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_8 & -16);
    r0 = (r28 + r20);
    r3 = (r3 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 2010));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
}

loc_8011F928:
{
}

loc_8011F92C:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8011F93C;
    }
}

loc_8011F930:
{
}

loc_8011F934:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(-1))) {
        goto loc_8011F93C;
    }
}

loc_8011F938:
{
    goto loc_8011F97C;
}

loc_8011F93C:
{
}

loc_8011F940:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(0))) {
        goto loc_8011F954;
    }
}

loc_8011F944:
{
}

loc_8011F948:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(-1))) {
        goto loc_8011F954;
    }
}

loc_8011F94C:
{
    r27 = r19;
    goto loc_8011F97C;
}

loc_8011F954:
{
}

loc_8011F958:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8011F978;
    }
}

loc_8011F95C:
{
}

loc_8011F960:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(0))) {
        goto loc_8011F978;
    }
}

loc_8011F964:
{
}

loc_8011F968:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r19))) {
        goto loc_8011F970;
    }
}

loc_8011F96C:
{
    goto loc_8011F97C;
}

loc_8011F970:
{
    r27 = r19;
    goto loc_8011F97C;
}

loc_8011F978:
{
    r27 = 0;
}

loc_8011F97C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_8011F984:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8011FA0C;
    }
}

loc_8011F988:
{
    r3 = MemoryInline::FlatRead16((r29 + 2108));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 - r27);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8011F998:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FA08;
    }
}

loc_8011F99C:
{
    r3 = r20;
    ctx->lr = 0x8011F9A4u;
    if constexpr (KnownRegArgsCpuCall<0x8012D934u>(&func_8012D934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D934_6018 = func_8012D934_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D934_6018);
        r4 = static_cast<uint32_t>(regargs_result_8012D934_6018 >> 32);
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
        InvokeDirectCpu<0x8012D934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011F9A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FA00;
    }
}

loc_8011F9AC:
{
    r3 = r20;
    ctx->lr = 0x8011F9B4u;
    if constexpr (KnownRegArgsCpuCall<0x8012DDBCu>(&func_8012DDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DDBC_6413 = func_8012DDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DDBC_6413);
        r4 = static_cast<uint32_t>(regargs_result_8012DDBC_6413 >> 32);
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
        InvokeDirectCpu<0x8012DDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011F9B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FA00;
    }
}

loc_8011F9BC:
{
    r3 = r20;
    ctx->lr = 0x8011F9C4u;
    if constexpr (KnownRegArgsCpuCall<0x8011F484u>(&func_8011F484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011F484_6844 = func_8011F484_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F484_6844);
        r4 = static_cast<uint32_t>(regargs_result_8011F484_6844 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x8011F484u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_8011F9C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FA00;
    }
}

loc_8011F9CC:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x80132240
}

loc_8011F9D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FA00;
    }
}

loc_8011F9DC:
{
    r0 = MemoryInline::FlatRead8((r20 + 482));
}

loc_8011F9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011F9F0;
    }
}

loc_8011F9E8:
{
}

loc_8011F9EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8011FA00;
    }
}

loc_8011F9F0:
{
    r0 = MemoryInline::FlatRead8((r20 + 2098));
}

loc_8011F9F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8011FA00;
    }
}

loc_8011F9FC:
{
    MemoryInline::FlatWrite8((r20 + 2098), static_cast<uint8_t>(r21));
}

loc_8011FA00:
{
    MemoryInline::FlatWrite16((r29 + 2108), static_cast<uint16_t>(r30));
    goto loc_8011FA0C;
}

loc_8011FA08:
{
    MemoryInline::FlatWrite16((r29 + 2108), static_cast<uint16_t>(r3));
}

loc_8011FA0C:
{
    r21 = (r21 + 1);
}

loc_8011FA14:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(8))) {
        goto loc_8011F7F0;
    }
}

loc_8011FA18:
{
    r3 = r20;
    ctx->lr = 0x8011FA20u;
    if constexpr (KnownRegArgsCpuCall<0x801201FCu>(&func_801201FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801201FC_7538 = func_801201FC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801201FC_7538);
        r4 = static_cast<uint32_t>(regargs_result_801201FC_7538 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801201FCu>(ctx);
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
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r20 + 2074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FA2C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FB24;
    }
}

loc_8011FA30:
{
    r3 = r20;
    ctx->lr = 0x8011FA38u;
    if constexpr (KnownRegArgsCpuCall<0x8012F040u>(&func_8012F040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F040_7B69 = func_8012F040_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F040_7B69);
        r4 = static_cast<uint32_t>(regargs_result_8012F040_7B69 >> 32);
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
        InvokeDirectCpu<0x8012F040u>(ctx);
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

loc_8011FA3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FB24;
    }
}

loc_8011FA40:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x80132240
}

loc_8011FA4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FB24;
    }
}

loc_8011FA50:
{
    r0 = (r31 & 255);
}

loc_8011FA58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8011FA68;
    }
}

loc_8011FA5C:
{
    r0 = 6;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201DC;
}

loc_8011FA68:
{
    r0 = MemoryInline::FlatRead8((r20 + 2099));
}

loc_8011FA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FAC0;
    }
}

loc_8011FA74:
{
    r0 = MemoryInline::FlatRead16((r20 + 2090));
}

loc_8011FA7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8011FAC0;
    }
}

loc_8011FA80:
{
    r3 = r20;
    r4 = 128;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_14 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FA90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FAC0;
    }
}

loc_8011FA94:
{
    r0 = MemoryInline::FlatRead8((r20 + 482));
}

loc_8011FA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FAA8;
    }
}

loc_8011FAA0:
{
}

loc_8011FAA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8011FAC0;
    }
}

loc_8011FAA8:
{
    r3 = r20;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8011E7C4u>(&func_8011E7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011E7C4_87A7 = func_8011E7C4_ra18_2_0_2(ctx, r3, r4, f1.d);
        f1.d = regargs_result_8011E7C4_87A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011E7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 15;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201DC;
}

loc_8011FAC0:
{
    r0 = MemoryInline::FlatRead8((r20 + 2098));
}

loc_8011FAC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8011FB04;
    }
}

loc_8011FACC:
{
    r3 = r20;
    r4 = 65536;
    r4 = (r4 + -32768);
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_16 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FAE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FB04;
    }
}

loc_8011FAE4:
{
    r3 = r20;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8011E7C4u>(&func_8011E7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011E7C4_8E28 = func_8011E7C4_ra18_2_0_2(ctx, r3, r4, f1.d);
        f1.d = regargs_result_8011E7C4_8E28;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011E7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 20;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 2048));
    MemoryInline::FlatWrite8((r20 + 2049), static_cast<uint8_t>(r0));
    goto loc_801201DC;
}

loc_8011FB04:
{
}

loc_8011FB08:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_8011FB24;
    }
}

loc_8011FB0C:
{
    r3 = r20;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8011E7C4u>(&func_8011E7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011E7C4_92CA = func_8011E7C4_ra18_2_0_2(ctx, r3, r4, f1.d);
        f1.d = regargs_result_8011E7C4_92CA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011E7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 21;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201DC;
}

loc_8011FB24:
{
    r0 = MemoryInline::FlatRead16((r20 + 2344));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FB2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FB64;
    }
}

loc_8011FB30:
{
    r3 = r20;
    r4 = (0 - r0);
    if constexpr (KnownRegArgsCpuCall<0x8011E748u>(&func_8011E748)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8011E748_979F = func_8011E748_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8011E748_979F;
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
        InvokeDirectCpu<0x8011E748u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r20 + 456));
    r0 = (r0 & 1);
}

loc_8011FB48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FB64;
    }
}

loc_8011FB4C:
{
    r0 = MemoryInline::FlatRead32((r20 + 1952));
}

loc_8011FB54:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FB64;
    }
}

loc_8011FB58:
{
    r3 = r20;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8011E7C4u>(&func_8011E7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011E7C4_9CBF = func_8011E7C4_ra18_2_0_2(ctx, r3, r4, f1.d);
        f1.d = regargs_result_8011E7C4_9CBF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011E7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8011FB64:
{
}

loc_8011FB68:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8011FB78;
    }
}

loc_8011FB6C:
{
    r3 = r20;
    r4 = (0 - r25);
    if constexpr (KnownRegArgsCpuCall<0x8011E748u>(&func_8011E748)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8011E748_A0B9 = func_8011E748_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8011E748_A0B9;
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
        InvokeDirectCpu<0x8011E748u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8011FB78:
{
}

loc_8011FB7C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8011FB8C;
    }
}

loc_8011FB80:
{
    r0 = MemoryInline::FlatRead16((r20 + 2344));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FBFC;
    }
}

loc_8011FB8C:
{
    r0 = MemoryInline::FlatRead32((r20 + 1952));
}

loc_8011FB94:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FBFC;
    }
}

loc_8011FB98:
{
    r0 = MemoryInline::FlatRead16((r20 + 2074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FBA0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FBB4;
    }
}

loc_8011FBA4:
{
    r3 = r20;
    ctx->lr = 0x8011FBACu;
    if constexpr (KnownRegArgsCpuCall<0x8012F040u>(&func_8012F040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F040_A7AA = func_8012F040_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F040_A7AA);
        r4 = static_cast<uint32_t>(regargs_result_8012F040_A7AA >> 32);
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
        InvokeDirectCpu<0x8012F040u>(ctx);
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

loc_8011FBB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FBC4;
    }
}

loc_8011FBB4:
{
    r3 = r20;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8011E7C4u>(&func_8011E7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011E7C4_AC52 = func_8011E7C4_ra18_2_0_2(ctx, r3, r4, f1.d);
        f1.d = regargs_result_8011E7C4_AC52;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011E7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8011FBFC;
}

loc_8011FBC4:
{
    r0 = MemoryInline::FlatRead16((r20 + 2344));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FBCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FBF0;
    }
}

loc_8011FBD0:
{
    r3 = r20;
    r4 = 512;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_19 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FBE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FBF0;
    }
}

loc_8011FBE4:
{
    r0 = 17;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201DC;
}

loc_8011FBF0:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201DC;
}

loc_8011FBFC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r20 + 2344), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r20 + 2074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8011FC0C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011FC20;
    }
}

loc_8011FC10:
{
    r3 = r20;
    ctx->lr = 0x8011FC18u;
    if constexpr (KnownRegArgsCpuCall<0x8012DEDCu>(&func_8012DEDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DEDC_B4DF = func_8012DEDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DEDC_B4DF);
        r4 = static_cast<uint32_t>(regargs_result_8012DEDC_B4DF >> 32);
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
        InvokeDirectCpu<0x8012DEDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FC1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FC2C;
    }
}

loc_8011FC20:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FC2C:
{
    r3 = MemoryInline::FlatRead8((r20 + 2099));
}

loc_8011FC34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FC4C;
    }
}

loc_8011FC38:
{
}

loc_8011FC3C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8011FC4C;
    }
}

loc_8011FC40:
{
    r0 = (r31 & 255);
}

loc_8011FC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FC4C:
{
}

loc_8011FC50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FC54:
{
    r3 = r20;
    ctx->lr = 0x8011FC5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D934u>(&func_8012D934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D934_BBC1 = func_8012D934_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D934_BBC1);
        r4 = static_cast<uint32_t>(regargs_result_8012D934_BBC1 >> 32);
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
        InvokeDirectCpu<0x8012D934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FC60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FC64:
{
    r0 = MemoryInline::FlatRead16((r20 + 2090));
}

loc_8011FC6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8011FC94;
    }
}

loc_8011FC70:
{
}

loc_8011FC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8011FCB4;
    }
}

loc_8011FC78:
{
}

loc_8011FC7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(34))) {
        goto loc_8011FCE4;
    }
}

loc_8011FC80:
{
}

loc_8011FC84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(35))) {
        goto loc_8011FD14;
    }
}

loc_8011FC88:
{
}

loc_8011FC8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_8011FD44;
    }
}

loc_8011FC90:
{
    goto loc_8011FD74;
}

loc_8011FC94:
{
    r3 = r20;
    r4 = 32;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_25 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FCA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FD74;
    }
}

loc_8011FCA8:
{
    r0 = 12;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FCB4:
{
    r3 = r20;
    ctx->lr = 0x8011FCBCu;
    if constexpr (KnownRegArgsCpuCall<0x8012DBA0u>(&func_8012DBA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DBA0_C54C = func_8012DBA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DBA0_C54C);
        r4 = static_cast<uint32_t>(regargs_result_8012DBA0_C54C >> 32);
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
        InvokeDirectCpu<0x8012DBA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FCC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FCC4:
{
    r3 = r20;
    r4 = 64;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_24 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FCD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FD74;
    }
}

loc_8011FCD8:
{
    r0 = 13;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FCE4:
{
    r3 = r20;
    ctx->lr = 0x8011FCECu;
    if constexpr (KnownRegArgsCpuCall<0x8012DEDCu>(&func_8012DEDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DEDC_CBCF = func_8012DEDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DEDC_CBCF);
        r4 = static_cast<uint32_t>(regargs_result_8012DEDC_CBCF >> 32);
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
        InvokeDirectCpu<0x8012DEDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FCF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FCF4:
{
    r3 = r20;
    r4 = 262144;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_23 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FD04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FD74;
    }
}

loc_8011FD08:
{
    r0 = 23;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FD14:
{
    r3 = r20;
    ctx->lr = 0x8011FD1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012DF3Cu>(&func_8012DF3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DF3C_D256 = func_8012DF3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DF3C_D256);
        r4 = static_cast<uint32_t>(regargs_result_8012DF3C_D256 >> 32);
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
        InvokeDirectCpu<0x8012DF3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FD20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FD24:
{
    r3 = r20;
    r4 = 524288;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_22 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FD34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FD74;
    }
}

loc_8011FD38:
{
    r0 = 24;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FD44:
{
    r3 = r20;
    ctx->lr = 0x8011FD4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012E5ACu>(&func_8012E5AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E5AC_D8DD = func_8012E5AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E5AC_D8DD);
        r4 = static_cast<uint32_t>(regargs_result_8012E5AC_D8DD >> 32);
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
        InvokeDirectCpu<0x8012E5ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FD50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FD74;
    }
}

loc_8011FD54:
{
    r3 = r20;
    r4 = 1024;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_21 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FD64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FD74;
    }
}

loc_8011FD68:
{
    r0 = 18;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FD74:
{
    r3 = r20;
    ctx->lr = 0x8011FD7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012DF3Cu>(&func_8012DF3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DF3C_DF62 = func_8012DF3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DF3C_DF62);
        r4 = static_cast<uint32_t>(regargs_result_8012DF3C_DF62 >> 32);
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
        InvokeDirectCpu<0x8012DF3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FD80:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8011FD94;
    }
}

loc_8011FD84:
{
    r3 = r20;
    ctx->lr = 0x8011FD8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012E5ACu>(&func_8012E5AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E5AC_E35F = func_8012E5AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E5AC_E35F);
        r4 = static_cast<uint32_t>(regargs_result_8012E5AC_E35F >> 32);
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
        InvokeDirectCpu<0x8012E5ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FD90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FDA0;
    }
}

loc_8011FD94:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FDA0:
{
    f3.d = MemoryInline::FlatReadFloat32((r20 + 1968));
    r0 = MemoryInline::FlatRead32((r20 + 1952));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword16 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead32((r20 + 1956));
    r0 = (r0 ^ -2147483648);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword18 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8011FDE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011FE0C;
    }
}

loc_8011FDEC:
{
    r3 = r20;
    r4 = 4194304;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_27 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FDFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FE0C;
    }
}

loc_8011FE00:
{
    r0 = 26;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FE0C:
{
    r4 = MemoryInline::FlatRead8((r20 + 2098));
}

loc_8011FE14:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8011FE3C;
    }
}

loc_8011FE18:
{
    r3 = r20;
    r5 = 1;
    // inline leaf 0x8011E8FC (7 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2105));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 2105), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8011E8FC
    r3 = r20;
    r4 = MemoryInline::FlatRead8((r20 + 2098));
    ctx->lr = 0x8011FE30u;
    if constexpr (KnownRegArgsCpuCall<0x8011E918u>(&func_8011E918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8011E918_F1ED = func_8011E918_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8011E918_F1ED);
        r4 = static_cast<uint32_t>(regargs_result_8011E918_F1ED >> 32);
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
        InvokeDirectCpu<0x8011E918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 14;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FE3C:
{
    r0 = MemoryInline::FlatRead8((r20 + 2099));
}

loc_8011FE44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FE68;
    }
}

loc_8011FE48:
{
    r3 = r20;
    r4 = 1;
    ctx->lr = 0x8011FE54u;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F368_F73B = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_F73B);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_F73B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8011FE58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FE68;
    }
}

loc_8011FE5C:
{
    r0 = 9;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FE68:
{
    r3 = r20;
    r4 = 29;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_29 & 1);
    // end of inlined leaf 0x80132330
}

loc_8011FE78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FE7C:
{
    r3 = r20;
    // inline leaf 0x8012D908 (11 guest instruction(s))
}

loc_inl18_0x8012D908:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl18_0x8012D910:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_inl18_0x8012D92C;
    }
}

loc_inl18_0x8012D914:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -195);
}

loc_inl18_0x8012D920:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_inl18_0x8012D92C;
    }
}

loc_inl18_0x8012D924:
{
    r3 = 1;
    goto loc_inl18_cont_8012D908;
}

loc_inl18_0x8012D92C:
{
    r3 = 0;
}

loc_inl18_cont_8012D908:
{
    // end of inlined leaf 0x8012D908
}

loc_8011FE88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FE8C:
{
    r0 = (r31 & 255);
}

loc_8011FE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FEE0;
    }
}

loc_8011FE98:
{
}

loc_8011FE9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8011FEE0;
    }
}

loc_8011FEA0:
{
}

loc_8011FEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011FEBC;
    }
}

loc_8011FEA8:
{
}

loc_8011FEAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8011FEC8;
    }
}

loc_8011FEB0:
{
}

loc_8011FEB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8011FED4;
    }
}

loc_8011FEB8:
{
    goto loc_801201B8;
}

loc_8011FEBC:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FEC8:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FED4:
{
    r0 = 7;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FEE0:
{
    r3 = r20;
    ctx->lr = 0x8011FEE8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D934u>(&func_8012D934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D934_104F0 = func_8012D934_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D934_104F0);
        r4 = static_cast<uint32_t>(regargs_result_8012D934_104F0 >> 32);
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
        InvokeDirectCpu<0x8012D934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FEEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FEF0:
{
    r3 = r20;
    ctx->lr = 0x8011FEF8u;
    if constexpr (KnownRegArgsCpuCall<0x8012DBA0u>(&func_8012DBA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DBA0_108EE = func_8012DBA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DBA0_108EE);
        r4 = static_cast<uint32_t>(regargs_result_8012DBA0_108EE >> 32);
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
        InvokeDirectCpu<0x8012DBA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FEFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FF00:
{
    r3 = r20;
    ctx->lr = 0x8011FF08u;
    if constexpr (KnownRegArgsCpuCall<0x8012DDBCu>(&func_8012DDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DDBC_10CEC = func_8012DDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DDBC_10CEC);
        r4 = static_cast<uint32_t>(regargs_result_8012DDBC_10CEC >> 32);
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
        InvokeDirectCpu<0x8012DDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FF0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FF10:
{
    r3 = r20;
    ctx->lr = 0x8011FF18u;
    if constexpr (KnownRegArgsCpuCall<0x8012DFCCu>(&func_8012DFCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012DFCC_110EA = func_8012DFCC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DFCC_110EA);
        r4 = static_cast<uint32_t>(regargs_result_8012DFCC_110EA >> 32);
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
        InvokeDirectCpu<0x8012DFCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8011FF1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_8011FF20:
{
    r0 = MemoryInline::FlatRead8((r20 + 2099));
}

loc_8011FF28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FF84;
    }
}

loc_8011FF2C:
{
    r3 = MemoryInline::FlatRead16((r20 + 2090));
    r0 = (r3 + -4);
}

loc_8011FF38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8011FF48;
    }
}

loc_8011FF3C:
{
    r0 = (r3 + -35);
}

loc_8011FF44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8011FF84;
    }
}

loc_8011FF48:
{
    r3 = r20;
    r4 = 16;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_30 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FF58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FF84;
    }
}

loc_8011FF5C:
{
    r3 = r20;
    ctx->lr = 0x8011FF64u;
    if constexpr (KnownRegArgsCpuCall<0x8011F584u>(&func_8011F584)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011F584_1194C = func_8011F584_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F584_1194C);
        r4 = static_cast<uint32_t>(regargs_result_8011F584_1194C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x8011F584u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_8011FF68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FF78;
    }
}

loc_8011FF6C:
{
    r0 = 11;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FF78:
{
}

loc_8011FF7C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8011FF84;
    }
}

loc_8011FF80:
{
    r23 = 1;
}

loc_8011FF84:
{
}

loc_8011FF88:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8011FFAC;
    }
}

loc_8011FF8C:
{
    r3 = r20;
    r4 = 4;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_32 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8011FF9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FFAC;
    }
}

loc_8011FFA0:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FFAC:
{
    r0 = (r31 & 255);
}

loc_8011FFB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_8011FFF0;
    }
}

loc_8011FFB8:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_34 & 1);
    // end of inlined leaf 0x80132240
}

loc_8011FFC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011FFF0;
    }
}

loc_8011FFC8:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_8011FFD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8011FFE4;
    }
}

loc_8011FFD4:
{
    r3 = r20;
    // inline leaf 0x8012D8B4 (10 guest instruction(s))
}

loc_inl22_0x8012D8B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl22_0x8012D8BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_inl22_0x8012D8D4;
    }
}

loc_inl22_0x8012D8C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_inl22_0x8012D8C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_inl22_0x8012D8D4;
    }
}

loc_inl22_0x8012D8CC:
{
    r3 = 1;
    goto loc_inl22_cont_8012D8B4;
}

loc_inl22_0x8012D8D4:
{
    r3 = 0;
}

loc_inl22_cont_8012D8B4:
{
    // end of inlined leaf 0x8012D8B4
}

loc_8011FFE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011FFF0;
    }
}

loc_8011FFE4:
{
    r0 = 8;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8011FFF0:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_8011FFF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012000C;
    }
}

loc_8011FFFC:
{
    r3 = r20;
    // inline leaf 0x8012D8B4 (10 guest instruction(s))
}

loc_inl23_0x8012D8B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl23_0x8012D8BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_inl23_0x8012D8D4;
    }
}

loc_inl23_0x8012D8C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_inl23_0x8012D8C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_inl23_0x8012D8D4;
    }
}

loc_inl23_0x8012D8CC:
{
    r3 = 1;
    goto loc_inl23_cont_8012D8B4;
}

loc_inl23_0x8012D8D4:
{
    r3 = 0;
}

loc_inl23_cont_8012D8B4:
{
    // end of inlined leaf 0x8012D8B4
}

loc_80120008:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120038;
    }
}

loc_8012000C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2094));
}

loc_80120014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120038;
    }
}

loc_80120018:
{
    r3 = r20;
    r4 = 2;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_36 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120028:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120038;
    }
}

loc_8012002C:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120038:
{
    r3 = MemoryInline::FlatRead8((r20 + 485));
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_80120048:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80120074;
    }
}

loc_8012004C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2076));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80120054:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80120074;
    }
}

loc_80120058:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 2);
}

loc_80120064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120074;
    }
}

loc_80120068:
{
    r0 = 22;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120074:
{
}

loc_80120078:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(10))) {
        goto loc_801200AC;
    }
}

loc_8012007C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 2);
}

loc_80120088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801200AC;
    }
}

loc_8012008C:
{
    r3 = r20;
    r4 = 1048576;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_38 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8012009C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801200AC;
    }
}

loc_801200A0:
{
    r0 = 25;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_801200AC:
{
}

loc_801200B0:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_801200B4:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_801200BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_8012010C;
    }
}

loc_801200C0:
{
    r0 = MemoryInline::FlatRead8((r20 + 482));
}

loc_801200C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012010C;
    }
}

loc_801200CC:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_40 & 1);
    // end of inlined leaf 0x80132240
}

loc_801200D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012010C;
    }
}

loc_801200DC:
{
    r3 = r20;
    r4 = 256;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_41 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_801200EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012010C;
    }
}

loc_801200F0:
{
    r3 = r20;
    ctx->lr = 0x801200F8u;
    if constexpr (KnownRegArgsCpuCall<0x8011F534u>(&func_8011F534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011F534_13F99 = func_8011F534_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F534_13F99);
        r4 = static_cast<uint32_t>(regargs_result_8011F534_13F99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x8011F534u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_801200FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012010C;
    }
}

loc_80120100:
{
    r0 = 16;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8012010C:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_80120114:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_80120158;
    }
}

loc_80120118:
{
    r3 = r20;
    ctx->lr = 0x80120120u;
    if constexpr (KnownRegArgsCpuCall<0x8011F5D4u>(&func_8011F5D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011F5D4_1484C = func_8011F5D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F5D4_1484C);
        r4 = static_cast<uint32_t>(regargs_result_8011F5D4_1484C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x8011F5D4u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80120124:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120158;
    }
}

loc_80120128:
{
    r3 = r20;
    r4 = 16384;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_43 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120158;
    }
}

loc_8012013C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 1);
}

loc_80120148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120158;
    }
}

loc_8012014C:
{
    r0 = 19;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120158:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_80120160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80120178;
    }
}

loc_80120164:
{
    r3 = r20;
    r4 = 0;
    ctx->lr = 0x80120170u;
    if constexpr (KnownRegArgsCpuCall<0x8012E4C8u>(&func_8012E4C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E4C8_153AD = func_8012E4C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E4C8_153AD);
        r4 = static_cast<uint32_t>(regargs_result_8012E4C8_153AD >> 32);
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
        InvokeDirectCpu<0x8012E4C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80120174:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_80120178:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_45 & 1);
    // end of inlined leaf 0x80132240
}

loc_80120184:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012019C;
    }
}

loc_80120188:
{
    r3 = r20;
    r4 = 2097152;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_46 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120198:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_8012019C:
{
    r3 = r20;
    r4 = 1;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_48 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_801201AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_801201B0:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
}

loc_801201B8:
{
}

loc_801201BC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_801201DC;
    }
}

loc_801201C0:
{
    r3 = r20;
    r4 = r25;
    // inline leaf 0x80120510 (2 guest instruction(s))
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // end of inlined leaf 0x80120510
    r0 = r3;
    r3 = r20;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x801201DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x801308BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
}

loc_801201DC:
{
    r3 = r20;
    ctx->lr = 0x801201E4u;
    if constexpr (KnownRegArgsCpuCall<0x80123150u>(&func_80123150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80123150_162FB = func_80123150_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80123150_162FB);
        r4 = static_cast<uint32_t>(regargs_result_80123150_162FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
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
        InvokeDirectCpu<0x80123150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
    }
}

loc_801201E4:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011F6B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011F6B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0007FFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011F6B8 func_8011F6B8 preserves=true fpr_mask=0x00000000
