#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80128AF0(CpuContext* ctx);
extern "C" uint64_t func_80128AF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801B992C(CpuContext* ctx);
extern "C" uint64_t func_801B992C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802916A0(CpuContext* ctx);
extern "C" uint64_t func_802916A0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_801B99CC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_801BA010_loc_0 = 0;
    uint32_t addr_psqx_801BA01C_loc_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801B99CC;

loc_801B99CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r27 = r4;
    r31 = (r3 + 2820);
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    r29 = 0;
    r3 = 0;
    MemoryInline::FlatWrite8((r28 + 808), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 809), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite16((r28 + 812), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 814), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 10));
    r0 = (r0 & 2);
}

loc_801B9A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9A44;
    }
}

loc_801B9A34:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19736));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 460), f0.d);
}

loc_801B9A44:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    r0 = (r0 & 4);
}

loc_801B9A50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9A70;
    }
}

loc_801B9A54:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19732));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 460), f0.d);
    r3 = r28;
    r4 = 20;
    ctx->lr = 0x801B9A70u;
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
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
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

loc_801B9A70:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_801B9A78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801B9AA4;
    }
}

loc_801B9A7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19728));
    MemoryInline::FlatWriteFloat32((r28 + 460), f0.d);
    r3 = r28;
    r4 = 5;
    ctx->lr = 0x801B9A90u;
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
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
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
    r0 = 1800;
    MemoryInline::FlatWrite16((r28 + 810), static_cast<uint16_t>(r0));
    r3 = r28;
    ctx->lr = 0x801B9AA0u;
    if constexpr (KnownRegArgsCpuCall<0x801B992Cu>(&func_801B992C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801B992C_19DD = func_801B992C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801B992C_19DD);
        r4 = static_cast<uint32_t>(regargs_result_801B992C_19DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B992Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r28 + 816), r3);
}

loc_801B9AA4:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_801B9AAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801B9AD4;
    }
}

loc_801B9AB0:
{
}

loc_801B9AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801B9AD4;
    }
}

loc_801B9AB8:
{
}

loc_801B9ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801B9AE0;
    }
}

loc_801B9AC0:
{
}

loc_801B9AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_801B9AE0;
    }
}

loc_801B9AC8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1889), static_cast<uint8_t>(r0));
    goto loc_801B9AE8;
}

loc_801B9AD4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 1889), static_cast<uint8_t>(r0));
    goto loc_801B9AE8;
}

loc_801B9AE0:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 1889), static_cast<uint8_t>(r0));
}

loc_801B9AE8:
{
    r0 = (r27 & 255);
}

loc_801B9AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9B00;
    }
}

loc_801B9AF4:
{
}

loc_801B9AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801B9CDC;
    }
}

loc_801B9AFC:
{
    goto loc_801B9FC8;
}

loc_801B9B00:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_801B9B08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801B9FC8;
    }
}

loc_801B9B0C:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_801B9B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9FC8;
    }
}

loc_801B9B18:
{
    r3 = (r28 + 392);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r31 + 12));
    MemoryInline::FlatWrite32((r28 + 448), r0);
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 & 1);
}

loc_801B9B38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9B50;
    }
}

loc_801B9B3C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 444), r0);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19724));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    goto loc_801B9B58;
}

loc_801B9B50:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19716));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19712));
}

loc_801B9B58:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 & 2);
}

loc_801B9B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9B70;
    }
}

loc_801B9B68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 452), r0);
}

loc_801B9B70:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r28 + 448));
    ctx->lr = 0x801B9B8Cu;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = (r1 + 56);
    r4 = (r28 + 392);
    r5 = (r1 + 68);
    ctx->lr = 0x801B9B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2DA2 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2DA2);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2DA2 >> 32);
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
    r3 = (r28 + 832);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 396));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 524));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801B9BBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9BD0;
    }
}

loc_801B9BC0:
{
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_801B9BC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801B9BD0;
    }
}

loc_801B9BC8:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    goto loc_801B9BD4;
}

loc_801B9BD0:
{
    f30.d = MemoryInline::FlatReadFloat32((r28 + 396));
}

