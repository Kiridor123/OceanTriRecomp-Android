#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80126054(CpuContext* ctx);
extern "C" uint64_t func_80126054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801262DC(CpuContext* ctx);
extern "C" uint64_t func_801262DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801264B8(CpuContext* ctx);
extern "C" uint64_t func_801264B8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013BE48(CpuContext* ctx);
extern "C" uint64_t func_8013BE48_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801407DC(CpuContext* ctx);
extern "C" uint64_t func_801407DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140B5C(CpuContext* ctx);
extern "C" uint64_t func_80140B5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013BEC4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_8013C0C8_loc_0 = 0;
    uint32_t addr_psqx_8013C270_loc_0 = 0;
    uint32_t addr_psqx_8013C27C_loc_0 = 0;
    uint32_t addr_psqx_8013C288_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8013BEC4;

loc_8013BEC4:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 96);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r20 = r5;
    r21 = r6;
    r22 = r7;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -27920));
    f29.d = f30.d;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r26 = 0;
    r25 = 0;
    r24 = 0;
    r23 = 0;
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r20 & 255);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8(r4);
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80140744_18CD = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_18CD;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead8(r4);
    r0 = (r5 + -1);
}

loc_8013BF4C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8013C238;
    }
}

loc_8013BF50:
{
}

loc_8013BF54:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013BF64;
    }
}

loc_8013BF58:
{
}

loc_8013BF5C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_8013C268;
    }
}

loc_8013BF60:
{
    goto loc_8013C258;
}

loc_8013BF64:
{
    r0 = (r3 & 255);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r21 & 255);
}

loc_8013BF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8013BFB0;
    }
}

loc_8013BF7C:
{
}

loc_8013BF80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8013BFBC;
    }
}

loc_8013BF84:
{
}

loc_8013BF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8013BFD0;
    }
}

loc_8013BF8C:
{
}

loc_8013BF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8013BFE4;
    }
}

loc_8013BF94:
{
}

loc_8013BF98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8013C008;
    }
}

loc_8013BF9C:
{
}

loc_8013BFA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_8013C014;
    }
}

loc_8013BFA4:
{
}

loc_8013BFA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_8013C028;
    }
}

loc_8013BFAC:
{
    goto loc_8013C038;
}

loc_8013BFB0:
{
    r3 = r19;
    ctx->lr = 0x8013BFB8u;
    if constexpr (KnownRegArgsCpuCall<0x801264B8u>(&func_801264B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801264B8_2270 = func_801264B8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801264B8_2270);
        r4 = static_cast<uint32_t>(regargs_result_801264B8_2270 >> 32);
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
        InvokeDirectCpu<0x801264B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r24 = r3;
}

loc_8013BFBC:
{
    r3 = (r19 + 392);
    r4 = (r19 + 876);
    ctx->lr = 0x8013BFC8u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050F58_26C2 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_26C2);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_26C2 >> 32);
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
    f30.d = f1.d;
    goto loc_8013C038;
}

loc_8013BFD0:
{
    r3 = (r19 + 392);
    r4 = (r19 + 432);
    ctx->lr = 0x8013BFDCu;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050F58_2CD0 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_2CD0);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_2CD0 >> 32);
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
    f30.d = f1.d;
    goto loc_8013C038;
}

loc_8013BFE4:
{
    r3 = r19;
    r4 = (r22 & 65535);
    r5 = (r1 + 16);
    ctx->lr = 0x8013BFF4u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801262DC_32D2 = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_32D2);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_32D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = (r19 + 392);
    r4 = (r1 + 16);
    ctx->lr = 0x8013C000u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_3849 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_3849);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_3849 >> 32);
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
    f30.d = f1.d;
    goto loc_8013C038;
}

loc_8013C008:
{
    r3 = r19;
    ctx->lr = 0x8013C010u;
    if constexpr (KnownRegArgsCpuCall<0x801264B8u>(&func_801264B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801264B8_3DCC = func_801264B8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801264B8_3DCC);
        r4 = static_cast<uint32_t>(regargs_result_801264B8_3DCC >> 32);
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
        InvokeDirectCpu<0x801264B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r24 = r3;
}

loc_8013C014:
{
    r3 = (r19 + 392);
    r4 = (r19 + 876);
    ctx->lr = 0x8013C020u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_421E = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_421E);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_421E >> 32);
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
    f30.d = f1.d;
    goto loc_8013C038;
}

loc_8013C028:
{
    r3 = (r19 + 392);
    r4 = (r19 + 432);
    ctx->lr = 0x8013C034u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_482C = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_482C);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_482C >> 32);
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
    f30.d = f1.d;
}

loc_8013C038:
{
    r27 = (r20 & 255);
    r28 = (r21 & 255);
    r29 = 0x805A0000u;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -27912));
    r30 = 1127219200;
    r31 = 0x805A0000u;
}

loc_8013C050:
{
    r3 = (r1 + 8);
    r4 = (r20 & 255);
    r5 = (r1 + 12);
    ctx->lr = 0x8013C060u;
    if constexpr (KnownRegArgsCpuCall<0x8013BE48u>(&func_8013BE48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8013BE48_4E93 = func_8013BE48_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013BE48_4E93);
        r4 = static_cast<uint32_t>(regargs_result_8013BE48_4E93 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013BE48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8013C06C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_8013C154;
    }
}

loc_8013C070:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8013C078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013C090;
    }
}

