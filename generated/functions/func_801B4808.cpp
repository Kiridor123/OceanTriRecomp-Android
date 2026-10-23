#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012CF18(CpuContext* ctx);
extern "C" uint32_t func_8012CF18_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80130790(CpuContext* ctx);
extern "C" void func_80130790_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801B43AC(CpuContext* ctx);
extern "C" uint64_t func_801B43AC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801B43FC(CpuContext* ctx);
extern "C" uint64_t func_801B43FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801B44BC(CpuContext* ctx);
extern "C" uint64_t func_801B44BC_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_801B4614(CpuContext* ctx);
extern "C" uint64_t func_801B4614_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801B46F8(CpuContext* ctx);
extern "C" uint64_t func_801B46F8_ra38_12_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_801B4808_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_10 = 0;
    uint32_t r23_addr_11 = 0;
    uint32_t r23_addr_12 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_addr_6 = 0;
    uint32_t r23_addr_7 = 0;
    uint32_t r23_addr_8 = 0;
    uint32_t r23_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_801B4808;

loc_801B4808:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r26 = r3;
    r30 = 0;
    r29 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead8((r3 + 1083));
}

loc_801B4838:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_801B4858;
    }
}

loc_801B483C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801B4844:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(450))) {
        goto loc_801B4CA0;
    }
}

loc_801B4848:
{
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl1_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl1_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801307B0;
    }
}

loc_inl1_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl1_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80130790;
}

loc_inl1_return:
{
}

loc_inl1_cont_80130790:
{
    // end of inlined leaf 0x80130790
    goto loc_801B4CA0;
}

loc_801B4858:
{
    r0 = (r4 + 254);
    r0 = (r0 & 255);
}

loc_801B4864:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801B4BC4;
    }
}

loc_801B4868:
{
    r4 = MemoryInline::FlatRead8((r3 + 481));
    r5 = (r1 + 8);
    ctx->lr = 0x801B4874u;
    if constexpr (KnownRegArgsCpuCall<0x801B43FCu>(&func_801B43FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_801B43FC_1AA7 = func_801B43FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801B43FC_1AA7);
        r4 = static_cast<uint32_t>(regargs_result_801B43FC_1AA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B43FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r27 = r3;
    r0 = (r3 & 255);
}

loc_801B4880:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_801B4888;
    }
}

loc_801B4884:
{
    r27 = 10;
}

loc_801B4888:
{
    r3 = (r1 + 12);
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r22 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = r3;
    r31 = 0;
    r24 = 1;
    r23 = (r1 + 12);
    r22 = (r22 & 65535);
    goto loc_801B497C;
}

loc_801B48C4:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_801B48CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4974;
    }
}

loc_801B48D0:
{
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 & 1);
}

loc_801B48DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4974;
    }
}

loc_801B48E0:
{
    r3 = MemoryInline::FlatRead8((r26 + 481));
    r0 = MemoryInline::FlatRead8((r28 + 481));
}

loc_801B48EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801B4974;
    }
}

loc_801B48F0:
{
    r30 = 1;
    r0 = MemoryInline::FlatRead8((r26 + 1083));
}

loc_801B48FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_801B490C;
    }
}

loc_801B4900:
{
    r0 = MemoryInline::FlatRead16((r26 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801B4908:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(450))) {
        goto loc_801B4974;
    }
}

loc_801B490C:
{
    r25 = (r27 & 255);
}

loc_801B4914:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_801B4974;
    }
}

loc_801B4918:
{
    r21 = 0;
    goto loc_801B4968;
}

loc_801B4920:
{
    r0 = (r21 & 65535);
}

loc_801B4928:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10))) {
        goto loc_801B4974;
    }
}

loc_801B492C:
{
    r3 = (r28 + 392);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & -32);
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20008));
    ctx->lr = 0x801B4944u;
    if constexpr (KnownRegArgsCpuCall<0x801B4614u>(&func_801B4614)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_801B4614_2F6D = func_801B4614_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B4614_2F6D);
        r4 = static_cast<uint32_t>(regargs_result_801B4614_2F6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B4614u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_801B4948:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B4964;
    }
}

loc_801B494C:
{
    r3 = (r21 & 65535);
    r23_addr_3 = (r23 + r3);
    MemoryInline::FlatWrite8(r23_addr_3, static_cast<uint8_t>(r24));
    r0 = MemoryInline::FlatRead8((r26 + 808));
}

loc_801B495C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801B4964;
    }
}

loc_801B4960:
{
    r29 = 1;
}

loc_801B4964:
{
    r21 = (r21 + 1);
}

loc_801B4968:
{
    r0 = (r21 & 65535);
}

loc_801B4970:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r25))) {
        goto loc_801B4920;
    }
}

loc_801B4974:
{
    r31 = (r31 + 1);
    r28 = (r28 + 2840);
}

loc_801B497C:
{
    r0 = (r31 & 65535);
}

