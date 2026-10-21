#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800C6510_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
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
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800C6510u);
    goto loc_800C6510;

loc_800C6510:
{
    r10 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 112));
    MemoryInline::FlatWrite32(r4, r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 116));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 120));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 124));
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 128));
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    r3 = r9;
    r4 = (r10 + 132);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    ctx->gpr[0] = r0;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C6510(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C6510_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F8 gpr_write=0x00000419 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C6510 func_800C6510 preserves=true fpr_mask=0x00000000
