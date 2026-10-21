#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80220060(CpuContext* ctx);
extern "C" uint32_t func_80220060_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80220060_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80220060_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8021FFC0_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x8021FFC0u);
    goto loc_8021FFC0;

loc_8021FFC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x806B0000u;
    r3 = (r31 + -12408);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15880), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15880));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15876));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -15872));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r31 = (r31 + -12408);
    r3 = (r31 + 12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -15868));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -15864));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -15860));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r31 + 24);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -15856));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -15852));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -15848));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r31 + 36);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -15844));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -15840));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -15836));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x806B0000u;
    r3 = (r3 + -12360);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -15832));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -15828));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -15824));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    ctx->lr = 0x8022004Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80220060u) && KnownTranslatedCpuCall<0x80220060u>::kAvailable && !KnownTranslatedCpuCall<0x80220060u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80220060u>()) {
        const auto state_free_result_80220060_1AA4 = func_80220060_statefree_v0(r1, r3, r31, 0x8022004Cu);
        r1 = static_cast<uint32_t>(state_free_result_80220060_1AA4[0]);
        r3 = static_cast<uint32_t>(state_free_result_80220060_1AA4[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80220060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_8021FFC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021FFC0_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021FFC0 func_8021FFC0 preserves=true fpr_mask=0x00000000
