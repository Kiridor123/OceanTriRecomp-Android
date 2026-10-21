#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535868(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80535868u);
    goto loc_80535868;

loc_80535868:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80535584 (4 guest instruction(s))
    r4 = 0x80650000u;
    r4 = (r4 + -12872);
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x80535584
    r0 = 0;
    r4 = 0x80650000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 8), r0);
    r5 = (r31 + 8);
    r4 = (r4 + -12848);
    r6 = (r31 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r0);
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r6);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80535868_statefree_v0(uint32_t native_r1, uint32_t native_r3, uint32_t native_r31, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r31 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x80535868u);
    goto loc_80535868;

loc_80535868:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r31 = cached_r3;
    // inline leaf 0x80535584 (4 guest instruction(s))
    cached_r4 = 0x80650000u;
    cached_r4 = (cached_r4 + -12872);
    MemoryInline::FlatWrite32(cached_r3, cached_r4);
    // end of inlined leaf 0x80535584
    cached_r0 = 0;
    cached_r4 = 0x80650000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r31, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r31 + 8), cached_r0);
    cached_r5 = (cached_r31 + 8);
    cached_r4 = (cached_r4 + -12848);
    cached_r6 = (cached_r31 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r31 + 12), cached_r0);
    cached_r3 = cached_r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r31 + 20), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r31 + 24), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r4)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r31, cached_r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r31 + 4), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r31 + 8), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r31 + 12), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r31 + 16), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r31 + 20), cached_r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r31 + 24), cached_r6);
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);



return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(native_lr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80535868 symbol=func_80535868_statefree_v0 gpr_in=0x8000000A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80535868_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r31 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x80535868u);
    goto loc_80535868;

loc_80535868:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r31 = cached_r3;
    // inline leaf 0x80535584 (4 guest instruction(s))
    cached_r4 = 0x80650000u;
    cached_r4 = (cached_r4 + -12872);
    MemoryInline::FlatWrite32(cached_r3, cached_r4);
    // end of inlined leaf 0x80535584
    cached_r0 = 0;
    cached_r4 = 0x80650000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r31, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r31 + 8), cached_r0);
    cached_r5 = (cached_r31 + 8);
    cached_r4 = (cached_r4 + -12848);
    cached_r6 = (cached_r31 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r31 + 12), cached_r0);
    cached_r3 = cached_r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r31 + 20), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r31 + 24), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r4)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r31, cached_r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r31 + 4), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r31 + 8), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r31 + 12), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r31 + 16), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r31 + 20), cached_r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r31 + 24), cached_r6);
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);



return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(native_lr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80535868 symbol=func_80535868_statefree gpr_in=0x0000000A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535868 func_80535868 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_80535868_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80535868(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
