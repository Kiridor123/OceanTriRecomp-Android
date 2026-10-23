#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047AC10(CpuContext* ctx);
extern "C" uint64_t func_8047AC10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047B230(CpuContext* ctx);
extern "C" uint64_t func_8047B230_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80483128(CpuContext* ctx);
extern "C" uint64_t func_80483128_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80483300(CpuContext* ctx);
extern "C" uint64_t func_80483300_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8048AF50(CpuContext* ctx);
extern "C" uint64_t func_8048AF50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048DD74(CpuContext* ctx);
extern "C" uint64_t func_8048DD74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048F168(CpuContext* ctx);
extern "C" uint64_t func_8048F168_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048F6DC(CpuContext* ctx);
extern "C" uint64_t func_8048F6DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048A1DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8048A1DC;

loc_8048A1DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    ctx->lr = 0x8048A204u;
    if constexpr (KnownRegArgsCpuCall<0x80483300u>(&func_80483300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80483300_E95 = func_80483300_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80483300_E95);
        r4 = static_cast<uint32_t>(regargs_result_80483300_E95 >> 32);
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
        InvokeDirectCpu<0x80483300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = 0x80740000u;
    r31 = r3;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead8((r4 + 10176));
}

loc_8048A218:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8048A23C;
    }
}

loc_8048A21C:
{
    r3 = 851968;
    r4 = 0x80610000u;
    r5 = r28;
    r6 = r29;
    r7 = r30;
    r3 = (r3 + 3);
    r4 = (r4 + 22164);
    ctx->lr = 0x8048A23Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047AC10u>(&func_8047AC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047AC10_1467 = func_8047AC10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC10_1467);
        r4 = static_cast<uint32_t>(regargs_result_8047AC10_1467 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8047AC10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8048A23C:
{
}

loc_8048A240:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8048A268;
    }
}

loc_8048A244:
{
}

loc_8048A248:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8048A644;
    }
}

loc_8048A24C:
{
    r3 = r27;
    ctx->lr = 0x8048A254u;
    if constexpr (KnownRegArgsCpuCall<0x80483128u>(&func_80483128)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80483128_1DB7 = func_80483128_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80483128_1DB7);
        r4 = static_cast<uint32_t>(regargs_result_80483128_1DB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x80483128u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8048A258:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8048A288;
    }
}

loc_8048A260:
{
    goto loc_8048A644;
}

loc_8048A268:
{
    r4 = 0x80740000u;
    r0 = 1;
    r4 = (r4 + -17608);
    r3 = MemoryInline::FlatRead32((r4 + 6516));
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 6516), r3);
    MemoryInline::FlatWrite8((r31 + 133), static_cast<uint8_t>(r0));
}

loc_8048A288:
{
    r0 = MemoryInline::FlatRead8((r31 + 129));
    r0 = (r0 & 64);
}

loc_8048A290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A320;
    }
}

loc_8048A294:
{
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead8((r4 + 6523));
}

loc_8048A2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A2FC;
    }
}

loc_8048A2A8:
{
    r0 = MemoryInline::FlatRead8((r4 + 10176));
    r3 = 0;
    MemoryInline::FlatWriteRam8((r4 + 6523), static_cast<uint8_t>(r3));
}

loc_8048A2B8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(5))) {
        goto loc_8048A2E0;
    }
}

loc_8048A2BC:
{
    r3 = MemoryInline::FlatRead8((r4 + 6520));
    r4 = 0x80610000u;
    r5 = 851968;
    r0 = (r3 + -3);
    r4 = (r4 + 21228);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = (r5 + 4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    ctx->lr = 0x8048A2E0u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_2BFD = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_2BFD);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_2BFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8048A2E0:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = MemoryInline::FlatRead8((r3 + 6520));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
    ctx->lr = 0x8048A2FCu;
    if constexpr (KnownRegArgsCpuCall<0x8048F6DCu>(&func_8048F6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8048F6DC_3535 = func_8048F6DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048F6DC_3535);
        r4 = static_cast<uint32_t>(regargs_result_8048F6DC_3535 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8048F6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8048A2FC:
{
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead8((r4 + 6524));
}

loc_8048A30C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A320;
    }
}

loc_8048A310:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead8((r4 + 32));
    MemoryInline::FlatWriteRam8((r4 + 6524), static_cast<uint8_t>(r0));
    ctx->lr = 0x8048A320u;
    if constexpr (KnownRegArgsCpuCall<0x8048F168u>(&func_8048F168)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8048F168_3EC5 = func_8048F168_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048F168_3EC5);
        r4 = static_cast<uint32_t>(regargs_result_8048F168_3EC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8048F168u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8048A320:
{
}

loc_8048A324:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8048A490;
    }
}

