#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2948(CpuContext* ctx);
extern "C" uint64_t func_800E2948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2F20(CpuContext* ctx);
extern "C" uint64_t func_800E2F20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E3140(CpuContext* ctx);
extern "C" uint64_t func_800E3140_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012A418(CpuContext* ctx);
extern "C" uint32_t func_8012A418_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8012A478(CpuContext* ctx);
extern "C" uint64_t func_8012A478_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012FCC4(CpuContext* ctx);
extern "C" uint64_t func_8012FCC4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012FF9C(CpuContext* ctx);
extern "C" uint64_t func_8012FF9C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80133444(CpuContext* ctx);
extern "C" uint64_t func_80133444_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80133BC0(CpuContext* ctx);
extern "C" uint32_t func_80133BC0_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013645C(CpuContext* ctx);
extern "C" uint64_t func_8013645C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80136E9C(CpuContext* ctx);
extern "C" uint64_t func_80136E9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80137F44(CpuContext* ctx);
extern "C" uint64_t func_80137F44_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80138088(CpuContext* ctx);
extern "C" uint64_t func_80138088_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801380D8(CpuContext* ctx);
extern "C" uint64_t func_801380D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80138EC8(CpuContext* ctx);
extern "C" uint64_t func_80138EC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139260(CpuContext* ctx);
extern "C" uint64_t func_80139260_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80138BC4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80138BC4;

loc_80138BC4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 478));
}

loc_80138BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138E64;
    }
}

loc_80138BE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2240));
}

loc_80138BF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138C1C;
    }
}

loc_80138BF4:
{
    r3 = (r3 + 392);
    r4 = (r31 + 2228);
    ctx->lr = 0x80138C00u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80138C0Cu;
    if constexpr (KnownRegArgsCpuCall<0x801380D8u>(&func_801380D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_801380D8_1315 = func_801380D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801380D8_1315);
        r4 = static_cast<uint32_t>(regargs_result_801380D8_1315 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x801380D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = r31;
    ctx->lr = 0x80138C14u;
    if constexpr (KnownRegArgsCpuCall<0x8012A418u>(&func_8012A418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012A418_1A29 = func_8012A418_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_8012A418_1A29;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012A418u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    r3 = r31;
    ctx->lr = 0x80138C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012FF9Cu>(&func_8012FF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012FF9C_1EAE = func_8012FF9C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012FF9C_1EAE);
        r4 = static_cast<uint32_t>(regargs_result_8012FF9C_1EAE >> 32);
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
        InvokeDirectCpu<0x8012FF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_80138C1C:
{
    r30 = -1;
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_80138C28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80138C60;
    }
}

loc_80138C2C:
{
    r0 = MemoryInline::FlatRead8((r31 + 483));
}

loc_80138C34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80138C60;
    }
}

loc_80138C38:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80138C44u;
    if constexpr (KnownRegArgsCpuCall<0x80137F44u>(&func_80137F44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80137F44_245D = func_80137F44_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80137F44_245D);
        r4 = static_cast<uint32_t>(regargs_result_80137F44_245D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x80137F44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r30 = r3;
}

loc_80138C4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80138C60;
    }
}

loc_80138C50:
{
    r3 = r31;
    r4 = 1024;
    r5 = r30;
    ctx->lr = 0x80138C60u;
    if constexpr (KnownRegArgsCpuCall<0x80138088u>(&func_80138088)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80138088_2BD8 = func_80138088_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80138088_2BD8);
        r4 = static_cast<uint32_t>(regargs_result_80138088_2BD8 >> 32);
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
        InvokeDirectCpu<0x80138088u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80138C60:
{
    r0 = MemoryInline::FlatRead8((r31 + 2240));
}

loc_80138C68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80138C74;
    }
}

loc_80138C6C:
{
}

loc_80138C70:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-1))) {
        goto loc_80138C84;
    }
}

loc_80138C74:
{
    r3 = r31;
    ctx->lr = 0x80138C7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80138EC8u>(&func_80138EC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80138EC8_30CC = func_80138EC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80138EC8_30CC);
        r4 = static_cast<uint32_t>(regargs_result_80138EC8_30CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80138EC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = (r31 + 36);
    ctx->lr = 0x80138C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x800E0978u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_80138C84:
{
    r3 = r31;
    ctx->lr = 0x80138C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A478u>(&func_8012A478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        const auto regargs_result_8012A478_37C0 = func_8012A478_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8012A478_37C0);
        r4 = static_cast<uint32_t>(regargs_result_8012A478_37C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x8012A478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = MemoryInline::FlatRead8((r31 + 1894));
}

loc_80138C94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80138CCC;
    }
}

loc_80138C98:
{
    r0 = MemoryInline::FlatRead8((r31 + 1895));
}

loc_80138CA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80138CB8;
    }
}

loc_80138CA4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1894), static_cast<uint8_t>(r0));
    r3 = (r31 + 1912);
    r4 = (r31 + 1900);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80138CB8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1896));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80138CC0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80138CCC;
    }
}

loc_80138CC4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1896), static_cast<uint16_t>(r0));
}

