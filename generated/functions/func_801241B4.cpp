#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8013548C(CpuContext* ctx);
extern "C" uint64_t func_8013548C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80135518(CpuContext* ctx);
extern "C" double func_80135518_ra8_0_0_2(CpuContext*, uint32_t);
extern "C" void func_8013562C(CpuContext* ctx);
extern "C" uint64_t func_8013562C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_801356A8(CpuContext* ctx);
extern "C" uint32_t func_801356A8_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_801241B4_ra58_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t addr_psqx_801245E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x801241B4u);
    goto loc_801241B4;

loc_801241B4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = 0;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r30 + 2258));
}

loc_801241F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012454C;
    }
}

loc_801241F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 2272));
}

loc_801241FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012454C;
    }
}

loc_80124200:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 2288));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8012420C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124220;
    }
}

loc_80124210:
{
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2284));
    r4 = MemoryInline::FlatRead32((r30 + 2292));
    ctx->lr = 0x80124220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80133EA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_80124220:
{
    r3 = MemoryInline::FlatRead32((r30 + 2272));
    r4 = MemoryInline::FlatRead8((r3 + 18));
    r0 = (r4 + -1);
}

loc_80124230:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8012425C;
    }
}

loc_80124234:
{
    r0 = (r4 + -7);
}

loc_8012423C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8012425C;
    }
}

loc_80124240:
{
}

loc_80124244:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_8012425C;
    }
}

loc_80124248:
{
}

loc_8012424C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_801244FC;
    }
}

loc_80124250:
{
}

loc_80124254:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80124530;
    }
}

loc_80124258:
{
    goto loc_8012454C;
}

loc_8012425C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 2316));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80124268:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124284;
    }
}

loc_8012426C:
{
    r3 = r30;
    r4 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2312));
    ctx->lr = 0x8012427Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012F980_140B = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_140B);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_140B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_80124280:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012454C;
    }
}

loc_80124284:
{
    r3 = (r1 + 32);
    r4 = (r30 + 784);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 2272));
    r3 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8012429C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801242AC;
    }
}

loc_801242A0:
{
    r3 = r30;
    ctx->lr = 0x801242A8u;
    if constexpr (KnownRegArgsCpuCall<0x8013548Cu>(&func_8013548C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8013548C_1B3D = func_8013548C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013548C_1B3D);
        r4 = static_cast<uint32_t>(regargs_result_8013548C_1B3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8013548Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_80124344;
}

loc_801242AC:
{
    r0 = (r3 + 249);
    r0 = (r0 & 255);
}

loc_801242B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80124320;
    }
}

loc_801242BC:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 428));
    r3 = r30;
    ctx->lr = 0x801242C8u;
    if constexpr (KnownRegArgsCpuCall<0x80135518u>(&func_80135518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80135518_1FCC = func_80135518_ra8_0_0_2(ctx, r3);
        f1.d = regargs_result_80135518_1FCC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80135518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_801242D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801242E4;
    }
}

loc_801242D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 428));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801242DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124300;
    }
}

loc_801242E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_801242EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124304;
    }
}

loc_801242F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 428));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801242FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80124304;
    }
}

loc_80124300:
{
    r31 = (r31 | 8);
}

loc_80124304:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124310:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124344;
    }
}

loc_80124318:
{
    r31 = (r31 | 16);
    goto loc_80124344;
}

loc_80124320:
{
    r0 = MemoryInline::FlatRead32((r30 + 444));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r30 + 2296));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r30 + 452));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x80124344u;
    if constexpr (KnownRegArgsCpuCall<0x8013562Cu>(&func_8013562C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8013562C_2A6A = func_8013562C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8013562C_2A6A);
        r4 = static_cast<uint32_t>(regargs_result_8013562C_2A6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013562Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_80124344:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80124350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80124364;
    }
}

loc_80124354:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 784));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012435C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124384;
    }
}

loc_80124364:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80124370:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124388;
    }
}

loc_80124378:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 784));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80124380:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80124388;
    }
}

loc_80124384:
{
    r31 = (r31 | 1);
}

loc_80124388:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80124394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801243A8;
    }
}

loc_80124398:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 788));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801243C8;
    }
}

loc_801243A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801243CC;
    }
}

loc_801243BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 788));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801243CC;
    }
}

loc_801243C8:
{
    r31 = (r31 | 2);
}

