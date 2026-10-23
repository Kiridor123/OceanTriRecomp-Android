#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800514F4(CpuContext* ctx);
extern "C" void func_800514F4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800A8A04(CpuContext* ctx);
extern "C" void func_800A8A04_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800514F4_statefree(uint32_t, uint32_t);
extern "C" void func_800A8A04_statefree(uint32_t, uint32_t);

extern "C" void func_800AE308(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_800AE308;

loc_800AE308:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800A8A04 (25 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800A8A04
    r3 = (r30 + 48);
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A8A04u) && KnownTranslatedCpuCall<0x800A8A04u>::kAvailable && !KnownTranslatedCpuCall<0x800A8A04u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A8A04u>()) {
        func_800A8A04_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800A8A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 96), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r31 + 96));
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 96), 0, 44u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r30 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r31 + 100));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r31 + 104));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 104), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r31 + 108));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r30 + 108), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r31 + 112));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r30 + 112), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r30 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 128), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 132));
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r30 + 132), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r31 + 136));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r30 + 136), f0.d);
    r3 = (r30 + 140);
    r4 = (r31 + 140);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        const auto state_free_result_800514F4_21BC = func_800514F4_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_800514F4_21BC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r0 = MemoryInline::FlatRead32((r31 + 152));
    MemoryInline::FlatWrite32((r30 + 152), r0);
    r0 = MemoryInline::FlatRead32((r31 + 156));
    MemoryInline::FlatWrite32((r30 + 156), r0);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AE308 func_800AE308 preserves=true fpr_mask=0x00000000
