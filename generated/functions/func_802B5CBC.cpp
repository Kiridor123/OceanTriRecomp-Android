#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80050BAC(CpuContext* ctx);
extern "C" uint64_t func_80050BAC_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026A3EC(CpuContext* ctx);
extern "C" uint64_t func_8026A3EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027D850(CpuContext* ctx);
extern "C" uint32_t func_8027D850_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B72BC(CpuContext* ctx);
extern "C" uint64_t func_802B72BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802B7A1C(CpuContext* ctx);
extern "C" uint64_t func_802B7A1C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802B8244(CpuContext* ctx);
extern "C" uint64_t func_802B8244_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802B8940(CpuContext* ctx);
extern "C" uint64_t func_802B8940_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802B8AF0(CpuContext* ctx);
extern "C" uint64_t func_802B8AF0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B8C4C(CpuContext* ctx);
extern "C" uint64_t func_802B8C4C_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_802BDE14(CpuContext* ctx);
extern "C" uint64_t func_802BDE14_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE158(CpuContext* ctx);
extern "C" uint64_t func_802BE158_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_802B5CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_802B6834_loc_0 = 0;
    uint32_t addr_psqx_802B6840_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802B5CBCu);
    goto loc_802B5CBC;

loc_802B5CBC:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 1172));
    r3 = (r1 + 176);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 164);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 152);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 140);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 128);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 116);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802B5D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6830;
    }
}

loc_802B5D28:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802B5D34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802B6830;
    }
}

loc_802B5D38:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802B5D44u;
    if constexpr (KnownRegArgsCpuCall<0x802B8AF0u>(&func_802B8AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_802B8AF0_169E = func_802B8AF0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B8AF0_169E);
        r4 = static_cast<uint32_t>(regargs_result_802B8AF0_169E >> 32);
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
        InvokeDirectCpu<0x802B8AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1180), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = 8;
    ctx->lr = 0x802B5D58u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803BED04_1AA4 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_1AA4);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_1AA4 >> 32);
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
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802B5D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B5D78;
    }
}

loc_802B5D64:
{
}

loc_802B5D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B5D88;
    }
}

loc_802B5D6C:
{
}

loc_802B5D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B5D98;
    }
}

loc_802B5D74:
{
    goto loc_802B5DA8;
}

loc_802B5D78:
{
    r0 = MemoryInline::FlatRead8((r30 + 1180));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 1180), static_cast<uint8_t>(r0));
    goto loc_802B5DA8;
}

loc_802B5D88:
{
    r0 = MemoryInline::FlatRead8((r30 + 1180));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 1180), static_cast<uint8_t>(r0));
    goto loc_802B5DA8;
}

loc_802B5D98:
{
    r0 = MemoryInline::FlatRead8((r30 + 1180));
    r0 = (r0 | 2);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 1180), static_cast<uint8_t>(r0));
}

loc_802B5DA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 1179));
}

loc_802B5DB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B5E00;
    }
}

loc_802B5DB4:
{
}

loc_802B5DB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802B5E00;
    }
}

loc_802B5DBC:
{
}

loc_802B5DC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802B5E00;
    }
}

loc_802B5DC4:
{
    r3 = (r1 + 92);
    ctx->lr = 0x802B5DCCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 128);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 80);
    ctx->lr = 0x802B5DE0u;
    if constexpr (KnownRegArgsCpuCall<0x802BDE14u>(&func_802BDE14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BDE14_2727 = func_802BDE14_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BDE14_2727);
        r4 = static_cast<uint32_t>(regargs_result_802BDE14_2727 >> 32);
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
        InvokeDirectCpu<0x802BDE14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 116);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 116);
    r4 = (r1 + 128);
    ctx->lr = 0x802B5DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_2C30 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_2C30);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_2C30 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    MemoryInline::FlatWrite32((r30 + 112), r3);
    MemoryInline::FlatWrite32((r30 + 104), r3);
}

loc_802B5E00:
{
    r0 = MemoryInline::FlatRead8((r30 + 146));
}

loc_802B5E08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B5E18;
    }
}

loc_802B5E0C:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802B5E18u;
    if constexpr (KnownRegArgsCpuCall<0x802B8C4Cu>(&func_802B8C4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B8C4C_3405 = func_802B8C4C_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802B8C4C_3405);
        r4 = static_cast<uint32_t>(regargs_result_802B8C4C_3405 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B8C4Cu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802B5E18:
{
    r3 = (r1 + 164);
    r4 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r30;
    ctx->lr = 0x802B5E2Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802B7880u>(ctx);
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
}

loc_802B5E30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B5E44;
    }
}

