#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9D64(CpuContext* ctx);
extern "C" uint32_t func_800E9D64_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_800E5784_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_800E5D94_loc_0 = 0;
    uint32_t addr_psqx_800E5DA0_loc_0 = 0;
    uint32_t addr_psqx_800E5DAC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800E5784u);
    goto loc_800E5784;

loc_800E5784:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 80), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 82), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 17));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r0 = (r3 + 65536);
}

loc_800E5808:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800E5828;
    }
}

loc_800E580C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    stackword13 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30240));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1375 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1375;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_800E5828:
{
    MemoryInline::FlatWrite32((r24 + 32), r3);
    r0 = MemoryInline::FlatRead16((r28 + 24));
}

loc_800E5834:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800E5858;
    }
}

loc_800E5838:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30240));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1947 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1947;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_800E585C;
}

loc_800E5858:
{
    r3 = 0;
}

loc_800E585C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 4), 0, 86u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r24 + 36), r3);
    r0 = MemoryInline::FlatRead16((r28 + 30));
    MemoryInline::WriteResolved16(guest_range_2, 82u, (r24 + 86), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::WriteResolved16(guest_range_2, 84u, (r24 + 88), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r24 + 44), r0);
    r0 = MemoryInline::FlatRead8((r27 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 44u, (r24 + 48), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r24 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 11));
    MemoryInline::WriteResolved16(guest_range_2, 46u, (r24 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 12));
    MemoryInline::WriteResolved16(guest_range_2, 48u, (r24 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 50u, (r24 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 14));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30228));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30232));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30236));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_2, 52u, (r24 + 56), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E58E4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_800E58F0;
    }
}

loc_800E58E8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r24 + 56), static_cast<uint16_t>(r0));
}

loc_800E58F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r25);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30224));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r27 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 12));
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite16((r24 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r24 + 10), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800E5968:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800E598C;
    }
}

loc_800E596C:
{
    if constexpr (KnownRegArgsCpuCall<0x800E9D64u>(&func_800E9D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800E9D64_2CA9 = func_800E9D64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800E9D64_2CA9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E9D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (r0 - r31);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E598C:
{
    r0 = (r3 + 127);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30208));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E59C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E59D8;
    }
}

loc_800E59CC:
{
    r0 = 127;
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    goto loc_800E59E8;
}

loc_800E59D8:
{
}

loc_800E59DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E59E8;
    }
}

loc_800E59E0:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
}

loc_800E59E8:
{
    r3 = r24;
    ctx->lr = 0x800E59F0u;
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
    InvokeDirectCpu<0x800E5DCCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30208));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E5A40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5A50;
    }
}

loc_800E5A44:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r0));
    goto loc_800E5A60;
}

loc_800E5A50:
{
}

loc_800E5A54:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5A60;
    }
}

loc_800E5A58:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r0));
}

loc_800E5A60:
{
    r0 = MemoryInline::FlatRead16((r26 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 76), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 78), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead16((r28 + 14));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r4 = MemoryInline::FlatRead16((r25 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r25 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 100);
    r0 = (r31 + r4);
    r31 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r26 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r26 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 100);
    r0 = (r31 + r4);
    r31 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r27 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 100);
    r0 = (r31 + r4);
    r31 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r27 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r28 + 9));
    r0 = (r0 - r3);
    r0 = (r0 * 100);
    r31 = (r31 + r0);
    r23 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
}

loc_800E5AD0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800E5AF8;
    }
}

loc_800E5AD4:
{
    if constexpr (KnownRegArgsCpuCall<0x800E9D64u>(&func_800E9D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800E9D64_445A = func_800E9D64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800E9D64_445A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E9D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4 = (r4_rot_1 & -32);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (r0 - r23);
    r31 = (r31 + r0);
}

loc_800E5AF8:
{
    r0 = MemoryInline::FlatRead16((r24 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E5B00:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_800E5B0C;
    }
}

loc_800E5B04:
{
    r31 = r0;
    goto loc_800E5B20;
}

loc_800E5B0C:
{
    r0 = MemoryInline::FlatRead16((r24 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
}

loc_800E5B18:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_800E5B20;
    }
}

loc_800E5B1C:
{
    r31 = r0;
}

loc_800E5B20:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 13));
    r3 = (r3 + -64);
    r0 = MemoryInline::FlatRead8((r25 + 1));
    r3 = (r0 + r3);
    r3 = (r3 + -64);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r3 = (r0 + r3);
    r3 = (r3 + -64);
    r0 = MemoryInline::FlatRead8((r27 + 9));
    r3 = (r0 + r3);
    r3 = (r3 + -64);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r3 + r0);
}

