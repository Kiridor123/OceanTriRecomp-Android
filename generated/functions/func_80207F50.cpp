#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE1A0(CpuContext* ctx);
extern "C" uint64_t func_801FE1A0_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_801FE518(CpuContext* ctx);
extern "C" uint32_t func_801FE518_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80207F10(CpuContext* ctx);
extern "C" uint64_t func_80207F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80208034(CpuContext* ctx);
extern "C" uint64_t func_80208034_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_80207F50_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80207F50;

loc_80207F50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80207F68u;
    if constexpr (KnownRegArgsCpuCall<0x801FE518u>(&func_801FE518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_801FE518_71F = func_801FE518_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801FE518_71F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801FE518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80207F6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80208020;
    }
}

loc_80207F70:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80207F10u>(&func_80207F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80207F10_A27 = func_80207F10_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80207F10_A27);
        r4 = static_cast<uint32_t>(regargs_result_80207F10_A27 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80207F10u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = 0x806B0000u;
    r0 = (r4 + -12348);
    r4 = (r3 & 255);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 122));
}

loc_80207F90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80208020;
    }
}

loc_80207F94:
{
    r3 = MemoryInline::FlatRead8((r31 + 564));
}

loc_80207F9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80208020;
    }
}

loc_80207FA0:
{
    MemoryInline::FlatWrite8((r31 + 564), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 520), static_cast<uint16_t>(r0));
}

loc_80207FB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80207FC8;
    }
}

loc_80207FB4:
{
}

loc_80207FB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80207FDC;
    }
}

loc_80207FBC:
{
}

loc_80207FC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80207FF0;
    }
}

loc_80207FC4:
{
    goto loc_80208000;
}

loc_80207FC8:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_80208010;
}

loc_80207FDC:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_80208010;
}

loc_80207FF0:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead32((r3 + -13352));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_80208010;
}

loc_80208000:
{
    r3 = r31;
    r5 = 1;
    ctx->lr = 0x8020800Cu;
    if constexpr (KnownRegArgsCpuCall<0x80208034u>(&func_80208034)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80208034_1369 = func_80208034_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80208034_1369);
        r4 = static_cast<uint32_t>(regargs_result_80208034_1369 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80208034u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80208020;
}

loc_80208010:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 516));
    r4 = MemoryInline::FlatRead16((r4 + 12));
    ctx->lr = 0x80208020u;
    if constexpr (KnownRegArgsCpuCall<0x801FE1A0u>(&func_801FE1A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE1A0_198E = func_801FE1A0_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801FE1A0_198E);
        r4 = static_cast<uint32_t>(regargs_result_801FE1A0_198E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801FE1A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80208020:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_80207F50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80207F50_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80207F50 func_80207F50 preserves=true fpr_mask=0x00000000
