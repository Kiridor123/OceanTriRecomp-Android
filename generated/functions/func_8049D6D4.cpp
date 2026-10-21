#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8049D6D4_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8049D6D4u);
    goto loc_8049D6D4;

loc_8049D6D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 10), 0, 10u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 1);
}

loc_8049D6DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D6E8;
    }
}

loc_8049D6E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 10));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8049D6E8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 2);
}

loc_8049D6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D6FC;
    }
}

loc_8049D6F4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 11));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_8049D6FC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 4);
}

loc_8049D704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D710;
    }
}

loc_8049D708:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 12));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
}

loc_8049D710:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 8);
}

loc_8049D718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D724;
    }
}

loc_8049D71C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 13));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8049D724:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 16);
}

loc_8049D72C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D738;
    }
}

loc_8049D730:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 14));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8049D738:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 16128);
}

loc_8049D740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D74C;
    }
}

loc_8049D744:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 15));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_8049D74C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 32);
}

loc_8049D754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D760;
    }
}

loc_8049D758:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 16));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_8049D760:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 64);
}

loc_8049D768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8049D76C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 17));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8049D6D4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8049D6D4_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8049D6D4 func_8049D6D4 preserves=true fpr_mask=0x00000000
