#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A89F8_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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

    goto loc_803A89F8;

loc_803A89F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 1208u, true, false);
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 1208u, false, true);
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
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r3 + 44), static_cast<uint16_t>(r0));
    r7 = (r3 + 42);
    r6 = (r4 + 42);
    r0 = 11;
    ctr = r0;
}

loc_803A8A68:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8A68;
    }
}

loc_803A8A7C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 138u, (r4 + 138));
    MemoryInline::WriteResolved8(guest_range_1, 138u, (r3 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 139u, (r4 + 139));
    MemoryInline::WriteResolved8(guest_range_1, 139u, (r3 + 139), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r4 + 140));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r4 + 144));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 144), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r4 + 148));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r4 + 152));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 148), r5);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 152), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 156u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r4 + 156));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 160u, (r4 + 160));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 160), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 164u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r4 + 164));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r4 + 168));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r3 + 168), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 172u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r4 + 172));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r4 + 176));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 172), r5);
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r3 + 176), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 180u, (r4 + 180));
    MemoryInline::WriteResolved8(guest_range_1, 180u, (r3 + 180), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 181u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 181u, (r4 + 181));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 185u, (r4 + 185));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 181u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 181u, (r3 + 181), r5);
        MemoryInline::WriteResolved32(guest_range_1, 185u, (r3 + 185), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 189u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 189u, (r4 + 189));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 193u, (r4 + 193));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 189u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 189u, (r3 + 189), r5);
        MemoryInline::WriteResolved32(guest_range_1, 193u, (r3 + 193), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 197u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 197u, (r4 + 197));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 201u, (r4 + 201));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 197u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 197u, (r3 + 197), r5);
        MemoryInline::WriteResolved32(guest_range_1, 201u, (r3 + 201), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 205u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 205u, (r4 + 205));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 209u, (r4 + 209));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 205u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 205u, (r3 + 205), r5);
        MemoryInline::WriteResolved32(guest_range_1, 209u, (r3 + 209), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 213u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 213u, (r4 + 213));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 217u, (r4 + 217));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 213u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 213u, (r3 + 213), r5);
        MemoryInline::WriteResolved32(guest_range_1, 217u, (r3 + 217), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 221u, (r4 + 221));
    MemoryInline::WriteResolved8(guest_range_1, 221u, (r3 + 221), static_cast<uint8_t>(r0));
    r7 = (r3 + 218);
    r6 = (r4 + 218);
    r0 = 11;
    ctr = r0;
}

loc_803A8B54:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8B54;
    }
}

loc_803A8B68:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 314u, (r4 + 314));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 314u, (r3 + 314), static_cast<uint16_t>(r0));
    r7 = (r3 + 312);
    r6 = (r4 + 312);
    r0 = 11;
    ctr = r0;
}

loc_803A8B88:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8B88;
    }
}

loc_803A8B9C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 408u, (r4 + 408));
    MemoryInline::WriteResolved16(guest_range_1, 408u, (r3 + 408), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 410u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 410u, (r4 + 410));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 414u, (r4 + 414));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 410u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 410u, (r3 + 410), r5);
        MemoryInline::WriteResolved32(guest_range_1, 414u, (r3 + 414), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 418u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 418u, (r4 + 418));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 422u, (r4 + 422));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 418u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 418u, (r3 + 418), r5);
        MemoryInline::WriteResolved32(guest_range_1, 422u, (r3 + 422), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 426u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 426u, (r4 + 426));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 430u, (r4 + 430));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 426u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 426u, (r3 + 426), r5);
        MemoryInline::WriteResolved32(guest_range_1, 430u, (r3 + 430), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 434u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 434u, (r4 + 434));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 438u, (r4 + 438));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 434u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 434u, (r3 + 434), r5);
        MemoryInline::WriteResolved32(guest_range_1, 438u, (r3 + 438), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 442u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 442u, (r4 + 442));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 446u, (r4 + 446));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 442u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 442u, (r3 + 442), r5);
        MemoryInline::WriteResolved32(guest_range_1, 446u, (r3 + 446), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 450u, (r4 + 450));
    MemoryInline::WriteResolved32(guest_range_1, 450u, (r3 + 450), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 454u, (r4 + 454));
    MemoryInline::WriteResolved16(guest_range_1, 454u, (r3 + 454), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 456u, (r4 + 456));
    MemoryInline::WriteResolved8(guest_range_1, 456u, (r3 + 456), static_cast<uint8_t>(r0));
    r7 = (r3 + 453);
    r6 = (r4 + 453);
    r0 = 40;
    ctr = r0;
}

loc_803A8C24:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8C24;
    }
}

