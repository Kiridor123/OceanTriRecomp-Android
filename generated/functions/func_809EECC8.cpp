#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EECC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x809EECC8u);
    goto loc_809EECC8;

loc_809EECC8:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809EECD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EECF0;
    }
}

loc_809EECD4:
{
}

loc_809EECD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809EECF4;
    }
}

loc_809EECDC:
{
}

loc_809EECE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809EECF8;
    }
}

loc_809EECE4:
{
}

loc_809EECE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809EECFC;
    }
}

loc_809EECEC:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809EECF0:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809EED04u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EECF4:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809EF9A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EECF8:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F1614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EECFC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809F1678u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EECC8 func_809EECC8 preserves=true fpr_mask=0x00000000
