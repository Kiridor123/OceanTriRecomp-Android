#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F8ECC(CpuContext* ctx);
extern "C" uint64_t func_800F8ECC_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801E099C(CpuContext* ctx);
extern "C" uint64_t func_801E099C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801E09D8(CpuContext* ctx);
extern "C" uint64_t func_801E09D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E0D9C(CpuContext* ctx);
extern "C" uint64_t func_801E0D9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801E1AA0(CpuContext* ctx);
extern "C" uint64_t func_801E1AA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801E28C8(CpuContext* ctx);
extern "C" uint64_t func_801E28C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BF878(CpuContext* ctx);
extern "C" uint64_t func_802BF878_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_801E05D8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

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

    goto loc_801E05D8;

loc_801E05D8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r31 = MemoryInline::FlatRead32((r29 + 56));
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    goto loc_801E067C;
}

loc_801E0610:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_801E0618:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E0628;
    }
}

loc_801E061C:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    goto loc_801E0630;
}

loc_801E0628:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_801E0630:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r31 + 42));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = 0x805B0000u;
    r4 = (r4 + 32200);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_2);
    r5 = 44;
    r6 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x801E065Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F8ECCu>(&func_800F8ECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800F8ECC_1256 = func_800F8ECC_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F8ECC_1256);
        r4 = static_cast<uint32_t>(regargs_result_800F8ECC_1256 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F8ECCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_801E0668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E0678;
    }
}

loc_801E066C:
{
    r3 = r29;
    ctx->lr = 0x801E0674u;
    if constexpr (KnownRegArgsCpuCall<0x801E1AA0u>(&func_801E1AA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801E1AA0_1A3D = func_801E1AA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA0_1A3D);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA0_1A3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E1AA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_801E0980;
}

loc_801E0678:
{
    r30 = (r30 + 1);
}

loc_801E067C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_801E0684:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_801E0610;
    }
}

loc_801E0688:
{
    r3 = 84;
    ctx->lr = 0x801E0690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
}

loc_801E0698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E06A4;
    }
}

loc_801E069C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = 0x801E06A4u;
    if constexpr (KnownRegArgsCpuCall<0x801E099Cu>(&func_801E099C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E099C_25EC = func_801E099C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801E099C_25EC);
        r4 = static_cast<uint32_t>(regargs_result_801E099C_25EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E099Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E06A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_801E06B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E06C4;
    }
}

loc_801E06B8:
{
    r3 = r29;
    ctx->lr = 0x801E06C0u;
    if constexpr (KnownRegArgsCpuCall<0x801E1AA0u>(&func_801E1AA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801E1AA0_2A30 = func_801E1AA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA0_2A30);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA0_2A30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E1AA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_801E0980;
}

loc_801E06C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    MemoryInline::FlatWrite32((r3 + 4), r29);
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x801E06D4u;
    if constexpr (KnownRegArgsCpuCall<0x801E28C8u>(&func_801E28C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801E28C8_31AB = func_801E28C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E28C8_31AB);
        r4 = static_cast<uint32_t>(regargs_result_801E28C8_31AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E28C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = 0;
    goto loc_801E06F4;
}

loc_801E06DC:
{
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r30 = (r30 + 1);
}

loc_801E06F4:
{
}

loc_801E06F8:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(18))) {
        goto loc_801E06DC;
    }
}

loc_801E06FC:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r30 = 0;
    goto loc_801E0938;
}

loc_801E0728:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17176));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17176));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17176));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r4 = 0;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 40), r4);
    r4 = 0;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    r4 = 0;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 40), r4);
    r4 = 0;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r4));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 276);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801E07BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0878;
    }
}

loc_801E07C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E08C8;
    }
}

loc_801E07C4:
{
}

loc_801E07C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801E07D0;
    }
}

loc_801E07CC:
{
    goto loc_801E08C8;
}

loc_801E07D0:
{
    r0 = MemoryInline::FlatRead32((r29 + 48));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r3 + 8);
    r3 = MemoryInline::FlatRead32((r31 + 36));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 1056));
}

loc_801E07F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801E0804;
    }
}

loc_801E07F8:
{
    if constexpr (KnownRegArgsCpuCall<0x802BF878u>(&func_802BF878)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BF878_4437 = func_802BF878_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802BF878_4437);
        r4 = static_cast<uint32_t>(regargs_result_802BF878_4437 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BF878u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r31 + 88), static_cast<uint16_t>(r3));
    goto loc_801E0810;
}

loc_801E0804:
{
    r3 = 65536;
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 88), static_cast<uint16_t>(r3));
}

loc_801E0810:
{
    r3 = r31;
    r4 = (r30 & 255);
    ctx->lr = 0x801E081Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E09D8u>(&func_801E09D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801E09D8_485E = func_801E09D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E09D8_485E);
        r4 = static_cast<uint32_t>(regargs_result_801E09D8_485E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E09D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 1056));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801E0828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E085C;
    }
}

loc_801E082C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E086C;
    }
}

loc_801E0830:
{
}

loc_801E0834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E083C;
    }
}

loc_801E0838:
{
    goto loc_801E086C;
}

loc_801E083C:
{
    r3 = 788;
    r3 = (r3 & 65535);
    r4 = 30;
    r4 = (r4 & 65535);
    r5 = 0;
    ctx->lr = 0x801E0854u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800F9218_4F21 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_4F21);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_4F21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        r6 = ctx->gpr[6];
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
    MemoryInline::FlatWrite32((r31 + 12), r3);
    goto loc_801E08C8;
}

loc_801E085C:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 420));
    MemoryInline::FlatWrite8((r31 + 93), static_cast<uint8_t>(r0));
    goto loc_801E08C8;
}

loc_801E086C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_801E08C8;
}

loc_801E0878:
{
    r0 = MemoryInline::FlatRead32((r29 + 48));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_801E0890:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E08A0;
    }
}

loc_801E0894:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::FlatWrite8((r29 + 68), static_cast<uint8_t>(r3));
    goto loc_801E08C8;
}

loc_801E08A0:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8((r29 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + 88);
    r3 = MemoryInline::FlatRead32((r31 + 36));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = r31;
    r4 = (r30 & 255);
    ctx->lr = 0x801E08C8u;
    if constexpr (KnownRegArgsCpuCall<0x801E09D8u>(&func_801E09D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801E09D8_5B93 = func_801E09D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E09D8_5B93);
        r4 = static_cast<uint32_t>(regargs_result_801E09D8_5B93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E09D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801E08C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 42));
}

loc_801E08D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801E0934;
    }
}

loc_801E08D4:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 6;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 7;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 8;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 9;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_801E0934:
{
    r30 = (r30 + 1);
}

loc_801E0938:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_801E0940:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_801E0728;
    }
}

loc_801E0944:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
}

loc_801E094C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E0978;
    }
}

loc_801E0950:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 1056));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801E095C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0970;
    }
}

loc_801E0960:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E0978;
    }
}

loc_801E0964:
{
}

loc_801E0968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E0970;
    }
}

loc_801E096C:
{
    goto loc_801E0978;
}

loc_801E0970:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 80), r0);
}

loc_801E0978:
{
    r3 = r29;
    ctx->lr = 0x801E0980u;
    if constexpr (KnownRegArgsCpuCall<0x801E0D9Cu>(&func_801E0D9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801E0D9C_6A57 = func_801E0D9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801E0D9C_6A57);
        r4 = static_cast<uint32_t>(regargs_result_801E0D9C_6A57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E0D9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_801E0980:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_801E05D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E05D8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E05D8 func_801E05D8 preserves=true fpr_mask=0x00000000
