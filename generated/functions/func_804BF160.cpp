#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BF160_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804BF160u);
    goto loc_804BF160;

loc_804BF160:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF190;
    }
}

loc_804BF184:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    goto loc_804BF714;
}

loc_804BF190:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1224));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f3.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1228));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 94));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF1F8;
    }
}

loc_804BF1CC:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r3 + 52), r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r4 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    MemoryInline::FlatWrite32((r3 + 64), r0);
    MemoryInline::FlatWrite32((r3 + 60), r4);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    goto loc_804BF3C0;
}

loc_804BF1F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_F1A = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_F1A);
        r4 = static_cast<uint32_t>(regargs_result_80468848_F1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r30 + 1380));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
}

loc_804BF22C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF2F4;
    }
}

loc_804BF230:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 184));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804BF238:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF248;
    }
}

loc_804BF240:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    goto loc_804BF254;
}

loc_804BF248:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f4.d = PpcFmulsInline(f4.d, f4.d);
    f4.d = PpcFmulsInline(f4.d, f4.d);
}

loc_804BF254:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_19C1 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_19C1);
        r4 = static_cast<uint32_t>(regargs_result_80468848_19C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_219E = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_219E);
        r4 = static_cast<uint32_t>(regargs_result_80468848_219E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWrite32((r30 + 52), r3);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    goto loc_804BF3C0;
}

loc_804BF2F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 184));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804BF2FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BF3A8;
    }
}

loc_804BF300:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_2BA2 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_2BA2);
        r4 = static_cast<uint32_t>(regargs_result_80468848_2BA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_337F = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_337F);
        r4 = static_cast<uint32_t>(regargs_result_80468848_337F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWrite32((r30 + 52), r3);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    goto loc_804BF3C0;
}

loc_804BF3A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWrite32((r30 + 60), r3);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_804BF3C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1348));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1220));
    r0 = MemoryInline::FlatRead8((r30 + 94));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF3EC;
    }
}

loc_804BF3D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_804BF4DC;
}

loc_804BF3EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BF3FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BF408;
    }
}

loc_804BF400:
{
    f3.d = (-(f4.d));
    goto loc_804BF40C;
}

loc_804BF408:
{
    f3.d = f4.d;
}

loc_804BF40C:
{
    r0 = MemoryInline::FlatRead32((r30 + 1384));
}

loc_804BF414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF47C;
    }
}

loc_804BF418:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 192));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804BF420:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF430;
    }
}

loc_804BF428:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    goto loc_804BF43C;
}

loc_804BF430:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
}

loc_804BF43C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BF464;
    }
}

loc_804BF458:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_804BF468;
}

loc_804BF464:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_804BF468:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_804BF4DC;
}

loc_804BF47C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 192));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804BF484:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BF4D0;
    }
}

loc_804BF488:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF4A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BF4B8;
    }
}

loc_804BF4AC:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_804BF4BC;
}

loc_804BF4B8:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_804BF4BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_804BF4DC;
}

loc_804BF4D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_804BF4DC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 94), 0, 1138u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1134u, (r30 + 1228));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 130u, (r30 + 224));
    f1.d = (-(f2.d));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 94));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1130u, (r30 + 1224));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 126u, (r30 + 220));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 194u, (r30 + 288));
    f2.d = PpcFmulsInline(f1.d, f4.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 206u, (r30 + 300));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 198u, (r30 + 292));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 210u, (r30 + 304));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -2204));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 122u, (r30 + 216));
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 118u, (r30 + 212));
    f5.d = PpcFmulsInline(f8.d, f6.d);
    f9.d = PpcFmulsInline(f3.d, f7.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 134u, (r30 + 228));
    f7.d = PpcFmulsInline(f2.d, f7.d);
    f0.d = PpcFmulsInline(f3.d, f5.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 138u, (r30 + 232));
    f8.d = PpcFmulsInline(f2.d, f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 142u, (r30 + 236));
    f2.d = (-(f4.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f0.d = (-(f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f7.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f6.d = PpcFmulsInline(f5.d, f6.d);
    f5.d = PpcFmulsInline(f5.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f6.d);
    f3.d = PpcFmulsInline(f2.d, f6.d);
    f2.d = PpcFmulsInline(f1.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF5D0;
    }
}

loc_804BF5A4:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r30 + 32), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWrite32((r30 + 36), r0);
    r3 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    goto loc_804BF710;
}

loc_804BF5D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_5ACF = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_5ACF);
        r4 = static_cast<uint32_t>(regargs_result_80468848_5ACF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r30 + 1376));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
}

loc_804BF604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF688;
    }
}

loc_804BF608:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BF610:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF620;
    }
}

loc_804BF618:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    goto loc_804BF62C;
}

loc_804BF620:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
}

loc_804BF62C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_647A = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_647A);
        r4 = static_cast<uint32_t>(regargs_result_80468848_647A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_804BF710;
}

loc_804BF688:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BF690:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BF6F8;
    }
}

loc_804BF694:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_6E9A = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_6E9A);
        r4 = static_cast<uint32_t>(regargs_result_80468848_6E9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_804BF710;
}

loc_804BF6F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
}

loc_804BF710:
{
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r31));
}

loc_804BF714:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BF160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BF160_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BF160 func_804BF160 preserves=true fpr_mask=0x00000000
