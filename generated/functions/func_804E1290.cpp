#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E1290_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_804E1290;

loc_804E1290:
{
    r10 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r10 + 8));
    r0 = MemoryInline::FlatRead32((r10 + 12));
    r0 = (r5 + r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E1324;
    }
}

loc_804E12A8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 65536;
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r5 = (r5 + 10);
    r9 = MemoryInline::FlatRead32((r7 + 28));
    r3 = 0;
    r8 = MemoryInline::FlatRead32((r6 + 4));
    r0 = 134217728;
    r7 = MemoryInline::FlatRead32((r10 + 8));
    r6 = MemoryInline::FlatRead32((r10 + 12));
    r8 = (r9 + r8);
    r7 = (r8 + r7);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 150), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 150), r5);
    r5 = (r7 + r6);
    r5 = (r5 + -1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 154), r7);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 158), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 162), r8);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 166), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 170), r3);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 174), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 178), r3);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 182), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 186), r3);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 190), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 194), r3);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 198), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 202), r3);
    goto loc_804E138C;
}

loc_804E1324:
{
    r8 = 0;
    MemoryInline::FlatWrite32((r3 + 40), r8);
    r9 = MemoryInline::FlatRead32((r3 + 28));
    r5 = 10;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = 134217728;
    r6 = MemoryInline::FlatRead32((r9 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 28));
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r6 = (r7 + r6);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 150), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 150), r5);
    r3 = (r6 + r3);
    r3 = (r3 + -1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 154), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 158), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 162), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 166), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 170), r8);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 174), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 178), r8);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 182), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 186), r8);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 190), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 194), r8);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + 198), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r4 + 202), r8);
}

loc_804E138C:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 & -30721);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E1290(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E1290_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E1290 func_804E1290 preserves=true fpr_mask=0x00000000
