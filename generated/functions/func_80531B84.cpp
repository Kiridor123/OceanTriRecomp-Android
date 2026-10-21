#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80531B84_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    MKW_GUEST_ENTER(0x80531B84u);
    goto loc_80531B84;

loc_80531B84:
{
    r7 = (r2 + -688);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r6 = 255;
    r4 = 0;
    r10 = MemoryInline::FlatRead16((r2 + -688));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = MemoryInline::FlatRead16((r7 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r5 & 31);
    r8 = MemoryInline::FlatRead16((r7 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r0 & 31);
    r7 = MemoryInline::FlatRead16((r7 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 56), r5);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite8((r3 + 89), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 64), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return r4;
}

}

extern "C" void func_80531B84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80531B84_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80531B84 func_80531B84 preserves=true fpr_mask=0x00000000
