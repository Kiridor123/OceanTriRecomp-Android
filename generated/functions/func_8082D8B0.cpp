#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082D8B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    MKW_GUEST_ENTER(0x8082D8B0u);
    goto loc_8082D8B0;

loc_8082D8B0:
{
    r8 = 0x80840000u;
    r6 = 255;
    r7 = (r8 + 18584);
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r10 = MemoryInline::FlatRead16((r8 + 18584));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r0 & 31);
    r9 = MemoryInline::FlatRead16((r7 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::FlatRead16((r7 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = (r5 & 31);
    r7 = MemoryInline::FlatRead16((r7 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 76), r5);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 88), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082D8B0 func_8082D8B0 preserves=true fpr_mask=0x00000000
