#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8033A1A0_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8033A1A0u);
    goto loc_8033A1A0;

loc_8033A1A0:
{
    r5 = 0;
    r4 = 0x806C0000u;
    MemoryInline::FlatWriteRam8((r4 + 5024), static_cast<uint8_t>(r5));
    r4 = (r4 + 5024);
    MemoryInline::FlatWriteRam8((r4 + 8), static_cast<uint8_t>(r5));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 12), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8033A1A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8033A1A0_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033A1A0 func_8033A1A0 preserves=true fpr_mask=0x00000000
