#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80552728_ra38_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80552728;

loc_80552728:
{
    r9 = 0x80650000u;
    r10 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    r9 = (r9 + 9424);
    r0 = -1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1020));
    r7 = 0x80650000u;
    r8 = (r9 + 28);
    r7 = (r7 + 6096);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 512u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r10);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 44), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 45), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r3 + 464), r0);
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r3 + 468), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r3 + 472), r10);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 476u, (r3 + 476), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r3 + 480), r10);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r3 + 484), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r3 + 488), r10);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r3 + 492), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 496u, (r3 + 496), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 500u, (r3 + 500), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 504u, (r3 + 504), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 508u, (r3 + 508), r10);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r10);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r10);
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r10);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r10);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r10);
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r10);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r10);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r10);
    MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r10);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r10);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r10);
    MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r10);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r10);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r10);
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r10);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r10);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r10);
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r10);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r10);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r10);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r10);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r10);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r10);
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 252), r10);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r10);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r10);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 256), r10);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r10);
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r10);
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 260), r10);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r10);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r10);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r10);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r10);
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r10);
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r3 + 268), r10);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r10);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r10);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r3 + 272), r10);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r10);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r10);
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r3 + 276), r10);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r10);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 192), r10);
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r3 + 280), r10);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r10);
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r10);
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r3 + 284), r10);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r10);
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r10);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r3 + 288), r10);
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r10);
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r10);
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r3 + 292), r10);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r10);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 208), r10);
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r3 + 296), r10);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r10);
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r10);
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r3 + 300), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 216), r10);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r10);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_80552728(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80552728_ra38_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007C gpr_write=0x00000781 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80552728 func_80552728 preserves=true fpr_mask=0x00000000
