#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DB550(CpuContext* ctx);
extern "C" uint64_t func_800DB550_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80100704(CpuContext* ctx);
extern "C" uint64_t func_80100704_ra38_1f2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802F4A40(CpuContext* ctx);
extern "C" uint64_t func_802F4A40_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802F4EAC(CpuContext* ctx);
extern "C" uint64_t func_802F4EAC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802F511C(CpuContext* ctx);
extern "C" uint64_t func_802F511C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802F5160(CpuContext* ctx);
extern "C" uint32_t func_802F5160_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_802F5160_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802F5160_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_802F3DF8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802F4A08_loc_0 = 0;
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
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802F3DF8;

loc_802F3DF8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r0);
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = MemoryInline::FlatRead32((r29 + 56));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x802F3E50u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9358u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802F3E54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802F3E70;
    }
}

loc_802F3E58:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F3E70:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_802F3E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F3EB4;
    }
}

loc_802F3E88:
{
}

loc_802F3E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F3F80;
    }
}

loc_802F3E90:
{
}

loc_802F3E94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F3FC8;
    }
}

loc_802F3E98:
{
}

loc_802F3E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F43C0;
    }
}

loc_802F3EA0:
{
}

loc_802F3EA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F4660;
    }
}

loc_802F3EA8:
{
}

loc_802F3EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802F4838;
    }
}

loc_802F3EB0:
{
    goto loc_802F48D4;
}

loc_802F3EB4:
{
    r3 = r29;
    ctx->lr = 0x802F3EBCu;
    if constexpr (KnownRegArgsCpuCall<0x802F511Cu>(&func_802F511C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802F511C_1E6D = func_802F511C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802F511C_1E6D);
        r4 = static_cast<uint32_t>(regargs_result_802F511C_1E6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802F511Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f2.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12436));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802F3ED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802F48D4;
    }
}

loc_802F3ED4:
{
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r3 = (r30 + 24);
    r4 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r3 = (r1 + 36);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12432));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 2;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12428));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F3F40u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_291B = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_291B);
        r4 = static_cast<uint32_t>(regargs_result_80100704_291B >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 1;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12428));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F3F5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_322B = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_322B);
        r4 = static_cast<uint32_t>(regargs_result_80100704_322B >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 68));
}

loc_802F3F6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802F48D4;
    }
}

loc_802F3F70:
{
    r3 = 0;
    r4 = (r1 + 36);
    ctx->lr = 0x802F3F7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DB550u>(&func_800DB550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800DB550_3BC9 = func_800DB550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB550_3BC9);
        r4 = static_cast<uint32_t>(regargs_result_800DB550_3BC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DB550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_802F48D4;
}

loc_802F3F80:
{
    r3 = r31;
    r4 = 2048;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl3_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl3_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8026FF14;
    }
}

loc_inl3_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl3_cont_8026FEFC;
}

loc_inl3_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl3_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_802F3F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802F3FA4;
    }
}

loc_802F3F94:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F3FA4:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_802F3FB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(339))) {
        goto loc_802F48D4;
    }
}

loc_802F3FB8:
{
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    goto loc_802F48D4;
}

loc_802F3FC8:
{
    r3 = r31;
    r4 = 2048;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl5_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl5_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8026FF14;
    }
}

loc_inl5_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl5_cont_8026FEFC;
}

loc_inl5_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl5_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_802F3FD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802F3FEC;
    }
}

loc_802F3FDC:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F3FEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead16((r31 + 1434));
}

loc_802F3FF8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_802F400C;
    }
}

loc_802F3FFC:
{
    r3 = MemoryInline::FlatRead8((r31 + 1431));
    r0 = MemoryInline::FlatRead8((r30 + 67));
}

loc_802F4008:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_802F40B0;
    }
}

loc_802F400C:
{
    r3 = (r1 + 36);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 24);
    r4 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12432));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 2;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12424));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F4050u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_4EB7 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_4EB7);
        r4 = static_cast<uint32_t>(regargs_result_80100704_4EB7 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 68));
}

loc_802F4060:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802F4070;
    }
}

