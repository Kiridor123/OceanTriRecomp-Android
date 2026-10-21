#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056C874(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8056C874u);
    goto loc_8056C874;

loc_8056C874:
{
    r5 = 0x80660000u;
    r6 = 0;
    r5 = (r5 + -22312);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 148u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r6));
    r4 = (r6 * 108);
    r0 = 9;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    }
    r4 = (r3 + r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r6);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r3);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r6));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 20), 0, 49u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 28), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 36), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 56), r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r4 + 68), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 52), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8056C874_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x8056C874u);
    goto loc_8056C874;

loc_8056C874:
{
    cached_r5 = 0x80660000u;
    cached_r6 = 0;
    cached_r5 = (cached_r5 + -22312);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 148u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, cached_r3, static_cast<uint8_t>(cached_r6));
    cached_r4 = (cached_r6 * 108);
    cached_r0 = 9;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r6);
    }
    cached_r4 = (cached_r3 + cached_r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r6);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (cached_r3 + 132), cached_r6);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (cached_r3 + 136), cached_r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 128u, (cached_r3 + 128), cached_r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (cached_r3 + 140), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (cached_r3 + 144), cached_r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 1u, (cached_r3 + 1), static_cast<uint8_t>(cached_r6));
    guest_range_1 = MemoryInline::ResolveRangeHost((cached_r4 + 20), 0, 49u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r4 + 24), cached_r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (cached_r4 + 28), cached_r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (cached_r4 + 32), cached_r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (cached_r4 + 36), cached_r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (cached_r4 + 44), cached_r6);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (cached_r4 + 48), cached_r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r6)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (cached_r4 + 60), cached_r6);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (cached_r4 + 56), cached_r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 48u, (cached_r4 + 68), static_cast<uint8_t>(cached_r6));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (cached_r4 + 20), static_cast<uint8_t>(cached_r6));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (cached_r4 + 64), cached_r0);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r4 + 52), cached_r6);


    return static_cast<uint64_t>(cached_r6);
}


    return static_cast<uint64_t>(cached_r6);
}
// RECOMP_STATE_FREE_ABI address=0x8056C874 symbol=func_8056C874_statefree gpr_in=0x00000008 gpr_out=0x00000040 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C874 func_8056C874 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8056C874_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8056C874(ctx);
    return ctx->gpr[4];
}
