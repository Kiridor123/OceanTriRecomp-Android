#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126E10(CpuContext* ctx);
extern "C" uint64_t func_80126E10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80126FE4(CpuContext* ctx);
extern "C" uint64_t func_80126FE4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80127328(CpuContext* ctx);
extern "C" uint64_t func_80127328_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_8013C844_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8013C844;

loc_8013C844:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8013C868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013C89C;
    }
}

loc_8013C86C:
{
}

loc_8013C870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013C8CC;
    }
}

loc_8013C874:
{
}

loc_8013C878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8013C940;
    }
}

loc_8013C87C:
{
}

loc_8013C880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013C9A0;
    }
}

loc_8013C884:
{
}

loc_8013C888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8013C9B8;
    }
}

loc_8013C88C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 2552), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2551), static_cast<uint8_t>(r0));
    goto loc_8013C9C4;
}

loc_8013C89C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 2552), static_cast<uint8_t>(r0));
}

loc_8013C8A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(253))) {
        goto loc_8013C8B4;
    }
}

loc_8013C8AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 511));
    MemoryInline::FlatWrite8((r3 + 2552), static_cast<uint8_t>(r0));
}

loc_8013C8B4:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r29 + 481));
    r5 = MemoryInline::FlatRead8((r29 + 2552));
    ctx->lr = 0x8013C8C4u;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126E10_B2A = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_B2A);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_B2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r29 + 2551), static_cast<uint8_t>(r3));
    goto loc_8013C9C4;
}

loc_8013C8CC:
{
    r31 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8013C8D4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(253))) {
        goto loc_8013C8DC;
    }
}

loc_8013C8D8:
{
    r31 = MemoryInline::FlatRead8((r3 + 511));
}

loc_8013C8DC:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r29 + 481));
    r5 = r31;
    ctx->lr = 0x8013C8ECu;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126E10_101C = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_101C);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_101C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r29 + 2551), static_cast<uint8_t>(r3));
    r30 = (r3 & 255);
    MemoryInline::FlatWrite8((r29 + 2552), static_cast<uint8_t>(r31));
    goto loc_8013C930;
}

loc_8013C8FC:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r29 + 480));
    r5 = (r30 & 255);
    ctx->lr = 0x8013C90Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126FE4u>(&func_80126FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126FE4_146B = func_80126FE4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126FE4_146B);
        r4 = static_cast<uint32_t>(regargs_result_80126FE4_146B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8013C910:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013C91C;
    }
}

loc_8013C914:
{
    MemoryInline::FlatWrite8((r29 + 2552), static_cast<uint8_t>(r30));
    goto loc_8013C9C4;
}

loc_8013C91C:
{
    r3 = r29;
    r4 = (r30 & 255);
    r5 = r31;
    ctx->lr = 0x8013C92Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126E10_18D0 = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_18D0);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_18D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
}

loc_8013C930:
{
    r0 = (r30 & 255);
}

loc_8013C938:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_8013C8FC;
    }
}

loc_8013C93C:
{
    goto loc_8013C9C4;
}

loc_8013C940:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r4 = MemoryInline::FlatRead8((r29 + 10));
    ctx->lr = 0x8013C94Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r29 + 1132));
    ctx->lr = 0x8013C958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
}

loc_8013C95C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013C984;
    }
}

loc_8013C960:
{
    // inline leaf 0x80345400 (7 guest instruction(s))
}

loc_inl0_0x80345400:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_inl0_0x80345408:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl0_0x80345414;
    }
}

loc_inl0_0x8034540C:
{
    r3 = MemoryInline::FlatRead8((r3 + 16));
    goto loc_inl0_cont_80345400;
}

loc_inl0_0x80345414:
{
    r3 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl0_cont_80345400:
{
    // end of inlined leaf 0x80345400
    r0 = r3;
    MemoryInline::FlatWrite8((r29 + 2552), static_cast<uint8_t>(r3));
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r29 + 481));
    r5 = (r0 & 255);
    ctx->lr = 0x8013C97Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126E10_236B = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_236B);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_236B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r29 + 2551), static_cast<uint8_t>(r3));
    goto loc_8013C9C4;
}

loc_8013C984:
{
    r3 = r29;
    r4 = (r29 + 392);
    r5 = MemoryInline::FlatRead8((r29 + 481));
    ctx->lr = 0x8013C994u;
    if constexpr (KnownRegArgsCpuCall<0x80127328u>(&func_80127328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80127328_275B = func_80127328_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80127328_275B);
        r4 = static_cast<uint32_t>(regargs_result_80127328_275B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80127328u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite8((r29 + 2551), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 2552), static_cast<uint8_t>(r3));
    goto loc_8013C9C4;
}

loc_8013C9A0:
{
    r4 = (r3 + 392);
    r5 = MemoryInline::FlatRead8((r3 + 481));
    ctx->lr = 0x8013C9ACu;
    if constexpr (KnownRegArgsCpuCall<0x80127328u>(&func_80127328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80127328_2BD8 = func_80127328_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80127328_2BD8);
        r4 = static_cast<uint32_t>(regargs_result_80127328_2BD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80127328u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite8((r29 + 2551), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 2552), static_cast<uint8_t>(r3));
    goto loc_8013C9C4;
}

loc_8013C9B8:
{
    r0 = 254;
    MemoryInline::FlatWrite8((r3 + 2551), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2552), static_cast<uint8_t>(r0));
}

loc_8013C9C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013C844(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013C844_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013C844 func_8013C844 preserves=true fpr_mask=0x00000000
