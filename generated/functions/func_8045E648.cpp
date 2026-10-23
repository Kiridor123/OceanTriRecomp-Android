#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045E648_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8045E648;

loc_8045E648:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r6 = 0x80570000u;
    r6 = (r6 + 13080);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 8));
        }
    }
}

loc_8045E670:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 28));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r6 + 32));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r6 + 36));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 12), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 20), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 24), r11);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 28), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 36), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 40), r7);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 44), r6);
    }
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(37))) {
        goto loc_8045E6F0;
    }
}

loc_8045E6B8:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r5));
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 36), r6);
    }
    goto loc_8045ECCC;
}

loc_8045E6F0:
{
}

loc_8045E6F4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(42))) {
        goto loc_8045E708;
    }
}

loc_8045E6F8:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8045E708:
{
}

loc_8045E70C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(255))) {
        goto loc_8045E718;
    }
}

loc_8045E714:
{
    r0 = 0;
}

loc_8045E718:
{
}

loc_8045E71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045E728;
    }
}

loc_8045E720:
{
    r0 = 0;
    goto loc_8045E744;
}

loc_8045E728:
{
    r6 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r6 + -2448);
    r6 = MemoryInline::FlatRead32((r6 + 56));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_1);
    r0 = (r0 & 8);
}

loc_8045E744:
{
}

loc_8045E748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045E824;
    }
}

loc_8045E74C:
{
    r6 = 0x80610000u;
    r0 = 0;
    r6 = (r6 + -2448);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = MemoryInline::FlatRead32((r6 + 56));
}

loc_8045E760:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r8 = 1;
    r0 = (r0 * 10);
    r6 = (r5 + r0);
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r0 = (r6 + -48);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8045E784:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(255))) {
        goto loc_8045E78C;
    }
}

loc_8045E788:
{
    r8 = 0;
}

loc_8045E78C:
{
}

loc_8045E790:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8045E79C;
    }
}

loc_8045E794:
{
    r0 = 0;
    goto loc_8045E7AC;
}

loc_8045E79C:
{
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_4);
    r0 = (r0 & 8);
}

loc_8045E7AC:
{
}

loc_8045E7B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045E760;
    }
}

loc_8045E7B4:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8045E7BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045E81C;
    }
}

loc_8045E7C0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r6);
    }
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r5);
    }
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r5);
    }
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r5);
    }
    r5 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r5);
    }
    goto loc_8045ECCC;
}

loc_8045E81C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_8045E824:
{
}

loc_8045E828:
{
    r7 = 1;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(104))) {
        goto loc_8045E85C;
    }
}

loc_8045E830:
{
}

loc_8045E834:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(108))) {
        goto loc_8045E888;
    }
}

loc_8045E838:
{
}

loc_8045E83C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(76))) {
        goto loc_8045E8B4;
    }
}

loc_8045E840:
{
}

loc_8045E844:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(106))) {
        goto loc_8045E8C0;
    }
}

loc_8045E848:
{
}

loc_8045E84C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(122))) {
        goto loc_8045E8CC;
    }
}

loc_8045E850:
{
}

loc_8045E854:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(116))) {
        goto loc_8045E8D8;
    }
}

loc_8045E858:
{
    goto loc_8045E8E4;
}

loc_8045E85C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = 2;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045E870:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(104))) {
        goto loc_8045E8E8;
    }
}

loc_8045E874:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r5 = r6;
    r3 = (r3 + 1);
    goto loc_8045E8E8;
}

loc_8045E888:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = 3;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045E89C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(108))) {
        goto loc_8045E8E8;
    }
}

loc_8045E8A0:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r5 = r6;
    r3 = (r3 + 1);
    goto loc_8045E8E8;
}

loc_8045E8B4:
{
    r0 = 9;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045E8E8;
}

loc_8045E8C0:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045E8E8;
}

loc_8045E8CC:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045E8E8;
}

loc_8045E8D8:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045E8E8;
}

loc_8045E8E4:
{
    r7 = 0;
}

loc_8045E8E8:
{
}

loc_8045E8EC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8045E8F8;
    }
}

loc_8045E8F0:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8045E8F8:
{
    r0 = (r5 + -65);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r5));
}

loc_8045E904:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(55))) {
        goto loc_8045EC70;
    }
}

loc_8045E908:
{
    r5 = 0x80610000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = (r5 + -1816);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045E938u:
        goto loc_8045E938;
        break;
    case 0x8045EC70u:
        goto loc_8045EC70;
        break;
    case 0x8045E920u:
        goto loc_8045E920;
        break;
    case 0x8045EA78u:
        goto loc_8045EA78;
        break;
    case 0x8045E994u:
        goto loc_8045E994;
        break;
    case 0x8045EC78u:
        goto loc_8045EC78;
        break;
    case 0x8045E980u:
        goto loc_8045E980;
        break;
    case 0x8045E9C0u:
        goto loc_8045E9C0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_8045E920:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045E928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045EC78;
    }
}

