#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055D2AC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8055D2ACu);
    goto loc_8055D2AC;

loc_8055D2AC:
{
    r10 = 0x80650000u;
    r9 = 0;
    r10 = (r10 + 15848);
    r8 = 2;
    r7 = 3;
    r0 = 1;
}

loc_8055D2C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 61u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r10);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r9);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r9);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r6);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r7);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 60), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8055D30C:
{
    r0 = (r13 + -13232);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

extern "C" void func_8055D2AC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8055D2AC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x00000781 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055D2AC func_8055D2AC preserves=true fpr_mask=0x00000000
