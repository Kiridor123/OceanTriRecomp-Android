#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DAAF8(CpuContext* ctx);
extern "C" uint64_t func_800DAAF8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DB530(CpuContext* ctx);
extern "C" uint64_t func_800DB530_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DB540(CpuContext* ctx);
extern "C" uint64_t func_800DB540_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DB980(CpuContext* ctx);
extern "C" uint64_t func_800DB980_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DC458(CpuContext* ctx);
extern "C" uint64_t func_800DC458_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC854(CpuContext* ctx);
extern "C" uint64_t func_800DC854_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DCAB4(CpuContext* ctx);
extern "C" uint64_t func_800DCAB4_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80108A90(CpuContext* ctx);
extern "C" uint64_t func_80108A90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010A37C(CpuContext* ctx);
extern "C" uint64_t func_8010A37C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010A380(CpuContext* ctx);
extern "C" uint64_t func_8010A380_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80107EC0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80108708_loc_0 = 0;
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
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80107EC0;

loc_80107EC0:
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
    r11 = (r1 + 96);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_80107EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80107F14;
    }
}

loc_80107F00:
{
}

loc_80107F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8010805C;
    }
}

loc_80107F08:
{
}

loc_80107F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801082F0;
    }
}

loc_80107F10:
{
    goto loc_801083D8;
}

loc_80107F14:
{
    r30 = MemoryInline::FlatRead32((r26 + 48));
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x80107F24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80107F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80107F40;
    }
}

loc_80107F2C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_80108704;
}

loc_80107F40:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 10));
    MemoryInline::FlatWrite16((r31 + 60), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r5 = (r0 * 12);
    r4 = 0x805A0000u;
    r0 = (r4 + -3016);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_20AB = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_20AB;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -3156);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80107FA0u;
    if constexpr (KnownRegArgsCpuCall<0x8010A380u>(&func_8010A380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8010A380_2675 = func_8010A380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A380_2675);
        r4 = static_cast<uint32_t>(regargs_result_8010A380_2675 >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A380u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r27 = 0;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 68));
}

loc_80107FB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80108018;
    }
}

loc_80107FB8:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_80107FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80108018;
    }
}

loc_80107FC4:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_80107FCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80107FEC;
    }
}

loc_80107FD0:
{
}

loc_80107FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80107FF8;
    }
}

loc_80107FD8:
{
}

loc_80107FDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80108004;
    }
}

loc_80107FE0:
{
}

loc_80107FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80108010;
    }
}

loc_80107FE8:
{
    goto loc_80108018;
}

loc_80107FEC:
{
    r3 = (r26 + 24);
    ctx->lr = 0x80107FF4u;
    if constexpr (KnownRegArgsCpuCall<0x800DB530u>(&func_800DB530)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DB530_321F = func_800DB530_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DB530_321F);
        r4 = static_cast<uint32_t>(regargs_result_800DB530_321F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB530u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_80108018;
}

loc_80107FF8:
{
    r3 = (r26 + 24);
    ctx->lr = 0x80108000u;
    if constexpr (KnownRegArgsCpuCall<0x800DAAF8u>(&func_800DAAF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DAAF8_373A = func_800DAAF8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DAAF8_373A);
        r4 = static_cast<uint32_t>(regargs_result_800DAAF8_373A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DAAF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_80108018;
}

loc_80108004:
{
    r3 = (r26 + 24);
    ctx->lr = 0x8010800Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DB540u>(&func_800DB540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DB540_3CB1 = func_800DB540_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DB540_3CB1);
        r4 = static_cast<uint32_t>(regargs_result_800DB540_3CB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB540u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_80108018;
}

loc_80108010:
{
    r3 = (r26 + 24);
    ctx->lr = 0x80108018u;
    if constexpr (KnownRegArgsCpuCall<0x800DCAB4u>(&func_800DCAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DCAB4_41CC = func_800DCAB4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCAB4_41CC);
        r4 = static_cast<uint32_t>(regargs_result_800DCAB4_41CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DCAB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80108018:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_15 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_15);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_16 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_16);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_80108040:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80108050;
    }
}

loc_80108044:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r0));
    goto loc_801083D8;
}

loc_80108050:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r0));
    goto loc_801083D8;
}

loc_8010805C:
{
    r30 = MemoryInline::FlatRead32((r26 + 48));
    r3 = r30;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl4_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl4_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8012D088;
    }
}

