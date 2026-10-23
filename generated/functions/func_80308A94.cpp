#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8006F368(CpuContext* ctx);
extern "C" uint32_t func_8006F368_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007BC10(CpuContext* ctx);
extern "C" uint64_t func_8007BC10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8006F368_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80308A94_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80308A94;

loc_80308A94:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r29 = r3;
    r3 = (r1 + 144);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = MemoryInline::FlatRead32((r29 + 56));
    r30 = MemoryInline::FlatRead32((r29 + 48));
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MH3_TickLoad(r3, 2150664900);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_80308AD4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80308AF0;
    }
}

loc_80308AD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_80308D44;
}

loc_80308AF0:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r3 = MH3_TickLoad(r3, 2150664944);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r3 = (r1 + 88);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 280));
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8007BF10u>(ctx);
    r3 = (r1 + 88);
    // inline leaf 0x800E29F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800E29F8
}

loc_80308B1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80308B8C;
    }
}

loc_80308B20:
{
    r3 = (r1 + 88);
    r4 = 0;
    ctx->lr = 0x80308B2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007BC10u>(&func_8007BC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8007BC10_F46 = func_8007BC10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007BC10_F46);
        r4 = static_cast<uint32_t>(regargs_result_8007BC10_F46 >> 32);
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
        InvokeDirectCpu<0x8007BC10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 20);
    ctx->lr = 0x80308B3Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8006F368u) && KnownTranslatedCpuCall<0x8006F368u>::kAvailable && !KnownTranslatedCpuCall<0x8006F368u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8006F368u>()) {
        const auto state_free_result_8006F368_138F = func_8006F368_statefree(r1, r3, r4, 0x80308B3Cu);
        r0 = static_cast<uint32_t>(state_free_result_8006F368_138F[0]);
        r1 = static_cast<uint32_t>(state_free_result_8006F368_138F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x8006F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = (r1 + 28);
    r4 = 0;
    r5 = (r1 + 144);
    ctx->lr = 0x80308B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x80095434u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = 0x805E0000u;
    r3 = (r3 + -11840);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -11416));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80052364_1C60 = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_1C60;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    r3 = (r1 + 28);
    r4 = 0;
    r5 = (r1 + 144);
    ctx->lr = 0x80308B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800953A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80308B8C:
{
    r3 = (r1 + 36);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 280));
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8007BF10u>(ctx);
    r3 = (r1 + 36);
    // inline leaf 0x800E29F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800E29F8
}

loc_80308BAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80308C1C;
    }
}

loc_80308BB0:
{
    r3 = (r1 + 36);
    r4 = 0;
    ctx->lr = 0x80308BBCu;
    if constexpr (KnownRegArgsCpuCall<0x8007BC10u>(&func_8007BC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8007BC10_256E = func_8007BC10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007BC10_256E);
        r4 = static_cast<uint32_t>(regargs_result_8007BC10_256E >> 32);
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
        InvokeDirectCpu<0x8007BC10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    ctx->lr = 0x80308BCCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8006F368u) && KnownTranslatedCpuCall<0x8006F368u>::kAvailable && !KnownTranslatedCpuCall<0x8006F368u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8006F368u>()) {
        const auto state_free_result_8006F368_29BA = func_8006F368_statefree(r1, r3, r4, 0x80308BCCu);
        r0 = static_cast<uint32_t>(state_free_result_8006F368_29BA[0]);
        r1 = static_cast<uint32_t>(state_free_result_8006F368_29BA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x8006F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = (r1 + 24);
    r4 = 0;
    r5 = (r1 + 144);
    ctx->lr = 0x80308BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x80095434u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = 0x805E0000u;
    r3 = (r3 + -11816);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -11416));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80052364_328F = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_328F;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    r3 = (r1 + 24);
    r4 = 0;
    r5 = (r1 + 144);
    ctx->lr = 0x80308C1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800953A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80308C1C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80308C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80308C3C;
    }
}

loc_80308C28:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11944);
    r4 = 0x805E0000u;
    r28 = (r4 + -11928);
    goto loc_80308C44;
}

loc_80308C3C:
{
    r3 = (r13 + -25208);
    r28 = (r13 + -25200);
}

loc_80308C44:
{
}

loc_80308C48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80308C94;
    }
}

loc_80308C4C:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = (r1 + 32);
    r6 = (r1 + 33);
    r7 = (r1 + 34);
    ctx->lr = 0x80308C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = 0x805E0000u;
    r3 = (r3 + -11868);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    ctx->lr = 0x80308C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x80308C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80308C94:
{
}

loc_80308C98:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80308CE8;
    }
}

loc_80308C9C:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r5 = (r1 + 32);
    r6 = (r1 + 33);
    r7 = (r1 + 34);
    ctx->lr = 0x80308CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = 0x805E0000u;
    r3 = (r3 + -11856);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    ctx->lr = 0x80308CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 1;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x80308CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80308CE8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    ctx->lr = 0x80308CF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r28 = 2;
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -11);
}

loc_80308D04:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80308D2C;
    }
}

loc_80308D08:
{
}

loc_80308D0C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80308D2C;
    }
}

loc_80308D10:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80308D1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80308D2C;
    }
}

loc_80308D20:
{
    r3 = r30;
    ctx->lr = 0x80308D28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800F93E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r28 = (r3 | 2);
}

loc_80308D2C:
{
    r3 = r29;
    r4 = (r31 + 4);
    r5 = r28;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80308D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80308D44:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80308A94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80308A94_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80308A94 func_80308A94 preserves=true fpr_mask=0x00000000
