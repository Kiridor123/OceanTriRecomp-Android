#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009B330(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8009B330u);
    goto loc_8009B330;

loc_8009B330:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31540));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f1.d);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 52), f1.d);
    }
    r3 = (r1 + 8);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r31;
    r5 = 0;
    ctx->lr = 0x8009B3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804BACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FDE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFC fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009B330 func_8009B330 preserves=true fpr_mask=0x00000000
