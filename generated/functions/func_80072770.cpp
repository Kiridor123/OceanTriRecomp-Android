#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800694D0(CpuContext* ctx);
extern "C" uint64_t func_800694D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80069724(CpuContext* ctx);
extern "C" uint64_t func_80069724_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800697CC(CpuContext* ctx);
extern "C" uint32_t func_800697CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80073118(CpuContext* ctx);
extern "C" uint64_t func_80073118_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800731AC(CpuContext* ctx);
extern "C" uint64_t func_800731AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80073250(CpuContext* ctx);
extern "C" uint64_t func_80073250_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800732BC(CpuContext* ctx);
extern "C" uint64_t func_800732BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800732F4(CpuContext* ctx);
extern "C" uint32_t func_800732F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80073330(CpuContext* ctx);
extern "C" uint64_t func_80073330_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800733C4(CpuContext* ctx);
extern "C" uint64_t func_800733C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80073468(CpuContext* ctx);
extern "C" uint64_t func_80073468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800734D4(CpuContext* ctx);
extern "C" uint64_t func_800734D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007350C(CpuContext* ctx);
extern "C" uint32_t func_8007350C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80073548(CpuContext* ctx);
extern "C" uint64_t func_80073548_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007354C(CpuContext* ctx);
extern "C" uint64_t func_8007354C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80073570(CpuContext* ctx);
extern "C" uint64_t func_80073570_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007360C(CpuContext* ctx);
extern "C" uint64_t func_8007360C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80073678(CpuContext* ctx);
extern "C" uint32_t func_80073678_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80088EE8(CpuContext* ctx);
extern "C" uint64_t func_80088EE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089060(CpuContext* ctx);
extern "C" uint64_t func_80089060_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800891F0(CpuContext* ctx);
extern "C" uint64_t func_800891F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80072770_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800730F8_loc_0 = 0;
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
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_psq_tmp_0 = 0;
    uint32_t r16_psq_tmp_1 = 0;
    uint32_t r16_psq_tmp_10 = 0;
    uint32_t r16_psq_tmp_2 = 0;
    uint32_t r16_psq_tmp_3 = 0;
    uint32_t r16_psq_tmp_4 = 0;
    uint32_t r16_psq_tmp_5 = 0;
    uint32_t r16_psq_tmp_6 = 0;
    uint32_t r16_psq_tmp_7 = 0;
    uint32_t r16_psq_tmp_8 = 0;
    uint32_t r16_psq_tmp_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
    uint32_t r4_psq_tmp_18 = 0;
    uint32_t r4_psq_tmp_19 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_20 = 0;
    uint32_t r4_psq_tmp_21 = 0;
    uint32_t r4_psq_tmp_22 = 0;
    uint32_t r4_psq_tmp_23 = 0;
    uint32_t r4_psq_tmp_24 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];
    [[maybe_unused]] uint32_t mkw_gqr2 = ctx->gqr[2];

    goto loc_80072770;

loc_80072770:
{
    MemoryInline::FlatWriteRam32((r1 + -1504), r1);
    r1 = (r1 + -1504);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1508), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 1488), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1496);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 1488);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
}

loc_800727A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800727C4;
    }
}

loc_800727A8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -6872);
    r4 = 36;
    r5 = 0x80590000u;
    r5 = (r5 + -6856);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800727C4u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_800727C4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005D360
}

loc_800727D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800727F0;
    }
}

loc_800727D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -6872);
    r4 = 37;
    r5 = 0x80590000u;
    r5 = (r5 + -6812);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800727F0u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_800727F0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800980FCu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    MemoryInline::FlatWriteRam32((r1 + 1400), r3);
    r31 = 0;
    r25 = 0;
    r23 = 0x80590000u;
    r24 = 0x80590000u;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31976));
    r21 = 0x80590000u;
    r22 = 0x80590000u;
    r14 = 0x80590000u;
    goto loc_800730E8;
}