loc_802F4064:
{
    r3 = 1;
    r4 = (r1 + 36);
    ctx->lr = 0x802F4070u;
    if constexpr (KnownRegArgsCpuCall<0x800DB550u>(&func_800DB550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800DB550_5855 = func_800DB550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB550_5855);
        r4 = static_cast<uint32_t>(regargs_result_800DB550_5855 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DB550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_802F4070:
{
    r0 = MemoryInline::FlatRead16((r31 + 1434));
}

loc_802F4078:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_802F4080;
    }
}

loc_802F407C:
{
    r0 = 20;
}

loc_802F4080:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12436));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
}

loc_802F40B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 1434));
    MemoryInline::FlatWrite32((r30 + 48), r0);
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_802F40C0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802F40D0;
    }
}

loc_802F40C4:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
}

loc_802F40D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F40DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802F4104;
    }
}

loc_802F40E4:
{
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12420));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12460));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    goto loc_802F410C;
}

loc_802F4104:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12464));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
}

loc_802F410C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1431));
}

loc_802F4114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F4208;
    }
}

loc_802F4118:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802F5160u) && KnownTranslatedCpuCall<0x802F5160u>::kAvailable && !KnownTranslatedCpuCall<0x802F5160u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802F5160u>()) {
        const auto state_free_result_802F5160_664B = func_802F5160_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802F5160_664B[0]);
        r3 = static_cast<uint32_t>(state_free_result_802F5160_664B[1]);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F5160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802F4124:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802F4208;
    }
}

loc_802F4128:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_802F4130:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802F41FC;
    }
}

loc_802F4134:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12460));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802F4148:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802F41FC;
    }
}

loc_802F4150:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 16), r0);
}

loc_802F4160:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802F41D8;
    }
}

loc_802F4164:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl7_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl7_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CEF40;
    }
}

loc_inl7_0x800CEF3C:
{
    r0 = 1;
}

loc_inl7_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl7_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl8_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl8_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CEF40;
    }
}

loc_inl8_0x800CEF3C:
{
    r0 = 1;
}

loc_inl8_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl8_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_802F4208;
}

loc_802F41D8:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl9_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl9_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CEF40;
    }
}

loc_inl9_0x800CEF3C:
{
    r0 = 1;
}

loc_inl9_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_6 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl9_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = (r3 + 20);
    r0 = (r0 & 15);
    MemoryInline::FlatWrite32((r30 + 68), r0);
    r0 = 10;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_802F4208;
}

loc_802F41FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 68));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 68), r0);
}

loc_802F4208:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_802F4218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(340))) {
        goto loc_802F4238;
    }
}

loc_802F421C:
{
}

loc_802F4220:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(341))) {
        goto loc_802F42D4;
    }
}

loc_802F4224:
{
}

loc_802F4228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(342))) {
        goto loc_802F42F0;
    }
}

loc_802F422C:
{
}

loc_802F4230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(343))) {
        goto loc_802F439C;
    }
}

loc_802F4234:
{
    goto loc_802F43B4;
}

loc_802F4238:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r3 = (r30 + 12);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = MemoryInline::FlatRead16((r31 + 1436));
    r0 = (r3 + -210);
}

loc_802F4288:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802F4294;
    }
}

loc_802F428C:
{
}

loc_802F4290:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(215))) {
        goto loc_802F42A0;
    }
}

loc_802F4294:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r0));
    goto loc_802F42B4;
}

loc_802F42A0:
{
    r3 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12416));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r0));
}

loc_802F42B4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl11_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl11_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x800CEF40;
    }
}

loc_inl11_0x800CEF3C:
{
    r0 = 1;
}

loc_inl11_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_14 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_8 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl11_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r4 = (r0 & 63);
    r3 = (r30 + 12);
    r4 = (r4 + -32);
    ctx->lr = 0x802F42D0u;
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
    ctx->cr = cr;
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_802F43B4;
}

loc_802F42D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x802F42ECu;
    if constexpr (KnownRegArgsCpuCall<0x802F4EACu>(&func_802F4EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802F4EAC_995E = func_802F4EAC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802F4EAC_995E);
        r4 = static_cast<uint32_t>(regargs_result_802F4EAC_995E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F4EACu>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802F43B4;
}

loc_802F42F0:
{
    r3 = r31;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12412));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4304u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8026A378u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802F4308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F43B4;
    }
}

