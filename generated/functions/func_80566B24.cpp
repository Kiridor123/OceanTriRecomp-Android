#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80566B24_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80566B24;

loc_80566B24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80560000u;
    r3 = (r13 + -13200);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 27236);
    r31 = 0x80660000u;
    r31 = (r31 + -24992);
    r30 = 0;
    r29 = 0x80660000u;
    r29 = (r29 + -25808);
    r28 = 0x80790000u;
    r28 = (r28 + 12752);
    r0 = (r29 + 728);
    MemoryInline::FlatWrite32((r13 + -13200), r31);
    r5 = (r28 + 0);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r3 = (r13 + -13200);
    MemoryInline::FlatWrite32((r13 + -13200), r0);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    MemoryInline::FlatWrite32((r13 + -13192), r31);
    r0 = (r29 + 552);
    r3 = (r13 + -13192);
    r4 = 0x80560000u;
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r4 = (r4 + 27300);
    r5 = (r28 + 12);
    r3 = (r13 + -13192);
    MemoryInline::FlatWrite32((r13 + -13192), r0);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r28 + 36), r31);
    r3 = (r28 + 36);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -872));
    r31 = (r29 + 640);
    r4 = 0x80560000u;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 4), r30);
    r4 = (r4 + 27088);
    r5 = (r28 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r28 + 36), r31);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 8), f0.d);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    f0.d = MemoryInline::FlatReadFloat32((r2 + -872));
    r3 = (r28 + 60);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r28 + 60), r31);
    r0 = (r29 + 464);
    r4 = 0x80560000u;
    r5 = (r28 + 48);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 4), r30);
    r4 = (r4 + 27364);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 8), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r28 + 60), r0);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80566B24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80566B24_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002006 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80566B24 func_80566B24 preserves=true fpr_mask=0x00000000
