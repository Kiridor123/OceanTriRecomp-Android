#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034CBE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8034CBE8u);
    goto loc_8034CBE8;

loc_8034CBE8:
{
    r6 = 0;
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    r5 = MemoryInline::FlatRead32((r4 + 804));
}

loc_8034CBFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8034CC08;
    }
}

loc_8034CC00:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8034CC08:
{
    r0 = MemoryInline::FlatRead32((r4 + 808));
    ctr = r0;
}

loc_8034CC14:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8034CC40;
    }
}

loc_8034CC18:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8034CC20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034CC38;
    }
}

loc_8034CC24:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8034CC2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8034CC38;
    }
}

loc_8034CC30:
{
    r0 = (r6 + 1);
    r6 = (r0 & 255);
}

loc_8034CC38:
{
    r5 = (r5 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034CC18;
    }
}

loc_8034CC40:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034CBE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034CBE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034CBE8 func_8034CBE8 preserves=true fpr_mask=0x00000000
