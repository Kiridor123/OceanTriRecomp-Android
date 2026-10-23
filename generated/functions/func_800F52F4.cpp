#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800E4D64(CpuContext* ctx);
extern "C" uint64_t func_800E4D64_ra98_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F30B8(CpuContext* ctx);
extern "C" uint64_t func_800F30B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F327C(CpuContext* ctx);
extern "C" uint64_t func_800F327C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800F4AF4(CpuContext* ctx);
extern "C" uint64_t func_800F4AF4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F5AB8(CpuContext* ctx);
extern "C" uint64_t func_800F5AB8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F5B08(CpuContext* ctx);
extern "C" uint32_t func_800F5B08_raa8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F5B74(CpuContext* ctx);
extern "C" uint64_t func_800F5B74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F52F4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800F5948_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800F52F4;

loc_800F52F4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F5320:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800F5944;
    }
}

loc_800F5324:
{
    ctx->lr = 0x800F5328u;
    if constexpr (KnownRegArgsCpuCall<0x800F327Cu>(&func_800F327C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800F327C_1148 = func_800F327C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800F327C_1148);
        r4 = static_cast<uint32_t>(regargs_result_800F327C_1148 >> 32);
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
        InvokeDirectCpu<0x800F327Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r31 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = MemoryInline::FlatRead8((r30 + 468));
    MemoryInline::FlatWrite8((r30 + 469), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 468), static_cast<uint8_t>(r3));
    r0 = (r31 & 255);
}

loc_800F5348:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_800F57E0;
    }
}

loc_800F534C:
{
    // inline leaf 0x80451314 (12 guest instruction(s))
}

loc_inl2_0x80451314:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 23));
}

loc_inl2_0x80451320:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(31))) {
        goto loc_inl2_0x80451334;
    }
}

loc_inl2_0x80451324:
{
    r0 = (r3 + 224);
    r0 = (r0 & 255);
}

loc_inl2_0x80451330:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8045133C;
    }
}

loc_inl2_0x80451334:
{
    r3 = 1;
    goto loc_inl2_cont_80451314;
}

loc_inl2_0x8045133C:
{
    r3 = 0;
}

loc_inl2_cont_80451314:
{
    // end of inlined leaf 0x80451314
}

loc_800F5354:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F5388;
    }
}

loc_800F5358:
{
    r29 = 0;
}

loc_800F535C:
{
    r3 = (r30 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_800F5368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5378;
    }
}

loc_800F536C:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x800F5378u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_1C96 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_1C96);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_1C96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F5378:
{
    r29 = (r29 + 1);
}

loc_800F5380:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_800F535C;
    }
}

loc_800F5384:
{
    goto loc_800F5944;
}

loc_800F5388:
{
    r0 = MemoryInline::FlatRead8((r30 + 569));
}

loc_800F5390:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F58AC;
    }
}

loc_800F5394:
{
    r3 = MemoryInline::FlatRead8((r30 + 25));
}

loc_800F539C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F53A8;
    }
}

loc_800F53A0:
{
}

loc_800F53A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_800F53BC;
    }
}

loc_800F53A8:
{
    r3 = (r31 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 468));
    r5 = MemoryInline::FlatRead8((r30 + 469));
    ctx->lr = 0x800F53B8u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_2891 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_2891);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_2891 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F5468;
}

loc_800F53BC:
{
    r5 = MemoryInline::FlatRead8((r30 + 469));
    r4 = MemoryInline::FlatRead8((r30 + 468));
}

loc_800F53C8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r5))) {
        goto loc_800F53D8;
    }
}

loc_800F53CC:
{
    r3 = (r31 & 255);
    ctx->lr = 0x800F53D4u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_3248 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_3248);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_3248 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F5428;
}

loc_800F53D8:
{
    r3 = MemoryInline::FlatRead8((r30 + 26));
}

loc_800F53E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F53EC;
    }
}

loc_800F53E4:
{
}

loc_800F53E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_800F5428;
    }
}

loc_800F53EC:
{
}

loc_800F53F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F5428;
    }
}

loc_800F53F4:
{
    r0 = (r4 + 251);
    r0 = (r0 & 255);
}

loc_800F5400:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_800F5428;
    }
}

loc_800F5404:
{
    r0 = MemoryInline::FlatRead16((r30 + 576));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F540C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F5428;
    }
}

