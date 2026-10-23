#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803CF6D8_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_803CF6D8;

loc_803CF6D8:
{
    r4 = 0x80600000u;
    r0 = (r4 + -24224);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_803CF6D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803CF6D8_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CF6D8 func_803CF6D8 preserves=true fpr_mask=0x00000000
