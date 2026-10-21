#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D3DE8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802D3DE8u);
    goto loc_802D3DE8;

loc_802D3DE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 840), 0, 282u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 860), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 856), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 150u, (r3 + 990), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 281u, (r3 + 1121), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 265u, (r3 + 1105), static_cast<uint8_t>(r0));
    // inline leaf 0x802D3B5C (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 840), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 841), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 842), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 843), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B5C
    r3 = r31;
    // inline leaf 0x802D3B74 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 845), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 846), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B74
    r3 = r31;
    // inline leaf 0x802D3B88 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 898), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 843), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B88
    r3 = r31;
    // inline leaf 0x802D3A84 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 847), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3A84
    r3 = r31;
    // inline leaf 0x802D429C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 886), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 888), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D429C
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802D3DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D3DE8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D3DE8 func_802D3DE8 preserves=true fpr_mask=0x00000000
