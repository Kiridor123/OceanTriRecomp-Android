#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80476180_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_80476318_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80476180u);
    goto loc_80476180;

loc_80476180:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 48);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 272), 0, 56u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 272));
    r31 = 0x80610000u;
    r30 = r3;
}

loc_804761BC:
{
    r31 = (r31 + 12864);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(8))) {
        goto loc_804761CC;
    }
}

loc_804761C4:
{
    r3 = 0;
    goto loc_80476474;
}

loc_804761CC:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 280));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2716));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_804761D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804761E8;
    }
}

loc_804761DC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 276));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804761E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804761F0;
    }
}

loc_804761E8:
{
    r3 = 0;
    goto loc_80476474;
}

loc_804761F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 284));
}

loc_804761F8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(6))) {
        goto loc_80476204;
    }
}

loc_804761FC:
{
    r3 = 0;
    goto loc_80476474;
}

loc_80476204:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 288));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047620C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80476218;
    }
}

loc_80476210:
{
    r3 = 0;
    goto loc_80476474;
}

loc_80476218:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 292));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80476220:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80476230;
    }
}

loc_80476224:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2712));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8047622C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80476238;
    }
}

loc_80476230:
{
    r3 = 0;
    goto loc_80476474;
}

loc_80476238:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 296));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80476240:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8047624C;
    }
}

loc_80476244:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80476248:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80476254;
    }
}

loc_8047624C:
{
    r3 = 0;
    goto loc_80476474;
}

loc_80476254:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 300));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047625C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80476268;
    }
}

loc_80476260:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80476264:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80476270;
    }
}

loc_80476268:
{
    r3 = 0;
    goto loc_80476474;
}

loc_80476270:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 304));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80476278:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80476284;
    }
}

loc_8047627C:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80476280:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8047628C;
    }
}

loc_80476284:
{
    r3 = 0;
    goto loc_80476474;
}

loc_8047628C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 308));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80476294:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804762A0;
    }
}

loc_80476298:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8047629C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804762A8;
    }
}

loc_804762A0:
{
    r3 = 0;
    goto loc_80476474;
}

loc_804762A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 320));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804762B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804762BC;
    }
}

loc_804762B4:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804762B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804762C4;
    }
}

loc_804762BC:
{
    r3 = 0;
    goto loc_80476474;
}

loc_804762C4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 324));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804762CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804762D8;
    }
}

loc_804762D0:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804762D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804762E0;
    }
}

loc_804762D8:
{
    r3 = 0;
    goto loc_80476474;
}

loc_804762E0:
{
    r8 = (r4 * 12);
    r9 = (r31 + 0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2720));
    r5 = (r31 + 96);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2708));
    r27 = 0;
    r7 = (r9 + r8);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r5 + r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 24), r6);
    r9_addr_1 = (r9 + r8);
    r0 = MemoryInline::FlatRead32(r9_addr_1);
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 12), r0);
    addr_lfsx_80476318_loc_0 = (r5 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476318_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 32), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 56), r27);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 40), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_26E7 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_26E7;
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
    MemoryInline::FlatWrite32((r30 + 60), r3);
    r26 = r30;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -2664));
    r28 = (r31 + 192);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -2688));
    r24 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2720));
    r25 = 0;
    r29 = 1127219200;
}

loc_8047638C:
{
    MemoryInline::FlatWrite32((r26 + 104), r27);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2680));
    r0 = MemoryInline::FlatRead32((r30 + 284));
    stackword10 = r29;
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r0 = (r25 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword11));
    MemoryInline::FlatWrite32((r26 + 116), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 288));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804763CCu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804685F8_30AF = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_30AF);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_30AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f29 = ctx->fpr[29];
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
        ctx->gpr[9] = r9;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r24 = (r24 + 1);
}

loc_804763D8:
{
    r25 = (r25 + 4);
    MemoryInline::FlatWriteFloat32((r26 + 140), f0.d);
    r26 = (r26 + 4);
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(3))) {
        goto loc_8047638C;
    }
}

loc_804763E8:
{
    r0 = MemoryInline::FlatRead32((r30 + 284));
    r4 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 176), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 176), r4);
    r3 = (r31 + 192);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2712));
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 296));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2672));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 184), r0);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 292));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 180), r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80476424:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 188), r0);
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r30 + 212), r4);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r30 + 224), r0);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r30 + 216), r4);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r30 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r30 + 220), r4);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r30 + 232), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r30 + 248), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 264), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80476460;
    }
}

loc_8047645C:
{
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 264), f0.d);
}

loc_80476460:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2716));
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r30 + 252), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r30 + 256), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r30 + 260), f0.d);
}

loc_80476474:
{
    r11 = (r1 + 48);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80476180(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80476180_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80476180 func_80476180 preserves=true fpr_mask=0x00000000
