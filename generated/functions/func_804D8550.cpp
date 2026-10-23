#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D6270(CpuContext* ctx);
extern "C" uint64_t func_804D6270_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D8100(CpuContext* ctx);
extern "C" uint64_t func_804D8100_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DD940(CpuContext* ctx);
extern "C" uint64_t func_804DD940_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_804D8550_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804D8550;

loc_804D8550:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804CBAA0 (8 guest instruction(s))
}

loc_inl0_0x804CBAA0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15192));
}

loc_inl0_0x804CBAA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x804CBAB4;
    }
}

loc_inl0_0x804CBAAC:
{
    r3 = 64;
    goto loc_inl0_cont_804CBAA0;
}

loc_inl0_0x804CBAB4:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead8((r3 + 12676));
}

loc_inl0_cont_804CBAA0:
{
    // end of inlined leaf 0x804CBAA0
    ctx->lr = 0x804D856Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D6270u>(&func_804D6270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804D6270_AA0 = func_804D6270_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6270_AA0);
        r4 = static_cast<uint32_t>(regargs_result_804D6270_AA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D6270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x81280000u;
    // inline leaf 0x804CC760 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -20112), r3);
    // end of inlined leaf 0x804CC760
    r3 = 0x812F0000u;
    // inline leaf 0x804CC730 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -15096), r3);
    // end of inlined leaf 0x804CC730
    r3 = 64;
    r4 = 32;
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    r30 = r3;
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0x80630000u;
    r3 = (r31 + -23868);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_14FC = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_14FC);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_14FC >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = r3;
    r3 = r30;
    r4 = (r31 + -23868);
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_17CB = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_17CB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 4;
    r4 = 4096;
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    MemoryInline::FlatWrite32(r3, r30);
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->lr = 0x804D85D4u;
    if constexpr (KnownRegArgsCpuCall<0x804DD940u>(&func_804DD940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804DD940_1CE9 = func_804DD940_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DD940_1CE9);
        r4 = static_cast<uint32_t>(regargs_result_804DD940_1CE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804DD940u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804D85DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804D85F4;
    }
}

loc_804D85E0:
{
}

loc_804D85E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804D8608;
    }
}

loc_804D85E8:
{
}

loc_804D85EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_804D861C;
    }
}

loc_804D85F0:
{
    goto loc_804D8630;
}

loc_804D85F4:
{
    r4 = 1212219392;
    r3 = 65536;
    r4 = (r4 + 16961);
    r3 = (r3 + 2);
    goto loc_804D8640;
}

loc_804D8608:
{
    r4 = 1212219392;
    r3 = 65536;
    r4 = (r4 + 16971);
    r3 = (r3 + 2);
    goto loc_804D8640;
}

loc_804D861C:
{
    r4 = 1212219392;
    r3 = 65536;
    r4 = (r4 + 16963);
    r3 = (r3 + 2);
    goto loc_804D8640;
}

loc_804D8630:
{
    r4 = 1212219392;
    r3 = 65536;
    r4 = (r4 + 16961);
    r3 = (r3 + 2);
}

loc_804D8640:
{
    r6 = r31;
    r5 = 3;
    r7 = 0;
    ctx->lr = 0x804D8650u;
    if constexpr (KnownRegArgsCpuCall<0x804D8100u>(&func_804D8100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804D8100_2523 = func_804D8100_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D8100_2523);
        r4 = static_cast<uint32_t>(regargs_result_804D8100_2523 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D8100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return r4;
}

}

extern "C" void func_804D8550(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D8550_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D8550 func_804D8550 preserves=true fpr_mask=0x00000000