loc_802B5E34:
{
    r3 = 0x805D0000u;
    r0 = (r3 + 1104);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    goto loc_802B5EDC;
}

loc_802B5E44:
{
    r3 = r30;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x802B5E54u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802B6D30u>(ctx);
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    // inline leaf 0x8027CC90 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1444));
    r3 = (r0 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027CC90
}

loc_802B5E60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B5E74;
    }
}

loc_802B5E64:
{
    r3 = 0x805D0000u;
    r0 = (r3 + 1328);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    goto loc_802B5EDC;
}

loc_802B5E74:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802B5E7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B5E9C;
    }
}

loc_802B5E80:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
    r4 = (r0 * 28);
    r3 = 0x805D0000u;
    r0 = (r3 + 1160);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    goto loc_802B5EDC;
}

loc_802B5E9C:
{
}

loc_802B5EA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B5EC4;
    }
}

loc_802B5EA4:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
}

loc_802B5EAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B5EC4;
    }
}

loc_802B5EB0:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 936);
    r0 = (r3 + 140);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    goto loc_802B5EDC;
}

loc_802B5EC4:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
    r4 = (r0 * 28);
    r3 = 0x805D0000u;
    r0 = (r3 + 936);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r30 + 128), r0);
}

loc_802B5EDC:
{
    r3 = r30;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x802B5EECu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802B6864u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r30 + 1179));
}

loc_802B5EF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B6034;
    }
}

loc_802B5EF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 158));
}

loc_802B5F00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6034;
    }
}

loc_802B5F04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 66), static_cast<uint8_t>(r0));
    r0 = 19;
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r0 = 20;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
    r4 = (r30 + 496);
    r5 = (r1 + 164);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 104);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 0x805D0000u;
    r3 = (r3 + 936);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13744));
    r29 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802B5F88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B5F94;
    }
}

loc_802B5F8C:
{
    r29 = 1;
    f2.d = f1.d;
}

loc_802B5F94:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802B5FA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B5FB0;
    }
}

loc_802B5FA8:
{
    r29 = 2;
    f2.d = f1.d;
}

loc_802B5FB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802B5FC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B5FCC;
    }
}

loc_802B5FC4:
{
    r29 = 3;
    f2.d = f1.d;
}

loc_802B5FCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802B5FDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B5FE4;
    }
}

loc_802B5FE0:
{
    r29 = 4;
}

loc_802B5FE4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802B5FEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B6004;
    }
}

loc_802B5FF0:
{
    r3 = (r1 + 104);
    ctx->lr = 0x802B5FF8u;
    if constexpr (KnownRegArgsCpuCall<0x80050BACu>(&func_80050BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80050BAC_5770 = func_80050BAC_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050BAC_5770);
        r4 = static_cast<uint32_t>(regargs_result_80050BAC_5770 >> 32);
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
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050BACu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r30 + 108), r3);
    MemoryInline::FlatWrite32((r30 + 100), r3);
    goto loc_802B6034;
}

loc_802B6004:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = 11;
    ctx->lr = 0x802B6010u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803BED04_5ED9 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_5ED9);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_5ED9 >> 32);
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
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802B6018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6034;
    }
}

loc_802B601C:
{
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r29));
    r4 = (r29 * 28);
    r3 = 0x805D0000u;
    r0 = (r3 + 936);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r30 + 128), r0);
}

loc_802B6034:
{
    r29 = 2;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 182), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = 10;
    ctx->lr = 0x802B604Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803BED04_6466 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_6466);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_6466 >> 32);
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
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802B6054:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B606C;
    }
}

loc_802B6058:
{
    r0 = MemoryInline::FlatRead8((r30 + 176));
}

loc_802B6060:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B606C;
    }
}

loc_802B6064:
{
    r29 = 3;
    goto loc_802B6204;
}

loc_802B606C:
{
    r3 = r31;
    // inline leaf 0x802B79E4 (14 guest instruction(s))
}

loc_inl9_0x802B79E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_inl9_0x802B79EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl9_0x802B7A14;
    }
}

loc_inl9_0x802B79F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13620));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl9_0x802B79FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl9_0x802B7A14;
    }
}

loc_inl9_0x802B7A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl9_0x802B7A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x802B7A14;
    }
}

