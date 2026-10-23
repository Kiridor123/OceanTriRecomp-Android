#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D38D8(CpuContext* ctx);
extern "C" uint64_t func_800D38D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D395C(CpuContext* ctx);
extern "C" uint64_t func_800D395C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E0C54(CpuContext* ctx);
extern "C" uint64_t func_800E0C54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AFFDC(CpuContext* ctx);
extern "C" uint32_t func_802AFFDC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B32D4(CpuContext* ctx);
extern "C" uint64_t func_802B32D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B413C(CpuContext* ctx);
extern "C" uint64_t func_802B413C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802AECA8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_802AECA8;

loc_802AECA8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r3 = 0x806C0000u;
    r27 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r27 + 3012));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802AECD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_802AEF44;
    }
}

loc_802AECD4:
{
    r26 = 0;
    r25 = 0;
    r24 = 0;
    r30 = 5;
    r29 = 4;
    r22 = r24;
    r21 = 1;
    r19 = r24;
    r20 = r24;
    r23 = r24;
    r31 = r24;
}

loc_802AED00:
{
    r0 = MemoryInline::FlatRead8((r27 + 3012));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 1488);
    r4 = (r27 + r0);
    r3 = (r4 + r24);
    r0 = MemoryInline::FlatRead32((r3 + 1472));
}

loc_802AED1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AEE90;
    }
}

loc_802AED20:
{
    r28 = (r27 + r24);
    r3 = (r4 + r25);
    r0 = (r3 + 40);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_802AED34:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_802AED4C;
    }
}

loc_802AED38:
{
}

loc_802AED3C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(1))) {
        goto loc_802AED5C;
    }
}

loc_802AED40:
{
}

loc_802AED44:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(2))) {
        goto loc_802AEDB8;
    }
}

loc_802AED48:
{
    goto loc_802AEDCC;
}

loc_802AED4C:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    ctx->lr = 0x802AED58u;
    if constexpr (KnownRegArgsCpuCall<0x802B413Cu>(&func_802B413C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802B413C_1285 = func_802B413C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B413C_1285);
        r4 = static_cast<uint32_t>(regargs_result_802B413C_1285 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802B413Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802AEDCC;
}

loc_802AED5C:
{
    r3 = MemoryInline::FlatRead8((r27 + 3013));
    r4 = MemoryInline::FlatRead8((r27 + 3014));
    if constexpr (KnownRegArgsCpuCall<0x802AFFDCu>(&func_802AFFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AFFDC_1711 = func_802AFFDC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802AFFDC_1711;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AFFDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_802AED70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AED88;
    }
}

loc_802AED74:
{
}

loc_802AED78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802AED88;
    }
}

loc_802AED7C:
{
}

loc_802AED80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AEDA0;
    }
}

loc_802AED84:
{
    goto loc_802AEDCC;
}

loc_802AED88:
{
    r0 = MemoryInline::FlatRead8((r27 + 3092));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam8((r27 + 3092), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r29));
    goto loc_802AEDCC;
}

