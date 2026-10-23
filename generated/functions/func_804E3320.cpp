#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD060(CpuContext* ctx);
extern "C" uint64_t func_804CD060_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CD110(CpuContext* ctx);
extern "C" void func_804CD110_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_804E29F0(CpuContext* ctx);
extern "C" uint64_t func_804E29F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E2E80(CpuContext* ctx);
extern "C" uint64_t func_804E2E80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E37D0(CpuContext* ctx);
extern "C" void func_804E37D0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E3E50(CpuContext* ctx);
extern "C" void func_804E3E50_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E44F0(CpuContext* ctx);
extern "C" void func_804E44F0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E3320_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804E3320;

loc_804E3320:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x804CD110u>(&func_804CD110)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        func_804CD110_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CD110u>(ctx);
        r4 = ctx->gpr[4];
    }
    r26 = 0x80760000u;
    r28 = 0x80760000u;
    r27 = (r26 + -11136);
    r25 = 0;
    r30 = (r28 + -10816);
    r29 = 640;
    r31 = 320;
    r22 = 33;
    r23 = 0;
    goto loc_804E34D4;
}

loc_804E3364:
{
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r26 + -11136));
    if constexpr (KnownRegArgsCpuCall<0x804E37D0u>(&func_804E37D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E37D0_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E37D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r27 + 4));
    if constexpr (KnownRegArgsCpuCall<0x804E37D0u>(&func_804E37D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E37D0_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E37D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r27 + 8));
    if constexpr (KnownRegArgsCpuCall<0x804E37D0u>(&func_804E37D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E37D0_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E37D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r27 + 12));
    if constexpr (KnownRegArgsCpuCall<0x804E37D0u>(&func_804E37D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E37D0_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E37D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r27 + 16));
    if constexpr (KnownRegArgsCpuCall<0x804E3E50u>(&func_804E3E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E3E50_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E3E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r27 + 20));
    if constexpr (KnownRegArgsCpuCall<0x804E44F0u>(&func_804E44F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        func_804E44F0_ra38_0_0_0(ctx, r3, r4, r5);
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
        InvokeDirectCpu<0x804E44F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead32((r28 + -10816));
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
    r24 = (r24_rot_2 & 4080);
    MemoryInline::FlatWrite32((r13 + -14624), r0);
    r4 = r24;
    r5 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite32((r13 + -14656), r29);
    r3 = MemoryInline::FlatRead32((r26 + -11136));
    r0 = MemoryInline::FlatRead8((r5 + 1664));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -14688), r0);
    if constexpr (KnownRegArgsCpuCall<0x804E29F0u>(&func_804E29F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E29F0_22CC = func_804E29F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E29F0_22CC);
        r4 = static_cast<uint32_t>(regargs_result_804E29F0_22CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E29F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r24 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804E29F0u>(&func_804E29F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E29F0_28D2 = func_804E29F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E29F0_28D2);
        r4 = static_cast<uint32_t>(regargs_result_804E29F0_28D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E29F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = r24;
    if constexpr (KnownRegArgsCpuCall<0x804E2E80u>(&func_804E2E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E2E80_2ED2 = func_804E2E80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E2E80_2ED2);
        r4 = static_cast<uint32_t>(regargs_result_804E2E80_2ED2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E2E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = (r24 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804E2E80u>(&func_804E2E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E2E80_34D9 = func_804E2E80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E2E80_34D9);
        r4 = static_cast<uint32_t>(regargs_result_804E2E80_34D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E2E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(31));
    r24 = (r24_rot_3 & 2147483647);
    MemoryInline::FlatWrite32((r13 + -14624), r0);
    r4 = r24;
    r5 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite32((r13 + -14656), r31);
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = MemoryInline::FlatRead8((r5 + 1670));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -14688), r0);
    if constexpr (KnownRegArgsCpuCall<0x804E29F0u>(&func_804E29F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E29F0_3D10 = func_804E29F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E29F0_3D10);
        r4 = static_cast<uint32_t>(regargs_result_804E29F0_3D10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E29F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r4 = r24;
    MemoryInline::FlatWrite32((r13 + -14624), r0);
    r5 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r0 = MemoryInline::FlatRead8((r5 + 1676));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -14688), r0);
    if constexpr (KnownRegArgsCpuCall<0x804E29F0u>(&func_804E29F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804E29F0_4494 = func_804E29F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E29F0_4494);
        r4 = static_cast<uint32_t>(regargs_result_804E29F0_4494 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E29F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r0 = MemoryInline::FlatRead8((r4 + 1705));
}

loc_804E3464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E34D0;
    }
}

loc_804E3468:
{
    r3 = MemoryInline::FlatRead16((r4 + 1708));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 1708), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r0 = MemoryInline::FlatRead16((r3 + 1708));
}

loc_804E3480:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E34D0;
    }
}

loc_804E3484:
{
    r0 = MemoryInline::FlatRead16((r3 + 1706));
    MemoryInline::FlatWrite16((r3 + 1708), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1700));
    r0 = (r3 + 6);
    r3 = (r0 & -8);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1700), r0);
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r0 = MemoryInline::FlatRead32((r3 + 1700));
}

loc_804E34B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32))) {
        goto loc_804E34B8;
    }
}

loc_804E34B4:
{
    MemoryInline::FlatWrite32((r3 + 1700), r22);
}

loc_804E34B8:
{
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite16((r3 + 1668), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite16((r3 + 1674), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite16((r3 + 1680), static_cast<uint16_t>(r23));
}

loc_804E34D0:
{
    r25 = (r25 + 1);
}

loc_804E34D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = (r25 & 255);
    r0 = MemoryInline::FlatRead16((r3 + 1686));
}

loc_804E34E4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804E3364;
    }
}

loc_804E34E8:
{
    r24 = 0x80760000u;
    r3 = MemoryInline::FlatRead32((r3 + 1712));
    r4 = MemoryInline::FlatRead32((r24 + -10816));
    r5 = 10240;
    ctx->lr = 0x804E34FCu;
    if constexpr (KnownRegArgsCpuCall<0x804CD060u>(&func_804CD060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CD060_52D7 = func_804CD060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD060_52D7);
        r4 = static_cast<uint32_t>(regargs_result_804CD060_52D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r24 = (r24 + -10816);
    r4 = MemoryInline::FlatRead32((r24 + 4));
    r5 = 2560;
    r3 = MemoryInline::FlatRead32((r3 + 1716));
    ctx->lr = 0x804E3514u;
    if constexpr (KnownRegArgsCpuCall<0x804CD060u>(&func_804CD060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CD060_56BA = func_804CD060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD060_56BA);
        r4 = static_cast<uint32_t>(regargs_result_804CD060_56BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r5 = 2560;
    r4 = MemoryInline::FlatRead32((r24 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 1720));
    ctx->lr = 0x804E3528u;
    if constexpr (KnownRegArgsCpuCall<0x804CD060u>(&func_804CD060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CD060_5A82 = func_804CD060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD060_5A82);
        r4 = static_cast<uint32_t>(regargs_result_804CD060_5A82 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r11 = (r1 + 48);
    r3 = MemoryInline::FlatRead32((r4 + 1712));
    r0 = (r3 + 10240);
    MemoryInline::FlatWrite32((r4 + 1712), r0);
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1716));
    r0 = (r3 + 2560);
    MemoryInline::FlatWrite32((r4 + 1716), r0);
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1720));
    r0 = (r3 + 2560);
    MemoryInline::FlatWrite32((r4 + 1720), r0);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_804E3320(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E3320_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E3320 func_804E3320 preserves=true fpr_mask=0x00000000
