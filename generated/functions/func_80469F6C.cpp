#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469184(CpuContext* ctx);
extern "C" uint32_t func_80469184_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046A160(CpuContext* ctx);
extern "C" uint64_t func_8046A160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046A8EC(CpuContext* ctx);
extern "C" uint32_t func_8046A8EC_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046A970(CpuContext* ctx);
extern "C" uint64_t func_8046A970_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046ADA8(CpuContext* ctx);
extern "C" uint64_t func_8046ADA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046AFDC(CpuContext* ctx);
extern "C" uint64_t func_8046AFDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80469F6C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80469F6C;

loc_80469F6C:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
}

loc_80469F78:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 148), r0);
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80469FA8;
    }
}

loc_80469F9C:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80469FA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80469FB0;
    }
}

loc_80469FA8:
{
    r3 = 2;
    goto loc_8046A14C;
}

loc_80469FB0:
{
    r30 = 0;
    MemoryInline::FlatWrite32(r6, r30);
    r31 = 0;
    r23 = 0;
    goto loc_8046A11C;
}

loc_80469FC4:
{
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80469184_EC2 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_EC2;
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
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32(r26);
    r21 = 2048;
    r0 = (r0 - r31);
}

loc_80469FE4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2048))) {
        goto loc_80469FEC;
    }
}

loc_80469FE8:
{
    r21 = r0;
}

loc_80469FEC:
{
}

loc_80469FF0:
{
    r0 = 208;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80469FFC;
    }
}

loc_80469FF8:
{
    r0 = 209;
}

loc_80469FFC:
{
}

loc_8046A000:
{
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = 64;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8046A010;
    }
}

loc_8046A00C:
{
    r0 = (r21 + 64);
}

loc_8046A010:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 32), r24);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r21));
    ctx->lr = 0x8046A028u;
    if constexpr (KnownRegArgsCpuCall<0x8046A970u>(&func_8046A970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046A970_1599 = func_8046A970_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046A970_1599);
        r4 = static_cast<uint32_t>(regargs_result_8046A970_1599 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046A970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 24);
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x8046ADA8u>(&func_8046ADA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046ADA8_1C4E = func_8046ADA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046ADA8_1C4E);
        r4 = static_cast<uint32_t>(regargs_result_8046ADA8_1C4E >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046ADA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_8046A03C:
{
    r23 = r3;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8046A060;
    }
}

loc_8046A044:
{
}

loc_8046A048:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046A060;
    }
}

loc_8046A04C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r5 = r21;
    r4 = (r25 + r31);
    if constexpr (KnownRegArgsCpuCall<0x8046ADA8u>(&func_8046ADA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046ADA8_2116 = func_8046ADA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046ADA8_2116);
        r4 = static_cast<uint32_t>(regargs_result_8046ADA8_2116 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046ADA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r23 = r3;
}

loc_8046A060:
{
}

loc_8046A064:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8046A110;
    }
}

loc_8046A068:
{
}

loc_8046A06C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8046A104;
    }
}

loc_8046A070:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 16);
    ctx->lr = 0x8046A07Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046A160u>(&func_8046A160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046A160_2601 = func_8046A160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046A160_2601);
        r4 = static_cast<uint32_t>(regargs_result_8046A160_2601 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046A160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8046A080:
{
    r23 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046A094;
    }
}

loc_8046A088:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8046AA0C (9 guest instruction(s))
}

loc_inl0_0x8046AA0C:
{
}

loc_inl0_0x8046AA10:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8046AA28;
    }
}

loc_inl0_0x8046AA18:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r3 = (r3 + 31264);
    r0 = (r3 + r0);
}

loc_inl0_0x8046AA28:
{
    r3 = r0;
}

loc_inl0_cont_8046AA0C:
{
    // end of inlined leaf 0x8046AA0C
    r22 = r3;
}

