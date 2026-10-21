#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042B2DC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8042B2DCu);
    goto loc_8042B2DC;

loc_8042B2DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = MemoryInline::FlatRead32((r3 + 112));
}

loc_8042B2E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8042B2EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 72), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8042B2DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042B2DC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042B2DC func_8042B2DC preserves=true fpr_mask=0x00000000
