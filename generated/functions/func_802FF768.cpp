#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FF768(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802FF768;

loc_802FF768:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
    r3 = 9;
    ctx->lr = 0x802FF784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FF788:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FF790;
    }
}

loc_802FF78C:
{
    r31 = 1;
}

loc_802FF790:
{
    r3 = 12;
    ctx->lr = 0x802FF798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FF79C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FF7A8;
    }
}

loc_802FF7A0:
{
    r0 = (r31 + 1);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802FF7A8:
{
    r3 = 16;
    ctx->lr = 0x802FF7B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FF7B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FF7C0;
    }
}

loc_802FF7B8:
{
    r0 = (r31 + 1);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802FF7C0:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FF768 func_802FF768 preserves=true fpr_mask=0x00000000
