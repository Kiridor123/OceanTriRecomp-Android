#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8055AB14_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8055AB14u);
    goto loc_8055AB14;

loc_8055AB14:
{
    r5 = 0x80790000u;
    r0 = 11;
    r5 = (r5 + 10000);
    r4 = -1;
    ctr = r0;
}

loc_8055AB28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 36), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 40), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 44), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 48), r4);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 52), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r5 + 60), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r5 + 64), r4);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r5 + 68), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r5 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r5 + 76), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r5 + 80), r4);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r5 + 84), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r5 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r5 + 92), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r5 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r5 + 100), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r5 + 104), r4);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r5 + 108), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r5 + 112), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r5 + 116), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r5 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r5 + 124), r4);
    }
    r5 = (r5 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8055AB28;
    }
}

loc_8055ABB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -976));
    MemoryInline::FlatWriteFloat32((r3 + 152), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8055AB14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055AB14_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055AB14 func_8055AB14 preserves=true fpr_mask=0x00000000
