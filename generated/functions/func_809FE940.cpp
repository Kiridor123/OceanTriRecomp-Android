#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FE940(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x809FE940u);
    goto loc_809FE940;

loc_809FE940:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FE948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FE968;
    }
}

loc_809FE94C:
{
}

loc_809FE950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FE96C;
    }
}

loc_809FE954:
{
}

loc_809FE958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FE970;
    }
}

loc_809FE95C:
{
}

loc_809FE960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FE974;
    }
}

loc_809FE964:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FE968:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE97Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE96C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FEBC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE970:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FF364u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE974:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FF404u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FE940 func_809FE940 preserves=true fpr_mask=0x00000000
