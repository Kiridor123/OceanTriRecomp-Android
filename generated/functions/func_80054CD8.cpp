#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052940(CpuContext* ctx);
extern "C" uint64_t func_80052940_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052C24(CpuContext* ctx);
extern "C" uint64_t func_80052C24_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052DFC(CpuContext* ctx);
extern "C" uint64_t func_80052DFC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052E94(CpuContext* ctx);
extern "C" uint64_t func_80052E94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052EB8(CpuContext* ctx);
extern "C" uint64_t func_80052EB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053514(CpuContext* ctx);
extern "C" uint64_t func_80053514_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053A18(CpuContext* ctx);
extern "C" uint64_t func_80053A18_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8009A4F4(CpuContext* ctx);
extern "C" uint64_t func_8009A4F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009A628(CpuContext* ctx);
extern "C" uint64_t func_8009A628_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80054CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80054CD8;

loc_80054CD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r26 = r4;
    r27 = r5;
    r3 = (r3 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80053A18u>(&func_80053A18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053A18_AF7 = func_80053A18_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80053A18_AF7);
        r4 = static_cast<uint32_t>(regargs_result_80053A18_AF7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053A18u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r28 & 65535);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    r3 = (r1 + 28);
    r4 = 0x80670000u;
    r28 = (r4 + -12896);
    r4 = (r28 + r29);
    r4 = MemoryInline::FlatRead32((r4 + 600));
    ctx->lr = 0x80054D20u;
    if constexpr (KnownRegArgsCpuCall<0x80052C24u>(&func_80052C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052C24_EA7 = func_80052C24_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052C24_EA7);
        r4 = static_cast<uint32_t>(regargs_result_80052C24_EA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80052C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 24);
    r4 = (r28 + r29);
    r4 = MemoryInline::FlatRead32((r4 + 732));
    ctx->lr = 0x80054D30u;
    if constexpr (KnownRegArgsCpuCall<0x80053514u>(&func_80053514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053514_1224 = func_80053514_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053514_1224);
        r4 = static_cast<uint32_t>(regargs_result_80053514_1224 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r28 + 248);
    MemoryInline::FlatWrite32(r26, r0);
    r0 = (r28 + 504);
    MemoryInline::FlatWrite32(r27, r0);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r28 + 216), r29);
    MemoryInline::FlatWriteRam32((r28 + 212), r29);
    r3 = (r1 + 28);
    ctx->lr = 0x80054D54u;
    if constexpr (KnownRegArgsCpuCall<0x80052940u>(&func_80052940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80052940_168B = func_80052940_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052940_168B);
        r4 = static_cast<uint32_t>(regargs_result_80052940_168B >> 32);
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
        InvokeDirectCpu<0x80052940u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80054D58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80054E04;
    }
}

loc_80054D5C:
{
    r3 = (r1 + 24);
    // inline leaf 0x80052F54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80052F54
}

loc_80054D68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80054D74;
    }
}

loc_80054D6C:
{
    MemoryInline::FlatWrite32(r27, r29);
    goto loc_80054E50;
}

loc_80054D74:
{
    r3 = (r1 + 24);
    ctx->lr = 0x80054D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80052DFCu>(&func_80052DFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80052DFC_1D52 = func_80052DFC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052DFC_1D52);
        r4 = static_cast<uint32_t>(regargs_result_80052DFC_1D52 >> 32);
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
        InvokeDirectCpu<0x80052DFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r30 = (r3 & 65535);
    r3 = (r1 + 24);
    ctx->lr = 0x80054D88u;
    if constexpr (KnownRegArgsCpuCall<0x80052E94u>(&func_80052E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80052E94_217C = func_80052E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052E94_217C);
        r4 = static_cast<uint32_t>(regargs_result_80052E94_217C >> 32);
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
        InvokeDirectCpu<0x80052E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
    r3 = (r1 + 24);
    ctx->lr = 0x80054D94u;
    if constexpr (KnownRegArgsCpuCall<0x80052EB8u>(&func_80052EB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80052EB8_259C = func_80052EB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052EB8_259C);
        r4 = static_cast<uint32_t>(regargs_result_80052EB8_259C >> 32);
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
        InvokeDirectCpu<0x80052EB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32(r27);
    r5 = r31;
    r6 = r30;
    ctx->lr = 0x80054DA8u;
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
    InvokeDirectCpu<0x804B8E00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 0;
    ctx->lr = 0x80054DB4u;
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
    InvokeDirectCpu<0x804B8E30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r3 = (r1 + 28);
    r4 = (r1 + 48);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 40);
    r8 = (r1 + 36);
    r9 = (r1 + 32);
    r10 = (r1 + 16);
    ctx->lr = 0x80054DD8u;
    if constexpr (KnownRegArgsCpuCall<0x8009A628u>(&func_8009A628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_8009A628_2F9A = func_8009A628_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A628_2F9A);
        r4 = static_cast<uint32_t>(regargs_result_8009A628_2F9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8009A628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r3 = MemoryInline::FlatRead32(r26);
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = MemoryInline::FlatRead16((r1 + 20));
    r6 = MemoryInline::FlatRead16((r1 + 18));
    r7 = MemoryInline::FlatRead32((r1 + 40));
    r8 = MemoryInline::FlatRead32((r28 + 212));
    r9 = MemoryInline::FlatRead32((r28 + 216));
    r10 = MemoryInline::FlatRead8((r1 + 16));
    ctx->lr = 0x80054E00u;
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
    InvokeDirectCpu<0x804B88B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    goto loc_80054E50;
}

loc_80054E04:
{
    MemoryInline::FlatWrite32(r27, r29);
    r3 = (r1 + 28);
    r4 = (r1 + 48);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 44);
    r8 = (r1 + 36);
    r9 = (r1 + 32);
    r10 = (r1 + 16);
    ctx->lr = 0x80054E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8009A4F4u>(&func_8009A4F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_8009A4F4_3989 = func_8009A4F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A4F4_3989);
        r4 = static_cast<uint32_t>(regargs_result_8009A4F4_3989 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8009A4F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32(r26);
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = MemoryInline::FlatRead16((r1 + 20));
    r6 = MemoryInline::FlatRead16((r1 + 18));
    r7 = MemoryInline::FlatRead32((r1 + 44));
    r8 = MemoryInline::FlatRead32((r28 + 212));
    r9 = MemoryInline::FlatRead32((r28 + 216));
    r10 = MemoryInline::FlatRead8((r1 + 16));
    ctx->lr = 0x80054E50u;
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
    InvokeDirectCpu<0x804B86A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
}

loc_80054E50:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80054CD8 func_80054CD8 preserves=true fpr_mask=0x00000000
