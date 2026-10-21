#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B52C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8005B52Cu);
    goto loc_8005B52C;

loc_8005B52C:
{
    r9 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_8005B534:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8005B538:
{
    r10 = 0;
    r6 = r9;
    r7 = r9;
    r4 = -1;
    r5 = 0;
    r0 = 32;
}

loc_8005B550:
{
    r3 = (r6 + 65536);
    MemoryInline::FlatWrite16((r3 + 20628), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 26824), static_cast<uint16_t>(r5));
    r8 = r7;
    ctr = r0;
}

loc_8005B564:
{
    r3 = (r8 + 65536);
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 20632), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 0u, (r3 + 20632), r4);
        MemoryInline::WriteResolved16(guest_range_4, 2u, (r3 + 20634), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 4u, (r3 + 20636), r4);
        MemoryInline::WriteResolved16(guest_range_4, 6u, (r3 + 20638), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 20640), r4);
        MemoryInline::WriteResolved16(guest_range_4, 10u, (r3 + 20642), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 12u, (r3 + 20644), r4);
        MemoryInline::WriteResolved16(guest_range_4, 14u, (r3 + 20646), r4);
    }
    r8 = (r8 + 16);
    r3 = (r8 + 65536);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r3 + 20632), r4);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r3 + 20634), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 20u, (r3 + 20636), r4);
        MemoryInline::WriteResolved16(guest_range_4, 22u, (r3 + 20638), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 24u, (r3 + 20640), r4);
        MemoryInline::WriteResolved16(guest_range_4, 26u, (r3 + 20642), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 28u, (r3 + 20644), r4);
        MemoryInline::WriteResolved16(guest_range_4, 30u, (r3 + 20646), r4);
    }
    r8 = (r8 + 16);
    r3 = (r8 + 65536);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 32u, (r3 + 20632), r4);
        MemoryInline::WriteResolved16(guest_range_4, 34u, (r3 + 20634), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 36u, (r3 + 20636), r4);
        MemoryInline::WriteResolved16(guest_range_4, 38u, (r3 + 20638), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 40u, (r3 + 20640), r4);
        MemoryInline::WriteResolved16(guest_range_4, 42u, (r3 + 20642), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 44u, (r3 + 20644), r4);
        MemoryInline::WriteResolved16(guest_range_4, 46u, (r3 + 20646), r4);
    }
    r8 = (r8 + 16);
    r3 = (r8 + 65536);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 48u, (r3 + 20632), r4);
        MemoryInline::WriteResolved16(guest_range_4, 50u, (r3 + 20634), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 52u, (r3 + 20636), r4);
        MemoryInline::WriteResolved16(guest_range_4, 54u, (r3 + 20638), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 56u, (r3 + 20640), r4);
        MemoryInline::WriteResolved16(guest_range_4, 58u, (r3 + 20642), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 60u, (r3 + 20644), r4);
        MemoryInline::WriteResolved16(guest_range_4, 62u, (r3 + 20646), r4);
    }
    r8 = (r8 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005B564;
    }
}

loc_8005B608:
{
    r6 = (r6 + 2);
    r7 = (r7 + 2048);
    r10 = (r10 + 1);
}

loc_8005B618:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(2))) {
        goto loc_8005B550;
    }
}

loc_8005B61C:
{
    r4 = 0;
    r3 = (r9 + 65536);
    MemoryInline::FlatWrite32((r3 + 20624), r4);
    r5 = r9;
    r0 = 32;
    ctr = r0;
}

loc_8005B634:
{
    r3 = (r5 + 65536);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24736), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 24736), r4);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 24738), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 24740), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 24742), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 24744), r4);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 24746), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 24748), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 24750), r4);
    }
    r5 = (r5 + 16);
    r3 = (r5 + 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 24736), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 24736), r4);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 24738), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 24740), r4);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 24742), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 24744), r4);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 24746), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 24748), r4);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 24750), r4);
    }
    r5 = (r5 + 16);
    r3 = (r5 + 65536);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 24736), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r3 + 24736), r4);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 24738), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 24740), r4);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 24742), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 24744), r4);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 24746), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 24748), r4);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 24750), r4);
    }
    r5 = (r5 + 16);
    r3 = (r5 + 65536);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 24736), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r3 + 24736), r4);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 24738), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 24740), r4);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 24742), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 24744), r4);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 24746), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 24748), r4);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 24750), r4);
    }
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005B634;
    }
}

loc_8005B6D8:
{
    r0 = 0;
    r3 = (r9 + 65536);
    MemoryInline::FlatWrite32((r3 + 24728), r0);
    MemoryInline::FlatWrite32((r3 + 20572), r0);
    MemoryInline::FlatWrite32((r3 + 26828), r0);
    MemoryInline::FlatWrite32((r3 + 20604), r0);
    MemoryInline::FlatWrite32((r3 + 20608), r0);
    r4 = MemoryInline::FlatRead32((r9 + 80));
    r3 = 65536;
    r0 = (r3 + 20480);
    r0 = (r4 * r0);
    r3 = (r9 + r0);
    r0 = (r3 + 84);
    MemoryInline::FlatWrite32((r9 + 68), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005B52C func_8005B52C preserves=true fpr_mask=0x00000000
