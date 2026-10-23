#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086907C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8086907C;

loc_8086907C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80870000u;
    r31 = (r3 + -24460);
    goto loc_808690A4;
}

loc_80869098:
{
    ctr = r12;
    ctx->lr = 0x808690A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_808690A4:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_808690AC:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80869098;
    }
}

loc_808690B0:
{
    // inline leaf 0x8027E2E8 (3 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -9072);
    // end of inlined leaf 0x8027E2E8
    r4 = 0x80890000u;
    r0 = (r4 + 28600);
    MemoryInline::FlatWriteRam32(r3, r0);
    r4 = 0x80890000u;
    r0 = (r4 + 28624);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808C0000u;
    r0 = (r4 + 27920);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r4 = 0x808C0000u;
    r0 = (r4 + 27944);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r4 = 0x808A0000u;
    r0 = (r4 + -22832);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r4 = 0x808C0000u;
    r0 = (r4 + 25672);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    r4 = 0x808C0000u;
    r0 = (r4 + 25708);
    MemoryInline::FlatWriteRam32((r3 + 24), r0);
    // inline leaf 0x8029F680 (3 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -4808);
    // end of inlined leaf 0x8029F680
    r4 = 0x80890000u;
    r0 = (r4 + -20464);
    MemoryInline::FlatWriteRam32(r3, r0);
    ctx->lr = 0x8086911Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80869C4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    ctr = ctx->ctr;
    // inline leaf 0x802E04E4 (2 guest instruction(s))
    r3 = (r13 + -17056);
    // end of inlined leaf 0x802E04E4
    r4 = 0x80870000u;
    r0 = (r4 + 2888);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = 0x808B0000u;
    r31 = (r3 + -17072);
    // inline leaf 0x800D2E8C (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 31020);
    // end of inlined leaf 0x800D2E8C
    r4 = r3;
    r5 = 0;
    r0 = 11;
    ctr = r0;
}

loc_80869148:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    r31 = (r31 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    r4 = (r4 + 32);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80869148;
    }
}

loc_80869198:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r4);
    // inline leaf 0x8029F804 (3 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    // end of inlined leaf 0x8029F804
    r6 = r3;
    r5 = 0;
    r4 = 0x808B0000u;
    r7 = (r4 + -7688);
    goto loc_808691D4;
}

loc_808691BC:
{
    r4 = MemoryInline::FlatRead32(r7);
    r7 = (r7 + 4);
    r0 = r5;
    r5 = (r5 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
}

loc_808691D4:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_808691DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808691BC;
    }
}

loc_808691E0:
{
    r4 = 0x808B0000u;
    r5 = (r4 + -6012);
    r4 = 0;
    r0 = 7;
    ctr = r0;
}

loc_808691F4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r5);
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + 1644), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r6 + 1644), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 1648), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 1652), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r5 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 1656), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r5 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 1660), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r5 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 1664), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r5 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 1668), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r5 + 28));
    r5 = (r5 + 32);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 1672), r0);
    r6 = (r6 + 32);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808691F4;
    }
}

loc_80869244:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r4 + 1644), r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 1648), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 1652), r0);
    r4 = 0x808B0000u;
    r0 = (r4 + -7832);
    MemoryInline::FlatWriteRam32((r3 + 1876), r0);
    r6 = 0;
    r4 = 0x808B0000u;
    r7 = (r4 + -6040);
    goto loc_8086929C;
}

loc_80869280:
{
    r5 = MemoryInline::FlatRead32(r7);
    r7 = (r7 + 4);
    r0 = r6;
    r6 = (r6 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 1880), r5);
}

loc_8086929C:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_808692A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80869280;
    }
}

loc_808692A8:
{
    r3 = 0x80870000u;
    r0 = (r3 + -28676);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28200), r0);
    r3 = 0x80870000u;
    r0 = (r3 + -28576);
    r3 = (r4 + 28200);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r3 = 0x90010000u;
    r0 = (r3 + 32352);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29344), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -21948);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28416), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -21784);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28420), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -21676);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28424), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -19664);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28428), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -18856);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28432), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -18588);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28436), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -18248);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28440), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -18152);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28444), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -18072);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28448), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -17976);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28452), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -17904);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28456), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + -14688);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28460), r0);
    r3 = 0x808A0000u;
    r0 = (r3 + 24840);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28464), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -24968);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28468), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -23000);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28472), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -22288);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28476), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -21096);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28480), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -20808);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28484), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -20016);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28488), r0);
    r3 = 0x808B0000u;
    r0 = (r3 + -19096);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28492), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8086907C func_8086907C preserves=true fpr_mask=0x00000000
