#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80274688_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80274688;

loc_80274688:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80274690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_802747A4;
    }
}

loc_80274694:
{
    r4 = 0x805C0000u;
    r4 = (r4 + 26608);
    r5 = (r4 + 2);
    r6 = 1;
    goto loc_80274710;
}

loc_802746A8:
{
}

loc_802746AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_802746BC;
    }
}

loc_802746B0:
{
}

loc_802746B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(11))) {
        goto loc_802746D8;
    }
}

loc_802746B8:
{
    goto loc_802746F4;
}

loc_802746BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_802746C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802746D0;
    }
}

loc_802746C8:
{
}

loc_802746CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80274708;
    }
}

loc_802746D0:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802746D8:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_802746E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802746EC;
    }
}

loc_802746E4:
{
}

loc_802746E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80274708;
    }
}

loc_802746EC:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802746F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_802746FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80274708;
    }
}

loc_80274700:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274708:
{
    r6 = (r6 + 1);
    r5 = (r5 + 2);
}

loc_80274710:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_80274718:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_802746A8;
    }
}

loc_8027471C:
{
    r4 = 0x805C0000u;
    r4 = (r4 + 26636);
    r5 = (r4 + 2);
    r6 = 1;
    goto loc_80274798;
}

loc_80274730:
{
}

loc_80274734:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(19))) {
        goto loc_80274744;
    }
}

loc_80274738:
{
}

loc_8027473C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(25))) {
        goto loc_80274760;
    }
}

loc_80274740:
{
    goto loc_8027477C;
}

loc_80274744:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8027474C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(19))) {
        goto loc_80274758;
    }
}

loc_80274750:
{
}

loc_80274754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(26))) {
        goto loc_80274790;
    }
}

loc_80274758:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274760:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80274768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25))) {
        goto loc_80274774;
    }
}

loc_8027476C:
{
}

loc_80274770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(27))) {
        goto loc_80274790;
    }
}

loc_80274774:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027477C:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80274784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80274790;
    }
}

loc_80274788:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274790:
{
    r6 = (r6 + 1);
    r5 = (r5 + 2);
}

loc_80274798:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_802747A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_80274730;
    }
}

loc_802747A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80274688(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80274688_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80274688 func_80274688 preserves=true fpr_mask=0x00000000
