#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80315620_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x80315620u);
    goto loc_80315620;

loc_80315620:
{
    r9 = 0;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r8 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r8 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r8 + 20), r0);
    }
}

loc_80315644:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80315650;
    }
}

loc_80315648:
{
    r9 = 1;
    goto loc_80315774;
}

loc_80315650:
{
    r0 = (r7 & 255);
    r0 = (r0 & 1);
}

loc_8031565C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031575C;
    }
}

loc_80315660:
{
}

loc_80315664:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80315670;
    }
}

loc_80315668:
{
    r9 = 1;
    goto loc_80315774;
}

loc_80315670:
{
}

loc_80315674:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803156F0;
    }
}

loc_80315678:
{
}

loc_8031567C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803156F0;
    }
}

loc_80315680:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80315688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_803156A0;
    }
}

loc_8031568C:
{
}

loc_80315690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_803156B8;
    }
}

loc_80315694:
{
}

loc_80315698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_803156D0;
    }
}

loc_8031569C:
{
    goto loc_803156E8;
}

loc_803156A0:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r4);
    r0 = (r3 + 488);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r0);
    r0 = (r3 + 500);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r0);
    goto loc_80315774;
}

loc_803156B8:
{
    r0 = (r3 + 464);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r4);
    }
    r0 = (r3 + 500);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r0);
    goto loc_80315774;
}

loc_803156D0:
{
    r0 = (r3 + 464);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r0);
    r0 = (r3 + 488);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r4);
    }
    goto loc_80315774;
}

loc_803156E8:
{
    r9 = 1;
    goto loc_80315774;
}

loc_803156F0:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_803156F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80315704;
    }
}

loc_803156FC:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r4);
    goto loc_80315708;
}

loc_80315704:
{
    r9 = 1;
}

loc_80315708:
{
}

loc_8031570C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031572C;
    }
}

loc_80315710:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80315718:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80315724;
    }
}

loc_8031571C:
{
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r5);
    goto loc_80315730;
}

loc_80315724:
{
    r9 = 1;
    goto loc_80315730;
}

loc_8031572C:
{
    r9 = 1;
}

loc_80315730:
{
}

loc_80315734:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80315754;
    }
}

loc_80315738:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80315740:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8031574C;
    }
}

loc_80315744:
{
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r6);
    goto loc_80315774;
}

loc_8031574C:
{
    r9 = 1;
    goto loc_80315774;
}

loc_80315754:
{
    r9 = 1;
    goto loc_80315774;
}

loc_8031575C:
{
    r0 = (r3 + 464);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r8, r0);
    r0 = (r3 + 488);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r8 + 4), r0);
    r0 = (r3 + 500);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r8 + 8), r0);
}

loc_80315774:
{
    r0 = (r3 + 464);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r8 + 12), r0);
    r0 = (r3 + 488);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r8 + 16), r0);
    r0 = (r3 + 500);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r8 + 20), r0);
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    return r3;
}

}

extern "C" void func_80315620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80315620_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000209 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80315620 func_80315620 preserves=true fpr_mask=0x00000000
