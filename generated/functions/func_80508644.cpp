#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80508644_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x80508644u);
    goto loc_80508644;

loc_80508644:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r4 = (r4 + 2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 2u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 4u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 6u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 8u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 10u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 12u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 14u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 16u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 18u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 20u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 22u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 24u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 26u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, r4);
    r4 = (r4 + 2);
    MemoryInline::WriteResolved16(guest_range_1, 28u, r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r0 = (r5 & 1);
}

loc_8050873C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_80508740:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80508644(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80508644_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80508644 func_80508644 preserves=true fpr_mask=0x00000000
