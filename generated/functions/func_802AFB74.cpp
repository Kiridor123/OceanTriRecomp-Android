#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AFB74_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x802AFB74u);
    goto loc_802AFB74;

loc_802AFB74:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_802AFB84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AFB90;
    }
}

loc_802AFB88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802AFB90:
{
    r0 = MemoryInline::FlatRead8((r3 + 1525));
}

loc_802AFB98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AFBA4;
    }
}

loc_802AFB9C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802AFBA4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802AFB74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AFB74_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AFB74 func_802AFB74 preserves=true fpr_mask=0x00000000
