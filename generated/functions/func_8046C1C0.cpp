#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046C1C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046C1C0;

loc_8046C1C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r7;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    // inline leaf 0x8046B15C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16300));
    // end of inlined leaf 0x8046B15C
}

loc_8046C1F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046C200;
    }
}

loc_8046C1F8:
{
    r3 = 1;
    goto loc_8046C24C;
}

loc_8046C200:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = r28;
    r6 = r29;
    r5 = (r1 + 8);
    // inline leaf 0x804689D8 (2 guest instruction(s))
    PPC_TrapWord(31, r0, 0);
    // end of inlined leaf 0x804689D8
    r0 = (r3 & 255);
}

loc_8046C220:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r30, r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046C238;
    }
}

loc_8046C22C:
{
}

loc_8046C230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8046C240;
    }
}

loc_8046C234:
{
    goto loc_8046C248;
}

loc_8046C238:
{
    r3 = 0;
    goto loc_8046C24C;
}

loc_8046C240:
{
    r3 = 2;
    goto loc_8046C24C;
}

loc_8046C248:
{
    r3 = 1;
}

loc_8046C24C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046C1C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046C1C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046C1C0 func_8046C1C0 preserves=true fpr_mask=0x00000000
