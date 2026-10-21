#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804BE210(CpuContext* ctx);
extern "C" double func_804BE210_ra18_e_0_2(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_804BE2D0(CpuContext* ctx);
extern "C" uint64_t func_804BE2D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BE470(CpuContext* ctx);
extern "C" uint64_t func_804BE470_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_804BE5A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x804BE5A0u);
    goto loc_804BE5A0;

loc_804BE5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r31 = r4;
    r30 = r3;
    r6 = MemoryInline::FlatRead8((r4 + 54));
    stackword4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r0 = (r6 + -1);
}

loc_804BE5D0:
{
    stackword5 = r5;
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804BE5F8;
    }
}

loc_804BE5D8:
{
    r0 = (r6 + -4);
}

loc_804BE5E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804BE5F8;
    }
}

loc_804BE5E4:
{
    r0 = (r6 + -7);
}

loc_804BE5EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804BE5F8;
    }
}

loc_804BE5F0:
{
}

loc_804BE5F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(11))) {
        goto loc_804BE9E8;
    }
}

loc_804BE5F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1296));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword6));
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20280));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE63C;
    }
}

loc_804BE62C:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE648;
    }
}

loc_804BE638:
{
    goto loc_804BE64C;
}

loc_804BE63C:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE640:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE648;
    }
}

loc_804BE644:
{
    goto loc_804BE64C;
}

loc_804BE648:
{
    f4.d = f1.d;
}

loc_804BE64C:
{
    MemoryInline::FlatWriteFloat32((r3 + 1240), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1304));
    r0 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20280));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE680:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE694;
    }
}

loc_804BE684:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE68C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE6A0;
    }
}

loc_804BE690:
{
    goto loc_804BE6A4;
}

loc_804BE694:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE698:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE6A0;
    }
}

loc_804BE69C:
{
    goto loc_804BE6A4;
}

loc_804BE6A0:
{
    f4.d = f1.d;
}

loc_804BE6A4:
{
    MemoryInline::FlatWriteFloat32((r3 + 1244), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1300));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword8));
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20280));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE6D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE6E8;
    }
}

loc_804BE6D8:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE6E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE6F4;
    }
}

loc_804BE6E4:
{
    goto loc_804BE6F8;
}

loc_804BE6E8:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE6EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE6F4;
    }
}

loc_804BE6F0:
{
    goto loc_804BE6F8;
}

loc_804BE6F4:
{
    f4.d = f1.d;
}

loc_804BE6F8:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r30 + 12);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 1248), f4.d);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1240));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_1CCB = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_1CCB;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1244));
    r3 = r30;
    r4 = (r30 + 16);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_20A2 = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_20A2;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1248));
    r3 = r30;
    r4 = (r30 + 20);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_2479 = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_2479;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_29B6 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_29B6);
        r4 = static_cast<uint32_t>(regargs_result_80468848_29B6 >> 32);
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f6.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_3261 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_3261);
        r4 = static_cast<uint32_t>(regargs_result_80468848_3261 >> 32);
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    ctx->lr = 0x804BE7C8u;
    if constexpr (KnownRegArgsCpuCall<0x804BE2D0u>(&func_804BE2D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE2D0_376F = func_804BE2D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BE2D0_376F);
        r4 = static_cast<uint32_t>(regargs_result_804BE2D0_376F >> 32);
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
        InvokeDirectCpu<0x804BE2D0u>(ctx);
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
    }
    r3 = r30;
    ctx->lr = 0x804BE7D0u;
    if constexpr (KnownRegArgsCpuCall<0x804BE470u>(&func_804BE470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE470_3E54 = func_804BE470_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_804BE470_3E54);
        r4 = static_cast<uint32_t>(regargs_result_804BE470_3E54 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE470u>(ctx);
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
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r31 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BE9E8;
    }
}

loc_804BE7DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_804BE7E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804BE9E8;
    }
}

loc_804BE7E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 54));
}

loc_804BE7F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_804BE800;
    }
}

loc_804BE7F4:
{
}

loc_804BE7F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804BE800;
    }
}

loc_804BE7FC:
{
    goto loc_804BE9E8;
}

loc_804BE800:
{
    r0 = MemoryInline::FlatRead16((r31 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1308));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20276));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE844;
    }
}

loc_804BE834:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE83C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE850;
    }
}

loc_804BE840:
{
    goto loc_804BE854;
}

loc_804BE844:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE848:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE850;
    }
}

loc_804BE84C:
{
    goto loc_804BE854;
}

loc_804BE850:
{
    f4.d = f1.d;
}

loc_804BE854:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = MemoryInline::FlatRead16((r31 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1316));
    r0 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20276));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE89C;
    }
}

loc_804BE88C:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE894:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE8A8;
    }
}

loc_804BE898:
{
    goto loc_804BE8AC;
}

loc_804BE89C:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE8A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE8A8;
    }
}

loc_804BE8A4:
{
    goto loc_804BE8AC;
}

loc_804BE8A8:
{
    f4.d = f1.d;
}

loc_804BE8AC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1312));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f4.d = MemoryInline::FlatReadFloat32((r13 + -20276));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE8DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE8F0;
    }
}

loc_804BE8E0:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE8E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BE8FC;
    }
}

loc_804BE8EC:
{
    goto loc_804BE900;
}

loc_804BE8F0:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_804BE8F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE8FC;
    }
}

loc_804BE8F8:
{
    goto loc_804BE900;
}

loc_804BE8FC:
{
    f4.d = f1.d;
}

loc_804BE900:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    r0 = MemoryInline::FlatRead8((r30 + 1374));
}

loc_804BE90C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE924;
    }
}

loc_804BE910:
{
    r4 = (r1 + 32);
    r3 = 0x80750000u;
    r5 = r4;
    r3 = (r3 + -20512);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6F20u>(ctx);
}

loc_804BE924:
{
    r6 = MemoryInline::FlatRead32((r30 + 104));
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r30 + 108));
    r4 = (r30 + 104);
    r0 = MemoryInline::FlatRead32((r30 + 112));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_589E = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_589E;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = r30;
    r4 = (r30 + 108);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_5C73 = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_5C73;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r3 = r30;
    r4 = (r30 + 112);
    if constexpr (KnownRegArgsCpuCall<0x804BE210u>(&func_804BE210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BE210_6048 = func_804BE210_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_804BE210_6048;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE210u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_6588 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_6588);
        r4 = static_cast<uint32_t>(regargs_result_80468848_6588 >> 32);
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 116), f6.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_6E35 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_6E35);
        r4 = static_cast<uint32_t>(regargs_result_80468848_6E35 >> 32);
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
}

loc_804BE9E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

extern "C" void func_804BE5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BE5A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE00007FF fpr_write=0xE00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BE5A0 func_804BE5A0 preserves=true fpr_mask=0x00000000
