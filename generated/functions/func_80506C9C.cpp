#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80506C9C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80506C9Cu);
    goto loc_80506C9C;

loc_80506C9C:
{
    r4 = 0x80630000u;
    r5 = 0x80630000u;
    r4 = (r4 + 992);
    r8 = 0x80630000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 26u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r5 = (r5 + 1304);
    r4 = 0;
    r0 = 63;
    r8 = (r8 + 1288);
    r7 = MemoryInline::FlatRead32(r8);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    }
    r6 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

}

extern "C" void func_80506C9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80506C9C_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80506C9C func_80506C9C preserves=true fpr_mask=0x00000000
