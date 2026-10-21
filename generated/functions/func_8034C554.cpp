#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EA88(CpuContext* ctx);
extern "C" uint32_t func_8004EA88_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8034C554_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8034C554u);
    goto loc_8034C554;

loc_8034C554:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8034C564u;
    if constexpr (KnownRegArgsCpuCall<0x8004EA88u>(&func_8004EA88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004EA88_378 = func_8004EA88_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004EA88_378;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8004EA88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
}

loc_8034C570:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C578;
    }
}

loc_8034C574:
{
    r4 = 1;
}

loc_8034C578:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
}

loc_8034C580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C58C;
    }
}

loc_8034C584:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C58C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
}

loc_8034C594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C5A0;
    }
}

loc_8034C598:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C5A0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
}

loc_8034C5A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C5B4;
    }
}

loc_8034C5AC:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C5B4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 64));
}

loc_8034C5BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C5C8;
    }
}

loc_8034C5C0:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C5C8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r3 + 80));
}

loc_8034C5D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C5DC;
    }
}

loc_8034C5D4:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C5DC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 96));
}

loc_8034C5E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C5F0;
    }
}

loc_8034C5E8:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C5F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r3 + 112));
}

loc_8034C5F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C604;
    }
}

loc_8034C5FC:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8034C604:
{
    r3 = r4;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034C554(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034C554_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034C554 func_8034C554 preserves=true fpr_mask=0x00000000
