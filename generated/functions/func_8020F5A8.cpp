#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80208BAC(CpuContext* ctx);
extern "C" uint32_t func_80208BAC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8020A770(CpuContext* ctx);
extern "C" uint64_t func_8020A770_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501788(CpuContext* ctx);
extern "C" uint32_t func_80501788_ra10_1e_10_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_8020F5A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8020F5A8;

loc_8020F5A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8020F5CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8020F83C;
    }
}

loc_8020F5D0:
{
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r4 = MemoryInline::FlatRead16((r31 + 12));
    if constexpr (KnownRegArgsCpuCall<0x80208BACu>(&func_80208BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80208BAC_94A = func_80208BAC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80208BAC_94A;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80208BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8020F5E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8020F83C;
    }
}

loc_8020F5E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r31 + 148), f0.d);
    r3 = (r31 + 60);
    r4 = (r31 + 144);
    ctx->lr = 0x8020F5F8u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_D79 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_D79);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_D79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    f2.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8020F620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8020F630;
    }
}

loc_8020F624:
{
}

loc_8020F628:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020F764;
    }
}

loc_8020F62C:
{
    goto loc_8020F830;
}

loc_8020F630:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + -1);
}

loc_8020F63C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8020F654;
    }
}

loc_8020F640:
{
}

loc_8020F644:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020F6E4;
    }
}

loc_8020F648:
{
}

loc_8020F64C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8020F7C4;
    }
}

loc_8020F650:
{
    goto loc_8020F830;
}

loc_8020F654:
{
    r4 = MemoryInline::FlatRead16((r31 + 180));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r3 = MemoryInline::FlatRead16((r3 + 5772));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
}

loc_8020F66C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8020F694;
    }
}

loc_8020F670:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F678:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020F694;
    }
}

loc_8020F67C:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8020F690u;
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
    InvokeDirectCpu<0x8020A448u>(ctx);
    r0 = ctx->gpr[0];
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
    goto loc_8020F830;
}

loc_8020F694:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16032));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F69C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020F6CC;
    }
}

loc_8020F6A0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 180), static_cast<uint16_t>(r0));
    r3 = (r31 + 60);
    r4 = (r31 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
    r4 = 1;
    r5 = 3;
    r6 = 0;
    ctx->lr = 0x8020F6C8u;
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
    InvokeDirectCpu<0x8020A448u>(ctx);
    r0 = ctx->gpr[0];
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
    goto loc_8020F830;
}

loc_8020F6CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x80501788u>(&func_80501788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80501788_240A = func_80501788_ra10_1e_10_0(ctx, r4, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80501788_240A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80501788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    goto loc_8020F830;
}

loc_8020F6E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16032));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F6EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020F71C;
    }
}

loc_8020F6F0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 180), static_cast<uint16_t>(r0));
    r3 = (r31 + 60);
    r4 = (r31 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
    r4 = 0;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8020F718u;
    if constexpr (KnownRegArgsCpuCall<0x8020A770u>(&func_8020A770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8020A770_2B4A = func_8020A770_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8020A770_2B4A);
        r4 = static_cast<uint32_t>(regargs_result_8020A770_2B4A >> 32);
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
        InvokeDirectCpu<0x8020A770u>(ctx);
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
    goto loc_8020F830;
}

loc_8020F71C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F724:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8020F750;
    }
}

loc_8020F728:
{
    f1.d = f3.d;
    if constexpr (KnownRegArgsCpuCall<0x80501788u>(&func_80501788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80501788_3390 = func_80501788_ra10_1e_10_0(ctx, r4, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80501788_3390;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80501788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    r3 = r31;
    r4 = 1;
    r5 = 2;
    r6 = 0;
    ctx->lr = 0x8020F74Cu;
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
    InvokeDirectCpu<0x8020A448u>(ctx);
    r0 = ctx->gpr[0];
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
    goto loc_8020F830;
}

loc_8020F750:
{
    f1.d = f3.d;
    if constexpr (KnownRegArgsCpuCall<0x80501788u>(&func_80501788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80501788_3C14 = func_80501788_ra10_1e_10_0(ctx, r4, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80501788_3C14;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80501788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    goto loc_8020F830;
}

loc_8020F764:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_8020F76C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020F830;
    }
}

loc_8020F770:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020F79C;
    }
}

loc_8020F774:
{
}

loc_8020F778:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_8020F790;
    }
}

loc_8020F77C:
{
}

loc_8020F780:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8020F7C4;
    }
}

loc_8020F784:
{
}

loc_8020F788:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8020F830;
    }
}

loc_8020F78C:
{
    goto loc_8020F7C4;
}

loc_8020F790:
{
}

loc_8020F794:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_8020F7C4;
    }
}

loc_8020F798:
{
    goto loc_8020F830;
}

loc_8020F79C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_8020F7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020F830;
    }
}

loc_8020F7A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020F7B4;
    }
}

loc_8020F7A8:
{
}

loc_8020F7AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(19))) {
        goto loc_8020F83C;
    }
}

loc_8020F7B0:
{
    goto loc_8020F7C4;
}

loc_8020F7B4:
{
}

loc_8020F7B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_8020F7C4;
    }
}

loc_8020F7BC:
{
}

loc_8020F7C0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(41))) {
        goto loc_8020F830;
    }
}

loc_8020F7C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F7CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8020F7FC;
    }
}

loc_8020F7D0:
{
    r3 = r31;
    r4 = 1;
    r5 = 2;
    r6 = 0;
    ctx->lr = 0x8020F7E4u;
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
    InvokeDirectCpu<0x8020A448u>(ctx);
    r0 = ctx->gpr[0];
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x80501788u>(&func_80501788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80501788_4CE9 = func_80501788_ra10_1e_10_0(ctx, r4, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80501788_4CE9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80501788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    goto loc_8020F830;
}

loc_8020F7FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16180));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020F804:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8020F830;
    }
}

loc_8020F808:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x80501788u>(&func_80501788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80501788_5353 = func_80501788_ra10_1e_10_0(ctx, r4, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80501788_5353;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80501788u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8020F830u;
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
    InvokeDirectCpu<0x8020A448u>(ctx);
    r0 = ctx->gpr[0];
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

loc_8020F830:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x8026A350 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWrite8((r3 + 246), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8026A350
}

loc_8020F83C:
{
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8020F5A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020F5A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020F5A8 func_8020F5A8 preserves=true fpr_mask=0x00000000
