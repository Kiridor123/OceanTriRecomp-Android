#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DAA08(CpuContext* ctx);
extern "C" uint64_t func_800DAA08_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DAA18(CpuContext* ctx);
extern "C" uint64_t func_800DAA18_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DAA28(CpuContext* ctx);
extern "C" uint64_t func_800DAA28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DAA38(CpuContext* ctx);
extern "C" uint64_t func_800DAA38_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DAA48(CpuContext* ctx);
extern "C" uint64_t func_800DAA48_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DAA58(CpuContext* ctx);
extern "C" uint64_t func_800DAA58_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC4D0(CpuContext* ctx);
extern "C" uint64_t func_800DC4D0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DC518(CpuContext* ctx);
extern "C" uint64_t func_800DC518_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F97C0(CpuContext* ctx);
extern "C" uint64_t func_800F97C0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80113990(CpuContext* ctx);
extern "C" uint64_t func_80113990_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801148C0(CpuContext* ctx);
extern "C" uint64_t func_801148C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802BDE78(CpuContext* ctx);
extern "C" uint64_t func_802BDE78_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80112F58_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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

    MKW_GUEST_ENTER(0x80112F58u);
    goto loc_80112F58;

loc_80112F58:
{
    r26 = 1;
    r28 = (r29 + 4);
    goto loc_80112FA8;
}

loc_80112F64:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r30_addr_2 = (r30 + r4);
    r0 = MemoryInline::FlatRead16(r30_addr_2);
    r0 = (r26 + r0);
    r3 = (r0 & 65535);
    r31_addr_2 = (r31 + r4);
    r4 = MemoryInline::FlatRead16(r31_addr_2);
    r5 = 0;
    ctx->lr = 0x80112F84u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800F9218_10FA = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_10FA);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_10FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite32((r28 + 4), r3);
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_80112F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80112FA0;
    }
}

loc_80112F94:
{
    r3 = r27;
    ctx->lr = 0x80112F9Cu;
    if constexpr (KnownRegArgsCpuCall<0x801148C0u>(&func_801148C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_801148C0_1893 = func_801148C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801148C0_1893);
        r4 = static_cast<uint32_t>(regargs_result_801148C0_1893 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801148C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
    goto loc_80113978;
}

loc_80112FA0:
{
    r28 = (r28 + 4);
    r26 = (r26 + 1);
}

loc_80112FA8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80112FB0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80112F64;
    }
}

loc_80112FB4:
{
}

loc_80113204:
{
    r3 = (r27 + 36);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r26 = 0;
    r30 = r29;
    r3 = 0x805A0000u;
    r31 = (r3 + 768);
    r28 = 255;
    goto loc_8011326C;
}

loc_80113228:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r1 + 32);
    ctx->lr = 0x80113234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r29 + 64));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r30 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r30 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r30 + 78), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r28));
    r30 = (r30 + 4);
    r31 = (r31 + 4);
    r26 = (r26 + 1);
}

loc_8011326C:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80113274:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80113228;
    }
}

loc_80113278:
{
}

loc_80113768:
{
    r30 = 0;
    r28 = r29;
    goto loc_80113788;
}

loc_80113774:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r27 + 24);
    ctx->lr = 0x80113780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_80113788:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80113790:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80113774;
    }
}

loc_80113794:
{
    r3 = MemoryInline::FlatRead8((r27 + 2));
    r0 = (r3 + -102);
}

loc_801137A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801137FC;
    }
}

loc_801137A4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801137ACu;
    if constexpr (KnownRegArgsCpuCall<0x802BDE78u>(&func_802BDE78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802BDE78_2D67 = func_802BDE78_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BDE78_2D67);
        r4 = static_cast<uint32_t>(regargs_result_802BDE78_2D67 >> 32);
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
        InvokeDirectCpu<0x802BDE78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28872));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r30 = 1;
    r28 = (r29 + 4);
    goto loc_801137F0;
}

loc_801137DC:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r1 + 20);
    ctx->lr = 0x801137E8u;
    if constexpr (KnownRegArgsCpuCall<0x800F97C0u>(&func_800F97C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        const auto regargs_result_800F97C0_3412 = func_800F97C0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F97C0_3412);
        r4 = static_cast<uint32_t>(regargs_result_800F97C0_3412 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F97C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_801137F0:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_801137F8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_801137DC;
    }
}

loc_801137FC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(51));
}

loc_8011380C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113948;
    }
}

loc_80113810:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113864;
    }
}

loc_80113814:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_80113818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113900;
    }
}

loc_8011381C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113848;
    }
}

loc_80113820:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80113824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801138DC;
    }
}

loc_80113828:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011383C;
    }
}

loc_8011382C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80113830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801138A0;
    }
}

loc_80113834:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801138C4;
    }
}

loc_80113838:
{
    goto loc_80113970;
}

loc_8011383C:
{
}

loc_80113840:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(13))) {
        goto loc_801138F4;
    }
}

loc_80113844:
{
    goto loc_80113970;
}

loc_80113848:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_8011384C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011393C;
    }
}

loc_80113850:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113970;
    }
}

loc_80113854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_80113858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113930;
    }
}

loc_8011385C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113970;
    }
}