loc_8048A328:
{
}

loc_8048A32C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(5))) {
        goto loc_8048A37C;
    }
}

loc_8048A330:
{
}

loc_8048A334:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(6))) {
        goto loc_8048A37C;
    }
}

loc_8048A338:
{
}

loc_8048A33C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(14))) {
        goto loc_8048A37C;
    }
}

loc_8048A340:
{
}

loc_8048A344:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(24))) {
        goto loc_8048A37C;
    }
}

loc_8048A348:
{
}

loc_8048A34C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(38))) {
        goto loc_8048A37C;
    }
}

loc_8048A350:
{
}

loc_8048A354:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(41))) {
        goto loc_8048A37C;
    }
}

loc_8048A358:
{
}

loc_8048A35C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(37))) {
        goto loc_8048A37C;
    }
}

loc_8048A360:
{
}

loc_8048A364:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(23))) {
        goto loc_8048A37C;
    }
}

loc_8048A368:
{
}

loc_8048A36C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(34))) {
        goto loc_8048A37C;
    }
}

loc_8048A370:
{
    r0 = MemoryInline::FlatRead8((r31 + 129));
    r0 = (r0 & 64);
}

loc_8048A378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A408;
    }
}

loc_8048A37C:
{
    r3 = MemoryInline::FlatRead8((r31 + 129));
    r0 = -81;
    r28 = 0x80740000u;
    r0 = (r3 & r0);
    MemoryInline::FlatWrite8((r31 + 129), static_cast<uint8_t>(r0));
    r28 = (r28 + -17608);
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r31 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 6476));
}

loc_8048A3A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A3C0;
    }
}

loc_8048A3AC:
{
    r3 = (r28 + 6460);
    if constexpr (KnownRegArgsCpuCall<0x8047B230u>(&func_8047B230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B230_4F43 = func_8047B230_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B230_4F43);
        r4 = static_cast<uint32_t>(regargs_result_8047B230_4F43 >> 32);
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
        InvokeDirectCpu<0x8047B230u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = 0;
    r29 = 14;
    MemoryInline::FlatWriteRam32((r28 + 6476), r0);
}

loc_8048A3C0:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r0 = MemoryInline::FlatRead8((r3 + 10175));
}

loc_8048A3D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_8048A3D8;
    }
}

loc_8048A3D4:
{
    r29 = 14;
}

loc_8048A3D8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r12 = MemoryInline::FlatRead32((r3 + 6428));
}

loc_8048A3E8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8048A644;
    }
}

loc_8048A3EC:
{
    r6 = r29;
    r3 = (r31 + 28);
    r4 = (r31 + 34);
    r5 = (r31 + 53);
    ctr = r12;
    ctx->lr = 0x8048A404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_8048A644;
}

loc_8048A408:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8048A410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A644;
    }
}

loc_8048A414:
{
    r0 = MemoryInline::FlatRead8((r31 + 128));
}

loc_8048A41C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A440;
    }
}

loc_8048A420:
{
    r3 = MemoryInline::FlatRead32(r31);
}

loc_8048A428:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8048A440;
    }
}

loc_8048A42C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8048A434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8048A440;
    }
}

loc_8048A438:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8048A440:
{
}

loc_8048A444:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(8))) {
        goto loc_8048A458;
    }
}

loc_8048A448:
{
}

loc_8048A44C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(31))) {
        goto loc_8048A458;
    }
}

loc_8048A450:
{
}

loc_8048A454:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(4))) {
        goto loc_8048A474;
    }
}

loc_8048A458:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r31 + 28);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r5 = 8;
    ctr = r12;
    ctx->lr = 0x8048A470u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_8048A644;
}

loc_8048A474:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r31 + 28);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r5 = 10;
    ctr = r12;
    ctx->lr = 0x8048A48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_8048A644;
}

loc_8048A490:
{
    r0 = MemoryInline::FlatRead8((r31 + 129));
    r0 = (r0 & 64);
}

