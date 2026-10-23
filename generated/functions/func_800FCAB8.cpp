#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DB66C(CpuContext* ctx);
extern "C" uint64_t func_800DB66C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DB730(CpuContext* ctx);
extern "C" uint64_t func_800DB730_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DB778(CpuContext* ctx);
extern "C" uint64_t func_800DB778_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DB7C0(CpuContext* ctx);
extern "C" uint64_t func_800DB7C0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800F9DE4(CpuContext* ctx);
extern "C" uint64_t func_800F9DE4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800FCF14(CpuContext* ctx);
extern "C" uint64_t func_800FCF14_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800FCAB8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_800FCAB8;

loc_800FCAB8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r3 = (r1 + 40);
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r27 = 0;
    r31 = MemoryInline::FlatRead32((r30 + 56));
    r4 = MemoryInline::FlatRead8((r30 + 6));
}

loc_800FCAF0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800FCC0C;
    }
}

loc_800FCAF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148518644);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_800FCB04:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_800FCEFC;
    }
}

loc_800FCB08:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -7);
}

loc_800FCB1C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_800FCEFC;
    }
}

loc_800FCB20:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16204);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FCB38u:
        goto loc_800FCB38;
        break;
    case 0x800FCC08u:
        goto loc_800FCC08;
        break;
    case 0x800FCBB0u:
        goto loc_800FCBB0;
        break;
    case 0x800FCBE8u:
        goto loc_800FCBE8;
        break;
    case 0x800FCB4Cu:
        goto loc_800FCB4C;
        break;
    case 0x800FCB74u:
        goto loc_800FCB74;
        break;
    case 0x800FCB60u:
        goto loc_800FCB60;
        break;
    case 0x800FCB88u:
        goto loc_800FCB88;
        break;
    case 0x800FCB9Cu:
        goto loc_800FCB9C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FCB38:
{
    r3 = 2;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCB48u;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_17F8 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_17F8);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_17F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCB4C:
{
    r3 = 3;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCB5Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_1D38 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_1D38);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_1D38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCB60:
{
    r3 = 4;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCB70u;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_2278 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_2278);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_2278 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCB74:
{
    r3 = 5;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCB84u;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_27B8 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_27B8);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_27B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCB88:
{
    r3 = 6;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCB98u;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_2CF8 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_2CF8);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_2CF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCB9C:
{
    r3 = 7;
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r31 + 41));
    ctx->lr = 0x800FCBACu;
    if constexpr (KnownRegArgsCpuCall<0x800DB66Cu>(&func_800DB66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB66C_3238 = func_800DB66C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB66C_3238);
        r4 = static_cast<uint32_t>(regargs_result_800DB66C_3238 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCBB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_800FCBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FCBD0;
    }
}

loc_800FCBBC:
{
}

loc_800FCBC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800FCBD0;
    }
}

loc_800FCBC4:
{
}

loc_800FCBC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800FCBDC;
    }
}

loc_800FCBCC:
{
    goto loc_800FCEFC;
}

loc_800FCBD0:
{
    r3 = (r30 + 24);
    ctx->lr = 0x800FCBD8u;
    if constexpr (KnownRegArgsCpuCall<0x800DB730u>(&func_800DB730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB730_396D = func_800DB730_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB730_396D);
        r4 = static_cast<uint32_t>(regargs_result_800DB730_396D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCBDC:
{
    r3 = (r30 + 24);
    ctx->lr = 0x800FCBE4u;
    if constexpr (KnownRegArgsCpuCall<0x800DB778u>(&func_800DB778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB778_3E88 = func_800DB778_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB778_3E88);
        r4 = static_cast<uint32_t>(regargs_result_800DB778_3E88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_800FCEFC;
}

loc_800FCBE8:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x800FCBF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCBF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FCEFC;
    }
}

loc_800FCBFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r4 = (r30 + 24);
    ctx->lr = 0x800FCC08u;
    if constexpr (KnownRegArgsCpuCall<0x800DB7C0u>(&func_800DB7C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DB7C0_47ED = func_800DB7C0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB7C0_47ED);
        r4 = static_cast<uint32_t>(regargs_result_800DB7C0_47ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB7C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800FCC08:
{
    goto loc_800FCEFC;
}

loc_800FCC0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_800FCC14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_800FCC34;
    }
}

loc_800FCC18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r1 + 40);
    r5 = 1;
    ctx->lr = 0x800FCC34u;
    if constexpr (KnownRegArgsCpuCall<0x800FCF14u>(&func_800FCF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800FCF14_4F39 = func_800FCF14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FCF14_4F39);
        r4 = static_cast<uint32_t>(regargs_result_800FCF14_4F39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800FCF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctr = ctx->ctr;
    }
}

loc_800FCC34:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
}

loc_800FCC3C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(5))) {
        goto loc_800FCC68;
    }
}

