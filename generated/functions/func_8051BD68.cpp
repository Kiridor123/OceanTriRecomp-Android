#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051BD68_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8051BD68;

loc_8051BD68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -13724));
}

loc_8051BD80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051BDB8;
    }
}

loc_8051BD84:
{
    r31 = 0x80760000u;
    r31 = (r31 + 20768);
    MemoryInline::FlatWrite32((r13 + -13724), r31);
    r3 = r31;
    // inline leaf 0x80514C38 (12 guest instruction(s))
    r4 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1988), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 2004), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 2008), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 1988), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 1992), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 1996), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 2000), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 2012), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 2016), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 2020), r4);
    // end of inlined leaf 0x80514C38
    r3 = (r31 + 2048);
    // inline leaf 0x805152D8 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x805152D8
    r3 = (r31 + 2056);
    // inline leaf 0x80515DE8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80515DE8
    r3 = (r31 + 2060);
    // inline leaf 0x80515528 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 24), r0);
    // end of inlined leaf 0x80515528
    r3 = (r31 + 2112);
    // inline leaf 0x80517C94 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 840), r0);
    // end of inlined leaf 0x80517C94
}

loc_8051BDB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r13 + -13724));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051BD68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051BD68_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051BD68 func_8051BD68 preserves=true fpr_mask=0x00000000