loc_80072820:
{
    r3 = r26;
    r4 = r31;
    ctx->lr = 0x8007282Cu;
    if constexpr (KnownRegArgsCpuCall<0x800694D0u>(&func_800694D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800694D0_2E9E = func_800694D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800694D0_2E9E);
        r4 = static_cast<uint32_t>(regargs_result_800694D0_2E9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x800694D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072830:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800730E0;
    }
}

loc_80072834:
{
}

loc_80072838:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80072854;
    }
}

loc_8007283C:
{
    r3 = (r23 + -6872);
    r4 = 49;
    r5 = 0x80590000u;
    r5 = (r5 + -6776);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072854u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072854:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098094u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
    r27_addr_2 = (r27 + r25);
    r0 = MemoryInline::FlatRead32(r27_addr_2);
}

loc_80072874:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80072890;
    }
}

loc_80072878:
{
    r3 = (r23 + -6872);
    r4 = 50;
    r5 = 0x80590000u;
    r5 = (r5 + -6728);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072890u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072890:
{
    r3 = (r1 + 864);
    ctx->lr = 0x80072898u;
    if constexpr (KnownRegArgsCpuCall<0x80073678u>(&func_80073678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80073678_3C7B = func_80073678_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_80073678_3C7B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r3 = r26;
    r4 = (r1 + 864);
    r5 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x800728B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r30 = r3;
}

loc_800728BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800728D8;
    }
}

loc_800728C0:
{
    r3 = (r23 + -6872);
    r4 = 55;
    r5 = 0x80590000u;
    r5 = (r5 + -6648);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800728D8u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_800728D8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 1);
}

loc_800728E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800730E0;
    }
}

loc_800728E8:
{
    r0 = (r3 & 2);
}

loc_800728F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072BD0;
    }
}

loc_800728F4:
{
    r3 = (r1 + 64);
    r4 = (r30 + 8);
    ctx->lr = 0x80072900u;
    if constexpr (KnownRegArgsCpuCall<0x800697CCu>(&func_800697CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800697CC_4884 = func_800697CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800697CC_4884;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800697CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 64);
    // inline leaf 0x800697B8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800697B8
}

loc_8007290C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072928;
    }
}

loc_80072910:
{
    r3 = (r23 + -6872);
    r4 = 66;
    r5 = 0x80590000u;
    r5 = (r5 + -6608);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072928u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072928:
{
    r3 = (r1 + 64);
    ctx->lr = 0x80072930u;
    if constexpr (KnownRegArgsCpuCall<0x80069724u>(&func_80069724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80069724_4F93 = func_80069724_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80069724_4F93);
        r4 = static_cast<uint32_t>(regargs_result_80069724_4F93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80069724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072934:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r3))) {
        goto loc_80072950;
    }
}

loc_80072938:
{
    r3 = (r23 + -6872);
    r4 = 67;
    r5 = 0x80590000u;
    r5 = (r5 + -6564);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072950u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072950:
{
    r17 = 0;
    r3 = (r1 + 60);
    r27_addr_3 = (r27 + r25);
    r4 = MemoryInline::FlatRead32(r27_addr_3);
    ctx->lr = 0x80072960u;
    if constexpr (KnownRegArgsCpuCall<0x8007360Cu>(&func_8007360C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007360C_578A = func_8007360C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007360C_578A);
        r4 = static_cast<uint32_t>(regargs_result_8007360C_578A >> 32);
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
        InvokeDirectCpu<0x8007360Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r3 = (r1 + 60);
    ctx->lr = 0x80072968u;
    if constexpr (KnownRegArgsCpuCall<0x80073570u>(&func_80073570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80073570_5B8F = func_80073570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073570_5B8F);
        r4 = static_cast<uint32_t>(regargs_result_80073570_5B8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r16 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800729DC;
    }
}

loc_80072978:
{
    r3 = (r1 + 64);
    r4 = (r1 + 56);
    r5 = (r1 + 14);
    ctx->lr = 0x80072988u;
    if constexpr (KnownRegArgsCpuCall<0x80088EE8u>(&func_80088EE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80088EE8_614A = func_80088EE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088EE8_614A);
        r4 = static_cast<uint32_t>(regargs_result_80088EE8_614A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80088EE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r0 = MemoryInline::FlatRead32((r1 + 56));
}

loc_80072990:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800729A8;
    }
}

loc_80072994:
{
    r3 = (r23 + -6872);
    r4 = 89;
    r5 = (r21 + -6512);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800729A8u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_800729A8:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
}

loc_800729B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_800729C8;
    }
}

loc_800729B4:
{
    r3 = (r23 + -6872);
    r4 = 91;
    r5 = (r22 + -6468);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800729C8u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_800729C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 600), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f0.d);
    r17 = 1;
}

