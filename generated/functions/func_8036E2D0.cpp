#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8036E2D0_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8036E2D0;

loc_8036E2D0:
{
    r4 = MemoryInline::FlatRead32((r3 + 444));
    r0 = (r4 & 65535);
}

loc_8036E2DC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32768))) {
        goto loc_8036E300;
    }
}

loc_8036E2E0:
{
}

loc_8036E2E4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(64))) {
        goto loc_8036E2F4;
    }
}

loc_8036E2E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 444), r0);
    goto loc_8036E31C;
}

loc_8036E2F4:
{
    r0 = (r4 + -64);
    MemoryInline::FlatWrite32((r3 + 444), r0);
    goto loc_8036E31C;
}

loc_8036E300:
{
}

loc_8036E304:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65472))) {
        goto loc_8036E314;
    }
}

loc_8036E308:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 444), r0);
    goto loc_8036E31C;
}

loc_8036E314:
{
    r0 = (r4 + 64);
    MemoryInline::FlatWrite32((r3 + 444), r0);
}

loc_8036E31C:
{
    // inline leaf 0x80133CA0 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1925), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133CA0
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8036E2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8036E2D0_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8036E2D0 func_8036E2D0 preserves=true fpr_mask=0x00000000