loc_800F5410:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 460), static_cast<uint8_t>(r0));
    r3 = (r31 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 468));
    r5 = MemoryInline::FlatRead8((r30 + 469));
    ctx->lr = 0x800F5428u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_3F6E = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_3F6E);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_3F6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F5428:
{
    r3 = MemoryInline::FlatRead16((r30 + 574));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800F5430:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F5440;
    }
}

loc_800F5434:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 569), static_cast<uint8_t>(r0));
    goto loc_800F5448;
}

loc_800F5440:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 574), static_cast<uint16_t>(r0));
}

loc_800F5448:
{
    r0 = MemoryInline::FlatRead8((r30 + 569));
}

loc_800F5450:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F5944;
    }
}

loc_800F5454:
{
    r3 = MemoryInline::FlatRead16((r30 + 576));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800F545C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800F5468;
    }
}

loc_800F5460:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 576), static_cast<uint16_t>(r0));
}

loc_800F5468:
{
    r3 = MemoryInline::FlatRead8((r30 + 468));
    r0 = (r3 + 251);
    r0 = (r0 & 255);
}

loc_800F5478:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800F55EC;
    }
}

loc_800F547C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_800F5480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F55F8;
    }
}

loc_800F5484:
{
    r0 = MemoryInline::FlatRead8((r30 + 26));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F548C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_800F5498;
    }
}

loc_800F5490:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_800F5494:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F54A4;
    }
}

loc_800F5498:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 444), static_cast<uint8_t>(r0));
    goto loc_800F5670;
}

loc_800F54A4:
{
}

loc_800F54A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F54C8;
    }
}

loc_800F54AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 469));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800F54B4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_800F54C8;
    }
}

loc_800F54B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F54C8;
    }
}

loc_800F54BC:
{
    r3 = 2;
    r4 = 4;
    ctx->lr = 0x800F54C8u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_5248 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_5248);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_5248 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F54C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 26));
}

loc_800F54D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F58AC;
    }
}

loc_800F54D4:
{
    r3 = 0x805A0000u;
    r4 = (r3 + -17600);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 112u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r1 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 88u, (r1 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 92u, (r1 + 100), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 96u, (r1 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r1 + 108), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r1 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r1 + 116), r0);
    }
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29920));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29916));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29912));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_800F5564:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F58AC;
    }
}

loc_800F5568:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r4 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F5580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F58AC;
    }
}

loc_800F5584:
{
    r3 = 0x80590000u;
    r29 = MemoryInline::FlatRead32((r3 + 31160));
    r3 = (r1 + 8);
    r4 = (r4 + 60);
    ctx->lr = 0x800F5598u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_7739 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_7739);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_7739 >> 32);
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
        InvokeDirectCpu<0x80050FE4u>(ctx);
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
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800F559C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F55A4;
    }
}

loc_800F55A0:
{
    f1.d = f31.d;
}

loc_800F55A4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29908));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r0 = fctiwzword0;
}

loc_800F55C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_800F55C8;
    }
}

loc_800F55C4:
{
    r0 = 99;
}

loc_800F55C8:
{
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 100));
    MemoryInline::FlatWrite8((r30 + 457), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 457));
    MemoryInline::FlatWriteRam16((r1 + 86), static_cast<uint16_t>(r0));
    r3 = 2;
    r4 = (r1 + 72);
    ctx->lr = 0x800F55E8u;
    if constexpr (KnownRegArgsCpuCall<0x800E4D64u>(&func_800E4D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800E4D64_80B5 = func_800E4D64_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D64_80B5);
        r4 = static_cast<uint32_t>(regargs_result_800E4D64_80B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E4D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F58AC;
}

loc_800F55EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 448), r0);
    goto loc_800F58AC;
}

loc_800F55F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 26));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800F5600:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F5670;
    }
}

loc_800F5604:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 351));
}

loc_800F5614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F5654;
    }
}

loc_800F5618:
{
    r0 = MemoryInline::FlatRead8((r30 + 469));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800F5620:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F5670;
    }
}

loc_800F5624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F5670;
    }
}

loc_800F5628:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2226));
}

loc_800F5638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5644;
    }
}

loc_800F563C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
}

loc_800F5644:
{
    r3 = 2;
    r4 = 1;
    ctx->lr = 0x800F5650u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_8E91 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_8E91);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_8E91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F5670;
}

