#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517320(CpuContext* ctx);
extern "C" uint32_t func_80517320_ra38_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8051732C(CpuContext* ctx);
extern "C" uint64_t func_8051732C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80520814(CpuContext* ctx);
extern "C" uint64_t func_80520814_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80517014_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80517014;

loc_80517014:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-96 - r11_subfic_ra_0);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    r11 = r12;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = (r4 & 31);
}

loc_80517038:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517054;
    }
}

loc_8051704C:
{
    r31 = (32 - r0);
    goto loc_80517058;
}

loc_80517054:
{
    r31 = 0;
}

loc_80517058:
{
    r3 = (r1 + 32);
    r30 = 0;
    r4 = 32;
    ctx->lr = 0x80517068u;
    if constexpr (KnownRegArgsCpuCall<0x8051732Cu>(&func_8051732C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8051732C_A9D = func_8051732C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8051732C_A9D);
        r4 = static_cast<uint32_t>(regargs_result_8051732C_A9D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8051732Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8051706C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_805170C8;
    }
}

loc_80517070:
{
}

loc_80517074:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r28))) {
        goto loc_8051707C;
    }
}

loc_80517078:
{
    r31 = r28;
}

loc_8051707C:
{
    r4 = r27;
    r5 = r31;
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x80517320u>(&func_80517320)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80517320_FD0 = func_80517320_ra38_1e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80517320_FD0;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80517320u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r26;
    r5 = r31;
    r6 = r29;
    r4 = (r1 + 32);
    ctx->lr = 0x805170A0u;
    if constexpr (KnownRegArgsCpuCall<0x80520814u>(&func_80520814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80520814_1557 = func_80520814_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520814_1557);
        r4 = static_cast<uint32_t>(regargs_result_80520814_1557 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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

loc_805170A4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80517190;
    }
}

loc_805170A8:
{
}

loc_805170AC:
{
    r30 = r3;
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r31))) {
        goto loc_805170B8;
    }
}

loc_805170B4:
{
    goto loc_80517190;
}

loc_805170B8:
{
    r27 = (r27 + r3);
    r28 = (r28 - r3);
}

loc_805170C8:
{
}

loc_805170CC:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_80517128;
    }
}

loc_805170D0:
{
    r31 = (r28 & -32);
}

loc_805170D4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80517128;
    }
}

loc_805170D8:
{
    r3 = r26;
    r4 = r27;
    r5 = r31;
    r6 = r29;
    ctx->lr = 0x805170ECu;
    if constexpr (KnownRegArgsCpuCall<0x80520814u>(&func_80520814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80520814_2026 = func_80520814_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520814_2026);
        r4 = static_cast<uint32_t>(regargs_result_80520814_2026 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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

loc_805170F0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80517114;
    }
}

loc_805170F4:
{
}

loc_805170F8:
{
    r30 = (r30 + r3);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r31))) {
        goto loc_80517108;
    }
}

loc_80517100:
{
    r3 = r30;
    goto loc_80517190;
}

loc_80517108:
{
    r27 = (r27 + r3);
    r28 = (r28 - r3);
    goto loc_80517128;
}

loc_80517114:
{
}

loc_80517118:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80517190;
    }
}

loc_8051711C:
{
    r3 = r30;
    goto loc_80517190;
}

loc_80517128:
{
}

loc_8051712C:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_8051718C;
    }
}

loc_80517130:
{
    r31 = (r28 & 31);
}

loc_80517134:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8051718C;
    }
}

loc_80517138:
{
    r3 = (r1 + 32);
    r4 = 32;
    ctx->lr = 0x80517144u;
    if constexpr (KnownRegArgsCpuCall<0x8051732Cu>(&func_8051732C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8051732C_2B85 = func_8051732C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8051732C_2B85);
        r4 = static_cast<uint32_t>(regargs_result_8051732C_2B85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8051732Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r27;
    r5 = r31;
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x80517320u>(&func_80517320)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80517320_2F68 = func_80517320_ra38_1e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80517320_2F68;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80517320u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r26;
    r5 = r31;
    r6 = r29;
    r4 = (r1 + 32);
    ctx->lr = 0x80517168u;
    if constexpr (KnownRegArgsCpuCall<0x80520814u>(&func_80520814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80520814_34F1 = func_80520814_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520814_34F1);
        r4 = static_cast<uint32_t>(regargs_result_80520814_34F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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

loc_8051716C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80517178;
    }
}

loc_80517170:
{
    r30 = (r30 + r3);
    goto loc_8051718C;
}

loc_80517178:
{
}

loc_8051717C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80517190;
    }
}

loc_80517180:
{
    r3 = r30;
    goto loc_80517190;
}

loc_8051718C:
{
    r3 = r30;
}

loc_80517190:
{
    r10 = MemoryInline::FlatRead32(r1);
    r11 = r10;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_80517014(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517014_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80517014 func_80517014 preserves=true fpr_mask=0x00000000
