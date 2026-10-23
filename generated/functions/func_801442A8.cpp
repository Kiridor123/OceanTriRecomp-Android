#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012E77C(CpuContext* ctx);
extern "C" uint64_t func_8012E77C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80143010(CpuContext* ctx);
extern "C" uint64_t func_80143010_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80143578(CpuContext* ctx);
extern "C" uint64_t func_80143578_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80143AA4(CpuContext* ctx);
extern "C" void func_80143AA4_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80144150(CpuContext* ctx);
extern "C" uint64_t func_80144150_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80144620(CpuContext* ctx);
extern "C" uint64_t func_80144620_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8028EFE0(CpuContext* ctx);
extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80143AA4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80143AA4_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801442A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8014446C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801442A8;

loc_801442A8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    ctx->lr = 0x801442D4u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_F86 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_F86;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead16((r30 + 22));
    ctx->lr = 0x801442DCu;
    if constexpr (KnownRegArgsCpuCall<0x8028EFE0u>(&func_8028EFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8028EFE0_11FE = func_8028EFE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8028EFE0_11FE);
        r4 = static_cast<uint32_t>(regargs_result_8028EFE0_11FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028EFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = r3;
}

loc_801442E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801442F4;
    }
}

loc_801442E8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_1622 = func_80143AA4_statefree_v0(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_1622[0]);
        cr = static_cast<uint32_t>(state_free_result_80143AA4_1622[1]);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80143AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80144468;
}

loc_801442F4:
{
    r0 = (r31 & 255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r26 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8014430C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80144328;
    }
}

loc_80144310:
{
    r28 = MemoryInline::FlatRead8((r30 + 28));
    r3 = MemoryInline::FlatRead8((r30 + 18));
    r0 = (r3 + 1);
    r27 = (r0 & 255);
    r26 = 0;
    goto loc_80144338;
}

loc_80144328:
{
    r3 = MemoryInline::FlatRead8((r30 + 28));
    r0 = (r3 + 1);
    r28 = (r0 & 255);
    r27 = 0;
}

loc_80144338:
{
    r0 = MemoryInline::FlatRead8((r30 + 12));
}

loc_80144340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801443DC;
    }
}

loc_80144344:
{
}

loc_80144348:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(4))) {
        goto loc_801443DC;
    }
}

loc_8014434C:
{
    r3 = r30;
    ctx->lr = 0x80144354u;
    if constexpr (KnownRegArgsCpuCall<0x8012E77Cu>(&func_8012E77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E77C_2016 = func_8012E77C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E77C_2016);
        r4 = static_cast<uint32_t>(regargs_result_8012E77C_2016 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012E77Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80144358:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80144460;
    }
}

loc_8014435C:
{
    r31 = MemoryInline::FlatRead16((r30 + 22));
    r24 = MemoryInline::FlatRead8((r30 + 13));
    r25 = MemoryInline::FlatRead8((r30 + 31));
    f31.d = MemoryInline::FlatReadFloat32((r30 + 36));
    r23 = MemoryInline::FlatRead8((r30 + 29));
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r30 + 2));
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r5 = MemoryInline::FlatRead8((r5 + 9));
    ctx->lr = 0x80144384u;
    if constexpr (KnownRegArgsCpuCall<0x80143578u>(&func_80143578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80143578_2563 = func_80143578_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80143578_2563);
        r4 = static_cast<uint32_t>(regargs_result_80143578_2563 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80143578u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r4 + 8);
    ctx->lr = 0x80144394u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_29A6 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_29A6);
        r4 = static_cast<uint32_t>(regargs_result_80142444_29A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = (r1 + 8);
    // inline leaf 0x80143544 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 37u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80143544
    MemoryInline::WriteResolved16(guest_range_2, 19u, (r30 + 22), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r30 + 13), static_cast<uint8_t>(r24));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r30 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r30 + 28), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r30 + 18), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 28u, (r30 + 31), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 33u, (r30 + 36), f31.d);
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r30 + 29), static_cast<uint8_t>(r23));
}

loc_801443C8:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_80144468;
    }
}

loc_801443CC:
{
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x801443D8u;
    if constexpr (KnownRegArgsCpuCall<0x80144620u>(&func_80144620)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80144620_3559 = func_80144620_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80144620_3559);
        r4 = static_cast<uint32_t>(regargs_result_80144620_3559 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80144620u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80144468;
}

loc_801443DC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r30 + 18), static_cast<uint8_t>(r27));
}

loc_801443F0:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_80144400;
    }
}

loc_801443F4:
{
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x80144400u;
    if constexpr (KnownRegArgsCpuCall<0x80144620u>(&func_80144620)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80144620_3E66 = func_80144620_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80144620_3E66);
        r4 = static_cast<uint32_t>(regargs_result_80144620_3E66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80144620u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80144400:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_80144410:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80144450;
    }
}

loc_80144414:
{
    r0 = (r31 & 255);
}

loc_8014441C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80144450;
    }
}

loc_80144420:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    ctx->lr = 0x80144428u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_80144430:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80144450;
    }
}

loc_80144434:
{
    r3 = r30;
    ctx->lr = 0x8014443Cu;
    if constexpr (KnownRegArgsCpuCall<0x80143010u>(&func_80143010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80143010_4C03 = func_80143010_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80143010_4C03);
        r4 = static_cast<uint32_t>(regargs_result_80143010_4C03 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80143010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80144440:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80144460;
    }
}

loc_80144444:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    goto loc_80144460;
}

loc_80144450:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x8014445Cu;
    if constexpr (KnownRegArgsCpuCall<0x80144150u>(&func_80144150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80144150_54BC = func_80144150_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80144150_54BC);
        r4 = static_cast<uint32_t>(regargs_result_80144150_54BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80144150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80144468;
}

loc_80144460:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_5C58 = func_80143AA4_statefree_v0(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_5C58[0]);
        cr = static_cast<uint32_t>(state_free_result_80143AA4_5C58[1]);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80143AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80144468:
{
    r0 = 88;
    addr_psqx_8014446C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8014446C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801442A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801442A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801442A8 func_801442A8 preserves=true fpr_mask=0x00000000
