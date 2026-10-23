#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80226390_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80226390;

loc_80226390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = 2;
    r5 = MemoryInline::FlatRead32((r3 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15812), 0, 140u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15812));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_802263C0:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
    r31 = (r0 & 255);
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1115));
}

loc_802263D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802265F8;
    }
}

loc_802263D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226424;
    }
}

loc_802263DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1051));
}

loc_802263E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802264F8;
    }
}

loc_802263E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022640C;
    }
}

loc_802263E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1003));
}

loc_802263EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802264B0;
    }
}

loc_802263F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226400;
    }
}

loc_802263F4:
{
}

loc_802263F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1002))) {
        goto loc_80226460;
    }
}

loc_802263FC:
{
    goto loc_80226754;
}

loc_80226400:
{
}

loc_80226404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1009))) {
        goto loc_802264D4;
    }
}

loc_80226408:
{
    goto loc_80226754;
}

loc_8022640C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80226410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802265A0;
    }
}

loc_80226414:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226754;
    }
}

loc_80226418:
{
}

loc_8022641C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1053))) {
        goto loc_80226754;
    }
}

loc_80226420:
{
    goto loc_80226548;
}

loc_80226424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1161));
}

loc_80226428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802266D0;
    }
}

loc_8022642C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226448;
    }
}

loc_80226430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1127));
}

loc_80226434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022667C;
    }
}

loc_80226438:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226754;
    }
}

loc_8022643C:
{
}

loc_80226440:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1126))) {
        goto loc_80226650;
    }
}

loc_80226444:
{
    goto loc_80226754;
}

loc_80226448:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1173));
}

loc_8022644C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022667C;
    }
}

loc_80226450:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226754;
    }
}

loc_80226454:
{
}

loc_80226458:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1172))) {
        goto loc_80226728;
    }
}

loc_8022645C:
{
    goto loc_80226754;
}

loc_80226460:
{
}

loc_80226464:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80226470;
    }
}

loc_80226468:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226470:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -15724));
    ctx->lr = 0x8022647Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_157C = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_157C);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_157C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226480:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022648C;
    }
}

loc_80226484:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_8022648C:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15784));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x802264A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_1C39 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_1C39);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_1C39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802264A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022676C;
    }
}

loc_802264A8:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_802264B0:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -15728));
    ctx->lr = 0x802264BCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_22C5 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_22C5);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_22C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802264C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802264CC;
    }
}

loc_802264C4:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_802264CC:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_802264D4:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r2 + -15712));
    ctx->lr = 0x802264E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_298F = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_298F);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_298F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802264E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802264F0;
    }
}

loc_802264E8:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_802264F0:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_802264F8:
{
}

loc_802264FC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80226508;
    }
}

loc_80226500:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226508:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -15724));
    ctx->lr = 0x80226514u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_312B = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_312B);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_312B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80226524;
    }
}

loc_8022651C:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_80226524:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15784));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x80226538u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_37E8 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_37E8);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_37E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_8022653C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022676C;
    }
}

loc_80226540:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_80226548:
{
}

loc_8022654C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80226558;
    }
}

loc_80226550:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_80226558:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -15728));
    ctx->lr = 0x80226564u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_3F45 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_3F45);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_3F45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226568:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80226574;
    }
}

loc_8022656C:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226574:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    f2.d = f1.d;
    ctx->lr = 0x80226588u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_45DC = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_45DC);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_45DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_8022658C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80226598;
    }
}

loc_80226590:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_80226598:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_802265A0:
{
}

loc_802265A4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802265B0;
    }
}

loc_802265A8:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_802265B0:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -15752));
    ctx->lr = 0x802265BCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_4D78 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_4D78);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_4D78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802265C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802265CC;
    }
}

loc_802265C4:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_802265CC:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    f2.d = f1.d;
    ctx->lr = 0x802265E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_540F = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_540F);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_540F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802265E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802265F0;
    }
}

loc_802265E8:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_802265F0:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_802265F8:
{
}

loc_802265FC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80226608;
    }
}

loc_80226600:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226608:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -15764));
    ctx->lr = 0x80226614u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_5BAD = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_5BAD);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_5BAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226618:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80226624;
    }
}

loc_8022661C:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_80226624:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15688));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x80226638u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_626A = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_626A);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_626A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_8022663C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80226648;
    }
}

loc_80226640:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_80226648:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226650:
{
}

loc_80226654:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80226660;
    }
}

loc_80226658:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226660:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -15756));
    ctx->lr = 0x8022666Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_6A06 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_6A06);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_6A06 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226670:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022676C;
    }
}

loc_80226674:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_8022667C:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r2 + -15684));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15812));
    ctx->lr = 0x80226690u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_70F3 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_70F3);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_70F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226694:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802266A0;
    }
}

loc_80226698:
{
    r30 = 2;
    goto loc_802266C0;
}

loc_802266A0:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15680));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x802266B4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_77B0 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_77B0);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_77B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r30 = (r0 & 255);
}

loc_802266C0:
{
}

loc_802266C4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8022676C;
    }
}

loc_802266C8:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_802266D0:
{
}

loc_802266D4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_802266E0;
    }
}

loc_802266D8:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_802266E0:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r2 + -15676));
    ctx->lr = 0x802266ECu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_7FF1 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_7FF1);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_7FF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802266F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802266FC;
    }
}

loc_802266F4:
{
    r30 = 1;
    goto loc_8022676C;
}

loc_802266FC:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15688));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x80226710u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_86AE = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_86AE);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_86AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226714:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80226720;
    }
}

loc_80226718:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_80226720:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226728:
{
}

loc_8022672C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80226738;
    }
}

loc_80226730:
{
    r30 = 2;
    goto loc_8022676C;
}

loc_80226738:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -15756));
    ctx->lr = 0x80226744u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_8E4A = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_8E4A);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_8E4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80226748:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022676C;
    }
}

loc_8022674C:
{
    r30 = 0;
    goto loc_8022676C;
}

loc_80226754:
{
    r3 = r29;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80226764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022676C;
    }
}

loc_80226768:
{
    r30 = 1;
}

loc_8022676C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80226390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80226390_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226390 func_80226390 preserves=true fpr_mask=0x00000000
