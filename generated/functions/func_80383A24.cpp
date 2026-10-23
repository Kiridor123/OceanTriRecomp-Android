#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80383A24_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80383A24;

loc_80383A24:
{
    r4 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 7), static_cast<uint8_t>(r4));
    r0 = 4;
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80383A24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80383A24_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80383A24 func_80383A24 preserves=true fpr_mask=0x00000000
