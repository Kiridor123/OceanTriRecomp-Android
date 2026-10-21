#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E48B4_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800E48B4u);
    goto loc_800E48B4;

loc_800E48B4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17520), 0, 36u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r13 + -17520), static_cast<uint8_t>(r0));
    r3 = (r13 + -17520);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30248));
    r3 = (r13 + -17512);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r13 + -17512), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r13 + -17504), f0.d);
    r3 = (r13 + -17496);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r13 + -17496), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r13 + -17488), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_800E48B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E48B4_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002004 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E48B4 func_800E48B4 preserves=true fpr_mask=0x00000000
