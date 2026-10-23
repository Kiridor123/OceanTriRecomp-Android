#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80378294_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80378294;

loc_80378294:
{
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 38));
    MemoryInline::FlatWriteRam16((r4 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 40));
    r0 = (r0 & 255);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 354), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80378294(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80378294_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80378294 func_80378294 preserves=true fpr_mask=0x00000000