loc_800729DC:
{
    r15 = 0;
    r18 = r30;
    r19 = (r30 + 24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r20 = (r1 + 600);
    r20 = (r20 + r0);
    goto loc_80072A5C;
}

loc_800729F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r18 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072A50;
    }
}

loc_80072A04:
{
    r3 = (r1 + 52);
    r4 = r19;
    ctx->lr = 0x80072A10u;
    if constexpr (KnownRegArgsCpuCall<0x800697CCu>(&func_800697CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800697CC_6F08 = func_800697CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800697CC_6F08;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800697CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    // inline leaf 0x800697B8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x800697B8
}

loc_80072A1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072A34;
    }
}

loc_80072A20:
{
    r3 = (r23 + -6872);
    r4 = 103;
    r5 = (r24 + -6420);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072A34u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072A34:
{
    r3 = (r1 + 52);
    ctx->lr = 0x80072A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80073570u>(&func_80073570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80073570_7602 = func_80073570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073570_7602);
        r4 = static_cast<uint32_t>(regargs_result_80073570_7602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    MemoryInline::FlatWrite32(r20, r3);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 36));
    MemoryInline::FlatWriteFloat32((r20 + 4), f0.d);
    r20 = (r20 + 8);
    r17 = (r17 + 1);
}

loc_80072A50:
{
    r18 = (r18 + 16);
    r19 = (r19 + 16);
    r15 = (r15 + 1);
}

loc_80072A5C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80072A64:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(r0))) {
        goto loc_800729F8;
    }
}

loc_80072A68:
{
}

loc_80072A6C:
{
    if ((static_cast<int32_t>(r17) > static_cast<int32_t>(0))) {
        goto loc_80072A84;
    }
}

loc_80072A70:
{
    r3 = (r23 + -6872);
    r4 = 111;
    r5 = (r14 + -6384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072A84u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072A84:
{
    r3 = (r1 + 64);
    ctx->lr = 0x80072A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007354Cu>(&func_8007354C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007354C_7FB0 = func_8007354C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007354C_7FB0);
        r4 = static_cast<uint32_t>(regargs_result_8007354C_7FB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007354Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r15 = (r3 & 65535);
    r0 = (r15 * 12);
    r5 = (r16 + r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r6 = (r1 + 600);
    r6 = (r6 + r0);
    goto loc_80072BB8;
}

loc_80072AA8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 604));
    r3 = MemoryInline::FlatRead32((r1 + 600));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    r0 = (r3 + 12);
    MemoryInline::FlatWriteRam32((r1 + 600), r0);
    r7 = (r1 + 608);
    r3 = (r6 + 7);
    r3 = (r3 - r7);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_7 & 536870911);
}

loc_80072ADC:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_80072BAC;
    }
}

loc_80072AE0:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
}

loc_80072AE8:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072B80;
    }
}

loc_80072AF0:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r4 = MemoryInline::FlatRead32(r7);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32(r7, r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 12));
    r4 = MemoryInline::FlatRead32((r7 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 20));
    r4 = MemoryInline::FlatRead32((r7 + 16));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 28));
    r4 = MemoryInline::FlatRead32((r7 + 24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 24), r0);
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80072AF0;
    }
}

loc_80072B78:
{
    r3 = (r3 & 3);
}

loc_80072B7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80072BAC;
    }
}

loc_80072B80:
{
    ctr = r3;
}

