#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802196A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x802196A4u);
    goto loc_802196A4;

loc_802196A4:
{
    r0 = (r4 & 255);
}

loc_802196AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802196C0;
    }
}

loc_802196B0:
{
    r4 = (r3 + 56);
    r6 = (r3 + 68);
    r7 = (r3 + 80);
    goto loc_802196CC;
}

loc_802196C0:
{
    r4 = (r3 + 92);
    r6 = (r3 + 104);
    r7 = (r3 + 116);
}

loc_802196CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0 = (r0 & 3);
}

loc_802196D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021974C;
    }
}

loc_802196DC:
{
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 251);
    r0 = (r0 & 255);
}

loc_802196EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8021974C;
    }
}

loc_802196F0:
{
    r0 = (r5 & 255);
}

loc_802196F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8021974C;
    }
}

loc_802196FC:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80219704:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80219744;
    }
}

loc_80219708:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80219710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80219744;
    }
}

loc_80219714:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8021971C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80219744;
    }
}

loc_80219720:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80219728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80219744;
    }
}

loc_8021972C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_80219734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80219744;
    }
}

loc_80219738:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
}

loc_80219740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021974C;
    }
}

loc_80219744:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8021974C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802196A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802196A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802196A4 func_802196A4 preserves=true fpr_mask=0x00000000
