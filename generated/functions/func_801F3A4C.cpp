#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C09C(CpuContext* ctx);
extern "C" uint64_t func_8004C09C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EC810(CpuContext* ctx);
extern "C" uint32_t func_801EC810_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801EC88C(CpuContext* ctx);
extern "C" uint64_t func_801EC88C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECA44(CpuContext* ctx);
extern "C" uint64_t func_801ECA44_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801ECA5C(CpuContext* ctx);
extern "C" uint32_t func_801ECA5C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F3614(CpuContext* ctx);
extern "C" uint64_t func_801F3614_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F3730(CpuContext* ctx);
extern "C" uint32_t func_801F3730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F382C(CpuContext* ctx);
extern "C" uint32_t func_801F382C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021234C(CpuContext* ctx);
extern "C" uint64_t func_8021234C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A8FB4(CpuContext* ctx);
extern "C" uint64_t func_802A8FB4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_801F3A4C_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_801F3B54_loc_0 = 0;
    uint32_t addr_lhax_801F3B80_loc_0 = 0;
    uint32_t addr_lhax_801F3BA4_loc_0 = 0;
    uint32_t addr_lhax_801F3CD4_loc_0 = 0;
    uint32_t addr_lhax_801F3D34_loc_0 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_801F3A4C;

loc_801F3A4C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r29 = 0;
    r3 = 0x80660000u;
    r30 = (r3 + -18480);
    r28 = MemoryInline::FlatRead32((r13 + -17824));
    r27 = MemoryInline::FlatRead32((r4 + 36));
    r3 = (r4 + 12);
    // inline leaf 0x801EC868 (9 guest instruction(s))
}

loc_inl1_0x801EC868:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl1_0x801EC87C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(40))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801EC880:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl1_cont_801EC868;
}

loc_inl1_return:
{
}

loc_inl1_cont_801EC868:
{
    // end of inlined leaf 0x801EC868
    r3 = MemoryInline::FlatRead8(r26);
}

loc_801F3A8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F3AAC;
    }
}

loc_801F3A90:
{
}

loc_801F3A94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F3D50;
    }
}

loc_801F3A98:
{
}

loc_801F3A9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F3E08;
    }
}

loc_801F3AA0:
{
}

loc_801F3AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_801F3E20;
    }
}

loc_801F3AA8:
{
    goto loc_801F3E34;
}

loc_801F3AAC:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_801F3AB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F3ACC;
    }
}

loc_801F3AB8:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3E08;
}

loc_801F3ACC:
{
}

loc_801F3AD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801F3AE8;
    }
}

loc_801F3AD4:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3E20;
}

loc_801F3AE8:
{
    r3 = 128;
    ctx->lr = 0x801F3AF0u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_1C87 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_1C87);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_1C87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F3AF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3B08;
    }
}

loc_801F3AF8:
{
    r3 = r25;
    ctx->lr = 0x801F3B00u;
    if constexpr (KnownRegArgsCpuCall<0x801EC88Cu>(&func_801EC88C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_801EC88C_209E = func_801EC88C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EC88C_209E);
        r4 = static_cast<uint32_t>(regargs_result_801EC88C_209E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801EC88Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    goto loc_801F3E38;
}

loc_801F3B08:
{
    r3 = 0x805C0000u;
    r24 = (r3 + -28792);
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801F3B18:
{
    r3 = 0x805C0000u;
    r31 = (r3 + -28776);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F3B2C;
    }
}

loc_801F3B24:
{
    r3 = 0x805C0000u;
    r31 = (r3 + -28748);
}

loc_801F3B2C:
{
    r3 = 16;
    ctx->lr = 0x801F3B34u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_296F = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_296F);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_296F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F3B38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3C20;
    }
}

loc_801F3B3C:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r26 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x801F3730u>(&func_801F3730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_801F3730_2E14 = func_801F3730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801F3730_2E14;
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
        InvokeDirectCpu<0x801F3730u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r0 = (r3 & 65535);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & -2);
    addr_lhax_801F3B54_loc_0 = (r31 + r30);
    r4 = MemoryInline::FlatRead16(addr_lhax_801F3B54_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801F3B5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-2))) {
        goto loc_801F3BCC;
    }
}

loc_801F3B60:
{
}

loc_801F3B64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-3))) {
        goto loc_801F3E34;
    }
}

loc_801F3B68:
{
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x801F382Cu>(&func_801F382C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F382C_341E = func_801F382C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_801F382C_341E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801F382Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r26 + 24));
    r5 = MemoryInline::FlatRead8((r26 + 2));
    // inline leaf 0x801F39FC (20 guest instruction(s))
}

loc_inl2_0x801F39FC:
{
    r0 = (r5 & 255);
}

loc_inl2_0x801F3A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl2_0x801F3A14;
    }
}

loc_inl2_0x801F3A08:
{
}

loc_inl2_0x801F3A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x801F3A30;
    }
}

loc_inl2_0x801F3A10:
{
    goto loc_inl2_cont_801F39FC;
}

loc_inl2_0x801F3A14:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r3 + 600), static_cast<uint8_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r3 + 601), static_cast<uint8_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWrite8((r3 + 602), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_801F39FC;
}