loc_80072B84:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r4 = MemoryInline::FlatRead32(r7);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32(r7, r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80072B84;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_80072BAC:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r16, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r16_psq_tmp_3 = (r16 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_3, f1.d);
    r16 = (r16 + 12);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_80072BB8:
{
}

loc_80072BBC:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r5))) {
        goto loc_80072AA8;
    }
}

loc_80072BC0:
{
    r3 = (r1 + 60);
    ctx->lr = 0x80072BC8u;
    if constexpr (KnownRegArgsCpuCall<0x80073570u>(&func_80073570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80073570_9B4C = func_80073570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073570_9B4C);
        r4 = static_cast<uint32_t>(regargs_result_80073570_9B4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r4 = (r15 * 12);
    if constexpr (KnownRegArgsCpuCall<0x80073548u>(&func_80073548)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073548_9FBB = func_80073548_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80073548_9FBB);
        r4 = static_cast<uint32_t>(regargs_result_80073548_9FBB >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073548u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80072BD0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 4);
}

loc_80072BDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072EA8;
    }
}

loc_80072BE0:
{
}

loc_80072BE4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80072EA8;
    }
}

loc_80072BE8:
{
    r3 = (r1 + 48);
    r4 = (r30 + 12);
    ctx->lr = 0x80072BF4u;
    if constexpr (KnownRegArgsCpuCall<0x8007350Cu>(&func_8007350C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007350C_A48A = func_8007350C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007350C_A48A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007350Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 48);
    // inline leaf 0x800734F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x800734F8
}

loc_80072C00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072C1C;
    }
}

loc_80072C04:
{
    r3 = (r23 + -6872);
    r4 = 196;
    r5 = 0x80590000u;
    r5 = (r5 + -6344);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072C1Cu;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072C1C:
{
    r15 = 0;
    r3 = (r1 + 48);
    ctx->lr = 0x80072C28u;
    if constexpr (KnownRegArgsCpuCall<0x800734D4u>(&func_800734D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800734D4_ABA8 = func_800734D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800734D4_ABA8);
        r4 = static_cast<uint32_t>(regargs_result_800734D4_ABA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800734D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r1 + 44);
    r28_addr_2 = (r28 + r0);
    r4 = MemoryInline::FlatRead32(r28_addr_2);
    ctx->lr = 0x80072C38u;
    if constexpr (KnownRegArgsCpuCall<0x80073468u>(&func_80073468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80073468_B0D8 = func_80073468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073468_B0D8);
        r4 = static_cast<uint32_t>(regargs_result_80073468_B0D8 >> 32);
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
        InvokeDirectCpu<0x80073468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r3 = (r1 + 44);
    ctx->lr = 0x80072C40u;
    if constexpr (KnownRegArgsCpuCall<0x800733C4u>(&func_800733C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800733C4_B4DD = func_800733C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800733C4_B4DD);
        r4 = static_cast<uint32_t>(regargs_result_800733C4_B4DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800733C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r16 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072CB4;
    }
}

loc_80072C50:
{
    r3 = (r1 + 48);
    r4 = (r1 + 40);
    r5 = (r1 + 13);
    ctx->lr = 0x80072C60u;
    if constexpr (KnownRegArgsCpuCall<0x80089060u>(&func_80089060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80089060_BA98 = func_80089060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80089060_BA98);
        r4 = static_cast<uint32_t>(regargs_result_80089060_BA98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80089060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r0 = MemoryInline::FlatRead32((r1 + 40));
}

loc_80072C68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80072C80;
    }
}

loc_80072C6C:
{
    r3 = (r23 + -6872);
    r4 = 218;
    r5 = (r21 + -6512);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072C80u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072C80:
{
    r0 = MemoryInline::FlatRead8((r1 + 13));
}

loc_80072C88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80072CA0;
    }
}

loc_80072C8C:
{
    r3 = (r23 + -6872);
    r4 = 220;
    r5 = (r22 + -6468);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072CA0u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072CA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 336), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 340), f0.d);
    r15 = 1;
}

loc_80072CB4:
{
    r17 = 0;
    r18 = r30;
    r19 = (r30 + 28);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r20 = (r1 + 336);
    r20 = (r20 + r0);
    goto loc_80072D34;
}