loc_inl9_0x802B7A0C:
{
    r3 = 1;
    goto loc_inl9_cont_802B79E4;
}

loc_inl9_0x802B7A14:
{
    r3 = 0;
}

loc_inl9_cont_802B79E4:
{
    // end of inlined leaf 0x802B79E4
}

loc_802B6078:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6124;
    }
}

loc_802B607C:
{
    r0 = MemoryInline::FlatRead8((r30 + 170));
}

loc_802B6084:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6118;
    }
}

loc_802B6088:
{
    r0 = MemoryInline::FlatRead8((r30 + 171));
}

loc_802B6090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6118;
    }
}

loc_802B6094:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 183));
}

loc_802B60A4:
{
    r4 = 48;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B60B0;
    }
}

loc_802B60AC:
{
    r4 = 144;
}

loc_802B60B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802B60BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-4096))) {
        goto loc_802B60EC;
    }
}

loc_802B60C0:
{
    r0 = (r3 + r4);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B60D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-4096))) {
        goto loc_802B6114;
    }
}

loc_802B60D4:
{
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 182), static_cast<uint8_t>(r0));
    goto loc_802B6114;
}

loc_802B60EC:
{
    r0 = (r3 - r4);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B60FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-4096))) {
        goto loc_802B6114;
    }
}

loc_802B6100:
{
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 182), static_cast<uint8_t>(r0));
}

loc_802B6114:
{
    r29 = 2;
}

loc_802B6118:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 116), r0);
    goto loc_802B6204;
}

loc_802B6124:
{
    r0 = MemoryInline::FlatRead8((r30 + 170));
}

loc_802B612C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B61C0;
    }
}

loc_802B6130:
{
    r0 = MemoryInline::FlatRead8((r30 + 171));
}

loc_802B6138:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B61C0;
    }
}

loc_802B613C:
{
    r0 = MemoryInline::FlatRead8((r30 + 183));
}

loc_802B6144:
{
    r3 = 10;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6150;
    }
}

loc_802B614C:
{
    r3 = 30;
}

loc_802B6150:
{
    r4 = MemoryInline::FlatRead32((r30 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_802B615C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B6188;
    }
}

loc_802B6160:
{
}

loc_802B6164:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2560))) {
        goto loc_802B6188;
    }
}

loc_802B6168:
{
    r0 = (r4 - r3);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B6178:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B61BC;
    }
}

loc_802B617C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 100), r0);
    goto loc_802B61BC;
}

loc_802B6188:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_802B6190:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802B61BC;
    }
}

loc_802B6194:
{
}

loc_802B6198:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-2560))) {
        goto loc_802B61BC;
    }
}

loc_802B619C:
{
    r0 = MemoryInline::FlatRead32((r30 + 100));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B61B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802B61BC;
    }
}

loc_802B61B4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 100), r0);
}

loc_802B61BC:
{
    r29 = 2;
}

loc_802B61C0:
{
    r3 = r31;
    r4 = 0;
    r5 = 27;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl10_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl10_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl10_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl10_cont_8026FECC;
}

loc_inl10_0x8026FEF4:
{
    r3 = 0;
}

loc_inl10_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B61D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B6204;
    }
}

loc_802B61D8:
{
    r3 = r31;
    r4 = 1;
    r5 = 18;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl11_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl11_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl11_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl11_cont_8026FECC;
}

loc_inl11_0x8026FEF4:
{
    r3 = 0;
}

loc_inl11_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B61EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B6204;
    }
}

loc_802B61F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_802B61F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802B6204;
    }
}

loc_802B61FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 116), r0);
}

loc_802B6204:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r4 = MemoryInline::FlatRead32((r30 + 108));
    r5 = r29;
    ctx->lr = 0x802B6214u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDC90u>(ctx);
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
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r30 + 108));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    r3 = MemoryInline::FlatRead32((r30 + 104));
    r4 = MemoryInline::FlatRead32((r30 + 112));
    r5 = 2;
    ctx->lr = 0x802B6234u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDC90u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r30 + 112));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r3 = MemoryInline::FlatRead32((r30 + 116));
    r4 = MemoryInline::FlatRead32((r30 + 120));
    r5 = 5;
    ctx->lr = 0x802B6250u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDC90u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 120), r0);
    r0 = MemoryInline::FlatRead8((r30 + 173));
}

loc_802B6264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6290;
    }
}

loc_802B6268:
{
    r3 = MemoryInline::FlatRead32((r30 + 112));
    r0 = MemoryInline::FlatRead16((r30 + 174));
    r0 = (r0 - r3);
    r3 = (r0 & 65535);
    r0 = (r3 + -256);
}

