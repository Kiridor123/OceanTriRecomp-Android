#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048E90(CpuContext* ctx);
extern "C" uint64_t func_80048E90_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8005A6A0(CpuContext* ctx);
extern "C" double func_8005A6A0_ra0_2_0_2(CpuContext*, double);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_8005A3D0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword6 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8005A3D0u);
    goto loc_8005A3D0;

loc_8005A3D0:
{
    MemoryAlias::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 100), r0);
    r28 = r3;
    r29 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = 0x80590000u;
    r0 = MemoryAlias::FlatRead16((r3 + -17808));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r3 = (r3 + -17808);
    r4 = MemoryAlias::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r4));
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -32224));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 44), r0);
    r3 = 1127219200;
    stackword7 = r3;
    MemoryAlias::FlatWriteRam32((r1 + 40), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryAlias::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryAlias::FlatReadFloat32((r2 + -32216));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword0;
    MemoryAlias::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = (r4 ^ -2147483648);
    stackword8 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
    stackword9 = r3;
    MemoryAlias::FlatWriteRam32((r1 + 56), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryAlias::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword1;
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r3 = 0x80590000u;
    r0 = MemoryAlias::FlatRead16((r3 + -17840));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    r3 = (r3 + -17840);
    r0 = MemoryAlias::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryAlias::FlatWriteRam32((r1 + 28), r0);
    r3 = 12;
    r4 = (r1 + 16);
    r5 = 0;
    ctx->lr = 0x8005A4C8u;
    if constexpr (KnownRegArgsCpuCall<0x80048E90u>(&func_80048E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80048E90_15CA = func_80048E90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80048E90_15CA);
        r4 = static_cast<uint32_t>(regargs_result_80048E90_15CA >> 32);
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
        InvokeDirectCpu<0x80048E90u>(ctx);
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
    r31 = MemoryAlias::FlatRead16((r1 + 16));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r30 = MemoryAlias::FlatRead16((r1 + 18));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
}

loc_8005A4D4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(16))) {
        goto loc_8005A4E0;
    }
}

loc_8005A4D8:
{
}

loc_8005A4DC:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(17))) {
        goto loc_8005A4E8;
    }
}

loc_8005A4E0:
{
}

loc_8005A4E4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_8005A680;
    }
}

loc_8005A4E8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17808);
    r0 = MemoryAlias::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r1 + 16), 0, 24u, false, true);
    MemoryAlias::WriteResolved16(guest_range_0, 4u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_0, 6u, (r1 + 22), static_cast<uint16_t>(r0));
    r3 = 0x80590000u;
    r3 = (r3 + -17792);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::WriteResolved16(guest_range_0, 0u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r30 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::WriteResolved16(guest_range_0, 2u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryAlias::WriteResolved16(guest_range_0, 8u, (r1 + 24), static_cast<uint16_t>(r0));
    r3 = 0x80590000u;
    r3 = (r3 + -17840);
    r0 = MemoryAlias::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_0, 16u, (r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_0, 18u, (r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_0, 20u, (r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_0, 22u, (r1 + 38), static_cast<uint16_t>(r0));
}

loc_8005A55C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8005A56C;
    }
}

loc_8005A560:
{
    r0 = -1;
    MemoryAlias::FlatWriteRam32((r1 + 28), r0);
    goto loc_8005A578;
}

loc_8005A56C:
{
    r3 = -1061093376;
    r0 = (r3 + -16129);
    MemoryAlias::FlatWriteRam32((r1 + 28), r0);
}

loc_8005A578:
{
    r3 = 12;
    r4 = (r1 + 16);
    r5 = 0;
    ctx->lr = 0x8005A588u;
    if constexpr (KnownRegArgsCpuCall<0x80048E90u>(&func_80048E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80048E90_2733 = func_80048E90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80048E90_2733);
        r4 = static_cast<uint32_t>(regargs_result_80048E90_2733 >> 32);
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
        InvokeDirectCpu<0x80048E90u>(ctx);
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
    r3 = 0x80590000u;
    r3 = (r3 + -17808);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_1 = MemoryAlias::ResolveRangeHost((r1 + 16), 0, 56u, false, true);
    MemoryAlias::WriteResolved16(guest_range_1, 4u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 6u, (r1 + 22), static_cast<uint16_t>(r0));
    r3 = 0x80590000u;
    r3 = (r3 + -17792);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::WriteResolved16(guest_range_1, 0u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r30 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryAlias::WriteResolved16(guest_range_1, 2u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryAlias::WriteResolved16(guest_range_1, 8u, (r1 + 24), static_cast<uint16_t>(r0));
    r3 = 0x80590000u;
    r3 = (r3 + -17840);
    r0 = MemoryAlias::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 16u, (r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 18u, (r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 20u, (r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 22u, (r1 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r13 + -17744));
    r0 = (r0 & 65535);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -32192));
    stackword13 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 52u, (r1 + 68), r0);
    r0 = 1127219200;
    stackword14 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 48u, (r1 + 64), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -32212));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -32208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x8005A6A0u>(&func_8005A6A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8005A6A0_3788 = func_8005A6A0_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_8005A6A0_3788;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005A6A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -32248));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8005A634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005A640;
    }
}

loc_8005A638:
{
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -32204));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_8005A640:
{
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -32200));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_3C92 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_3C92;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + 160);
    r4 = (r0 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = (r3 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryAlias::FlatWriteRam32((r1 + 28), r0);
    r3 = 12;
    r4 = (r1 + 16);
    r5 = 0;
    ctx->lr = 0x8005A680u;
    if constexpr (KnownRegArgsCpuCall<0x80048E90u>(&func_80048E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80048E90_42B2 = func_80048E90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80048E90_42B2);
        r4 = static_cast<uint32_t>(regargs_result_80048E90_42B2 >> 32);
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
        InvokeDirectCpu<0x80048E90u>(ctx);
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
}

loc_8005A680:
{
    r0 = MemoryAlias::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005A3D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005A3D0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xE3 cr_write=0xE3 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005A3D0 func_8005A3D0 preserves=true fpr_mask=0x00000000