loc_802F430C:
{
    r3 = (r1 + 36);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12432));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 2;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12428));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F4344u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_A6F3 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_A6F3);
        r4 = static_cast<uint32_t>(regargs_result_80100704_A6F3 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 1;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12428));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F4360u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_B003 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_B003);
        r4 = static_cast<uint32_t>(regargs_result_80100704_B003 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 68));
}

loc_802F4370:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802F4380;
    }
}

loc_802F4374:
{
    r3 = 1;
    r4 = (r1 + 36);
    ctx->lr = 0x802F4380u;
    if constexpr (KnownRegArgsCpuCall<0x800DB550u>(&func_800DB550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800DB550_B9A1 = func_800DB550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB550_B9A1);
        r4 = static_cast<uint32_t>(regargs_result_800DB550_B9A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DB550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_802F4380:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x802F4398u;
    if constexpr (KnownRegArgsCpuCall<0x802F4EACu>(&func_802F4EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802F4EAC_BE9B = func_802F4EAC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802F4EAC_BE9B);
        r4 = static_cast<uint32_t>(regargs_result_802F4EAC_BE9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F4EACu>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802F43B4;
}

loc_802F439C:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x802F43B4u;
    if constexpr (KnownRegArgsCpuCall<0x802F4EACu>(&func_802F4EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802F4EAC_C603 = func_802F4EAC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802F4EAC_C603);
        r4 = static_cast<uint32_t>(regargs_result_802F4EAC_C603 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F4EACu>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802F43B4:
{
    r3 = r29;
    ctx->lr = 0x802F43BCu;
    if constexpr (KnownRegArgsCpuCall<0x802F511Cu>(&func_802F511C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802F511C_CC8A = func_802F511C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802F511C_CC8A);
        r4 = static_cast<uint32_t>(regargs_result_802F511C_CC8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802F511Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_802F48D4;
}

loc_802F43C0:
{
    r3 = (r1 + 48);
    r4 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 64));
}

loc_802F43D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F4404;
    }
}

loc_802F43D8:
{
    r3 = (r1 + 48);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12420));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl13_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl13_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl13_0x800CEF40;
    }
}

loc_inl13_0x800CEF3C:
{
    r0 = 1;
}

loc_inl13_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl13_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r4 = (r0 & 32767);
    r3 = (r1 + 48);
    r4 = (r4 + -16384);
    ctx->lr = 0x802F4400u;
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
    ctx->cr = cr;
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_802F442C;
}

loc_802F4404:
{
    r3 = (r1 + 48);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12408));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl14_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl14_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl14_0x800CEF40;
    }
}

loc_inl14_0x800CEF3C:
{
    r0 = 1;
}

loc_inl14_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl14_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r4 = (r0 & 16383);
    r3 = (r1 + 48);
    r4 = (r4 + -8192);
    ctx->lr = 0x802F442Cu;
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
    ctx->cr = cr;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802F442C:
{
    r3 = (r30 + 12);
    r4 = (r1 + 48);
    ctx->lr = 0x802F4438u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r30 + 12);
    ctx->lr = 0x802F4440u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12404));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F4448:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F4464;
    }
}

loc_802F444C:
{
    r3 = (r30 + 12);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12404));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_802F4464:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F4470:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802F4498;
    }
}

loc_802F4478:
{
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12420));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12460));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    goto loc_802F44A0;
}

loc_802F4498:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12464));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
}

loc_802F44A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 & 7);
}

loc_802F44AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F4520;
    }
}

loc_802F44B0:
{
    r3 = (r1 + 36);
    r4 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 2;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12424));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F44E0u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_EF46 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_EF46);
        r4 = static_cast<uint32_t>(regargs_result_80100704_EF46 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 1;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12424));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F44FCu;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_F856 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_F856);
        r4 = static_cast<uint32_t>(regargs_result_80100704_F856 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 68));
}

loc_802F450C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802F4520;
    }
}

