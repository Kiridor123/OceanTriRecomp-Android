#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025E2FC(CpuContext* ctx);
extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027D904(CpuContext* ctx);
extern "C" uint64_t func_8027D904_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8025E390_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8025E390;

loc_8025E390:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8025E3AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8025E3C4;
    }
}

loc_8025E3B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 776));
}

loc_8025E3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E3E4;
    }
}

loc_8025E3BC:
{
    r3 = 0;
    goto loc_8025E498;
}

loc_8025E3C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8025E3CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025E3E4;
    }
}

loc_8025E3D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 776));
}

loc_8025E3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E3E4;
    }
}

loc_8025E3DC:
{
    r3 = 0;
    goto loc_8025E498;
}

loc_8025E3E4:
{
    r3 = r31;
    r4 = 0;
    r5 = 177;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8025E2FC_7D1 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_7D1);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_7D1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E3F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E414;
    }
}

loc_8025E3FC:
{
    r3 = r31;
    r4 = 12;
    r5 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8025E2FC_B60 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_B60);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_B60 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E410:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E448;
    }
}

loc_8025E414:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8025E420u;
    if constexpr (KnownRegArgsCpuCall<0x8027D904u>(&func_8027D904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8027D904_F17 = func_8027D904_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027D904_F17);
        r4 = static_cast<uint32_t>(regargs_result_8027D904_F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027D904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E424:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E448;
    }
}

loc_8025E428:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r31 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1000), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8025E498;
}

loc_8025E448:
{
    r3 = r31;
    r4 = 0;
    r5 = 166;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8025E2FC_1448 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_1448);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_1448 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E45C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E494;
    }
}

loc_8025E460:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8025E46Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027D904u>(&func_8027D904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8027D904_1802 = func_8027D904_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027D904_1802);
        r4 = static_cast<uint32_t>(regargs_result_8027D904_1802 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027D904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E470:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E494;
    }
}

loc_8025E474:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r31 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1000), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8025E498;
}

loc_8025E494:
{
    r3 = 0;
}

loc_8025E498:
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

extern "C" void func_8025E390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025E390_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025E390 func_8025E390 preserves=true fpr_mask=0x00000000
