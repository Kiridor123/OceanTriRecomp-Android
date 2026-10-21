#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804EEE30(CpuContext* ctx);
extern "C" uint64_t func_804EEE30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EF250(CpuContext* ctx);
extern "C" uint64_t func_804EF250_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804F93B0(CpuContext* ctx);
extern "C" double func_804F93B0_ra38_196_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_804F8B60_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804F8B60u);
    goto loc_804F8B60;

loc_804F8B60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    r6 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r31 = r4;
    r30 = r3;
    r29 = r5;
    r0 = MemoryInline::FlatRead8((r4 + 41));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F9084;
    }
}

loc_804F8BB4:
{
    ctx->lr = 0x804F8BB8u;
    if constexpr (KnownRegArgsCpuCall<0x804EF250u>(&func_804EF250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EF250_EB9 = func_804EF250_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF250_EB9);
        r4 = static_cast<uint32_t>(regargs_result_804EF250_EB9 >> 32);
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
        InvokeDirectCpu<0x804EF250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 + -1);
}

loc_804F8BC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804F8BD4;
    }
}

loc_804F8BC4:
{
    r0 = (r3 + -4);
}

loc_804F8BCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804F8D6C;
    }
}

loc_804F8BD0:
{
    goto loc_804F9084;
}

loc_804F8BD4:
{
    r3 = r30;
    r5 = (r1 + 64);
    r4 = 0;
    ctx->lr = 0x804F8BE4u;
    if constexpr (KnownRegArgsCpuCall<0x804EEE30u>(&func_804EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804EEE30_13C0 = func_804EEE30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EEE30_13C0);
        r4 = static_cast<uint32_t>(regargs_result_804EEE30_13C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_804F8BE8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804F8C18;
    }
}

loc_804F8BEC:
{
    r5 = MemoryInline::FlatRead32((r1 + 64));
    r3 = (r31 + 2);
    r0 = MemoryInline::FlatRead16((r1 + 68));
    r4 = (r31 + 4);
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r5 = (r31 + 6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1616));
    r6 = (r1 + 48);
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804F93B0u>(&func_804F93B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_804F93B0_19C0 = func_804F93B0_ra38_196_0_2(ctx, r3, r4, r5, f1.d, f2.d, f4.d, f7.d, f8.d);
        f1.d = regargs_result_804F93B0_19C0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x804F93B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    goto loc_804F9084;
}

loc_804F8C18:
{
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r5 = MemoryInline::FlatRead16((r1 + 68));
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r0 = (r0 ^ -2147483648);
    r30 = MemoryInline::FlatRead16((r1 + 42));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r29 ^ -2147483648);
    r4 = MemoryInline::FlatRead16((r31 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r30 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    r0 = (r3 ^ -2147483648);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f2.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1612));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r5));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = PpcFmulsInline(f29.d, f29.d);
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f3.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804F8CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F8CF4;
    }
}

loc_804F8CD0:
{
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_2A6D = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_2A6D);
        r4 = static_cast<uint32_t>(regargs_result_80468848_2A6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1616));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = PpcFmulsInline(f29.d, f0.d);
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
}

loc_804F8CF4:
{
    r3 = MemoryInline::FlatRead16((r1 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r29 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f2.d = PpcFmulsInline(f29.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    r3 = fctiwzword0;
    r4 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    goto loc_804F9084;
}

loc_804F8D6C:
{
    r3 = r30;
    r5 = (r1 + 64);
    r4 = 0;
    ctx->lr = 0x804F8D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EEE30u>(&func_804EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804EEE30_3686 = func_804EEE30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EEE30_3686);
        r4 = static_cast<uint32_t>(regargs_result_804EEE30_3686 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r30;
    r5 = (r1 + 56);
    r4 = 1;
    ctx->lr = 0x804F8D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EEE30u>(&func_804EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804EEE30_3A81 = func_804EEE30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EEE30_3A81);
        r4 = static_cast<uint32_t>(regargs_result_804EEE30_3A81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_804F8D90:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804F8DE8;
    }
}

loc_804F8D94:
{
    r5 = MemoryInline::FlatRead32((r1 + 64));
    r3 = (r31 + 2);
    r0 = MemoryInline::FlatRead16((r1 + 68));
    r4 = (r31 + 4);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r5 = (r31 + 6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1616));
    r6 = (r1 + 32);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804F93B0u>(&func_804F93B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_804F93B0_4081 = func_804F93B0_ra38_196_0_2(ctx, r3, r4, r5, f1.d, f2.d, f4.d, f7.d, f8.d);
        f1.d = regargs_result_804F93B0_4081;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x804F93B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    r5 = MemoryInline::FlatRead32((r1 + 56));
    r3 = (r31 + 42);
    r0 = MemoryInline::FlatRead16((r1 + 60));
    r4 = (r31 + 44);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r5 = (r31 + 46);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1608));
    r6 = (r1 + 24);
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804F93B0u>(&func_804F93B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_804F93B0_47C5 = func_804F93B0_ra38_196_0_2(ctx, r3, r4, r5, f1.d, f2.d, f4.d, f7.d, f8.d);
        f1.d = regargs_result_804F93B0_47C5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x804F93B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    goto loc_804F9084;
}

loc_804F8DE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r5 = MemoryInline::FlatRead16((r1 + 68));
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    r0 = (r0 ^ -2147483648);
    r29 = MemoryInline::FlatRead16((r1 + 18));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = (r30 ^ -2147483648);
    r4 = MemoryInline::FlatRead16((r31 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r29 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    r0 = (r3 ^ -2147483648);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f2.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1612));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r5));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f3.d = PpcFmulsInline(f29.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804F8E9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F8EC4;
    }
}

loc_804F8EA0:
{
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_5872 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_5872);
        r4 = static_cast<uint32_t>(regargs_result_80468848_5872 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1616));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
}

loc_804F8EC4:
{
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r5 = (r30 ^ -2147483648);
    r0 = (r3 ^ -2147483648);
    r3 = MemoryInline::FlatRead16((r31 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    r4 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f4.d = PpcFmulsInline(f31.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    r3 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f5.d = PPC_Fctiwz(f4.d);
    r0 = MemoryInline::FlatRead16((r31 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f4.d = PPC_Fctiwz(f3.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f5.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f5.d);
    r3 = (r0 ^ -2147483648);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    fctiwzword4 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    fctiwzword5 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f3.d);
    r5 = fctiwzword3;
    r4 = fctiwzword4;
    r0 = fctiwzword5;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r5));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1604));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead16((r1 + 60));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r29 = MemoryInline::FlatRead16((r1 + 10));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r4 = (r29 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f1.d));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f3.d = PpcFmulsInline(f29.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804F8FE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F9010;
    }
}

loc_804F8FEC:
{
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_6F91 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_6F91);
        r4 = static_cast<uint32_t>(regargs_result_80468848_6F91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1608));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
}

loc_804F9010:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r30 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f1.d);
    fctiwzword7 = PPC_FprLowWordInline(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    r3 = fctiwzword6;
    r4 = fctiwzword7;
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword8;
    MemoryInline::FlatWrite16((r31 + 42), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 46), static_cast<uint16_t>(r0));
}

loc_804F9084:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F8B60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F8B60_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE00007FF fpr_write=0xE00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F8B60 func_804F8B60 preserves=true fpr_mask=0x00000000
