#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80819C1Cu);
    goto loc_80819C1C;

loc_80819C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80819C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x804DD150u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r3 = (r3 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r3);
    r0 = (r3 + -1);
}

loc_80819C44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_80819C50;
    }
}

loc_80819C48:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r0);
}

loc_80819C50:
{
    r3 = 0x80860000u;
    r0 = MemoryInline::FlatRead32((r3 + 21400));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r0);
    r5 = (r3 + 21400);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 8), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r0);
    r0 = 35;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 40), r0);
    r3 = 0x80820000u;
    r0 = (r3 + -25580);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r4);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 32), r4);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17440));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 56), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 16), r0);
    r0 = 524288;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 44), r0);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 60), r4);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 36), r4);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80819C1C func_80819C1C preserves=true fpr_mask=0x00000000