loc_801B4984:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_801B48C4;
    }
}

loc_801B4988:
{
    r0 = MemoryInline::FlatRead8((r26 + 1083));
}

loc_801B4990:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_801B49A0;
    }
}

loc_801B4994:
{
    r0 = MemoryInline::FlatRead16((r26 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801B499C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(450))) {
        goto loc_801B4A7C;
    }
}

loc_801B49A0:
{
    r0 = (r27 & 255);
}

loc_801B49A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4A7C;
    }
}

loc_801B49AC:
{
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl4_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB50;
    }
}

loc_inl4_0x800CFB48:
{
    r3 = 0;
    goto loc_inl4_cont_800CFB34;
}

loc_inl4_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB64;
    }
}

loc_inl4_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFB34;
}

loc_inl4_0x800CFB64:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_inl4_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r24 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl5_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB10;
    }
}

loc_inl5_0x800CFB08:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB24;
    }
}

loc_inl5_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB24:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl5_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = r3;
    r31 = 0;
    r22 = 1;
    r23 = (r1 + 12);
    r25 = (r24 & 65535);
    goto loc_801B4A70;
}

loc_801B49D8:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_801B49E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4A68;
    }
}

loc_801B49E4:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
    ctx->lr = 0x801B49ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D20C_4389 = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_4389);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_4389 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801B49F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B4A68;
    }
}

loc_801B49F4:
{
    r3 = r26;
    r4 = r28;
    ctx->lr = 0x801B4A00u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012D118_4780 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_4780);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_4780 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_801B4A04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801B4A68;
    }
}

loc_801B4A08:
{
    r21 = 0;
    r24 = (r27 & 255);
    goto loc_801B4A5C;
}

loc_801B4A14:
{
    r0 = (r21 & 65535);
}

loc_801B4A1C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10))) {
        goto loc_801B4A68;
    }
}

loc_801B4A20:
{
    r3 = (r28 + 60);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_15 & -32);
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20008));
    ctx->lr = 0x801B4A38u;
    if constexpr (KnownRegArgsCpuCall<0x801B4614u>(&func_801B4614)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_801B4614_4E42 = func_801B4614_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B4614_4E42);
        r4 = static_cast<uint32_t>(regargs_result_801B4614_4E42 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B4614u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_801B4A3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B4A58;
    }
}

loc_801B4A40:
{
    r3 = (r21 & 65535);
    r23_addr_8 = (r23 + r3);
    MemoryInline::FlatWrite8(r23_addr_8, static_cast<uint8_t>(r22));
    r0 = MemoryInline::FlatRead8((r26 + 808));
}

loc_801B4A50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801B4A58;
    }
}

loc_801B4A54:
{
    r29 = 1;
}

loc_801B4A58:
{
    r21 = (r21 + 1);
}

loc_801B4A5C:
{
    r0 = (r21 & 65535);
}

loc_801B4A64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r24))) {
        goto loc_801B4A14;
    }
}

loc_801B4A68:
{
    r31 = (r31 + 1);
    r28 = (r28 + 2848);
}

loc_801B4A70:
{
    r0 = (r31 & 65535);
}

loc_801B4A78:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r25))) {
        goto loc_801B49D8;
    }
}

loc_801B4A7C:
{
}

loc_801B4A80:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(1))) {
        goto loc_801B4A9C;
    }
}

loc_801B4A84:
{
    r0 = MemoryInline::FlatRead8((r26 + 809));
}

loc_801B4A8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B4AD4;
    }
}

loc_801B4A90:
{
    r0 = MemoryInline::FlatRead8((r26 + 2099));
}

loc_801B4A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4AD4;
    }
}

loc_801B4A9C:
{
    r3 = r26;
    r4 = 2;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl6_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl6_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x801307B0;
    }
}

loc_inl6_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl6_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl6_cont_80130790;
}

loc_inl6_return:
{
}

loc_inl6_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 809), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl7_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl7_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CEF40;
    }
}

loc_inl7_0x800CEF3C:
{
    r0 = 1;
}

loc_inl7_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_19 & 2147483647);
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

loc_inl7_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = r3;
    r3 = r26;
    r0 = (r0 & 31);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801B4AD4u;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_6248 = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_6248;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
}

loc_801B4AD4:
{
}

loc_801B4AD8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801B4AF8;
    }
}

loc_801B4ADC:
{
    r3 = r26;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl8_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl8_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x801307B0;
    }
}

loc_inl8_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl8_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl8_cont_80130790;
}

loc_inl8_return:
{
}

loc_inl8_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r26;
    ctx->lr = 0x801B4AF4u;
    if constexpr (KnownRegArgsCpuCall<0x801B43ACu>(&func_801B43AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801B43AC_69B9 = func_801B43AC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801B43AC_69B9);
        r4 = static_cast<uint32_t>(regargs_result_801B43AC_69B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801B43ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801B4B88;
}

loc_801B4AF8:
{
    r0 = MemoryInline::FlatRead8((r26 + 1083));
}

loc_801B4B00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801B4B88;
    }
}

