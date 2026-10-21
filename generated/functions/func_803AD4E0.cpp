#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803AD744(CpuContext* ctx);
extern "C" uint64_t func_803AD744_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803AD4E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803AD4E0u);
    goto loc_803AD4E0;

loc_803AD4E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
}

loc_803AD4FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AD508;
    }
}

loc_803AD500:
{
    ctx->lr = 0x803AD504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AD264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_803AD50C;
}

loc_803AD508:
{
    ctx->lr = 0x803AD50Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AD744u>(&func_803AD744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803AD744_DF3 = func_803AD744_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803AD744_DF3);
        r4 = static_cast<uint32_t>(regargs_result_803AD744_DF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803AD744u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
    }
}

loc_803AD50C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    MemoryInline::FlatWrite32((r13 + -16864), r3);
    r4 = 0;
    r5 = 27320;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 25;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26456), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead32((r3 + 26456));
}

loc_803AD53C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803AD574;
    }
}

loc_803AD540:
{
    r30 = 0;
    r31 = 0;
}

loc_803AD548:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead32((r3 + 26456));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    ctx->lr = 0x803AD558u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_1A64 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_1A64);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_1A64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite32((r4 + 26264), r3);
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_803AD570:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_803AD548;
    }
}

loc_803AD574:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16864), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26296), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26300), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26304), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26308), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26312), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26316), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26320), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26324), r0);
    r3 = 12288;
    ctx->lr = 0x803AD5C0u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_28CE = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_28CE);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_28CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctr = ctx->ctr;
    }
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r4 + 60), r3);
    r10 = MemoryInline::FlatRead32((r13 + -16868));
    r8 = 0;
    r5 = 0x805F0000u;
    r0 = 2;
    goto loc_803AD698;
}

loc_803AD5DC:
{
    r3 = MemoryInline::FlatRead32(r10);
    r10 = (r10 + 4);
    r7 = MemoryInline::FlatRead8((r3 + 138));
    r9 = MemoryInline::FlatRead16((r3 + 44));
    r6 = 0;
    r4 = (r5 + 12888);
    ctr = r0;
}

loc_803AD5F8:
{
    r3 = MemoryInline::FlatRead16(r4);
}

loc_803AD600:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD604:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
}

loc_803AD60C:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD610:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
}

loc_803AD618:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD61C:
{
    r3 = MemoryInline::FlatRead16((r4 + 6));
}

loc_803AD624:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD628:
{
    r3 = MemoryInline::FlatRead16((r4 + 8));
}

loc_803AD630:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD634:
{
    r3 = MemoryInline::FlatRead16((r4 + 10));
}

loc_803AD63C:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD640:
{
    r3 = MemoryInline::FlatRead16((r4 + 12));
}

loc_803AD648:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD64C:
{
    r3 = MemoryInline::FlatRead16((r4 + 14));
}

loc_803AD654:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r3))) {
        goto loc_803AD664;
    }
}

loc_803AD658:
{
    r4 = (r4 + 16);
    r6 = (r6 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AD5F8;
    }
}

loc_803AD664:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r3 + r4);
    r6 = MemoryInline::FlatRead32((r3 + 26264));
    r3 = MemoryInline::FlatRead32((r3 + 26296));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & -2);
    r6_addr_2 = (r6 + r3);
    MemoryInline::FlatWrite16(r6_addr_2, static_cast<uint16_t>(r9));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead32((r4 + 26296));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 26296), r3);
    r8 = (r8 + 1);
}

loc_803AD698:
{
    r3 = MemoryInline::FlatRead32((r13 + -16860));
}

loc_803AD6A0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r3))) {
        goto loc_803AD5DC;
    }
}

loc_803AD6A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r30 = (r3 + 844);
    r31 = 0;
}

loc_803AD6B0:
{
    r3 = r30;
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = (r30 + 48);
    r31 = (r31 + 1);
}

loc_803AD6CC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(6))) {
        goto loc_803AD6B0;
    }
}

loc_803AD6D0:
{
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r3 + 1688);
    r5 = 24576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 27300);
    r4 = (r4 + 17856);
    // inline leaf 0x8004E774 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8004E774
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5520));
    MemoryInline::FlatWriteFloat64((r3 + 27208), f0.d);
    MemoryInline::FlatWriteFloat64((r3 + 27216), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5512));
    MemoryInline::FlatWriteFloat64((r3 + 27224), f0.d);
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 777), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 778), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 779), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AD4E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AD4E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AD4E0 func_803AD4E0 preserves=true fpr_mask=0x00000000
