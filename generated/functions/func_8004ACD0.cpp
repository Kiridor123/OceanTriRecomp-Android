#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AADC(CpuContext* ctx);
extern "C" uint64_t func_8004AADC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004AB48(CpuContext* ctx);
extern "C" uint64_t func_8004AB48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004ABF0(CpuContext* ctx);
extern "C" uint64_t func_8004ABF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004AC64(CpuContext* ctx);
extern "C" uint64_t func_8004AC64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004ACD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004ACD0;

loc_8004ACD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 16);
    ctx->lr = 0x8004ACECu;
    if constexpr (KnownRegArgsCpuCall<0x8004ABF0u>(&func_8004ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004ABF0_57A = func_8004ABF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004ABF0_57A);
        r4 = static_cast<uint32_t>(regargs_result_8004ABF0_57A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004ABF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 28);
    ctx->lr = 0x8004ACF4u;
    if constexpr (KnownRegArgsCpuCall<0x8004AC64u>(&func_8004AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AC64_8B1 = func_8004AC64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AC64_8B1);
        r4 = static_cast<uint32_t>(regargs_result_8004AC64_8B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AC64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 40);
    ctx->lr = 0x8004ACFCu;
    if constexpr (KnownRegArgsCpuCall<0x8004AC64u>(&func_8004AC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AC64_BE8 = func_8004AC64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AC64_BE8);
        r4 = static_cast<uint32_t>(regargs_result_8004AC64_BE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AC64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 5;
    r4 = (r31 + 52);
    ctx->lr = 0x8004AD08u;
    if constexpr (KnownRegArgsCpuCall<0x8004AADCu>(&func_8004AADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AADC_F2C = func_8004AADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AADC_F2C);
        r4 = static_cast<uint32_t>(regargs_result_8004AADC_F2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    r4 = (r31 + 64);
    ctx->lr = 0x8004AD14u;
    if constexpr (KnownRegArgsCpuCall<0x8004AADCu>(&func_8004AADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AADC_1270 = func_8004AADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AADC_1270);
        r4 = static_cast<uint32_t>(regargs_result_8004AADC_1270 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 3;
    r4 = (r31 + 76);
    ctx->lr = 0x8004AD20u;
    if constexpr (KnownRegArgsCpuCall<0x8004AADCu>(&func_8004AADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AADC_15B7 = func_8004AADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AADC_15B7);
        r4 = static_cast<uint32_t>(regargs_result_8004AADC_15B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 2;
    r4 = (r31 + 88);
    ctx->lr = 0x8004AD2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AADCu>(&func_8004AADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AADC_18FE = func_8004AADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AADC_18FE);
        r4 = static_cast<uint32_t>(regargs_result_8004AADC_18FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 4;
    r4 = (r31 + 100);
    ctx->lr = 0x8004AD38u;
    if constexpr (KnownRegArgsCpuCall<0x8004AADCu>(&func_8004AADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AADC_1C46 = func_8004AADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AADC_1C46);
        r4 = static_cast<uint32_t>(regargs_result_8004AADC_1C46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 112);
    ctx->lr = 0x8004AD40u;
    if constexpr (KnownRegArgsCpuCall<0x8004AB48u>(&func_8004AB48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AB48_1F81 = func_8004AB48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AB48_1F81);
        r4 = static_cast<uint32_t>(regargs_result_8004AB48_1F81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AB48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8004AD48:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(11))) {
        goto loc_8004AD54;
    }
}

loc_8004AD4C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_8004AD54:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_8004AD5C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8004AD68;
    }
}

loc_8004AD60:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_8004AD68:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8004AD70:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8004AD7C;
    }
}

loc_8004AD74:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
}

loc_8004AD7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_8004AD84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8004AD90;
    }
}

loc_8004AD88:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
}

loc_8004AD90:
{
    r0 = MemoryInline::FlatRead8((r31 + 149));
}

loc_8004AD98:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8004ADA4;
    }
}

loc_8004AD9C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 149), static_cast<uint8_t>(r0));
}

loc_8004ADA4:
{
    r0 = MemoryInline::FlatRead8((r31 + 150));
}

loc_8004ADAC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(9))) {
        goto loc_8004ADB8;
    }
}

loc_8004ADB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 150), static_cast<uint8_t>(r0));
}

loc_8004ADB8:
{
    r0 = MemoryInline::FlatRead8((r31 + 153));
}

loc_8004ADC0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(13))) {
        goto loc_8004ADCC;
    }
}

loc_8004ADC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 153), static_cast<uint8_t>(r0));
}

loc_8004ADCC:
{
    r0 = MemoryInline::FlatRead8((r31 + 151));
}

loc_8004ADD4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_8004ADE0;
    }
}

loc_8004ADD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 151), static_cast<uint8_t>(r0));
}

loc_8004ADE0:
{
    r0 = MemoryInline::FlatRead8((r31 + 152));
}

loc_8004ADE8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10))) {
        goto loc_8004ADF4;
    }
}

loc_8004ADEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 152), static_cast<uint8_t>(r0));
}

loc_8004ADF4:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_8004ADFC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_8004AE08;
    }
}

loc_8004AE00:
{
    r0 = 999;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_8004AE08:
{
    r0 = MemoryInline::FlatRead8((r31 + 242));
}

loc_8004AE10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(117))) {
        goto loc_8004AE1C;
    }
}

loc_8004AE14:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 242), static_cast<uint8_t>(r0));
}

loc_8004AE1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 243));
}

loc_8004AE24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8004AE30;
    }
}

loc_8004AE28:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 243), static_cast<uint8_t>(r0));
}

loc_8004AE30:
{
    r0 = MemoryInline::FlatRead8((r31 + 154));
}

loc_8004AE38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8004AE48;
    }
}

loc_8004AE3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 155));
}

loc_8004AE44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(100))) {
        goto loc_8004AE58;
    }
}

loc_8004AE48:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 154), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 155), static_cast<uint8_t>(r0));
}

loc_8004AE58:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004ACD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004ACD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004ACD0 func_8004ACD0 preserves=true fpr_mask=0x00000000
