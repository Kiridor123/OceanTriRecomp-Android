#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805228C0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x805228C0u);
    goto loc_805228C0;

loc_805228C0:
{
    r4 = 0x80790000u;
    r0 = 3;
    r4 = (r4 + 7408);
    r3 = 0;
    ctr = r0;
}

loc_805228D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 48), r3);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 60), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 68), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 76), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 84), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r4 + 92), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r4 + 100), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r4 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r4 + 108), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r4 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r4 + 116), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r4 + 120), r3);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r4 + 124), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r4 + 128), r3);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r4 + 132), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r4 + 136), r3);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r4 + 140), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r4 + 144), r3);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r4 + 148), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r4 + 152), r3);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r4 + 156), r3);
    }
    r4 = (r4 + 160);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805228D4;
    }
}

loc_8052297C:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 36), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_805228C0_statefree(uint32_t native_ctr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    uint32_t cached_ctr = native_ctr;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x805228C0u);
    goto loc_805228C0;

loc_805228C0:
{
    cached_r4 = 0x80790000u;
    cached_r0 = 3;
    cached_r4 = (cached_r4 + 7408);
    cached_r3 = 0;
    cached_ctr = cached_r0;
}

loc_805228D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r4, cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r4 + 4), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r4 + 8), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r4 + 12), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r4 + 16), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r4 + 20), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r4 + 24), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r4 + 28), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r4 + 32), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r4 + 36), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r4 + 40), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r4 + 44), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r4 + 48), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r4 + 52), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r4 + 56), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r4 + 60), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (cached_r4 + 64), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (cached_r4 + 68), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (cached_r4 + 72), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (cached_r4 + 76), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (cached_r4 + 80), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (cached_r4 + 84), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (cached_r4 + 88), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (cached_r4 + 92), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (cached_r4 + 96), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (cached_r4 + 100), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (cached_r4 + 104), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (cached_r4 + 108), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (cached_r4 + 112), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (cached_r4 + 116), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (cached_r4 + 120), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (cached_r4 + 124), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (cached_r4 + 128), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (cached_r4 + 132), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (cached_r4 + 136), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (cached_r4 + 140), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (cached_r4 + 144), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (cached_r4 + 148), cached_r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r3)) << 32) | static_cast<uint32_t>(cached_r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (cached_r4 + 152), cached_r3);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (cached_r4 + 156), cached_r3);
    }
    cached_r4 = (cached_r4 + 160);
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_805228D4;
    }
}

loc_8052297C:
{
    cached_r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r4, cached_r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r4 + 4), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (cached_r4 + 8), cached_r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (cached_r4 + 12), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (cached_r4 + 16), cached_r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (cached_r4 + 20), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (cached_r4 + 24), cached_r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (cached_r4 + 28), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r4 + 32), cached_r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (cached_r4 + 36), cached_r0);
    }

return static_cast<uint64_t>(cached_ctr);
}


    return static_cast<uint64_t>(cached_ctr);
}
// RECOMP_STATE_FREE_ABI address=0x805228C0 symbol=func_805228C0_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805228C0 func_805228C0 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_805228C0_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_805228C0(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
