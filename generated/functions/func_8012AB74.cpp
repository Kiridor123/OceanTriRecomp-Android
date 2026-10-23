#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A874(CpuContext* ctx);
extern "C" uint32_t func_8012A874_ra70_e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012A99C(CpuContext* ctx);
extern "C" uint64_t func_8012A99C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012C150(CpuContext* ctx);
extern "C" uint64_t func_8012C150_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012CFF4(CpuContext* ctx);
extern "C" uint64_t func_8012CFF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D860(CpuContext* ctx);
extern "C" uint32_t func_8012D860_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027CFD4(CpuContext* ctx);
extern "C" uint64_t func_8027CFD4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802D8478(CpuContext* ctx);
extern "C" uint64_t func_802D8478_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80345718(CpuContext* ctx);
extern "C" uint64_t func_80345718_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012AB74_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_8012B3B8_loc_0 = 0;
    uint32_t addr_psqx_8012B3C4_loc_0 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t stackword0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8012AB74;

loc_8012AB74:
{
    r21 = 0;
    r20 = 0;
}

loc_8012AD08:
{
}

loc_8012AD0C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_8012AD1C;
    }
}

loc_8012AD10:
{
}

loc_8012AD14:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012AE08;
    }
}

loc_8012AD18:
{
    goto loc_8012ADD4;
}

loc_8012AD1C:
{
}

loc_8012AD20:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8012ADA0;
    }
}

loc_8012AD24:
{
    f31.d = MemoryInline::FlatReadFloat32((r17 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8012AD30:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012ADA0;
    }
}

loc_8012AD38:
{
    r18 = 1;
    r4 = MemoryInline::FlatRead8((r17 + 54));
}

loc_8012AD44:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8012AD98;
    }
}

loc_8012AD48:
{
    r3 = r17;
    ctx->lr = 0x8012AD50u;
    if constexpr (KnownRegArgsCpuCall<0x80345718u>(&func_80345718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80345718_1683 = func_80345718_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80345718_1683);
        r4 = static_cast<uint32_t>(regargs_result_80345718_1683 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80345718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r17 = r3;
}

loc_8012AD58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AD98;
    }
}

loc_8012AD5C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012AD64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012AD98;
    }
}

loc_8012AD68:
{
    r18 = 2;
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r17 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r17 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r17 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r17 + 24));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f31.d = MemoryInline::FlatReadFloat32((r17 + 28));
}

loc_8012AD98:
{
    f31.d = PpcFmulsInline(f31.d, f31.d);
    goto loc_8012AE10;
}

loc_8012ADA0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword0 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword0));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = PpcFmulsInline(f0.d, f0.d);
    r18 = 1;
    goto loc_8012AE10;
}

loc_8012ADD4:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = PpcFmulsInline(f0.d, f0.d);
    r18 = 1;
    goto loc_8012AE10;
}

loc_8012AE08:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    r18 = 0;
}

loc_8012AE10:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012AE1C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8012AE28;
    }
}

loc_8012AE20:
{
}

loc_8012AE24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012B004;
    }
}

loc_8012AE28:
{
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r14 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r19 = r3;
    r31 = 0;
    r14 = (r14 & 65535);
    goto loc_8012AFF4;
}

loc_8012AE4C:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_8012AE54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE58:
{
    r3 = MemoryInline::FlatRead8((r19 + 8));
    ctx->lr = 0x8012AE60u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D20C_2F65 = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_2F65);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_2F65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AE64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE68:
{
    r3 = r15;
    r4 = r19;
    ctx->lr = 0x8012AE74u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012D118_335C = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_335C);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_335C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8012AE78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE7C:
{
}

loc_8012AE80:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_8012AE94;
    }
}

loc_8012AE84:
{
    r3 = r19;
    if constexpr (KnownRegArgsCpuCall<0x8027CFD4u>(&func_8027CFD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027CFD4_3834 = func_8027CFD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027CFD4_3834);
        r4 = static_cast<uint32_t>(regargs_result_8027CFD4_3834 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027CFD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012AE90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE94:
{
}

loc_8012AE98:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(1))) {
        goto loc_8012AEAC;
    }
}

