#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80447E44_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80447E44;

loc_80447E44:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80447E44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80447E44_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80447E44 func_80447E44 preserves=true fpr_mask=0x00000000
