#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8098DE5C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8098DE5C;

loc_8098DE5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0x809D0000u;
    r3 = (r29 + 13680);
    r28 = 0x80990000u;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 14644));
    f2.d = f1.d;
    r4 = 0x80990000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 14664));
    // inline leaf 0x8098DF0C (4 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8098DF0C
    r29 = (r29 + 13680);
    r3 = (r29 + 12);
    r30 = 0x80990000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 14796));
    r31 = 0x80990000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 14800));
    r4 = 0x80990000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 14804));
    // inline leaf 0x8098DF0C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8098DF0C
    r3 = (r29 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 14800));
    r4 = 0x80990000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 14808));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 14796));
    // inline leaf 0x8098DF0C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8098DF0C
    r3 = (r29 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 14644));
    r4 = 0x80990000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 14672));
    f3.d = f1.d;
    // inline leaf 0x8098DF0C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8098DF0C
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8098DE5C func_8098DE5C preserves=true fpr_mask=0x00000000
