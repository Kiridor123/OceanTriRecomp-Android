#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80526400_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80526400u);
    goto loc_80526400;

loc_80526400:
{
}

loc_80526404:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80526470;
    }
}

loc_80526408:
{
    r5 = 65536;
    r3 = 0x80520000u;
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r5 = (r5 + -26092);
    r3 = (r3 + 25984);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r4 + 24), r3);
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r3 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_80526438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80526454;
    }
}

loc_8052643C:
{
    MemoryInline::FlatWrite32((r13 + -13532), r4);
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_80526450:
{
    r3 = r0;
}

loc_80526454:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8052645C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80526450;
    }
}

loc_80526460:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_80526470:
{
}

loc_80526474:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-6))) {
        goto loc_80526538;
    }
}

loc_80526478:
{
    r6 = MemoryInline::FlatRead32((r4 + 48));
}

loc_80526480:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(100))) {
        goto loc_805264CC;
    }
}

loc_80526484:
{
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 37u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r3));
    r0 = -3;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), r3);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), r3);
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r3);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r4 + 36), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -13528));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
    MemoryInline::FlatWrite32((r13 + -13528), r4);
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_805264CC:
{
    r3 = 65536;
    r5 = 0x80520000u;
    r7 = (r3 + -26092);
    r0 = (r6 + 1);
    r5 = (r5 + 25600);
    r6 = 1;
    r3 = 0;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r4 + 24), r5);
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r5 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_80526504:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052651C;
    }
}

loc_80526508:
{
    MemoryInline::FlatWrite32((r13 + -13532), r4);
    MemoryInline::FlatWrite32(r4, r3);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_80526518:
{
    r5 = r0;
}

loc_8052651C:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80526524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80526518;
    }
}

loc_80526528:
{
    MemoryInline::FlatWrite32(r5, r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_80526538:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 37u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 10), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 12), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r4 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -13528));
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    MemoryInline::FlatWrite32((r13 + -13528), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_80526400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80526400_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80526400 func_80526400 preserves=true fpr_mask=0x00000000
