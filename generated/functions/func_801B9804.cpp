#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B717C(CpuContext* ctx);
extern "C" uint64_t func_801B717C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801B9804_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801B9804u);
    goto loc_801B9804;

loc_801B9804:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_801B9820:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801B982C;
    }
}

loc_801B9824:
{
}

loc_801B9828:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801B9868;
    }
}

loc_801B982C:
{
    r3 = MemoryInline::FlatRead16((r3 + 22));
    ctx->lr = 0x801B9834u;
    if constexpr (KnownRegArgsCpuCall<0x801B717Cu>(&func_801B717C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801B717C_515 = func_801B717C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801B717C_515);
        r4 = static_cast<uint32_t>(regargs_result_801B717C_515 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801B717Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801B983C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B9850;
    }
}

loc_801B9840:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r0 & 253);
}

loc_801B9848:
{
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801B98AC;
}

loc_801B9850:
{
}

loc_801B9854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801B98AC;
    }
}

loc_801B9858:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801B98AC;
}

loc_801B9868:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_801B9870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B98AC;
    }
}

loc_801B9874:
{
    r3 = MemoryInline::FlatRead16((r3 + 22));
    ctx->lr = 0x801B987Cu;
    if constexpr (KnownRegArgsCpuCall<0x801B717Cu>(&func_801B717C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801B717C_BBB = func_801B717C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801B717C_BBB);
        r4 = static_cast<uint32_t>(regargs_result_801B717C_BBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801B717Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801B9884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B9898;
    }
}

loc_801B9888:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r0 & 253);
}

loc_801B9890:
{
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801B98AC;
}

loc_801B9898:
{
}

loc_801B989C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801B98AC;
    }
}

loc_801B98A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_801B98AC:
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

extern "C" void func_801B9804(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B9804_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B9804 func_801B9804 preserves=true fpr_mask=0x00000000
