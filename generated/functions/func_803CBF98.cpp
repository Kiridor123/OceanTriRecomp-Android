#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CBF98_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x803CBF98u);
    goto loc_803CBF98;

loc_803CBF98:
{
    MemoryInline::FlatWrite8((r3 + 8765), static_cast<uint8_t>(r4));
    return;
}

}

extern "C" void func_803CBF98(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803CBF98_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CBF98 func_803CBF98 preserves=true fpr_mask=0x00000000
