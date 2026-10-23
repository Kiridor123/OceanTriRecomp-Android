#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80338728(CpuContext* ctx);
extern "C" uint64_t func_80338728_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80343F50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80343F50;

loc_80343F50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r30 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r28 = r3;
    r3 = r30;
    ctx->lr = 0x80343F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80343AD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = (r3 & 255);
    r0 = (r0 & 2);
}

loc_80343F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803441B0;
    }
}

loc_80343F88:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_80343F90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803441B0;
    }
}

loc_80343F94:
{
    r3 = 2;
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl4_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    r3 = r30;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80343FB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803440D4;
    }
}

loc_80343FBC:
{
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_80343FC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803440A8;
    }
}

loc_80343FC8:
{
    r25 = 0;
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r31_addr_1 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_1);
}

loc_80343FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80343FF0;
    }
}

loc_80343FE4:
{
    ctx->lr = 0x80343FE8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_1D92 = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_1D92);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_1D92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80343FEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80344040;
    }
}

loc_80343FF0:
{
    r26 = 0;
    r29 = (r29 & 65535);
    goto loc_80344034;
}

loc_80343FFC:
{
    r0 = (r26 & 65535);
    r0 = (r0 * 2848);
    r31_addr_3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_3);
}

loc_8034400C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80344030;
    }
}

loc_80344010:
{
    r3 = (r26 & 255);
    ctx->lr = 0x80344018u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_2272 = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_2272);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_2272 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8034401C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80344030;
    }
}

loc_80344020:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r25 = 1;
    goto loc_80344040;
}

loc_80344030:
{
    r26 = (r26 + 1);
}

loc_80344034:
{
    r0 = (r26 & 65535);
}

loc_8034403C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_80343FFC;
    }
}

loc_80344040:
{
}

loc_80344044:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_80344088;
    }
}

loc_80344048:
{
    r5 = MemoryInline::FlatRead8((r30 + 3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
}

loc_80344058:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80344078;
    }
}

loc_8034405C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 5;
    r5 = 0;
    ctx->lr = 0x80344074u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_29D3 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_29D3);
        r4 = static_cast<uint32_t>(regargs_result_80338728_29D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_80344078:
{
    r3 = r30;
    r4 = 7;
    ctx->lr = 0x80344084u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_3070 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_3070);
        r4 = static_cast<uint32_t>(regargs_result_80338728_3070 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_80344088:
{
    // inline leaf 0x80143C5C (7 guest instruction(s))
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = MemoryInline::FlatRead8((r3 + 875));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x80143C5C
}

loc_80344090:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803441B0;
    }
}

loc_80344094:
{
    r3 = r30;
    r4 = 7;
    r5 = MemoryInline::FlatRead8((r30 + 3));
    ctx->lr = 0x803440A4u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_3952 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_3952);
        r4 = static_cast<uint32_t>(regargs_result_80338728_3952 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_803440A8:
{
    r3 = MemoryInline::FlatRead16((r30 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150908072);
}

loc_803440B0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(900))) {
        goto loc_803440C0;
    }
}

loc_803440B4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    goto loc_803441B0;
}

loc_803440C0:
{
    r3 = r30;
    r4 = 8;
    r5 = 0;
    ctx->lr = 0x803440D0u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_41B3 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_41B3);
        r4 = static_cast<uint32_t>(regargs_result_80338728_41B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_803440D4:
{
    // inline leaf 0x80143C5C (7 guest instruction(s))
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = MemoryInline::FlatRead8((r3 + 875));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x80143C5C
}

loc_803440DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803440FC;
    }
}

loc_803440E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 5;
    r5 = 0;
    ctx->lr = 0x803440F8u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_4AC5 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_4AC5);
        r4 = static_cast<uint32_t>(regargs_result_80338728_4AC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_803440FC:
{
    r5 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = (r0 * 2848);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_80344118:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803441B0;
    }
}

loc_8034411C:
{
    r0 = (r5 + 1);
    r25 = (r0 & 255);
    r26 = 0;
    r29 = (r29 & 65535);
    r28 = (r29 + -1);
    goto loc_803441A4;
}

loc_80344134:
{
    r0 = (r25 & 255);
}

loc_8034413C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r29))) {
        goto loc_80344144;
    }
}

loc_80344140:
{
    r25 = 0;
}

loc_80344144:
{
    r3 = (r25 & 255);
    r0 = (r3 * 2848);
    r27 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80344158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034419C;
    }
}

loc_8034415C:
{
    ctx->lr = 0x80344160u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_551B = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_551B);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_551B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80344164:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034419C;
    }
}

loc_80344168:
{
    r3 = MemoryInline::FlatRead8((r30 + 20));
    r0 = MemoryInline::FlatRead8((r27 + 22));
}

loc_80344174:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8034419C;
    }
}

loc_80344178:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 5;
    r5 = 0;
    ctx->lr = 0x80344198u;
    if constexpr (KnownRegArgsCpuCall<0x80338728u>(&func_80338728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80338728_5A88 = func_80338728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80338728_5A88);
        r4 = static_cast<uint32_t>(regargs_result_80338728_5A88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80338728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803441B0;
}

loc_8034419C:
{
    r26 = (r26 + 1);
    r25 = (r25 + 1);
}

loc_803441A4:
{
    r0 = (r26 & 65535);
}

loc_803441AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r28))) {
        goto loc_80344134;
    }
}

loc_803441B0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80343F50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80343F50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80343F50 func_80343F50 preserves=true fpr_mask=0x00000000
