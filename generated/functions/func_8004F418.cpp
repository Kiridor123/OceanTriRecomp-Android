#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F418(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    goto loc_8004F418;

loc_8004F418:
{
    r5 = 0;
    r0 = (r3 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    r4 = r3;
    r0 = 31;
    ctr = r0;
}

loc_8004F43C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r4 = (r4 + 8);
    r5 = (r5 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004F43C;
    }
}

loc_8004F484:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 252), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8004F418_statefree(uint32_t native_r3, uint32_t native_ctr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    uint32_t cached_ctr = native_ctr;

    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_8004F418;

loc_8004F418:
{
    cached_r5 = 0;
    cached_r0 = (cached_r3 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(8));
    cached_r4 = (r4_rot_0 & -256);
    cached_r3 = 0x80670000u;
    cached_r0 = (cached_r3 + -13664);
    cached_r3 = (cached_r0 + cached_r4);
    cached_r4 = cached_r3;
    cached_r0 = 31;
    cached_ctr = cached_r0;
}

loc_8004F43C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 8u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r4);
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r4 + 1));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r4 + 2));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r4 + 3));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (cached_r4 + 4));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (cached_r4 + 5));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (cached_r4 + 6));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (cached_r4 + 7));
    cached_r4 = (cached_r4 + 8);
    cached_r5 = (cached_r5 + cached_r0);
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_8004F43C;
    }
}

loc_8004F484:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 2));
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 3));
    cached_r5 = (cached_r5 + cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 252), cached_r5);


return static_cast<uint64_t>(cached_ctr);
}


    return static_cast<uint64_t>(cached_ctr);
}
// RECOMP_STATE_FREE_ABI address=0x8004F418 symbol=func_8004F418_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F418 func_8004F418 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8004F418_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8004F418(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