loc_inl2_0x801F3A30:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r3 + 604), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r3 + 605), static_cast<uint8_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite8((r3 + 606), static_cast<uint8_t>(r0));
}

loc_inl2_cont_801F39FC:
{
    // end of inlined leaf 0x801F39FC
    addr_lhax_801F3B80_loc_0 = (r31 + r30);
    r0 = MemoryInline::FlatRead16(addr_lhax_801F3B80_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F3B88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_801F3BB8;
    }
}

loc_801F3B8C:
{
    r3 = 0x805C0000u;
    r4 = (r3 + -29132);
    r0 = (r0 * 10);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r26 + 14), static_cast<uint16_t>(r0));
    addr_lhax_801F3BA4_loc_0 = (r31 + r30);
    r0 = MemoryInline::FlatRead16(addr_lhax_801F3BA4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 10);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r26 + 16), static_cast<uint16_t>(r0));
}

loc_801F3BB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r0));
    r3 = 4;
    ctx->lr = 0x801F3BC8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DBCE8_42C8 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_42C8);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_42C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801F3E34;
}

loc_801F3BCC:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801F3BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3BE4;
    }
}

loc_801F3BD8:
{
}

loc_801F3BDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F3BF0;
    }
}

loc_801F3BE0:
{
    goto loc_801F3BF8;
}

loc_801F3BE4:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_801F3BF8;
}

loc_801F3BF0:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    MemoryInline::FlatWrite32((r28 + 14780), r0);
}

loc_801F3BF8:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801F3C04u;
    if constexpr (KnownRegArgsCpuCall<0x8004C09Cu>(&func_8004C09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004C09C_4CF3 = func_8004C09C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C09C_4CF3);
        r4 = static_cast<uint32_t>(regargs_result_8004C09C_4CF3 >> 32);
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
        InvokeDirectCpu<0x8004C09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r25;
    ctx->lr = 0x801F3C0Cu;
    if constexpr (KnownRegArgsCpuCall<0x801EC810u>(&func_801EC810)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801EC810_50C8 = func_801EC810_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801EC810_50C8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x801EC810u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = 0;
    ctx->lr = 0x801F3C14u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DBC94_53AC = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_53AC);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_53AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3E34;
}

loc_801F3C20:
{
    r3 = 32;
    ctx->lr = 0x801F3C28u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_5B56 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_5B56);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_5B56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F3C2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3CA0;
    }
}

loc_801F3C30:
{
    r0 = MemoryInline::FlatRead8((r26 + 3));
}

loc_801F3C38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F3C80;
    }
}

loc_801F3C3C:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801F3C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3C54;
    }
}

loc_801F3C48:
{
}

loc_801F3C4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F3C60;
    }
}

loc_801F3C50:
{
    goto loc_801F3C68;
}

loc_801F3C54:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_801F3C68;
}

loc_801F3C60:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
    MemoryInline::FlatWrite32((r28 + 14780), r0);
}

loc_801F3C68:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801F3C74u;
    if constexpr (KnownRegArgsCpuCall<0x8004C09Cu>(&func_8004C09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004C09C_625B = func_8004C09C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C09C_625B);
        r4 = static_cast<uint32_t>(regargs_result_8004C09C_625B >> 32);
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
        InvokeDirectCpu<0x8004C09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3C94;
}

loc_801F3C80:
{
    r3 = MemoryInline::FlatRead8(r26);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 32), r0);
}

loc_801F3C94:
{
    r3 = 1;
    ctx->lr = 0x801F3C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DBC94_6820 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_6820);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_6820 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801F3E34;
}

loc_801F3CA0:
{
    r3 = r24;
    r4 = (r26 + 4);
    r5 = (r26 + 6);
    r6 = MemoryInline::FlatRead16((r26 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x801F3CB4u;
    if constexpr (KnownRegArgsCpuCall<0x801F3614u>(&func_801F3614)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_801F3614_70BA = func_801F3614_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F3614_70BA);
        r4 = static_cast<uint32_t>(regargs_result_801F3614_70BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801F3614u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801F3CB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801F3E34;
    }
}

loc_801F3CBC:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r26 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x801F3730u>(&func_801F3730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_801F3730_79AA = func_801F3730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801F3730_79AA;
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
        InvokeDirectCpu<0x801F3730u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r0 = (r3 & 65535);
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r25 = (r25_rot_1 & -2);
    addr_lhax_801F3CD4_loc_0 = (r31 + r25);
    r0 = MemoryInline::FlatRead16(addr_lhax_801F3CD4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F3CDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-3))) {
        goto loc_801F3E34;
    }
}

loc_801F3CE0:
{
    r3 = 7336;
    r4 = 0;
    ctx->lr = 0x801F3CECu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_7F4A = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_7F4A);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_7F4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r8 = r3;
    r3 = (r26 + 14);
    r4 = (r26 + 16);
    r5 = 1;
    r6 = MemoryInline::FlatRead16((r8 + 8));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + -1);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r7 = 1;
    r8 = MemoryInline::FlatRead16((r8 + 10));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r8 + -1);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r9 = MemoryInline::FlatRead16((r30 + 712));
    ctx->lr = 0x801F3D20u;
    if constexpr (KnownRegArgsCpuCall<0x801ECA5Cu>(&func_801ECA5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_801ECA5C_8556 = func_801ECA5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801ECA5C_8556;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801ECA5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
    }
}