loc_801243CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801243EC;
    }
}

loc_801243DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 792));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012440C;
    }
}

loc_801243EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801243F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124410;
    }
}

loc_80124400:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 792));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80124408:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80124410;
    }
}

loc_8012440C:
{
    r31 = (r31 | 4);
}

loc_80124410:
{
    r3 = MemoryInline::FlatRead32((r30 + 2272));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8012441C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_80124428;
    }
}

loc_80124420:
{
}

loc_80124424:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8012454C;
    }
}

loc_80124428:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 15u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 36));
}

loc_80124434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80124444;
    }
}

loc_80124438:
{
}

loc_8012443C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8012445C;
    }
}

loc_80124440:
{
    goto loc_80124470;
}

loc_80124444:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 784));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124450:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124470;
    }
}

loc_80124454:
{
    MemoryInline::FlatWriteFloat32((r30 + 784), f0.d);
    goto loc_80124470;
}

loc_8012445C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 784));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80124470;
    }
}

loc_8012446C:
{
    MemoryInline::FlatWriteFloat32((r30 + 784), f0.d);
}

loc_80124470:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 37));
}

loc_80124478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80124488;
    }
}

loc_8012447C:
{
}

loc_80124480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801244A0;
    }
}

loc_80124484:
{
    goto loc_801244B4;
}

loc_80124488:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 788));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124494:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801244B4;
    }
}

loc_80124498:
{
    MemoryInline::FlatWriteFloat32((r30 + 788), f0.d);
    goto loc_801244B4;
}

loc_801244A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 788));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801244AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801244B4;
    }
}

loc_801244B0:
{
    MemoryInline::FlatWriteFloat32((r30 + 788), f0.d);
}

loc_801244B4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 38));
}

loc_801244BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801244CC;
    }
}

loc_801244C0:
{
}

loc_801244C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801244E4;
    }
}

loc_801244C8:
{
    goto loc_8012454C;
}

loc_801244CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 792));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801244D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012454C;
    }
}

loc_801244DC:
{
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_8012454C;
}

loc_801244E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 792));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801244F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012454C;
    }
}

loc_801244F4:
{
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_8012454C;
}

loc_801244FC:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 2316));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80124508:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124524;
    }
}

loc_8012450C:
{
    r3 = r30;
    r4 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2312));
    ctx->lr = 0x8012451Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012F980_4ED8 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_4ED8);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_4ED8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_80124520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012454C;
    }
}

loc_80124524:
{
    r3 = r30;
    ctx->lr = 0x8012452Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013547Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    goto loc_8012454C;
}

loc_80124530:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80124538:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012454C;
    }
}

loc_8012453C:
{
    r3 = r30;
    ctx->lr = 0x80124544u;
    if constexpr (KnownRegArgsCpuCall<0x801356A8u>(&func_801356A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801356A8_5817 = func_801356A8_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_801356A8_5817;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801356A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r30;
    ctx->lr = 0x8012454Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130460u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8012454C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 2);
}

loc_80124558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124564;
    }
}

loc_8012455C:
{
    r3 = r30;
    // inline leaf 0x801321B8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801321B8
}

loc_80124564:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 4);
}

loc_80124570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012457C;
    }
}

loc_80124574:
{
    r3 = r30;
    // inline leaf 0x801321C4 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 277), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801321C4
}

loc_8012457C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 16);
}

loc_80124588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124594;
    }
}

loc_8012458C:
{
    r3 = r30;
    // inline leaf 0x80132228 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2222), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132228
}

loc_80124594:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 8);
}

loc_801245A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801245AC;
    }
}

loc_801245A4:
{
    r3 = r30;
    // inline leaf 0x80131DE8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 780), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131DE8
}

loc_801245AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 32);
}

loc_801245B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801245C4;
    }
}

loc_801245BC:
{
    r3 = r30;
    // inline leaf 0x80131ED8 (3 guest instruction(s))
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 2074), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131ED8
}

loc_801245C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 64);
}

loc_801245D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801245DC;
    }
}

loc_801245D4:
{
    r3 = r30;
    // inline leaf 0x80131E18 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2072), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131E18
}

loc_801245DC:
{
    r3 = r31;
    r0 = 72;
    addr_psqx_801245E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801245E4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801241B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801241B4_ra58_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801241B4 func_801241B4 preserves=true fpr_mask=0x00000000
