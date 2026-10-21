#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800538E0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x800538E0u);
    goto loc_800538E0;

loc_800538E0:
{
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r7 + 32), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r7 + 20), static_cast<uint16_t>(r3));
    r0 = (r3 + r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r7 + 28), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r7 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r7 + 26), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r7 + 22), static_cast<uint16_t>(r4));
    r0 = (r4 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r7 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r7 + 30), static_cast<uint16_t>(r0));
    r0 = (r7 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_800538E0_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;
    uint32_t cached_r7 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x800538E0u);
    goto loc_800538E0;

loc_800538E0:
{
    cached_r7 = 0x80670000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r7 + -12896));
    cached_r0 = (cached_r0 | 4096);
    MemoryInline::FlatWriteRam32((cached_r7 + -12896), cached_r0);
    cached_r7 = (cached_r7 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (cached_r7 + 32), static_cast<uint16_t>(cached_r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (cached_r7 + 20), static_cast<uint16_t>(cached_r3));
    cached_r0 = (cached_r3 + cached_r5);
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r0)));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (cached_r7 + 28), static_cast<uint16_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (cached_r7 + 24), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (cached_r7 + 26), cached_r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 14u, (cached_r7 + 22), static_cast<uint16_t>(cached_r4));
    cached_r0 = (cached_r4 + cached_r6);
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r0)));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (cached_r7 + 34), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (cached_r7 + 30), static_cast<uint16_t>(cached_r0));
    cached_r0 = (cached_r7 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r7 + 8), cached_r0);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800538E0 symbol=func_800538E0_statefree_v0 gpr_in=0x00000078 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800538E0_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;
    uint32_t cached_r7 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x800538E0u);
    goto loc_800538E0;

loc_800538E0:
{
    cached_r7 = 0x80670000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r7 + -12896));
    cached_r0 = (cached_r0 | 4096);
    MemoryInline::FlatWriteRam32((cached_r7 + -12896), cached_r0);
    cached_r7 = (cached_r7 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (cached_r7 + 32), static_cast<uint16_t>(cached_r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (cached_r7 + 20), static_cast<uint16_t>(cached_r3));
    cached_r0 = (cached_r3 + cached_r5);
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r0)));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (cached_r7 + 28), static_cast<uint16_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (cached_r7 + 24), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (cached_r7 + 26), cached_r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 14u, (cached_r7 + 22), static_cast<uint16_t>(cached_r4));
    cached_r0 = (cached_r4 + cached_r6);
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r0)));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (cached_r7 + 34), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (cached_r7 + 30), static_cast<uint16_t>(cached_r0));
    cached_r0 = (cached_r7 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r7 + 8), cached_r0);

    return static_cast<uint64_t>(cached_r7);
}


    return static_cast<uint64_t>(cached_r7);
}
// RECOMP_STATE_FREE_ABI address=0x800538E0 symbol=func_800538E0_statefree gpr_in=0x00000078 gpr_out=0x00000080 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800538E0 func_800538E0 preserves=true fpr_mask=0x00000000


extern "C" void func_800538E0_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_800538E0(ctx);
}
