#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80100790(CpuContext* ctx);
extern "C" uint64_t func_80100790_ra38_1f2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027DD44(CpuContext* ctx);
extern "C" uint64_t func_8027DD44_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80291B6C(CpuContext* ctx);
extern "C" uint64_t func_80291B6C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802D2968(CpuContext* ctx);
extern "C" uint64_t func_802D2968_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D2B20(CpuContext* ctx);
extern "C" uint64_t func_802D2B20_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_802C6174_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_802C6174;

loc_802C6174:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 36);
    ctx->lr = 0x802C6198u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_995 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_995;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D3A90 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 532), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D3A90
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D8534 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 1148), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D8534
    r4 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802C61B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802C61D0;
    }
}

loc_802C61BC:
{
}

loc_802C61C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802C6248;
    }
}

loc_802C61C4:
{
}

loc_802C61C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802C6300;
    }
}

loc_802C61CC:
{
    goto loc_802C6368;
}

loc_802C61D0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 0;
    // inline leaf 0x802D2A5C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A5C
    r3 = r31;
    r4 = 54;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802C61F8u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_1137 = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_1137);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_1137 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWrite32((r31 + 404), r0);
    r0 = 14;
    MemoryInline::FlatWrite32((r31 + 428), r0);
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2BEC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 492), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D2BEC
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r3 = r31;
    r4 = 1;
    // inline leaf 0x802D3D30 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 970), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D3D30
    goto loc_802C6368;
}

loc_802C6248:
{
    r3 = MemoryInline::FlatRead32((r31 + 428));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 428), r0);
}

loc_802C6258:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802C6290;
    }
}

loc_802C625C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r4 = 0;
    ctx->lr = 0x802C6270u;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_1E0C = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_1E0C);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_1E0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C6274:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C6284;
    }
}

loc_802C6278:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2BFC (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 492));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 492), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D2BFC
}

loc_802C6284:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    goto loc_802C6368;
}

loc_802C6290:
{
}

loc_802C6294:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802C6368;
    }
}

loc_802C6298:
{
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13272));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r31 + 404));
    ctx->lr = 0x802C62C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r1 + 24);
    r4 = (r31 + 376);
    ctx->lr = 0x802C62D0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r4 = 0;
    ctx->lr = 0x802C62DCu;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_2A41 = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_2A41);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_2A41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C62E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C6368;
    }
}

loc_802C62E4:
{
    r3 = r31;
    r4 = 42;
    r5 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    r6 = 0;
    ctx->lr = 0x802C62FCu;
    if constexpr (KnownRegArgsCpuCall<0x80100790u>(&func_80100790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80100790_2EA5 = func_80100790_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100790_2EA5);
        r4 = static_cast<uint32_t>(regargs_result_80100790_2EA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80100790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802C6368;
}

loc_802C6300:
{
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWrite32((r31 + 404), r0);
    r4 = 0;
    ctx->lr = 0x802C6324u;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_3701 = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_3701);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_3701 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C6328:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802C6368;
    }
}

loc_802C632C:
{
    r3 = r31;
    r4 = (r31 + 376);
    r5 = (r1 + 36);
    r6 = (r1 + 8);
    r7 = -5;
    ctx->lr = 0x802C6344u;
    if constexpr (KnownRegArgsCpuCall<0x80291B6Cu>(&func_80291B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80291B6C_3B11 = func_80291B6C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80291B6C_3B11);
        r4 = static_cast<uint32_t>(regargs_result_80291B6C_3B11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80291B6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802C6348:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802C6354;
    }
}

loc_802C634C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 380), f0.d);
}

loc_802C6354:
{
    r3 = r31;
    r4 = 1;
    r5 = 86;
    r6 = MemoryInline::FlatRead16((r31 + 492));
    ctx->lr = 0x802C6368u;
    if constexpr (KnownRegArgsCpuCall<0x802D2B20u>(&func_802D2B20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D2B20_420B = func_802D2B20_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2B20_420B);
        r4 = static_cast<uint32_t>(regargs_result_802D2B20_420B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2B20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802C6368:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C6174(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C6174_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C6174 func_802C6174 preserves=true fpr_mask=0x00000000
