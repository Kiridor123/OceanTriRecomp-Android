#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D9F0C(CpuContext* ctx);
extern "C" uint64_t func_800D9F0C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DC468(CpuContext* ctx);
extern "C" uint64_t func_800DC468_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DC558(CpuContext* ctx);
extern "C" uint64_t func_800DC558_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800E308C(CpuContext* ctx);
extern "C" uint64_t func_800E308C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F8FC0(CpuContext* ctx);
extern "C" uint64_t func_800F8FC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80108A90(CpuContext* ctx);
extern "C" uint64_t func_80108A90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010A37C(CpuContext* ctx);
extern "C" uint64_t func_8010A37C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80108728_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_80108728;

loc_80108728:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r30 + 56));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r29 = 0;
    goto loc_80108794;
}

loc_80108764:
{
    r3 = 241;
    r4 = 29;
    r5 = 0;
    ctx->lr = 0x80108774u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_800F9218_D68 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_D68);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_D68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80108780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80108790;
    }
}

loc_80108784:
{
    r3 = r30;
    ctx->lr = 0x8010878Cu;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8010A37C_15F3 = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_15F3);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_15F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80108A08;
}

loc_80108790:
{
    r29 = (r29 + 1);
}

loc_80108794:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8010879C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80108764;
    }
}

loc_801087A0:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_801087A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(29))) {
        goto loc_801087E8;
    }
}

loc_801087AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 34;
    r5 = 336;
    r6 = 0;
    r7 = (r31 + 52);
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x801087CCu;
    if constexpr (KnownRegArgsCpuCall<0x800F8FC0u>(&func_800F8FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_800F8FC0_1FE5 = func_800F8FC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F8FC0_1FE5);
        r4 = static_cast<uint32_t>(regargs_result_800F8FC0_1FE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F8FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_801087D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80108824;
    }
}

loc_801087DC:
{
    r3 = r30;
    ctx->lr = 0x801087E4u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8010A37C_2875 = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_2875);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_2875 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80108A08;
}

loc_801087E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 34;
    r5 = 272;
    r6 = 0;
    r7 = (r31 + 52);
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x80108808u;
    if constexpr (KnownRegArgsCpuCall<0x800F8FC0u>(&func_800F8FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_800F8FC0_30BB = func_800F8FC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F8FC0_30BB);
        r4 = static_cast<uint32_t>(regargs_result_800F8FC0_30BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F8FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80108814:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80108824;
    }
}

loc_80108818:
{
    r3 = r30;
    ctx->lr = 0x80108820u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8010A37C_394B = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_394B);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_394B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80108A08;
}

loc_80108824:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_80108834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010884C;
    }
}

loc_80108838:
{
}

loc_8010883C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80108890;
    }
}

loc_80108840:
{
}

loc_80108844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801088CC;
    }
}

loc_80108848:
{
    goto loc_80108908;
}

loc_8010884C:
{
    r29 = MemoryInline::FlatRead32((r30 + 48));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8010885Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80108860:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80108878;
    }
}

loc_80108864:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80108A08;
}

loc_80108878:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    goto loc_80108908;
}

loc_80108890:
{
    r29 = MemoryInline::FlatRead32((r30 + 48));
    r3 = r29;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl1_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8012D088;
    }
}

loc_inl1_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl1_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl1_0x8012D088;
    }
}

loc_inl1_0x8012D080:
{
    r3 = 0;
    goto loc_inl1_cont_8012D068;
}

loc_inl1_0x8012D088:
{
    r3 = 1;
}

loc_inl1_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_801088A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801088B8;
    }
}

loc_801088A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80108A08;
}

loc_801088B8:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r5 = (r1 + 8);
    ctx->lr = 0x801088C8u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8013599C_4E13 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_4E13);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_4E13 >> 32);
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
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_80108908;
}

loc_801088CC:
{
    r29 = MemoryInline::FlatRead32((r30 + 48));
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x801088DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_801088E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801088F8;
    }
}

loc_801088E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80108A08;
}

loc_801088F8:
{
    r3 = (r29 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
}

loc_80108908:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_80108910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80108940;
    }
}

loc_80108914:
{
}

loc_80108918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80108940;
    }
}

loc_8010891C:
{
}

loc_80108920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_80108940;
    }
}

loc_80108924:
{
}

loc_80108928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(29))) {
        goto loc_8010894C;
    }
}

loc_8010892C:
{
}

loc_80108930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_80108974;
    }
}

loc_80108934:
{
}

loc_80108938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_80108980;
    }
}

loc_8010893C:
{
    goto loc_80108988;
}

loc_80108940:
{
    r0 = 14;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_80108988;
}

loc_8010894C:
{
    r0 = 14;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 0;
    r5 = 1;
    r6 = 4;
    r7 = 5;
    r8 = 0;
    ctx->lr = 0x80108970u;
    if constexpr (KnownRegArgsCpuCall<0x800E308Cu>(&func_800E308C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800E308C_5D79 = func_800E308C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E308C_5D79);
        r4 = static_cast<uint32_t>(regargs_result_800E308C_5D79 >> 32);
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
        InvokeDirectCpu<0x800E308Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_80108988;
}

loc_80108974:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_80108988;
}

loc_80108980:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80108988:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80108998:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80108A00;
    }
}

loc_8010899C:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -26);
}

loc_801089A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801089DC;
    }
}

loc_801089AC:
{
}

loc_801089B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_801089D0;
    }
}

loc_801089B4:
{
}

loc_801089B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_801089D0;
    }
}

loc_801089BC:
{
}

loc_801089C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(28))) {
        goto loc_801089D0;
    }
}

loc_801089C4:
{
}

loc_801089C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(29))) {
        goto loc_801089F8;
    }
}

loc_801089CC:
{
    goto loc_80108A00;
}

loc_801089D0:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801089D8u;
    if constexpr (KnownRegArgsCpuCall<0x800DC468u>(&func_800DC468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800DC468_679F = func_800DC468_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC468_679F);
        r4 = static_cast<uint32_t>(regargs_result_800DC468_679F >> 32);
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
        InvokeDirectCpu<0x800DC468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    goto loc_80108A00;
}

loc_801089DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 2836));
    r4 = 16;
    r5 = 2;
    r6 = (r1 + 8);
    ctx->lr = 0x801089F4u;
    if constexpr (KnownRegArgsCpuCall<0x800D9F0Cu>(&func_800D9F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D9F0C_6BF0 = func_800D9F0C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D9F0C_6BF0);
        r4 = static_cast<uint32_t>(regargs_result_800D9F0C_6BF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800D9F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_80108A00;
}

loc_801089F8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80108A00u;
    if constexpr (KnownRegArgsCpuCall<0x800DC558u>(&func_800DC558)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800DC558_701A = func_800DC558_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC558_701A);
        r4 = static_cast<uint32_t>(regargs_result_800DC558_701A >> 32);
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
        InvokeDirectCpu<0x800DC558u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_80108A00:
{
    r3 = r30;
    ctx->lr = 0x80108A08u;
    if constexpr (KnownRegArgsCpuCall<0x80108A90u>(&func_80108A90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80108A90_7423 = func_80108A90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80108A90_7423);
        r4 = static_cast<uint32_t>(regargs_result_80108A90_7423 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80108A90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80108A08:
{
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

extern "C" void func_80108728(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80108728_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80108728 func_80108728 preserves=true fpr_mask=0x00000000
