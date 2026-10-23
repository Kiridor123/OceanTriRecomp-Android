#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_8052AC60(CpuContext* ctx);
extern "C" uint64_t func_8052AC60_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_8055319C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8055319C;

loc_8055319C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r5 = MemoryInline::FlatRead32((r3 + 464));
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 484));
    r30 = r4;
}

loc_805531C4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_805531D0;
    }
}

loc_805531C8:
{
    r31 = -1;
    goto loc_8055323C;
}

loc_805531D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 488));
}

loc_805531D8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_805531E4;
    }
}

loc_805531DC:
{
    r31 = -1;
    goto loc_8055323C;
}

loc_805531E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 472));
}

loc_805531EC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_805531FC;
    }
}

loc_805531F0:
{
    r0 = (r0 - r5);
    r31 = (20 - r0);
    goto loc_80553200;
}

loc_805531FC:
{
    r31 = (r5 - r0);
}

loc_80553200:
{
    r4 = (19 - r31);
    r0 = 20;
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
}

loc_80553214:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80553220;
    }
}

loc_80553218:
{
    r31 = (r31 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80553218;
    }
}

loc_80553220:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_80553230:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(20))) {
        goto loc_8055323C;
    }
}

loc_80553234:
{
    r31 = (r31 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80553234;
    }
}

loc_8055323C:
{
    r3 = (r3 + 24);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8055324Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_80553250:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805532A4;
    }
}

loc_80553254:
{
    r28 = r29;
    r27 = 0;
}

loc_8055325C:
{
}

loc_80553260:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r31))) {
        goto loc_80553280;
    }
}

loc_80553264:
{
    r3 = MemoryInline::FlatRead32((r28 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80553278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_8055327C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80553294;
    }
}

loc_80553280:
{
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_80553294:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_805532A0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(20))) {
        goto loc_8055325C;
    }
}

loc_805532A4:
{
    r4 = MemoryInline::FlatRead32((r29 + 216));
    r5 = r30;
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead32((r4 + 156));
    ctx->lr = 0x805532B8u;
    if constexpr (KnownRegArgsCpuCall<0x8052AC60u>(&func_8052AC60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8052AC60_18EA = func_8052AC60_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8052AC60_18EA);
        r4 = static_cast<uint32_t>(regargs_result_8052AC60_18EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        InvokeDirectCpu<0x8052AC60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 0;
    r4 = (r1 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 36), r0);
    r5 = r4;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 40), r0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 24), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 44), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 36), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 40), f2.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 32), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 28), f0.d);
    }
    r3 = MemoryInline::FlatRead32((r29 + 216));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r3 = (r3 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6F20u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 216));
    r4 = (r1 + 24);
    r5 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r3 = (r3 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6F20u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x80553338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAF20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1020));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 500));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1004));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1016));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f4.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2C31 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2C31;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r28 = r3;
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_3020 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_3020;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r5 = r28;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x80553398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAEB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 220));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805533B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32((r29 + 24));
    r3 = (r29 + 24);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805533C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_805533CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80553480;
    }
}

loc_805533D0:
{
    r28 = MemoryInline::FlatRead32((r1 + 20));
    r0 = 1127219200;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 72));
    stackword14 = r28;
    MemoryInline::FlatWriteRam32((r1 + 92), r28);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -992));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword14));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_418F = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_418F;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r5 = r3;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r28;
    ctx->lr = 0x80553414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAEB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r27 = 0;
}

loc_80553418:
{
}

loc_8055341C:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r31))) {
        goto loc_8055343C;
    }
}

loc_80553420:
{
    r3 = MemoryInline::FlatRead32((r29 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80553434u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_80553438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80553470;
    }
}

loc_8055343C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80553470u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_80553470:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_8055347C:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(20))) {
        goto loc_80553418;
    }
}

loc_80553480:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x80553494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAEB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r11 = (r1 + 128);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055319C func_8055319C preserves=true fpr_mask=0x00000000
