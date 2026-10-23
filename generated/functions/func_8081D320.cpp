#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EB8AC(CpuContext* ctx);
extern "C" uint64_t func_804EB8AC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_804EFF30(CpuContext* ctx);
extern "C" uint64_t func_804EFF30_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804F1750(CpuContext* ctx);
extern "C" uint64_t func_804F1750_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804F17E0(CpuContext* ctx);
extern "C" uint64_t func_804F17E0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" void func_8081D320(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8081D320;

loc_8081D320:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r3 = 0x80870000u;
    r29 = MemoryInline::FlatRead32((r3 + -32336));
}

loc_8081D340:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8081D574;
    }
}

loc_8081D344:
{
    r28 = 0;
    r31 = 0;
    r30 = 1717960704;
    r26 = -1;
}

loc_8081D354:
{
    r0 = MemoryInline::FlatRead32((r29 + 80));
}

loc_8081D35C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081D564;
    }
}

loc_8081D360:
{
    r3 = r28;
    ctx->lr = 0x8081D368u;
    if constexpr (KnownRegArgsCpuCall<0x804EFF30u>(&func_804EFF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EFF30_E9A = func_804EFF30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EFF30_E9A);
        r4 = static_cast<uint32_t>(regargs_result_804EFF30_E9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFF30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081D36C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081D564;
    }
}

loc_8081D370:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r27 = r3;
    r3 = r28;
    ctx->lr = 0x8081D380u;
    if constexpr (KnownRegArgsCpuCall<0x804F1750u>(&func_804F1750)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_804F1750_13AC = func_804F1750_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804F1750_13AC);
        r4 = static_cast<uint32_t>(regargs_result_804F1750_13AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804F1750u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_8081D384:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081D53C;
    }
}

loc_8081D388:
{
    r0 = MemoryInline::FlatRead32((r29 + 84));
    r7 = (r1 + 32);
    r8 = MemoryInline::FlatRead8((r29 + 93));
    r5 = 40;
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r9 = (r9_rot_2 & 2147483647);
    r6 = MemoryInline::FlatRead32((r29 + 80));
}

loc_8081D3A4:
{
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(40))) {
        goto loc_8081D3B0;
    }
}

loc_8081D3AC:
{
    r5 = r9;
}

loc_8081D3B0:
{
}

loc_8081D3B4:
{
    r4 = (r30 + 26215);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8081D478;
    }
}

loc_8081D3BC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
}

loc_8081D3C0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081D44C;
    }
}

loc_8081D3C8:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r8);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r8);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r8);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r7 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r6 + 8);
    r0 = (r0 * r8);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r7 + 6), static_cast<uint16_t>(r0));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081D3C8;
    }
}

loc_8081D444:
{
    r5 = (r5 & 3);
}

loc_8081D448:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8081D478;
    }
}

loc_8081D44C:
{
    ctr = r5;
}

loc_8081D450:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r6 + 2);
    r0 = (r0 * r8);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081D450;
    }
}

loc_8081D478:
{
}

loc_8081D47C:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(40))) {
        goto loc_8081D4DC;
    }
}

loc_8081D480:
{
    r3 = (40 - r9);
}

loc_8081D488:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8081D4DC;
    }
}

loc_8081D48C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_8081D490:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081D4C8;
    }
}

loc_8081D498:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, r7, r31);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r7 + 2), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r7 + 4), r31);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r7 + 6), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r7 + 8), r31);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r7 + 10), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r7 + 12), r31);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r7 + 14), r31);
    }
    r7 = (r7 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081D498;
    }
}

loc_8081D4C0:
{
    r3 = (r3 & 7);
}

loc_8081D4C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081D4DC;
    }
}

loc_8081D4C8:
{
    ctr = r3;
    // nop
}

loc_8081D4D0:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r31));
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081D4D0;
    }
}

loc_8081D4DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 92));
    r3 = (r29 + 48);
    r5 = (r1 + 32);
    r7 = (r1 + 8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r6 = 40;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & 134217727);
    ctx->lr = 0x8081D4FCu;
    if constexpr (KnownRegArgsCpuCall<0x804EB8ACu>(&func_804EB8AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804EB8AC_32F6 = func_804EB8AC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_804EB8AC_32F6);
        r4 = static_cast<uint32_t>(regargs_result_804EB8AC_32F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB8ACu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = (r1 + 8);
    r5 = 20;
    ctx->lr = 0x8081D50Cu;
    if constexpr (KnownRegArgsCpuCall<0x804F17E0u>(&func_804F17E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804F17E0_394B = func_804F17E0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804F17E0_394B);
        r4 = static_cast<uint32_t>(regargs_result_804F17E0_394B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804F17E0u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r29 + 92), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 94), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r29 + 80));
    r0 = (r3 + 80);
    MemoryInline::FlatWrite32((r29 + 80), r0);
    r3 = MemoryInline::FlatRead32((r29 + 84));
    r0 = (r3 + -80);
}

loc_8081D528:
{
    MemoryInline::FlatWrite32((r29 + 84), r0);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8081D55C;
    }
}

loc_8081D530:
{
    MemoryInline::FlatWrite32((r29 + 88), r26);
    MemoryInline::FlatWrite32((r29 + 80), r31);
    goto loc_8081D55C;
}

loc_8081D53C:
{
    r3 = MemoryInline::FlatRead8((r29 + 94));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 94), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8081D554:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_8081D55C;
    }
}

loc_8081D558:
{
    MemoryInline::FlatWrite32((r29 + 80), r31);
}

loc_8081D55C:
{
    r3 = r27;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_13 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8081D564:
{
    r28 = (r28 + 1);
    r29 = (r29 + 104);
}

loc_8081D570:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_8081D354;
    }
}

loc_8081D574:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081D320 func_8081D320 preserves=true fpr_mask=0x00000000
