#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803E8C00_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x803E8C00u);
    goto loc_803E8C00;

loc_803E8C00:
{
    r0 = MemoryInline::FlatRead32((r3 + 1280));
}

loc_803E8C08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(256))) {
        goto loc_803E8C18;
    }
}

loc_803E8C0C:
{
    MemoryInline::FlatWrite32((r3 + 1016), r0);
    r0 = MemoryInline::FlatRead32((r3 + 1284));
    MemoryInline::FlatWrite32((r3 + 1020), r0);
}

loc_803E8C18:
{
    r3 = (r3 + 984);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803E8C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803E8C00_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803E8C00 func_803E8C00 preserves=true fpr_mask=0x00000000
