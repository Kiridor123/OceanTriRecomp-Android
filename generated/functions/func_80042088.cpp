#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80042890(CpuContext* ctx);
extern "C" uint64_t func_80042890_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80042FDC(CpuContext* ctx);
extern "C" uint64_t func_80042FDC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800432C0(CpuContext* ctx);
extern "C" uint64_t func_800432C0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_804F8A00(CpuContext* ctx);
extern "C" uint64_t func_804F8A00_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804F8B60(CpuContext* ctx);
extern "C" uint64_t func_804F8B60_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80042088(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_80042088;

loc_80042088:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r29 = (r3 * 848);
    r3 = 0x80660000u;
    r24 = (r3 + -18480);
    r31 = (r24 + r29);
    r28 = (r31 + 98);
    r27 = (r31 + 152);
    r26 = (r31 + 56);
    r3 = 0x80660000u;
    r30 = (r3 + -11568);
    r3 = 0x80580000u;
    r25 = (r3 + 5680);
    r0 = MemoryInline::FlatRead16((r31 + 214));
    MemoryInline::FlatWrite16((r31 + 216), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 222));
    MemoryInline::FlatWrite16((r31 + 224), static_cast<uint16_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r12 = MemoryInline::FlatRead32((r3 + 2264));
    ctr = r12;
    ctx->lr = 0x80042100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80042104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80042114;
    }
}

loc_80042108:
{
    r3 = r22;
    ctx->lr = 0x80042110u;
    if constexpr (KnownRegArgsCpuCall<0x80042890u>(&func_80042890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80042890_1153 = func_80042890_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80042890_1153);
        r4 = static_cast<uint32_t>(regargs_result_80042890_1153 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80042890u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800427D8;
}

loc_80042114:
{
    r23 = r31;
    r3 = r22;
    r4 = (r31 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r23 + 48), r3);
}

loc_8004212C:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80042144;
    }
}

loc_80042130:
{
    r0 = MemoryInline::FlatRead32((r23 + 48));
    MemoryInline::FlatWrite32((r13 + -17888), r0);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r13 + -17884), r0);
}

loc_80042144:
{
    r0 = MemoryInline::FlatRead32((r23 + 48));
}

loc_8004214C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8004215C;
    }
}

loc_80042150:
{
    // inline leaf 0x804360A0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27968);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x804360A0
}

loc_80042158:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80042168;
    }
}

loc_8004215C:
{
    r3 = r22;
    // inline leaf 0x80042920 (33 guest instruction(s))
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r5 = (r0 + r4);
    r0 = 2;
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 202), 0, 534u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r5 + 216), r0);
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r5 + 214), r0);
    }
    r4 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r5 + 218), r4);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r5 + 220), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r5 + 226), r4);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r5 + 228), r4);
    }
    r3 = 65536;
    r0 = (r3 + -32768);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 50u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 52u, (r5 + 254), r0);
        MemoryInline::WriteResolved16(guest_range_1, 50u, (r5 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 54u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 54u, (r5 + 256), r4);
        MemoryInline::WriteResolved16(guest_range_1, 56u, (r5 + 258), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 62u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r5 + 264), r4);
        MemoryInline::WriteResolved16(guest_range_1, 64u, (r5 + 266), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r5 + 204), r0);
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r5 + 202), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 206), r4);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 208), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 506u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 506u, (r5 + 708), r4);
        MemoryInline::WriteResolved16(guest_range_1, 508u, (r5 + 710), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 522u, (r5 + 724), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 514u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 514u, (r5 + 716), r4);
        MemoryInline::WriteResolved16(guest_range_1, 516u, (r5 + 718), r4);
    }
    MemoryInline::WriteResolved8(guest_range_1, 533u, (r5 + 735), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 502u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 504u, (r5 + 706), r4);
        MemoryInline::WriteResolved16(guest_range_1, 502u, (r5 + 704), r4);
    }
    // end of inlined leaf 0x80042920
    goto loc_800427D8;
}

loc_80042168:
{
    r0 = MemoryInline::FlatRead32((r23 + 48));
}

loc_80042170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800421D8;
    }
}

loc_80042174:
{
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80042188:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80042198;
    }
}

loc_8004218C:
{
}

loc_80042190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800421A0;
    }
}

loc_80042194:
{
    goto loc_800421A8;
}

loc_80042198:
{
    r24 = r27;
    goto loc_800421AC;
}

loc_800421A0:
{
    r24 = r28;
    goto loc_800421AC;
}

loc_800421A8:
{
    r24 = r26;
}

