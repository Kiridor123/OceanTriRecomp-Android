#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803AA9B0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_803AA9B0;

loc_803AA9B0:
{
    r0 = (r4 & 65535);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 19u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
}

loc_803AA9BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803AA9CC;
    }
}

loc_803AA9C0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA9CC:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
}

loc_803AA9D4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803AA9E4;
    }
}

loc_803AA9D8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA9E4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
}

loc_803AA9EC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803AA9FC;
    }
}

loc_803AA9F0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA9FC:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
}

loc_803AAA04:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803AAA14;
    }
}

loc_803AAA08:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AAA14:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
}

loc_803AAA1C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803AAA2C;
    }
}

loc_803AAA20:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AAA2C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AA9B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AA9B0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AA9B0 func_803AA9B0 preserves=true fpr_mask=0x00000000
