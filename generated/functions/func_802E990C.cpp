#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B0164(CpuContext* ctx);
extern "C" uint64_t func_802B0164_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E8FB8(CpuContext* ctx);
extern "C" uint64_t func_802E8FB8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E9194(CpuContext* ctx);
extern "C" uint64_t func_802E9194_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_802E9390(CpuContext* ctx);
extern "C" uint64_t func_802E9390_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E980C(CpuContext* ctx);
extern "C" uint64_t func_802E980C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802EA268(CpuContext* ctx);
extern "C" uint32_t func_802EA268_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802E990C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802E9B8C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
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
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802E990C;

loc_802E990C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    r4 = (r1 + 36);
    ctx->lr = 0x802E9950u;
    if constexpr (KnownRegArgsCpuCall<0x802E980Cu>(&func_802E980C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E980C_FF5 = func_802E980C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802E980C_FF5);
        r4 = static_cast<uint32_t>(regargs_result_802E980C_FF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E980Cu>(ctx);
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
        cr = ctx->cr;
    }
    r3 = (r1 + 24);
    r4 = (r1 + 36);
    r5 = MemoryInline::FlatRead8((r29 + 22));
    ctx->lr = 0x802E9960u;
    if constexpr (KnownRegArgsCpuCall<0x802B0164u>(&func_802B0164)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802B0164_1636 = func_802B0164_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B0164_1636);
        r4 = static_cast<uint32_t>(regargs_result_802B0164_1636 >> 32);
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
        InvokeDirectCpu<0x802B0164u>(ctx);
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
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = ~(r4 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = 10;
    r27 = (r0 & ~r3);
}

loc_802E9990:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802E999C;
    }
}

loc_802E9994:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12628));
    goto loc_802E99B0;
}

loc_802E999C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12628));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 140));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12624));
    f31.d = PpcFmulsInline(f0.d, f1.d);
}

loc_802E99B0:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x802D9FBC (6 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23648);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x802D9FBC
    r31 = r3;
    r3 = r28;
    r4 = (r1 + 48);
    r5 = (r27 & 255);
    f1.d = f31.d;
    r7 = MemoryInline::FlatRead32((r29 + 88));
    r6 = 131072;
    r0 = (r6 + -32768);
    r0 = (r0 - r7);
    r0 = (r0 & 65535);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12688));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r6 = fctiwzword0;
    r6 = (r6 & 65535);
    r7 = r31;
    r8 = r30;
    ctx->lr = 0x802E9A14u;
    if constexpr (KnownRegArgsCpuCall<0x802E9390u>(&func_802E9390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802E9390_2430 = func_802E9390_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E9390_2430);
        r4 = static_cast<uint32_t>(regargs_result_802E9390_2430 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E9390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    f31.d = f1.d;
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 192));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802E9A2C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802E9B88;
    }
}

loc_802E9A30:
{
    r3 = (r1 + 16);
    r4 = (r1 + 48);
    ctx->lr = 0x802E9A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E8FB8u>(&func_802E8FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802E8FB8_2EA5 = func_802E8FB8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802E8FB8_2EA5);
        r4 = static_cast<uint32_t>(regargs_result_802E8FB8_2EA5 >> 32);
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
        InvokeDirectCpu<0x802E8FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r28 + r0);
    r29 = MemoryInline::FlatRead16((r3 + 192));
    r3 = (r28 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_802E9A58:
{
    r3 = -252641280;
    r6 = (r3 + -3841);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E9A68;
    }
}

loc_802E9A64:
{
    r6 = r31;
}

loc_802E9A68:
{
}

loc_802E9A6C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802E9B00;
    }
}

loc_802E9A70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802E9A78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E9B88;
    }
}

loc_802E9A80:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12632));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 148));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = r6;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x802E9194u>(&func_802E9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E9194_3B76 = func_802E9194_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802E9194_3B76);
        r4 = static_cast<uint32_t>(regargs_result_802E9194_3B76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r6 = r3;
    r3 = r28;
    r4 = (r1 + 8);
    r5 = 1;
    r7 = r29;
    ctx->lr = 0x802E9AFCu;
    if constexpr (KnownRegArgsCpuCall<0x802EA268u>(&func_802EA268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802EA268_4040 = func_802EA268_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802EA268_4040;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802EA268u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_802E9B88;
}

loc_802E9B00:
{
    r0 = MemoryInline::FlatRead16((r28 + 132));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 76), r0);
    r3 = 1127219200;
    stackword10 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 72), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 136));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r1 + 64), f0.d);
    r0 = fctiwzword3;
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 134));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    stackword12 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 80), r3);
    }
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 88), f0.d);
    r0 = fctiwzword4;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 10), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = (r1 + 8);
    r5 = 1;
    r7 = r29;
    ctx->lr = 0x802E9B88u;
    if constexpr (KnownRegArgsCpuCall<0x802EA268u>(&func_802EA268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802EA268_4D53 = func_802EA268_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802EA268_4D53;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802EA268u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_802E9B88:
{
    r0 = 136;
    addr_psqx_802E9B8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802E9B8C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E990C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E990C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003EFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E990C func_802E990C preserves=true fpr_mask=0x00000000
