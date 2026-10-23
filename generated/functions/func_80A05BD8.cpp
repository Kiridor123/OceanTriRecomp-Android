#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A05BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80A05BD8;

loc_80A05BD8:
{
    r0 = (r4 & 255);
}

loc_80A05BE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A05C08;
    }
}

loc_80A05BE4:
{
}

loc_80A05BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A05C0C;
    }
}

loc_80A05BEC:
{
}

loc_80A05BF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A05C10;
    }
}

loc_80A05BF4:
{
}

loc_80A05BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A05C14;
    }
}

loc_80A05BFC:
{
}

loc_80A05C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80A05C14;
    }
}

loc_80A05C04:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A05C08:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A05C20u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A05C0C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A05DE4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A05C10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A05F18u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A05C14:
{
    r4 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A0618Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFE03FFF fpr_write=0xFFE03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A05BD8 func_80A05BD8 preserves=true fpr_mask=0x00000000