loc_80113860:
{
    goto loc_80113924;
}

loc_80113864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_80113868:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113948;
    }
}

loc_8011386C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113888;
    }
}

loc_80113870:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(57));
}

loc_80113874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113954;
    }
}

loc_80113878:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113970;
    }
}

loc_8011387C:
{
}

loc_80113880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(54))) {
        goto loc_80113948;
    }
}

loc_80113884:
{
    goto loc_80113970;
}

loc_80113888:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(136));
}

loc_8011388C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801138A0;
    }
}

loc_80113890:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80113970;
    }
}

loc_80113894:
{
}

loc_80113898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(131))) {
        goto loc_80113960;
    }
}

loc_8011389C:
{
    goto loc_80113970;
}

loc_801138A0:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
}

loc_801138A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801138B8;
    }
}

loc_801138AC:
{
    r3 = (r27 + 24);
    ctx->lr = 0x801138B4u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA18u>(&func_800DAA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA18_4803 = func_800DAA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA18_4803);
        r4 = static_cast<uint32_t>(regargs_result_800DAA18_4803 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_801138B8:
{
    r3 = (r27 + 24);
    ctx->lr = 0x801138C0u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA08u>(&func_800DAA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA08_4C28 = func_800DAA08_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA08_4C28);
        r4 = static_cast<uint32_t>(regargs_result_800DAA08_4C28 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_801138C4:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
}

loc_801138CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80113970;
    }
}

loc_801138D0:
{
    r3 = (r27 + 24);
    ctx->lr = 0x801138D8u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA28u>(&func_800DAA28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA28_5103 = func_800DAA28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA28_5103);
        r4 = static_cast<uint32_t>(regargs_result_800DAA28_5103 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_801138DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
}

loc_801138E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80113970;
    }
}

loc_801138E8:
{
    r3 = (r27 + 24);
    ctx->lr = 0x801138F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA28u>(&func_800DAA28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA28_55DE = func_800DAA28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA28_55DE);
        r4 = static_cast<uint32_t>(regargs_result_800DAA28_55DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_801138F4:
{
    r3 = (r27 + 24);
    ctx->lr = 0x801138FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DAA48u>(&func_800DAA48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA48_5A03 = func_800DAA48_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA48_5A03);
        r4 = static_cast<uint32_t>(regargs_result_800DAA48_5A03 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113900:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
}

loc_80113908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80113918;
    }
}

loc_8011390C:
{
    r3 = (r27 + 24);
    ctx->lr = 0x80113914u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA48u>(&func_800DAA48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA48_5EDE = func_800DAA48_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA48_5EDE);
        r4 = static_cast<uint32_t>(regargs_result_800DAA48_5EDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113918:
{
    r3 = (r27 + 24);
    ctx->lr = 0x80113920u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA38u>(&func_800DAA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA38_6303 = func_800DAA38_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA38_6303);
        r4 = static_cast<uint32_t>(regargs_result_800DAA38_6303 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113924:
{
    r3 = (r27 + 24);
    ctx->lr = 0x8011392Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DAA38u>(&func_800DAA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA38_6728 = func_800DAA38_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA38_6728);
        r4 = static_cast<uint32_t>(regargs_result_800DAA38_6728 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113930:
{
    r3 = (r27 + 24);
    ctx->lr = 0x80113938u;
    if constexpr (KnownRegArgsCpuCall<0x800DAA58u>(&func_800DAA58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA58_6B4D = func_800DAA58_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA58_6B4D);
        r4 = static_cast<uint32_t>(regargs_result_800DAA58_6B4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_8011393C:
{
    r3 = (r27 + 24);
    ctx->lr = 0x80113944u;
    if constexpr (KnownRegArgsCpuCall<0x800DC518u>(&func_800DC518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DC518_6F72 = func_800DC518_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC518_6F72);
        r4 = static_cast<uint32_t>(regargs_result_800DC518_6F72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113948:
{
    r3 = (r27 + 24);
    ctx->lr = 0x80113950u;
    if constexpr (KnownRegArgsCpuCall<0x800DC4D0u>(&func_800DC4D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DC4D0_7397 = func_800DC4D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC4D0_7397);
        r4 = static_cast<uint32_t>(regargs_result_800DC4D0_7397 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC4D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113954:
{
    r3 = (r27 + 24);
    ctx->lr = 0x8011395Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DAA18u>(&func_800DAA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DAA18_7815 = func_800DAA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DAA18_7815);
        r4 = static_cast<uint32_t>(regargs_result_800DAA18_7815 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DAA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80113970;
}

loc_80113960:
{
    r3 = 0;
    r4 = 20;
    r5 = (r27 + 24);
    ctx->lr = 0x80113970u;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800DA790_7C39 = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_7C39);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_7C39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_80113970:
{
    r3 = r27;
    ctx->lr = 0x80113978u;
    if constexpr (KnownRegArgsCpuCall<0x80113990u>(&func_80113990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80113990_7FFB = func_80113990_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80113990_7FFB);
        r4 = static_cast<uint32_t>(regargs_result_80113990_7FFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80113990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
}

loc_80113978:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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

extern "C" void func_80112F58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80112F58_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFF gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80112F58 func_80112F58 preserves=true fpr_mask=0x00000000
