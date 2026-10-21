#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054E3CC_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8054E3CCu);
    goto loc_8054E3CC;

loc_8054E3CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8054E3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8054E3D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 5), 0, 139u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 5), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 19u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 19u, (r3 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 23u, (r3 + 28), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 27u, (r3 + 32), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 123u, (r3 + 128), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 6), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 31u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 31u, (r3 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 35u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 39u, (r3 + 44), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 125u, (r3 + 130), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 7), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 43u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 43u, (r3 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 47u, (r3 + 52), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 51u, (r3 + 56), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 127u, (r3 + 132), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 55u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 55u, (r3 + 60), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 59u, (r3 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 63u, (r3 + 68), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 129u, (r3 + 134), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 67u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 67u, (r3 + 72), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 71u, (r3 + 76), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 75u, (r3 + 80), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 131u, (r3 + 136), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 10), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 79u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 79u, (r3 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 83u, (r3 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 87u, (r3 + 92), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 133u, (r3 + 138), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 11), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 91u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 91u, (r3 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 95u, (r3 + 100), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 99u, (r3 + 104), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 135u, (r3 + 140), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 12), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 103u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 103u, (r3 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 107u, (r3 + 112), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 111u, (r3 + 116), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 137u, (r3 + 142), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_8054E3CC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8054E3CC_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054E3CC func_8054E3CC preserves=true fpr_mask=0x00000000
