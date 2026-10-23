#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80192694_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80192694;

loc_80192694:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = (r3 + 808);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22608));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22604));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 44), f0.d);
    }
    r3 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + 48), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r31 + 49), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r31 + 50), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r31 + 51), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r31 + 52), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r31 + 53), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 42u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r31 + 54), r3);
        MemoryInline::WriteResolved16(guest_range_0, 44u, (r31 + 56), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r31 + 58), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80192694(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80192694_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80192694 func_80192694 preserves=true fpr_mask=0x00000000
