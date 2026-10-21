#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80504754(CpuContext* ctx);
extern "C" uint64_t func_80504754_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805047B4(CpuContext* ctx);
extern "C" uint64_t func_805047B4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80505224(CpuContext* ctx);
extern "C" uint64_t func_80505224_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80502B10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword10 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80502B10u);
    goto loc_80502B10;

loc_80502B10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_80502B38:
{
    r27 = r4;
    r28 = r6;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80502B54;
    }
}

loc_80502B44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80502CCC;
    }
}

loc_80502B48:
{
}

loc_80502B4C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(9))) {
        goto loc_80502BDC;
    }
}

loc_80502B50:
{
    goto loc_80502CCC;
}

loc_80502B54:
{
    r30 = MemoryInline::FlatRead32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r31 = MemoryInline::FlatRead32(r6);
    f31.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r3 = r31;
    ctx->lr = 0x80502B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80505224u>(&func_80505224)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80505224_1037 = func_80505224_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80505224_1037);
        r4 = static_cast<uint32_t>(regargs_result_80505224_1037 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80505224u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f30.d = MemoryInline::FlatReadFloat32((r30 + 48));
    r3 = MemoryInline::FlatRead32(r28);
    ctx->lr = 0x80502B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x805047B4u>(&func_805047B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_805047B4_18F4 = func_805047B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805047B4_18F4);
        r4 = static_cast<uint32_t>(regargs_result_805047B4_18F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x805047B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f7.d = MemoryInline::FlatReadFloat32(r27);
    r3 = 3;
    f5.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f1.d = PPC_Fsel(f2.d, f0.d, f6.d);
    f4.d = PPC_Fsel(f3.d, f5.d, f7.d);
    f3.d = PPC_Fsel(f3.d, f7.d, f5.d);
    f0.d = PPC_Fsel(f2.d, f6.d, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r27, f4.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f3.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    goto loc_80502CD0;
}

loc_80502BDC:
{
    r29 = MemoryInline::FlatRead32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r31 = MemoryInline::FlatRead32(r6);
    r30 = MemoryInline::FlatRead32((r31 + 88));
}

loc_80502BF4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80502C74;
    }
}

loc_80502BF8:
{
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_80502C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80502C0C;
    }
}

loc_80502C04:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_80502C14;
}

loc_80502C0C:
{
    r3 = r31;
    ctx->lr = 0x80502C14u;
    if constexpr (KnownRegArgsCpuCall<0x80504754u>(&func_80504754)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80504754_25DB = func_80504754_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80504754_25DB);
        r4 = static_cast<uint32_t>(regargs_result_80504754_25DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80504754u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
}

loc_80502C14:
{
    r0 = 1127219200;
    r3 = (r30 ^ -2147483648);
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1464));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r3 = fctiwzword0;
    r0 = (r3 + 1);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_80502C74:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    r3 = r29;
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    ctx->lr = 0x80502C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x805047B4u>(&func_805047B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_805047B4_33A2 = func_805047B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805047B4_33A2);
        r4 = static_cast<uint32_t>(regargs_result_805047B4_33A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x805047B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f2.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r3 = 1;
    f6.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f5.d = PPC_Fsel(f1.d, f4.d, f6.d);
    f4.d = PPC_Fsel(f1.d, f6.d, f4.d);
    f1.d = PPC_Fsel(f3.d, f0.d, f2.d);
    f0.d = PPC_Fsel(f3.d, f2.d, f0.d);
    MemoryInline::FlatWriteFloat32(r27, f5.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    goto loc_80502CD0;
}

loc_80502CCC:
{
    r3 = 0;
}

loc_80502CD0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 64));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80502B10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80502B10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80502B10 func_80502B10 preserves=true fpr_mask=0x00000000
