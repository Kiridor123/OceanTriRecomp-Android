#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804782B0(CpuContext* ctx);
extern "C" uint64_t func_804782B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80496300(CpuContext* ctx);
extern "C" uint64_t func_80496300_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804964D0(CpuContext* ctx);
extern "C" uint32_t func_804964D0_ra50_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804796D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_10 = 0;
    uint32_t r15_addr_11 = 0;
    uint32_t r15_addr_12 = 0;
    uint32_t r15_addr_13 = 0;
    uint32_t r15_addr_14 = 0;
    uint32_t r15_addr_15 = 0;
    uint32_t r15_addr_16 = 0;
    uint32_t r15_addr_17 = 0;
    uint32_t r15_addr_18 = 0;
    uint32_t r15_addr_19 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_20 = 0;
    uint32_t r15_addr_21 = 0;
    uint32_t r15_addr_22 = 0;
    uint32_t r15_addr_23 = 0;
    uint32_t r15_addr_24 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r15_addr_5 = 0;
    uint32_t r15_addr_6 = 0;
    uint32_t r15_addr_7 = 0;
    uint32_t r15_addr_8 = 0;
    uint32_t r15_addr_9 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
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

    goto loc_804796D0;

loc_804796D0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = MemoryInline::FlatRead8((r4 + 30));
    r15 = r4;
    r19 = 0;
}

loc_804796F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80479700;
    }
}

loc_804796F8:
{
    r3 = 0;
    goto loc_80479A50;
}

loc_80479700:
{
    r20 = (r3 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r31 = 0x80730000u;
    r22 = (r4 + r3);
    r16 = (r20 & 65535);
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r23 = (r23_rot_1 & 262140);
    r21 = (r4 + r0);
    r31 = (r31 + 32096);
    r29 = 0;
    r30 = 4;
    r28 = (r2 + -2592);
    r25 = 3;
    r24 = 2;
    r14 = 0x80610000u;
    r26 = (r2 + -2584);
    r27 = 1;
}

loc_80479740:
{
    r3 = (r16 & 255);
    r4 = (r1 + 8);
    r5 = 1;
    // inline leaf 0x8047A6D0 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8047A6D0
    r0 = (r3 & 65535);
}

loc_80479754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80479A4C;
    }
}

loc_80479758:
{
    r0 = MemoryInline::FlatRead8((r22 + 26));
    r17 = 0;
    r19 = (r19 + 1);
}

loc_80479768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80479790;
    }
}

loc_8047976C:
{
}

loc_80479770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80479838;
    }
}

loc_80479774:
{
}

loc_80479778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80479930;
    }
}

loc_8047977C:
{
}

loc_80479780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8047997C;
    }
}

loc_80479784:
{
}

loc_80479788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80479A14;
    }
}

loc_8047978C:
{
    goto loc_80479A2C;
}

loc_80479790:
{
}

loc_80479794:
{
    if ((static_cast<uint32_t>(r16) != static_cast<uint32_t>(1))) {
        goto loc_804797AC;
    }
}

loc_80479798:
{
    r3 = 2;
    ctx->lr = 0x804797A0u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_1AC4 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_1AC4);
        r4 = static_cast<uint32_t>(regargs_result_80478000_1AC4 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r15_addr_5 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_5, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r30));
    goto loc_804797E0;
}

loc_804797AC:
{
}

loc_804797B0:
{
    if ((static_cast<uint32_t>(r16) != static_cast<uint32_t>(2))) {
        goto loc_804797C8;
    }
}

loc_804797B4:
{
    r3 = 3;
    ctx->lr = 0x804797BCu;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_2027 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_2027);
        r4 = static_cast<uint32_t>(regargs_result_80478000_2027 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r15_addr_6 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_6, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r24));
    goto loc_804797E0;
}

loc_804797C8:
{
}

loc_804797CC:
{
    if ((static_cast<uint32_t>(r16) != static_cast<uint32_t>(3))) {
        goto loc_80479A2C;
    }
}

loc_804797D0:
{
    r3 = 1;
    ctx->lr = 0x804797D8u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_258A = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_258A);
        r4 = static_cast<uint32_t>(regargs_result_80478000_258A >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r15_addr_7 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_7, r3);
    MemoryInline::FlatWrite8((r22 + 20), static_cast<uint8_t>(r25));
}

loc_804797E0:
{
    r15_addr_9 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_9);
}

loc_804797E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80479818;
    }
}

loc_804797EC:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r29));
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r15_addr_10 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_10);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead16((r4 + -2));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r15_addr_11 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_11);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r27));
    goto loc_80479828;
}

loc_80479818:
{
    r4 = (r14 + 14112);
    r3 = 458752;
    ctx->lr = 0x80479824u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047ABB0_2E23 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2E23);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2E23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r24));
}

loc_80479828:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
}

loc_80479838:
{
    r15_addr_14 = (r15 + r23);
    r6 = MemoryInline::FlatRead32(r15_addr_14);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead16((r6 + 2));
    r3 = (r6 + r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80479864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479924;
    }
}

loc_80479868:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r18 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80479874:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804798B8;
    }
}