loc_8045E92C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E938:
{
    r5 = MemoryInline::FlatRead8((r1 + 10));
    r0 = (r5 + 252);
    r0 = (r0 & 255);
}

loc_8045E948:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8045E968;
    }
}

loc_8045E94C:
{
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_8045E958:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8045E968;
    }
}

loc_8045E95C:
{
}

loc_8045E960:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(3))) {
        goto loc_8045E974;
    }
}

loc_8045E964:
{
    goto loc_8045EC78;
}

loc_8045E968:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E974:
{
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E980:
{
    r5 = 3;
    r0 = 120;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E994:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045E99C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045E9AC;
    }
}

loc_8045E9A0:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E9AC:
{
}

loc_8045E9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045EC78;
    }
}

loc_8045E9B4:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045E9C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045E9C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045E9D8;
    }
}

loc_8045E9CC:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045E9E8;
}

loc_8045E9D8:
{
}

loc_8045E9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045E9E8;
    }
}

loc_8045E9E0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8045E9E8:
{
    r6 = 255;
    r5 = 193;
    r0 = 254;
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 16), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 19), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r1 + 23), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r1 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r1 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r1 + 27), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r1 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r1 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r1 + 31), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 16u, (r1 + 32), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 17u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r1 + 34), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r1 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r1 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r1 + 38), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 23u, (r1 + 39), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 24u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 25u, (r1 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 26u, (r1 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 27u, (r1 + 43), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 28u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 29u, (r1 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 30u, (r1 + 46), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 31u, (r1 + 47), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r1 + 20), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045EA78:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045EA80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045EA90;
    }
}

loc_8045EA84:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_8045EAA0;
}

loc_8045EA90:
{
}

loc_8045EA94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045EAA0;
    }
}

loc_8045EA98:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8045EAA0:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r11 = 0;
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8045EAB0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(94))) {
        goto loc_8045EAC0;
    }
}

loc_8045EAB4:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r11 = 1;
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8045EAC0:
{
}

loc_8045EAC4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(93))) {
        goto loc_8045EADC;
    }
}

loc_8045EAC8:
{
    r0 = MemoryInline::FlatRead8((r1 + 27));
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8045EADC:
{
    r8 = (r1 + 8);
    r5 = 1;
    goto loc_8045EB70;
}

loc_8045EAE8:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & 31);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r9 = (r8 + r6);
    r6 = (r10 & 7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r6 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r7 = MemoryInline::FlatRead8((r9 + 8));
    r6 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_8045EB0C:
{
    r0 = (r7 | r6);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8045EB68;
    }
}

loc_8045EB18:
{
    r9 = MemoryInline::FlatRead8((r3 + 2));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8045EB68;
    }
}

loc_8045EB24:
{
}

loc_8045EB28:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(93))) {
        goto loc_8045EB68;
    }
}

loc_8045EB2C:
{
    goto loc_8045EB50;
}

loc_8045EB30:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r6 = (r6_rot_4 & 31);
    r0 = (r10 & 7);
    r7 = (r8 + r6);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = MemoryInline::FlatRead8((r7 + 8));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r7 + 8), static_cast<uint8_t>(r0));
}

loc_8045EB50:
{
    r10 = (r10 + 1);
}

loc_8045EB58:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(r9))) {
        goto loc_8045EB30;
    }
}

loc_8045EB5C:
{
    r3 = (r3 + 3);
    r10 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    goto loc_8045EB70;
}

loc_8045EB68:
{
    r3 = (r3 + 1);
    r10 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_8045EB70:
{
}

loc_8045EB74:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8045EB84;
    }
}

loc_8045EB78:
{
}

loc_8045EB7C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(93))) {
        goto loc_8045EB90;
    }
}

loc_8045EB80:
{
    goto loc_8045EAE8;
}

loc_8045EB84:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_8045EC78;
}

loc_8045EB90:
{
}

loc_8045EB94:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8045EC78;
    }
}

loc_8045EB98:
{
    r0 = 2;
    r5 = (r1 + 16);
    ctr = r0;
}

loc_8045EBA4:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 6));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 7));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 9));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 10));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 11));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 12));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 13));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 14));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 15));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite8((r5 + 15), static_cast<uint8_t>(r0));
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045EBA4;
    }
}

loc_8045EC6C:
{
    goto loc_8045EC78;
}

loc_8045EC70:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8045EC78:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 8));
    r3 = (r3 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 12));
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_3, 0u, r4, r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r4 + 32), r5);
    }
}

loc_8045ECCC:
{
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return r3;
}

}

extern "C" void func_8045E648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045E648_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045E648 func_8045E648 preserves=true fpr_mask=0x00000000