loc_8012AE9C:
{
    r3 = r19;
    ctx->lr = 0x8012AEA4u;
    if constexpr (KnownRegArgsCpuCall<0x8012D860u>(&func_8012D860)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8012D860_3C32 = func_8012D860_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D860_3C32;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D860u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AEA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEAC:
{
}

loc_8012AEB0:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8012AEC0;
    }
}

loc_8012AEB4:
{
    r0 = MemoryInline::FlatRead8((r19 + 9));
}

loc_8012AEBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEC0:
{
}

loc_8012AEC4:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_8012AED4;
    }
}

loc_8012AEC8:
{
    r0 = MemoryInline::FlatRead8((r19 + 9));
}

loc_8012AED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8012AFEC;
    }
}

loc_8012AED4:
{
    r3 = r15;
    r4 = (r31 & 255);
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80131974
}

loc_8012AEE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEE8:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r19 + 1446));
    ctx->lr = 0x8012AEF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_44F8 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_44F8);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_44F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AEF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEFC:
{
    r3 = r15;
    r4 = (r31 & 255);
    ctx->lr = 0x8012AF08u;
    if constexpr (KnownRegArgsCpuCall<0x8012C150u>(&func_8012C150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012C150_492F = func_8012C150_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C150_492F);
        r4 = static_cast<uint32_t>(regargs_result_8012C150_492F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        InvokeDirectCpu<0x8012C150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r17 = r3;
}

loc_8012AF10:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012AF20;
    }
}

loc_8012AF14:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012AF1C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AF20:
{
}

loc_8012AF24:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012AF30;
    }
}

loc_8012AF28:
{
}

loc_8012AF2C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012AF58;
    }
}

loc_8012AF30:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r19 + 60);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012AF50u;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_5185 = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_5185;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012AF54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AF58:
{
    r0 = (r30 & 255);
}

loc_8012AF60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012AF80;
    }
}

loc_8012AF64:
{
    r30 = r31;
}

loc_8012AF6C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012AF78;
    }
}

loc_8012AF70:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012AFEC;
}

loc_8012AF78:
{
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AF80:
{
}

loc_8012AF84:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012AFD8;
    }
}

loc_8012AF88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r17));
}

loc_8012AF8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012AF9C;
    }
}

loc_8012AF90:
{
    r30 = r31;
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AF9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AFEC;
    }
}

loc_8012AFA0:
{
    r27 = (r27 + 1);
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl5_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl5_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CEF40;
    }
}

loc_inl5_0x800CEF3C:
{
    r0 = 1;
}

loc_inl5_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
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

loc_inl5_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (r27 & 255);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_8012AFC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AFCC:
{
    r30 = r31;
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AFD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012AFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012AFEC;
    }
}

loc_8012AFE4:
{
    r30 = r31;
    f30.d = f0.d;
}

loc_8012AFEC:
{
    r31 = (r31 + 1);
    r19 = (r19 + 2848);
}

loc_8012AFF4:
{
    r0 = (r31 & 255);
}

loc_8012AFFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r14))) {
        goto loc_8012AE4C;
    }
}

loc_8012B000:
{
    r14 = r30;
}

loc_8012B004:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012B010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B024;
    }
}

loc_8012B014:
{
}

loc_8012B018:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B024;
    }
}

loc_8012B01C:
{
}

loc_8012B020:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012B180;
    }
}

loc_8012B024:
{
    r3 = 0x806C0000u;
    r19 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8012B034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B038:
{
}

loc_8012B03C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8012B050;
    }
}

loc_8012B040:
{
    r3 = r19;
    ctx->lr = 0x8012B048u;
    if constexpr (KnownRegArgsCpuCall<0x802D8478u>(&func_802D8478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D8478_685D = func_802D8478_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D8478_685D);
        r4 = static_cast<uint32_t>(regargs_result_802D8478_685D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D8478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B04C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012B16C;
    }
}

loc_8012B050:
{
}

loc_8012B054:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B058:
{
    r3 = MemoryInline::FlatRead8((r15 + 481));
    r0 = MemoryInline::FlatRead8((r19 + 420));
}

loc_8012B064:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012B16C;
    }
}