loc_800421AC:
{
    r3 = r22;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF9D0u>(ctx);
    r3 = r22;
    r4 = r24;
    r5 = 2;
    ctx->lr = 0x800421C8u;
    if constexpr (KnownRegArgsCpuCall<0x804F8A00u>(&func_804F8A00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        const auto regargs_result_804F8A00_2D30 = func_804F8A00_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_804F8A00_2D30);
        r4 = static_cast<uint32_t>(regargs_result_804F8A00_2D30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804F8A00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r22;
    r4 = r24;
    r5 = 1;
    ctx->lr = 0x800421D8u;
    if constexpr (KnownRegArgsCpuCall<0x804F8B60u>(&func_804F8B60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        const auto regargs_result_804F8B60_322A = func_804F8B60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804F8B60_322A);
        r4 = static_cast<uint32_t>(regargs_result_804F8B60_322A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x804F8B60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800421D8:
{
    r0 = MemoryInline::FlatRead32((r23 + 48));
}

loc_800421E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800422A4;
    }
}

loc_800421E4:
{
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_800421F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800422A4;
    }
}

loc_800421FC:
{
    r4 = MemoryInline::FlatRead16((r28 + 42));
    r3 = 0;
    r5 = 0;
    r0 = 4;
    ctr = r0;
}

loc_80042210:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r4 & r0);
}

loc_8004221C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004222C;
    }
}

loc_80042220:
{
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_8004222C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r4 & r0);
}

loc_80042238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042248;
    }
}

loc_8004223C:
{
    r0 = MemoryInline::FlatRead16((r25 + 2));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_80042248:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r4 & r0);
}

loc_80042254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042264;
    }
}

loc_80042258:
{
    r0 = MemoryInline::FlatRead16((r25 + 4));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_80042264:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (r4 & r0);
}

loc_80042270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042280;
    }
}

loc_80042274:
{
    r0 = MemoryInline::FlatRead16((r25 + 6));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_80042280:
{
    r30 = (r30 + 8);
    r25 = (r25 + 8);
    r5 = (r5 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80042210;
    }
}

loc_80042290:
{
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r3));
    r3 = r22;
    r4 = r31;
    ctx->lr = 0x800422A0u;
    if constexpr (KnownRegArgsCpuCall<0x80042FDCu>(&func_80042FDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80042FDC_4196 = func_80042FDC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80042FDC_4196);
        r4 = static_cast<uint32_t>(regargs_result_80042FDC_4196 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80042FDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_800422CC;
}

loc_800422A4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 222), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 232), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 230), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 236), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 234), static_cast<uint16_t>(r0));
    r3 = r22;
    r4 = r31;
    ctx->lr = 0x800422CCu;
    if constexpr (KnownRegArgsCpuCall<0x80042FDCu>(&func_80042FDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80042FDC_4A75 = func_80042FDC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80042FDC_4A75);
        r4 = static_cast<uint32_t>(regargs_result_80042FDC_4A75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80042FDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800422CC:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 214), 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r31 + 214));
            r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r31 + 216));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 218), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r31 + 216));
            r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r31 + 214));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 220), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r31 + 222));
            r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r31 + 224));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 226), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r31 + 224));
            r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r31 + 222));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 228), static_cast<uint16_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite16((r31 + 248), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r31 + 216));
            r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r31 + 214));
        }
    }
}

loc_80042330:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80042360;
    }
}

loc_80042334:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 250), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 250));
}

loc_80042348:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80042364;
    }
}

loc_8004234C:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r31 + 250), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 214));
    MemoryInline::FlatWrite16((r31 + 248), static_cast<uint16_t>(r0));
    goto loc_80042364;
}

loc_80042360:
{
    MemoryInline::FlatWrite16((r31 + 250), static_cast<uint16_t>(r4));
}

loc_80042364:
{
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r30 = (r0 + r29);
    r25 = (r30 + 252);
    r3 = 0x80660000u;
    r24 = (r3 + -11536);
    r3 = 0x80580000u;
    r23 = (r3 + 5680);
    r0 = MemoryInline::FlatRead16((r30 + 202));
    MemoryInline::FlatWrite16((r30 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r25);
    MemoryInline::FlatWrite16((r25 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 8));
    MemoryInline::FlatWrite16((r25 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_800423A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800424EC;
    }
}

loc_800423A8:
{
    r3 = 0x80660000u;
    r0 = (r3 + -21920);
    r31 = (r0 + r22);
    r0 = MemoryInline::FlatRead8((r31 + 2020));
}

loc_800423BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800423F8;
    }
}

loc_800423C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 2016));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800423CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(120))) {
        goto loc_800423F8;
    }
}

loc_800423D0:
{
    r3 = r22;
    r5 = (r22 * 24);
    r4 = 0x80660000u;
    r0 = (r4 + -11696);
    r4 = (r0 + r5);
    r5 = 0x80040000u;
    r5 = (r5 + 7944);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804EF3C0u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2020), static_cast<uint8_t>(r0));
}

loc_800423F8:
{
    r3 = 0x80660000u;
    r0 = (r3 + -21920);
    r4 = (r0 + r22);
    r3 = MemoryInline::FlatRead8((r4 + 2016));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80042410:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8004241C;
    }
}

loc_80042414:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 2016), static_cast<uint8_t>(r0));
}

loc_8004241C:
{
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80042430:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80042440;
    }
}

loc_80042434:
{
}

loc_80042438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80042448;
    }
}

loc_8004243C:
{
    goto loc_80042450;
}

loc_80042440:
{
    r4 = MemoryInline::FlatRead16(r27);
    goto loc_80042454;
}

loc_80042448:
{
    r4 = MemoryInline::FlatRead16(r28);
    goto loc_80042454;
}

