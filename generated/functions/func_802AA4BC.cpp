#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AA4BC_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_802AA4BC;

loc_802AA4BC:
{
}

loc_802AA4C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AA4D0;
    }
}

loc_802AA4C4:
{
    r3 = 0x870F0000u;
    r3 = (r3 + 4095);
    return r3;
}

loc_802AA4D0:
{
}

loc_802AA4D4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_802AA500;
    }
}

loc_802AA4D8:
{
}

loc_802AA4DC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(1))) {
        goto loc_802AA4E8;
    }
}

loc_802AA4E0:
{
}

loc_802AA4E4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_802AA4F4;
    }
}

loc_802AA4E8:
{
    r3 = -180944896;
    r3 = (r3 + 14335);
    return r3;
}

loc_802AA4F4:
{
    r3 = -601686016;
    r3 = (r3 + 9215);
    return r3;
}

loc_802AA500:
{
    r3 = -1441529856;
    r3 = (r3 + 5375);
    return r3;
}

}

extern "C" void func_802AA4BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AA4BC_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AA4BC func_802AA4BC preserves=true fpr_mask=0x00000000