loc_80479878:
{
    r0 = MemoryInline::FlatRead8((r22 + 23));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & 16776960);
    r15_addr_15 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_15);
    r0 = (r4 + r0);
    r18 = (r0 & 65535);
    ctx->lr = 0x80479890u;
    if constexpr (KnownRegArgsCpuCall<0x80496300u>(&func_80496300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_80496300_3B27 = func_80496300_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80496300_3B27);
        r4 = static_cast<uint32_t>(regargs_result_80496300_3B27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80496300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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

loc_80479894:
{
    r15_addr_16 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_16, r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804798B8;
    }
}

loc_8047989C:
{
}

loc_804798A0:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r18));
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_804798B0;
    }
}

loc_804798A8:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    goto loc_80479A2C;
}

loc_804798B0:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    goto loc_80479A2C;
}

loc_804798B8:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r18));
    r15_addr_18 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_18);
    // inline leaf 0x80478260 (17 guest instruction(s))
}

loc_inl2_0x80478260:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
}

loc_inl2_0x80478268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80478274;
    }
}

loc_inl2_0x8047826C:
{
    r3 = 0;
    goto loc_inl2_cont_80478260;
}

loc_inl2_0x80478274:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl2_0x8047827C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_inl2_0x8047829C;
    }
}

loc_inl2_0x80478280:
{
    r3 = 0x80710000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & 4080);
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_inl2_cont_80478260;
}

loc_inl2_0x8047829C:
{
    r3 = 0;
}

loc_inl2_cont_80478260:
{
    // end of inlined leaf 0x80478260
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r4 = (r3 & 65535);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    r3 = (r18 + r0);
    r0 = (r3 + 8);
}

loc_804798E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_80479908;
    }
}

loc_804798E4:
{
    r15_addr_19 = (r15 + r23);
    r3 = MemoryInline::FlatRead32(r15_addr_19);
    ctx->lr = 0x804798ECu;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_4AC1 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_4AC1);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_4AC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r15_addr_20 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_20, r29);
    r3 = 0x80610000u;
    r4 = (r3 + 14172);
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    r3 = 458752;
    ctx->lr = 0x80479904u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047ABB0_4F11 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_4F11);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_4F11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80479A2C;
}

loc_80479908:
{
}

loc_8047990C:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80479918;
    }
}

loc_80479910:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r25));
    goto loc_80479A2C;
}

loc_80479918:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    r17 = 1;
    goto loc_80479A2C;
}

loc_80479924:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r22 + 23), static_cast<uint8_t>(r0));
    goto loc_80479A2C;
}

loc_80479930:
{
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80479940:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479970;
    }
}

loc_80479944:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80479950:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80479964;
    }
}

loc_80479954:
{
    r0 = MemoryInline::FlatRead8((r22 + 23));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 16776960);
    r0 = (r3 + r0);
    r3 = (r0 & 65535);
}

loc_80479964:
{
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r30));
    goto loc_80479A2C;
}

loc_80479970:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r22 + 23), static_cast<uint8_t>(r0));
    goto loc_80479A2C;
}

loc_8047997C:
{
    r15_addr_2 = (r15 + r23);
    r7 = MemoryInline::FlatRead32(r15_addr_2);
    r3 = (r20 & 255);
    r6 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead16((r7 + 2));
    r4 = (r7 + r5);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r15_addr_3 = (r15 + r23);
    r4 = MemoryInline::FlatRead32(r15_addr_3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    // inline leaf 0x8047A6D0 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8047A6D0
    r15_addr_4 = (r15 + r23);
    r4 = MemoryInline::FlatRead32(r15_addr_4);
    r19 = (r19 + r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804799E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479A2C;
    }
}

loc_804799E8:
{
    r0 = MemoryInline::FlatRead8((r22 + 20));
}

loc_804799F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80479A08;
    }
}

loc_804799F4:
{
    if constexpr (KnownRegArgsCpuCall<0x804964D0u>(&func_804964D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        const auto regargs_result_804964D0_62DE = func_804964D0_ra50_0_10_0(ctx, r4, r6);
        r4 = regargs_result_804964D0_62DE;
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804964D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_804799FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479A08;
    }
}

loc_80479A00:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    goto loc_80479A2C;
}

loc_80479A08:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
    r17 = 1;
    goto loc_80479A2C;
}

loc_80479A14:
{
    r3 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80479A24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479A2C;
    }
}

loc_80479A28:
{
    MemoryInline::FlatWrite8((r22 + 26), static_cast<uint8_t>(r29));
}

loc_80479A2C:
{
}

loc_80479A30:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80479740;
    }
}

loc_80479A34:
{
    r3 = MemoryInline::FlatRead8((r31 + 31));
    r4 = 0;
    r15_addr_22 = (r15 + r23);
    r5 = MemoryInline::FlatRead32(r15_addr_22);
    ctx->lr = 0x80479A44u;
    if constexpr (KnownRegArgsCpuCall<0x804782B0u>(&func_804782B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804782B0_6A60 = func_804782B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804782B0_6A60);
        r4 = static_cast<uint32_t>(regargs_result_804782B0_6A60 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804782B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r15_addr_23 = (r15 + r23);
    MemoryInline::FlatWrite32(r15_addr_23, r29);
    goto loc_80479740;
}

loc_80479A4C:
{
    r3 = r19;
}

loc_80479A50:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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

extern "C" void func_804796D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804796D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804796D0 func_804796D0 preserves=true fpr_mask=0x00000000
