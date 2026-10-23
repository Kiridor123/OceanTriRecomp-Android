#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F4454_ra10_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_800F4454;

loc_800F4454:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F446C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800F4478;
    }
}

loc_800F4470:
{
    r3 = 0;
    goto loc_800F4548;
}

loc_800F4478:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_800F448C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800F4498;
    }
}

loc_800F4490:
{
    r3 = 0;
    goto loc_800F4548;
}

loc_800F4498:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_800F44A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F44C0;
    }
}

loc_800F44A8:
{
    // inline leaf 0x800E4990 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r13 + -17512));
    // end of inlined leaf 0x800E4990
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800F44B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F44C0;
    }
}

loc_800F44B8:
{
    r3 = 0;
    goto loc_800F4548;
}

loc_800F44C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 485), 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 485));
}

loc_800F44C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F44EC;
    }
}

loc_800F44CC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 488));
}

loc_800F44D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F44E4;
    }
}

loc_800F44D8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 491));
}

loc_800F44E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F44EC;
    }
}

loc_800F44E4:
{
    r3 = 1;
    goto loc_800F4548;
}

loc_800F44EC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 486));
}

loc_800F44F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F4518;
    }
}

loc_800F44F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 489));
}

loc_800F4500:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F4510;
    }
}

loc_800F4504:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 492));
}

loc_800F450C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F4518;
    }
}

loc_800F4510:
{
    r3 = 1;
    goto loc_800F4548;
}

loc_800F4518:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 487));
}

loc_800F4520:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F4544;
    }
}

loc_800F4524:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 490));
}

loc_800F452C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F453C;
    }
}

loc_800F4530:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 493));
}

loc_800F4538:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F4544;
    }
}

loc_800F453C:
{
    r3 = 1;
    goto loc_800F4548;
}

loc_800F4544:
{
    r3 = 0;
}

loc_800F4548:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_800F4454(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F4454_ra10_2_10_0(ctx, ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002017 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F4454 func_800F4454 preserves=true fpr_mask=0x00000000
