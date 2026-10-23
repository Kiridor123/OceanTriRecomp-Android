#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A864(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8007A864;

loc_8007A864:
{
}

loc_8007A868:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8007A86C:
{
    r3 = (r3 + 4);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804B82B0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007A864 func_8007A864 preserves=true fpr_mask=0x00000000