loc_8012B068:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r19 + 806));
    ctx->lr = 0x8012B074u;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_6DE6 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_6DE6);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_6DE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B078:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012B16C;
    }
}

loc_8012B07C:
{
    r0 = MemoryInline::FlatRead8((r19 + 369));
}

loc_8012B084:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8012B16C;
    }
}

loc_8012B088:
{
    r0 = MemoryInline::FlatRead8((r15 + 911));
}

loc_8012B090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B094:
{
    r3 = r15;
    // inline leaf 0x8012C268 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 928));
    // end of inlined leaf 0x8012C268
    r17 = r3;
}

loc_8012B0A4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8012B0B4;
    }
}

loc_8012B0A8:
{
    r0 = MemoryInline::FlatRead8((r19 + 368));
}

loc_8012B0B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B16C;
    }
}

loc_8012B0B4:
{
}

loc_8012B0B8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8012B0C8;
    }
}

loc_8012B0BC:
{
    r0 = MemoryInline::FlatRead8((r19 + 368));
}

loc_8012B0C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012B16C;
    }
}

loc_8012B0C8:
{
}

loc_8012B0CC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012B0DC;
    }
}

loc_8012B0D0:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012B0D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012B180;
    }
}

loc_8012B0DC:
{
}

loc_8012B0E0:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012B0EC;
    }
}

loc_8012B0E4:
{
}

loc_8012B0E8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012B114;
    }
}

loc_8012B0EC:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r19 + 376);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012B10Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_7A5A = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_7A5A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012B110:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B180;
    }
}

loc_8012B114:
{
    r0 = (r30 & 255);
}

loc_8012B11C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B13C;
    }
}

loc_8012B120:
{
    r28 = 0;
}

loc_8012B128:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012B134;
    }
}

loc_8012B12C:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012B16C;
}

loc_8012B134:
{
    r26 = r17;
    goto loc_8012B16C;
}

loc_8012B13C:
{
}

loc_8012B140:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012B158;
    }
}

loc_8012B144:
{
}

loc_8012B148:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r17))) {
        goto loc_8012B16C;
    }
}

loc_8012B14C:
{
    r28 = 0;
    r26 = r17;
    goto loc_8012B16C;
}

loc_8012B158:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012B160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012B16C;
    }
}

loc_8012B164:
{
    r28 = 0;
    f30.d = f0.d;
}

loc_8012B16C:
{
}

loc_8012B170:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(255))) {
        goto loc_8012B180;
    }
}

loc_8012B174:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r14 = r28;
}

loc_8012B180:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 253);
    r0 = (r0 & 255);
}

loc_8012B194:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8012B398;
    }
}

loc_8012B198:
{
}

loc_8012B19C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8012B380;
    }
}

loc_8012B1A0:
{
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl7_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl7_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CFB50;
    }
}

loc_inl7_0x800CFB48:
{
    r3 = 0;
    goto loc_inl7_cont_800CFB34;
}

loc_inl7_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl7_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl7_0x800CFB64;
    }
}

loc_inl7_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl7_cont_800CFB34;
}

loc_inl7_0x800CFB64:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_4);
}

loc_inl7_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r24 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl8_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl8_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CFB10;
    }
}

loc_inl8_0x800CFB08:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl8_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl8_0x800CFB24;
    }
}

loc_inl8_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB24:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl8_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r17 = r3;
    r19 = 0;
    r27 = (r24 & 65535);
    goto loc_8012B374;
}

loc_8012B1C4:
{
    r3 = MemoryInline::FlatRead8((r15 + 2));
    r0 = (r19 & 255);
}

loc_8012B1D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1D4:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_8012B1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1E0:
{
    r3 = MemoryInline::FlatRead8((r15 + 481));
    r0 = MemoryInline::FlatRead8((r17 + 481));
}

loc_8012B1EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1F0:
{
    r4 = MemoryInline::FlatRead8((r17 + 3));
    r0 = MemoryInline::FlatRead8((r15 + 3));
}

loc_8012B1FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_8012B36C;
    }
}

