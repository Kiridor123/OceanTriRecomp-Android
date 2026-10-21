#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802FB520u);
    goto loc_802FB520;

loc_802FB520:
{
    r3 = (r3 & 65535);
}

loc_802FB528:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_802FB534;
    }
}

loc_802FB52C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    return;
}

loc_802FB534:
{
}

loc_802FB538:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FB544;
    }
}

loc_802FB53C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    return;
}

loc_802FB544:
{
}

loc_802FB548:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(28))) {
        goto loc_802FB550;
    }
}

loc_802FB54C:
{
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB498u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

loc_802FB550:
{
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB414u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FB520 func_802FB520 preserves=true fpr_mask=0x00000000
