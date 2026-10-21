#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D4244_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802D4244u);
    goto loc_802D4244;

loc_802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_802D4244(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D4244_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D4244 func_802D4244 preserves=true fpr_mask=0x00000000
