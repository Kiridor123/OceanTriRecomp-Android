#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8056C3B4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8056C3B4u);
    goto loc_8056C3B4;

loc_8056C3B4:
{
    goto loc_8056C3BC;
}

loc_8056C3B8:
{
    r3 = r0;
}

loc_8056C3BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8056C3C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056C3B8;
    }
}

loc_8056C3C8:
{
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8056C3B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056C3B4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C3B4 func_8056C3B4 preserves=true fpr_mask=0x00000000
