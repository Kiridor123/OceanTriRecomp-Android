#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80208BAC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80208BACu);
    goto loc_80208BAC;

loc_80208BAC:
{
    r0 = (r3 & 255);
}

loc_80208BB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80208BF0;
    }
}

loc_80208BB8:
{
    r3 = (r4 & 65535);
    r0 = (r3 + -26);
}

loc_80208BC4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9))) {
        goto loc_80208BE8;
    }
}

loc_80208BC8:
{
    r0 = (r3 + -8);
}

loc_80208BD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80208BE8;
    }
}

loc_80208BD4:
{
    r0 = (r3 + -3);
}

loc_80208BDC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80208BE8;
    }
}

loc_80208BE0:
{
}

loc_80208BE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(16))) {
        goto loc_80208BF0;
    }
}

loc_80208BE8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80208BF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80208BAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80208BAC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80208BAC func_80208BAC preserves=true fpr_mask=0x00000000
