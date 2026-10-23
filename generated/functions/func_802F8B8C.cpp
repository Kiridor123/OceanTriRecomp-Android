#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802F8B8C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_802F8B8C;

loc_802F8B8C:
{
    r0 = (r4 & 255);
}

loc_802F8B94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F8BAC;
    }
}

loc_802F8B98:
{
}

loc_802F8B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F8BB4;
    }
}

loc_802F8BA0:
{
}

loc_802F8BA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F8BBC;
    }
}

loc_802F8BA8:
{
    goto loc_802F8BC4;
}

loc_802F8BAC:
{
    r3 = MemoryInline::FlatRead8((r3 + 808));
    ctx->gpr[0] = r0;
    return r3;
}

loc_802F8BB4:
{
    r3 = MemoryInline::FlatRead8((r3 + 830));
    ctx->gpr[0] = r0;
    return r3;
}

loc_802F8BBC:
{
    r3 = MemoryInline::FlatRead8((r3 + 809));
    ctx->gpr[0] = r0;
    return r3;
}

loc_802F8BC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802F8B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802F8B8C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802F8B8C func_802F8B8C preserves=true fpr_mask=0x00000000
