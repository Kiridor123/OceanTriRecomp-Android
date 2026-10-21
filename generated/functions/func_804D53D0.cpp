#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D53D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x804D53D0u);
    goto loc_804D53D0;

loc_804D53D0:
{
    r3 = PPC_Mftbu();
    r4 = PPC_Mftb();
    r5 = PPC_Mftbu();
}

loc_804D53E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r5))) {
        goto loc_804D53D0;
    }
}

loc_804D53E4:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D53D0 func_804D53D0 preserves=true fpr_mask=0x00000000