loc_8046A094:
{
    r0 = MemoryInline::FlatRead32((r22 + 28));
}

loc_8046A09C:
{
    r19 = MemoryInline::FlatRead16((r22 + 32));
    r20 = (r0 & 255);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8046A0E4;
    }
}

loc_8046A0A8:
{
}

loc_8046A0AC:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8046A0E4;
    }
}

loc_8046A0B0:
{
}

loc_8046A0B4:
{
    if ((static_cast<uint32_t>(r19) > static_cast<uint32_t>(r21))) {
        goto loc_8046A0E4;
    }
}

loc_8046A0B8:
{
    r3 = r22;
    r4 = 64;
    // inline leaf 0x8046AA80 (12 guest instruction(s))
}

loc_inl1_0x8046AA80:
{
}

loc_inl1_0x8046AA84:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2176))) {
        goto loc_inl1_0x8046AA94;
    }
}

loc_inl1_0x8046AA8C:
{
    r5 = 769;
    goto loc_inl1_0x8046AAA8;
}

loc_inl1_0x8046AA94:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_inl1_0x8046AAA0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8046AAA8;
    }
}

loc_inl1_0x8046AAA4:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl1_0x8046AAA8:
{
    r3 = r5;
}

loc_inl1_cont_8046AA80:
{
    // end of inlined leaf 0x8046AA80
    r3 = r22;
    r5 = r19;
    r4 = (r25 + r31);
    ctx->lr = 0x8046A0D4u;
    if constexpr (KnownRegArgsCpuCall<0x8046AFDCu>(&func_8046AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046AFDC_34E2 = func_8046AFDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046AFDC_34E2);
        r4 = static_cast<uint32_t>(regargs_result_8046AFDC_34E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x8046AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_8046A0D8:
{
    r23 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(770))) {
        goto loc_8046A0E4;
    }
}

loc_8046A0E0:
{
    r23 = 0;
}

loc_8046A0E4:
{
}

loc_8046A0E8:
{
    if ((static_cast<uint32_t>(r19) == static_cast<uint32_t>(r21))) {
        goto loc_8046A0F4;
    }
}

loc_8046A0EC:
{
    r21 = r19;
    r30 = 1;
}

loc_8046A0F4:
{
    MemoryInline::FlatWrite32(r27, r20);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8046AA30 (10 guest instruction(s))
}

loc_inl2_0x8046AA30:
{
}

loc_inl2_0x8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8046AA38:
{
}

loc_inl2_0x8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    goto loc_inl2_cont_8046AA30;
}

loc_inl2_return:
{
}

loc_inl2_cont_8046AA30:
{
    // end of inlined leaf 0x8046AA30
    goto loc_8046A110;
}

loc_8046A104:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x8046A10Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046A8ECu>(&func_8046A8EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8046A8EC_3DD2 = func_8046A8EC_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_8046A8EC_3DD2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046A8ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r23 = r3;
}

loc_8046A110:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    // inline leaf 0x8046AA30 (10 guest instruction(s))
}

loc_inl3_0x8046AA30:
{
}

loc_inl3_0x8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8046AA38:
{
}

loc_inl3_0x8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r4);
    goto loc_inl3_cont_8046AA30;
}

loc_inl3_return:
{
}

loc_inl3_cont_8046AA30:
{
    // end of inlined leaf 0x8046AA30
    r31 = (r31 + r21);
}

loc_8046A11C:
{
}

loc_8046A120:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8046A144;
    }
}

loc_8046A124:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_8046A12C:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_8046A144;
    }
}

loc_8046A130:
{
}

loc_8046A134:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8046A144;
    }
}

loc_8046A138:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8046A140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80469FC4;
    }
}

loc_8046A144:
{
    MemoryInline::FlatWrite32(r26, r31);
    r3 = r23;
}

loc_8046A14C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_80469F6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80469F6C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80469F6C func_80469F6C preserves=true fpr_mask=0x00000000
