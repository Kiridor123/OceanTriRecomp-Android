#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D7AD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802D7AD8u);
    goto loc_802D7AD8;

loc_802D7AD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 460), 0, 602u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 596u, (r3 + 1056));
}

loc_802D7AE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802D7AEC;
    }
}

loc_802D7AE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D7AEC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 460));
}

loc_802D7AF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D7B00;
    }
}

loc_802D7AF8:
{
}

loc_802D7AFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802D7B80;
    }
}

loc_802D7B00:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 484u, (r3 + 944));
}

loc_802D7B08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B20;
    }
}

loc_802D7B0C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (r3 + 1060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D7B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B20;
    }
}

loc_802D7B18:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D7B20:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 488u, (r3 + 948));
}

loc_802D7B28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B40;
    }
}

loc_802D7B2C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (r3 + 1060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D7B34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B40;
    }
}

loc_802D7B38:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D7B40:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 492u, (r3 + 952));
}

loc_802D7B48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B60;
    }
}

loc_802D7B4C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (r3 + 1060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D7B54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B60;
    }
}

loc_802D7B58:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D7B60:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 496u, (r3 + 956));
}

loc_802D7B68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B80;
    }
}

loc_802D7B6C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (r3 + 1060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D7B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B80;
    }
}

loc_802D7B78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D7B80:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802D7AD8_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x802D7AD8u);
    goto loc_802D7AD8;

loc_802D7AD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 460), 0, 602u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 596u, (cached_r3 + 1056));
}

loc_802D7AE0:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(4))) {
        goto loc_802D7AEC;
    }
}

loc_802D7AE4:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D7AEC:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (cached_r3 + 460));
}

loc_802D7AF4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802D7B00;
    }
}

loc_802D7AF8:
{
}

loc_802D7AFC:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(5))) {
        goto loc_802D7B80;
    }
}

loc_802D7B00:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 484u, (cached_r3 + 944));
}

loc_802D7B08:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B20;
    }
}

loc_802D7B0C:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (cached_r3 + 1060));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_802D7B14:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B20;
    }
}

loc_802D7B18:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D7B20:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 488u, (cached_r3 + 948));
}

loc_802D7B28:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B40;
    }
}

loc_802D7B2C:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (cached_r3 + 1060));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_802D7B34:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B40;
    }
}

loc_802D7B38:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D7B40:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 492u, (cached_r3 + 952));
}

loc_802D7B48:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B60;
    }
}

loc_802D7B4C:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (cached_r3 + 1060));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_802D7B54:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B60;
    }
}

loc_802D7B58:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D7B60:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 496u, (cached_r3 + 956));
}

loc_802D7B68:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7B80;
    }
}

loc_802D7B6C:
{
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 600u, (cached_r3 + 1060));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_802D7B74:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D7B80;
    }
}

loc_802D7B78:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D7B80:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802D7AD8 symbol=func_802D7AD8_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D7AD8 func_802D7AD8 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802D7AD8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802D7AD8(ctx);
    return ctx->gpr[3];
}
