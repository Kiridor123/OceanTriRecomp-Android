#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057E44(CpuContext* ctx);
extern "C" uint64_t func_80057E44_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802B4D34(CpuContext* ctx);
extern "C" uint32_t func_802B4D34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B4D88(CpuContext* ctx);
extern "C" uint64_t func_802B4D88_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_802B4EBC_ra18_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_802B5374_loc_0 = 0;
    uint32_t addr_psqx_802B5380_loc_0 = 0;
    uint32_t addr_psqx_802B538C_loc_0 = 0;
    uint32_t addr_psqx_802B5398_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802B4EBC;

loc_802B4EBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
    // inline leaf 0x8021F27C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    // end of inlined leaf 0x8021F27C
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_14F8 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_14F8;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
    // inline leaf 0x8021F28C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8021F28C
    f31.d = f1.d;
    ctx->lr = 0x802B4F20u;
    if constexpr (KnownRegArgsCpuCall<0x802B4D34u>(&func_802B4D34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802B4D34_19E6 = func_802B4D34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B4D34_19E6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B4D34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13872));
    MemoryInline::FlatWriteRam32((r1 + 36), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13792));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r28 = 7;
    r29 = 8;
    r30 = 0;
}

loc_802B4F48:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    f1.d = f30.d;
    ctx->lr = 0x802B4F54u;
    if constexpr (KnownRegArgsCpuCall<0x802B4D88u>(&func_802B4D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B4D88_1EBD = func_802B4D88_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802B4D88_1EBD);
        r4 = static_cast<uint32_t>(regargs_result_802B4D88_1EBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B4D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f29.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_802B4F5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B4F68;
    }
}

loc_802B4F60:
{
    r29 = r30;
    goto loc_802B4F7C;
}

loc_802B4F68:
{
    r28 = r30;
    f28.d = f29.d;
    r30 = (r30 + 1);
}

loc_802B4F78:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_802B4F48;
    }
}

loc_802B4F7C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_802B4F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B4F98;
    }
}

loc_802B4F88:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    f1.d = f30.d;
    ctx->lr = 0x802B4F94u;
    if constexpr (KnownRegArgsCpuCall<0x802B4D88u>(&func_802B4D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B4D88_2602 = func_802B4D88_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802B4D88_2602);
        r4 = static_cast<uint32_t>(regargs_result_802B4D88_2602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B4D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f28.d = f1.d;
}

loc_802B4F98:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_802B4FA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8))) {
        goto loc_802B4FB8;
    }
}

loc_802B4FA4:
{
    r29 = 0;
    r3 = 0;
    f1.d = f30.d;
    ctx->lr = 0x802B4FB4u;
    if constexpr (KnownRegArgsCpuCall<0x802B4D88u>(&func_802B4D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B4D88_2B8B = func_802B4D88_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802B4D88_2B8B);
        r4 = static_cast<uint32_t>(regargs_result_802B4D88_2B8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B4D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f29.d = f1.d;
}

loc_802B4FB8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r31 + r0);
}

loc_802B4FDC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_802B5004;
    }
}

loc_802B4FE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_802B4FF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802B500C;
    }
}

loc_802B4FFC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    goto loc_802B500C;
}

loc_802B5004:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f28.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f28.d));
}

loc_802B500C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 255);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -13872));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f9.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f2.d));
    f2.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f2.d);
    r7 = fctiwzword0;
    f2.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    r8 = fctiwzword1;
    f2.d = PPC_Fctiwz(f5.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r0 = fctiwzword2;
    f2.d = PPC_Fctiwz(f6.d);
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f2.d);
    r5 = fctiwzword3;
    r5 = (r5 & 255);
    r0 = (r0 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & -256);
    r6 = (r5 | r0);
    r0 = (r7 & 255);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_0 & -16777216);
    r0 = (r8 & 255);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & -65536);
    r0 = (r5 | r0);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_14 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_16 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_17 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f3.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f4.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f5.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f6.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    f2.d = PPC_Fctiwz(f3.d);
    fctiwzword4 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f2.d);
    r7 = fctiwzword4;
    f2.d = PPC_Fctiwz(f4.d);
    fctiwzword5 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f2.d);
    r8 = fctiwzword5;
    f2.d = PPC_Fctiwz(f5.d);
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f2.d);
    r0 = fctiwzword6;
    f2.d = PPC_Fctiwz(f6.d);
    fctiwzword7 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f2.d);
    r5 = fctiwzword7;
    r5 = (r5 & 255);
    r0 = (r0 & 255);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_18 & -256);
    r6 = (r5 | r0);
    r0 = (r7 & 255);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & -16777216);
    r0 = (r8 & 255);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & -65536);
    r0 = (r5 | r0);
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_20 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_21 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_22 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_23 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_25 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f4.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f5.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f0.d = PPC_Fctiwz(f3.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r5 = fctiwzword8;
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r6 = fctiwzword9;
    f0.d = PPC_Fctiwz(f5.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    r0 = fctiwzword10;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r3 = fctiwzword11;
    r3 = (r3 & 255);
    r0 = (r0 & 255);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & -256);
    r4 = (r3 | r0);
    r0 = (r5 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0 = (r6 & 255);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_27 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13788));
    r3 = 0;
    r4 = 6;
    r5 = (r1 + 8);
    ctx->lr = 0x802B5370u;
    if constexpr (KnownRegArgsCpuCall<0x80057E44u>(&func_80057E44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80057E44_6899 = func_80057E44_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80057E44_6899);
        r4 = static_cast<uint32_t>(regargs_result_80057E44_6899 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80057E44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 216;
    addr_psqx_802B5374_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B5374_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 144), 0, 88u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 208));
    r0 = 200;
    addr_psqx_802B5380_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B5380_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 192));
    r0 = 184;
    addr_psqx_802B538C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B538C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 176));
    r0 = 168;
    addr_psqx_802B5398_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B5398_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 160));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B4EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B4EBC_ra18_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B4EBC func_802B4EBC preserves=true fpr_mask=0x00000000