loc_802AEDA0:
{
    r0 = MemoryInline::FlatRead8((r27 + 3092));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam8((r27 + 3092), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
    goto loc_802AEDCC;
}

loc_802AEDB8:
{
    r0 = MemoryInline::FlatRead8((r27 + 3092));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam8((r27 + 3092), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
}

loc_802AEDCC:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r5 = (r26 & 255);
    ctx->lr = 0x802AEDDCu;
    if constexpr (KnownRegArgsCpuCall<0x802B32D4u>(&func_802B32D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_802B32D4_1F6D = func_802B32D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B32D4_1F6D);
        r4 = static_cast<uint32_t>(regargs_result_802B32D4_1F6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802B32D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r18 = 0;
    r28 = (r27 + r24);
    goto loc_802AEE04;
}

loc_802AEDE8:
{
    r4 = r18;
    r5 = (r18 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    r6 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    ctx->lr = 0x802AEE00u;
    if constexpr (KnownRegArgsCpuCall<0x800E0C54u>(&func_800E0C54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E0C54_2562 = func_800E0C54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0C54_2562);
        r4 = static_cast<uint32_t>(regargs_result_800E0C54_2562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x800E0C54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
    r18 = (r18 + 1);
}

loc_802AEE04:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 348));
}

loc_802AEE10:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802AEDE8;
    }
}

loc_802AEE14:
{
    r0 = MemoryInline::FlatRead32((r3 + 276));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 272));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    r5 = 1;
    r6 = (r1 + 24);
    ctx->lr = 0x802AEE38u;
    if constexpr (KnownRegArgsCpuCall<0x800D38D8u>(&func_800D38D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800D38D8_2F96 = func_800D38D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D38D8_2F96);
        r4 = static_cast<uint32_t>(regargs_result_800D38D8_2F96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x800D38D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
}

loc_802AEE3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AEE4C;
    }
}

loc_802AEE40:
{
    r3 = (r27 + r24);
    MemoryInline::FlatWrite32((r3 + 20), r31);
    goto loc_802AEEE4;
}

loc_802AEE4C:
{
    r3 = (r27 + r24);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 276));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r5 + 272));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r5 + 280));
    r6 = 1;
    r7 = MemoryInline::FlatRead32((r1 + 24));
    r8 = 0;
    ctx->lr = 0x802AEE84u;
    if constexpr (KnownRegArgsCpuCall<0x800D395Cu>(&func_800D395C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800D395C_3A85 = func_800D395C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D395C_3A85);
        r4 = static_cast<uint32_t>(regargs_result_800D395C_3A85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x800D395Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
    r4 = (r27 + r24);
    MemoryInline::FlatWrite32((r4 + 20), r3);
    goto loc_802AEEE4;
}

loc_802AEE90:
{
    r3 = (r27 + r24);
    MemoryInline::FlatWrite32((r3 + 4), r19);
    MemoryInline::FlatWrite32((r3 + 20), r20);
}

loc_802AEEA0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(1))) {
        goto loc_802AEED8;
    }
}

loc_802AEEA4:
{
    r0 = MemoryInline::FlatRead8((r27 + 3013));
}

loc_802AEEAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AEEB8;
    }
}

loc_802AEEB0:
{
}

loc_802AEEB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802AEED4;
    }
}

loc_802AEEB8:
{
    r3 = MemoryInline::FlatRead8((r27 + 3014));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_802AEEC8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_802AEED8;
    }
}

loc_802AEECC:
{
    MemoryInline::FlatWriteRam8((r27 + 3092), static_cast<uint8_t>(r21));
    goto loc_802AEED8;
}

loc_802AEED4:
{
    MemoryInline::FlatWriteRam8((r27 + 3092), static_cast<uint8_t>(r22));
}

loc_802AEED8:
{
}

loc_802AEEDC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(3))) {
        goto loc_802AEEE4;
    }
}

loc_802AEEE0:
{
    MemoryInline::FlatWriteRam8((r27 + 12176), static_cast<uint8_t>(r23));
}

loc_802AEEE4:
{
    r26 = (r26 + 1);
    r25 = (r25 + 356);
    r24 = (r24 + 4);
}

loc_802AEEF4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_802AED00;
    }
}

loc_802AEEF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13908));
    MemoryInline::FlatWriteRamFloat32((r27 + 10244), f0.d);
    r3 = (r27 + 10248);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13864));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    f3.d = f2.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    MemoryInline::FlatWriteRamFloat32((r27 + 10260), f0.d);
    MemoryInline::FlatWriteRamFloat32((r27 + 10264), f0.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r27 + 3093), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3097), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3094), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3098), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3095), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3099), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3096), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 3100), static_cast<uint8_t>(r0));
}

loc_802AEF44:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AECA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AECA8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AECA8 func_802AECA8 preserves=true fpr_mask=0x00000000
