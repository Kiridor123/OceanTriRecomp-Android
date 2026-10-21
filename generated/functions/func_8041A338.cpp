#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041A338_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8041A338u);
    goto loc_8041A338;

loc_8041A338:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8041A340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8041A350;
    }
}

loc_8041A344:
{
    MemoryInline::FlatWrite32(r3, r4);
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041A350:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8041A338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041A338_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041A338 func_8041A338 preserves=true fpr_mask=0x00000000
