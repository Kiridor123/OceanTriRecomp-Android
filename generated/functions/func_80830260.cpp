#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80830260(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80830260u);
    goto loc_80830260;

loc_80830260:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r6 = 0x80840000u;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r8 = (r3 + 20);
    r9 = (r3 + 32);
    r6 = (r6 + 25984);
    r31 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18632));
    r0 = 4;
    r30 = r3;
    r4 = 0;
    r5 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 209u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r3 + 208), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 204u, (r3 + 204), static_cast<uint8_t>(r0));
    r3 = (r3 + 180);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 196);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 207));
    r4 = 255;
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18632));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18636));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteFloat32((r30 + 44), f1.d);
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
    MemoryInline::FlatWrite8((r30 + 205), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 206), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 207), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 44), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 28), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 32), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f1.d);
    }
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80830260 func_80830260 preserves=true fpr_mask=0x00000000
