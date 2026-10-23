#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050E0E0(CpuContext* ctx);
extern "C" uint64_t func_8050E0E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80510F30(CpuContext* ctx);
extern "C" uint64_t func_80510F30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80511660_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_80511660;

loc_80511660:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 7;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = (r1 + 8);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r5 + 68));
    r5 = (r5 + 7);
    ctx->lr = 0x8051168Cu;
    if constexpr (KnownRegArgsCpuCall<0x80510F30u>(&func_80510F30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80510F30_718 = func_80510F30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80510F30_718);
        r4 = static_cast<uint32_t>(regargs_result_80510F30_718 >> 32);
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
        InvokeDirectCpu<0x80510F30u>(ctx);
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
}

loc_80511690:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051169C;
    }
}

loc_80511694:
{
    r3 = 0;
    goto loc_80511714;
}

loc_8051169C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_805116A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805116B0;
    }
}

loc_805116A8:
{
    r3 = 1;
    goto loc_80511714;
}

loc_805116B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r4 = (r4 + -1);
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
    r5 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r31 + 80));
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r4 + r0);
    ctx->lr = 0x805116E4u;
    if constexpr (KnownRegArgsCpuCall<0x8050E0E0u>(&func_8050E0E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8050E0E0_13D7 = func_8050E0E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E0E0_13D7);
        r4 = static_cast<uint32_t>(regargs_result_8050E0E0_13D7 >> 32);
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
        InvokeDirectCpu<0x8050E0E0u>(ctx);
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
}

loc_805116E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805116F4;
    }
}

loc_805116EC:
{
    r0 = 0;
    goto loc_80511700;
}

loc_805116F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 144), r0);
    r0 = 1;
}

loc_80511700:
{
}

loc_80511704:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80511710;
    }
}

loc_80511708:
{
    r3 = 0;
    goto loc_80511714;
}

loc_80511710:
{
    r3 = 1;
}

loc_80511714:
{
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

extern "C" void func_80511660(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80511660_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FBF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80511660 func_80511660 preserves=true fpr_mask=0x00000000
