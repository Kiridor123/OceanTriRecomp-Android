#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80479C20_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80479C20;

loc_80479C20:
{
    r6 = 0x80730000u;
    r0 = 0;
    r6 = (r6 + 32096);
    MemoryInline::FlatWriteRam8((r6 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 27), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 31), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + 32), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r6 + 18), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_80479C20(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80479C20_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80479C20 func_80479C20 preserves=true fpr_mask=0x00000000
