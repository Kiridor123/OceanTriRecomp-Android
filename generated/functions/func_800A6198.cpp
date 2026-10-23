#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800A6198_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800A6198;

loc_800A6198:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r31 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r31 + 140);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 96), 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 96), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 104), r3);
    }
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r31 + 108), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 112), r3);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31400));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 116), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31396));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 124), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 128), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 136), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 140), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 144), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 148), f1.d);
    }
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r31 + 154), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r31 + 153), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r31 + 152), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r31 + 155), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r31 + 158), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r31 + 157), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r31 + 156), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r31 + 159), static_cast<uint8_t>(r0));
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_800A6198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800A6198_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A6198 func_800A6198 preserves=true fpr_mask=0x00000000
