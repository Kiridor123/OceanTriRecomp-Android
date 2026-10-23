#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478E10(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80478E10;

loc_80478E10:
{
    r3 = 0x80710000u;
    r0 = 0;
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -30664), 0, 168u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + -30664), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + -30660), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + -30656), r0);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + -30624), r0);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + -30592), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + -30560), r0);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + -30528), r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + -30652), r0);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + -30620), r0);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + -30588), r0);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + -30556), r0);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + -30524), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + -30648), r0);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + -30616), r0);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + -30584), r0);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + -30552), r0);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + -30520), r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + -30644), r0);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + -30612), r0);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + -30580), r0);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + -30548), r0);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + -30516), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + -30640), r0);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + -30608), r0);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + -30576), r0);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + -30544), r0);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + -30512), r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + -30636), r0);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + -30604), r0);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + -30572), r0);
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + -30540), r0);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + -30508), r0);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + -30632), r0);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + -30600), r0);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + -30568), r0);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + -30536), r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + -30504), r0);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + -30628), r0);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + -30596), r0);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + -30564), r0);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + -30532), r0);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + -30500), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80478E10_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint8_t* guest_range_0 = nullptr;

    goto loc_80478E10;

loc_80478E10:
{
    cached_r3 = 0x80710000u;
    cached_r0 = 0;
    cached_r3 = (cached_r3 + -3456);
    cached_r3 = (cached_r3 + 196608);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + -30664), 0, 168u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r3 + -30664), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + -30660), cached_r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + -30656), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + -30624), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (cached_r3 + -30592), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (cached_r3 + -30560), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (cached_r3 + -30528), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + -30652), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r3 + -30620), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (cached_r3 + -30588), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (cached_r3 + -30556), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (cached_r3 + -30524), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + -30648), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + -30616), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (cached_r3 + -30584), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (cached_r3 + -30552), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (cached_r3 + -30520), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + -30644), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r3 + -30612), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (cached_r3 + -30580), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (cached_r3 + -30548), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (cached_r3 + -30516), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + -30640), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r3 + -30608), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (cached_r3 + -30576), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (cached_r3 + -30544), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (cached_r3 + -30512), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + -30636), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r3 + -30604), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (cached_r3 + -30572), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 124u, (cached_r3 + -30540), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (cached_r3 + -30508), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + -30632), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (cached_r3 + -30600), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (cached_r3 + -30568), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (cached_r3 + -30536), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (cached_r3 + -30504), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + -30628), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (cached_r3 + -30596), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (cached_r3 + -30564), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (cached_r3 + -30532), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (cached_r3 + -30500), cached_r0);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80478E10 symbol=func_80478E10_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478E10 func_80478E10 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80478E10_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80478E10(ctx);
    return ctx->gpr[3];
}
