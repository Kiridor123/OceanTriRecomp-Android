#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D5940_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D5940u);
    goto loc_800D5940;

loc_800D5940:
{
    r3 = MemoryInline::FlatRead32((r13 + -17584));
    r5 = (r3 + 65536);
    r5 = (r5 + 24688);
    r4 = 0;
    r3 = -1;
    r0 = 64;
    ctr = r0;
}

loc_800D595C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 1216u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r5 + 68), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r5 + 72), r4);
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r5 + 76), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r5 + 140), r3);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r5 + 144), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r5 + 148), r4);
    MemoryInline::WriteResolved8(guest_range_0, 152u, (r5 + 152), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r5 + 216), r3);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r5 + 220), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r5 + 224), r4);
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r5 + 228), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r5 + 292), r3);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r5 + 296), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r5 + 300), r4);
    MemoryInline::WriteResolved8(guest_range_0, 304u, (r5 + 304), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r5 + 368), r3);
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r5 + 372), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 376u, (r5 + 376), r4);
    MemoryInline::WriteResolved8(guest_range_0, 380u, (r5 + 380), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 444u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r5 + 444), r3);
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r5 + 448), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 452u, (r5 + 452), r4);
    MemoryInline::WriteResolved8(guest_range_0, 456u, (r5 + 456), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 520u, (r5 + 520), r3);
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r5 + 524), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 528u, (r5 + 528), r4);
    MemoryInline::WriteResolved8(guest_range_0, 532u, (r5 + 532), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 596u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 596u, (r5 + 596), r3);
        MemoryInline::WriteResolved32(guest_range_0, 600u, (r5 + 600), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 604u, (r5 + 604), r4);
    MemoryInline::WriteResolved8(guest_range_0, 608u, (r5 + 608), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 672u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 672u, (r5 + 672), r3);
        MemoryInline::WriteResolved32(guest_range_0, 676u, (r5 + 676), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 680u, (r5 + 680), r4);
    MemoryInline::WriteResolved8(guest_range_0, 684u, (r5 + 684), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 748u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 748u, (r5 + 748), r3);
        MemoryInline::WriteResolved32(guest_range_0, 752u, (r5 + 752), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 756u, (r5 + 756), r4);
    MemoryInline::WriteResolved8(guest_range_0, 760u, (r5 + 760), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 824u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 824u, (r5 + 824), r3);
        MemoryInline::WriteResolved32(guest_range_0, 828u, (r5 + 828), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 832u, (r5 + 832), r4);
    MemoryInline::WriteResolved8(guest_range_0, 836u, (r5 + 836), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 900u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 900u, (r5 + 900), r3);
        MemoryInline::WriteResolved32(guest_range_0, 904u, (r5 + 904), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 908u, (r5 + 908), r4);
    MemoryInline::WriteResolved8(guest_range_0, 912u, (r5 + 912), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 976u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 976u, (r5 + 976), r3);
        MemoryInline::WriteResolved32(guest_range_0, 980u, (r5 + 980), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 984u, (r5 + 984), r4);
    MemoryInline::WriteResolved8(guest_range_0, 988u, (r5 + 988), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1052u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1052u, (r5 + 1052), r3);
        MemoryInline::WriteResolved32(guest_range_0, 1056u, (r5 + 1056), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1060u, (r5 + 1060), r4);
    MemoryInline::WriteResolved8(guest_range_0, 1064u, (r5 + 1064), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1128u, (r5 + 1128), r3);
        MemoryInline::WriteResolved32(guest_range_0, 1132u, (r5 + 1132), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1136u, (r5 + 1136), r4);
    MemoryInline::WriteResolved8(guest_range_0, 1140u, (r5 + 1140), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1204u, (r5 + 1204), r3);
        MemoryInline::WriteResolved32(guest_range_0, 1208u, (r5 + 1208), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1212u, (r5 + 1212), r4);
    r5 = (r5 + 1216);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D595C;
    }
}

loc_800D5A64:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D5940(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D5940_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D5940 func_800D5940 preserves=true fpr_mask=0x00000000
