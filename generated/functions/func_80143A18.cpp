#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014365C(CpuContext* ctx);
extern "C" uint64_t func_8014365C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80143A18_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80143A18;

loc_80143A18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r4 + 1));
    ctx->lr = 0x80143A4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8014365Cu>(&func_8014365C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8014365C_4CF = func_8014365C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8014365C_4CF);
        r4 = static_cast<uint32_t>(regargs_result_8014365C_4CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8014365Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_80143A54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80143A80;
    }
}

loc_80143A58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
}

loc_80143A64:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80143A6C;
    }
}

loc_80143A68:
{
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
}

loc_80143A6C:
{
    r3 = r31;
    r4 = r28;
    // inline leaf 0x80143544 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 49u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80143544
    MemoryInline::WriteResolved16(guest_range_0, 19u, (r31 + 22), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 45u, (r31 + 48), r30);
}

loc_80143A80:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80143A18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80143A18_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80143A18 func_80143A18 preserves=true fpr_mask=0x00000000