loc_80138CCC:
{
    r3 = r31;
    ctx->lr = 0x80138CD4u;
    if constexpr (KnownRegArgsCpuCall<0x80139260u>(&func_80139260)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139260_4281 = func_80139260_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80139260_4281);
        r4 = static_cast<uint32_t>(regargs_result_80139260_4281 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x80139260u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    ctx->lr = 0x80138CDCu;
    if constexpr (KnownRegArgsCpuCall<0x8013645Cu>(&func_8013645C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8013645C_48DA = func_8013645C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013645C_48DA);
        r4 = static_cast<uint32_t>(regargs_result_8013645C_48DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x8013645Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead16((r31 + 1892));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80138CE4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80138D60;
    }
}

loc_80138CE8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80138CF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F368_50B2 = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_50B2);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_50B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80138CF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80138D08;
    }
}

loc_80138CFC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1890), static_cast<uint8_t>(r0));
    goto loc_80138D60;
}

loc_80138D08:
{
    r0 = MemoryInline::FlatRead8((r31 + 1890));
}

loc_80138D10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80138D40;
    }
}

loc_80138D14:
{
    r3 = MemoryInline::FlatRead16((r31 + 1892));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148764948);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1892), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80138D28:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80138D60;
    }
}

loc_80138D2C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1890), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite16((r31 + 1892), static_cast<uint16_t>(r0));
    goto loc_80138D60;
}

loc_80138D40:
{
    r3 = MemoryInline::FlatRead16((r31 + 1892));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148764992);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1892), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80138D54:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80138D60;
    }
}

loc_80138D58:
{
    r3 = r31;
    ctx->lr = 0x80138D60u;
    if constexpr (KnownRegArgsCpuCall<0x80133BC0u>(&func_80133BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_80133BC0_5A0B = func_80133BC0_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_80133BC0_5A0B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80133BC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80138D60:
{
    r3 = r31;
    r4 = 6;
    ctx->lr = 0x80138D6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r12 = r3;
}

loc_80138D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80138D84;
    }
}

loc_80138D78:
{
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x80138D84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80138D84:
{
    r3 = r31;
    ctx->lr = 0x80138D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80133444u>(&func_80133444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80133444_6451 = func_80133444_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80133444_6451);
        r4 = static_cast<uint32_t>(regargs_result_80133444_6451 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x80133444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = MemoryInline::FlatRead32((r31 + 456));
    r0 = (r3 & 1);
}

loc_80138D98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80138DAC;
    }
}

loc_80138D9C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80138DA8u;
    if constexpr (KnownRegArgsCpuCall<0x80136E9Cu>(&func_80136E9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80136E9C_6C14 = func_80136E9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136E9C_6C14);
        r4 = static_cast<uint32_t>(regargs_result_80136E9C_6C14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136E9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_80138E24;
}

loc_80138DAC:
{
    r0 = (r3 & 262144);
}

loc_80138DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138E24;
    }
}

loc_80138DB8:
{
    r3 = r31;
    ctx->lr = 0x80138DC0u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D090_735D = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_735D);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_735D >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80138DC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80138DF8;
    }
}

loc_80138DC8:
{
    r30 = 0;
    goto loc_80138DE4;
}

loc_80138DD0:
{
    r3 = (r31 + 36);
    r4 = r30;
    r5 = 16;
    ctx->lr = 0x80138DE0u;
    if constexpr (KnownRegArgsCpuCall<0x800E3140u>(&func_800E3140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->ctr = ctr;
        const auto regargs_result_800E3140_785C = func_800E3140_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E3140_785C);
        r4 = static_cast<uint32_t>(regargs_result_800E3140_785C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E3140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        ctr = ctx->ctr;
    }
    r30 = (r30 + 1);
}

loc_80138DE4:
{
    r3 = (r31 + 36);
    ctx->lr = 0x80138DECu;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2948_7DD9 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_7DD9);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_7DD9 >> 32);
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
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80138DF0:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r3))) {
        goto loc_80138DD0;
    }
}

loc_80138DF4:
{
    goto loc_80138E24;
}

loc_80138DF8:
{
    r30 = 0;
    goto loc_80138E14;
}

loc_80138E00:
{
    r3 = (r31 + 36);
    r4 = r30;
    r5 = 2;
    ctx->lr = 0x80138E10u;
    if constexpr (KnownRegArgsCpuCall<0x800E2F20u>(&func_800E2F20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2F20_8267 = func_800E2F20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2F20_8267);
        r4 = static_cast<uint32_t>(regargs_result_800E2F20_8267 >> 32);
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
        InvokeDirectCpu<0x800E2F20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = (r30 + 1);
}

loc_80138E14:
{
    r3 = (r31 + 36);
    ctx->lr = 0x80138E1Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2948_8604 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_8604);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_8604 >> 32);
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
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80138E20:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r3))) {
        goto loc_80138E00;
    }
}

loc_80138E24:
{
    r3 = r31;
    r4 = 8;
    ctx->lr = 0x80138E30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r12 = r3;
}

loc_80138E38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80138E48;
    }
}

loc_80138E3C:
{
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x80138E48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80138E48:
{
    r3 = r31;
    ctx->lr = 0x80138E50u;
    if constexpr (KnownRegArgsCpuCall<0x8012FCC4u>(&func_8012FCC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012FCC4_90DD = func_8012FCC4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012FCC4_90DD);
        r4 = static_cast<uint32_t>(regargs_result_8012FCC4_90DD >> 32);
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
        InvokeDirectCpu<0x8012FCC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_80138E58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80138E64;
    }
}

loc_80138E5C:
{
    r3 = r31;
    // inline leaf 0x80136D78 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 1948), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80136D78
}

loc_80138E64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_80138BC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80138BC4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80138BC4 func_80138BC4 preserves=true fpr_mask=0x00000000