loc_8013C07C:
{
}

loc_8013C080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013C10C;
    }
}

loc_8013C084:
{
}

loc_8013C088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8013C10C;
    }
}

loc_8013C08C:
{
    goto loc_8013C12C;
}

loc_8013C090:
{
    r5 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8013C098:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(14))) {
        goto loc_8013C0B0;
    }
}

loc_8013C09C:
{
    r4 = (r29 + 8656);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8013C0B0u:
        goto loc_8013C0B0;
        break;
    case 0x8013C0B8u:
        goto loc_8013C0B8;
        break;
    case 0x8013C0C0u:
        goto loc_8013C0C0;
        break;
    case 0x8013C0D0u:
        goto loc_8013C0D0;
        break;
    case 0x8013C0F0u:
        goto loc_8013C0F0;
        break;
    case 0x8013C100u:
        goto loc_8013C100;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8013C0B0:
{
    r26 = r5;
    goto loc_8013C140;
}

loc_8013C0B8:
{
    r26 = (r26 + r5);
    goto loc_8013C140;
}

loc_8013C0C0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    addr_lfsx_8013C0C8_loc_0 = (r24 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_8013C0C8_loc_0);
    goto loc_8013C140;
}

loc_8013C0D0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r0 * 100);
    r0 = (r0 ^ -2147483648);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    stackword18 = r30;
    MemoryInline::FlatWriteRam32((r1 + 32), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    goto loc_8013C140;
}

loc_8013C0F0:
{
    r0 = (r5 + 64);
    r0 = (r0 & 255);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_8013C140;
}

loc_8013C100:
{
    r26 = r25;
    r25 = (r25 + 1);
    goto loc_8013C140;
}

loc_8013C10C:
{
    r0 = (r21 & 255);
}

loc_8013C114:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8013C268;
    }
}

loc_8013C118:
{
    r0 = MemoryInline::FlatRead8((r19 + 2550));
}

loc_8013C120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8013C268;
    }
}

loc_8013C124:
{
    r3 = -1;
    goto loc_8013C26C;
}

loc_8013C12C:
{
    r3 = r19;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80140B5C_6444 = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_6444);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_6444 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8013C268;
}

loc_8013C140:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8013C168;
}

loc_8013C154:
{
    r3 = r19;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80140B5C_6817 = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_6817);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_6817 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8013C268;
}

loc_8013C168:
{
}

loc_8013C16C:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(15))) {
        goto loc_8013C184;
    }
}

loc_8013C170:
{
    r3 = (r31 + 8592);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8013C184u:
        goto loc_8013C184;
        break;
    case 0x8013C19Cu:
        goto loc_8013C19C;
        break;
    case 0x8013C1B4u:
        goto loc_8013C1B4;
        break;
    case 0x8013C1CCu:
        goto loc_8013C1CC;
        break;
    case 0x8013C1E0u:
        goto loc_8013C1E0;
        break;
    case 0x8013C1FCu:
        goto loc_8013C1FC;
        break;
    case 0x8013C214u:
        goto loc_8013C214;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8013C184:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
}

loc_8013C190:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8013C22C;
    }
}

loc_8013C194:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C19C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
}

loc_8013C1A8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8013C22C;
    }
}

loc_8013C1AC:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C1B4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
}

loc_8013C1C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8013C22C;
    }
}

loc_8013C1C4:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C1CC:
{
    SetCRFloatResident(cr, 0, f29.d, f30.d);
}

loc_8013C1D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C22C;
    }
}

loc_8013C1D8:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C1E0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r0 = (r3 & r0);
}

loc_8013C1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013C22C;
    }
}

loc_8013C1F4:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C1FC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = MemoryInline::FlatRead8((r19 + 2550));
}

loc_8013C208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8013C22C;
    }
}

loc_8013C20C:
{
    r23 = 1;
    goto loc_8013C22C;
}

loc_8013C214:
{
    r3 = (r22 & 255);
    r4 = (r26 & 255);
    ctx->lr = 0x8013C220u;
    if constexpr (KnownRegArgsCpuCall<0x80126054u>(&func_80126054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80126054_7AF8 = func_80126054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126054_7AF8);
        r4 = static_cast<uint32_t>(regargs_result_80126054_7AF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8013C224:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013C22C;
    }
}

loc_8013C228:
{
    r23 = 1;
}

loc_8013C22C:
{
}

loc_8013C230:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8013C268;
    }
}

loc_8013C234:
{
    goto loc_8013C050;
}

loc_8013C238:
{
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r4 = (r20 & 255);
    r5 = 1;
    ctx->lr = 0x8013C250u;
    if constexpr (KnownRegArgsCpuCall<0x801407DCu>(&func_801407DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_801407DC_803D = func_801407DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801407DC_803D);
        r4 = static_cast<uint32_t>(regargs_result_801407DC_803D >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801407DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    goto loc_8013C268;
}

loc_8013C258:
{
    r3 = r19;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80140B5C_8571 = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_8571);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_8571 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8013C268:
{
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8013C26C:
{
    r0 = 136;
    addr_psqx_8013C270_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013C270_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_8013C27C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013C27C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_8013C288_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013C288_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013BEC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013BEC4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013BEC4 func_8013BEC4 preserves=true fpr_mask=0x00000000
