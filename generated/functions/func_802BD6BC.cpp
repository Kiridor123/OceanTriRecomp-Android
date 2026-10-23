#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BD6BC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_802BD6BC;

loc_802BD6BC:
{
    r6 = 0;
    r3 = 0x806C0000u;
    r4 = (r3 + -6576);
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_802BD6D4:
{
    r0 = (r6 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r3);
    }
    r6 = (r6 + 8);
    r0 = (r6 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r3);
    }
    r6 = (r6 + 8);
    r0 = (r6 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r4 + r0);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 28), r3);
    }
    r6 = (r6 + 8);
    r0 = (r6 & 255);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802BD6D4;
    }
}

loc_802BD76C:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3 = 0x806C0000u;
    r0 = (r3 + -6576);
    r3 = (r0 + r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BD6BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BD6BC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BD6BC func_802BD6BC preserves=true fpr_mask=0x00000000
