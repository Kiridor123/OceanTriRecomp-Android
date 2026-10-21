#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80079ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80079ED0u);
    goto loc_80079ED0;

loc_80079ED0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x80079F74 (1 guest instruction(s))
    // end of inlined leaf 0x80079F74
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r31;
    // inline leaf 0x80079F74 (1 guest instruction(s))
    // end of inlined leaf 0x80079F74
    r4 = r3;
    r3 = r30;
    // inline leaf 0x80079F48 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80079F48
    r3 = (r1 + 8);
    // inline leaf 0x80079F74 (1 guest instruction(s))
    // end of inlined leaf 0x80079F74
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80079F48 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80079F48
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80079ED0 func_80079ED0 preserves=true fpr_mask=0x00000000
