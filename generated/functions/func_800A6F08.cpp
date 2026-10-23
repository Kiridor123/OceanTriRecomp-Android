#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800A6F08_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800A6F08;

loc_800A6F08:
{
    r5 = MemoryInline::FlatRead32(r3);
    r4 = 196608;
    r0 = (r4 + 17405);
    r4 = (r5 * r0);
    r4 = (r4 + 2555904);
    r0 = (r4 + -24893);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_800A6F08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800A6F08_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A6F08 func_800A6F08 preserves=true fpr_mask=0x00000000
