#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803F75AC_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803F75ACu);
    goto loc_803F75AC;

loc_803F75AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x803F753C (7 guest instruction(s))
    r4 = 0x80600000u;
    r0 = (r4 + -12144);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 29u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    // end of inlined leaf 0x803F753C
    r3 = 0x80600000u;
    r0 = (r3 + -11964);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r0);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r0);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r31 + 28), static_cast<uint8_t>(r0));
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F75AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F75AC_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F75AC func_803F75AC preserves=true fpr_mask=0x00000000
