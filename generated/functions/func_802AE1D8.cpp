#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AE1D8_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_802AE1D8;

loc_802AE1D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AE1F0;
    }
}

loc_802AE1E4:
{
}

loc_802AE1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AE204;
    }
}

loc_802AE1EC:
{
    // inline leaf 0x802AE238 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x802AE238
    ctx->gpr[0] = r0;
    return r3;
}

loc_802AE1F0:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2344);
    ctx->gpr[0] = r0;
    return r3;
}

loc_802AE204:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2312);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802AE1D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AE1D8_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AE1D8 func_802AE1D8 preserves=true fpr_mask=0x00000000
