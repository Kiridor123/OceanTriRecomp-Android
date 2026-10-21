#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D6434(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809D6434u);
    goto loc_809D6434;

loc_809D6434:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x803BE370 (3 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20344);
    // end of inlined leaf 0x803BE370
    r4 = 0;
    r5 = 40;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x802E04EC (2 guest instruction(s))
    r3 = (r13 + -17052);
    // end of inlined leaf 0x802E04EC
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28672), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28676), r0);
    r3 = 0x806D0000u;
    MemoryInline::FlatWriteRam32((r3 + -6000), r0);
    r3 = (r3 + -6000);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28720), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28864), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28640), r0);
    r3 = 0x80A70000u;
    r3 = (r3 + 31544);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 152u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r0);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r0);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r0);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r0);
    }
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28704), r0);
    // inline leaf 0x809D6084 (16 guest instruction(s))
    r0 = 0;
    r3 = 0x806C0000u;
    MemoryInline::FlatWriteRam32((r3 + 31144), r0);
    r3 = (r3 + 31144);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 40), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 44), r0);
    // end of inlined leaf 0x809D6084
    r3 = 0x80A00000u;
    r31 = (r3 + 31040);
    goto loc_809D6560;
}

loc_809D6554:
{
    ctr = r12;
    ctx->lr = 0x809D655Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_809D6560:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_809D6568:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_809D6554;
    }
}

loc_809D656C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D6434 func_809D6434 preserves=true fpr_mask=0x00000000