loc_803A8C38:
{
    r0 = MemoryInline::FlatRead16((r6 + 4));
    MemoryInline::FlatWrite16((r7 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 6));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 780u, (r4 + 780));
    MemoryInline::WriteResolved16(guest_range_1, 780u, (r3 + 780), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 784u, (r4 + 784));
    MemoryInline::WriteResolved32(guest_range_1, 784u, (r3 + 784), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 788u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 788u, (r4 + 788));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 792u, (r4 + 792));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 788u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 788u, (r3 + 788), r5);
        MemoryInline::WriteResolved32(guest_range_1, 792u, (r3 + 792), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 796u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 796u, (r4 + 796));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 800u, (r4 + 800));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 796u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 796u, (r3 + 796), r5);
        MemoryInline::WriteResolved32(guest_range_1, 800u, (r3 + 800), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 804u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 804u, (r4 + 804));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 808u, (r4 + 808));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 804u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 804u, (r3 + 804), r5);
        MemoryInline::WriteResolved32(guest_range_1, 808u, (r3 + 808), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 812u, (r4 + 812));
    MemoryInline::WriteResolved32(guest_range_1, 812u, (r3 + 812), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 816u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 816u, (r4 + 816));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 820u, (r4 + 820));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 816u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 816u, (r3 + 816), r5);
        MemoryInline::WriteResolved32(guest_range_1, 820u, (r3 + 820), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 824u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 824u, (r4 + 824));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 828u, (r4 + 828));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 824u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 824u, (r3 + 824), r5);
        MemoryInline::WriteResolved32(guest_range_1, 828u, (r3 + 828), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 832u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 832u, (r4 + 832));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 836u, (r4 + 836));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 832u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 832u, (r3 + 832), r5);
        MemoryInline::WriteResolved32(guest_range_1, 836u, (r3 + 836), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 840u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 840u, (r4 + 840));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 844u, (r4 + 844));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 840u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 840u, (r3 + 840), r5);
        MemoryInline::WriteResolved32(guest_range_1, 844u, (r3 + 844), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 848u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 848u, (r4 + 848));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 852u, (r4 + 852));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 848u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 848u, (r3 + 848), r5);
        MemoryInline::WriteResolved32(guest_range_1, 852u, (r3 + 852), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 856u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 856u, (r4 + 856));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 860u, (r4 + 860));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 856u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 856u, (r3 + 856), r5);
        MemoryInline::WriteResolved32(guest_range_1, 860u, (r3 + 860), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 864u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 864u, (r4 + 864));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 868u, (r4 + 868));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 864u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 864u, (r3 + 864), r5);
        MemoryInline::WriteResolved32(guest_range_1, 868u, (r3 + 868), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 872u, (r4 + 872));
    MemoryInline::WriteResolved32(guest_range_1, 872u, (r3 + 872), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 876u, (r4 + 876));
    MemoryInline::WriteResolved16(guest_range_1, 876u, (r3 + 876), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 878u, (r4 + 878));
    MemoryInline::WriteResolved8(guest_range_1, 878u, (r3 + 878), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 879u, (r4 + 879));
    MemoryInline::WriteResolved8(guest_range_1, 879u, (r3 + 879), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 880u, (r4 + 880));
    MemoryInline::WriteResolved16(guest_range_1, 880u, (r3 + 880), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 882u, (r4 + 882));
    MemoryInline::WriteResolved16(guest_range_1, 882u, (r3 + 882), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 884u, (r4 + 884));
    MemoryInline::WriteResolved16(guest_range_1, 884u, (r3 + 884), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 886u, (r4 + 886));
    MemoryInline::WriteResolved16(guest_range_1, 886u, (r3 + 886), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 888u, (r4 + 888));
    MemoryInline::WriteResolved16(guest_range_1, 888u, (r3 + 888), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 890u, (r4 + 890));
    MemoryInline::WriteResolved16(guest_range_1, 890u, (r3 + 890), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 892u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 892u, (r4 + 892));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 896u, (r4 + 896));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 892u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 892u, (r3 + 892), r5);
        MemoryInline::WriteResolved32(guest_range_1, 896u, (r3 + 896), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 900u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 900u, (r4 + 900));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 904u, (r4 + 904));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 900u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 900u, (r3 + 900), r5);
        MemoryInline::WriteResolved32(guest_range_1, 904u, (r3 + 904), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 908u, (r4 + 908));
    MemoryInline::WriteResolved32(guest_range_1, 908u, (r3 + 908), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 912u, (r4 + 912));
    MemoryInline::WriteResolved32(guest_range_1, 912u, (r3 + 912), r0);
    r7 = (r3 + 912);
    r6 = (r4 + 912);
    r0 = 36;
    ctr = r0;
}

loc_803A8D90:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8D90;
    }
}

loc_803A8DA4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1204u, (r4 + 1204));
    MemoryInline::WriteResolved32(guest_range_1, 1204u, (r3 + 1204), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_803A89F8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803A89F8_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A89F8 func_803A89F8 preserves=true fpr_mask=0x00000000