loc_80072CD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r18 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072D28;
    }
}

loc_80072CDC:
{
    r3 = (r1 + 36);
    r4 = r19;
    ctx->lr = 0x80072CE8u;
    if constexpr (KnownRegArgsCpuCall<0x8007350Cu>(&func_8007350C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007350C_C858 = func_8007350C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007350C_C858;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007350Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 36);
    // inline leaf 0x800734F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x800734F8
}

loc_80072CF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072D0C;
    }
}

loc_80072CF8:
{
    r3 = (r23 + -6872);
    r4 = 232;
    r5 = (r24 + -6420);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072D0Cu;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072D0C:
{
    r3 = (r1 + 36);
    ctx->lr = 0x80072D14u;
    if constexpr (KnownRegArgsCpuCall<0x800733C4u>(&func_800733C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800733C4_CF54 = func_800733C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800733C4_CF54);
        r4 = static_cast<uint32_t>(regargs_result_800733C4_CF54 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800733C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    MemoryInline::FlatWrite32(r20, r3);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 36));
    MemoryInline::FlatWriteFloat32((r20 + 4), f0.d);
    r20 = (r20 + 8);
    r15 = (r15 + 1);
}

loc_80072D28:
{
    r18 = (r18 + 16);
    r19 = (r19 + 16);
    r17 = (r17 + 1);
}

loc_80072D34:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80072D3C:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r0))) {
        goto loc_80072CD0;
    }
}

loc_80072D40:
{
}

loc_80072D44:
{
    if ((static_cast<int32_t>(r15) > static_cast<int32_t>(0))) {
        goto loc_80072D5C;
    }
}

loc_80072D48:
{
    r3 = (r23 + -6872);
    r4 = 240;
    r5 = (r14 + -6384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072D5Cu;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072D5C:
{
    r3 = (r1 + 48);
    ctx->lr = 0x80072D64u;
    if constexpr (KnownRegArgsCpuCall<0x80073330u>(&func_80073330)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80073330_D902 = func_80073330_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073330_D902);
        r4 = static_cast<uint32_t>(regargs_result_80073330_D902 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073330u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r17 = (r3 & 65535);
    r0 = (r17 * 12);
    r5 = (r16 + r0);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r6 = (r1 + 336);
    r6 = (r6 + r0);
    goto loc_80072E90;
}

loc_80072D80:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 340));
    r3 = MemoryInline::FlatRead32((r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    r0 = (r3 + 12);
    MemoryInline::FlatWriteRam32((r1 + 336), r0);
    r7 = (r1 + 344);
    r3 = (r6 + 7);
    r3 = (r3 - r7);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_14 & 536870911);
}

loc_80072DB4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_80072E84;
    }
}

loc_80072DB8:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_12 & 1073741823);
}

loc_80072DC0:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072E58;
    }
}

loc_80072DC8:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r4 = MemoryInline::FlatRead32(r7);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_15 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_15));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32(r7, r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 12));
    r4 = MemoryInline::FlatRead32((r7 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_16 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_16));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 20));
    r4 = MemoryInline::FlatRead32((r7 + 16));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_17 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_17));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 28));
    r4 = MemoryInline::FlatRead32((r7 + 24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_18 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_18));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r7 + 24), r0);
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80072DC8;
    }
}

loc_80072E50:
{
    r3 = (r3 & 3);
}

loc_80072E54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80072E84;
    }
}

loc_80072E58:
{
    ctr = r3;
}

loc_80072E5C:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r4 = MemoryInline::FlatRead32(r7);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_21 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_21));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32(r7, r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80072E5C;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_80072E84:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r16, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r16_psq_tmp_6 = (r16 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_6, f1.d);
    r16 = (r16 + 12);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_80072E90:
{
}

loc_80072E94:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r5))) {
        goto loc_80072D80;
    }
}

