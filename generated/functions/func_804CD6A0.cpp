#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CD6A0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804CD6A0u);
    goto loc_804CD6A0;

loc_804CD6A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 448u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r13)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 52), r13);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 56), r14);
    }
    r0 = ctx->gqr[1];
    MemoryInline::WriteResolved32(guest_range_0, 420u, (r3 + 424), r0);
    r0 = ctx->gqr[2];
    MemoryInline::WriteResolved32(guest_range_0, 424u, (r3 + 428), r0);
    r0 = ctx->gqr[3];
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r3 + 432), r0);
    r0 = ctx->gqr[4];
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r3 + 436), r0);
    r0 = ctx->gqr[5];
    MemoryInline::WriteResolved32(guest_range_0, 436u, (r3 + 440), r0);
    r0 = ctx->gqr[6];
    MemoryInline::WriteResolved32(guest_range_0, 440u, (r3 + 444), r0);
    r0 = ctx->gqr[7];
    MemoryInline::WriteResolved32(guest_range_0, 444u, (r3 + 448), r0);
    r0 = cr;
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 128), r0);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 132), r0);
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r3 + 408), r0);
    r0 = ctx->msr;
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 412), r0);
    r0 = ctr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 136), r0);
    r0 = xer;
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 140), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r1)) << 32) | static_cast<uint32_t>(r2)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r1);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r2);
    }
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_804CD6A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CD6A0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD6A0 func_804CD6A0 preserves=true fpr_mask=0x00000000
