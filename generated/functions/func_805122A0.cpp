#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050B650(CpuContext* ctx);
extern "C" uint64_t func_8050B650_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050BCC0(CpuContext* ctx);
extern "C" uint64_t func_8050BCC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_805122A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_805122A0;

loc_805122A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_805122C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80512350;
    }
}

loc_805122C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_805122D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805122D8;
    }
}

loc_805122D4:
{
    goto loc_80512350;
}

loc_805122D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805122E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80512340;
    }
}

loc_805122E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
    r31 = r3;
    r29 = 0;
    goto loc_80512334;
}

loc_805122FC:
{
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl1_0x8050B2C0:
{
}

loc_inl1_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x8050B2D4;
    }
}

loc_inl1_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl1_0x8050B2DC;
    }
}

loc_inl1_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl1_cont_8050B2C0;
}

loc_inl1_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80512318:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80512330;
    }
}

loc_8051231C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x8051232Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050B650u>(&func_8050B650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8050B650_F08 = func_8050B650_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050B650_F08);
        r4 = static_cast<uint32_t>(regargs_result_8050B650_F08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050B650u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80512350;
}

loc_80512330:
{
    r29 = (r29 + 1);
}

loc_80512334:
{
}

loc_80512338:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_805122FC;
    }
}

loc_8051233C:
{
    goto loc_80512350;
}

loc_80512340:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->lr = 0x80512350u;
    if constexpr (KnownRegArgsCpuCall<0x8050BCC0u>(&func_8050BCC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8050BCC0_1674 = func_8050BCC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050BCC0_1674);
        r4 = static_cast<uint32_t>(regargs_result_8050BCC0_1674 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050BCC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80512350:
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805122A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805122A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805122A0 func_805122A0 preserves=true fpr_mask=0x00000000
