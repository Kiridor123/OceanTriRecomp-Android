#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041F00(CpuContext* ctx);
extern "C" uint64_t func_80041F00_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800450AC(CpuContext* ctx);
extern "C" uint32_t func_800450AC_ra70_4_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804A54C0(CpuContext* ctx);
extern "C" uint64_t func_804A54C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EDBB0(CpuContext* ctx);
extern "C" uint64_t func_804EDBB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDC60(CpuContext* ctx);
extern "C" uint64_t func_804EDC60_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDC80(CpuContext* ctx);
extern "C" uint64_t func_804EDC80_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDC90(CpuContext* ctx);
extern "C" uint64_t func_804EDC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EF000(CpuContext* ctx);
extern "C" uint64_t func_804EF000_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804EF160(CpuContext* ctx);
extern "C" uint64_t func_804EF160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80041B08_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    uint32_t cr = ctx->cr;

    goto loc_80041B08;

loc_80041B08:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    ctx->lr = 0x80041B20u;
    if constexpr (KnownRegArgsCpuCall<0x804A54C0u>(&func_804A54C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804A54C0_FFF = func_804A54C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A54C0_FFF);
        r4 = static_cast<uint32_t>(regargs_result_804A54C0_FFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x804A54C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead32((r13 + -17892));
}

loc_80041B28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80041B64;
    }
}

loc_80041B2C:
{
    r3 = 0x90310000u;
    r3 = (r3 + -32768);
    r4 = 262144;
    ctx->lr = 0x80041B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80041F00u>(&func_80041F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->cr = cr;
        const auto regargs_result_80041F00_1876 = func_80041F00_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80041F00_1876);
        r4 = static_cast<uint32_t>(regargs_result_80041F00_1876 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80041F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    MemoryInline::FlatWrite32((r13 + -17892), r3);
}

loc_80041B44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80041B64;
    }
}

loc_80041B48:
{
    r3 = 0x80580000u;
    r3 = (r3 + 5808);
    r4 = 464;
    r5 = 0x80580000u;
    r5 = (r5 + 5820);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80041B64u;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
}

loc_80041B64:
{
    r3 = 0x80670000u;
    r3 = (r3 + -18200);
    r4 = MemoryInline::FlatRead32((r13 + -17892));
    r5 = 32;
    // inline leaf 0x804C2B20 (7 guest instruction(s))
    r6 = (r2 + -2096);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r6);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x804C2B20
    r3 = 0x80040000u;
    r3 = (r3 + 6856);
    r4 = 0x80040000u;
    r4 = (r4 + 6872);
    ctx->lr = 0x80041B8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC90u>(&func_804EDC90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EDC90_262D = func_804EDC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804EDC90_262D);
        r4 = static_cast<uint32_t>(regargs_result_804EDC90_262D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->lr = 0x80041B90u;
    if constexpr (KnownRegArgsCpuCall<0x804EDBB0u>(&func_804EDBB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804EDBB0_29E1 = func_804EDBB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDBB0_29E1);
        r4 = static_cast<uint32_t>(regargs_result_804EDBB0_29E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x804EDBB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    ctx->lr = 0x80041B94u;
    if constexpr (KnownRegArgsCpuCall<0x800450ACu>(&func_800450AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_800450AC_3131 = func_800450AC_ra70_4_10_0(ctx, r4, r5, r6, f2.d);
        r4 = regargs_result_800450AC_3131;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800450ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r25 = 0;
    r31 = 0x80040000u;
}

loc_80041B9C:
{
    r3 = r25;
    r4 = (r31 + 13596);
    ctx->lr = 0x80041BA8u;
    if constexpr (KnownRegArgsCpuCall<0x804EF160u>(&func_804EF160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804EF160_36AA = func_804EF160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF160_36AA);
        r4 = static_cast<uint32_t>(regargs_result_804EF160_36AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x804EF160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r25 = (r25 + 1);
}

loc_80041BB0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80041B9C;
    }
}

loc_80041BB4:
{
    r3 = 0x80040000u;
    r3 = (r3 + 14604);
    ctx->lr = 0x80041BC0u;
    if constexpr (KnownRegArgsCpuCall<0x804EDC60u>(&func_804EDC60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804EDC60_3E64 = func_804EDC60_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDC60_3E64);
        r4 = static_cast<uint32_t>(regargs_result_804EDC60_3E64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 0x80040000u;
    r3 = (r3 + 14620);
    ctx->lr = 0x80041BCCu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC80u>(&func_804EDC80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804EDC80_4338 = func_804EDC80_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDC80_4338);
        r4 = static_cast<uint32_t>(regargs_result_804EDC80_4338 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 5;
    ctx->lr = 0x80041BD4u;
    if constexpr (KnownRegArgsCpuCall<0x804EF000u>(&func_804EF000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EF000_4805 = func_804EF000_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF000_4805);
        r4 = static_cast<uint32_t>(regargs_result_804EF000_4805 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EF000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 0x80580000u;
    r4 = (r3 + 5712);
    r3 = 0x80660000u;
    r3 = (r3 + -11600);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    r3 = 0x80580000u;
    r4 = (r3 + 5744);
    r3 = 0x80660000u;
    r3 = (r3 + -11568);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, r4);
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_4, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_4, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_4, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_4, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_4, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_4, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_4, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    r3 = 0x80580000u;
    r4 = (r3 + 5776);
    r3 = 0x80660000u;
    r3 = (r3 + -11536);
    guest_range_5 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_5, 0u, r4);
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_6, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_6, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_6, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_6, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_6, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_6, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_6, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_6, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_6, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_6, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_6, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_6, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    r25 = 0;
    r3 = 0x80660000u;
    r30 = (r3 + -18480);
    r3 = 0x80660000u;
    r29 = (r3 + -15088);
    r3 = 0x80660000u;
    r28 = (r3 + -11696);
    r31 = 3;
}

loc_80041DA4:
{
    r3 = r30;
    r4 = 0;
    r5 = 848;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 0;
    r5 = 848;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r28;
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r24 = 0;
    r27 = (r30 + 484);
    r26 = (r30 + 292);
}

loc_80041DE0:
{
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
    r3 = r27;
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
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r27 = (r27 + 12);
    r26 = (r26 + 12);
    r24 = (r24 + 1);
}

loc_80041E30:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(16))) {
        goto loc_80041DE0;
    }
}

loc_80041E34:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r30 + 740), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r30 + 740), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r30 + 741), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r30 + 742), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r30 + 743), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r30 + 744), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r30 + 745), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r30 + 746), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r30 + 747), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 8u, (r30 + 748), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 9u, (r30 + 749), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 10u, (r30 + 750), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 11u, (r30 + 751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 12u, (r30 + 752), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 13u, (r30 + 753), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 14u, (r30 + 754), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_8, 15u, (r30 + 755), static_cast<uint8_t>(r31));
    r30 = (r30 + 848);
    r29 = (r29 + 848);
    r28 = (r28 + 24);
    r25 = (r25 + 1);
}

loc_80041E88:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80041DA4;
    }
}

loc_80041E8C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_7 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80041B08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80041B08_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80041B08 func_80041B08 preserves=true fpr_mask=0x00000000
