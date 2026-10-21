#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D4EEC(CpuContext* ctx);
extern "C" uint64_t func_800D4EEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F0DEC(CpuContext* ctx);
extern "C" uint64_t func_800F0DEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80146604(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80146604u);
    goto loc_80146604;

loc_80146604:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r4 = 0x806A0000u;
    r31 = (r4 + 27152);
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x800F0DECu>(&func_800F0DEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800F0DEC_9D2 = func_800F0DEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F0DEC_9D2);
        r4 = static_cast<uint32_t>(regargs_result_800F0DEC_9D2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800F0DECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 3492), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 3496), r0);
    r3 = 11993088;
    r0 = (r3 + -16384);
    MemoryInline::FlatWriteRam32((r31 + 3500), r0);
    r28 = (r31 + 3504);
    r27 = (r31 + 3624);
    r29 = 0;
    r30 = 255;
}

loc_80146658:
{
    r3 = r28;
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r30));
    r3 = r27;
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r30));
    r29 = (r29 + 1);
    r28 = (r28 + 20);
    r27 = (r27 + 20);
}

loc_80146690:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(6))) {
        goto loc_80146658;
    }
}

loc_80146694:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 3500));
    r5 = 1;
    ctx->lr = 0x801466A4u;
    if constexpr (KnownRegArgsCpuCall<0x800D4EECu>(&func_800D4EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800D4EEC_121B = func_800D4EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D4EEC_121B);
        r4 = static_cast<uint32_t>(regargs_result_800D4EEC_121B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D4EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    MemoryInline::FlatWriteRam32((r31 + 3492), r3);
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl1_0x800D5168:
{
}

loc_inl1_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D5178;
    }
}

loc_inl1_0x800D5170:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5178:
{
}

loc_inl1_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl1_0x800D5188;
    }
}

loc_inl1_0x800D5180:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl1_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    MemoryInline::FlatWriteRam32((r31 + 3496), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 3888), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3889), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3890), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3891), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3892), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3893), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3894), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3895), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3896), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3897), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3898), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3899), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3900), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3901), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3902), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 3903), static_cast<uint8_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r4 = (r3 * 6);
    r3 = 0x805A0000u;
    r3 = (r3 + 9208);
    r5 = (r3 + r4);
    r4 = (r31 + 3504);
    r6 = MemoryInline::FlatRead32((r31 + 3496));
    r3 = 0x805A0000u;
    r3 = (r3 + 9192);
    r7 = 6;
    ctr = r7;
}

loc_80146720:
{
    r8 = MemoryInline::FlatRead8(r5);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_8014672C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(-1))) {
        goto loc_801467C0;
    }
}

loc_80146730:
{
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r3_addr_2 = (r3 + r7);
    r7 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWrite32((r4 + 8), r7);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r7 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r4 + 16), r7);
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r6 = (r6 + r7);
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -4);
    r8 = (r31 + r7);
    r7 = MemoryInline::FlatRead8((r8 + 3888));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r8 + 3888), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & -4);
    r8 = (r31 + r7);
    r7 = MemoryInline::FlatRead8((r8 + 3889));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r8 + 3889), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_5 & -4);
    r8 = (r31 + r7);
    r7 = MemoryInline::FlatRead8((r8 + 3890));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r8 + 3890), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_6 & -4);
    r8 = (r31 + r7);
    r7 = MemoryInline::FlatRead8((r8 + 3891));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r8 + 3891), static_cast<uint8_t>(r7));
    r4 = (r4 + 20);
}

loc_801467C0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146720;
    }
}

loc_801467C8:
{
    r12 = (r31 + 3504);
    r30 = (r31 + 3624);
    r29 = 0;
    r5 = 3;
    r4 = 786432;
    r8 = 2;
    r7 = 524288;
    r10 = 1;
    r9 = 196608;
    r3 = 0;
    r0 = 3;
    ctr = r0;
}

loc_801467F8:
{
    r11 = MemoryInline::FlatRead8((r12 + 1));
    r0 = (r11 + 1);
}

loc_80146804:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80146868;
    }
}

loc_80146808:
{
}

loc_8014680C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_80146824;
    }
}

loc_80146810:
{
}

loc_80146814:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(2))) {
        goto loc_80146834;
    }
}

loc_80146818:
{
}

loc_8014681C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(3))) {
        goto loc_80146848;
    }
}

loc_80146820:
{
    goto loc_80146854;
}

loc_80146824:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite32((r30 + 4), r6);
    MemoryInline::FlatWrite32((r30 + 8), r9);
    goto loc_80146854;
}

loc_80146834:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r30 + 4), r6);
    r0 = (r7 + -32768);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80146854;
}

loc_80146848:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r30 + 4), r6);
    MemoryInline::FlatWrite32((r30 + 8), r4);
}

loc_80146854:
{
    MemoryInline::FlatWrite32((r30 + 12), r3);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r30 + 16), r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r6 = (r6 + r0);
}

loc_80146868:
{
    r11 = MemoryInline::FlatRead8((r12 + 21));
    r0 = (r11 + 1);
}

loc_80146874:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801468D8;
    }
}

loc_80146878:
{
}

loc_8014687C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_80146894;
    }
}

loc_80146880:
{
}

loc_80146884:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(2))) {
        goto loc_801468A4;
    }
}

loc_80146888:
{
}

loc_8014688C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(3))) {
        goto loc_801468B8;
    }
}

loc_80146890:
{
    goto loc_801468C4;
}

loc_80146894:
{
    MemoryInline::FlatWrite8((r30 + 21), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite32((r30 + 24), r6);
    MemoryInline::FlatWrite32((r30 + 28), r9);
    goto loc_801468C4;
}

loc_801468A4:
{
    MemoryInline::FlatWrite8((r30 + 21), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r30 + 24), r6);
    r0 = (r7 + -32768);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    goto loc_801468C4;
}

loc_801468B8:
{
    MemoryInline::FlatWrite8((r30 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r30 + 24), r6);
    MemoryInline::FlatWrite32((r30 + 28), r4);
}

loc_801468C4:
{
    MemoryInline::FlatWrite32((r30 + 32), r3);
    r0 = MemoryInline::FlatRead32((r30 + 28));
    MemoryInline::FlatWrite32((r30 + 36), r0);
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r6 = (r6 + r0);
}

loc_801468D8:
{
    r12 = (r12 + 40);
    r30 = (r30 + 40);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801467F8;
    }
}

loc_801468E8:
{
    r5 = 0;
    r3 = 255;
    r4 = 0;
    r0 = 3;
    ctr = r0;
}

loc_801468FC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 3744), 0, 23u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 3744), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 3745), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 3746), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 3747), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 3748), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 3749), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 3750), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 3751), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 3752), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 3753), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 3754), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 3755), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 3756), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 3757), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 3758), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 3759), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 3760), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r31 + 3761), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r31 + 3762), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r31 + 3763), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r31 + 3764), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r31 + 3765), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r31 + 3766), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 3744), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 3745), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 3746), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 3747), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 3748), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 3749), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 3750), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 3751), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 3752), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 3753), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 3754), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 3755), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 3756), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 3757), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 3758), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 3759), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 3760), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r31 + 3761), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r31 + 3762), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r31 + 3763), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r31 + 3764), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r31 + 3765), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r31 + 3766), static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801468FC;
    }
}

loc_801469BC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80146604 func_80146604 preserves=true fpr_mask=0x00000000
