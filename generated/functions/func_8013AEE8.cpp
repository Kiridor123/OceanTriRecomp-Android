#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A2B8(CpuContext* ctx);
extern "C" uint64_t func_8012A2B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013AC64(CpuContext* ctx);
extern "C" uint32_t func_8013AC64_ra40_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801407CC(CpuContext* ctx);
extern "C" uint64_t func_801407CC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80140B5C(CpuContext* ctx);
extern "C" uint64_t func_80140B5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013AEE8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8013BE0C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8013AEE8;

loc_8013AEE8:
{
    r22 = (r22 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
}

loc_8013AEF4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1000))) {
        goto loc_8013AF00;
    }
}

loc_8013AEF8:
{
    r3 = r18;
    ctx->lr = 0x8013AF00u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013AB28_EF1 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_EF1);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_EF1 >> 32);
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
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8013AF00:
{
    r4 = MemoryInline::FlatRead32((r18 + 2392));
    r3 = MemoryInline::FlatRead32((r18 + 2388));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8013AF14:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8013AFA8;
    }
}

loc_8013AF18:
{
    r0 = MemoryInline::FlatRead16((r18 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8013AF20:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8013AF4C;
    }
}

loc_8013AF24:
{
    r3 = r18;
    r4 = 8;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl0_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl0_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8013A8FC;
    }
}

loc_inl0_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl0_cont_8013A8E8;
}

loc_inl0_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013AF34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AF4C;
    }
}

loc_8013AF38:
{
    r3 = r18;
    r4 = 8;
    r5 = 0;
    ctx->lr = 0x8013AF48u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8013ABD8_18D7 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_18D7);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_18D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8013AFA8;
}

loc_8013AF4C:
{
    r0 = MemoryInline::FlatRead8((r18 + 2207));
}

loc_8013AF54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8013AF80;
    }
}

loc_8013AF58:
{
    r3 = r18;
    r4 = 9;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl1_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl1_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8013A8FC;
    }
}

loc_inl1_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl1_cont_8013A8E8;
}

loc_inl1_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_inl1_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013AF68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AF80;
    }
}

loc_8013AF6C:
{
    r3 = r18;
    r4 = 9;
    r5 = 0;
    ctx->lr = 0x8013AF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8013ABD8_2120 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_2120);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_2120 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8013AFA8;
}

loc_8013AF80:
{
}

loc_8013AF84:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8013AFA8;
    }
}

loc_8013AF88:
{
    r3 = r18;
    r4 = (r29 & 65535);
    ctx->lr = 0x8013AF94u;
    if constexpr (KnownRegArgsCpuCall<0x8012A2B8u>(&func_8012A2B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012A2B8_258B = func_8012A2B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012A2B8_258B);
        r4 = static_cast<uint32_t>(regargs_result_8012A2B8_258B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012A2B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r18;
    r4 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8013AC64u>(&func_8013AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013AC64_2D2E = func_8013AC64_ra40_0_8_0(ctx, r6);
        r3 = regargs_result_8013AC64_2D2E;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013AC64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r29 = r3;
    r23 = 1;
}

loc_8013AFA8:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    if constexpr (KnownRegArgsCpuCall<0x801407CCu>(&func_801407CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801407CC_30AA = func_801407CC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801407CC_30AA);
        r4 = static_cast<uint32_t>(regargs_result_801407CC_30AA >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801407CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r17 = r3;
    r0 = (r3 & 255);
}

loc_8013AFBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8013AFDC;
    }
}

loc_8013AFC0:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8013AFCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8013AFDC;
    }
}

loc_8013AFD0:
{
    r3 = r18;
    ctx->lr = 0x8013AFD8u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013AB28_3570 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_3570);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_3570 >> 32);
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
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_8013BDE4;
}

loc_8013AFDC:
{
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r4 = (r3 + 1);
    MemoryInline::FlatWrite32((r18 + 2392), r4);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8013AFF0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013BDC0;
    }
}

loc_8013AFF4:
{
    r3 = (r14 + 7568);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    ctr = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_8013BDC0:
{
    r3 = r18;
    r4 = 13;
    r5 = MemoryInline::FlatRead32((r18 + 2392));
    r5 = MemoryInline::FlatRead8(r5);
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80140B5C_3F9B = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_3F9B);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_3F9B >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r18 + 2392));
    r0 = (r17 & 255);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r18 + 2392), r0);
}

loc_8013BDE4:
{
}

loc_8013BDE8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8013AEE8;
    }
}

loc_8013BDEC:
{
}

loc_8013BDF0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8013BE04;
    }
}

loc_8013BDF4:
{
    r3 = r18;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    r3 = 1;
    goto loc_8013BE08;
}

loc_8013BE04:
{
    r3 = 0;
}

loc_8013BE08:
{
    r0 = 152;
    addr_psqx_8013BE0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013BE0C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013AEE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013AEE8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE0C67FFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013AEE8 func_8013AEE8 preserves=false fpr_mask=0x80000000
