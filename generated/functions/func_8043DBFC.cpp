#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEC54(CpuContext* ctx);
extern "C" uint64_t func_803BEC54_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8043DB60(CpuContext* ctx);
extern "C" uint64_t func_8043DB60_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8043DBFC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_8043DBFC;

loc_8043DBFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r30));
    r0 = (r4 & 255);
}

loc_8043DC34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DC4C;
    }
}

loc_8043DC38:
{
}

loc_8043DC3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8043DC8C;
    }
}

loc_8043DC40:
{
}

loc_8043DC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043DCB4;
    }
}

loc_8043DC48:
{
    goto loc_8043DCEC;
}

loc_8043DC4C:
{
    r4 = (r3 + 20);
    r5 = 0;
    ctx->lr = 0x8043DC58u;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043DB60_89C = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_89C);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_89C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 7;
    ctx->lr = 0x8043DC6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEC54_D86 = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_D86);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_D86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r3));
    r3 = 1;
    r4 = 7;
    ctx->lr = 0x8043DC7Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEC54_10B1 = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_10B1);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_10B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r29 + 57), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 70), static_cast<uint16_t>(r30));
    goto loc_8043DCEC;
}

loc_8043DC8C:
{
    r4 = (r3 + 20);
    r5 = 0;
    ctx->lr = 0x8043DC98u;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043DB60_14A6 = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_14A6);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_14A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 5;
    MemoryInline::FlatWrite8((r29 + 26), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 27), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 70), static_cast<uint16_t>(r30));
    goto loc_8043DCEC;
}

loc_8043DCB4:
{
    r4 = (r3 + 20);
    r5 = 0;
    ctx->lr = 0x8043DCC0u;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043DB60_1AAC = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_1AAC);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_1AAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r31 = 4;
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r31));
    r3 = r29;
    r4 = (r29 + 44);
    r5 = 1;
    ctx->lr = 0x8043DCD8u;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043DB60_1FB3 = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_1FB3);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_1FB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 70), static_cast<uint16_t>(r30));
    r0 = 5400;
    MemoryInline::FlatWrite16((r29 + 72), static_cast<uint16_t>(r0));
}

loc_8043DCEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043DBFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043DBFC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043DBFC func_8043DBFC preserves=true fpr_mask=0x00000000
