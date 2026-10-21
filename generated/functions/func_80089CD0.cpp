#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B218(CpuContext* ctx);
extern "C" uint32_t func_8005B218_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005B28C(CpuContext* ctx);
extern "C" uint64_t func_8005B28C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80065220(CpuContext* ctx);
extern "C" uint32_t func_80065220_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80089F00(CpuContext* ctx);
extern "C" uint32_t func_80089F00_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089F78(CpuContext* ctx);
extern "C" uint64_t func_80089F78_ra0_2_18_0(CpuContext*, double);
extern "C" void func_80089FF4(CpuContext* ctx);
extern "C" uint32_t func_80089FF4_ra68_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80089CD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80089ED8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80089CD0u);
    goto loc_80089CD0;

loc_80089CD0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    f31.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80089D20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089D38;
    }
}

loc_80089D24:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80089D30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089D38;
    }
}

loc_80089D34:
{
    r10 = 0;
}

loc_80089D38:
{
}

loc_80089D3C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80089D54;
    }
}

loc_80089D40:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80089D4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089D54;
    }
}

loc_80089D50:
{
    r9 = 0;
}

loc_80089D54:
{
}

loc_80089D58:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80089D6C;
    }
}

loc_80089D5C:
{
    r0 = (r11 + 1073741824);
}

loc_80089D64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089D6C;
    }
}

loc_80089D68:
{
    r8 = 0;
}

loc_80089D6C:
{
}

loc_80089D70:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80089D88;
    }
}

loc_80089D74:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80089D80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089D88;
    }
}

loc_80089D84:
{
    r7 = 0;
}

loc_80089D88:
{
}

loc_80089D8C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80089DA4;
    }
}

loc_80089D90:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80089D9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089DA4;
    }
}

loc_80089DA0:
{
    r6 = 0;
}

loc_80089DA4:
{
}

loc_80089DA8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80089DC0;
    }
}

loc_80089DAC:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80089DB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089DC0;
    }
}

loc_80089DBC:
{
    r5 = 0;
}

loc_80089DC0:
{
}

loc_80089DC4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80089DE8;
    }
}

loc_80089DC8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 1416);
    r4 = 206;
    r5 = 0x80590000u;
    r5 = (r5 + 1432);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80089DE8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80089DE8:
{
    f1.d = f31.d;
    r3 = (r1 + 20);
    ctx->lr = 0x80089DF4u;
    if constexpr (KnownRegArgsCpuCall<0x80089FF4u>(&func_80089FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80089FF4_1935 = func_80089FF4_ra68_2_8_0(ctx, r3, r5, r6, f1.d);
        r3 = regargs_result_80089FF4_1935;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80089FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r28 = fctiwzword0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31724));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80089E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089E20;
    }
}

loc_80089E14:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r31_addr_0 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_0);
    goto loc_80089ED4;
}

loc_80089E20:
{
    r3 = (r1 + 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31_addr_1 = (r31 + r0);
    r4 = MemoryInline::FlatRead32(r31_addr_1);
    ctx->lr = 0x80089E30u;
    if constexpr (KnownRegArgsCpuCall<0x8005B218u>(&func_8005B218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B218_20E3 = func_8005B218_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005B218_20E3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    r0 = (r28 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r31_addr_2 = (r31 + r0);
    r4 = MemoryInline::FlatRead32(r31_addr_2);
    ctx->lr = 0x80089E44u;
    if constexpr (KnownRegArgsCpuCall<0x8005B218u>(&func_8005B218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B218_2407 = func_8005B218_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005B218_2407;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31720));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->lr = 0x80089E50u;
    if constexpr (KnownRegArgsCpuCall<0x80089F78u>(&func_80089F78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80089F78_26A9 = func_80089F78_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80089F78_26A9);
        r4 = static_cast<uint32_t>(regargs_result_80089F78_26A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80089F78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r28 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r1 + 19));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r1 + 15));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80089F54 (9 guest instruction(s))
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r5 = (r3 & 255);
    r0 = (r4 & 255);
    r0 = (r0 - r5);
    r0 = (r6 * r0);
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0 = (r3 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x80089F54
    r29 = (r3 & 255);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 18));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 14));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80089F54 (9 guest instruction(s))
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r5 = (r3 & 255);
    r0 = (r4 & 255);
    r0 = (r0 - r5);
    r0 = (r6 * r0);
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0 = (r3 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x80089F54
    r30 = (r3 & 255);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r1 + 17));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r1 + 13));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80089F54 (9 guest instruction(s))
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r5 = (r3 & 255);
    r0 = (r4 & 255);
    r0 = (r0 - r5);
    r0 = (r6 * r0);
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0 = (r3 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x80089F54
    r31 = (r3 & 255);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r1 + 16));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r1 + 12));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80089F54 (9 guest instruction(s))
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r5 = (r3 & 255);
    r0 = (r4 & 255);
    r0 = (r0 - r5);
    r0 = (r6 * r0);
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0 = (r3 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x80089F54
    r4 = (r3 & 255);
    r3 = (r1 + 8);
    r5 = r31;
    r6 = r30;
    r7 = r29;
    ctx->lr = 0x80089EB8u;
    if constexpr (KnownRegArgsCpuCall<0x80089F00u>(&func_80089F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80089F00_32E0 = func_80089F00_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80089F00_32E0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80089F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 8);
    ctx->lr = 0x80089EC0u;
    if constexpr (KnownRegArgsCpuCall<0x80065220u>(&func_80065220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80065220_3586 = func_80065220_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80065220_3586;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80065220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = r3;
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x80089ED0u;
    if constexpr (KnownRegArgsCpuCall<0x8005B28Cu>(&func_8005B28C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005B28C_38C2 = func_8005B28C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005B28C_38C2);
        r4 = static_cast<uint32_t>(regargs_result_8005B28C_38C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r28 = ctx->gpr[28];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[28] = r28;
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
        InvokeDirectCpu<0x8005B28Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r28 = ctx->gpr[28];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = r28;
}

loc_80089ED4:
{
    r0 = 56;
    addr_psqx_80089ED8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80089ED8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80089CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80089CD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80089CD0 func_80089CD0 preserves=true fpr_mask=0x00000000
