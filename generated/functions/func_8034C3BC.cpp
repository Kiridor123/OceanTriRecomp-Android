#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EA88(CpuContext* ctx);
extern "C" uint32_t func_8004EA88_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8034C3BC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8034C3BCu);
    goto loc_8034C3BC;

loc_8034C3BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    ctx->lr = 0x8034C3DCu;
    if constexpr (KnownRegArgsCpuCall<0x8004EA88u>(&func_8004EA88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004EA88_3F2 = func_8004EA88_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004EA88_3F2;
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
    r0 = 8;
    ctr = r0;
}

loc_8034C3E4:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_8034C3EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C3F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 14u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
}

loc_8034C3F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C3FC:
{
    r0 = (r4 + -3);
}

loc_8034C404:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8034C468;
    }
}

loc_8034C408:
{
    r0 = (r4 + -1);
}

loc_8034C410:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8034C420;
    }
}

loc_8034C414:
{
}

loc_8034C418:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(6))) {
        goto loc_8034C4A0;
    }
}

loc_8034C41C:
{
    goto loc_8034C4F4;
}

loc_8034C420:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
}

loc_8034C42C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C430:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
}

loc_8034C43C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C440:
{
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
}

loc_8034C44C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C450:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r30 + 10));
}

loc_8034C45C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C460:
{
    r31 = 1;
    goto loc_8034C4F4;
}

loc_8034C468:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
}

loc_8034C474:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C478:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
}

loc_8034C484:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C488:
{
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
}

loc_8034C494:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C498:
{
    r31 = 1;
    goto loc_8034C4F4;
}

loc_8034C4A0:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
}

loc_8034C4AC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C4B0:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
}

loc_8034C4BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C4C0:
{
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
}

loc_8034C4CC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C4D0:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r30 + 10));
}

loc_8034C4DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C4E0:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r30 + 12));
}

loc_8034C4EC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034C4F4;
    }
}

loc_8034C4F0:
{
    r31 = 1;
}

loc_8034C4F4:
{
    r3 = (r3 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034C3E4;
    }
}

loc_8034C4FC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034C3BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034C3BC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034C3BC func_8034C3BC preserves=true fpr_mask=0x00000000