loc_8048A498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A570;
    }
}

loc_8048A49C:
{
    r0 = MemoryInline::FlatRead8((r31 + 130));
}

loc_8048A4A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A570;
    }
}

loc_8048A4A8:
{
    r0 = 0;
    r3 = 0x80740000u;
    MemoryInline::FlatWrite8((r31 + 130), static_cast<uint8_t>(r0));
    r3 = (r3 + -17608);
    r12 = MemoryInline::FlatRead32((r3 + 6420));
}

loc_8048A4C0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8048A4E0;
    }
}

loc_8048A4C4:
{
    r3 = (r31 + 28);
    r4 = (r31 + 34);
    r5 = (r31 + 53);
    r6 = (r31 + 37);
    r7 = MemoryInline::FlatRead8((r31 + 131));
    ctr = r12;
    ctx->lr = 0x8048A4E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_8048A4E0:
{
    r29 = 0x80740000u;
    r30 = 0;
    r29 = (r29 + -17608);
}

loc_8048A4EC:
{
    r12 = MemoryInline::FlatRead32((r29 + 6436));
}

loc_8048A4F4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8048A514;
    }
}

loc_8048A4F8:
{
    r3 = (r31 + 28);
    r4 = (r31 + 34);
    r5 = (r31 + 53);
    r6 = (r31 + 37);
    r7 = MemoryInline::FlatRead8((r31 + 131));
    ctr = r12;
    ctx->lr = 0x8048A514u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_8048A514:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
}

loc_8048A520:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_8048A4EC;
    }
}

loc_8048A524:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r12 = MemoryInline::FlatRead32((r3 + 6428));
}

loc_8048A534:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8048A550;
    }
}

loc_8048A538:
{
    r3 = (r31 + 28);
    r4 = (r31 + 34);
    r5 = (r31 + 53);
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x8048A550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_8048A550:
{
    r5 = MemoryInline::FlatRead8((r31 + 129));
    r0 = -81;
    r3 = r28;
    r4 = 19;
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r31 + 129), static_cast<uint8_t>(r0));
    ctx->lr = 0x8048A56Cu;
    if constexpr (KnownRegArgsCpuCall<0x8048DD74u>(&func_8048DD74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8048DD74_7955 = func_8048DD74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048DD74_7955);
        r4 = static_cast<uint32_t>(regargs_result_8048DD74_7955 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8048DD74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_8048A644;
}

loc_8048A570:
{
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r28));
}

loc_8048A578:
{
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (r0 & 248);
    MemoryInline::FlatWrite8((r31 + 118), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8048A594;
    }
}

loc_8048A588:
{
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (r0 | 6);
    MemoryInline::FlatWrite8((r31 + 118), static_cast<uint8_t>(r0));
}

loc_8048A594:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r0 = MemoryInline::FlatRead8((r3 + 6520));
}

loc_8048A5A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8048A5B4;
    }
}

loc_8048A5A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 118), static_cast<uint8_t>(r0));
}

loc_8048A5B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (r0 & 8);
}

loc_8048A5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A5D4;
    }
}

loc_8048A5C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 128));
}

loc_8048A5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A644;
    }
}

loc_8048A5D4:
{
    r3 = r31;
    ctx->lr = 0x8048A5DCu;
    if constexpr (KnownRegArgsCpuCall<0x8048AF50u>(&func_8048AF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8048AF50_8721 = func_8048AF50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048AF50_8721);
        r4 = static_cast<uint32_t>(regargs_result_8048AF50_8721 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8048AF50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = (r3 & 255);
    r4 = r3;
}

loc_8048A5E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8048A644;
    }
}

loc_8048A5EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8048A5F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A644;
    }
}

loc_8048A5F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 128));
}

loc_8048A600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048A624;
    }
}

loc_8048A604:
{
    r3 = MemoryInline::FlatRead32(r31);
}

loc_8048A60C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8048A624;
    }
}

loc_8048A610:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8048A618:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8048A624;
    }
}

loc_8048A61C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8048A624:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r4 & 255);
    r3 = (r31 + 28);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    ctr = r12;
    ctx->lr = 0x8048A63Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_8048A644:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8048A1DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048A1DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048A1DC func_8048A1DC preserves=true fpr_mask=0x00000000
