#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80554A54_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80554A54u);
    goto loc_80554A54;

loc_80554A54:
{
    r7 = 0x80650000u;
    r8 = 0;
    r7 = (r7 + 9352);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r8);
    r0 = (r7 + 28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r8);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

extern "C" void func_80554A54(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80554A54_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000181 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80554A54 func_80554A54 preserves=true fpr_mask=0x00000000
