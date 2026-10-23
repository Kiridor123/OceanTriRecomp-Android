#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80487764_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80487764;

loc_80487764:
{
    r3 = 0x80570000u;
    r3 = (r3 + 16408);
    r6 = MemoryInline::FlatRead32(r3);
    r4 = 65536;
    r7 = 0x80740000u;
    r8 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r7 = (r7 + -17608);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = 2;
    MemoryInline::FlatWriteRam16((r7 + 6390), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r7 + 6392), r6);
    MemoryInline::FlatWriteRam32((r7 + 6396), r5);
    MemoryInline::FlatWriteRam32((r7 + 6400), r4);
    MemoryInline::FlatWriteRam32((r7 + 6404), r3);
    MemoryInline::FlatWriteRam8((r7 + 6409), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80487764(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80487764_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80487764 func_80487764 preserves=true fpr_mask=0x00000000
