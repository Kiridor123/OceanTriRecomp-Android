#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021B90C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8021B90Cu);
    goto loc_8021B90C;

loc_8021B90C:
{
    r0 = (r3 & 255);
}

loc_8021B914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_8021B924;
    }
}

loc_8021B918:
{
}

loc_8021B91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_8021B938;
    }
}

loc_8021B920:
{
    goto loc_8021B950;
}

loc_8021B924:
{
    r0 = (r4 & 255);
}

loc_8021B92C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8021B950;
    }
}

loc_8021B930:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8021B938:
{
    r3 = (r4 & 255);
    r0 = (r3 + -5);
}

loc_8021B944:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8021B950;
    }
}

loc_8021B948:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8021B950:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8021B90C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021B90C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021B90C func_8021B90C preserves=true fpr_mask=0x00000000
