#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043AD94_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8043AD94u);
    goto loc_8043AD94;

loc_8043AD94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 256u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 256u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
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
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 68u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 68));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r4 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r4 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r4 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r4 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 80), r5);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 84), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 88), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 92u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r4 + 92));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 96));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 92), r5);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 96), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r5);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 112));
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 116));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 120));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 120), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 124));
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 124), r0);
    r7 = (r3 + 124);
    r6 = (r4 + 124);
    r0 = 12;
    ctr = r0;
}

loc_8043AEDC:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8043AEDC;
    }
}

loc_8043AEF0:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 224u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 224u, (r4 + 224));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 228u, (r4 + 228));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 224u, (r3 + 224), r5);
        MemoryInline::WriteResolved32(guest_range_1, 228u, (r3 + 228), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 232u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 232u, (r4 + 232));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 236u, (r4 + 236));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 232u, (r3 + 232), r5);
        MemoryInline::WriteResolved32(guest_range_1, 236u, (r3 + 236), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 240u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 240u, (r4 + 240));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 244u, (r4 + 244));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r3 + 240), r5);
        MemoryInline::WriteResolved32(guest_range_1, 244u, (r3 + 244), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 248u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 248u, (r4 + 248));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r4 + 252));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 248u, (r3 + 248), r5);
        MemoryInline::WriteResolved32(guest_range_1, 252u, (r3 + 252), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_8043AD94(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8043AD94_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043AD94 func_8043AD94 preserves=true fpr_mask=0x00000000
