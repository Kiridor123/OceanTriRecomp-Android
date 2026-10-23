#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F19CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809F19CC;

loc_809F19CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809F19D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F19F4;
    }
}

loc_809F19D8:
{
}

loc_809F19DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809F19F8;
    }
}

loc_809F19E0:
{
}

loc_809F19E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809F19FC;
    }
}

loc_809F19E8:
{
}

loc_809F19EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809F1A00;
    }
}

loc_809F19F0:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809F19F4:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F1B48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809F19F8:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F25B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809F19FC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F5B3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809F1A00:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F5F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F19CC func_809F19CC preserves=true fpr_mask=0x00000000
