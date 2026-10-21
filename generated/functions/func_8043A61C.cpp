#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802C1E0C(CpuContext* ctx);
extern "C" uint64_t func_802C1E0C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802C1FD8(CpuContext* ctx);
extern "C" uint64_t func_802C1FD8_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8043A61C_ra38_180_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x8043A61Cu);
    goto loc_8043A61C;

loc_8043A61C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead32((r2 + -4488));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 0;
    r4 = (r1 + 16);
    ctx->lr = 0x8043A648u;
    if constexpr (KnownRegArgsCpuCall<0x802C1E0Cu>(&func_802C1E0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C1E0C_5A6 = func_802C1E0C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E0C_5A6);
        r4 = static_cast<uint32_t>(regargs_result_802C1E0C_5A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802C1E0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 0x80600000u;
    r30 = (r3 + 20496);
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0;
    r31 = 0x806E0000u;
    r4 = (r31 + -32128);
    r5 = (r1 + 12);
    r6 = 0;
    ctx->lr = 0x8043A670u;
    if constexpr (KnownRegArgsCpuCall<0x802C1FD8u>(&func_802C1FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802C1FD8_95B = func_802C1FD8_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C1FD8_95B);
        r4 = static_cast<uint32_t>(regargs_result_802C1FD8_95B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802C1FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = 0;
    r31 = (r31 + -32128);
}

loc_8043A678:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r29 + 5);
    r4 = r31;
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x8043A694u;
    if constexpr (KnownRegArgsCpuCall<0x802C1FD8u>(&func_802C1FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802C1FD8_E4A = func_802C1FD8_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C1FD8_E4A);
        r4 = static_cast<uint32_t>(regargs_result_802C1FD8_E4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802C1FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r30 = (r30 + 4);
    r31 = (r31 + 12);
    r29 = (r29 + 1);
}

loc_8043A6A4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_8043A678;
    }
}

loc_8043A6A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043A61C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043A61C_ra38_180_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF800381 fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043A61C func_8043A61C preserves=true fpr_mask=0x00000000