loc_800FCC40:
{
    r0 = (r3 + -9);
}

loc_800FCC48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800FCC68;
    }
}

loc_800FCC4C:
{
}

loc_800FCC50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(22))) {
        goto loc_800FCC68;
    }
}

loc_800FCC54:
{
}

loc_800FCC58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(26))) {
        goto loc_800FCC68;
    }
}

loc_800FCC5C:
{
}

loc_800FCC60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(25))) {
        goto loc_800FCC78;
    }
}

loc_800FCC64:
{
    goto loc_800FCC9C;
}

loc_800FCC68:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    ctx->lr = 0x800FCC74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCC9C;
}

loc_800FCC78:
{
    r3 = (r1 + 48);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f2.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29784));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r1 + 48);
    ctx->lr = 0x800FCC9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9C04u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCC9C:
{
    r28 = 0;
    r29 = r31;
    goto loc_800FCCC8;
}

loc_800FCCA8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x800FCCB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCCB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FCCC0;
    }
}

loc_800FCCB8:
{
    r0 = (r27 + 1);
    r27 = (r0 & 255);
}

loc_800FCCC0:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800FCCC8:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800FCCD0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800FCCA8;
    }
}

loc_800FCCD4:
{
}

loc_800FCCD8:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_800FCCF4;
    }
}

loc_800FCCDC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_800FCEFC;
}

loc_800FCCF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MH3_TickLoad(r3, 2148519156);
    r4 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 16), r4);
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_800FCD08:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(26))) {
        goto loc_800FCEE4;
    }
}

loc_800FCD0C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16312);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FCD24u:
        goto loc_800FCD24;
        break;
    case 0x800FCEE4u:
        goto loc_800FCEE4;
        break;
    case 0x800FCD40u:
        goto loc_800FCD40;
        break;
    case 0x800FCD88u:
        goto loc_800FCD88;
        break;
    case 0x800FCDE4u:
        goto loc_800FCDE4;
        break;
    case 0x800FCE74u:
        goto loc_800FCE74;
        break;
    case 0x800FCEA8u:
        goto loc_800FCEA8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FCD24:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 32);
    ctx->lr = 0x800FCD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCEE4;
}

loc_800FCD40:
{
    r3 = r30;
    ctx->lr = 0x800FCD48u;
    if constexpr (KnownRegArgsCpuCall<0x800F9DE4u>(&func_800F9DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_800F9DE4_7713 = func_800F9DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800F9DE4_7713);
        r4 = static_cast<uint32_t>(regargs_result_800F9DE4_7713 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800FCD4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FCEE4;
    }
}

loc_800FCD50:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = 191;
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 28);
    ctx->lr = 0x800FCD84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCEE4;
}

loc_800FCD88:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_800FCD90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FCDAC;
    }
}

loc_800FCD94:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -16732);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_800FCDB4;
}

loc_800FCDAC:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16780);
}

loc_800FCDB4:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r5 = (r31 + 20);
    r6 = (r31 + 21);
    r7 = (r31 + 22);
    ctx->lr = 0x800FCDC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 24);
    ctx->lr = 0x800FCDE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCEE4;
}

loc_800FCDE4:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_800FCDEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FCE0C;
    }
}

loc_800FCDF0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16792);
    r5 = (r31 + 20);
    r6 = (r31 + 21);
    r7 = (r31 + 22);
    ctx->lr = 0x800FCE08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCE58;
}

loc_800FCE0C:
{
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r3));
    r0 = 175;
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 20);
    ctx->lr = 0x800FCE3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    r3 = 0x805A0000u;
    r3 = (r3 + -16780);
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r5 = (r31 + 20);
    r6 = (r31 + 21);
    r7 = (r31 + 22);
    ctx->lr = 0x800FCE58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCE58:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r30 + 24);
    r5 = (r1 + 16);
    ctx->lr = 0x800FCE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCEE4;
}

loc_800FCE74:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16756);
    r5 = (r31 + 20);
    r6 = (r31 + 21);
    r7 = (r31 + 22);
    ctx->lr = 0x800FCE8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r30 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x800FCEA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    goto loc_800FCEE4;
}

loc_800FCEA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -16504);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r5 = (r31 + 20);
    r6 = (r31 + 21);
    r7 = (r31 + 22);
    ctx->lr = 0x800FCECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x800FCEE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCEE4:
{
    r3 = r30;
    r4 = (r31 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r31);
    r7 = 0;
    ctx->lr = 0x800FCEFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
}

loc_800FCEFC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FCAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FCAB8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FCAB8 func_800FCAB8 preserves=true fpr_mask=0x00000000
