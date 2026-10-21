#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D8738_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802D8738u);
    goto loc_802D8738;

loc_802D8738:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 944), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 944));
}

loc_802D8740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D8760;
    }
}

loc_802D8744:
{
}

loc_802D8748:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29))) {
        goto loc_802D8760;
    }
}

loc_802D874C:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 946));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802D8760:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 948));
}

loc_802D8768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D8788;
    }
}

loc_802D876C:
{
}

loc_802D8770:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29))) {
        goto loc_802D8788;
    }
}

loc_802D8774:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 950));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802D8788:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 952));
}

loc_802D8790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D87B0;
    }
}

loc_802D8794:
{
}

loc_802D8798:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29))) {
        goto loc_802D87B0;
    }
}

loc_802D879C:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 954));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802D87B0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 956));
}

loc_802D87B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D87D8;
    }
}

loc_802D87BC:
{
}

loc_802D87C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29))) {
        goto loc_802D87D8;
    }
}

loc_802D87C4:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 958));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802D87D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802D8738(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D8738_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D8738 func_802D8738 preserves=true fpr_mask=0x00000000