loc_inl4_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl4_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl4_0x8012D088;
    }
}

loc_inl4_0x8012D080:
{
    r3 = 0;
    goto loc_inl4_cont_8012D068;
}

loc_inl4_0x8012D088:
{
    r3 = 1;
}

loc_inl4_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8010806C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80108084;
    }
}

loc_80108070:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_80108704;
}

loc_80108084:
{
    r3 = 0;
    MemoryInline::FlatWrite16((r31 + 60), static_cast<uint16_t>(r3));
    r27 = -3;
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_80108098:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801080A8;
    }
}

loc_8010809C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r0));
    goto loc_801080AC;
}

loc_801080A8:
{
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r3));
}

loc_801080AC:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801080B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_801080EC;
    }
}

loc_801080B8:
{
}

loc_801080BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_80108150;
    }
}

loc_801080C0:
{
}

loc_801080C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80108188;
    }
}

loc_801080C8:
{
}

loc_801080CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80108188;
    }
}

loc_801080D0:
{
}

loc_801080D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_80108188;
    }
}

loc_801080D8:
{
}

loc_801080DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_801081D8;
    }
}

loc_801080E0:
{
}

loc_801080E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_8010825C;
    }
}

loc_801080E8:
{
    goto loc_801082A8;
}

loc_801080EC:
{
    r3 = r30;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f31.d = f1.d;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126098_55DD = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_55DD);
        r4 = static_cast<uint32_t>(regargs_result_80126098_55DD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8010811C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80108124;
    }
}

loc_80108120:
{
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_80108124:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_12 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_12);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_13 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_13);
    goto loc_801082C4;
}

loc_80108150:
{
    r29 = 706;
    r28 = 37;
    r3 = (r1 + 8);
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80108184u;
    if constexpr (KnownRegArgsCpuCall<0x8010A380u>(&func_8010A380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8010A380_603A = func_8010A380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A380_603A);
        r4 = static_cast<uint32_t>(regargs_result_8010A380_603A >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A380u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801082C4;
}

loc_80108188:
{
    r3 = (r1 + 8);
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x801081B4u;
    if constexpr (KnownRegArgsCpuCall<0x8010A380u>(&func_8010A380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8010A380_691D = func_8010A380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A380_691D);
        r4 = static_cast<uint32_t>(regargs_result_8010A380_691D >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A380u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_10 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_10);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_11 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_11);
    goto loc_801082C4;
}

loc_801081D8:
{
    r3 = r30;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f31.d = f1.d;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126098_721E = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_721E);
        r4 = static_cast<uint32_t>(regargs_result_80126098_721E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80108208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80108210;
    }
}

loc_8010820C:
{
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_80108210:
{
    r0 = MemoryInline::FlatRead8((r31 + 70));
}

loc_80108218:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8010822C;
    }
}

loc_8010821C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29424));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_8010822C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r27 = 0;
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_8 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_8);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_9 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_9);
    goto loc_801082C4;
}

loc_8010825C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_6 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_6);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_7 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_7);
    r3 = (r1 + 8);
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x801082A4u;
    if constexpr (KnownRegArgsCpuCall<0x8010A380u>(&func_8010A380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8010A380_7F78 = func_8010A380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A380_7F78);
        r4 = static_cast<uint32_t>(regargs_result_8010A380_7F78 >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A380u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801082C4;
}

loc_801082A8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_4 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_4);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_5 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_5);
}

loc_801082C4:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 68));
}

loc_801082D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801083D8;
    }
}

loc_801082D8:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801082E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801083D8;
    }
}

loc_801082E4:
{
    r3 = (r26 + 24);
    ctx->lr = 0x801082ECu;
    if constexpr (KnownRegArgsCpuCall<0x800DB980u>(&func_800DB980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DB980_8A16 = func_800DB980_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB980_8A16);
        r4 = static_cast<uint32_t>(regargs_result_800DB980_8A16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801083D8;
}

loc_801082F0:
{
    r30 = MemoryInline::FlatRead32((r26 + 48));
    r3 = r26;
    r4 = 2;
    ctx->lr = 0x80108300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80108304:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010831C;
    }
}

loc_80108308:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_80108704;
}

