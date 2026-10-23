#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D3B3C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_802D3B3C;

loc_802D3B3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 852));
}

loc_802D3B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802D3B48:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 848), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 852), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 850), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_802D3B3C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D3B3C_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D3B3C func_802D3B3C preserves=true fpr_mask=0x00000000
