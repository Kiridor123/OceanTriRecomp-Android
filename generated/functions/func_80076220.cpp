#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A980(CpuContext* ctx);
extern "C" uint64_t func_8005A980_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F188(CpuContext* ctx);
extern "C" uint64_t func_8006F188_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F2C8(CpuContext* ctx);
extern "C" uint64_t func_8006F2C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F3A4(CpuContext* ctx);
extern "C" uint64_t func_8006F3A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F44C(CpuContext* ctx);
extern "C" uint64_t func_8006F44C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F4EC(CpuContext* ctx);
extern "C" uint64_t func_8006F4EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800766A0(CpuContext* ctx);
extern "C" uint32_t func_800766A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80076700(CpuContext* ctx);
extern "C" uint64_t func_80076700_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800767C8(CpuContext* ctx);
extern "C" uint64_t func_800767C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007688C(CpuContext* ctx);
extern "C" uint64_t func_8007688C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076968(CpuContext* ctx);
extern "C" uint32_t func_80076968_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800769A4(CpuContext* ctx);
extern "C" uint64_t func_800769A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800769EC(CpuContext* ctx);
extern "C" uint64_t func_800769EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8008529C(CpuContext* ctx);
extern "C" uint64_t func_8008529C_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80085E58(CpuContext* ctx);
extern "C" uint64_t func_80085E58_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80086054(CpuContext* ctx);
extern "C" uint64_t func_80086054_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8009592C(CpuContext* ctx);
extern "C" uint64_t func_8009592C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800975B0(CpuContext* ctx);
extern "C" uint64_t func_800975B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80076220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
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
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_80076220;

loc_80076220:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    r30 = r3;
    r28 = r4;
    r31 = r5;
    r29 = r6;
}

loc_80076250:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80076620;
    }
}

loc_80076254:
{
    r3 = (r1 + 140);
    r4 = 0;
    ctx->lr = 0x80076260u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769EC_1534 = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_1534);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_1534 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80076264:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076278;
    }
}

loc_80076268:
{
    r3 = (r31 + 36);
    // inline leaf 0x800769D8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800769D8
}

loc_80076274:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80076294;
    }
}

loc_80076278:
{
    r3 = r30;
    ctx->lr = 0x80076280u;
    if constexpr (KnownRegArgsCpuCall<0x800769A4u>(&func_800769A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800769A4_1AFA = func_800769A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769A4_1AFA);
        r4 = static_cast<uint32_t>(regargs_result_800769A4_1AFA >> 32);
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
        InvokeDirectCpu<0x800769A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    r3 = (r1 + 140);
    r4 = (r1 + 112);
    ctx->lr = 0x80076290u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_1F1F = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_1F1F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800762A0;
}

loc_80076294:
{
    r3 = (r1 + 140);
    r4 = (r31 + 36);
    ctx->lr = 0x800762A0u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_21CD = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_21CD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800762A0:
{
    r3 = (r1 + 140);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800959A4u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800881F0u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r3 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80085DB0u>(ctx);
}

loc_800762C0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800762D4;
    }
}

loc_800762C4:
{
    r3 = (r31 + 4);
    // inline leaf 0x80076954 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80076954
}

loc_800762D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800762EC;
    }
}

