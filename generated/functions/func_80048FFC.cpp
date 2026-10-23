#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80048FFC_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t ctr = ctx->ctr;

    goto loc_80048FFC;

loc_80048FFC:
{
    r3 = 0x80670000u;
    r4 = (r3 + -16840);
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80049010:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 700u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 40), r3);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r4 + 48), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 84), r3);
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r4 + 92), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r4 + 128), r3);
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r4 + 136), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r4 + 172), r3);
    MemoryInline::WriteResolved8(guest_range_0, 176u, (r4 + 180), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r4 + 216), r3);
    MemoryInline::WriteResolved8(guest_range_0, 220u, (r4 + 224), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r4 + 260), r3);
    MemoryInline::WriteResolved8(guest_range_0, 264u, (r4 + 268), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r4 + 304), r3);
    MemoryInline::WriteResolved8(guest_range_0, 308u, (r4 + 312), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 344u, (r4 + 348), r3);
    MemoryInline::WriteResolved8(guest_range_0, 352u, (r4 + 356), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r4 + 392), r3);
    MemoryInline::WriteResolved8(guest_range_0, 396u, (r4 + 400), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r4 + 436), r3);
    MemoryInline::WriteResolved8(guest_range_0, 440u, (r4 + 444), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 476u, (r4 + 480), r3);
    MemoryInline::WriteResolved8(guest_range_0, 484u, (r4 + 488), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 520u, (r4 + 524), r3);
    MemoryInline::WriteResolved8(guest_range_0, 528u, (r4 + 532), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 564u, (r4 + 568), r3);
    MemoryInline::WriteResolved8(guest_range_0, 572u, (r4 + 576), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 608u, (r4 + 612), r3);
    MemoryInline::WriteResolved8(guest_range_0, 616u, (r4 + 620), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 652u, (r4 + 656), r3);
    MemoryInline::WriteResolved8(guest_range_0, 660u, (r4 + 664), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 696u, (r4 + 700), r3);
    r4 = (r4 + 704);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80049010;
    }
}

loc_80049098:
{
    r3 = 0x80670000u;
    r3 = (r3 + -15432);
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80048FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80048FFC_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80048FFC func_80048FFC preserves=true fpr_mask=0x00000000
