#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803E137C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_803E137C;

loc_803E137C:
{
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4896));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r6);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r6);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r3 + 116), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r6);
    r4 = 0x80570000u;
    r5 = (r4 + 11248);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r6);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return r4;
}

}

extern "C" void func_803E137C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803E137C_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803E137C func_803E137C preserves=true fpr_mask=0x00000000
