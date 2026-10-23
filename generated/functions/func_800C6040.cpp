#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800C6040_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_800C6040;

loc_800C6040:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 28);
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r3 = (r31 + 40);
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30912));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f0.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f0.d);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_800C6040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800C6040_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C6040 func_800C6040 preserves=true fpr_mask=0x00000000