loc_800F5654:
{
    r0 = MemoryInline::FlatRead8((r30 + 469));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800F565C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F5670;
    }
}

loc_800F5660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F5670;
    }
}

loc_800F5664:
{
    r3 = 2;
    r4 = 5;
    ctx->lr = 0x800F5670u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_98B1 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_98B1);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_98B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F5670:
{
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 26));
}

loc_800F567C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5688;
    }
}

loc_800F5680:
{
}

loc_800F5684:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800F57B8;
    }
}

loc_800F5688:
{
    r3 = (r1 + 24);
    r4 = 0x805A0000u;
    r4 = (r4 + -17600);
    // inline leaf 0x800EBEC4 (51 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_2, 32u, (r3 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r4 + 34));
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r4 + 36));
    MemoryInline::WriteResolved16(guest_range_2, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r4 + 38));
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r3 + 38), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800EBEC4
    r3 = MemoryInline::FlatRead32((r30 + 448));
}

loc_800F56A0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800F56B0;
    }
}

loc_800F56A4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 448), r0);
    goto loc_800F58AC;
}

loc_800F56B0:
{
    r3 = 0x92490000u;
    r29 = (r3 + 9363);
}

loc_800F56B8:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl7_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl7_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CEF40;
    }
}

loc_inl7_0x800CEF3C:
{
    r0 = 1;
}

loc_inl7_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl7_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 7);
    r4 = (r4 - r0);
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r4 & 255);
}

loc_800F56EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800F56FC;
    }
}

loc_800F56F0:
{
    r28 = (r28 + 1);
}

loc_800F56F8:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(10))) {
        goto loc_800F56B8;
    }
}

loc_800F56FC:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 351));
}

loc_800F5714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5758;
    }
}

loc_800F5718:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2226));
}

loc_800F5728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F5738;
    }
}

loc_800F572C:
{
}

loc_800F5730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F5744;
    }
}

loc_800F5734:
{
    goto loc_800F58AC;
}

loc_800F5738:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
    goto loc_800F5944;
}

loc_800F5744:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    r0 = 87;
    MemoryInline::FlatWrite8((r30 + 460), static_cast<uint8_t>(r0));
    goto loc_800F5774;
}

loc_800F5758:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
    r0 = (r4 + 80);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 460), static_cast<uint8_t>(r0));
}

loc_800F5774:
{
    r3 = 2;
    r4 = MemoryInline::FlatRead8((r30 + 460));
    ctx->lr = 0x800F5780u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_C50F = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_C50F);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_C50F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = 90;
    MemoryInline::FlatWrite32((r30 + 448), r0);
    r0 = MemoryInline::FlatRead8((r30 + 468));
}

loc_800F5790:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F58AC;
    }
}

loc_800F5794:
{
    r3 = 2;
    r4 = 5;
    ctx->lr = 0x800F57A0u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_CEA8 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_CEA8);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_CEA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r0));
    r3 = 2;
    r4 = (r1 + 24);
    ctx->lr = 0x800F57B4u;
    if constexpr (KnownRegArgsCpuCall<0x800E4D64u>(&func_800E4D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800E4D64_D7B6 = func_800E4D64_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D64_D7B6);
        r4 = static_cast<uint32_t>(regargs_result_800E4D64_D7B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E4D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F58AC;
}

loc_800F57B8:
{
}

loc_800F57BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F58AC;
    }
}

loc_800F57C0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2226));
}

loc_800F57D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F58AC;
    }
}

loc_800F57D4:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
    goto loc_800F58AC;
}

loc_800F57E0:
{
    // inline leaf 0x8021B980 (12 guest instruction(s))
}

loc_inl8_0x8021B980:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13296);
}

loc_inl8_0x8021B98C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x8021B998;
    }
}

loc_inl8_0x8021B990:
{
    r3 = 0;
    goto loc_inl8_cont_8021B980;
}

loc_inl8_0x8021B998:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_inl8_cont_8021B980:
{
    // end of inlined leaf 0x8021B980
}

loc_800F57E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F5800;
    }
}

loc_800F57EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 570));
}

loc_800F57F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F581C;
    }
}

loc_800F57F8:
{
    ctx->lr = 0x800F57FCu;
    if constexpr (KnownRegArgsCpuCall<0x800F5AB8u>(&func_800F5AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5AB8_E665 = func_800F5AB8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5AB8_E665);
        r4 = static_cast<uint32_t>(regargs_result_800F5AB8_E665 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F5944;
}

loc_800F5800:
{
    r0 = MemoryInline::FlatRead8((r30 + 570));
}

loc_800F5808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F581C;
    }
}

