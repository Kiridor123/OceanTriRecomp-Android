#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802FB5B0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802FB5B0u);
    goto loc_802FB5B0;

loc_802FB5B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
}

loc_802FB5C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FB5D8;
    }
}

loc_802FB5CC:
{
}

loc_802FB5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802FB5FC;
    }
}

loc_802FB5D4:
{
    goto loc_802FB628;
}

loc_802FB5D8:
{
    r31 = 27;
}

loc_802FB5DC:
{
    r3 = (r31 & 65535);
    ctx->lr = 0x802FB5E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FB5E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FB5F4;
    }
}

loc_802FB5EC:
{
    r3 = r31;
    goto loc_802FB634;
}

loc_802FB5F4:
{
    r31 = (r31 + -1);
    goto loc_802FB5DC;
}

loc_802FB5FC:
{
    r31 = 39;
}

loc_802FB600:
{
    r3 = (r31 & 65535);
    ctx->lr = 0x802FB608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FB60C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FB618;
    }
}

loc_802FB610:
{
    r3 = r31;
    goto loc_802FB634;
}

loc_802FB618:
{
    r31 = (r31 + -1);
}

loc_802FB620:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(28))) {
        goto loc_802FB600;
    }
}

loc_802FB624:
{
    goto loc_802FB630;
}

loc_802FB628:
{
    r3 = 0;
    goto loc_802FB634;
}

loc_802FB630:
{
    r3 = 0;
}

loc_802FB634:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802FB5B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802FB5B0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FB5B0 func_802FB5B0 preserves=true fpr_mask=0x00000000