loc_801F3D24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3E34;
    }
}

loc_801F3D28:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r0));
    r3 = r26;
    addr_lhax_801F3D34_loc_0 = (r31 + r25);
    r4 = MemoryInline::FlatRead16(addr_lhax_801F3D34_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x801F382Cu>(&func_801F382C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F382C_8A11 = func_801F382C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_801F382C_8A11;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801F382Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r26 + 24));
    r5 = MemoryInline::FlatRead8((r26 + 2));
    // inline leaf 0x801F39FC (20 guest instruction(s))
}

loc_inl3_0x801F39FC:
{
    r0 = (r5 & 255);
}

loc_inl3_0x801F3A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl3_0x801F3A14;
    }
}

loc_inl3_0x801F3A08:
{
}

loc_inl3_0x801F3A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x801F3A30;
    }
}

loc_inl3_0x801F3A10:
{
    goto loc_inl3_cont_801F39FC;
}

loc_inl3_0x801F3A14:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWrite8((r3 + 600), static_cast<uint8_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 255);
    MemoryInline::FlatWrite8((r3 + 601), static_cast<uint8_t>(r0));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 255);
    MemoryInline::FlatWrite8((r3 + 602), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_801F39FC;
}

loc_inl3_0x801F3A30:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & 255);
    MemoryInline::FlatWrite8((r3 + 604), static_cast<uint8_t>(r0));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 255);
    MemoryInline::FlatWrite8((r3 + 605), static_cast<uint8_t>(r0));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_10 & 255);
    MemoryInline::FlatWrite8((r3 + 606), static_cast<uint8_t>(r0));
}

loc_inl3_cont_801F39FC:
{
    // end of inlined leaf 0x801F39FC
    goto loc_801F3E34;
}

loc_801F3D50:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_801F3D58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F3D70;
    }
}

loc_801F3D5C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3E08;
}

loc_801F3D70:
{
    ctx->lr = 0x801F3D74u;
    if constexpr (KnownRegArgsCpuCall<0x8021234Cu>(&func_8021234C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021234C_9590 = func_8021234C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8021234C_9590);
        r4 = static_cast<uint32_t>(regargs_result_8021234C_9590 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8021234Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = (r26 + 32);
    r4 = (r0 & 65535);
    r5 = 4;
    r6 = 8;
    r7 = 65536;
    r7 = (r7 + -1);
    r7 = (r7 & 65535);
    ctx->lr = 0x801F3D98u;
    if constexpr (KnownRegArgsCpuCall<0x802A8FB4u>(&func_802A8FB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_802A8FB4_9997 = func_802A8FB4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8FB4_9997);
        r4 = static_cast<uint32_t>(regargs_result_802A8FB4_9997 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8FB4u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801F3D9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F3DAC;
    }
}

loc_801F3DA0:
{
}

loc_801F3DA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F3DF8;
    }
}

loc_801F3DA8:
{
    goto loc_801F3E34;
}

loc_801F3DAC:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801F3DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3DC4;
    }
}

loc_801F3DB8:
{
}

loc_801F3DBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F3DD0;
    }
}

loc_801F3DC0:
{
    goto loc_801F3DD8;
}

loc_801F3DC4:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_801F3DD8;
}

loc_801F3DD0:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
    MemoryInline::FlatWrite32((r28 + 14780), r0);
}

loc_801F3DD8:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801F3DE4u;
    if constexpr (KnownRegArgsCpuCall<0x8004C09Cu>(&func_8004C09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004C09C_A4E8 = func_8004C09C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C09C_A4E8);
        r4 = static_cast<uint32_t>(regargs_result_8004C09C_A4E8 >> 32);
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
        InvokeDirectCpu<0x8004C09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0;
    ctx->lr = 0x801F3DECu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DBC94_A95F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_A95F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_A95F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_801F3E34;
}

loc_801F3DF8:
{
    r3 = MemoryInline::FlatRead8(r26);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    goto loc_801F3E34;
}

loc_801F3E08:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x801ECA44u>(&func_801ECA44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ECA44_B198 = func_801ECA44_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECA44_B198);
        r4 = static_cast<uint32_t>(regargs_result_801ECA44_B198 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801ECA44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F3E14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3E34;
    }
}

loc_801F3E18:
{
    r29 = 2;
    goto loc_801F3E34;
}

loc_801F3E20:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x801ECA44u>(&func_801ECA44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ECA44_B4F1 = func_801ECA44_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECA44_B4F1);
        r4 = static_cast<uint32_t>(regargs_result_801ECA44_B4F1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801ECA44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F3E2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3E34;
    }
}

loc_801F3E30:
{
    r29 = 1;
}

loc_801F3E34:
{
    r3 = r29;
}

loc_801F3E38:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F3A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F3A4C_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFB fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F3A4C func_801F3A4C preserves=true fpr_mask=0x00000000
