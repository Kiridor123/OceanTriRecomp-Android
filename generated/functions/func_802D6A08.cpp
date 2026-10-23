#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D6A08_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_802D6A08;

loc_802D6A08:
{
}

loc_802D6A0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D6A2C;
    }
}

loc_802D6A10:
{
    r0 = MemoryInline::FlatRead8((r3 + 568));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_802D6A20:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_802D6A24:
{
    MemoryInline::FlatWrite8((r3 + 568), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    return r4;
}

loc_802D6A2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 569));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_802D6A3C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_802D6A40:
{
    MemoryInline::FlatWrite8((r3 + 569), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_802D6A08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D6A08_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D6A08 func_802D6A08 preserves=true fpr_mask=0x00000000
