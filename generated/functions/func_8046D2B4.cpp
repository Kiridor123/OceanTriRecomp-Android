#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046D2B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x8046D2B4u);
    goto loc_8046D2B4;

loc_8046D2B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8046D2C0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046D2D0;
    }
}

loc_8046D2C8:
{
    r3 = 1795;
    goto loc_8046D32C;
}

loc_8046D2D0:
{
    r4 = 0x80700000u;
    r7 = 0x80700000u;
    r4 = (r4 + -27328);
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 504));
    r6 = (r7 + -27688);
    r8 = 0;
    MemoryInline::FlatWriteRam32((r6 + 4), r8);
    r0 = (r0 | 1024);
    r0 = (r0 & -32769);
    MemoryInline::FlatWriteRam32((r6 + 8), r3);
    MemoryInline::FlatWriteRam32((r7 + -27688), r5);
    MemoryInline::FlatWriteRam32((r4 + 504), r0);
}

loc_8046D30C:
{
    r4 = 0x80700000u;
    r4 = (r4 + -27688);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0;
    // inline leaf 0x8046D5C4 (4 guest instruction(s))
    r4 = 0x80700000u;
    r4 = (r4 + -27496);
    MemoryInline::FlatWriteRam32((r4 + 152), r3);
    // end of inlined leaf 0x8046D5C4
    r3 = 0;
}

loc_8046D32C:
{
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

extern "C" void func_8046D2B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046D2B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046D2B4 func_8046D2B4 preserves=true fpr_mask=0x00000000
