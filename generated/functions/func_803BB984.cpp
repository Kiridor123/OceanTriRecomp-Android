#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD568(CpuContext* ctx);
extern "C" uint64_t func_800DD568_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E2A84(CpuContext* ctx);
extern "C" uint64_t func_800E2A84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BA700(CpuContext* ctx);
extern "C" uint32_t func_803BA700_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803BA754(CpuContext* ctx);
extern "C" uint64_t func_803BA754_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BB7F8(CpuContext* ctx);
extern "C" uint64_t func_803BB7F8_ra38_32_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803BC37C(CpuContext* ctx);
extern "C" uint64_t func_803BC37C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BE20C(CpuContext* ctx);
extern "C" uint64_t func_803BE20C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_803BB984_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_803BBD88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803BB984;

loc_803BB984:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_803BB9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB9C0;
    }
}

loc_803BB9AC:
{
}

loc_803BB9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803BB9FC;
    }
}

loc_803BB9B4:
{
}

loc_803BB9B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803BBBE4;
    }
}

loc_803BB9BC:
{
    goto loc_803BBD84;
}

loc_803BB9C0:
{
    r5 = 1;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r5));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 544), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803BB9E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_803BB9F4;
    }
}

loc_803BB9EC:
{
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r5));
    goto loc_803BBD84;
}

loc_803BB9F4:
{
    ctx->lr = 0x803BB9F8u;
    if constexpr (KnownRegArgsCpuCall<0x803BA754u>(&func_803BA754)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BA754_11A0 = func_803BA754_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803BA754_11A0);
        r4 = static_cast<uint32_t>(regargs_result_803BA754_11A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BA754u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803BBD84;
}

loc_803BB9FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803BBA04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803BBD84;
    }
}

loc_803BBA08:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_803BBA10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BBAA0;
    }
}

loc_803BBA14:
{
    r4 = MemoryInline::FlatRead16((r3 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2151397908);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803BBA28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803BBA3C;
    }
}

loc_803BBA2C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_803BBA3C:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5264));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5292));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5268));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = (r3 + 56);
    r4 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5256));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r5 = fctiwzword0;
    r5 = (r5 & 255);
    r6 = 0;
    ctx->lr = 0x803BBA94u;
    if constexpr (KnownRegArgsCpuCall<0x800E2A84u>(&func_800E2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        const auto regargs_result_800E2A84_21EE = func_800E2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2A84_21EE);
        r4 = static_cast<uint32_t>(regargs_result_800E2A84_21EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x800E2A84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    f1.d = f31.d;
    ctx->lr = 0x803BBAA0u;
    if constexpr (KnownRegArgsCpuCall<0x803BE20Cu>(&func_803BE20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BE20C_27DB = func_803BE20C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803BE20C_27DB);
        r4 = static_cast<uint32_t>(regargs_result_803BE20C_27DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BE20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803BBAA0:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    ctx->lr = 0x803BBAA8u;
    if constexpr (KnownRegArgsCpuCall<0x803BA700u>(&func_803BA700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BA700_2C96 = func_803BA700_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BA700_2C96;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BA700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
}

loc_803BBAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBBB4;
    }
}

loc_803BBAB8:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_803BBAC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_803BBAD0;
    }
}

loc_803BBAC4:
{
}

loc_803BBAC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_803BBBB4;
    }
}

loc_803BBACC:
{
    goto loc_803BBB28;
}

loc_803BBAD0:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151398096);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803BBAE4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803BBB00;
    }
}

loc_803BBAE8:
{
    r3 = (r31 + 464);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 500));
    r4 = MemoryInline::FlatRead8((r31 + 4));
    ctx->lr = 0x803BBAF8u;
    if constexpr (KnownRegArgsCpuCall<0x803BC37Cu>(&func_803BC37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BC37C_3421 = func_803BC37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803BC37C_3421);
        r4 = static_cast<uint32_t>(regargs_result_803BC37C_3421 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BC37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_803BBB00:
{
    r3 = MemoryInline::FlatRead16((r31 + 544));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151398144);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 544), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 & 31);
}

loc_803BBB18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BBBB4;
    }
}

loc_803BBB1C:
{
    r3 = (r31 + 20);
    ctx->lr = 0x803BBB24u;
    if constexpr (KnownRegArgsCpuCall<0x800DD568u>(&func_800DD568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DD568_3DA8 = func_800DD568_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DD568_3DA8);
        r4 = static_cast<uint32_t>(regargs_result_800DD568_3DA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DD568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    goto loc_803BBBB4;
}

loc_803BBB28:
{
    r0 = MemoryInline::FlatRead32((r31 + 336));
}

loc_803BBB30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBBB4;
    }
}

