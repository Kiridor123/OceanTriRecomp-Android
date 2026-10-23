#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80477130_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_804772C8_loc_0 = 0;
    uint32_t cr0_0 = 0;
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

    goto loc_80477130;

loc_80477130:
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 320), 0, 56u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 320));
    r31 = 0x80610000u;
    r30 = r3;
}

loc_8047716C:
{
    r31 = (r31 + 13280);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(8))) {
        goto loc_8047717C;
    }
}

loc_80477174:
{
    r3 = 0;
    goto loc_80477434;
}

loc_8047717C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 328));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2652));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_80477188:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80477198;
    }
}

loc_8047718C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 324));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80477194:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804771A0;
    }
}

loc_80477198:
{
    r3 = 0;
    goto loc_80477434;
}

loc_804771A0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 332));
}

loc_804771A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(6))) {
        goto loc_804771B4;
    }
}

loc_804771AC:
{
    r3 = 0;
    goto loc_80477434;
}

loc_804771B4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 336));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804771BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804771C8;
    }
}

loc_804771C0:
{
    r3 = 0;
    goto loc_80477434;
}

loc_804771C8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 340));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804771D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804771E0;
    }
}

loc_804771D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2648));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804771DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804771E8;
    }
}

loc_804771E0:
{
    r3 = 0;
    goto loc_80477434;
}

loc_804771E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 344));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804771F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804771FC;
    }
}

loc_804771F4:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804771F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80477204;
    }
}

loc_804771FC:
{
    r3 = 0;
    goto loc_80477434;
}

loc_80477204:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 348));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047720C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80477218;
    }
}

loc_80477210:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80477214:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80477220;
    }
}

loc_80477218:
{
    r3 = 0;
    goto loc_80477434;
}

loc_80477220:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 352));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80477228:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80477234;
    }
}

loc_8047722C:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80477230:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8047723C;
    }
}

loc_80477234:
{
    r3 = 0;
    goto loc_80477434;
}

loc_8047723C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 356));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80477244:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80477250;
    }
}

loc_80477248:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8047724C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80477258;
    }
}

loc_80477250:
{
    r3 = 0;
    goto loc_80477434;
}

loc_80477258:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 368));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80477260:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8047726C;
    }
}

loc_80477264:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80477268:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80477274;
    }
}

loc_8047726C:
{
    r3 = 0;
    goto loc_80477434;
}

loc_80477274:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 372));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8047727C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80477288;
    }
}

loc_80477280:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80477284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80477290;
    }
}

loc_80477288:
{
    r3 = 0;
    goto loc_80477434;
}

loc_80477290:
{
    r8 = (r4 * 12);
    r9 = (r31 + 0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2656));
    r5 = (r31 + 96);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2644));
    r27 = 0;
    r7 = (r9 + r8);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r5 + r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 28), r6);
    r9_addr_1 = (r9 + r8);
    r0 = MemoryInline::FlatRead32(r9_addr_1);
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 16), r0);
    addr_lfsx_804772C8_loc_0 = (r5 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804772C8_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 24), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 64), r27);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 44), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_27F7 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_27F7;
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
    MemoryInline::FlatWrite32((r30 + 68), r3);
    r26 = r30;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -2600));
    r28 = (r31 + 192);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -2624));
    r24 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2656));
    r25 = 0;
    r29 = 1127219200;
}

loc_8047733C:
{
    MemoryInline::FlatWrite32((r26 + 124), r27);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2616));
    r0 = MemoryInline::FlatRead32((r30 + 332));
    stackword10 = r29;
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0 = (r0 * 36);
    r0 = (r25 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword11));
    MemoryInline::FlatWrite32((r26 + 136), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x8047737Cu;
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
        const auto regargs_result_804685F8_31AD = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_31AD);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_31AD >> 32);
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

loc_80477388:
{
    r25 = (r25 + 4);
    MemoryInline::FlatWriteFloat32((r26 + 160), f0.d);
    r26 = (r26 + 4);
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(3))) {
        goto loc_8047733C;
    }
}

loc_80477398:
{
    r0 = MemoryInline::FlatRead32((r30 + 332));
    r4 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 204), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 204), r4);
    r3 = (r31 + 192);
    r0 = (r0 * 36);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2648));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 344));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2608));
    r3 = (r3 + r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 212), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804773CC:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 340));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 208), r4);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 216), r0);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r30 + 244), r4);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r30 + 260), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r30 + 248), r4);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r30 + 264), r0);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r30 + 252), r4);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r30 + 268), r0);
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r30 + 256), r4);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r30 + 272), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 292), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r30 + 312), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8047741C;
    }
}

loc_80477418:
{
    MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r30 + 312), f0.d);
}

loc_8047741C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2652));
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r30 + 296), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r30 + 300), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r30 + 304), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r30 + 308), f0.d);
    }
}

loc_80477434:
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

extern "C" void func_80477130(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80477130_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80477130 func_80477130 preserves=true fpr_mask=0x00000000
