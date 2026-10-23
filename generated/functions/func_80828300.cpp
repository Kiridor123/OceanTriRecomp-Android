#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80828300;

loc_80828300:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r6 + 17656));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead8((r3 + 1121));
    r4 = MemoryInline::FlatRead8((r3 + 1122));
    r0 = MemoryInline::FlatRead8((r3 + 1123));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80828300 func_80828300 preserves=true fpr_mask=0x00000000
