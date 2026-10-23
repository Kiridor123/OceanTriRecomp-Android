#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8035B660(CpuContext* ctx);
extern "C" uint64_t func_8035B660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A9194(CpuContext* ctx);
extern "C" uint32_t func_803A9194_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_803B3414(CpuContext* ctx);
extern "C" uint32_t func_803B3414_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B546C(CpuContext* ctx);
extern "C" uint32_t func_803B546C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AFF98_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_803AFF98;

loc_803AFF98:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = 3;
    MemoryInline::FlatWrite8((r4 + 250), static_cast<uint8_t>(r0));
    // inline leaf 0x80058C14 (8 guest instruction(s))
}

loc_inl0_0x80058C14:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2152));
}

loc_inl0_0x80058C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80058C28:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2152), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80058C14;
}

loc_inl0_return:
{
}

loc_inl0_cont_80058C14:
{
    // end of inlined leaf 0x80058C14
    r0 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r30 + 32), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 44), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 252));
}

loc_803AFFE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_803B006C;
    }
}

loc_803AFFE4:
{
    r0 = MemoryInline::FlatRead8((r30 + 27194));
}

loc_803AFFEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B0008;
    }
}

loc_803AFFF0:
{
    r3 = 23;
    ctx->lr = 0x803AFFF8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_B6D = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_B6D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B0004u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_DB9 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_DB9);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_DB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B006C;
}

loc_803B0008:
{
    r0 = MemoryInline::FlatRead8((r30 + 27195));
}

loc_803B0010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B0028;
    }
}

loc_803B0014:
{
}

loc_803B0018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B0040;
    }
}

loc_803B001C:
{
}

loc_803B0020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B0058;
    }
}

loc_803B0024:
{
    goto loc_803B006C;
}

loc_803B0028:
{
    r3 = 23;
    ctx->lr = 0x803B0030u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_1331 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_1331;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B003Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_157F = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_157F);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_157F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B006C;
}

loc_803B0040:
{
    r3 = 31;
    ctx->lr = 0x803B0048u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_18E0 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_18E0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B0054u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_1B2E = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_1B2E);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_1B2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B006C;
}

loc_803B0058:
{
    r3 = 32;
    ctx->lr = 0x803B0060u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_1E8F = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_1E8F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B006Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_20DD = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_20DD);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_20DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803B006C:
{
    r0 = MemoryInline::FlatRead8((r31 + 252));
}

loc_803B0074:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803B00E0;
    }
}

loc_803B0078:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5472));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = fctiwzword0;
    ctx->lr = 0x803B009Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A9194u>(&func_803A9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_803A9194_2676 = func_803A9194_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_803A9194_2676;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803A9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 1999));
}

loc_803B00AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_803B00C8;
    }
}

loc_803B00B0:
{
    r3 = 0;
    ctx->lr = 0x803B00B8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_2AA5 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_2AA5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B00C4u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_2CF3 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_2CF3);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_2CF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B00C8:
{
    r3 = 1;
    ctx->lr = 0x803B00D0u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_3053 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_3053;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B00DCu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_32A1 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_32A1);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_32A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B00E0:
{
    // inline leaf 0x803B33F8 (7 guest instruction(s))
}

loc_inl1_0x803B33F8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl1_0x803B3408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803B340C:
{
    r3 = 0;
    goto loc_inl1_cont_803B33F8;
}

loc_inl1_return:
{
}

loc_inl1_cont_803B33F8:
{
    // end of inlined leaf 0x803B33F8
}

loc_803B00E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B00FC;
    }
}

loc_803B00EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 536870912);
}

loc_803B00F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B0118;
    }
}

loc_803B00FC:
{
    r3 = 0;
    ctx->lr = 0x803B0104u;
    if constexpr (KnownRegArgsCpuCall<0x803B546Cu>(&func_803B546C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B546C_3977 = func_803B546C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B546C_3977;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B546Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803B010C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803B0118;
    }
}

loc_803B0110:
{
}

loc_803B0114:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803B01A8;
    }
}

loc_803B0118:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5468));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = fctiwzword1;
    ctx->lr = 0x803B013Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A9194u>(&func_803A9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_803A9194_3ED4 = func_803A9194_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_803A9194_3ED4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803A9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_803B0148:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803B0164;
    }
}

loc_803B014C:
{
    r3 = 39;
    ctx->lr = 0x803B0154u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_4376 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_4376;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B0160u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_45C4 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_45C4);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_45C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B0164:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 1999));
}

loc_803B0174:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_803B0190;
    }
}

loc_803B0178:
{
    r3 = 2;
    ctx->lr = 0x803B0180u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_4A1A = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_4A1A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B018Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_4C68 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_4C68);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_4C68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B0190:
{
    r3 = 3;
    ctx->lr = 0x803B0198u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_4FC8 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_4FC8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B01A4u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_5216 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_5216);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_5216 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B01A8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = fctiwzword2;
    ctx->lr = 0x803B01CCu;
    if constexpr (KnownRegArgsCpuCall<0x803A9194u>(&func_803A9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_803A9194_5702 = func_803A9194_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_803A9194_5702;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803A9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 1999));
}

loc_803B01DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_803B01F8;
    }
}

loc_803B01E0:
{
    r3 = 4;
    ctx->lr = 0x803B01E8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_5B31 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_5B31;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B01F4u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_5D7F = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_5D7F);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_5D7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803B020C;
}

loc_803B01F8:
{
    r3 = 5;
    ctx->lr = 0x803B0200u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_60DF = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_60DF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x803B020Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_632D = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_632D);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_632D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803B020C:
{
    // inline leaf 0x800F459C (10 guest instruction(s))
}

loc_inl3_0x800F459C:
{
    r3 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_inl3_0x800F45A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x800F45A8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 69), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 72), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_800F459C;
}

loc_inl3_return:
{
}

loc_inl3_cont_800F459C:
{
    // end of inlined leaf 0x800F459C
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AFF98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AFF98_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AFF98 func_803AFF98 preserves=true fpr_mask=0x00000000
