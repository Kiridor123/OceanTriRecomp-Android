#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803A4EF4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_803A4EF4;

loc_803A4EF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A4F00:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803A4F1C;
    }
}

loc_803A4F04:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A4F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A4F1C;
    }
}

loc_803A4F14:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_803A4F1C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803A4EF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803A4EF4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A4EF4 func_803A4EF4 preserves=true fpr_mask=0x00000000
