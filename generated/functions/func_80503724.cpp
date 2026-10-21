#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805024A4(CpuContext* ctx);
extern "C" uint64_t func_805024A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502EA8(CpuContext* ctx);
extern "C" uint32_t func_80502EA8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80503868(CpuContext* ctx);
extern "C" uint64_t func_80503868_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80503724_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80503724u);
    goto loc_80503724;

loc_80503724:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8050374C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80503758;
    }
}

loc_80503750:
{
    r3 = 0;
    goto loc_80503850;
}

loc_80503758:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1380319232);
}

loc_80503764:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20053))) {
        goto loc_805037A8;
    }
}

loc_80503768:
{
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r3 = MemoryInline::FlatRead16((r4 + 14));
    r4 = (r4 + r0);
    ctr = r3;
}

loc_8050377C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80503810;
    }
}

loc_80503780:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1179189248);
}

loc_8050378C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20038))) {
        goto loc_80503798;
    }
}

loc_80503790:
{
    r5 = (r4 + 8);
    goto loc_80503810;
}

loc_80503798:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80503780;
    }
}

loc_805037A4:
{
    goto loc_80503810;
}

loc_805037A8:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
}

loc_805037B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(260))) {
        goto loc_805037DC;
    }
}

loc_805037B4:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 260;
    r6 = 2;
    if constexpr (KnownRegArgsCpuCall<0x805024A4u>(&func_805024A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_805024A4_C72 = func_805024A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805024A4_C72);
        r4 = static_cast<uint32_t>(regargs_result_805024A4_C72 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x805024A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_805037D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80503804;
    }
}

loc_805037D4:
{
    r3 = 0;
    goto loc_80503850;
}

loc_805037DC:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 258;
    r6 = 2;
    if constexpr (KnownRegArgsCpuCall<0x805024A4u>(&func_805024A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_805024A4_1073 = func_805024A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805024A4_1073);
        r4 = static_cast<uint32_t>(regargs_result_805024A4_1073 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x805024A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_805037F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80503804;
    }
}

loc_805037FC:
{
    r3 = 0;
    goto loc_80503850;
}

loc_80503804:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80503868u>(&func_80503868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        const auto regargs_result_80503868_144D = func_80503868_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80503868_144D);
        r4 = static_cast<uint32_t>(regargs_result_80503868_144D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        InvokeDirectCpu<0x80503868u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
    }
    r5 = r3;
}

loc_80503810:
{
}

loc_80503814:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80503820;
    }
}

loc_80503818:
{
    r3 = 0;
    goto loc_80503850;
}

loc_80503820:
{
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80503024u>(ctx);
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80503840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = r3;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80502EA8u>(&func_80502EA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80502EA8_1B3D = func_80502EA8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502EA8_1B3D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80502EA8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
}

loc_80503850:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80503724(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80503724_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80503724 func_80503724 preserves=true fpr_mask=0x00000000
