#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DAE64_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804DAE64u);
    goto loc_804DAE64;

loc_804DAE64:
{
    r4 = -1431633920;
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r4 = (r4 + -21845);
    r5 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & 536870911);
}

loc_804DAE7C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804DAEAC;
    }
}

loc_804DAE84:
{
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = (r4 + r5);
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804DAE98:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804DAEA4;
    }
}

loc_804DAE9C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804DAEA4:
{
    r5 = (r5 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DAE84;
    }
}

loc_804DAEAC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DAE64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DAE64_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DAE64 func_804DAE64 preserves=true fpr_mask=0x00000000
