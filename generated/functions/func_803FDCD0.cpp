#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803FDCD0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x803FDCD0u);
    goto loc_803FDCD0;

loc_803FDCD0:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -29732));
}

loc_803FDCDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_803FDCE4;
    }
}

loc_803FDCE0:
{
    r4 = r0;
}

loc_803FDCE4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -29732));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + -29732), r0);
    r0 = MemoryInline::FlatRead32((r3 + -29728));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + -29728), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FDCD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FDCD0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FDCD0 func_803FDCD0 preserves=true fpr_mask=0x00000000