loc_80072E98:
{
    r3 = (r1 + 44);
    ctx->lr = 0x80072EA0u;
    if constexpr (KnownRegArgsCpuCall<0x800733C4u>(&func_800733C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800733C4_F4AC = func_800733C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800733C4_F4AC);
        r4 = static_cast<uint32_t>(regargs_result_800733C4_F4AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800733C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r4 = (r17 * 12);
    if constexpr (KnownRegArgsCpuCall<0x80073548u>(&func_80073548)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073548_F91B = func_80073548_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80073548_F91B);
        r4 = static_cast<uint32_t>(regargs_result_80073548_F91B >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073548u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80072EA8:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 8);
}

loc_80072EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800730E0;
    }
}

loc_80072EB8:
{
}

loc_80072EBC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800730E0;
    }
}

loc_80072EC0:
{
    r3 = (r1 + 32);
    r4 = (r30 + 16);
    ctx->lr = 0x80072ECCu;
    if constexpr (KnownRegArgsCpuCall<0x800732F4u>(&func_800732F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800732F4_FDEA = func_800732F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800732F4_FDEA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800732F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    // inline leaf 0x800732E0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x800732E0
}

loc_80072ED8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072EF4;
    }
}

loc_80072EDC:
{
    r3 = (r23 + -6872);
    r4 = 326;
    r5 = 0x80590000u;
    r5 = (r5 + -6300);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072EF4u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072EF4:
{
    r15 = 0;
    r3 = (r1 + 32);
    ctx->lr = 0x80072F00u;
    if constexpr (KnownRegArgsCpuCall<0x800732BCu>(&func_800732BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800732BC_1050A = func_800732BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800732BC_1050A);
        r4 = static_cast<uint32_t>(regargs_result_800732BC_1050A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800732BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r1 + 28);
    r29_addr_2 = (r29 + r0);
    r4 = MemoryInline::FlatRead32(r29_addr_2);
    ctx->lr = 0x80072F10u;
    if constexpr (KnownRegArgsCpuCall<0x80073250u>(&func_80073250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80073250_10A3F = func_80073250_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073250_10A3F);
        r4 = static_cast<uint32_t>(regargs_result_80073250_10A3F >> 32);
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
        InvokeDirectCpu<0x80073250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r3 = (r1 + 28);
    ctx->lr = 0x80072F18u;
    if constexpr (KnownRegArgsCpuCall<0x800731ACu>(&func_800731AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800731AC_10E47 = func_800731AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800731AC_10E47);
        r4 = static_cast<uint32_t>(regargs_result_800731AC_10E47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800731ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r16 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072F8C;
    }
}

loc_80072F28:
{
    r3 = (r1 + 32);
    r4 = (r1 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x80072F38u;
    if constexpr (KnownRegArgsCpuCall<0x800891F0u>(&func_800891F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800891F0_11405 = func_800891F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800891F0_11405);
        r4 = static_cast<uint32_t>(regargs_result_800891F0_11405 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800891F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80072F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80072F58;
    }
}

loc_80072F44:
{
    r3 = (r23 + -6872);
    r4 = 348;
    r5 = (r21 + -6512);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072F58u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072F58:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_80072F60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80072F78;
    }
}

loc_80072F64:
{
    r3 = (r23 + -6872);
    r4 = 350;
    r5 = (r22 + -6468);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072F78u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072F78:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r15 = 1;
}

loc_80072F8C:
{
    r17 = 0;
    r20 = r30;
    r19 = (r30 + 32);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r18 = (r1 + 72);
    r18 = (r18 + r0);
    goto loc_8007300C;
}

loc_80072FA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r20 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80072FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073000;
    }
}

loc_80072FB4:
{
    r3 = (r1 + 20);
    r4 = r19;
    ctx->lr = 0x80072FC0u;
    if constexpr (KnownRegArgsCpuCall<0x800732F4u>(&func_800732F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800732F4_121C6 = func_800732F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800732F4_121C6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800732F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    // inline leaf 0x800732E0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_18 & 1);
    // end of inlined leaf 0x800732E0
}

loc_80072FCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072FE4;
    }
}

loc_80072FD0:
{
    r3 = (r23 + -6872);
    r4 = 362;
    r5 = (r24 + -6420);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072FE4u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80072FE4:
{
    r3 = (r1 + 20);
    ctx->lr = 0x80072FECu;
    if constexpr (KnownRegArgsCpuCall<0x800731ACu>(&func_800731AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800731AC_128C4 = func_800731AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800731AC_128C4);
        r4 = static_cast<uint32_t>(regargs_result_800731AC_128C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800731ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    MemoryInline::FlatWrite32(r18, r3);
    f0.d = MemoryInline::FlatReadFloat32((r20 + 36));
    MemoryInline::FlatWriteFloat32((r18 + 4), f0.d);
    r18 = (r18 + 8);
    r15 = (r15 + 1);
}

loc_80073000:
{
    r20 = (r20 + 16);
    r19 = (r19 + 16);
    r17 = (r17 + 1);
}

loc_8007300C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80073014:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r0))) {
        goto loc_80072FA8;
    }
}

loc_80073018:
{
}

loc_8007301C:
{
    if ((static_cast<int32_t>(r15) > static_cast<int32_t>(0))) {
        goto loc_80073034;
    }
}

loc_80073020:
{
    r3 = (r23 + -6872);
    r4 = 370;
    r5 = (r14 + -6384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80073034u;
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
    mkw_gqr2 = ctx->gqr[2];
}

loc_80073034:
{
    r3 = (r1 + 32);
    ctx->lr = 0x8007303Cu;
    if constexpr (KnownRegArgsCpuCall<0x80073118u>(&func_80073118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80073118_13275 = func_80073118_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073118_13275);
        r4 = static_cast<uint32_t>(regargs_result_80073118_13275 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80073118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r17 = (r3 & 65535);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r4 = (r16 + r0);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & -8);
    r5 = (r1 + 72);
    r5 = (r5 + r0);
    goto loc_800730C8;
}

loc_80073058:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r3 = MemoryInline::FlatRead32((r1 + 72));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r3));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 2);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r3_psq_tmp_9));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    r0 = (r3 + 4);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r6 = (r1 + 80);
    r0 = (r5 + 7);
    r0 = (r0 - r6);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_20 & 536870911);
    ctr = r0;
}

