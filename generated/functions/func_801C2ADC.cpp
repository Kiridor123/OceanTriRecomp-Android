#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80137F44(CpuContext* ctx);
extern "C" uint64_t func_80137F44_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801C2ADC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;

    goto loc_801C2ADC;

loc_801C2ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801C2AF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801C2BD8;
    }
}

loc_801C2AFC:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_801C2B04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B08:
{
    r0 = MemoryInline::FlatRead8((r31 + 485));
}

loc_801C2B10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B14:
{
    r3 = r31;
    ctx->lr = 0x801C2B1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_960 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_960);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_960 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801C2B20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2B28;
    }
}

loc_801C2B24:
{
    goto loc_801C2BD8;
}

loc_801C2B28:
{
    r0 = MemoryInline::FlatRead8((r31 + 483));
}

loc_801C2B30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801C2B80;
    }
}

loc_801C2B34:
{
    r0 = MemoryInline::FlatRead8((r31 + 572));
}

loc_801C2B3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B40:
{
    r3 = r31;
    r4 = 3;
    r5 = 24;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801C2B54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B58:
{
    r3 = r31;
    r4 = 3;
    r5 = 24;
    r6 = 0;
    ctx->lr = 0x801C2B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80128624u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r31;
    ctx->lr = 0x801C2B74u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_156A = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_156A);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_156A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    goto loc_801C2BD8;
}

loc_801C2B80:
{
}

loc_801C2B84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B88:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801C2B94u;
    if constexpr (KnownRegArgsCpuCall<0x80137F44u>(&func_80137F44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137F44_1A40 = func_80137F44_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80137F44_1A40);
        r4 = static_cast<uint32_t>(regargs_result_80137F44_1A40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80137F44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801C2B98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_801C2BD8;
    }
}

loc_801C2B9C:
{
    r3 = r31;
    r4 = 3;
    r5 = 44;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl3_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl3_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl3_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D290:
{
    r3 = 1;
    goto loc_inl3_cont_8012D270;
}

loc_inl3_0x8012D298:
{
    r3 = 0;
}

loc_inl3_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801C2BB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801C2BD8;
    }
}

loc_801C2BB4:
{
    r3 = r31;
    r4 = 3;
    r5 = 44;
    r6 = 0;
    ctx->lr = 0x801C2BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80128624u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r31;
    ctx->lr = 0x801C2BD0u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_26A1 = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_26A1);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_26A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
}

loc_801C2BD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801C2ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801C2ADC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C2ADC func_801C2ADC preserves=true fpr_mask=0x00000000