loc_802F4510:
{
    r3 = 0;
    r4 = 37;
    r5 = (r1 + 36);
    ctx->lr = 0x802F4520u;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800DA790_10202 = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_10202);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_10202 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_802F4520:
{
    r3 = r29;
    ctx->lr = 0x802F4528u;
    if constexpr (KnownRegArgsCpuCall<0x802F511Cu>(&func_802F511C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802F511C_10600 = func_802F511C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802F511C_10600);
        r4 = static_cast<uint32_t>(regargs_result_802F511C_10600 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802F511Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 24);
    r4 = (r30 + 24);
    ctx->lr = 0x802F4534u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050F58_10A8A = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_10A8A);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_10A8A >> 32);
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
        InvokeDirectCpu<0x80050F58u>(ctx);
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
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F4540:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F458C;
    }
}

loc_802F4544:
{
    r3 = (r1 + 24);
    r4 = (r29 + 24);
    r5 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12400));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = (r1 + 12);
    r4 = (r30 + 24);
    r5 = (r1 + 48);
    ctx->lr = 0x802F4580u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_11355 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_11355);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_11355 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 24);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802F458C:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_802F459C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(340))) {
        goto loc_802F48D4;
    }
}

loc_802F45A0:
{
}

loc_802F45A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(341))) {
        goto loc_802F4650;
    }
}

loc_802F45A8:
{
    r3 = r31;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F45BCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8026A378u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802F45C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F48D4;
    }
}

loc_802F45C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 65), static_cast<uint8_t>(r0));
    r3 = (r1 + 36);
    r4 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12432));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x802F45F4u;
    if constexpr (KnownRegArgsCpuCall<0x802F4EACu>(&func_802F4EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802F4EAC_120C5 = func_802F4EAC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802F4EAC_120C5);
        r4 = static_cast<uint32_t>(regargs_result_802F4EAC_120C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F4EACu>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = 2;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12392));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F4610u;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_12838 = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_12838);
        r4 = static_cast<uint32_t>(regargs_result_80100704_12838 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 13;
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12388));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 22));
    r7 = 1;
    ctx->lr = 0x802F462Cu;
    if constexpr (KnownRegArgsCpuCall<0x80100704u>(&func_80100704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80100704_1314C = func_80100704_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100704_1314C);
        r4 = static_cast<uint32_t>(regargs_result_80100704_1314C >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100704u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 68));
}

loc_802F463C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802F48D4;
    }
}

loc_802F4640:
{
    r3 = 2;
    r4 = (r1 + 36);
    ctx->lr = 0x802F464Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DB550u>(&func_800DB550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800DB550_13AED = func_800DB550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB550_13AED);
        r4 = static_cast<uint32_t>(regargs_result_800DB550_13AED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DB550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_802F48D4;
}

loc_802F4650:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F4660:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r30 + 65));
}

loc_802F4674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F4680;
    }
}

loc_802F4678:
{
}

loc_802F467C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(341))) {
        goto loc_802F46A0;
    }
}

loc_802F4680:
{
}

loc_802F4684:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802F4690;
    }
}

loc_802F4688:
{
}

loc_802F468C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(342))) {
        goto loc_802F46A0;
    }
}

loc_802F4690:
{
}

loc_802F4694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802F4828;
    }
}

loc_802F4698:
{
}

loc_802F469C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(343))) {
        goto loc_802F4828;
    }
}

loc_802F46A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 48), r0);
    r0 = MemoryInline::FlatRead8((r30 + 65));
}

loc_802F46B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F46C4;
    }
}

loc_802F46B8:
{
}

loc_802F46BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F46D0;
    }
}

loc_802F46C0:
{
    goto loc_802F46DC;
}

loc_802F46C4:
{
    r3 = 35;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12448));
    goto loc_802F46E4;
}

loc_802F46D0:
{
    r3 = 27;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12408));
    goto loc_802F46E4;
}

loc_802F46DC:
{
    r3 = 40;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12408));
}

loc_802F46E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_802F46EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F4738;
    }
}

loc_802F46F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 60));
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_802F46F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F473C;
    }
}

