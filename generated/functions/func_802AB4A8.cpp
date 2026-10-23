#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802AB4A8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802AB4A8;

loc_802AB4A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r3 = (r3 + -1256);
    r31 = (r3 + 40);
    r30 = 0;
}

loc_802AB4CC:
{
    r3 = r31;
    // inline leaf 0x802AB47C (11 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802AB47C
    r30 = (r30 + 1);
    r31 = (r31 + 12);
}

loc_802AB4E0:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(64))) {
        goto loc_802AB4CC;
    }
}

loc_802AB4E4:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -1256);
    MemoryInline::FlatWriteRam8((r3 + 808), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 809), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 810), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 811), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AB4A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AB4A8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AB4A8 func_802AB4A8 preserves=true fpr_mask=0x00000000
