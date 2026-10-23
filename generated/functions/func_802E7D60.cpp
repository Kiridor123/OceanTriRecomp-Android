#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80054058(CpuContext* ctx);
extern "C" uint64_t func_80054058_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E2770(CpuContext* ctx);
extern "C" uint64_t func_802E2770_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802E7D60_ra38_1c2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802E7FE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802E7D60;

loc_802E7D60:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 176);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r30 = r7;
    r28 = r8;
    r29 = r9;
    r24 = r10;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    r3 = (r3 & 65535);
    r4 = 0;
    ctx->lr = 0x802E7DB4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_D0E = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_D0E);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_D0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
}

loc_802E7DC0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802E7DE0;
    }
}

loc_802E7DC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_802E7DF4;
}

loc_802E7DE0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_802E7DF4:
{
    r3 = (r1 + 8);
    r4 = r31;
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12660));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r30 = (r1 + 72);
    r29 = (r1 + 24);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWriteRam16((r1 + 84), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r7));
    r0 = (r7 + r25);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 80), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r5));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r6 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 86), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 82), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802E7EC4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E7EE4;
    }
}

loc_802E7ECC:
{
    r31 = 4;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_802E2770_238B = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_238B);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_238B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    }
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    goto loc_802E7F4C;
}

loc_802E7EE4:
{
    r31 = 8;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 76u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 68u, (r1 + 96), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_3, 64u, (r1 + 92), static_cast<uint16_t>(r5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r27);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 72u, (r1 + 100), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 60u, (r1 + 88), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r1 + 80), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 48u, (r1 + 76), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 66u, (r1 + 94), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved16(guest_range_3, 62u, (r1 + 90), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved16(guest_range_3, 74u, (r1 + 102), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_3, 70u, (r1 + 98), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 52), r3);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 40), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 28), r3);
    }
    r4 = MemoryInline::FlatRead32((r28 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_802E2770_2F48 = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_2F48);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_2F48 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    }
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
}

loc_802E7F4C:
{
}

loc_802E7F50:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(r25))) {
        goto loc_802E7FB4;
    }
}

loc_802E7F54:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r30 = (r30 + r0);
    r29 = (r29 + r0);
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r25);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r30 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 0u, r30, static_cast<uint16_t>(r0));
    r0 = (r3 + r26);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r30 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r30 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r30 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r30 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 82));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r30 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r30 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r29 + 12), r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    MemoryInline::FlatWrite32(r29, r0);
    r31 = (r31 + 4);
}

loc_802E7FB4:
{
    r3 = 3;
    r4 = (r31 & 255);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl2_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl2_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl2_0x800538AC;
    }
}

loc_inl2_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl2_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800538B0;
    }
}

loc_inl2_0x800538A8:
{
    goto loc_inl2_cont_80053870;
}

loc_inl2_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl2_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 72);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = (r1 + 24);
    // inline leaf 0x800539F8 (8 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 & -131073);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 12), r3);
    // end of inlined leaf 0x800539F8
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    ctx->lr = 0x802E7FDCu;
    if constexpr (KnownRegArgsCpuCall<0x80054058u>(&func_80054058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80054058_434A = func_80054058_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80054058_434A);
        r4 = static_cast<uint32_t>(regargs_result_80054058_434A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80054058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    ctx->lr = 0x802E7FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 184;
    addr_psqx_802E7FE4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802E7FE4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E7D60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E7D60_ra38_1c2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000FFC3 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E7D60 func_802E7D60 preserves=true fpr_mask=0x00000000
