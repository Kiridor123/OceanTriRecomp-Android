#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800FA44C(CpuContext* ctx);
extern "C" uint32_t func_800FA44C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA484(CpuContext* ctx);
extern "C" uint32_t func_800FA484_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801029B0(CpuContext* ctx);
extern "C" uint32_t func_801029B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8028F518(CpuContext* ctx);
extern "C" uint64_t func_8028F518_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802905FC(CpuContext* ctx);
extern "C" uint64_t func_802905FC_ra38_18e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_800FA44C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_801029B0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800FA44C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_801029B0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80102834_ra38_18a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80102990_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80102834u);
    goto loc_80102834;

loc_80102834:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 40);
    ctx->lr = 0x8010285Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA44Cu) && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA44C_B35 = func_800FA44C_statefree_v0(r1, r3, r31, 0x8010285Cu);
        r1 = static_cast<uint32_t>(state_free_result_800FA44C_B35);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FA44Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 64);
    ctx->lr = 0x80102864u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801029B0u) && KnownTranslatedCpuCall<0x801029B0u>::kAvailable && !KnownTranslatedCpuCall<0x801029B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801029B0u>()) {
        const auto state_free_result_801029B0_101A = func_801029B0_statefree_v0(r1, r3, r31, 0x80102864u);
        r1 = static_cast<uint32_t>(state_free_result_801029B0_101A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801029B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 24);
    ctx->lr = 0x8010286Cu;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_1485 = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_1485;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r30 + 92));
}

loc_80102874:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80102884;
    }
}

loc_80102878:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29580));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_8010298C;
}

loc_80102884:
{
    r3 = (r1 + 40);
    r4 = (r30 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    ctx->lr = 0x80102898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 52);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 40);
    r4 = (r1 + 64);
    ctx->lr = 0x801028B0u;
    if constexpr (KnownRegArgsCpuCall<0x8028F518u>(&func_8028F518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8028F518_1C3A = func_8028F518_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F518_1C3A);
        r4 = static_cast<uint32_t>(regargs_result_8028F518_1C3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028F518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r31 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29612));
    goto loc_801028F8;
}

loc_801028BC:
{
    r3 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_2167 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_2167;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead32((r30 + 92));
    r3 = (r0 + r31);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r3 = (r1 + 64);
    r4 = (r1 + 24);
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801028E8u;
    if constexpr (KnownRegArgsCpuCall<0x802905FCu>(&func_802905FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802905FC_251B = func_802905FC_ra38_18e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802905FC_251B);
        r4 = static_cast<uint32_t>(regargs_result_802905FC_251B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802905FCu>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
}

loc_801028F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010290C;
    }
}

loc_801028F4:
{
    r31 = (r31 + 16);
}

loc_801028F8:
{
    r0 = MemoryInline::FlatRead32((r30 + 92));
    r4 = (r0 + r31);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80102908:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801028BC;
    }
}

loc_8010290C:
{
    r0 = (r3 & 255);
}

loc_80102914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80102954;
    }
}

loc_80102918:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 85), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8010292C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010293C;
    }
}

loc_80102930:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29544));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_8010293C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80102948:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010298C;
    }
}

loc_8010294C:
{
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_8010298C;
}

loc_80102954:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 85), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29580));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80102968:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80102978;
    }
}

loc_8010296C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29544));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_80102978:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29580));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80102984:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010298C;
    }
}

loc_80102988:
{
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_8010298C:
{
    r0 = 136;
    addr_psqx_80102990_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80102990_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80102834(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80102834_ra38_18a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80102834 func_80102834 preserves=true fpr_mask=0x00000000
