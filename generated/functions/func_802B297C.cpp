#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B297C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_802B297C;

loc_802B297C:
{
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3024), 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3024), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13852));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 3028), f0.d);
    r0 = -256;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 3044), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 3040), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 3036), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 3032), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 3076), r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 3072), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 3068), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 3064), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 3060), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 3056), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 3052), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 3048), r0);
    }
    r3 = (r3 + 3080);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13832));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802B297C_statefree(uint32_t native_r2, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_802B297C;

loc_802B297C:
{
    cached_r0 = 0;
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + -21440);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 3024), 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (cached_r3 + 3024), static_cast<uint8_t>(cached_r0));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -13852));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 3028), cached_f0.d);
    cached_r0 = -256;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 3044), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 3040), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 3036), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 3032), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r3 + 3076), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 3072), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r3 + 3068), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + 3064), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 3060), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 3056), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 3052), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 3048), cached_r0);
    }
    cached_r3 = (cached_r3 + 3080);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -13832));
    cached_f2.d = cached_f1.d;
    cached_f3.d = cached_f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(cached_r3, cached_f1.d);
    MemoryInline::FlatWriteRamFloat32((cached_r3 + 4), cached_f2.d);
    MemoryInline::FlatWriteRamFloat32((cached_r3 + 8), cached_f3.d);
    // end of inlined leaf 0x8005000C



    return { static_cast<uint64_t>(cached_r0), cached_f0.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x802B297C symbol=func_802B297C_statefree gpr_in=0x00000004 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B297C func_802B297C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802B297C_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802B297C(ctx);
    return ctx->gpr[3];
}
