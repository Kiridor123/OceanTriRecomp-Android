#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80056AB8_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80056AB8u);
    goto loc_80056AB8;

loc_80056AB8:
{
    r6 = 0x80670000u;
    r7 = (r6 + -11912);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r7 + 92), static_cast<uint8_t>(r0));
    r6 = 0;
    MemoryInline::FlatWriteRam8((r7 + 93), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r7 + 88), r3);
    MemoryInline::FlatWriteRam32((r7 + 84), r5);
    r0 = (r4 & 255);
    MemoryInline::FlatWriteRam8((r7 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r7 + 98), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

extern "C" void func_80056AB8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80056AB8_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80056AB8 func_80056AB8 preserves=true fpr_mask=0x00000000
