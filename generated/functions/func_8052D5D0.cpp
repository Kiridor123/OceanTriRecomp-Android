#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8052D5D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x8052D5D0u);
    goto loc_8052D5D0;

loc_8052D5D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = MemoryInline::FlatRead8(r5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 2147483647);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = MemoryInline::FlatRead8((r5 + 1));
    r6 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    // inline leaf 0x8052D618 (11 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = MemoryInline::FlatRead8(r5);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r4 + 220), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r4 + 221), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r4 + 222), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 223), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8052D618
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052D5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052D5D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052D5D0 func_8052D5D0 preserves=true fpr_mask=0x00000000