loc_800762D4:
{
    r3 = r30;
    ctx->lr = 0x800762DCu;
    if constexpr (KnownRegArgsCpuCall<0x8006F44Cu>(&func_8006F44C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F44C_2880 = func_8006F44C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F44C_2880);
        r4 = static_cast<uint32_t>(regargs_result_8006F44C_2880 >> 32);
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
        InvokeDirectCpu<0x8006F44Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    r3 = (r1 + 104);
    ctx->lr = 0x800762E8u;
    if constexpr (KnownRegArgsCpuCall<0x80086054u>(&func_80086054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80086054_2D31 = func_80086054_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80086054_2D31);
        r4 = static_cast<uint32_t>(regargs_result_80086054_2D31 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80086054u>(ctx);
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
    goto loc_800762FC;
}

loc_800762EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r3 = (r1 + 100);
    ctx->lr = 0x800762FCu;
    if constexpr (KnownRegArgsCpuCall<0x80086054u>(&func_80086054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80086054_3566 = func_80086054_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80086054_3566);
        r4 = static_cast<uint32_t>(regargs_result_80086054_3566 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80086054u>(ctx);
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

loc_800762FC:
{
}

loc_80076300:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076314;
    }
}

loc_80076304:
{
    r3 = r31;
    // inline leaf 0x80076940 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x80076940
}

loc_80076310:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007632C;
    }
}

loc_80076314:
{
    r3 = r30;
    ctx->lr = 0x8007631Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F4ECu>(&func_8006F4EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F4EC_3F04 = func_8006F4EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F4EC_3F04);
        r4 = static_cast<uint32_t>(regargs_result_8006F4EC_3F04 >> 32);
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
        InvokeDirectCpu<0x8006F4ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    r3 = (r1 + 96);
    ctx->lr = 0x80076328u;
    if constexpr (KnownRegArgsCpuCall<0x80085E58u>(&func_80085E58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80085E58_43B3 = func_80085E58_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80085E58_43B3);
        r4 = static_cast<uint32_t>(regargs_result_80085E58_43B3 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80085E58u>(ctx);
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
    goto loc_8007633C;
}

loc_8007632C:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r3 = (r1 + 92);
    ctx->lr = 0x8007633Cu;
    if constexpr (KnownRegArgsCpuCall<0x80085E58u>(&func_80085E58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80085E58_4BE0 = func_80085E58_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80085E58_4BE0);
        r4 = static_cast<uint32_t>(regargs_result_80085E58_4BE0 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80085E58u>(ctx);
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

loc_8007633C:
{
}

loc_80076340:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076354;
    }
}

loc_80076344:
{
    r3 = (r31 + 8);
    // inline leaf 0x8007692C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8007692C
}

loc_80076350:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007636C;
    }
}

loc_80076354:
{
    r3 = r30;
    ctx->lr = 0x8007635Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007688Cu>(&func_8007688C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8007688C_5586 = func_8007688C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007688C_5586);
        r4 = static_cast<uint32_t>(regargs_result_8007688C_5586 >> 32);
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
        InvokeDirectCpu<0x8007688Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    r3 = (r1 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800861F8u>(ctx);
    goto loc_8007637C;
}

loc_8007636C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = (r1 + 84);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800861F8u>(ctx);
}

loc_8007637C:
{
}

loc_80076380:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076394;
    }
}

loc_80076384:
{
    r3 = (r31 + 12);
    // inline leaf 0x80076878 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x80076878
}

loc_80076390:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800763AC;
    }
}

loc_80076394:
{
    r3 = r30;
    ctx->lr = 0x8007639Cu;
    if constexpr (KnownRegArgsCpuCall<0x800975B0u>(&func_800975B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800975B0_5D9F = func_800975B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800975B0_5D9F);
        r4 = static_cast<uint32_t>(regargs_result_800975B0_5D9F >> 32);
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
        InvokeDirectCpu<0x800975B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800865CCu>(ctx);
    goto loc_800763BC;
}

loc_800763AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r3 = (r1 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800865CCu>(ctx);
}

loc_800763BC:
{
}

loc_800763C0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800763D4;
    }
}

loc_800763C4:
{
    r3 = (r31 + 16);
    // inline leaf 0x80076864 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x80076864
}

loc_800763D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800763EC;
    }
}

loc_800763D4:
{
    r3 = r30;
    ctx->lr = 0x800763DCu;
    if constexpr (KnownRegArgsCpuCall<0x800767C8u>(&func_800767C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800767C8_65B9 = func_800767C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767C8_65B9);
        r4 = static_cast<uint32_t>(regargs_result_800767C8_65B9 >> 32);
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
        InvokeDirectCpu<0x800767C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r3 = (r1 + 72);
    ctx->lr = 0x800763E8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800869E4u>(ctx);
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
    goto loc_800763FC;
}

loc_800763EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = (r1 + 68);
    ctx->lr = 0x800763FCu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800869E4u>(ctx);
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

loc_800763FC:
{
}

loc_80076400:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076414;
    }
}