loc_8010831C:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r31 + 60), static_cast<uint16_t>(r4));
    r27 = -3;
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_1 = (r3 + r0);
    r29 = MemoryInline::FlatRead16(r3_addr_1);
    r3 = 0x805A0000u;
    r3 = (r3 + -3228);
    r3_addr_2 = (r3 + r0);
    r28 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_80108350:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80108360;
    }
}

loc_80108354:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r0));
    goto loc_80108364;
}

loc_80108360:
{
    MemoryInline::FlatWrite8((r31 + 69), static_cast<uint8_t>(r4));
}

loc_80108364:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_8010836C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(33))) {
        goto loc_801083D8;
    }
}

loc_80108370:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -1868);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801083D8u:
        goto loc_801083D8;
        break;
    case 0x801083ACu:
        goto loc_801083AC;
        break;
    case 0x80108388u:
        goto loc_80108388;
        break;
    case 0x80108398u:
        goto loc_80108398;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80108388:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29424));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    goto loc_801083D8;
}

loc_80108398:
{
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29424));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    goto loc_801083D8;
}

loc_801083AC:
{
    r3 = (r1 + 8);
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x801083D8u;
    if constexpr (KnownRegArgsCpuCall<0x8010A380u>(&func_8010A380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8010A380_A20E = func_8010A380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A380_A20E);
        r4 = static_cast<uint32_t>(regargs_result_8010A380_A20E >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010A380u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801083D8:
{
    r3 = MemoryInline::FlatRead8((r26 + 2));
    r0 = (r3 + -5);
}

loc_801083E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_801084D8;
    }
}

loc_801083E8:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -1952);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_18 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_18);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80108400u:
        goto loc_80108400;
        break;
    case 0x80108408u:
        goto loc_80108408;
        break;
    case 0x80108418u:
        goto loc_80108418;
        break;
    case 0x80108428u:
        goto loc_80108428;
        break;
    case 0x801084D8u:
        goto loc_801084D8;
        break;
    case 0x80108448u:
        goto loc_80108448;
        break;
    case 0x8010847Cu:
        goto loc_8010847C;
        break;
    case 0x801084A0u:
        goto loc_801084A0;
        break;
    case 0x801084B8u:
        goto loc_801084B8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80108400:
{
    r0 = 300;
    MemoryInline::FlatWrite32((r26 + 12), r0);
}

loc_80108408:
{
    r27 = (r27 + 1);
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
    goto loc_801084DC;
}

loc_80108418:
{
    r27 = (r27 + 1);
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
    goto loc_801084DC;
}

loc_80108428:
{
    r27 = (r27 + 1);
    r0 = 30;
    MemoryInline::FlatWrite32((r26 + 12), r0);
    r0 = 3;
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
    goto loc_801084DC;
}

loc_80108448:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r3 = MH3_TickLoad(r3, 2148566088);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_80108458:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80108704;
    }
}

loc_8010845C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 68));
}

loc_8010846C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801084DC;
    }
}

loc_80108470:
{
    r3 = (r26 + 24);
    ctx->lr = 0x80108478u;
    if constexpr (KnownRegArgsCpuCall<0x800DC458u>(&func_800DC458)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC458_B5B6 = func_800DC458_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC458_B5B6);
        r4 = static_cast<uint32_t>(regargs_result_800DC458_B5B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC458u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801084DC;
}

loc_8010847C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 68));
}

loc_8010848C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80108498;
    }
}

loc_80108490:
{
    r3 = (r26 + 24);
    ctx->lr = 0x80108498u;
    if constexpr (KnownRegArgsCpuCall<0x800DC854u>(&func_800DC854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC854_BC6B = func_800DC854_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC854_BC6B);
        r4 = static_cast<uint32_t>(regargs_result_800DC854_BC6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC854u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80108498:
{
    r27 = 0;
    goto loc_801084DC;
}

loc_801084A0:
{
    r27 = (r27 + 1);
    r0 = 30;
    MemoryInline::FlatWrite32((r26 + 12), r0);
    r0 = 4;
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
    goto loc_801084DC;
}

loc_801084B8:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_801084C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801084D0;
    }
}

loc_801084C8:
{
    r29 = 1584;
    r28 = 24;
}

loc_801084D0:
{
    r27 = 0;
    goto loc_801084DC;
}

loc_801084D8:
{
    r27 = 0;
}

loc_801084DC:
{
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 70));
}

loc_801084F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80108570;
    }
}

