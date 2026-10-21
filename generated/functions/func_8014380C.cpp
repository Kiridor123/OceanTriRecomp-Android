#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801255C0(CpuContext* ctx);
extern "C" uint64_t func_801255C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80126840(CpuContext* ctx);
extern "C" uint64_t func_80126840_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012E77C(CpuContext* ctx);
extern "C" uint64_t func_8012E77C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8014365C(CpuContext* ctx);
extern "C" uint64_t func_8014365C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80143AA4(CpuContext* ctx);
extern "C" void func_80143AA4_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80144514(CpuContext* ctx);
extern "C" uint32_t func_80144514_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8028EFE0(CpuContext* ctx);
extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80143AA4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80143AA4_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8014380C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8014380Cu);
    goto loc_8014380C;

loc_8014380C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x8014382Cu;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_A67 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_A67;
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
    r3 = MemoryInline::FlatRead8((r30 + 4));
}

loc_80143834:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8014384C;
    }
}

loc_80143838:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r30 + 14));
    ctx->lr = 0x8014384Cu;
    if constexpr (KnownRegArgsCpuCall<0x801255C0u>(&func_801255C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801255C0_E18 = func_801255C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801255C0_E18);
        r4 = static_cast<uint32_t>(regargs_result_801255C0_E18 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x801255C0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8014384C:
{
    r3 = MemoryInline::FlatRead16((r30 + 26));
    ctx->lr = 0x80143854u;
    if constexpr (KnownRegArgsCpuCall<0x8028EFE0u>(&func_8028EFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8028EFE0_152A = func_8028EFE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8028EFE0_152A);
        r4 = static_cast<uint32_t>(regargs_result_8028EFE0_152A >> 32);
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
}

loc_80143858:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80143864;
    }
}

loc_8014385C:
{
    r3 = 0;
    goto loc_80143A00;
}

loc_80143864:
{
    r0 = MemoryInline::FlatRead8((r30 + 1132));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 12));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 10));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 481));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r3 = (r1 + 16);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 28);
    r4 = (r30 + 444);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 481));
    ctx->lr = 0x801438A8u;
    if constexpr (KnownRegArgsCpuCall<0x8014365Cu>(&func_8014365C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8014365C_1D81 = func_8014365C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8014365C_1D81);
        r4 = static_cast<uint32_t>(regargs_result_8014365C_1D81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8014365Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_801438B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801439FC;
    }
}

loc_801438B4:
{
    r4 = (r1 + 8);
    // inline leaf 0x80143544 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80143544
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 13), 0, 2538u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 13u, (r30 + 26));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 11), 0, 37u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 11u, (r31 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2537u, (r30 + 2550));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 15u, (r30 + 28));
    MemoryInline::WriteResolved16(guest_range_0, 13u, (r31 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1939u, (r30 + 1952));
    MemoryInline::WriteResolved32(guest_range_0, 29u, (r31 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1951u, (r30 + 1964));
    MemoryInline::WriteResolved32(guest_range_0, 33u, (r31 + 44), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r31 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r31 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1979u, (r30 + 1992));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r31 + 31), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 451u, (r30 + 464));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 25u, (r31 + 36), f0.d);
    r3 = (r31 + 52);
    r4 = (r30 + 2820);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 485));
}

loc_8014394C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_801439BC;
    }
}

loc_80143950:
{
    r3 = r31;
    ctx->lr = 0x80143958u;
    if constexpr (KnownRegArgsCpuCall<0x8012E77Cu>(&func_8012E77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012E77C_3097 = func_8012E77C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E77C_3097);
        r4 = static_cast<uint32_t>(regargs_result_8012E77C_3097 >> 32);
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

loc_8014395C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801439AC;
    }
}

loc_80143960:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2258));
}

loc_80143970:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80143980;
    }
}

loc_80143974:
{
    r0 = MemoryInline::FlatRead16((r30 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    goto loc_801439FC;
}

loc_80143980:
{
    r0 = MemoryInline::FlatRead16((r30 + 2324));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80143988:
{
    r30 = 300;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(300))) {
        goto loc_80143994;
    }
}

loc_80143990:
{
    r30 = r0;
}

loc_80143994:
{
    r3 = r31;
    ctx->lr = 0x8014399Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126840u>(&func_80126840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126840_3768 = func_80126840_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126840_3768);
        r4 = static_cast<uint32_t>(regargs_result_80126840_3768 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 - r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    goto loc_801439FC;
}

loc_801439AC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_3BDD = func_80143AA4_statefree_v0(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_3BDD[0]);
        cr = static_cast<uint32_t>(state_free_result_80143AA4_3BDD[1]);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80143AA4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = 0;
    goto loc_801439FC;
}

loc_801439BC:
{
    r3 = r30;
    r4 = 12;
    r5 = 255;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl2_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl2_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl2_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D290:
{
    r3 = 1;
    goto loc_inl2_cont_8012D270;
}

loc_inl2_0x8012D298:
{
    r3 = 0;
}

loc_inl2_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801439D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801439E8;
    }
}

loc_801439D4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    goto loc_801439FC;
}

loc_801439E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_801439F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801439FC;
    }
}

loc_801439F4:
{
    r3 = r31;
    ctx->lr = 0x801439FCu;
    if constexpr (KnownRegArgsCpuCall<0x80144514u>(&func_80144514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80144514_46C2 = func_80144514_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80144514_46C2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80144514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_801439FC:
{
    r3 = r31;
}

loc_80143A00:
{
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8014380C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8014380C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8014380C func_8014380C preserves=true fpr_mask=0x00000000
