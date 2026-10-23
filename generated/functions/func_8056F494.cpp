#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052B410(CpuContext* ctx);
extern "C" uint64_t func_8052B410_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80533B04(CpuContext* ctx);
extern "C" uint64_t func_80533B04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8056F2F4(CpuContext* ctx);
extern "C" uint64_t func_8056F2F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056F3B0(CpuContext* ctx);
extern "C" uint64_t func_8056F3B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8056F494_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8056F494;

loc_8056F494:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
}

loc_8056F4AC:
{
    r27 = r3;
    r28 = r4;
    r29 = r5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8056F4CC;
    }
}

loc_8056F4BC:
{
    r4 = (r4 + 188);
    ctx->lr = 0x8056F4C4u;
    if constexpr (KnownRegArgsCpuCall<0x8056F2F4u>(&func_8056F2F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8056F2F4_C09 = func_8056F2F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056F2F4_C09);
        r4 = static_cast<uint32_t>(regargs_result_8056F2F4_C09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8056F2F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r20 = r3;
    goto loc_8056F55C;
}

loc_8056F4CC:
{
    r4 = (r4 + 188);
    ctx->lr = 0x8056F4D4u;
    if constexpr (KnownRegArgsCpuCall<0x8056F2F4u>(&func_8056F2F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8056F2F4_FF2 = func_8056F2F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056F2F4_FF2);
        r4 = static_cast<uint32_t>(regargs_result_8056F2F4_FF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8056F2F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r26 = MemoryInline::FlatRead32((r28 + 20));
    r20 = r3;
    r30 = (r28 + 20);
    goto loc_8056F554;
}

loc_8056F4E4:
{
    r3 = r27;
    r4 = (r26 + 184);
    ctx->lr = 0x8056F4F0u;
    if constexpr (KnownRegArgsCpuCall<0x8056F2F4u>(&func_8056F2F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8056F2F4_1433 = func_8056F2F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056F2F4_1433);
        r4 = static_cast<uint32_t>(regargs_result_8056F2F4_1433 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8056F2F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r31 = MemoryInline::FlatRead32((r26 + 16));
    r21 = r3;
    r25 = (r26 + 16);
    goto loc_8056F544;
}

loc_8056F500:
{
    r3 = r27;
    r4 = (r31 + 184);
    ctx->lr = 0x8056F50Cu;
    if constexpr (KnownRegArgsCpuCall<0x8056F2F4u>(&func_8056F2F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8056F2F4_1877 = func_8056F2F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056F2F4_1877);
        r4 = static_cast<uint32_t>(regargs_result_8056F2F4_1877 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8056F2F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r24 = MemoryInline::FlatRead32((r31 + 16));
    r22 = r3;
    r23 = (r31 + 16);
    goto loc_8056F534;
}

loc_8056F51C:
{
    r3 = r27;
    r4 = (r24 + -4);
    r5 = 1;
    ctx->lr = 0x8056F52Cu;
    if constexpr (KnownRegArgsCpuCall<0x8056F3B0u>(&func_8056F3B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8056F3B0_1CC7 = func_8056F3B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8056F3B0_1CC7);
        r4 = static_cast<uint32_t>(regargs_result_8056F3B0_1CC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8056F3B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r22 = (r22 + r3);
    r24 = MemoryInline::FlatRead32(r24);
}

loc_8056F534:
{
}

loc_8056F538:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r23))) {
        goto loc_8056F51C;
    }
}

loc_8056F53C:
{
    r21 = (r21 + r22);
    r31 = MemoryInline::FlatRead32(r31);
}

loc_8056F544:
{
}

loc_8056F548:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r25))) {
        goto loc_8056F500;
    }
}

loc_8056F54C:
{
    r20 = (r20 + r21);
    r26 = MemoryInline::FlatRead32(r26);
}

loc_8056F554:
{
}

loc_8056F558:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r30))) {
        goto loc_8056F4E4;
    }
}

loc_8056F55C:
{
    r21_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(4));
    r21 = (r21_rot_0 & -16);
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4 = r21;
    ctx->lr = 0x8056F56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r27 + 24), r3);
    r5 = r21;
    r4 = 0;
    MemoryInline::FlatWrite16((r27 + 28), static_cast<uint16_t>(r20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0;
    r3 = 0;
    goto loc_8056F5B4;
}

loc_8056F58C:
{
    r4 = MemoryInline::FlatRead32((r27 + 24));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r4 = (r4 + r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8056F5B0;
    }
}

loc_8056F59C:
{
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 14), static_cast<uint8_t>(r3));
}

loc_8056F5B0:
{
    r5 = (r5 + 1);
}

loc_8056F5B4:
{
    r0 = (r5 & 65535);
}

loc_8056F5BC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r20))) {
        goto loc_8056F58C;
    }
}

loc_8056F5C0:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r26 = 0;
    r30 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r31 = (r3 + r0);
    goto loc_8056F678;
}

loc_8056F5D8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_2);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 21));
}

loc_8056F5EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056F634;
    }
}

loc_8056F5F0:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r5 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8056F608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8056F60C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F674;
    }
}

loc_8056F610:
{
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r4 = (r0 + r26);
    MemoryInline::FlatWrite32((r4 + 8), r27);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r4 = (r0 + r26);
    ctx->lr = 0x8056F62Cu;
    if constexpr (KnownRegArgsCpuCall<0x8052B410u>(&func_8052B410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052B410_3433 = func_8052B410_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8052B410_3433);
        r4 = static_cast<uint32_t>(regargs_result_8052B410_3433 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052B410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = (r26 + 16);
    goto loc_8056F674;
}

loc_8056F634:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r5 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8056F64Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8056F650:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F674;
    }
}

loc_8056F654:
{
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r4 = (r0 + r26);
    MemoryInline::FlatWrite32((r4 + 8), r27);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r4 = (r0 + r26);
    ctx->lr = 0x8056F670u;
    if constexpr (KnownRegArgsCpuCall<0x80533B04u>(&func_80533B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80533B04_3CDD = func_80533B04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80533B04_3CDD);
        r4 = static_cast<uint32_t>(regargs_result_80533B04_3CDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80533B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = (r26 + 16);
}

loc_8056F674:
{
    r30 = (r30 + 1);
}

loc_8056F678:
{
    r4 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r30 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 14));
}

loc_8056F688:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8056F5D8;
    }
}

loc_8056F68C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056F494(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056F494_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056F494 func_8056F494 preserves=true fpr_mask=0x00000000
