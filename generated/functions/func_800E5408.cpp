#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E5408_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E5408u);
    goto loc_800E5408;

loc_800E5408:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 4);
    r4 = 0x80470000u;
    r4 = (r4 + -2016);
    // inline leaf 0x800E5484 (4 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 3052u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x800E5484
    r3 = (r31 + 1016);
    r4 = 0x80470000u;
    r4 = (r4 + -1904);
    // inline leaf 0x800E5484 (4 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_0, 1012u, r3, r4);
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 1016u, (r3 + 4), r0);
    // end of inlined leaf 0x800E5484
    r3 = (r31 + 2028);
    r4 = 0x80470000u;
    r4 = (r4 + -1792);
    // inline leaf 0x800E5484 (4 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_0, 2024u, r3, r4);
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 2028u, (r3 + 4), r0);
    // end of inlined leaf 0x800E5484
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 3048u, (r31 + 3052), r0);
    r0 = (r31 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 3036u, (r31 + 3040), r0);
    r0 = (r31 + 1016);
    MemoryInline::WriteResolved32(guest_range_0, 3040u, (r31 + 3044), r0);
    r0 = (r31 + 2028);
    MemoryInline::WriteResolved32(guest_range_0, 3044u, (r31 + 3048), r0);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E5408(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E5408_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E5408 func_800E5408 preserves=true fpr_mask=0x00000000