loc_802F46FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12464));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12376));
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802F472C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802F473C;
    }
}

loc_802F4730:
{
    MemoryInline::FlatWriteFloat32((r30 + 60), f31.d);
    goto loc_802F473C;
}

loc_802F4738:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12448));
}

loc_802F473C:
{
    r0 = MemoryInline::FlatRead8((r30 + 65));
}

loc_802F4744:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802F47A8;
    }
}

loc_802F4748:
{
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_802F4750:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_802F481C;
    }
}

loc_802F4754:
{
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f31.d);
    goto loc_802F481C;
}

loc_802F47A8:
{
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_802F47B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_802F480C;
    }
}

loc_802F47B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12380));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    goto loc_802F481C;
}

loc_802F480C:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F481C:
{
    r3 = r29;
    ctx->lr = 0x802F4824u;
    if constexpr (KnownRegArgsCpuCall<0x802F511Cu>(&func_802F511C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802F511C_1594D = func_802F511C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802F511C_1594D);
        r4 = static_cast<uint32_t>(regargs_result_802F511C_1594D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802F511Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_802F48D4;
}

loc_802F4828:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F4838:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r30 + 65));
}

loc_802F484C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F4858;
    }
}

loc_802F4850:
{
}

loc_802F4854:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(341))) {
        goto loc_802F4868;
    }
}

loc_802F4858:
{
}

loc_802F485C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802F48C4;
    }
}

loc_802F4860:
{
}

loc_802F4864:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(342))) {
        goto loc_802F48C4;
    }
}

loc_802F4868:
{
}

loc_802F486C:
{
    r4 = 20;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F4878;
    }
}

loc_802F4874:
{
    r4 = 50;
}

loc_802F4878:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_802F4888:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_802F48B4;
    }
}

loc_802F488C:
{
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    goto loc_802F48D4;
}

loc_802F48B4:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F48D4;
}

loc_802F48C4:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_802F4A04;
}

loc_802F48D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1431));
    MemoryInline::FlatWrite8((r30 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 & 128);
}

loc_802F48E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F4970;
    }
}

loc_802F48EC:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802F5160u) && KnownTranslatedCpuCall<0x802F5160u>::kAvailable && !KnownTranslatedCpuCall<0x802F5160u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802F5160u>()) {
        const auto state_free_result_802F5160_16877 = func_802F5160_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802F5160_16877[0]);
        r3 = static_cast<uint32_t>(state_free_result_802F5160_16877[1]);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F5160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802F48F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802F4940;
    }
}

loc_802F48FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 149;
    ctx->lr = 0x802F4908u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r0 = (r3 + 2);
    r3 = MemoryInline::FlatRead8((r31 + 1431));
    r0 = (r0 & 255);
}

loc_802F4924:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_802F4954;
    }
}

loc_802F4928:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F4934:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F4954;
    }
}

loc_802F4938:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802F4954;
}

loc_802F4940:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F494C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F4954;
    }
}

loc_802F4950:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
}

loc_802F4954:
{
    r0 = 95;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_802F4998;
}

loc_802F4970:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    // inline leaf 0x802D9FBC (6 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23648);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x802D9FBC
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_18 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_20 & 255);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_802F4998:
{
    r31 = 0;
}

loc_802F499C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = r31;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x802F49B0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r31 = (r31 + 1);
}

loc_802F49B8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_802F499C;
    }
}

loc_802F49BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r3 + 4);
    r4 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r29 + 40));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = r29;
    ctx->lr = 0x802F49E0u;
    if constexpr (KnownRegArgsCpuCall<0x802F4A40u>(&func_802F4A40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802F4A40_18072 = func_802F4A40_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F4A40_18072);
        r4 = static_cast<uint32_t>(regargs_result_802F4A40_18072 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802F4A40u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 0;
    ctx->lr = 0x802F49ECu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r29;
    r4 = (r30 + 4);
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x802F4A04u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_802F4A04:
{
    r0 = 104;
    addr_psqx_802F4A08_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F4A08_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F3DF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F3DF8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F3DF8 func_802F3DF8 preserves=true fpr_mask=0x00000000
