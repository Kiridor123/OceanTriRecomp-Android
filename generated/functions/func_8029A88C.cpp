#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DADC4(CpuContext* ctx);
extern "C" uint64_t func_800DADC4_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DAE0C(CpuContext* ctx);
extern "C" uint64_t func_800DAE0C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DAE54(CpuContext* ctx);
extern "C" uint64_t func_800DAE54_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DAE9C(CpuContext* ctx);
extern "C" uint64_t func_800DAE9C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC10C(CpuContext* ctx);
extern "C" uint64_t func_800DC10C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DC39C(CpuContext* ctx);
extern "C" uint64_t func_800DC39C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC5C4(CpuContext* ctx);
extern "C" uint64_t func_800DC5C4_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8029A88C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8029A88Cu);
    goto loc_8029A88C;

loc_8029A88C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 15));
}

loc_8029A8C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8029AA70;
    }
}

loc_8029A8CC:
{
    r3 = MemoryInline::FlatRead8((r30 + 77));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_8029A8D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8029A944;
    }
}

loc_8029A8D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029A904;
    }
}

loc_8029A8DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8029A8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8029A9C0;
    }
}

loc_8029A8E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029A8F8;
    }
}

loc_8029A8E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8029A8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8029A950;
    }
}

loc_8029A8F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029A988;
    }
}

loc_8029A8F4:
{
    goto loc_8029AA3C;
}

loc_8029A8F8:
{
}

loc_8029A8FC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(6))) {
        goto loc_8029AA3C;
    }
}

loc_8029A900:
{
    goto loc_8029A9F8;
}

loc_8029A904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_8029A908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8029AA30;
    }
}

loc_8029A90C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029A920;
    }
}

loc_8029A910:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(12));
}

loc_8029A914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8029A92C;
    }
}

loc_8029A918:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029A938;
    }
}

loc_8029A91C:
{
    goto loc_8029AA3C;
}

loc_8029A920:
{
}

loc_8029A924:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(255))) {
        goto loc_8029AA70;
    }
}

loc_8029A928:
{
    goto loc_8029AA3C;
}

loc_8029A92C:
{
    r3 = r31;
    ctx->lr = 0x8029A934u;
    if constexpr (KnownRegArgsCpuCall<0x800DADC4u>(&func_800DADC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DADC4_1109 = func_800DADC4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DADC4_1109);
        r4 = static_cast<uint32_t>(regargs_result_800DADC4_1109 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DADC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A938:
{
    r3 = r31;
    ctx->lr = 0x8029A940u;
    if constexpr (KnownRegArgsCpuCall<0x800DAE0Cu>(&func_800DAE0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DAE0C_1510 = func_800DAE0C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DAE0C_1510);
        r4 = static_cast<uint32_t>(regargs_result_800DAE0C_1510 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAE0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A944:
{
    r3 = r31;
    ctx->lr = 0x8029A94Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DAE54u>(&func_800DAE54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DAE54_1917 = func_800DAE54_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DAE54_1917);
        r4 = static_cast<uint32_t>(regargs_result_800DAE54_1917 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAE54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A950:
{
}

loc_8029A954:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8029A978;
    }
}

loc_8029A958:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = r31;
    ctx->lr = 0x8029A974u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800DC10C_1E21 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_1E21);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_1E21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A978:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029A984u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC5C4_221E = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_221E);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_221E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A988:
{
}

loc_8029A98C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8029A9B0;
    }
}

loc_8029A990:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = r31;
    ctx->lr = 0x8029A9ACu;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800DC10C_2728 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_2728);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_2728 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A9B0:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029A9BCu;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC5C4_2B25 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_2B25);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_2B25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A9C0:
{
}

loc_8029A9C4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8029A9E8;
    }
}

loc_8029A9C8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = r31;
    ctx->lr = 0x8029A9E4u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800DC10C_302F = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_302F);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_302F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A9E8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029A9F4u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC5C4_342C = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_342C);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_342C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029A9F8:
{
}

loc_8029A9FC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8029AA20;
    }
}

loc_8029AA00:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = r31;
    ctx->lr = 0x8029AA1Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800DC10C_3936 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_3936);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_3936 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029AA20:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029AA2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC5C4_3D33 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_3D33);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_3D33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029AA30:
{
    r3 = r31;
    ctx->lr = 0x8029AA38u;
    if constexpr (KnownRegArgsCpuCall<0x800DAE9Cu>(&func_800DAE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DAE9C_413A = func_800DAE9C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAE9C_413A);
        r4 = static_cast<uint32_t>(regargs_result_800DAE9C_413A >> 32);
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
        InvokeDirectCpu<0x800DAE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029AA3C:
{
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_8029AA48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8029AA64;
    }
}

loc_8029AA4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8029AA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(40))) {
        goto loc_8029AA64;
    }
}

loc_8029AA58:
{
    r3 = r31;
    ctx->lr = 0x8029AA60u;
    if constexpr (KnownRegArgsCpuCall<0x800DC39Cu>(&func_800DC39C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC39C_4653 = func_800DC39C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC39C_4653);
        r4 = static_cast<uint32_t>(regargs_result_800DC39C_4653 >> 32);
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
        InvokeDirectCpu<0x800DC39Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_8029AA70;
}

loc_8029AA64:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029AA70u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DC5C4_4A0D = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_4A0D);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_4A0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8029AA70:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029A88C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029A88C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029A88C func_8029A88C preserves=true fpr_mask=0x00000000