loc_801084F4:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801084FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80108508;
    }
}

loc_80108500:
{
}

loc_80108504:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(21))) {
        goto loc_8010853C;
    }
}

loc_80108508:
{
    r3 = 256;
    r4 = 32;
    r5 = 0;
    ctx->lr = 0x80108518u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_C791 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_C791);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_C791 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80108524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80108534;
    }
}

loc_80108528:
{
    r3 = r26;
    ctx->lr = 0x80108530u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010A37C_D083 = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_D083);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_D083 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80108704;
}

loc_80108534:
{
    r27 = 0;
    goto loc_801085A4;
}

loc_8010853C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r0 = (r29 - r0);
    r3 = (r0 & 65535);
    r4 = r28;
    r5 = 0;
    ctx->lr = 0x80108554u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_D92D = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_D92D);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_D92D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80108560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801085A4;
    }
}

loc_80108564:
{
    r3 = r26;
    ctx->lr = 0x8010856Cu;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010A37C_E21F = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_E21F);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_E21F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80108704;
}

loc_80108570:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r0 = (r29 - r0);
    r3 = (r0 & 65535);
    r4 = r28;
    r5 = 0;
    ctx->lr = 0x80108588u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_EA8C = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_EA8C);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_EA8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80108594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801085A4;
    }
}

loc_80108598:
{
    r3 = r26;
    ctx->lr = 0x801085A0u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010A37C_F37E = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_F37E);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_F37E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80108704;
}

loc_801085A4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_801085AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801085F8;
    }
}

loc_801085B0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead8((r26 + 6));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3240);
    r3_addr_21 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_21);
    r4 = 32;
    r5 = 0;
    ctx->lr = 0x801085DCu;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_FDD2 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_FDD2);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_FDD2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801085E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801085F8;
    }
}

loc_801085EC:
{
    r3 = r26;
    ctx->lr = 0x801085F4u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010A37C_106C4 = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_106C4);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_106C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80108704;
}

loc_801085F8:
{
    r3 = MemoryInline::FlatRead8((r26 + 2));
    r0 = (r3 + -6);
}

loc_80108604:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80108658;
    }
}

loc_80108608:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -3312);
    r3_addr_23 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_23);
    r4 = 0x805A0000u;
    r4 = (r4 + -3228);
    r4_addr_3 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_3);
    r5 = 0;
    ctx->lr = 0x8010863Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_1118F = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_1118F);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_1118F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80108648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80108658;
    }
}

loc_8010864C:
{
    r3 = r26;
    ctx->lr = 0x80108654u;
    if constexpr (KnownRegArgsCpuCall<0x8010A37Cu>(&func_8010A37C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010A37C_11A86 = func_8010A37C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A37C_11A86);
        r4 = static_cast<uint32_t>(regargs_result_8010A37C_11A86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A37Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80108704;
}

loc_80108658:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_80108660:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8010866C;
    }
}

loc_80108664:
{
}

loc_80108668:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80108678;
    }
}

loc_8010866C:
{
    r3 = (r31 + 16);
    r4 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80108678:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_80108680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80108698;
    }
}

loc_80108684:
{
}

loc_80108688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_801086D8;
    }
}

loc_8010868C:
{
}

loc_80108690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_801086E8;
    }
}

loc_80108694:
{
    goto loc_801086F4;
}

loc_80108698:
{
    r0 = MemoryInline::FlatRead8((r31 + 69));
}

loc_801086A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801086C0;
    }
}

loc_801086A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29420));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801086B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801086C0;
    }
}

loc_801086B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
    goto loc_801086C8;
}

loc_801086C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
}

loc_801086C8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    ctx->lr = 0x801086D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801086F4;
}

loc_801086D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    ctx->lr = 0x801086E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801086F4;
}

loc_801086E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r26 + 24);
    ctx->lr = 0x801086F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_801086F4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = r26;
    ctx->lr = 0x80108704u;
    if constexpr (KnownRegArgsCpuCall<0x80108A90u>(&func_80108A90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80108A90_1350A = func_80108A90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80108A90_1350A);
        r4 = static_cast<uint32_t>(regargs_result_80108A90_1350A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80108A90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80108704:
{
    r0 = 104;
    addr_psqx_80108708_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80108708_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80107EC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80107EC0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80107EC0 func_80107EC0 preserves=true fpr_mask=0x00000000
