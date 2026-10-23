#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EED60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_803EED60;

loc_803EED60:
{
    r6 = 0;
    r5 = r3;
    r0 = 50;
    ctr = r0;
}

loc_803EED70:
{
    r0 = MemoryInline::FlatRead8((r5 + 13729));
}

loc_803EED78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEDC4;
    }
}

loc_803EED7C:
{
    r4 = (r3 + r6);
    r4 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -4152));
}

loc_803EED8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEDC4;
    }
}

loc_803EED90:
{
    r0 = MemoryInline::FlatRead8((r4 + -4252));
}

loc_803EED98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EEDA4;
    }
}

loc_803EED9C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEDA4:
{
}

loc_803EEDA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803EEDB4;
    }
}

loc_803EEDAC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEDB4:
{
}

loc_803EEDB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EEDC4;
    }
}

loc_803EEDBC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEDC4:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 13785));
}

loc_803EEDD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEE1C;
    }
}

loc_803EEDD4:
{
    r4 = (r3 + r6);
    r4 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -4152));
}

loc_803EEDE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEE1C;
    }
}

loc_803EEDE8:
{
    r0 = MemoryInline::FlatRead8((r4 + -4252));
}

loc_803EEDF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EEDFC;
    }
}

loc_803EEDF4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEDFC:
{
}

loc_803EEE00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803EEE0C;
    }
}

loc_803EEE04:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEE0C:
{
}

loc_803EEE10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EEE1C;
    }
}

loc_803EEE14:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EEE1C:
{
    r5 = (r5 + 112);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EED70;
    }
}

loc_803EEE28:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EED60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EED60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EED60 func_803EED60 preserves=true fpr_mask=0x00000000
