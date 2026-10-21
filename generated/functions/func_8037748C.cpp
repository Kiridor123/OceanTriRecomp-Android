#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8037748C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8037748Cu);
    goto loc_8037748C;

loc_8037748C:
{
    r4 = 0x806B0000u;
    r5 = (r4 + -12348);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_8037749C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803774A0:
{
    r4 = MemoryInline::FlatRead8((r5 + 329));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 39));
}

loc_803774AC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803774B0:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 330), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 36));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 331), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 334), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 37));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 332), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 336), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 38));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r5 + 338), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 46));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r5 + 340), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 48));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r5 + 342), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 50));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r5 + 344), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 52));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r5 + 346), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8037748C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8037748C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8037748C func_8037748C preserves=true fpr_mask=0x00000000
