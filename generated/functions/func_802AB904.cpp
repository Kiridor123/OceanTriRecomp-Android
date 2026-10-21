#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802AB904_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802AB904u);
    goto loc_802AB904;

loc_802AB904:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r3 = (r3 + -1256);
    r31 = (r3 + 812);
    r30 = 0;
}

loc_802AB928:
{
    r3 = r31;
    // inline leaf 0x802AB8E0 (9 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB8E0
    r30 = (r30 + 1);
    r31 = (r31 + 12);
}

loc_802AB93C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(12))) {
        goto loc_802AB928;
    }
}

loc_802AB940:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -1256);
    MemoryInline::FlatWriteRam8((r3 + 956), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 957), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 958), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 959), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AB904(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AB904_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AB904 func_802AB904 preserves=true fpr_mask=0x00000000
