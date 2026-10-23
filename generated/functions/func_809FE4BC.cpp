#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FE4BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FE4BC;

loc_809FE4BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FE4C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FE4E4;
    }
}

loc_809FE4C8:
{
}

loc_809FE4CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FE4E8;
    }
}

loc_809FE4D0:
{
}

loc_809FE4D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FE4EC;
    }
}

loc_809FE4D8:
{
}

loc_809FE4DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FE4F0;
    }
}

loc_809FE4E0:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FE4E4:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE4F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE4E8:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE4EC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE73Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE4F0:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE7D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FE4BC func_809FE4BC preserves=true fpr_mask=0x00000000