loc_801B4B04:
{
    r0 = MemoryInline::FlatRead16((r26 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801B4B0C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(450))) {
        goto loc_801B4B88;
    }
}

loc_801B4B10:
{
    r21 = 0;
    r0 = MemoryInline::FlatRead8((r26 + 808));
}

loc_801B4B1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801B4B6C;
    }
}

loc_801B4B20:
{
    r21 = r0;
    r5 = 0;
    r4 = (r27 & 255);
    r3 = (r1 + 12);
    ctr = r4;
}

loc_801B4B38:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_801B4B68;
    }
}

loc_801B4B3C:
{
    r21 = (r21 + 1);
    r0 = (r21 & 255);
}

loc_801B4B48:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_801B4B50;
    }
}

loc_801B4B4C:
{
    r21 = 0;
}

loc_801B4B50:
{
    r0 = (r21 & 255);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_801B4B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4B68;
    }
}

loc_801B4B60:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B4B3C;
    }
}

loc_801B4B68:
{
    MemoryInline::FlatWrite8((r26 + 808), static_cast<uint8_t>(r21));
}

loc_801B4B6C:
{
    r3 = r26;
    r4 = 3;
    r5 = (r21 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r26;
    r4 = (r21 & 255);
    ctx->lr = 0x801B4B88u;
    if constexpr (KnownRegArgsCpuCall<0x801B46F8u>(&func_801B46F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801B46F8_77D2 = func_801B46F8_ra38_12_18_0(ctx, r3, r4, r5, f1.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801B46F8_77D2);
        r4 = static_cast<uint32_t>(regargs_result_801B46F8_77D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B46F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_801B4B88:
{
    r0 = MemoryInline::FlatRead8((r26 + 1083));
}

loc_801B4B90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801B4CA0;
    }
}

loc_801B4B94:
{
    r0 = MemoryInline::FlatRead8((r26 + 809));
}

loc_801B4B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B4CA0;
    }
}

loc_801B4BA0:
{
    r3 = (r26 + 392);
    r4 = (r26 + 432);
    ctx->lr = 0x801B4BACu;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_7F85 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_7F85);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_7F85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20004));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801B4BB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B4CA0;
    }
}

loc_801B4BB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 809), static_cast<uint8_t>(r0));
    goto loc_801B4CA0;
}

loc_801B4BC4:
{
}

loc_801B4BC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801B4BF8;
    }
}

loc_801B4BCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2099));
}

loc_801B4BD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801B4BE8;
    }
}

loc_801B4BD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r0 & 2);
}

loc_801B4BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4BF8;
    }
}

loc_801B4BE8:
{
    r3 = r26;
    r4 = 4;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_801B4BF8:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800CFB34_8A7F = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_8A7F);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_8A7F >> 32);
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
    r27 = r3;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800CFAF4_8D74 = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_8D74);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_8D74 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r5 = 0;
    r0 = (r27 & 65535);
    ctr = r0;
}

loc_801B4C1C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_801B4CA0;
    }
}

loc_801B4C20:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801B4C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4C94;
    }
}

loc_801B4C2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 1);
}

loc_801B4C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B4C94;
    }
}

loc_801B4C3C:
{
    r4 = MemoryInline::FlatRead8((r26 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_801B4C48:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_801B4C94;
    }
}

loc_801B4C4C:
{
    r3 = r26;
    ctx->lr = 0x801B4C54u;
    if constexpr (KnownRegArgsCpuCall<0x801B44BCu>(&func_801B44BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_801B44BC_9451 = func_801B44BC_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B44BC_9451);
        r4 = static_cast<uint32_t>(regargs_result_801B44BC_9451 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B44BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r26 + 808), static_cast<uint8_t>(r3));
    r5 = (r3 & 255);
}

loc_801B4C60:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_801B4C78;
    }
}

loc_801B4C64:
{
    r3 = r26;
    r4 = 3;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_801B4CA0;
}

loc_801B4C78:
{
    r3 = r26;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r26;
    r4 = MemoryInline::FlatRead8((r26 + 808));
    ctx->lr = 0x801B4C90u;
    if constexpr (KnownRegArgsCpuCall<0x801B46F8u>(&func_801B46F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801B46F8_A070 = func_801B46F8_ra38_12_18_0(ctx, r3, r4, r5, f1.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801B46F8_A070);
        r4 = static_cast<uint32_t>(regargs_result_801B46F8_A070 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B46F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    goto loc_801B4CA0;
}

loc_801B4C94:
{
    r5 = (r5 + 1);
    r3 = (r3 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B4C20;
    }
}

loc_801B4CA0:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B4808(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B4808_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0xE000001B fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B4808 func_801B4808 preserves=true fpr_mask=0x00000000
