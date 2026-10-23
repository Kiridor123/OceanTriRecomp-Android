#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D270(CpuContext* ctx);
extern "C" uint32_t func_8012D270_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8012DFCC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012DFCC;

loc_8012DFCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 10;
    r5 = 175;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl0_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl0_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl0_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D290:
{
    r3 = 1;
    goto loc_inl0_cont_8012D270;
}

loc_inl0_0x8012D298:
{
    r3 = 0;
}

loc_inl0_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_8012DFF0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012DFF4:
{
    r3 = r31;
    r4 = 10;
    r5 = 176;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_8012E008:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012E00C:
{
    r3 = r31;
    r4 = 10;
    r5 = 177;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_B30 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_B30;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8012E020:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012E024:
{
    r3 = r31;
    r4 = 10;
    r5 = 178;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_E7B = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_E7B;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8012E038:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012E03C:
{
    r3 = r31;
    r4 = 10;
    r5 = 179;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_11C6 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_11C6;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8012E050:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012E054:
{
    r3 = r31;
    r4 = 10;
    r5 = 180;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_1513 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_1513;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8012E068:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012E084;
    }
}

loc_8012E06C:
{
    r3 = r31;
    r4 = 10;
    r5 = 181;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_1860 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_1860;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8012E080:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012E08C;
    }
}

loc_8012E084:
{
    r3 = 1;
    goto loc_8012E090;
}

loc_8012E08C:
{
    r3 = 0;
}

loc_8012E090:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012DFCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012DFCC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012DFCC func_8012DFCC preserves=true fpr_mask=0x00000000