loc_80076404:
{
    r3 = (r31 + 20);
    // inline leaf 0x800767B4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & 1);
    // end of inlined leaf 0x800767B4
}

loc_80076410:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007642C;
    }
}

loc_80076414:
{
    r3 = r30;
    ctx->lr = 0x8007641Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F188u>(&func_8006F188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F188_72E5 = func_8006F188_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F188_72E5);
        r4 = static_cast<uint32_t>(regargs_result_8006F188_72E5 >> 32);
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
        InvokeDirectCpu<0x8006F188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r3 = (r1 + 64);
    ctx->lr = 0x80076428u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80086A38u>(ctx);
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
    goto loc_8007643C;
}

loc_8007642C:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = (r1 + 60);
    ctx->lr = 0x8007643Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80086A38u>(ctx);
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

loc_8007643C:
{
}

loc_80076440:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076454;
    }
}

loc_80076444:
{
    r3 = (r31 + 24);
    // inline leaf 0x8006E718 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_22 & 1);
    // end of inlined leaf 0x8006E718
}

loc_80076450:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80076490;
    }
}

loc_80076454:
{
}

loc_80076458:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80076478;
    }
}

loc_8007645C:
{
    r3 = r30;
    ctx->lr = 0x80076464u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2C8u>(&func_8006F2C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F2C8_80A5 = func_8006F2C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2C8_80A5);
        r4 = static_cast<uint32_t>(regargs_result_8006F2C8_80A5 >> 32);
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
        InvokeDirectCpu<0x8006F2C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r1 + 56);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80086B0Cu>(ctx);
    goto loc_800764C0;
}

loc_80076478:
{
    r3 = r30;
    ctx->lr = 0x80076480u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2C8u>(&func_8006F2C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F2C8_85A2 = func_8006F2C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2C8_85A2);
        r4 = static_cast<uint32_t>(regargs_result_8006F2C8_85A2 >> 32);
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
        InvokeDirectCpu<0x8006F2C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r1 + 52);
    ctx->lr = 0x8007648Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80086A8Cu>(ctx);
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
    goto loc_800764C0;
}

loc_80076490:
{
}

loc_80076494:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800764B0;
    }
}

loc_80076498:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = (r1 + 48);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80086B0Cu>(ctx);
    goto loc_800764C0;
}

loc_800764B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r1 + 44);
    ctx->lr = 0x800764C0u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80086A8Cu>(ctx);
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

loc_800764C0:
{
    r3 = (r1 + 140);
    ctx->lr = 0x800764C8u;
    if constexpr (KnownRegArgsCpuCall<0x8009592Cu>(&func_8009592C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009592C_91F6 = func_8009592C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009592C_91F6);
        r4 = static_cast<uint32_t>(regargs_result_8009592C_91F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009592Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r1 + 136);
    r5 = (r1 + 132);
    r6 = (r1 + 128);
    r7 = (r1 + 124);
    r8 = (r1 + 116);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80088304u>(ctx);
    r0 = MemoryInline::FlatRead8((r1 + 116));
    MemoryInline::FlatWriteRam8((r1 + 120), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 117));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 118));
    MemoryInline::FlatWriteRam8((r1 + 122), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 119));
    MemoryInline::FlatWriteRam8((r1 + 123), static_cast<uint8_t>(r0));
}

loc_80076504:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80076518;
    }
}

loc_80076508:
{
    r3 = (r31 + 28);
    // inline leaf 0x80064884 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_25 & 1);
    // end of inlined leaf 0x80064884
}

loc_80076514:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80076560;
    }
}

