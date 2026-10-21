#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D36F8_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x802D36F8u);
    goto loc_802D36F8;

loc_802D36F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r0);
}

loc_802D370C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_return;
    }
}

loc_802D3710:
{
    r0 = 150;
    MemoryInline::FlatWrite32((r3 + 500), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_802D36F8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D36F8_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D36F8 func_802D36F8 preserves=true fpr_mask=0x00000000
