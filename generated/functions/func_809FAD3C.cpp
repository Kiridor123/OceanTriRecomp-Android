#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FAD3C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FAD3C;

loc_809FAD3C:
{
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 89u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r0);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r3 + 60), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r3 + 73), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r3 + 61), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r3 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 16), r0);
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 62), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r3 + 75), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r3 + 63), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 76), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 24), r0);
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r3 + 64), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 69u, (r3 + 77), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r3 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 70u, (r3 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r3 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 71u, (r3 + 79), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 36), r0);
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r3 + 67), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r3 + 80), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 40), r0);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 73u, (r3 + 81), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r3 + 69), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r3 + 82), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 48), r0);
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r3 + 70), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r3 + 83), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 52), r0);
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r3 + 71), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r3 + 84), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r3 + 72), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 77u, (r3 + 85), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 88), r0);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 92), r0);
    }
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r3 + 96), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_809FAD3C_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint8_t* guest_range_0 = nullptr;

    goto loc_809FAD3C;

loc_809FAD3C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 256));
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 8), 0, 89u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r3 + 8), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (cached_r3 + 60), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (cached_r3 + 73), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 12), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 53u, (cached_r3 + 61), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (cached_r3 + 74), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 16), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 54u, (cached_r3 + 62), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (cached_r3 + 75), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 20), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 55u, (cached_r3 + 63), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (cached_r3 + 76), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 24), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 56u, (cached_r3 + 64), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 69u, (cached_r3 + 77), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 28), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 57u, (cached_r3 + 65), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 70u, (cached_r3 + 78), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 32), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 58u, (cached_r3 + 66), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 71u, (cached_r3 + 79), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 36), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 59u, (cached_r3 + 67), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (cached_r3 + 80), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 40), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (cached_r3 + 68), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 73u, (cached_r3 + 81), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 44), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 61u, (cached_r3 + 69), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (cached_r3 + 82), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + 48), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 62u, (cached_r3 + 70), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (cached_r3 + 83), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r3 + 52), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 63u, (cached_r3 + 71), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 76u, (cached_r3 + 84), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 56), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (cached_r3 + 72), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 77u, (cached_r3 + 85), static_cast<uint8_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (cached_r3 + 88), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (cached_r3 + 92), cached_r0);
    }
    cached_r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 88u, (cached_r3 + 96), static_cast<uint8_t>(cached_r0));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x809FAD3C symbol=func_809FAD3C_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FAD3C func_809FAD3C preserves=true fpr_mask=0x00000000

