#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D6BD0_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x802D6BD0u);
    goto loc_802D6BD0;

loc_802D6BD0:
{
    r0 = MemoryInline::FlatRead16((r3 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D6BD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(150))) {
        goto loc_return;
    }
}

loc_802D6BDC:
{
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 982), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D6BEC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_return;
    }
}

loc_802D6BF0:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r3 + 982), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_802D6BD0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D6BD0_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D6BD0 func_802D6BD0 preserves=true fpr_mask=0x00000000
