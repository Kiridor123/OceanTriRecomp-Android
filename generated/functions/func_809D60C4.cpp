#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D60C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_809D60C4;

loc_809D60C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80A00000u;
    r31 = (r3 + 31000);
    goto loc_809D60EC;
}

loc_809D60E0:
{
    ctr = r12;
    ctx->lr = 0x809D60E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_809D60EC:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_809D60F4:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_809D60E0;
    }
}

loc_809D60F8:
{
    // inline leaf 0x803BE370 (3 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20344);
    // end of inlined leaf 0x803BE370
    r4 = 0x80A20000u;
    r0 = (r4 + 9832);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r4 = 0x80A20000u;
    r0 = (r4 + 9884);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + 9936);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + 9988);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + 10040);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + -7572);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + -7556);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + -7540);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + -7524);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    r4 = 0x80A20000u;
    r0 = (r4 + -7508);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    // inline leaf 0x802E04EC (2 guest instruction(s))
    r3 = (r13 + -17052);
    // end of inlined leaf 0x802E04EC
    r4 = 0x80A10000u;
    r0 = (r4 + -6248);
    MemoryInline::FlatWrite32(r3, r0);
    // inline leaf 0x80040904 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -18008));
    // end of inlined leaf 0x80040904
    r0 = (r3 & 255);
}

loc_809D6190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_809D61A8;
    }
}

loc_809D6194:
{
    ctx->lr = 0x809D6198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809D5F10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    ctr = ctx->ctr;
    // inline leaf 0x803C7F08 (2 guest instruction(s))
    r3 = (r13 + -16784);
    // end of inlined leaf 0x803C7F08
    r4 = 0x80A70000u;
    r0 = (r4 + 31696);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_809D61A8:
{
    r3 = 0x809D0000u;
    r0 = (r3 + 31920);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28668), r0);
    r3 = 0x809D0000u;
    r0 = (r3 + 26576);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28672), r0);
    r3 = 0x809D0000u;
    r0 = (r3 + 26792);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28676), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -32208);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28680), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -31684);
    r4 = 0x806D0000u;
    MemoryInline::FlatWriteRam32((r4 + -6000), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -31144);
    r4 = (r4 + -6000);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -30724);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -30644);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28720), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -13956);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28864), r0);
    r3 = 0x809E0000u;
    r0 = (r3 + -10224);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28640), r0);
    r3 = 0x809F0000u;
    r0 = (r3 + -22432);
    r4 = 0x80A70000u;
    MemoryInline::FlatWriteRam32((r4 + 31544), r0);
    r3 = 0x809F0000u;
    r0 = (r3 + -22048);
    r3 = (r4 + 31544);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -18432);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 8), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -18324);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 12), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -18200);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 16), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -18060);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 20), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -17948);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 24), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -15948);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 28), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -15376);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 32), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -14968);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 36), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 30096);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 40), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 30192);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 44), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 30360);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 48), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -5788);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 52), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + -5360);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 56), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + 5876);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 60), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + 5912);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 64), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + 25900);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 68), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -22592);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 72), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -18420);
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 76), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -17472);
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 80), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -15576);
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 84), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -11928);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 88), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -11728);
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 92), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -7236);
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 96), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -6180);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 100), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -3064);
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 104), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -472);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 108), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 160);
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 112), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 4104);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 116), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 23512);
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 120), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 25956);
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 124), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 10224);
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 128), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 11756);
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 132), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 14592);
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 136), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 15600);
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 140), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 18304);
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 144), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 20992);
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 148), r0);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28704), r3);
    // inline leaf 0x809D5FE8 (39 guest instruction(s))
    r3 = 0x80A30000u;
    r0 = (r3 + 3560);
    r4 = 0x806C0000u;
    MemoryInline::FlatWriteRam32((r4 + 31144), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3584);
    r4 = (r4 + 31144);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 44u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r4 + 4), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3608);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 8), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3632);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 12), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3656);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 16), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3680);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 20), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3704);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 24), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3728);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 28), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3752);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 32), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3776);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 36), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3800);
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 40), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3824);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 44), r0);
    // end of inlined leaf 0x809D5FE8
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D60C4 func_809D60C4 preserves=true fpr_mask=0x00000000