loc_800F580C:
{
    ctx->lr = 0x800F5810u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B08u>(&func_800F5B08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B08_EFEF = func_800F5B08_raa8_1fe_8_0(ctx, r3, r5, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800F5B08_EFEF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 570), static_cast<uint8_t>(r0));
    goto loc_800F5944;
}

loc_800F581C:
{
    r3 = MemoryInline::FlatRead16((r30 + 574));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800F5824:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800F5830;
    }
}

loc_800F5828:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 574), static_cast<uint16_t>(r0));
}

loc_800F5830:
{
    r0 = MemoryInline::FlatRead8((r30 + 569));
}

loc_800F5838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5860;
    }
}

loc_800F583C:
{
    r0 = MemoryInline::FlatRead16((r30 + 574));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F5844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F5860;
    }
}

loc_800F5848:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 569), static_cast<uint8_t>(r0));
    r3 = (r31 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 468));
    r5 = MemoryInline::FlatRead8((r30 + 469));
    ctx->lr = 0x800F5860u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_FCB3 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_FCB3);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_FCB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F5860:
{
    r0 = MemoryInline::FlatRead8((r30 + 25));
}

loc_800F5868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5874;
    }
}

loc_800F586C:
{
}

loc_800F5870:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800F5894;
    }
}

loc_800F5874:
{
    r0 = MemoryInline::FlatRead8((r30 + 569));
}

loc_800F587C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F58AC;
    }
}

loc_800F5880:
{
    r3 = (r31 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 468));
    r5 = MemoryInline::FlatRead8((r30 + 469));
    ctx->lr = 0x800F5890u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_107D6 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_107D6);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_107D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F58AC;
}

loc_800F5894:
{
    r5 = MemoryInline::FlatRead8((r30 + 469));
    r4 = MemoryInline::FlatRead8((r30 + 468));
}

loc_800F58A0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r5))) {
        goto loc_800F58AC;
    }
}

loc_800F58A4:
{
    r3 = (r31 & 255);
    ctx->lr = 0x800F58ACu;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_11190 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_11190);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_11190 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F58AC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2226));
}

loc_800F58BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F5944;
    }
}

loc_800F58C0:
{
    r0 = (r31 & 255);
}

loc_800F58C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_800F58D8;
    }
}

loc_800F58CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 470));
}

loc_800F58D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F5944;
    }
}

loc_800F58D8:
{
    r0 = (r31 & 255);
}

loc_800F58E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_800F58F0;
    }
}

loc_800F58E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 470));
}

loc_800F58EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F5944;
    }
}

loc_800F58F0:
{
    r3 = MemoryInline::FlatRead16((r30 + 574));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F58F8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800F5908;
    }
}

loc_800F58FC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 574), static_cast<uint16_t>(r0));
    goto loc_800F5944;
}

loc_800F5908:
{
    r0 = MemoryInline::FlatRead8((r30 + 569));
}

loc_800F5910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F5934;
    }
}

loc_800F5914:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F5944;
    }
}

loc_800F5918:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 569), static_cast<uint8_t>(r0));
    r3 = (r31 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 468));
    r5 = MemoryInline::FlatRead8((r30 + 469));
    ctx->lr = 0x800F5930u;
    if constexpr (KnownRegArgsCpuCall<0x800F5B74u>(&func_800F5B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F5B74_121B2 = func_800F5B74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F5B74_121B2);
        r4 = static_cast<uint32_t>(regargs_result_800F5B74_121B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F5B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800F5944;
}

loc_800F5934:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
    r4 = (r31 & 255);
    r5 = MemoryInline::FlatRead8((r30 + 468));
    ctx->lr = 0x800F5944u;
    if constexpr (KnownRegArgsCpuCall<0x800F4AF4u>(&func_800F4AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800F4AF4_12B64 = func_800F4AF4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F4AF4_12B64);
        r4 = static_cast<uint32_t>(regargs_result_800F4AF4_12B64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F4AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800F5944:
{
    r0 = 152;
    addr_psqx_800F5948_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800F5948_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_800F52F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F52F4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F52F4 func_800F52F4 preserves=true fpr_mask=0x00000000
