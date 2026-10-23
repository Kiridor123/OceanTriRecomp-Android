#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E0C44(CpuContext* ctx);
extern "C" uint64_t func_800E0C44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802FA3A0(CpuContext* ctx);
extern "C" uint64_t func_802FA3A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802FA864(CpuContext* ctx);
extern "C" uint64_t func_802FA864_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802F9F4C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802FA338_loc_0 = 0;
    uint32_t addr_psqx_802FA344_loc_0 = 0;
    uint32_t addr_psqx_802FA350_loc_0 = 0;
    uint32_t addr_psqx_802FA35C_loc_0 = 0;
    uint32_t addr_psqx_802FA368_loc_0 = 0;
    uint32_t addr_psqx_802FA374_loc_0 = 0;
    uint32_t addr_psqx_802FA380_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802F9F4C;

loc_802F9F4C:
{
    r0 = MemoryInline::FlatRead8((r21 + 776));
}

loc_802F9F54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F9F70;
    }
}

loc_802F9F58:
{
    r0 = MemoryInline::FlatRead8((r20 + 68));
}

loc_802F9F60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802F9F70;
    }
}

loc_802F9F64:
{
    r3 = 0x805E0000u;
    r23 = (r3 + -30024);
    goto loc_802FA0F0;
}

loc_802F9F70:
{
    r0 = MemoryInline::FlatRead8((r20 + 68));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -29660);
    r3_addr_1 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_802FA0F0:
{
}

loc_802FA0F4:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_802FA104;
    }
}

loc_802FA0F8:
{
    r3 = r20;
    ctx->lr = 0x802FA100u;
    if constexpr (KnownRegArgsCpuCall<0x802FA864u>(&func_802FA864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802FA864_1092 = func_802FA864_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FA864_1092);
        r4 = static_cast<uint32_t>(regargs_result_802FA864_1092 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x802FA864u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802FA334;
}

loc_802FA104:
{
    r22 = MemoryInline::FlatRead32((r21 + 772));
    r24 = 0;
    r25 = r21;
    r26 = 0;
    r27 = 1;
    f25.d = MemoryInline::FlatReadFloat32((r2 + -11996));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -11988));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -11984));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -11980));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -11976));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -11972));
    r18 = 4;
    r31 = 3;
    r30 = 2;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -11992));
    r29 = 6;
    r28 = 5;
    goto loc_802FA2D0;
}

loc_802FA14C:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r3 = (r3 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12000));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r26);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r26);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r26);
    r3 = (r1 + 8);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_1D00 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1D00;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f0.d, f25.d);
}

loc_802FA1AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA1CC;
    }
}

loc_802FA1B4:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 8), f29.d);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
    goto loc_802FA284;
}

loc_802FA1CC:
{
    SetCRFloatResident(cr, 0, f0.d, f26.d);
}

loc_802FA1D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA1F0;
    }
}

loc_802FA1D8:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 8), f29.d);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
    goto loc_802FA284;
}

loc_802FA1F0:
{
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_802FA1F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA214;
    }
}

loc_802FA1FC:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 8), f29.d);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
    goto loc_802FA284;
}

loc_802FA214:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_802FA218:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA238;
    }
}

loc_802FA220:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 8), f29.d);
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r30));
    goto loc_802FA284;
}

loc_802FA238:
{
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_802FA23C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA25C;
    }
}

loc_802FA244:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    goto loc_802FA284;
}

loc_802FA25C:
{
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802FA260:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802FA280;
    }
}

loc_802FA268:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r18));
    r3 = MemoryInline::FlatRead32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    goto loc_802FA284;
}

loc_802FA280:
{
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r26));
}

loc_802FA284:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    ctx->lr = 0x802FA28Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0C44u>(&func_800E0C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E0C44_30D2 = func_800E0C44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C44_30D2);
        r4 = static_cast<uint32_t>(regargs_result_800E0C44_30D2 >> 32);
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
        InvokeDirectCpu<0x800E0C44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r17 = 0;
    goto loc_802FA2B8;
}

loc_802FA298:
{
    r0 = MemoryInline::FlatRead8(r22);
}

loc_802FA2A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r17))) {
        goto loc_802FA2B4;
    }
}

loc_802FA2A4:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r4 = r17;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_802FA2B4:
{
    r17 = (r17 + 1);
}

loc_802FA2B8:
{
}

loc_802FA2BC:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r19))) {
        goto loc_802FA298;
    }
}

loc_802FA2C0:
{
    r22 = (r22 + 1);
    r25 = (r25 + 12);
    r23 = (r23 + 12);
    r24 = (r24 + 1);
}

loc_802FA2D0:
{
    r0 = MemoryInline::FlatRead32(r21);
}

loc_802FA2D8:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r0))) {
        goto loc_802FA14C;
    }
}

loc_802FA2DC:
{
    r0 = 0;
    r0 = (r0 * 25);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_0 = MemoryInline::ResolveRangeHost((r21 + 778), 0, 18u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r21 + 778), static_cast<uint16_t>(r4));
    r0 = 1;
    r0 = (r0 * 25);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r21 + 780), static_cast<uint16_t>(r3));
    r0 = r4;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r21 + 782), static_cast<uint16_t>(r4));
    r4 = r3;
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r21 + 784), static_cast<uint16_t>(r3));
    r3 = r0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r21 + 786), static_cast<uint16_t>(r0));
    r0 = r4;
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r21 + 788), static_cast<uint16_t>(r4));
    r4 = r3;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r21 + 790), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r21 + 792), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r21 + 794), static_cast<uint16_t>(r4));
    r3 = r20;
    ctx->lr = 0x802FA334u;
    if constexpr (KnownRegArgsCpuCall<0x802FA3A0u>(&func_802FA3A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802FA3A0_3EB3 = func_802FA3A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FA3A0_3EB3);
        r4 = static_cast<uint32_t>(regargs_result_802FA3A0_3EB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802FA3A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802FA334:
{
    r0 = 200;
    addr_psqx_802FA338_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA338_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r1 + 192));
    r0 = 184;
    addr_psqx_802FA344_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA344_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r1 + 176));
    r0 = 168;
    addr_psqx_802FA350_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA350_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 160));
    r0 = 152;
    addr_psqx_802FA35C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA35C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 144));
    r0 = 136;
    addr_psqx_802FA368_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA368_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 128));
    r0 = 120;
    addr_psqx_802FA374_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA374_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 112));
    r0 = 104;
    addr_psqx_802FA380_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802FA380_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -4));
    // end of inlined leaf 0x804574AC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F9F4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F9F4C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFE3FFF gpr_write=0xFFFE1FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F9F4C func_802F9F4C preserves=false fpr_mask=0xFE000000
