#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CD8A0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804CD8A0u);
    goto loc_804CD8A0;

loc_804CD8A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 448u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r3 + 408), r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r5);
    r11 = 0;
    r11 = (r11 | 36914);
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 412), r11);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 128), r0);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 140), r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r2);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 52), r13);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 68), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 76), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 84), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 88), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 92), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 100), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 104), r0);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 108), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 116), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 124), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 420), r0);
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r3 + 424), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r3 + 428), r0);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r3 + 432), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r3 + 436), r0);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r3 + 440), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r3 + 444), r0);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r3 + 448), r0);
    }
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl0_0x804CD870:
{
    r5 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 412u, (r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::WriteResolved16(guest_range_0, 414u, (r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl0_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl0_cont_804CD870;
}

loc_inl0_return:
{
}

loc_inl0_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return r4;
}

}

extern "C" void func_804CD8A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CD8A0_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000203C gpr_write=0x00000831 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD8A0 func_804CD8A0 preserves=true fpr_mask=0x00000000
