#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022312C_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8022312C;

loc_8022312C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r4, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r4 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 32), f0.d);
    }
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_8022312C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8022312C_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000014 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022312C func_8022312C preserves=true fpr_mask=0x00000000
