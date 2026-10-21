#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142C24(CpuContext* ctx);
extern "C" uint64_t func_80142C24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801436B8(CpuContext* ctx);
extern "C" uint64_t func_801436B8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AE094_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x803AE094u);
    goto loc_803AE094;

loc_803AE094:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r3;
    r25 = r4;
    r3 = (r1 + 8);
    ctx->lr = 0x803AE0B8u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_C3B = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_C3B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r28 = (r3 + 844);
    r27 = (r3 + 793);
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 776), static_cast<uint8_t>(r30));
    r29 = 0;
    r31 = 65536;
}

loc_803AE0D4:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_803AE0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE2C4;
    }
}

loc_803AE0E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r27 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r27 + 5));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r27 + 6));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r27 + 7));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r3 = (r1 + 8);
    r4 = (r28 + 8);
    ctx->lr = 0x803AE164u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_164A = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_164A);
        r4 = static_cast<uint32_t>(regargs_result_80142444_164A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r4 + 776));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r23 = (r25 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r23 + 8820), r0);
    MemoryInline::FlatWrite32((r23 + 8828), r28);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite16((r23 + 8826), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r23 + 8832), r30);
    r0 = MemoryInline::FlatRead8((r27 + 2));
}

loc_803AE1AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE204;
    }
}

loc_803AE1B0:
{
    r3 = MemoryInline::FlatRead8(r27);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r5 = MemoryInline::FlatRead8((r5 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE1CCu;
    if constexpr (KnownRegArgsCpuCall<0x801436B8u>(&func_801436B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_801436B8_1F37 = func_801436B8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801436B8_1F37);
        r4 = static_cast<uint32_t>(regargs_result_801436B8_1F37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801436B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    r26 = r3;
}

loc_803AE1D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AE1F8;
    }
}

loc_803AE1D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r31 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    goto loc_803AE2C4;
}

loc_803AE1F8:
{
    r22 = MemoryInline::FlatRead32((r3 + 48));
    MemoryInline::FlatWrite32((r23 + 8832), r3);
    goto loc_803AE24C;
}

loc_803AE204:
{
    r3 = MemoryInline::FlatRead8(r27);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r5 = MemoryInline::FlatRead8((r5 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE220u;
    if constexpr (KnownRegArgsCpuCall<0x80142C24u>(&func_80142C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80142C24_26B8 = func_80142C24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142C24_26B8);
        r4 = static_cast<uint32_t>(regargs_result_80142C24_26B8 >> 32);
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
        InvokeDirectCpu<0x80142C24u>(ctx);
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
    r22 = r3;
}

loc_803AE228:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AE24C;
    }
}

loc_803AE22C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r31 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    goto loc_803AE2C4;
}

loc_803AE24C:
{
    r3 = MemoryInline::FlatRead8(r27);
    ctx->lr = 0x803AE254u;
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
    InvokeDirectCpu<0x803ADFE8u>(ctx);
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
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803AE25C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_803AE280;
    }
}

loc_803AE260:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
}

loc_803AE268:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE278;
    }
}

loc_803AE26C:
{
    r3 = r26;
    // inline leaf 0x80137670 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137670
    goto loc_803AE280;
}

loc_803AE278:
{
    r3 = r22;
    // inline leaf 0x80137668 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137668
}

loc_803AE280:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r4 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 776), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x803AE298u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_35A3 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_35A3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AE29C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803AE470;
    }
}

loc_803AE2A0:
{
    r3 = 0;
    ctx->lr = 0x803AE2A8u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_38C3 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_38C3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AE2AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AE2C4;
    }
}

loc_803AE2B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE2C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803AE470;
    }
}

loc_803AE2C4:
{
    r29 = (r29 + 1);
    r28 = (r28 + 48);
    r27 = (r27 + 8);
}

loc_803AE2D4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_803AE0D4;
    }
}

loc_803AE2D8:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r4 + 26464));
}

loc_803AE2E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE470;
    }
}

loc_803AE2E8:
{
    r0 = MemoryInline::FlatRead8((r4 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE2F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_803AE470;
    }
}

loc_803AE2F8:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_803AE30C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803AE314;
    }
}

loc_803AE310:
{
    goto loc_803AE470;
}

loc_803AE314:
{
    r0 = (r24 & 255);
    goto loc_803AE328;
}

loc_803AE31C:
{
}

loc_803AE320:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE334;
    }
}

loc_803AE324:
{
    r5 = (r5 + 8);
}

loc_803AE328:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_803AE330:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_803AE31C;
    }
}

loc_803AE334:
{
}

loc_803AE338:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_803AE470;
    }
}

loc_803AE33C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 26465));
    r0 = (r0 * 48);
    r30 = (r3 + r0);
    r3 = (r1 + 8);
    r4 = (r30 + 8);
    ctx->lr = 0x803AE358u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_4443 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_4443);
        r4 = static_cast<uint32_t>(regargs_result_80142444_4443 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 3;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r3 + 26468));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r3 + 26469));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r3 + 26470));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r3 + 26471));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r5 + 26464));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r5 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE3F4u;
    if constexpr (KnownRegArgsCpuCall<0x801436B8u>(&func_801436B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_801436B8_4F40 = func_801436B8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801436B8_4F40);
        r4 = static_cast<uint32_t>(regargs_result_801436B8_4F40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801436B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_803AE3F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AE420;
    }
}

loc_803AE3FC:
{
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = 65536;
    r4 = (r3 + -1);
    r0 = MemoryInline::FlatRead8((r5 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    goto loc_803AE470;
}

loc_803AE420:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r25 + 8868), r0);
    MemoryInline::FlatWrite32((r25 + 8876), r30);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r25 + 8872), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 26464));
    MemoryInline::FlatWrite16((r25 + 8874), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 8880), r0);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r4 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 776), static_cast<uint8_t>(r0));
}

loc_803AE470:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

extern "C" void func_803AE094(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AE094_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AE094 func_803AE094 preserves=true fpr_mask=0x00000000