loc_80076518:
{
    r3 = (r28 & 8);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = r30;
    ctx->lr = 0x80076538u;
    if constexpr (KnownRegArgsCpuCall<0x8005A980u>(&func_8005A980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8005A980_9BE4 = func_8005A980_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A980_9BE4);
        r4 = static_cast<uint32_t>(regargs_result_8005A980_9BE4 >> 32);
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
        InvokeDirectCpu<0x8005A980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r1 + 136));
    r5 = MemoryInline::FlatRead32((r1 + 132));
    r6 = MemoryInline::FlatRead32((r1 + 128));
    r7 = MemoryInline::FlatRead32((r1 + 124));
    r8 = (r1 + 36);
    r9 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80086B90u>(ctx);
    goto loc_8007659C;
}

loc_80076560:
{
    r3 = (r28 & 8);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r1 + 136));
    r5 = MemoryInline::FlatRead32((r1 + 132));
    r6 = MemoryInline::FlatRead32((r1 + 128));
    r7 = MemoryInline::FlatRead32((r1 + 124));
    r8 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80086B90u>(ctx);
}

loc_8007659C:
{
}

loc_800765A0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800765B4;
    }
}

loc_800765A4:
{
    r3 = (r31 + 32);
    // inline leaf 0x800767A0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_28 & 1);
    // end of inlined leaf 0x800767A0
}

loc_800765B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800765CC;
    }
}

loc_800765B4:
{
    r3 = r30;
    ctx->lr = 0x800765BCu;
    if constexpr (KnownRegArgsCpuCall<0x80076700u>(&func_80076700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80076700_A7DB = func_80076700_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076700_A7DB);
        r4 = static_cast<uint32_t>(regargs_result_80076700_A7DB >> 32);
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
        InvokeDirectCpu<0x80076700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x800765C8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087148u>(ctx);
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
    goto loc_800765DC;
}

loc_800765CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 20);
    ctx->lr = 0x800765DCu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087148u>(ctx);
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

loc_800765DC:
{
}

loc_800765E0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800765F4;
    }
}

loc_800765E4:
{
    r3 = (r31 + 40);
    // inline leaf 0x8006E388 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_31 & 1);
    // end of inlined leaf 0x8006E388
}

loc_800765F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007660C;
    }
}

loc_800765F4:
{
    r3 = r30;
    ctx->lr = 0x800765FCu;
    if constexpr (KnownRegArgsCpuCall<0x8006F3A4u>(&func_8006F3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F3A4_B507 = func_8006F3A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3A4_B507);
        r4 = static_cast<uint32_t>(regargs_result_8006F3A4_B507 >> 32);
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
        InvokeDirectCpu<0x8006F3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800871C0u>(ctx);
    goto loc_80076680;
}

loc_8007660C:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800871C0u>(ctx);
    goto loc_80076680;
}

loc_80076620:
{
}

loc_80076624:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80076680;
    }
}

loc_80076628:
{
}

loc_8007662C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80076640;
    }
}

loc_80076630:
{
    r3 = (r5 + 24);
    // inline leaf 0x8006E718 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_33 & 1);
    // end of inlined leaf 0x8006E718
}

loc_8007663C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007666C;
    }
}

loc_80076640:
{
    r3 = (r1 + 144);
    ctx->lr = 0x80076648u;
    if constexpr (KnownRegArgsCpuCall<0x800766A0u>(&func_800766A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800766A0_BD9B = func_800766A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800766A0_BD9B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800766A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r29;
    r4 = (r1 + 144);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80076660u;
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
    r3 = (r1 + 144);
    ctx->lr = 0x80076668u;
    if constexpr (KnownRegArgsCpuCall<0x8008529Cu>(&func_8008529C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008529C_C34B = func_8008529C_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8008529C_C34B);
        r4 = static_cast<uint32_t>(regargs_result_8008529C_C34B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008529Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    goto loc_80076680;
}

loc_8007666C:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80086B0Cu>(ctx);
}

loc_80076680:
{
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFE03FFF fpr_write=0xFFE03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80076220 func_80076220 preserves=true fpr_mask=0x00000000
