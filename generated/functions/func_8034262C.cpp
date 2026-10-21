#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034262C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8034262Cu);
    goto loc_8034262C;

loc_8034262C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 67u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 2));
}

loc_80342654:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034286C;
    }
}

loc_80342658:
{
    r0 = MemoryInline::FlatRead16((r31 + 92));
}

loc_80342660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(389))) {
        goto loc_80342688;
    }
}

loc_80342664:
{
}

loc_80342668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(351))) {
        goto loc_803426D0;
    }
}

loc_8034266C:
{
}

loc_80342670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(353))) {
        goto loc_8034272C;
    }
}

loc_80342674:
{
}

loc_80342678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(390))) {
        goto loc_80342788;
    }
}

loc_8034267C:
{
}

loc_80342680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(355))) {
        goto loc_803427EC;
    }
}

loc_80342684:
{
    goto loc_803428F0;
}

loc_80342688:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
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

loc_80342698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803426A8;
    }
}

loc_8034269C:
{
}

loc_803426A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803426BC;
    }
}

loc_803426A4:
{
    goto loc_803428F0;
}

loc_803426A8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803426B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_803428F0;
    }
}

loc_803426B4:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803426BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803426C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_803428F0;
    }
}

loc_803426C8:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803426D0:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_4);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803426E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803426F0;
    }
}

loc_803426E4:
{
}

loc_803426E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80342704;
    }
}

loc_803426EC:
{
    goto loc_803428F0;
}

loc_803426F0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803426F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_803428F0;
    }
}

loc_803426FC:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342704:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_8034270C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034271C;
    }
}

loc_80342710:
{
}

loc_80342714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80342724;
    }
}

loc_80342718:
{
    goto loc_803428F0;
}

loc_8034271C:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342724:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_8034272C:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8034273C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8034274C;
    }
}

loc_80342740:
{
}

loc_80342744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80342774;
    }
}

loc_80342748:
{
    goto loc_803428F0;
}

loc_8034274C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_80342754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80342764;
    }
}

loc_80342758:
{
}

loc_8034275C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8034276C;
    }
}

loc_80342760:
{
    goto loc_803428F0;
}

loc_80342764:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_8034276C:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342774:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_8034277C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_803428F0;
    }
}

loc_80342780:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342788:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl4_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl4_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802B06E4:
{
    r3 = r0;
    goto loc_inl4_cont_802B06CC;
}

loc_inl4_return:
{
}

loc_inl4_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80342798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803427B0;
    }
}

loc_8034279C:
{
}

loc_803427A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803427C4;
    }
}

loc_803427A4:
{
}

loc_803427A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803427D8;
    }
}

loc_803427AC:
{
    goto loc_803428F0;
}

loc_803427B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803427B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_803427BC:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803427C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803427CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_803428F0;
    }
}

loc_803427D0:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803427D8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803427E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_803427E4:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803427EC:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl5_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl5_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802B06E4:
{
    r3 = r0;
    goto loc_inl5_cont_802B06CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803427FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8034281C;
    }
}

loc_80342800:
{
}

loc_80342804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80342830;
    }
}

loc_80342808:
{
}

loc_8034280C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80342844;
    }
}

loc_80342810:
{
}

loc_80342814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80342858;
    }
}

loc_80342818:
{
    goto loc_803428F0;
}

loc_8034281C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_80342824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_80342828:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342830:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_80342838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_8034283C:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342844:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_8034284C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_80342850:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_80342858:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_80342860:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_803428F0;
    }
}

loc_80342864:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_8034286C:
{
    r0 = MemoryInline::FlatRead16((r31 + 92));
}

loc_80342874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(353))) {
        goto loc_8034288C;
    }
}

loc_80342878:
{
}

loc_8034287C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(390))) {
        goto loc_803428B4;
    }
}

loc_80342880:
{
}

loc_80342884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(355))) {
        goto loc_803428C8;
    }
}

loc_80342888:
{
    goto loc_803428F0;
}

loc_8034288C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_80342894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803428A4;
    }
}

loc_80342898:
{
}

loc_8034289C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_803428AC;
    }
}

loc_803428A0:
{
    goto loc_803428F0;
}

loc_803428A4:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803428AC:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803428B4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803428BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803428F0;
    }
}

loc_803428C0:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803428C8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 68));
}

loc_803428D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803428E0;
    }
}

loc_803428D4:
{
}

loc_803428D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_803428E8;
    }
}

loc_803428DC:
{
    goto loc_803428F0;
}

loc_803428E0:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803428E8:
{
    r3 = 0;
    goto loc_803428F4;
}

loc_803428F0:
{
    r3 = 1;
}

loc_803428F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034262C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034262C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034262C func_8034262C preserves=true fpr_mask=0x00000000