loc_801B9BD4:
{
    r3 = (r28 + 832);
    r4 = 65536;
    r4 = (r4 + -8197);
    r5 = MemoryInline::FlatRead8((r28 + 481));
    ctx->lr = 0x801B9BE8u;
    if constexpr (KnownRegArgsCpuCall<0x802916A0u>(&func_802916A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802916A0_35FA = func_802916A0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802916A0_35FA);
        r4 = static_cast<uint32_t>(regargs_result_802916A0_35FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802916A0u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_801B9BEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9BF8;
    }
}

loc_801B9BF0:
{
    MemoryInline::FlatWriteFloat32((r28 + 836), f1.d);
    goto loc_801B9C14;
}

loc_801B9BF8:
{
    r30 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 836), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 809), static_cast<uint8_t>(r0));
}

loc_801B9C14:
{
}

loc_801B9C18:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801B9C98;
    }
}

loc_801B9C1C:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = f1.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r28 + 448));
    ctx->lr = 0x801B9C3Cu;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = (r1 + 44);
    r4 = (r28 + 832);
    r5 = (r1 + 68);
    ctx->lr = 0x801B9C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_43A6 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_43A6);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_43A6 >> 32);
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
    r3 = (r28 + 820);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 820);
    r4 = 65536;
    r4 = (r4 + -8197);
    r5 = MemoryInline::FlatRead8((r28 + 481));
    ctx->lr = 0x801B9C6Cu;
    if constexpr (KnownRegArgsCpuCall<0x802916A0u>(&func_802916A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802916A0_48FC = func_802916A0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802916A0_48FC);
        r4 = static_cast<uint32_t>(regargs_result_802916A0_48FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802916A0u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 836));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801B9C7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9C88;
    }
}

loc_801B9C80:
{
    MemoryInline::FlatWriteFloat32((r28 + 824), f1.d);
    goto loc_801B9CA4;
}

loc_801B9C88:
{
    MemoryInline::FlatWriteFloat32((r28 + 824), f2.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 809), static_cast<uint8_t>(r0));
    goto loc_801B9CA4;
}

loc_801B9C98:
{
    r3 = (r28 + 820);
    r4 = (r28 + 832);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_801B9CA4:
{
    r3 = (r28 + 392);
    r4 = (r28 + 820);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r28 + 809));
}

loc_801B9CB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B9FC8;
    }
}

loc_801B9CBC:
{
    r3 = r28;
    r4 = 11;
    r5 = 56;
    ctx->lr = 0x801B9CCCu;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_53A8 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_53A8);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_53A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r28;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    r29 = 1;
    goto loc_801B9FC8;
}

loc_801B9CDC:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_801B9CE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801B9FC8;
    }
}

loc_801B9CE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_801B9CF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B9DBC;
    }
}

loc_801B9CF4:
{
    r3 = r31;
    r4 = (r28 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r28 + 448));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r28 + 444));
}

loc_801B9D1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9D28;
    }
}

loc_801B9D20:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_801B9D28:
{
    r0 = MemoryInline::FlatRead32((r28 + 452));
}

loc_801B9D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9D40;
    }
}

loc_801B9D34:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_801B9D40:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 444));
}

loc_801B9D50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B9D70;
    }
}

loc_801B9D54:
{
    r3 = r28;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x801B9D64u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_63CB = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_63CB);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_63CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19716));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19712));
    goto loc_801B9D90;
}

loc_801B9D70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 444), r0);
    r3 = r28;
    r4 = 2;
    r5 = 1;
    ctx->lr = 0x801B9D88u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_6D2B = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_6D2B);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_6D2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19724));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19720));
}

loc_801B9D90:
{
    r0 = MemoryInline::FlatRead32((r28 + 452));
}

loc_801B9D98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B9DA8;
    }
}

loc_801B9D9C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 815), static_cast<uint8_t>(r0));
    goto loc_801B9E48;
}

loc_801B9DA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 452), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 815), static_cast<uint8_t>(r0));
    goto loc_801B9E48;
}

loc_801B9DBC:
{
    r3 = (r28 + 392);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r31 + 12));
    MemoryInline::FlatWrite32((r28 + 448), r0);
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 & 1);
}

loc_801B9DDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9E04;
    }
}

loc_801B9DE0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 444), r0);
    r3 = r28;
    r4 = 2;
    r5 = 1;
    ctx->lr = 0x801B9DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_7A43 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_7A43);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_7A43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19724));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    goto loc_801B9E1C;
}

loc_801B9E04:
{
    r3 = r28;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x801B9E14u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_8365 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_8365);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_8365 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19716));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19712));
}

loc_801B9E1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 & 2);
}

