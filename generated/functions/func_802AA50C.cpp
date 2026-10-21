#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AA50C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x802AA50Cu);
    goto loc_802AA50C;

loc_802AA50C:
{
}

loc_802AA510:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AA520;
    }
}

loc_802AA514:
{
    r3 = 0x8A8B0000u;
    r3 = (r3 + -29953);
    return r3;
}

loc_802AA520:
{
}

loc_802AA524:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_802AA54C;
    }
}

loc_802AA528:
{
}

loc_802AA52C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(1))) {
        goto loc_802AA538;
    }
}

loc_802AA530:
{
}

loc_802AA534:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_802AA540;
    }
}

loc_802AA538:
{
    r3 = -1;
    return r3;
}

loc_802AA540:
{
    r3 = -538968064;
    r3 = (r3 + -8193);
    return r3;
}

loc_802AA54C:
{
    r3 = -1431633920;
    r3 = (r3 + -21761);
    return r3;
}

}

extern "C" void func_802AA50C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AA50C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AA50C func_802AA50C preserves=true fpr_mask=0x00000000