loc_80042450:
{
    r4 = MemoryInline::FlatRead16(r26);
}

loc_80042454:
{
    r3 = 0;
    r5 = 0;
    r0 = 4;
    ctr = r0;
}

loc_80042464:
{
    r0 = MemoryInline::FlatRead16(r24);
    r0 = (r4 & r0);
}

loc_80042470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042480;
    }
}

loc_80042474:
{
    r0 = MemoryInline::FlatRead16(r23);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_80042480:
{
    r0 = MemoryInline::FlatRead16((r24 + 2));
    r0 = (r4 & r0);
}

loc_8004248C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004249C;
    }
}

loc_80042490:
{
    r0 = MemoryInline::FlatRead16((r23 + 2));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_8004249C:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
    r0 = (r4 & r0);
}

loc_800424A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800424B8;
    }
}

loc_800424AC:
{
    r0 = MemoryInline::FlatRead16((r23 + 4));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_800424B8:
{
    r0 = MemoryInline::FlatRead16((r24 + 6));
    r0 = (r4 & r0);
}

loc_800424C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800424D4;
    }
}

loc_800424C8:
{
    r0 = MemoryInline::FlatRead16((r23 + 6));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
}

loc_800424D4:
{
    r24 = (r24 + 8);
    r23 = (r23 + 8);
    r5 = (r5 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80042464;
    }
}

loc_800424E4:
{
    MemoryInline::FlatWrite16((r30 + 202), static_cast<uint16_t>(r3));
    goto loc_800424F4;
}

loc_800424EC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 202), static_cast<uint16_t>(r0));
}

loc_800424F4:
{
    r3 = MemoryInline::FlatRead16((r30 + 202));
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 206), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 204));
    r0 = MemoryInline::FlatRead16((r30 + 202));
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 208), static_cast<uint16_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite16((r30 + 210), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 204));
    r0 = MemoryInline::FlatRead16((r30 + 202));
}

loc_80042530:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80042560;
    }
}

loc_80042534:
{
    r3 = MemoryInline::FlatRead16((r30 + 212));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 212), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 212));
}

loc_80042548:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80042564;
    }
}

loc_8004254C:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r30 + 212), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 202));
    MemoryInline::FlatWrite16((r30 + 210), static_cast<uint16_t>(r0));
    goto loc_80042564;
}

loc_80042560:
{
    MemoryInline::FlatWrite16((r30 + 212), static_cast<uint16_t>(r4));
}

loc_80042564:
{
    r3 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r3 + 1);
    r0 = (r0 & 15);
    MemoryInline::FlatWrite8((r25 + 424), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r4 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_80042588:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800426B0;
    }
}

loc_8004258C:
{
    r0 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80042594:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800426B0;
    }
}

loc_80042598:
{
    r0 = MemoryInline::FlatRead16((r30 + 202));
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 204));
    MemoryInline::FlatWrite16((r25 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 206));
    MemoryInline::FlatWrite16((r25 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 208));
    MemoryInline::FlatWrite16((r25 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 210));
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 212));
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r0));
    r3 = r22;
    ctx->lr = 0x800425D0u;
    if constexpr (KnownRegArgsCpuCall<0x800432C0u>(&func_800432C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800432C0_7C03 = func_800432C0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800432C0_7C03);
        r4 = static_cast<uint32_t>(regargs_result_800432C0_7C03 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800432C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32688));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 232), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r0 = MemoryInline::FlatRead16((r27 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    goto loc_80042738;
}

loc_800426B0:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r25 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r25 + 18), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r25 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r25 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r25 + 20), static_cast<uint16_t>(r0));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    r3 = (r3 + 232);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r0 = MemoryInline::FlatRead8((r25 + 424));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    r3 = (r3 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r22;
    r4 = 0x80660000u;
    r0 = (r4 + -18480);
    r4 = (r0 + r29);
    ctx->lr = 0x80042738u;
    if constexpr (KnownRegArgsCpuCall<0x800432C0u>(&func_800432C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800432C0_94EF = func_800432C0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800432C0_94EF);
        r4 = static_cast<uint32_t>(regargs_result_800432C0_94EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800432C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80042738:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r25, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_4, 0u, r25);
            r0 = MemoryInline::ReadResolved16(guest_range_4, 2u, (r25 + 2));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 4), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_4, 2u, (r25 + 2));
            r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, r25);
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 6), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r25 + 8));
            r0 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r25 + 10));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 12), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r25 + 10));
            r0 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r25 + 8));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 14), static_cast<uint16_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_4, 2u, (r25 + 2));
            r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, r25);
        }
    }
}

loc_8004279C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800427CC;
    }
}

loc_800427A0:
{
    r3 = MemoryInline::FlatRead16((r25 + 36));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 36));
}

loc_800427B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_800427D0;
    }
}

loc_800427B8:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r25);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_800427D0;
}

loc_800427CC:
{
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r4));
}

loc_800427D0:
{
    r3 = (r22 & 255);
    ctx->lr = 0x800427D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80044368u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800427D8:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80042088 func_80042088 preserves=true fpr_mask=0x00000000