loc_801B9E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9E40;
    }
}

loc_801B9E2C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 452), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 815), static_cast<uint8_t>(r0));
    goto loc_801B9E48;
}

loc_801B9E40:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 815), static_cast<uint8_t>(r0));
}

loc_801B9E48:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r28 + 448));
    ctx->lr = 0x801B9E64u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = (r1 + 32);
    r4 = (r28 + 392);
    r5 = (r1 + 68);
    ctx->lr = 0x801B9E74u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_92E5 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_92E5);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_92E5 >> 32);
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
    r3 = (r28 + 832);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 396));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 524));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801B9E94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9EA8;
    }
}

loc_801B9E98:
{
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_801B9E9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801B9EA8;
    }
}

loc_801B9EA0:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    goto loc_801B9EAC;
}

loc_801B9EA8:
{
    f30.d = MemoryInline::FlatReadFloat32((r28 + 396));
}

loc_801B9EAC:
{
    r3 = (r28 + 832);
    r4 = 65536;
    r4 = (r4 + -8197);
    r5 = MemoryInline::FlatRead8((r28 + 481));
    ctx->lr = 0x801B9EC0u;
    if constexpr (KnownRegArgsCpuCall<0x802916A0u>(&func_802916A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802916A0_9B3D = func_802916A0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802916A0_9B3D);
        r4 = static_cast<uint32_t>(regargs_result_802916A0_9B3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802916A0u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_801B9EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9ED0;
    }
}

loc_801B9EC8:
{
    MemoryInline::FlatWriteFloat32((r28 + 836), f1.d);
    goto loc_801B9EEC;
}

loc_801B9ED0:
{
    r30 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 836), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 809), static_cast<uint8_t>(r0));
}

loc_801B9EEC:
{
}

loc_801B9EF0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801B9F70;
    }
}

loc_801B9EF4:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = f1.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r28 + 448));
    ctx->lr = 0x801B9F14u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = (r1 + 20);
    r4 = (r28 + 832);
    r5 = (r1 + 68);
    ctx->lr = 0x801B9F24u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_A8E9 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_A8E9);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_A8E9 >> 32);
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
    r3 = (r28 + 820);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 820);
    r4 = 65536;
    r4 = (r4 + -8197);
    r5 = MemoryInline::FlatRead8((r28 + 481));
    ctx->lr = 0x801B9F44u;
    if constexpr (KnownRegArgsCpuCall<0x802916A0u>(&func_802916A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802916A0_AE3F = func_802916A0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802916A0_AE3F);
        r4 = static_cast<uint32_t>(regargs_result_802916A0_AE3F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802916A0u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19720));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 836));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801B9F54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9F60;
    }
}

loc_801B9F58:
{
    MemoryInline::FlatWriteFloat32((r28 + 824), f1.d);
    goto loc_801B9F7C;
}

loc_801B9F60:
{
    MemoryInline::FlatWriteFloat32((r28 + 824), f2.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 809), static_cast<uint8_t>(r0));
    goto loc_801B9F7C;
}

loc_801B9F70:
{
    r3 = (r28 + 820);
    r4 = (r28 + 832);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_801B9F7C:
{
    r3 = (r1 + 8);
    r4 = (r28 + 392);
    r5 = (r28 + 820);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r28 + 844);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 392);
    r4 = (r28 + 820);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r28 + 809));
}

loc_801B9FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B9FBC;
    }
}

loc_801B9FB0:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_801B9FBC:
{
    r3 = r28;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    r29 = 1;
}

loc_801B9FC8:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_801B9FD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801B9FF4;
    }
}

loc_801B9FD4:
{
}

loc_801B9FD8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801B9FF4;
    }
}

loc_801B9FDC:
{
    r3 = r28;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x801B9FECu;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128AF0_BD23 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_BD23);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_BD23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r28;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
}

loc_801B9FF4:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    r0 = (r0 & 1);
}

loc_801BA000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BA00C;
    }
}

loc_801BA004:
{
    r3 = r28;
    // inline leaf 0x80131ED8 (3 guest instruction(s))
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 2074), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131ED8
}

loc_801BA00C:
{
    r0 = 136;
    addr_psqx_801BA010_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801BA010_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 128));
    r0 = 120;
    addr_psqx_801BA01C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801BA01C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B99CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B99CC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B99CC func_801B99CC preserves=true fpr_mask=0x00000000
