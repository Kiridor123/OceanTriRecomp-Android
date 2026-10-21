#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D9D44_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x802D9D44u);
    goto loc_802D9D44;

loc_802D9D44:
{
    r0 = MemoryInline::FlatRead8((r3 + 369));
}

loc_802D9D4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D9D70;
    }
}

loc_802D9D50:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r3 + -82);
}

loc_802D9D5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802D9D68;
    }
}

loc_802D9D60:
{
}

loc_802D9D64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(87))) {
        goto loc_802D9D70;
    }
}

loc_802D9D68:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802D9D70:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802D9D44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D9D44_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D9D44 func_802D9D44 preserves=true fpr_mask=0x00000000
