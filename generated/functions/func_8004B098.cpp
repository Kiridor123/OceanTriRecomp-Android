#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004B098_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8004B098u);
    goto loc_8004B098;

loc_8004B098:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -438);
}

loc_8004B0A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004B0B8;
    }
}

loc_8004B0A8:
{
}

loc_8004B0AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004B0B8;
    }
}

loc_8004B0B0:
{
}

loc_8004B0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(223))) {
        goto loc_8004B0C0;
    }
}

loc_8004B0B8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8004B0C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8004B098(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004B098_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B098 func_8004B098 preserves=true fpr_mask=0x00000000
