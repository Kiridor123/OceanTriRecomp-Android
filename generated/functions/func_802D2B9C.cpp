#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D2B9C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_802D2B9C;

loc_802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_802D2BC4;
    }
}

loc_802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802D2BC4;
    }
}

loc_802D2BBC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_802D2BC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_802D2B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D2B9C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D2B9C func_802D2B9C preserves=true fpr_mask=0x00000000
