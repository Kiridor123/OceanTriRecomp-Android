#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012A95C(CpuContext* ctx);
extern "C" uint32_t func_8012A95C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8028FA84(CpuContext* ctx);
extern "C" uint64_t func_8028FA84_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" MkwStateFreeResult2 func_8012A95C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8012A95C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8028FD20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8028FF74_loc_0 = 0;
    uint32_t addr_psqx_8028FF80_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8028FD20;

loc_8028FD20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 208);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f0.d);
    }
    r3 = (r1 + 136);
    ctx->lr = 0x8028FD70u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012A95Cu) && KnownTranslatedCpuCall<0x8012A95Cu>::kAvailable && !KnownTranslatedCpuCall<0x8012A95Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012A95Cu>()) {
        const auto state_free_result_8012A95C_FD8 = func_8012A95C_statefree_v0(r1, r3, r31, 0x8028FD70u);
        r1 = static_cast<uint32_t>(state_free_result_8012A95C_FD8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A95Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 100);
    ctx->lr = 0x8028FD78u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012A95Cu) && KnownTranslatedCpuCall<0x8012A95Cu>::kAvailable && !KnownTranslatedCpuCall<0x8012A95Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012A95Cu>()) {
        const auto state_free_result_8012A95C_153C = func_8012A95C_statefree_v0(r1, r3, r31, 0x8028FD78u);
        r1 = static_cast<uint32_t>(state_free_result_8012A95C_153C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A95Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r26 + 40);
    r4 = (r27 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8028F680u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8028FD94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028FDA0;
    }
}

loc_8028FD98:
{
    r3 = 0;
    goto loc_8028FF70;
}

loc_8028FDA0:
{
    r3 = (r1 + 136);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 148);
    r4 = (r26 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 160);
    r4 = (r26 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 100);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 112);
    r4 = (r27 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 124);
    r4 = (r27 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 136);
    r4 = (r1 + 100);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x8028FDFCu;
    if constexpr (KnownRegArgsCpuCall<0x8028FA84u>(&func_8028FA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8028FA84_20C2 = func_8028FA84_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028FA84_20C2);
        r4 = static_cast<uint32_t>(regargs_result_8028FA84_20C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028FA84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    r3 = (r1 + 52);
    r4 = (r1 + 160);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 64);
    r4 = (r1 + 136);
    r5 = (r1 + 52);
    ctx->lr = 0x8028FE24u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_27F3 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_27F3);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_27F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 28);
    r4 = (r1 + 124);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 40);
    r4 = (r1 + 100);
    r5 = (r1 + 28);
    ctx->lr = 0x8028FE50u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2DA4 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2DA4);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2DA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r28;
    r4 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 16);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = r30;
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14208));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8028FE80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028FF18;
    }
}

loc_8028FE84:
{
    r3 = r30;
    r4 = (r26 + 28);
    r5 = (r27 + 28);
    ctx->lr = 0x8028FE94u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80051884_34C8 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_34C8);
        r4 = static_cast<uint32_t>(regargs_result_80051884_34C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14208));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_8028FEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028FF24;
    }
}

loc_8028FEA8:
{
    r3 = (r1 + 88);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 88);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14212));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r30;
    r4 = (r26 + 28);
    r5 = (r1 + 88);
    ctx->lr = 0x8028FED4u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80051884_3EED = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_3EED);
        r4 = static_cast<uint32_t>(regargs_result_80051884_3EED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14208));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_8028FEE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028FF24;
    }
}

loc_8028FEE8:
{
    r3 = (r1 + 76);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -14212));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r30;
    r4 = (r26 + 28);
    r5 = (r1 + 76);
    ctx->lr = 0x8028FF14u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80051884_4912 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_4912);
        r4 = static_cast<uint32_t>(regargs_result_80051884_4912 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8028FF24;
}

loc_8028FF18:
{
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f30.d = f1.d;
}

loc_8028FF24:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    MemoryInline::FlatWriteFloat32(r31, f30.d);
    r3 = r30;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14220));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_8028FF48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8028FF58;
    }
}

loc_8028FF4C:
{
    r3 = r30;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_8028FF58:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8028FF60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028FF6C;
    }
}

loc_8028FF64:
{
    r3 = 1;
    goto loc_8028FF70;
}

loc_8028FF6C:
{
    r3 = 0;
}

loc_8028FF70:
{
    r0 = 232;
    addr_psqx_8028FF74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FF74_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 184), 0, 64u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 224));
    r0 = 216;
    addr_psqx_8028FF80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FF80_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 208));
    r11 = (r1 + 208);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8028FD20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028FD20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FE gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xFC00000F fpr_write=0xFC0007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028FD20 func_8028FD20 preserves=true fpr_mask=0x00000000
