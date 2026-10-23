#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80137834(CpuContext* ctx);
extern "C" uint64_t func_80137834_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801D67BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_801D67BC;

loc_801D67BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_801D67D8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801D6824;
    }
}

loc_801D67DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_801D67E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801D6824;
    }
}

loc_801D67E8:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x801D67F0u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137834_578 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_578);
        r4 = static_cast<uint32_t>(regargs_result_80137834_578 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801D67F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D6824;
    }
}

loc_801D67FC:
{
    r4 = MemoryInline::FlatRead8((r3 + 22));
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801D6808:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_801D6824;
    }
}

loc_801D680C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1446));
    r0 = (r0 & 127);
}

loc_801D6818:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801D6824;
    }
}

loc_801D681C:
{
    r3 = 1;
    goto loc_801D6828;
}

loc_801D6824:
{
    r3 = 0;
}

loc_801D6828:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801D67BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801D67BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D67BC func_801D67BC preserves=true fpr_mask=0x00000000
