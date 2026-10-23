#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80226A70_ra30_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80226A70;

loc_80226A70:
{
    r0 = (r5 & 255);
}

loc_80226A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80226A88;
    }
}

loc_80226A7C:
{
}

loc_80226A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80226A9C;
    }
}

loc_80226A84:
{
    goto loc_80226AA8;
}

loc_80226A88:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18456);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

loc_80226A9C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -18192);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

loc_80226AA8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_80226A70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80226A70_ra30_0_10_0(ctx, ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000031 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226A70 func_80226A70 preserves=true fpr_mask=0x00000000
