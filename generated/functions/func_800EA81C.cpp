#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA81C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800EA81C;

loc_800EA81C:
{
}

loc_800EA820:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EA838;
    }
}

loc_800EA824:
{
    r3 = (r3 + r4);
    r0 = (r3 + -1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r4 * r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800EA838:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EA81C func_800EA81C preserves=true fpr_mask=0x00000000