loc_8012B200:
{
    r0 = MemoryInline::FlatRead32((r15 + 456));
    r0 = (r0 & 1);
}

loc_8012B20C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B220;
    }
}

loc_8012B210:
{
    r0 = MemoryInline::FlatRead32((r17 + 456));
    r0 = (r0 & 1);
}

loc_8012B21C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B220:
{
    r3 = r15;
    ctx->lr = 0x8012B228u;
    if constexpr (KnownRegArgsCpuCall<0x8012CFF4u>(&func_8012CFF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012CFF4_956A = func_8012CFF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012CFF4_956A);
        r4 = static_cast<uint32_t>(regargs_result_8012CFF4_956A >> 32);
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
        InvokeDirectCpu<0x8012CFF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8012B22C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012B36C;
    }
}

loc_8012B230:
{
    r0 = MemoryInline::FlatRead8((r17 + 485));
}

loc_8012B238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8012B36C;
    }
}

loc_8012B23C:
{
}

loc_8012B240:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8012B36C;
    }
}

loc_8012B244:
{
}

loc_8012B248:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_8012B25C;
    }
}

loc_8012B24C:
{
    r3 = r17;
    // inline leaf 0x80133A10 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2380));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80133A10
}

loc_8012B258:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B25C:
{
}

loc_8012B260:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8012B270;
    }
}

loc_8012B264:
{
    r0 = MemoryInline::FlatRead8((r17 + 482));
}

loc_8012B26C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B36C;
    }
}

loc_8012B270:
{
}

loc_8012B274:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_8012B284;
    }
}

loc_8012B278:
{
    r0 = MemoryInline::FlatRead8((r17 + 482));
}

loc_8012B280:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012B36C;
    }
}

loc_8012B284:
{
    r3 = r17;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r0 = r3;
    r3 = r15;
    r4 = (r0 & 255);
    ctx->lr = 0x8012B29Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_A117 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_A117);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_A117 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B2A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B2A4:
{
    r3 = r15;
    r4 = (r19 & 255);
    // inline leaf 0x8012C270 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 932));
    // end of inlined leaf 0x8012C270
    r24 = r3;
}

loc_8012B2B8:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012B2C8;
    }
}

loc_8012B2BC:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012B2C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B2C8:
{
}

loc_8012B2CC:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012B2D8;
    }
}

loc_8012B2D0:
{
}

loc_8012B2D4:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012B300;
    }
}

loc_8012B2D8:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r17 + 392);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012B2F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_AA04 = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_AA04;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012B2FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B300:
{
    r0 = (r29 & 255);
}

loc_8012B308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B30C:
{
    r0 = (r30 & 255);
}

loc_8012B314:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B318:
{
}

loc_8012B31C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B320:
{
    r29 = r19;
}

loc_8012B328:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012B334;
    }
}

loc_8012B32C:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012B36C;
}

loc_8012B334:
{
    r26 = r24;
    goto loc_8012B36C;
}

loc_8012B33C:
{
}

loc_8012B340:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012B358;
    }
}

loc_8012B344:
{
}

loc_8012B348:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r24))) {
        goto loc_8012B36C;
    }
}

loc_8012B34C:
{
    r29 = r19;
    r26 = r24;
    goto loc_8012B36C;
}

loc_8012B358:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012B360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012B36C;
    }
}

loc_8012B364:
{
    r29 = r19;
    f30.d = f0.d;
}

loc_8012B36C:
{
    r19 = (r19 + 1);
    r17 = (r17 + 2840);
}

loc_8012B374:
{
    r0 = (r19 & 255);
}

loc_8012B37C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r27))) {
        goto loc_8012B1C4;
    }
}

loc_8012B380:
{
    r0 = (r29 & 255);
}

loc_8012B388:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8012B398;
    }
}

loc_8012B38C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r14 = r29;
}

loc_8012B398:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r14));
    r0 = 168;
    addr_psqx_8012B3B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012B3B8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_8012B3C4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012B3C4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012AB74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012AB74_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE1FF gpr_write=0xFFFFC9FB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012AB74 func_8012AB74 preserves=false fpr_mask=0xC0000000
