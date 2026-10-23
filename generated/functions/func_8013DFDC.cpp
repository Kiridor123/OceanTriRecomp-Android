#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8013BE48(CpuContext* ctx);
extern "C" uint64_t func_8013BE48_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801407DC(CpuContext* ctx);
extern "C" uint64_t func_801407DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8013DFDC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8013DFDC;

loc_8013DFDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead8(r4);
}

loc_8013E004:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8013E01C;
    }
}

loc_8013E008:
{
}

loc_8013E00C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8013E070;
    }
}

loc_8013E010:
{
}

loc_8013E014:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(255))) {
        goto loc_8013E0A8;
    }
}

loc_8013E018:
{
    goto loc_8013E09C;
}

loc_8013E01C:
{
    r3 = (r3 + 392);
    r4 = (r31 + 876);
    ctx->lr = 0x8013E028u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80050AF4_AE6 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_AE6);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_AE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r31 + 448));
    r0 = (r3 - r0);
    r0 = (r0 & 65535);
}

loc_8013E038:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(32768))) {
        goto loc_8013E0A8;
    }
}

loc_8013E03C:
{
    r3 = 46;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8(r4);
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_1237 = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_1237;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = 46;
    r5 = (r1 + 12);
    ctx->lr = 0x8013E06Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013BE48u>(&func_8013BE48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8013BE48_1530 = func_8013BE48_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013BE48_1530);
        r4 = static_cast<uint32_t>(regargs_result_8013BE48_1530 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013BE48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013E0A8;
}

loc_8013E070:
{
    r3 = 46;
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_199A = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_199A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r4 = 46;
    r5 = 1;
    ctx->lr = 0x8013E094u;
    if constexpr (KnownRegArgsCpuCall<0x801407DCu>(&func_801407DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801407DC_1C77 = func_801407DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801407DC_1C77);
        r4 = static_cast<uint32_t>(regargs_result_801407DC_1C77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801407DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    goto loc_8013E0A8;
}

loc_8013E09C:
{
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl0_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl0_0x80140B70:
{
}

loc_inl0_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
}

loc_8013E0A8:
{
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8013DFDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013DFDC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013DFDC func_8013DFDC preserves=true fpr_mask=0x00000000
