#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB6BC(CpuContext* ctx);
extern "C" uint64_t func_800AB6BC_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0BB8(CpuContext* ctx);
extern "C" uint64_t func_802E0BB8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0E20(CpuContext* ctx);
extern "C" uint64_t func_802E0E20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0E70(CpuContext* ctx);
extern "C" uint64_t func_802E0E70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E2770(CpuContext* ctx);
extern "C" uint64_t func_802E2770_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802E2914(CpuContext* ctx);
extern "C" uint32_t func_802E2914_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_802EC728(CpuContext* ctx);
extern "C" uint64_t func_802EC728_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80331190(CpuContext* ctx);
extern "C" uint32_t func_80331190_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80331390(CpuContext* ctx);
extern "C" uint32_t func_80331390_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802F1724_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802F1988_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802F1724;

loc_802F1724:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r5;
    r30 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r0 = (r5 & 255);
}

loc_802F1764:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 28984);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F1778;
    }
}

loc_802F1770:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 29008);
}

loc_802F1778:
{
    r4 = MemoryInline::FlatRead8((r25 + 362));
    r4 = (r4 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x802F1788u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E70_13FA = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_13FA);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_13FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r26 & 255);
}

loc_802F1790:
{
    r3 = 3101;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F179C;
    }
}

loc_802F1798:
{
    r3 = 3382;
}

loc_802F179C:
{
    r4 = 0;
    ctx->lr = 0x802F17A4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_1C9F = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1C9F);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1C9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r31 = r3;
    r4 = MemoryInline::FlatRead16((r25 + 360));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r4 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12520));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r4);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r27 = (r0 & 65535);
    r3 = r30;
    ctx->lr = 0x802F17FCu;
    if constexpr (KnownRegArgsCpuCall<0x802EC728u>(&func_802EC728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802EC728_251E = func_802EC728_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802EC728_251E);
        r4 = static_cast<uint32_t>(regargs_result_802EC728_251E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802EC728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802F1800:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F1818;
    }
}

loc_802F1804:
{
    r3 = -238747648;
    r29 = (r3 + 5887);
    r3 = -85590016;
    r28 = (r3 + 13055);
    goto loc_802F1828;
}

loc_802F1818:
{
    r3 = -818872320;
    r29 = (r3 + 27135);
    r3 = -331481088;
    r28 = (r3 + 31999);
}

loc_802F1828:
{
    r3 = r29;
    r4 = r28;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        const auto regargs_result_802E2770_2A4D = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_2A4D);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_2A4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    r24 = r3;
    r3 = 3;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    // inline leaf 0x800538E0 (20 guest instruction(s))
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r7 + 32), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r7 + 20), static_cast<uint16_t>(r3));
    r0 = (r3 + r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r7 + 28), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r7 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r7 + 26), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r7 + 22), static_cast<uint16_t>(r4));
    r0 = (r4 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r7 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r7 + 30), static_cast<uint16_t>(r0));
    r0 = (r7 + 20);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r7 + 8), r0);
    // end of inlined leaf 0x800538E0
    r3 = r29;
    r4 = r24;
    r5 = r24;
    r6 = r29;
    // inline leaf 0x800539C4 (13 guest instruction(s))
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 & -131073);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    MemoryInline::FlatWriteRam32((r7 + 68), r3);
    MemoryInline::FlatWriteRam32((r7 + 72), r4);
    MemoryInline::FlatWriteRam32((r7 + 76), r5);
    MemoryInline::FlatWriteRam32((r7 + 80), r6);
    r0 = (r7 + 68);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
    // end of inlined leaf 0x800539C4
    ctx->lr = 0x802F1894u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = r30;
    ctx->lr = 0x802F189Cu;
    if constexpr (KnownRegArgsCpuCall<0x80331190u>(&func_80331190)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331190_4339 = func_80331190_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331190_4339;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80331190u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802F18A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F1984;
    }
}

loc_802F18A4:
{
    r0 = MemoryInline::FlatRead16((r30 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802F18AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_802F1984;
    }
}

loc_802F18B0:
{
    r0 = (r26 & 255);
}

loc_802F18B8:
{
    r3 = 3103;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F18C4;
    }
}

loc_802F18C0:
{
    r3 = 3384;
}

loc_802F18C4:
{
    ctx->lr = 0x802F18C8u;
    if constexpr (KnownRegArgsCpuCall<0x802E0BB8u>(&func_802E0BB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E0BB8_481E = func_802E0BB8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0BB8_481E);
        r4 = static_cast<uint32_t>(regargs_result_802E0BB8_481E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0BB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 + 1);
    r4 = (r0 & 65535);
    r3 = MemoryInline::FlatRead32((r25 + 400));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r24 = (r0 & 65535);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12688));
    stackword12 = r24;
    MemoryInline::FlatWriteRam32((r1 + 20), r24);
    r0 = 1127219200;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    stackword14 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12516));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_800AB6BC_50CF = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_50CF);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_50CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12672));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12512));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = r29;
    f1.d = f31.d;
    ctx->lr = 0x802F1944u;
    if constexpr (KnownRegArgsCpuCall<0x802E2914u>(&func_802E2914)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E2914_574C = func_802E2914_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_802E2914_574C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E2914u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
    }
    r3 = r28;
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    ctx->lr = 0x802F1954u;
    if constexpr (KnownRegArgsCpuCall<0x802E2914u>(&func_802E2914)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E2914_5C84 = func_802E2914_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_802E2914_5C84;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E2914u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
    }
    r3 = r30;
    ctx->lr = 0x802F195Cu;
    if constexpr (KnownRegArgsCpuCall<0x80331390u>(&func_80331390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331390_611C = func_80331390_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331390_611C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80331390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802F1960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F1984;
    }
}

loc_802F1964:
{
    r0 = (r26 & 255);
}

loc_802F196C:
{
    r3 = 3103;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F1978;
    }
}

loc_802F1974:
{
    r3 = 3384;
}

loc_802F1978:
{
    r4 = r24;
    r5 = (r1 + 8);
    ctx->lr = 0x802F1984u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E20u>(&func_802E0E20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E20_6571 = func_802E0E20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E20_6571);
        r4 = static_cast<uint32_t>(regargs_result_802E0E20_6571 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802F1984:
{
    r0 = 72;
    addr_psqx_802F1988_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F1988_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F1724(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F1724_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F1724 func_802F1724 preserves=true fpr_mask=0x00000000
