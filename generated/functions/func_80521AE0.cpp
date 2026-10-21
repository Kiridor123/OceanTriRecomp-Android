#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805219C0(CpuContext* ctx);
extern "C" void func_805219C0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80521AE0_ra1c0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[8] = arg_r8;

    MKW_GUEST_ENTER(0x80521AE0u);
    goto loc_80521AE0;

loc_80521AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 3020;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80770000u;
    r3 = (r31 + -28376);
    if constexpr (KnownRegArgsCpuCall<0x805219C0u>(&func_805219C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_805219C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x805219C0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r7 = (r31 + -28376);
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 440), 0, 2468u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 440), r6);
    r0 = 24;
    r3 = (r0 * 56);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r7 + 496), r6);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r7 + 552), r6);
    r5 = (r7 + r3);
    r0 = (r0 * 44);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r7 + 608), r6);
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r7 + 664), r6);
    r4 = (r7 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r7 + 720), r6);
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r7 + 776), r6);
    MemoryInline::WriteResolved32(guest_range_0, 392u, (r7 + 832), r6);
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r7 + 888), r6);
    MemoryInline::WriteResolved32(guest_range_0, 504u, (r7 + 944), r6);
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r7 + 1000), r6);
    MemoryInline::WriteResolved32(guest_range_0, 616u, (r7 + 1056), r6);
    MemoryInline::WriteResolved32(guest_range_0, 672u, (r7 + 1112), r6);
    MemoryInline::WriteResolved32(guest_range_0, 728u, (r7 + 1168), r6);
    MemoryInline::WriteResolved32(guest_range_0, 784u, (r7 + 1224), r6);
    MemoryInline::WriteResolved32(guest_range_0, 840u, (r7 + 1280), r6);
    MemoryInline::WriteResolved32(guest_range_0, 896u, (r7 + 1336), r6);
    MemoryInline::WriteResolved32(guest_range_0, 952u, (r7 + 1392), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1008u, (r7 + 1448), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1064u, (r7 + 1504), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1120u, (r7 + 1560), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1176u, (r7 + 1616), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1232u, (r7 + 1672), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1288u, (r7 + 1728), r6);
    MemoryInline::FlatWrite32((r5 + 440), r6);
    MemoryInline::FlatWrite32((r5 + 496), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1452u, (r7 + 1892), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1496u, (r7 + 1936), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1540u, (r7 + 1980), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1584u, (r7 + 2024), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1628u, (r7 + 2068), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1672u, (r7 + 2112), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1716u, (r7 + 2156), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1760u, (r7 + 2200), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1804u, (r7 + 2244), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1848u, (r7 + 2288), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1892u, (r7 + 2332), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1936u, (r7 + 2376), r6);
    MemoryInline::WriteResolved32(guest_range_0, 1980u, (r7 + 2420), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2024u, (r7 + 2464), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2068u, (r7 + 2508), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2112u, (r7 + 2552), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2156u, (r7 + 2596), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2200u, (r7 + 2640), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2244u, (r7 + 2684), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2288u, (r7 + 2728), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2332u, (r7 + 2772), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2376u, (r7 + 2816), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2420u, (r7 + 2860), r6);
    MemoryInline::WriteResolved32(guest_range_0, 2464u, (r7 + 2904), r6);
    MemoryInline::FlatWrite32((r4 + 1892), r6);
    MemoryInline::FlatWrite32((r4 + 1936), r6);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80521AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80521AE0_ra1c0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003C2 gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80521AE0 func_80521AE0 preserves=true fpr_mask=0x00000000
