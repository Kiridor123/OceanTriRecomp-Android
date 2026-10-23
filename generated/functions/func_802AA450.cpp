#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AA450_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_802AA450;

loc_802AA450:
{
}

loc_802AA454:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_802AA464;
    }
}

loc_802AA458:
{
    r3 = -204013568;
    r3 = (r3 + 16127);
    return r3;
}

loc_802AA464:
{
}

loc_802AA468:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AA478;
    }
}

loc_802AA46C:
{
    r3 = 1684275200;
    r3 = (r3 + 25855);
    return r3;
}

loc_802AA478:
{
}

loc_802AA47C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_802AA4A0;
    }
}

loc_802AA480:
{
}

loc_802AA484:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_802AA494;
    }
}

loc_802AA488:
{
    r3 = -252641280;
    r3 = (r3 + -3841);
    return r3;
}

loc_802AA494:
{
    r3 = -1010565120;
    r3 = (r3 + -15361);
    return r3;
}

loc_802AA4A0:
{
}

loc_802AA4A4:
{
    r3 = 0x87880000u;
    r3 = (r3 + -30721);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_802AA4B0:
{
    r3 = -391905280;
    r3 = (r3 + 4095);
    return r3;
}

loc_return:
{
    return r3;
}

}

extern "C" void func_802AA450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AA450_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AA450 func_802AA450 preserves=true fpr_mask=0x00000000
