#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050B5A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8050B5A0;

loc_8050B5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r7 = MemoryInline::FlatRead32(r3);
    r8 = (r7 + -1);
}

loc_8050B5C0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r8))) {
        goto loc_8050B62C;
    }
}

loc_8050B5C4:
{
}

loc_8050B5C8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8050B5D4;
    }
}

loc_8050B5CC:
{
}

loc_8050B5D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r7))) {
        goto loc_8050B5DC;
    }
}

loc_8050B5D4:
{
    r6 = 0;
    goto loc_8050B5EC;
}

loc_8050B5DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r6 = (r5 + r0);
}

loc_8050B5EC:
{
    r5 = (r4 + 1);
}

loc_8050B5F0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8050B5FC;
    }
}

loc_8050B5F4:
{
}

loc_8050B5F8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r7))) {
        goto loc_8050B604;
    }
}

loc_8050B5FC:
{
    r7 = 0;
    goto loc_8050B614;
}

loc_8050B604:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r5);
    r7 = (r3 + r0);
}

loc_8050B614:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r8 - r4);
    r3 = r6;
    r4 = r7;
    r5 = (r5 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050B62C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B5A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B5A0 func_8050B5A0 preserves=true fpr_mask=0x00000000
