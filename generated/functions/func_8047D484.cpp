#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047B278(CpuContext* ctx);
extern "C" uint32_t func_8047B278_ra58_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B70C(CpuContext* ctx);
extern "C" uint64_t func_8047B70C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B72C(CpuContext* ctx);
extern "C" uint64_t func_8047B72C_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8047CB80(CpuContext* ctx);
extern "C" uint64_t func_8047CB80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048201C(CpuContext* ctx);
extern "C" uint64_t func_8048201C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8047D484_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8047D484;

loc_8047D484:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r31 = (r3 + 11);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8047D4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047D568;
    }
}

loc_8047D4AC:
{
    r3 = 0x80740000u;
    r29 = 0;
    r30 = (r3 + -18476);
    goto loc_8047D4DC;
}

loc_8047D4BC:
{
    r0 = (r29 & 255);
    r4 = r31;
    r0 = (r0 * 11);
    r3 = (r30 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_B15 = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_B15;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047D4D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047D4EC;
    }
}

loc_8047D4D8:
{
    r29 = (r29 + 1);
}

loc_8047D4DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 77));
    r3 = (r29 & 255);
}

loc_8047D4E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047D4BC;
    }
}

loc_8047D4EC:
{
    r30 = 0x80740000u;
    r0 = (r29 & 255);
    r30 = (r30 + -18476);
    r3 = MemoryInline::FlatRead8((r30 + 77));
}

loc_8047D500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8047D520;
    }
}

loc_8047D504:
{
    r0 = (r3 * 11);
    r4 = r31;
    r3 = (r30 + r0);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = MemoryInline::FlatRead8((r30 + 77));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 77), static_cast<uint8_t>(r0));
}

loc_8047D520:
{
    r0 = (r29 & 255);
    r30 = 0x80740000u;
    r4 = (r0 * 11);
    r3 = 1;
    r30 = (r30 + -18476);
    r0 = 0;
    r5 = (r30 + r4);
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    r4 = r31;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r0));
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r12 = MemoryInline::FlatRead32((r30 + 80));
    r4 = (r1 + 8);
    r3 = 5;
    ctr = r12;
    ctx->lr = 0x8047D564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    goto loc_8047D6E8;
}

loc_8047D568:
{
    r3 = 0x80740000u;
    r29 = 0;
    r30 = (r3 + -18476);
    goto loc_8047D5DC;
}

loc_8047D578:
{
    r0 = (r29 & 255);
    r4 = r31;
    r0 = (r0 * 11);
    r3 = (r30 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_1D6E = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_1D6E;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047D590:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047D5D8;
    }
}

loc_8047D594:
{
    r3 = 0x80740000u;
    r30 = (r3 + -18476);
    goto loc_8047D5C4;
}

loc_8047D5A0:
{
    r3 = (r29 & 255);
    r5 = 11;
    r0 = (r3 + 1);
    r3 = (r3 * 11);
    r0 = (r0 * 11);
    r3 = (r30 + r3);
    r4 = (r30 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r29 = (r29 + 1);
}

loc_8047D5C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 77));
    r3 = (r29 & 255);
}

loc_8047D5D0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047D5A0;
    }
}

loc_8047D5D4:
{
    goto loc_8047D5EC;
}

loc_8047D5D8:
{
    r29 = (r29 + 1);
}

loc_8047D5DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 77));
    r3 = (r29 & 255);
}

loc_8047D5E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047D578;
    }
}

loc_8047D5EC:
{
    r4 = 0x80740000u;
    r30 = 0x80740000u;
    r4 = (r4 + -18476);
    r30 = (r30 + -18600);
    r3 = MemoryInline::FlatRead8((r4 + 77));
    r0 = MemoryInline::FlatRead8((r30 + 120));
    r3 = (r3 + -1);
}

loc_8047D60C:
{
    MemoryInline::FlatWriteRam8((r4 + 77), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047D66C;
    }
}

loc_8047D614:
{
    r4 = r31;
    r3 = (r30 + 26);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_2661 = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_2661;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047D624:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047D66C;
    }
}

loc_8047D628:
{
    r0 = MemoryInline::FlatRead8((r30 + 121));
    r3 = 0;
    MemoryInline::FlatWriteRam8((r30 + 120), static_cast<uint8_t>(r3));
}

loc_8047D638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047D66C;
    }
}

loc_8047D63C:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
}

loc_8047D644:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8047D658;
    }
}

loc_8047D648:
{
    r4 = 0x80610000u;
    r3 = 1283;
    r4 = (r4 + 14408);
    ctx->lr = 0x8047D658u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_2C78 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2C78);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2C78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_8047D658:
{
    r3 = 0x80740000u;
    r3 = (r3 + -18600);
    r3 = (r3 + 64);
    ctx->lr = 0x8047D668u;
    if constexpr (KnownRegArgsCpuCall<0x8047B72Cu>(&func_8047B72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B72C_34B3 = func_8047B72C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B72C_34B3);
        r4 = static_cast<uint32_t>(regargs_result_8047B72C_34B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8047B72Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x8047D66Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047CB80u>(&func_8047CB80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047CB80_38C6 = func_8047CB80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047CB80_38C6);
        r4 = static_cast<uint32_t>(regargs_result_8047CB80_38C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x8047CB80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_8047D66C:
{
    r30 = 0x80740000u;
    r30 = (r30 + -18476);
    r0 = MemoryInline::FlatRead8((r30 + 114));
}

loc_8047D67C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047D6B8;
    }
}

loc_8047D680:
{
    if constexpr (KnownRegArgsCpuCall<0x8048201Cu>(&func_8048201C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8048201C_417B = func_8048201C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8048201C_417B);
        r4 = static_cast<uint32_t>(regargs_result_8048201C_417B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8048201Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_8047D688:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047D6B8;
    }
}

loc_8047D68C:
{
    r0 = 0;
    r3 = (r30 + 116);
    MemoryInline::FlatWriteRam8((r30 + 114), static_cast<uint8_t>(r0));
    ctx->lr = 0x8047D69Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047B72Cu>(&func_8047B72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B72C_4547 = func_8047B72C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B72C_4547);
        r4 = static_cast<uint32_t>(regargs_result_8047B72C_4547 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8047B72Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r5 = 0x80480000u;
    r3 = (r30 + 116);
    r5 = (r5 + -10492);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r30 + 124), r5);
    r5 = 1000;
    ctx->lr = 0x8047D6B8u;
    if constexpr (KnownRegArgsCpuCall<0x8047B70Cu>(&func_8047B70C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8047B70C_4986 = func_8047B70C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8047B70C_4986);
        r4 = static_cast<uint32_t>(regargs_result_8047B70C_4986 >> 32);
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
        InvokeDirectCpu<0x8047B70Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047D6B8:
{
    r4 = r31;
    r3 = (r1 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    // inline leaf 0x80482078 (4 guest instruction(s))
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = MemoryInline::FlatRead8((r3 + 10175));
    // end of inlined leaf 0x80482078
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    r5 = (r5 + -18476);
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r5 + 80));
    r3 = 6;
    ctr = r12;
    ctx->lr = 0x8047D6E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8047D6E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_8047D484(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047D484_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047D484 func_8047D484 preserves=true fpr_mask=0x00000000