loc_802B6280:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65024))) {
        goto loc_802B6290;
    }
}

loc_802B6284:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 173), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r30 + 174), static_cast<uint16_t>(r0));
}

loc_802B6290:
{
    r0 = MemoryInline::FlatRead8((r30 + 176));
}

loc_802B6298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B62C4;
    }
}

loc_802B629C:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r0 = MemoryInline::FlatRead16((r30 + 178));
    r0 = (r0 - r3);
    r3 = (r0 & 65535);
    r0 = (r3 + -256);
}

loc_802B62B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65024))) {
        goto loc_802B62C4;
    }
}

loc_802B62B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 176), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r30 + 178), static_cast<uint16_t>(r0));
}

loc_802B62C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    r3 = r31;
    r4 = 0;
    r5 = 6;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl12_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl12_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl12_0x8026FEF4;
    }
}

loc_inl12_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl12_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl12_0x8026FEF4;
    }
}

loc_inl12_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl12_cont_8026FECC;
}

loc_inl12_0x8026FEF4:
{
    r3 = 0;
}

loc_inl12_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B62F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B6314;
    }
}

loc_802B62FC:
{
    r3 = r31;
    r4 = 0;
    r5 = 7;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl13_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl13_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl13_0x8026FEF4;
    }
}

loc_inl13_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl13_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl13_0x8026FEF4;
    }
}

loc_inl13_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl13_cont_8026FECC;
}

loc_inl13_0x8026FEF4:
{
    r3 = 0;
}

loc_inl13_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B6310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6394;
    }
}

loc_802B6314:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13756));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    r3 = (r1 + 140);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13740));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 140);
    r4 = MemoryInline::FlatRead32((r31 + 88));
    ctx->lr = 0x802B6350u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    r3 = (r1 + 56);
    r4 = (r1 + 164);
    r5 = (r1 + 140);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 140);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13736));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13732));
    f31.d = MH3_EaseDivisor(f31.d);
    goto loc_802B6450;
}

loc_802B6394:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802B63A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B63D8;
    }
}

loc_802B63AC:
{
    r3 = r31;
    r4 = 1;
    r5 = 21;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl15_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl15_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl15_0x8026FEF4;
    }
}

loc_inl15_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl15_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl15_0x8026FEF4;
    }
}

loc_inl15_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl15_cont_8026FECC;
}

loc_inl15_0x8026FEF4:
{
    r3 = 0;
}

loc_inl15_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B63C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B63D0;
    }
}

loc_802B63C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13728));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    goto loc_802B63D8;
}

loc_802B63D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
}

loc_802B63D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    r3 = r31;
    r4 = 1;
    r5 = 21;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl16_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl16_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl16_0x8026FEF4;
    }
}

loc_inl16_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl16_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl16_0x8026FEF4;
    }
}

loc_inl16_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl16_cont_8026FECC;
}

loc_inl16_0x8026FEF4:
{
    r3 = 0;
}

loc_inl16_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B63F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6410;
    }
}

loc_802B63FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13728));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    goto loc_802B644C;
}

loc_802B6410:
{
    r3 = r31;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8027D850u>(&func_8027D850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027D850_B187 = func_8027D850_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027D850_B187;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D850u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802B6420:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6438;
    }
}

loc_802B6424:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13724));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    goto loc_802B644C;
}

loc_802B6438:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
}

loc_802B644C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13720));
    f31.d = MH3_EaseDivisor(f31.d);
}

loc_802B6450:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13716));
    f30.d = MH3_EaseDivisor(f30.d);
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802B6460u;
    if constexpr (KnownRegArgsCpuCall<0x802B7A1Cu>(&func_802B7A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B7A1C_B80E = func_802B7A1C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B7A1C_B80E);
        r4 = static_cast<uint32_t>(regargs_result_802B7A1C_B80E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B7A1Cu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802B6464:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6484;
    }
}

loc_802B6468:
{
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 104), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
}

loc_802B6484:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802B6490u;
    if constexpr (KnownRegArgsCpuCall<0x802B7A1Cu>(&func_802B7A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B7A1C_BFCC = func_802B7A1C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B7A1C_BFCC);
        r4 = static_cast<uint32_t>(regargs_result_802B7A1C_BFCC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B7A1Cu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802B6494:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B64E4;
    }
}

