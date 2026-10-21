#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80088C8C_ra188_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r8 = arg_r8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80088C8Cu);
    goto loc_80088C8C;

loc_80088C8C:
{
    r4 = 0x80080000u;
    r8 = (r4 + 20640);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
    r7 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    r4 = 0x80080000u;
    r6 = (r4 + 18068);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    r5 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    r4 = 0x80080000u;
    r0 = (r4 + 19064);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    r0 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    r4 = 0x80080000u;
    r0 = (r4 + 19456);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r5);
    }
    r5 = 5;
    r4 = (r3 + 40);
    r0 = 31;
    ctr = r0;
}

loc_80088CF0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r8);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 36), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 40), r8);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 44), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + 48), r8);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r4 + 52), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r4 + 56), r8);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r4 + 60), r7);
    }
    r4 = (r4 + 64);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80088CF0;
    }
}

loc_80088D3C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r3 + r0);
    r4 = 0x80080000u;
    r4 = (r4 + 20640);
    MemoryInline::FlatWrite32(r5, r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    MemoryInline::FlatWrite32((r5 + 16), r4);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80088C8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80088C8C_ra188_0_10_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000188 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80088C8C func_80088C8C preserves=true fpr_mask=0x00000000
