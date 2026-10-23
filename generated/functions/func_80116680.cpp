#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800593D8(CpuContext* ctx);
extern "C" uint32_t func_800593D8_ra38_2_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80059484(CpuContext* ctx);
extern "C" uint32_t func_80059484_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_80116680_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80116680;

loc_80116680:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    ctx->lr = 0x801166A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
}

loc_801166A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801166C4;
    }
}

loc_801166AC:
{
    r3 = r31;
    r4 = (r30 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r30);
    r7 = 0;
    ctx->lr = 0x801166C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
}

loc_801166C4:
{
    r3 = MemoryInline::FlatRead8((r31 + 7));
}

loc_801166CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801166EC;
    }
}

loc_801166D0:
{
}

loc_801166D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80116728;
    }
}

loc_801166D8:
{
}

loc_801166DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80116734;
    }
}

loc_801166E0:
{
}

loc_801166E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80116770;
    }
}

loc_801166E8:
{
    goto loc_801167A8;
}

loc_801166EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_801166FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(24))) {
        goto loc_801167A8;
    }
}

loc_80116700:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800593D8u>(&func_800593D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800593D8_E98 = func_800593D8_ra38_2_10_0(ctx, r3, r4, r5, f1.d);
        r4 = regargs_result_800593D8_E98;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800593D8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r31 + 7));
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_801167A8;
}

loc_80116728:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_801167A8;
}

loc_80116734:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_80116744:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80116768;
    }
}

loc_80116748:
{
    r0 = 90;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800593D8u>(&func_800593D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800593D8_13FC = func_800593D8_ra38_2_10_0(ctx, r3, r4, r5, f1.d);
        r4 = regargs_result_800593D8_13FC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800593D8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r31 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_801167A8;
}

loc_80116768:
{
    if constexpr (KnownRegArgsCpuCall<0x80059484u>(&func_80059484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80059484_175F = func_80059484_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_80059484_175F;
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80059484u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_801167A8;
}

loc_80116770:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_80116780:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801167A4;
    }
}

loc_80116784:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
    goto loc_801167A8;
}

loc_801167A4:
{
    if constexpr (KnownRegArgsCpuCall<0x80059484u>(&func_80059484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80059484_1C5B = func_80059484_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_80059484_1C5B;
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80059484u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
}

loc_801167A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80116680(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80116680_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80116680 func_80116680 preserves=true fpr_mask=0x00000000
