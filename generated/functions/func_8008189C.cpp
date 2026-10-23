#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8008189C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8008189C;

loc_8008189C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = r3;
}

loc_800818B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800818E0;
    }
}

loc_800818B4:
{
}

loc_800818B8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(2))) {
        goto loc_800818D8;
    }
}

loc_800818BC:
{
    r3 = r5;
    r0 = (r4 * 24);
    r4 = (r6 + r0);
    r4 = (r4 + 156);
    // inline leaf 0x80081868 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r3 + 12), r5);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x80081868
    r3 = 1;
    goto loc_800818E4;
}

loc_800818D8:
{
    r3 = 0;
    goto loc_800818E4;
}

loc_800818E0:
{
    r3 = 0;
}

loc_800818E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008189C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008189C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008189C func_8008189C preserves=true fpr_mask=0x00000000