loc_802B6498:
{
    r3 = r31;
    r4 = 1;
    r5 = (r1 + 164);
    ctx->lr = 0x802B64A8u;
    if constexpr (KnownRegArgsCpuCall<0x8026A3ECu>(&func_8026A3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A3EC_C65E = func_8026A3EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A3EC_C65E);
        r4 = static_cast<uint32_t>(regargs_result_8026A3EC_C65E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 140);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13712));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13740));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 140);
    r4 = MemoryInline::FlatRead32((r31 + 88));
    ctx->lr = 0x802B64C8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    r3 = (r1 + 44);
    r4 = (r1 + 164);
    r5 = (r1 + 140);
    ctx->lr = 0x802B64D8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_CF4D = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_CF4D);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_CF4D >> 32);
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
    r3 = (r30 + 88);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802B64E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802B64EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B65FC;
    }
}

loc_802B64F0:
{
    r0 = MemoryInline::FlatRead16((r30 + 168));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802B64F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B653C;
    }
}

loc_802B64FC:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 168), static_cast<uint16_t>(r0));
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    r3 = r31;
    r4 = 0;
    r5 = 151;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl18_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl18_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl18_0x8026FEF4;
    }
}

loc_inl18_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl18_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl18_0x8026FEF4;
    }
}

loc_inl18_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl18_cont_8026FECC;
}

loc_inl18_0x8026FEF4:
{
    r3 = 0;
}

loc_inl18_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B6524:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6534;
    }
}

loc_802B6528:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 100), r0);
    goto loc_802B653C;
}

loc_802B6534:
{
    r0 = MemoryInline::FlatRead32((r30 + 108));
    MemoryInline::FlatWrite32((r30 + 100), r0);
}

loc_802B653C:
{
    r3 = r31;
    r4 = 1;
    r5 = 20;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl19_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl19_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl19_0x8026FEF4;
    }
}

loc_inl19_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl19_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl19_0x8026FEF4;
    }
}

loc_inl19_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl19_cont_8026FECC;
}

loc_inl19_0x8026FEF4:
{
    r3 = 0;
}

loc_inl19_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B6550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6594;
    }
}

loc_802B6554:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13708));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    ctx->lr = 0x802B6568u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8026A378u>(ctx);
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
}

loc_802B656C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6588;
    }
}

loc_802B6570:
{
    r0 = MemoryInline::FlatRead8((r30 + 160));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B657C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6588;
    }
}

loc_802B6580:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 100), r0);
}

loc_802B6588:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r30 + 168), static_cast<uint16_t>(r0));
    goto loc_802B65BC;
}

loc_802B6594:
{
    r3 = r31;
    r4 = 1;
    r5 = 21;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl20_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl20_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl20_0x8026FEF4;
    }
}

loc_inl20_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl20_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl20_0x8026FEF4;
    }
}

loc_inl20_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl20_cont_8026FECC;
}

loc_inl20_0x8026FEF4:
{
    r3 = 0;
}

loc_inl20_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B65A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B65BC;
    }
}

loc_802B65AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 100), r0);
    r0 = 10;
    MemoryInline::FlatWrite16((r30 + 168), static_cast<uint16_t>(r0));
}

loc_802B65BC:
{
    r3 = MemoryInline::FlatRead16((r30 + 168));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150327740);
}

loc_802B65C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_802B65DC;
    }
}

loc_802B65C8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 168), static_cast<uint16_t>(r0));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13704));
    f30.d = MH3_EaseDivisor(f30.d);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13700));
    f31.d = MH3_EaseDivisor(f31.d);
    goto loc_802B65E4;
}

loc_802B65DC:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f30.d = MH3_EaseDivisor(f30.d);
    f31.d = f30.d;
}

loc_802B65E4:
{
    r3 = (r1 + 176);
    r4 = MemoryInline::FlatRead32((r30 + 108));
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r4 = (r4 + r0);
    ctx->lr = 0x802B65F8u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_EAFB = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_EAFB);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_EAFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_802B6618;
}

loc_802B65FC:
{
    r3 = MemoryInline::FlatRead16((r30 + 168));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150327804);
}

loc_802B6604:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802B6618;
    }
}

loc_802B6608:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 168), static_cast<uint16_t>(r0));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13732));
    f30.d = MH3_EaseDivisor(f30.d);
    f31.d = f30.d;
}

