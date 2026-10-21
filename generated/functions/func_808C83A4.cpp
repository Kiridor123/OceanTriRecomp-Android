#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808C83A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808C83A4u);
    goto loc_808C83A4;

loc_808C83A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x801FC944 (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = (r3 + 192);
    // end of inlined leaf 0x801FC944
    r31 = 0;
    MemoryInline::FlatWriteRam32(r3, r31);
    // inline leaf 0x802E04EC (2 guest instruction(s))
    r3 = (r13 + -17052);
    // end of inlined leaf 0x802E04EC
    MemoryInline::FlatWrite32(r3, r31);
    r3 = 0x806C0000u;
    r4 = (r3 + 6208);
    r3 = 0x806C0000u;
    r3 = (r3 + 6272);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r31);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r31);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r31);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r31);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r31);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r31);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r31);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r31);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r31);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r31);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r31);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r31);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r31);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r31);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r31);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r31);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r31);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r31);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r31);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r31);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r31);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r31);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r31);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r31);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 48), r31);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r31);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r31);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r31);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r31);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r31);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 60), r31);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28840), r31);
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r31);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r31);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r31);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r3 + 52), r31);
    }
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28536), r31);
    r3 = (r3 + 28536);
    MemoryInline::FlatWriteRam32((r3 + 4), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28544), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28548), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28552), r31);
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r31);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r31);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r31);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 44), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r3 + 52), r31);
    }
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28560), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28564), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28568), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28576), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28580), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28584), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28588), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28592), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28596), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28600), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28604), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28608), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28612), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28616), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28620), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28624), r31);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28936), r31);
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam32((r3 + -13424), r31);
    r3 = (r3 + -13424);
    MemoryInline::FlatWriteRam32((r3 + 4), r31);
    MemoryInline::FlatWriteRam32((r3 + 8), r31);
    MemoryInline::FlatWriteRam32((r3 + 12), r31);
    r3 = 0x808E0000u;
    r31 = (r3 + 188);
    goto loc_808C85C0;
}

loc_808C85B4:
{
    ctr = r12;
    ctx->lr = 0x808C85BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_808C85C0:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_808C85C8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_808C85B4;
    }
}

loc_808C85CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808C83A4 func_808C83A4 preserves=true fpr_mask=0x00000000