loc_80073090:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_800730BC;
    }
}

loc_80073094:
{
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r3 = MemoryInline::FlatRead32(r6);
    // psq_load w=0 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r3));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 2);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r3_psq_tmp_11));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80073094;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_800730BC:
{
    // psq_store w=0 quant=2 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 2u>(ctx, mkw_gqr2, r16, f0.d);
    // psq_store w=0 quant=2 (using PPC_PsqSt)
    r16_psq_tmp_9 = (r16 + 2);
    PPC_PsqStGqrInline<0u, 2u>(ctx, mkw_gqr2, r16_psq_tmp_9, f1.d);
    r16 = (r16 + 4);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_800730C8:
{
}

loc_800730CC:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r4))) {
        goto loc_80073058;
    }
}

loc_800730D0:
{
    r3 = (r1 + 28);
    ctx->lr = 0x800730D8u;
    if constexpr (KnownRegArgsCpuCall<0x800731ACu>(&func_800731AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800731AC_141CA = func_800731AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800731AC_141CA);
        r4 = static_cast<uint32_t>(regargs_result_800731AC_141CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800731ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    if constexpr (KnownRegArgsCpuCall<0x80073548u>(&func_80073548)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073548_14698 = func_80073548_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80073548_14698);
        r4 = static_cast<uint32_t>(regargs_result_80073548_14698 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073548u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_800730E0:
{
    r31 = (r31 + 1);
    r25 = (r25 + 4);
}

loc_800730E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 1400));
}

loc_800730F0:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_80072820;
    }
}

loc_800730F4:
{
    r0 = 1496;
    addr_psqx_800730F8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800730F8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 1488));
    r11 = (r1 + 1488);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 1508));
    ctx->lr = r0;
    r1 = (r1 + 1504);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80072770(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80072770_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80072770 func_80072770 preserves=true fpr_mask=0x00000000
