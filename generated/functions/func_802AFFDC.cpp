#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AFFDC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_802AFFDC;

loc_802AFFDC:
{
    r0 = (r3 & 255);
}

loc_802AFFE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B0014;
    }
}

loc_802AFFE8:
{
}

loc_802AFFEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802B0014;
    }
}

loc_802AFFF0:
{
}

loc_802AFFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B0028;
    }
}

loc_802AFFF8:
{
}

loc_802AFFFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_802B0028;
    }
}

loc_802B0000:
{
}

loc_802B0004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802B003C;
    }
}

loc_802B0008:
{
}

loc_802B000C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_802B003C;
    }
}

loc_802B0010:
{
    goto loc_802B0050;
}

loc_802B0014:
{
    r0 = (r4 & 255);
}

loc_802B001C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802B0050;
    }
}

loc_802B0020:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802B0028:
{
    r0 = (r4 & 255);
}

loc_802B0030:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802B0050;
    }
}

loc_802B0034:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802B003C:
{
    r0 = (r4 & 255);
}

loc_802B0044:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802B0050;
    }
}

loc_802B0048:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802B0050:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802AFFDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AFFDC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AFFDC func_802AFFDC preserves=true fpr_mask=0x00000000
