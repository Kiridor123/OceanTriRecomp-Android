#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8035FEF8(CpuContext* ctx);
extern "C" uint64_t func_8035FEF8_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint32_t func_80360000_ra70_1e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r30 = ctx->gpr[30];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->gpr[6] = arg_r6;

    goto loc_80360000;

loc_80360000:
{
}

loc_80360004:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8036001C;
    }
}

loc_80360008:
{
    r0 = (r26 * 24);
    r0 = (r25 + r0);
    MemoryInline::FlatWrite32((r20 + 624), r0);
    MemoryInline::FlatWrite32((r20 + 628), r30);
    goto loc_8036002C;
}

loc_8036001C:
{
    r0 = (r26 * 36);
    r0 = (r24 + r0);
    MemoryInline::FlatWrite32((r20 + 628), r0);
    MemoryInline::FlatWrite32((r20 + 624), r30);
}

loc_8036002C:
{
    MemoryInline::FlatWrite16((r20 + 614), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead16((r21 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 24), static_cast<uint16_t>(r0));
    r28 = (r28 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8035FEF8u>(&func_8035FEF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[28] = r28;
        const auto regargs_result_8035FEF8_81C = func_8035FEF8_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8035FEF8_81C);
        r4 = static_cast<uint32_t>(regargs_result_8035FEF8_81C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r28 = ctx->gpr[28];
        r30 = ctx->gpr[30];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8035FEF8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r28 = ctx->gpr[28];
        r30 = ctx->gpr[30];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return r4;
}

}

extern "C" void func_80360000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80360000_ra70_1e_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xFFF83FF2 gpr_write=0xFFF81FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80360000 func_80360000 preserves=true fpr_mask=0x00000000
