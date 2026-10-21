#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801322F4_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x801322F4u);
    goto loc_801322F4;

loc_801322F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 2382), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 2383), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_801322F4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801322F4_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801322F4 func_801322F4 preserves=true fpr_mask=0x00000000
