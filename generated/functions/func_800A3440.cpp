#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805011C4(CpuContext* ctx);
extern "C" uint64_t func_805011C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800A3440_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_800A3440;

loc_800A3440:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A3494:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A34AC;
    }
}

loc_800A3498:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A34A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A34AC;
    }
}

loc_800A34A8:
{
    r10 = 0;
}

loc_800A34AC:
{
}

loc_800A34B0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A34C8;
    }
}

loc_800A34B4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A34C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A34C8;
    }
}

loc_800A34C4:
{
    r9 = 0;
}

loc_800A34C8:
{
}

loc_800A34CC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A34E0;
    }
}

loc_800A34D0:
{
    r0 = (r11 + 1073741824);
}

loc_800A34D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A34E0;
    }
}

loc_800A34DC:
{
    r8 = 0;
}

loc_800A34E0:
{
}

loc_800A34E4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A34FC;
    }
}

loc_800A34E8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A34F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A34FC;
    }
}

loc_800A34F8:
{
    r7 = 0;
}

loc_800A34FC:
{
}

loc_800A3500:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A3518;
    }
}

loc_800A3504:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A3510:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3518;
    }
}

loc_800A3514:
{
    r6 = 0;
}

loc_800A3518:
{
}

loc_800A351C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A3534;
    }
}

loc_800A3520:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A352C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3534;
    }
}

loc_800A3530:
{
    r5 = 0;
}

loc_800A3534:
{
}

loc_800A3538:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A355C;
    }
}

loc_800A353C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 10880);
    r4 = 65;
    r5 = 0x80590000u;
    r5 = (r5 + 10904);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A355Cu;
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
}

loc_800A355C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A3580:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3598;
    }
}

loc_800A3584:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A3590:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3598;
    }
}

loc_800A3594:
{
    r9 = 0;
}

loc_800A3598:
{
}

loc_800A359C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A35B4;
    }
}

loc_800A35A0:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A35AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A35B4;
    }
}

loc_800A35B0:
{
    r8 = 0;
}

loc_800A35B4:
{
}

loc_800A35B8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A35CC;
    }
}

loc_800A35BC:
{
    r0 = (r10 + 1073741824);
}

loc_800A35C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A35CC;
    }
}

loc_800A35C8:
{
    r7 = 0;
}

loc_800A35CC:
{
}

loc_800A35D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A35E8;
    }
}

loc_800A35D4:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A35E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A35E8;
    }
}

loc_800A35E4:
{
    r6 = 0;
}

loc_800A35E8:
{
}

loc_800A35EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A3604;
    }
}

loc_800A35F0:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A35FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3604;
    }
}

loc_800A3600:
{
    r5 = 0;
}

loc_800A3604:
{
}

loc_800A3608:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A3620;
    }
}

loc_800A360C:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A3618:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3620;
    }
}

loc_800A361C:
{
    r4 = 0;
}

loc_800A3620:
{
}

loc_800A3624:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A3648;
    }
}

loc_800A3628:
{
    r3 = 0x80590000u;
    r3 = (r3 + 10880);
    r4 = 66;
    r5 = 0x80590000u;
    r5 = (r5 + 10960);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A3648u;
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
}

loc_800A3648:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_800A3650:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1024))) {
        goto loc_800A3674;
    }
}

loc_800A3654:
{
    r3 = 0x80590000u;
    r3 = (r3 + 10880);
    r4 = 70;
    r5 = 0x80590000u;
    r5 = (r5 + 11012);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A3670u;
    if constexpr (KnownRegArgsCpuCall<0x805011C4u>(&func_805011C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_805011C4_254A = func_805011C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805011C4_254A);
        r4 = static_cast<uint32_t>(regargs_result_805011C4_254A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x805011C4u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_800A3764;
}

loc_800A3674:
{
    r4 = 1;
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    r4 = 0;
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r29));
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    r3 = (r3 + 8);
    r4 = r26;
    // inline leaf 0x800A33F4 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800A33F4
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite32((r3 + 20), r27);
    r3 = r27;
    // inline leaf 0x800A33E0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r0;
    // end of inlined leaf 0x800A33E0
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite32((r3 + 24), r28);
}

loc_800A36EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800A3720;
    }
}

loc_800A36F0:
{
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    r3 = (r3 + 28);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800A3720:
{
}

loc_800A3724:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A3758;
    }
}

loc_800A3728:
{
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r25);
    r0 = (r0 * 48);
    r3 = (r25 + r0);
    r3 = (r3 + 40);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800A3758:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r25, r0);
}

loc_800A3764:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A3440(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A3440_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A3440 func_800A3440 preserves=true fpr_mask=0x00000000