loc_803BBB34:
{
    r3 = r31;
    ctx->lr = 0x803BBB3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803BB570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r31;
    ctx->lr = 0x803BBB44u;
    if constexpr (KnownRegArgsCpuCall<0x803BB7F8u>(&func_803BB7F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BB7F8_458D = func_803BB7F8_ra38_32_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_803BB7F8_458D);
        r4 = static_cast<uint32_t>(regargs_result_803BB7F8_458D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BB7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r31 + 453));
}

loc_803BBB4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBBB4;
    }
}

loc_803BBB50:
{
    r3 = (r31 + 60);
    r4 = (r31 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 96);
    r4 = (r31 + 32);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = (r31 + 84);
    r4 = (r31 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_803BBB7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_803BBB8C;
    }
}

loc_803BBB80:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
    goto loc_803BBB9C;
}

loc_803BBB8C:
{
    r3 = 0x80600000u;
    r3 = (r3 + -30240);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
}

loc_803BBB9C:
{
    r3 = (r31 + 56);
    r4 = 0;
    ctx->lr = 0x803BBBA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = MemoryInline::FlatRead32((r31 + 336));
    ctx->lr = 0x803BBBB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_803BBBB4:
{
    r0 = MemoryInline::FlatRead16((r31 + 506));
}

loc_803BBBBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BBD84;
    }
}

loc_803BBBC0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = 90;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    goto loc_803BBD84;
}

loc_803BBBE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803BBBEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_803BBBFC;
    }
}

loc_803BBBF0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_803BBD84;
}

loc_803BBBFC:
{
    r3 = MemoryInline::FlatRead8((r3 + 4));
    ctx->lr = 0x803BBC04u;
    if constexpr (KnownRegArgsCpuCall<0x803BA700u>(&func_803BA700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BA700_5B43 = func_803BA700_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BA700_5B43;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BA700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
}

loc_803BBC10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBBF0;
    }
}

loc_803BBC14:
{
    r0 = MemoryInline::FlatRead32((r31 + 336));
}

loc_803BBC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBBF0;
    }
}

loc_803BBC20:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r3 = MH3_TickLoad(r3, 2151398432);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_803BBC30:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803BBCCC;
    }
}

loc_803BBC34:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_803BBC3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803BBD84;
    }
}

loc_803BBC40:
{
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->lr = 0x803BBC50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803BB570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r31;
    ctx->lr = 0x803BBC58u;
    if constexpr (KnownRegArgsCpuCall<0x803BB7F8u>(&func_803BB7F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BB7F8_6548 = func_803BB7F8_ra38_32_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_803BB7F8_6548);
        r4 = static_cast<uint32_t>(regargs_result_803BB7F8_6548 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BB7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r31 + 453));
}

loc_803BBC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BBD84;
    }
}

loc_803BBC64:
{
    r3 = (r31 + 60);
    r4 = (r31 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 96);
    r4 = (r31 + 32);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = (r31 + 84);
    r4 = (r31 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_803BBC90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_803BBCA0;
    }
}

loc_803BBC94:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
    goto loc_803BBCB0;
}

loc_803BBCA0:
{
    r3 = 0x80600000u;
    r3 = (r3 + -30240);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
}

loc_803BBCB0:
{
    r3 = (r31 + 56);
    r4 = 0;
    ctx->lr = 0x803BBCBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = MemoryInline::FlatRead32((r31 + 336));
    ctx->lr = 0x803BBCC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_803BBD84;
}

loc_803BBCCC:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_803BBCD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(129))) {
        goto loc_803BBBF0;
    }
}

loc_803BBCD8:
{
    r3 = MemoryInline::FlatRead16((r31 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151398616);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803BBCEC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803BBD08;
    }
}

loc_803BBCF0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
}

loc_803BBD08:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5264));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5292));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r31 + 56);
    r4 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5256));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r5 = fctiwzword1;
    r5 = (r5 & 255);
    r6 = 0;
    ctx->lr = 0x803BBD58u;
    if constexpr (KnownRegArgsCpuCall<0x800E2A84u>(&func_800E2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        const auto regargs_result_800E2A84_7FA2 = func_800E2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2A84_7FA2);
        r4 = static_cast<uint32_t>(regargs_result_800E2A84_7FA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x800E2A84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    f1.d = f31.d;
    ctx->lr = 0x803BBD64u;
    if constexpr (KnownRegArgsCpuCall<0x803BE20Cu>(&func_803BE20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_803BE20C_858F = func_803BE20C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803BE20C_858F);
        r4 = static_cast<uint32_t>(regargs_result_803BE20C_858F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x803BE20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
    r3 = (r31 + 56);
    r4 = 0;
    ctx->lr = 0x803BBD78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = MemoryInline::FlatRead32((r31 + 336));
    ctx->lr = 0x803BBD84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_803BBD84:
{
    r0 = 40;
    addr_psqx_803BBD88_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BBD88_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BB984(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BB984_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BB984 func_803BB984 preserves=true fpr_mask=0x00000000
