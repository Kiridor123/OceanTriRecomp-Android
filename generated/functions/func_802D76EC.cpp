#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802D76EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802D76ECu);
    goto loc_802D76EC;

loc_802D76EC:
{
    r0 = (r3 & 255);
    r3 = 0x805D0000u;
    r3 = (r3 + 19280);
    r5 = MemoryInline::FlatRead32(r3);
    goto loc_802D7714;
}

loc_802D7700:
{
}

loc_802D7704:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802D7710;
    }
}

loc_802D7708:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D7710:
{
    r5 = (r5 + 1);
}

loc_802D7714:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802D771C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D7700;
    }
}

loc_802D7720:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_802D773C;
}

loc_802D7728:
{
}

loc_802D772C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802D7738;
    }
}

loc_802D7730:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D7738:
{
    r5 = (r5 + 1);
}

loc_802D773C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802D7744:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D7728;
    }
}

loc_802D7748:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_802D7764;
}

loc_802D7750:
{
}

loc_802D7754:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802D7760;
    }
}

loc_802D7758:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D7760:
{
    r5 = (r5 + 1);
}

loc_802D7764:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802D776C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D7750;
    }
}

loc_802D7770:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_802D778C;
}

loc_802D7778:
{
}

loc_802D777C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802D7788;
    }
}

loc_802D7780:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D7788:
{
    r5 = (r5 + 1);
}

loc_802D778C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802D7794:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D7778;
    }
}

loc_802D7798:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D76EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D76EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D76EC func_802D76EC preserves=true fpr_mask=0x00000000
