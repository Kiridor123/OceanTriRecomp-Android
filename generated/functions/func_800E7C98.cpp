#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7D08(CpuContext* ctx);
extern "C" void func_800E7D08_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_800E7D08_statefree(uint32_t);

extern "C" uint32_t func_800E7C98_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E7C98;

loc_800E7C98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x800E7D28 (4 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D28
    r3 = (r31 + 8);
    // inline leaf 0x800E7D18 (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D18
    r3 = (r31 + 16);
    // inline leaf 0x800E7D08 (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D08
    r3 = (r31 + 24);
    // inline leaf 0x800E7D08 (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D08
    r3 = (r31 + 32);
    // inline leaf 0x800E7D08 (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D08
    r3 = (r31 + 40);
    // inline leaf 0x800E7D08 (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x800E7D08
    r3 = (r31 + 48);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7D08u) && KnownTranslatedCpuCall<0x800E7D08u>::kAvailable && !KnownTranslatedCpuCall<0x800E7D08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7D08u>()) {
        func_800E7D08_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E7D08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r31 + 56);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7D08u) && KnownTranslatedCpuCall<0x800E7D08u>::kAvailable && !KnownTranslatedCpuCall<0x800E7D08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7D08u>()) {
        func_800E7D08_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E7D08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r31 + 64);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7D08u) && KnownTranslatedCpuCall<0x800E7D08u>::kAvailable && !KnownTranslatedCpuCall<0x800E7D08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7D08u>()) {
        func_800E7D08_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E7D08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_800E7C98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E7C98_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7C98 func_800E7C98 preserves=true fpr_mask=0x00000000
