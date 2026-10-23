#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AB49C(CpuContext* ctx);
extern "C" uint64_t func_803AB49C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB678(CpuContext* ctx);
extern "C" uint64_t func_803AB678_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB870(CpuContext* ctx);
extern "C" uint64_t func_803AB870_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B5E90(CpuContext* ctx);
extern "C" uint64_t func_803B5E90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803AB978_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803AB978;

loc_803AB978:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = r4;
    r3 = (r1 + 8);
    r4 = 0x80600000u;
    r4 = (r4 + -32144);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x803AB9B8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB49Cu>(&func_803AB49C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803AB49C_84D = func_803AB49C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB49C_84D);
        r4 = static_cast<uint32_t>(regargs_result_803AB49C_84D >> 32);
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
        InvokeDirectCpu<0x803AB49Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x803AB9BCu;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_BDA = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_BDA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r3 = 0x806C0000u;
    r3 = (r3 + 31192);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31384);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31576);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31768);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 & 255);
}

loc_803ABA18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803ABBC0;
    }
}

loc_803ABA1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 8388608);
}

loc_803ABA2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABA54;
    }
}

loc_803ABA30:
{
    ctx->lr = 0x803ABA34u;
    if constexpr (KnownRegArgsCpuCall<0x803B5E90u>(&func_803B5E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B5E90_13BC = func_803B5E90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B5E90_13BC);
        r4 = static_cast<uint32_t>(regargs_result_803B5E90_13BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B5E90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ABA38:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803ABA54;
    }
}

loc_803ABA3C:
{
    r3 = r31;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x803ABA4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_803ABA50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ABAE8;
    }
}

loc_803ABA54:
{
    r4 = (r31 + 156);
    r3 = 0;
    goto loc_803ABA6C;
}

loc_803ABA60:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r3 = (r3 + r0);
    r4 = (r4 + 4);
}

loc_803ABA6C:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803ABA74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABA60;
    }
}

loc_803ABA78:
{
    r7 = (r3 & 65535);
}

loc_803ABA80:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABA9C;
    }
}

loc_803ABA84:
{
    r3 = (r1 + 8);
    r4 = (r31 + 156);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r6 = 8;
    ctx->lr = 0x803ABA9Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AB678u>(&func_803AB678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB678_1C0E = func_803AB678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB678_1C0E);
        r4 = static_cast<uint32_t>(regargs_result_803AB678_1C0E >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABA9C:
{
    r3 = (r31 + 200);
    r4 = 0;
    goto loc_803ABAB4;
}

loc_803ABAA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4 = (r4 + r0);
    r3 = (r3 + 4);
}

loc_803ABAB4:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803ABABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABAA8;
    }
}

loc_803ABAC0:
{
    r7 = (r4 & 65535);
}

loc_803ABAC8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABAE8;
    }
}

loc_803ABACC:
{
    r3 = (r1 + 16);
    r4 = (r31 + 200);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r5 = (r5 + 32);
    r6 = 8;
    ctx->lr = 0x803ABAE8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB870u>(&func_803AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB870_228E = func_803AB870_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB870_228E);
        r4 = static_cast<uint32_t>(regargs_result_803AB870_228E >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABAE8:
{
    r3 = (r1 + 8);
    r4 = (r13 + -22560);
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x803ABB08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_803ABB0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ABB5C;
    }
}

loc_803ABB10:
{
    r3 = (r31 + 252);
    r4 = 0;
    goto loc_803ABB28;
}

loc_803ABB1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4 = (r4 + r0);
    r3 = (r3 + 4);
}

loc_803ABB28:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803ABB30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABB1C;
    }
}

loc_803ABB34:
{
    r7 = (r4 & 65535);
}

loc_803ABB3C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABB5C;
    }
}

loc_803ABB40:
{
    r3 = (r1 + 8);
    r4 = (r31 + 252);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r5 = (r5 + 128);
    r6 = 4;
    ctx->lr = 0x803ABB5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AB870u>(&func_803AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB870_2C0F = func_803AB870_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB870_2C0F);
        r4 = static_cast<uint32_t>(regargs_result_803AB870_2C0F >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABB5C:
{
    r3 = r31;
    r4 = 2;
    r5 = 1;
    ctx->lr = 0x803ABB6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_803ABB70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ABBC0;
    }
}

loc_803ABB74:
{
    r3 = (r31 + 348);
    r4 = 0;
    goto loc_803ABB8C;
}

loc_803ABB80:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4 = (r4 + r0);
    r3 = (r3 + 4);
}

loc_803ABB8C:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803ABB94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABB80;
    }
}

loc_803ABB98:
{
    r7 = (r4 & 65535);
}

loc_803ABBA0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABBC0;
    }
}

loc_803ABBA4:
{
    r3 = (r1 + 8);
    r4 = (r31 + 348);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r5 = (r5 + 144);
    r6 = 4;
    ctx->lr = 0x803ABBC0u;
    if constexpr (KnownRegArgsCpuCall<0x803AB870u>(&func_803AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB870_34BA = func_803AB870_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB870_34BA);
        r4 = static_cast<uint32_t>(regargs_result_803AB870_34BA >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABBC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AB978(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AB978_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AB978 func_803AB978 preserves=true fpr_mask=0x00000000