loc_800E5B60:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_800E5B6C;
    }
}

loc_800E5B64:
{
    r3 = 127;
    goto loc_800E5B78;
}

loc_800E5B6C:
{
}

loc_800E5B70:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800E5B78;
    }
}

loc_800E5B74:
{
    r3 = 0;
}

loc_800E5B78:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r24 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r24 + 74), static_cast<uint16_t>(r0));
}

loc_800E5B90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5BA0;
    }
}

loc_800E5B94:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 74), static_cast<uint16_t>(r0));
    goto loc_800E5BB0;
}

loc_800E5BA0:
{
}

loc_800E5BA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5BB0;
    }
}

loc_800E5BA8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 74), static_cast<uint16_t>(r0));
}

loc_800E5BB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 113));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30224));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r28 + 33));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 110));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E5C18:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5C28;
    }
}

loc_800E5C1C:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r0));
    goto loc_800E5C38;
}

loc_800E5C28:
{
}

loc_800E5C2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5C38;
    }
}

loc_800E5C30:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r0));
}

loc_800E5C38:
{
    r0 = MemoryInline::FlatRead8((r28 + 34));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30224));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 111));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite16((r24 + 22), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E5C8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5C9C;
    }
}

loc_800E5C90:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 22), static_cast<uint16_t>(r0));
    goto loc_800E5CAC;
}

loc_800E5C9C:
{
}

loc_800E5CA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5CAC;
    }
}

loc_800E5CA4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 22), static_cast<uint16_t>(r0));
}

loc_800E5CAC:
{
    r0 = MemoryInline::FlatRead8((r28 + 35));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30216));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30224));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 112));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite16((r24 + 24), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E5D00:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5D10;
    }
}

loc_800E5D04:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 24), static_cast<uint16_t>(r0));
    goto loc_800E5D20;
}

loc_800E5D10:
{
}

loc_800E5D14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5D20;
    }
}

loc_800E5D18:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 24), static_cast<uint16_t>(r0));
}

loc_800E5D20:
{
    r0 = MemoryInline::FlatRead8((r28 + 32));
    MemoryInline::FlatWrite16((r24 + 90), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E5D30:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E5D40;
    }
}

loc_800E5D34:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r24 + 90), static_cast<uint16_t>(r0));
    goto loc_800E5D50;
}

loc_800E5D40:
{
}

loc_800E5D44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E5D50;
    }
}

loc_800E5D48:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r24 + 90), static_cast<uint16_t>(r0));
}

loc_800E5D50:
{
    r0 = MemoryInline::FlatRead16((r28 + 26));
    MemoryInline::FlatWrite16((r24 + 26), static_cast<uint16_t>(r0));
}

loc_800E5D5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E5D6C;
    }
}

loc_800E5D60:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 30), static_cast<uint8_t>(r0));
    goto loc_800E5D74;
}

loc_800E5D6C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r24 + 30), static_cast<uint8_t>(r0));
}

loc_800E5D74:
{
    r0 = MemoryInline::FlatRead16((r24 + 26));
}

loc_800E5D7C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(16000))) {
        goto loc_800E5D88;
    }
}

loc_800E5D80:
{
    r0 = 16000;
    MemoryInline::FlatWrite16((r24 + 26), static_cast<uint16_t>(r0));
}

loc_800E5D88:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    MemoryInline::FlatWriteFloat32((r24 + 12), f0.d);
    r0 = 120;
    addr_psqx_800E5D94_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E5D94_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_800E5DA0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E5DA0_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_800E5DAC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E5DAC_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E5784(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E5784_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E5784 func_800E5784 preserves=true fpr_mask=0x00000000
