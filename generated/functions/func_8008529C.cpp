#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009AD48(CpuContext* ctx);
extern "C" uint64_t func_8009AD48_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8008529C_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_8008529C;

loc_8008529C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_800852BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800852CC;
    }
}

loc_800852C0:
{
    r3 = 0;
    r4 = (r31 + 4);
    ctx->lr = 0x800852CCu;
    if constexpr (KnownRegArgsCpuCall<0x8009AD48u>(&func_8009AD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009AD48_4EA = func_8009AD48_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8009AD48_4EA);
        r4 = static_cast<uint32_t>(regargs_result_8009AD48_4EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8009AD48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_800852CC:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 2);
}

loc_800852D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800852E8;
    }
}

loc_800852DC:
{
    r3 = 3;
    r4 = (r31 + 52);
    ctx->lr = 0x800852E8u;
    if constexpr (KnownRegArgsCpuCall<0x8009AD48u>(&func_8009AD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009AD48_96E = func_8009AD48_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8009AD48_96E);
        r4 = static_cast<uint32_t>(regargs_result_8009AD48_96E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8009AD48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_800852E8:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 4);
}

loc_800852F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80085304;
    }
}

loc_800852F8:
{
    r3 = 6;
    r4 = (r31 + 100);
    ctx->lr = 0x80085304u;
    if constexpr (KnownRegArgsCpuCall<0x8009AD48u>(&func_8009AD48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009AD48_DF3 = func_8009AD48_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8009AD48_DF3);
        r4 = static_cast<uint32_t>(regargs_result_8009AD48_DF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8009AD48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_80085304:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008529C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008529C_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xFFE00007 fpr_write=0xFFE00007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008529C func_8008529C preserves=true fpr_mask=0x00000000
