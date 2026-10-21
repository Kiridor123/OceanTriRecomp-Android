#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FF564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x809FF564u);
    goto loc_809FF564;

loc_809FF564:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FF56C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FF58C;
    }
}

loc_809FF570:
{
}

loc_809FF574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FF590;
    }
}

loc_809FF578:
{
}

loc_809FF57C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FF594;
    }
}

loc_809FF580:
{
}

loc_809FF584:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FF598;
    }
}

loc_809FF588:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FF58C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FF5A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FF590:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FF8F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FF594:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FFCD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FF598:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FFD6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FF564 func_809FF564 preserves=true fpr_mask=0x00000000
