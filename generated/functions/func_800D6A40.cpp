#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800D6A40_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x800D6A40u);
    goto loc_800D6A40;

loc_800D6A40:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
}

loc_800D6A48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D6A54;
    }
}

loc_800D6A4C:
{
    r3 = 0;
    return r3;
}

loc_800D6A54:
{
    // inline leaf 0x800D6A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 12));
    // end of inlined leaf 0x800D6A14
    return r3;
}

}

extern "C" void func_800D6A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D6A40_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D6A40 func_800D6A40 preserves=true fpr_mask=0x00000000