loc_802B6618:
{
    r3 = (r1 + 176);
    r4 = MemoryInline::FlatRead32((r30 + 112));
    ctx->lr = 0x802B6624u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    r3 = (r1 + 32);
    r4 = (r1 + 176);
    r5 = (r1 + 164);
    ctx->lr = 0x802B6634u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_F56E = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_F56E);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_F56E >> 32);
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
    r3 = (r30 + 76);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 166), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802B6654u;
    if constexpr (KnownRegArgsCpuCall<0x802B8244u>(&func_802B8244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B8244_FA98 = func_802B8244_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802B8244_FA98);
        r4 = static_cast<uint32_t>(regargs_result_802B8244_FA98 >> 32);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B8244u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 136));
}

loc_802B6664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B6674;
    }
}

loc_802B6668:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 92));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802B6694;
}

loc_802B6674:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
}

loc_802B6694:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 136));
}

loc_802B66AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B66BC;
    }
}

loc_802B66B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    goto loc_802B66DC;
}

loc_802B66BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_802B66DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 166));
}

loc_802B66EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B66F8;
    }
}

loc_802B66F0:
{
    r3 = r30;
    ctx->lr = 0x802B66F8u;
    if constexpr (KnownRegArgsCpuCall<0x802B8940u>(&func_802B8940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B8940_10AAF = func_802B8940_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802B8940_10AAF);
        r4 = static_cast<uint32_t>(regargs_result_802B8940_10AAF >> 32);
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
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B8940u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802B66F8:
{
    r3 = r30;
    r4 = (r30 + 196);
    ctx->lr = 0x802B6704u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r30 + 12);
    r4 = (r30 + 220);
    ctx->lr = 0x802B6710u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802B671Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802B8ED0u>(ctx);
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
    r3 = r30;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x802B672Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B72BCu>(&func_802B72BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B72BC_115CF = func_802B72BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802B72BC_115CF);
        r4 = static_cast<uint32_t>(regargs_result_802B72BC_115CF >> 32);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B72BCu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r4 = 3;
    ctx->lr = 0x802B6738u;
    if constexpr (KnownRegArgsCpuCall<0x802B7A1Cu>(&func_802B7A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B7A1C_11D3D = func_802B7A1C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B7A1C_11D3D);
        r4 = static_cast<uint32_t>(regargs_result_802B7A1C_11D3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B7A1Cu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802B673C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6758;
    }
}

loc_802B6740:
{
    r3 = r30;
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 12);
    r4 = (r30 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802B6758:
{
    r0 = MemoryInline::FlatRead8((r30 + 66));
}

loc_802B6760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B6770;
    }
}

loc_802B6764:
{
}

loc_802B6768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B67A4;
    }
}

loc_802B676C:
{
    goto loc_802B6800;
}

loc_802B6770:
{
    r3 = (r1 + 20);
    ctx->lr = 0x802B6778u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 24);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    ctx->lr = 0x802B678Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BDE14u>(&func_802BDE14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BDE14_1296E = func_802BDE14_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BDE14_1296E);
        r4 = static_cast<uint32_t>(regargs_result_802BDE14_1296E >> 32);
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
        InvokeDirectCpu<0x802BDE14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 66));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 66), static_cast<uint8_t>(r0));
}

loc_802B67A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13696));
    ctx->lr = 0x802B67B4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802BB0B0u>(ctx);
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
    f30.d = f1.d;
    r3 = MemoryInline::FlatRead16((r30 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B67CC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B67D8;
    }
}

loc_802B67D0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
}

loc_802B67D8:
{
    r3 = r30;
    r4 = (r30 + 24);
    r5 = r30;
    f1.d = f30.d;
    // inline leaf 0x80052298 (21 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32448));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80052298
    r3 = (r30 + 12);
    r4 = (r30 + 36);
    r5 = r3;
    f1.d = f30.d;
    // inline leaf 0x80052298 (21 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32448));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80052298
}

loc_802B6800:
{
    r3 = (r30 + 24);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 36);
    r4 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 0;
    r4 = r30;
    r5 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    ctx->lr = 0x802B6830u;
    if constexpr (KnownRegArgsCpuCall<0x802BE158u>(&func_802BE158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802BE158_13F2C = func_802BE158_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE158_13F2C);
        r4 = static_cast<uint32_t>(regargs_result_802BE158_13F2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE158u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802B6830:
{
    r0 = 248;
    addr_psqx_802B6834_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B6834_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 240));
    r0 = 232;
    addr_psqx_802B6840_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B6840_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B5CBC func_802B5CBC preserves=true fpr_mask=0x00000000
