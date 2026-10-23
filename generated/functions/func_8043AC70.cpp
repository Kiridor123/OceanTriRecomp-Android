#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004750C(CpuContext* ctx);
extern "C" uint64_t func_8004750C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CFB90(CpuContext* ctx);
extern "C" uint64_t func_800CFB90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800EEF60(CpuContext* ctx);
extern "C" uint64_t func_800EEF60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F05B8(CpuContext* ctx);
extern "C" uint64_t func_800F05B8_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802678D8(CpuContext* ctx);
extern "C" uint64_t func_802678D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043AD94(CpuContext* ctx);
extern "C" void func_8043AD94_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8043AC70_ra70_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8043AC70;

loc_8043AC70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0;
    // inline leaf 0x800CF29C (7 guest instruction(s))
}

loc_inl0_0x800CF29C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CF2A4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CF2A8:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 36), static_cast<uint8_t>(r3));
    goto loc_inl0_cont_800CF29C;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CF29C:
{
    // end of inlined leaf 0x800CF29C
    r3 = 628;
    ctx->lr = 0x8043AC90u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800CF80C_C94 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_C94);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_C94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r13 + -16688), r3);
    r4 = 0;
    r5 = 628;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0x806D0000u;
    r3 = (r31 + 32616);
    r4 = 0x80600000u;
    r4 = (r4 + 19840);
    if constexpr (KnownRegArgsCpuCall<0x8043AD94u>(&func_8043AD94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8043AD94_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8043AD94u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r31 + 32616);
    r3 = (r3 + 256);
    r4 = 0x80600000u;
    r4 = (r4 + 20096);
    if constexpr (KnownRegArgsCpuCall<0x8043AD94u>(&func_8043AD94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8043AD94_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8043AD94u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 6;
    ctx->lr = 0x8043ACD0u;
    if constexpr (KnownRegArgsCpuCall<0x800CFB90u>(&func_800CFB90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800CFB90_1A73 = func_800CFB90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CFB90_1A73);
        r4 = static_cast<uint32_t>(regargs_result_800CFB90_1A73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CFB90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 2;
    r4 = 2;
    // inline leaf 0x800CFB70 (8 guest instruction(s))
    r5 = (r4 & 65535);
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_0, static_cast<uint16_t>(r5));
    // end of inlined leaf 0x800CFB70
    r3 = 2;
    // inline leaf 0x80267408 (5 guest instruction(s))
}

loc_inl2_0x80267408:
{
    r4 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_inl2_0x80267410:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80267414:
{
    MemoryInline::FlatWrite32((r4 + 4), r3);
    goto loc_inl2_cont_80267408;
}

loc_inl2_return:
{
}

loc_inl2_cont_80267408:
{
    // end of inlined leaf 0x80267408
    r3 = 3;
    // inline leaf 0x802699FC (5 guest instruction(s))
}

loc_inl3_0x802699FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_inl3_0x80269A04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80269A08:
{
    MemoryInline::FlatWrite8((r4 + 1147), static_cast<uint8_t>(r3));
    goto loc_inl3_cont_802699FC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802699FC:
{
    // end of inlined leaf 0x802699FC
    ctx->lr = 0x8043ACF0u;
    if constexpr (KnownRegArgsCpuCall<0x800EEF60u>(&func_800EEF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800EEF60_272F = func_800EEF60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800EEF60_272F);
        r4 = static_cast<uint32_t>(regargs_result_800EEF60_272F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800EEF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x8043ACF4u;
    if constexpr (KnownRegArgsCpuCall<0x8004750Cu>(&func_8004750C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004750C_2ABF = func_8004750C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004750C_2ABF);
        r4 = static_cast<uint32_t>(regargs_result_8004750C_2ABF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004750Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    ctx->lr = 0x8043ACF8u;
    if constexpr (KnownRegArgsCpuCall<0x802678D8u>(&func_802678D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802678D8_2E85 = func_802678D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802678D8_2E85);
        r4 = static_cast<uint32_t>(regargs_result_802678D8_2E85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802678D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    // inline leaf 0x80268238 (6 guest instruction(s))
}

loc_inl4_0x80268238:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_inl4_0x80268240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80268244:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl4_cont_80268238;
}

loc_inl4_return:
{
}

loc_inl4_cont_80268238:
{
    // end of inlined leaf 0x80268238
    r6 = MemoryInline::FlatRead32((r13 + -16688));
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 24), 0, 540u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r6 + 24), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 528u, (r6 + 552), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 532u, (r6 + 556), static_cast<uint16_t>(r5));
    r4 = 191;
    MemoryInline::WriteResolved16(guest_range_0, 530u, (r6 + 554), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 534u, (r6 + 558), static_cast<uint16_t>(r4));
    r3 = 924450816;
    r0 = (r3 + 255);
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r6 + 536), r0);
    r0 = 20;
    MemoryInline::WriteResolved16(guest_range_0, 520u, (r6 + 544), static_cast<uint16_t>(r0));
    r0 = 160;
    MemoryInline::WriteResolved16(guest_range_0, 522u, (r6 + 546), static_cast<uint16_t>(r0));
    r0 = 32;
    MemoryInline::WriteResolved16(guest_range_0, 536u, (r6 + 560), static_cast<uint16_t>(r0));
    r0 = 240;
    MemoryInline::WriteResolved16(guest_range_0, 538u, (r6 + 562), static_cast<uint16_t>(r0));
    r0 = 56;
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r6 + 35), static_cast<uint8_t>(r0));
    r0 = 26;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r6 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r6 + 37), static_cast<uint8_t>(r5));
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 516u, (r6 + 540), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 524u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 524u, (r6 + 548), r4);
        MemoryInline::WriteResolved16(guest_range_0, 526u, (r6 + 550), r5);
    }
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 26), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 28), static_cast<uint8_t>(r0));
    ctx->lr = 0x8043AD80u;
    if constexpr (KnownRegArgsCpuCall<0x800F05B8u>(&func_800F05B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800F05B8_4004 = func_800F05B8_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F05B8_4004);
        r4 = static_cast<uint32_t>(regargs_result_800F05B8_4004 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F05B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043AC70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043AC70_ra70_1fe_18_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF6 gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043AC70 func_8043AC70 preserves=true fpr_mask=0x00000000
