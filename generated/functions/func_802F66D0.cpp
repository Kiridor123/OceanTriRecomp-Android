#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802F66D0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802F66D0;

loc_802F66D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_802F66FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F6724;
    }
}

loc_802F6700:
{
}

loc_802F6704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F6758;
    }
}

loc_802F6708:
{
}

loc_802F670C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802F678C;
    }
}

loc_802F6710:
{
}

loc_802F6714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F67D0;
    }
}

loc_802F6718:
{
}

loc_802F671C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802F67D0;
    }
}

loc_802F6720:
{
    goto loc_802F6898;
}

loc_802F6724:
{
    r0 = (r3 & 255);
}

loc_802F672C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802F6898;
    }
}

loc_802F6730:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F6738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F6748;
    }
}

loc_802F673C:
{
}

loc_802F6740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F6750;
    }
}

loc_802F6744:
{
    goto loc_802F6898;
}

loc_802F6748:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F6750:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F6758:
{
    r0 = (r3 & 255);
}

loc_802F6760:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802F6898;
    }
}

loc_802F6764:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F676C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F677C;
    }
}

loc_802F6770:
{
}

loc_802F6774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F6784;
    }
}

loc_802F6778:
{
    goto loc_802F6898;
}

loc_802F677C:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F6784:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F678C:
{
    r0 = (r3 & 255);
}

loc_802F6794:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802F6898;
    }
}

loc_802F6798:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F67A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F67B8;
    }
}

loc_802F67A4:
{
}

loc_802F67A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F67C0;
    }
}

loc_802F67AC:
{
}

loc_802F67B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802F67C8;
    }
}

loc_802F67B4:
{
    goto loc_802F6898;
}

loc_802F67B8:
{
    r30 = 5;
    goto loc_802F6898;
}

loc_802F67C0:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F67C8:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F67D0:
{
    r0 = (r3 & 255);
}

loc_802F67D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F67E8;
    }
}

loc_802F67DC:
{
}

loc_802F67E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F6844;
    }
}

loc_802F67E4:
{
    goto loc_802F6898;
}

loc_802F67E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_802F67F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F681C;
    }
}

loc_802F67F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F67FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F680C;
    }
}

loc_802F6800:
{
}

loc_802F6804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F6814;
    }
}

loc_802F6808:
{
    goto loc_802F6898;
}

loc_802F680C:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F6814:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F681C:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F6824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F6834;
    }
}

loc_802F6828:
{
}

loc_802F682C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F683C;
    }
}

loc_802F6830:
{
    goto loc_802F6898;
}

loc_802F6834:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F683C:
{
    r30 = 3;
    goto loc_802F6898;
}

loc_802F6844:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802F684C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F6874;
    }
}

loc_802F6850:
{
}

loc_802F6854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F687C;
    }
}

loc_802F6858:
{
}

loc_802F685C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F6884;
    }
}

loc_802F6860:
{
}

loc_802F6864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802F688C;
    }
}

loc_802F6868:
{
}

loc_802F686C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802F6894;
    }
}

loc_802F6870:
{
    goto loc_802F6898;
}

loc_802F6874:
{
    r30 = 3;
    goto loc_802F6898;
}

loc_802F687C:
{
    r30 = 3;
    goto loc_802F6898;
}

loc_802F6884:
{
    r30 = 3;
    goto loc_802F6898;
}

loc_802F688C:
{
    r30 = 4;
    goto loc_802F6898;
}

loc_802F6894:
{
    r30 = 3;
}

loc_802F6898:
{
}

loc_802F689C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802F68C4;
    }
}

loc_802F68A0:
{
    r3 = MemoryInline::FlatRead8((r31 + 808));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802F68B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_802F68CC;
    }
}

loc_802F68B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    goto loc_802F68CC;
}

loc_802F68C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
}

loc_802F68CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_802F66D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802F66D0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802F66D0 func_802F66D0 preserves=true fpr_mask=0x00000000
