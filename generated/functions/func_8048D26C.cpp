#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80478520(CpuContext* ctx);
extern "C" uint64_t func_80478520_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8048D26C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8048D26C;

loc_8048D26C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -7424);
    r31 = (r5 + 172);
    r5 = 0;
    ctr = r0;
}

loc_8048D294:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8048D29C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048D2B0;
    }
}

loc_8048D2A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048D2A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048D2B0;
    }
}

loc_8048D2AC:
{
    goto loc_8048D320;
}

loc_8048D2B0:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048D2BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048D2D0;
    }
}

loc_8048D2C0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048D2C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048D2D0;
    }
}

loc_8048D2CC:
{
    goto loc_8048D320;
}

loc_8048D2D0:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048D2DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048D2F0;
    }
}

loc_8048D2E0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048D2E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048D2F0;
    }
}

loc_8048D2EC:
{
    goto loc_8048D320;
}

loc_8048D2F0:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048D2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048D310;
    }
}

loc_8048D300:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048D308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048D310;
    }
}

loc_8048D30C:
{
    goto loc_8048D320;
}

loc_8048D310:
{
    r5 = (r5 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048D294;
    }
}

loc_8048D31C:
{
    r31 = 0;
}

loc_8048D320:
{
}

loc_8048D324:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8048D334;
    }
}

loc_8048D328:
{
    r3 = r4;
    ctx->lr = 0x8048D330u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_EF3 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_EF3);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_EF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8048D368;
}

loc_8048D334:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8048D33C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8048D360;
    }
}

loc_8048D340:
{
    r3 = (r31 + 20);
    ctx->lr = 0x8048D348u;
    if constexpr (KnownRegArgsCpuCall<0x80478520u>(&func_80478520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80478520_1331 = func_80478520_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80478520_1331);
        r4 = static_cast<uint32_t>(regargs_result_80478520_1331 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80478520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r4 = 258;
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x8048D35Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8048D368;
}

loc_8048D360:
{
    r3 = r4;
    ctx->lr = 0x8048D368u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_1876 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_1876);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_1876 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8048D368:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048D26C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048D26C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048D26C func_8048D26C preserves=true fpr_mask=0x00000000
