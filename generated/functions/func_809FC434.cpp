#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FC434(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FC434;

loc_809FC434:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FC43C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FC45C;
    }
}

loc_809FC440:
{
}

loc_809FC444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FC460;
    }
}

loc_809FC448:
{
}

loc_809FC44C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FC464;
    }
}

loc_809FC450:
{
}

loc_809FC454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FC468;
    }
}

loc_809FC458:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FC45C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FC470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FC460:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FC8C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FC464:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FCF48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FC468:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FD00Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FC434 func_809FC434 preserves=true fpr_mask=0x00000000
