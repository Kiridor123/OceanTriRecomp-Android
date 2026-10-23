#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8021DB94_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_8021DB94;

loc_8021DB94:
{
    r4 = 0x806B0000u;
    r5 = (r4 + -12984);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8021DBA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021DBB0;
    }
}

loc_8021DBA8:
{
    r0 = -1;
    MemoryInline::FlatWriteRam16((r5 + 332), static_cast<uint16_t>(r0));
}

loc_8021DBB0:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r4);
    MemoryInline::FlatWriteRam8((r5 + 340), static_cast<uint8_t>(r4));
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15968));
    r3 = -1;
    r0 = 2;
    ctr = r0;
}

loc_8021DBD4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 24), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 28), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 32), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 36), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 40), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 48), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r5 + 52), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 56), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 60), r4);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 64), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r5 + 68), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r5 + 72), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r5 + 76), r4);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r5 + 80), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r5 + 84), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r5 + 88), r3);
    }
    r6 = (r6 + 5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r5 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r5 + 96), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r5 + 100), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r5 + 104), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r5 + 108), r4);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r5 + 112), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r5 + 116), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r5 + 120), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r5 + 124), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r5 + 128), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r5 + 132), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r5 + 136), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r5 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r5 + 144), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r5 + 148), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r5 + 152), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r5 + 156), r4);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r5 + 160), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r5 + 164), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r5 + 168), r3);
    }
    r5 = (r5 + 160);
    r6 = (r6 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021DBD4;
    }
}

loc_8021DC84:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021DB94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021DB94_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021DB94 func_8021DB94 preserves=true fpr_mask=0x00000000
