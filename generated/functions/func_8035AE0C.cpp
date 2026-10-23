#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8035AE0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8035AE0C;

loc_8035AE0C:
{
    r4 = MemoryInline::FlatRead32((r13 + -16960));
}

loc_8035AE14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8035AE20;
    }
}

loc_8035AE18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8035AE20:
{
    r6 = (r4 + 3020);
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_8035AE30:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AE3C:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AE50:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AE64:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AE78:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AE8C:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AEA0:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AEB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AEB4:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8035AEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035AED4;
    }
}

loc_8035AEC8:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8035AE30;
    }
}

loc_8035AED4:
{
}

loc_8035AED8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(16))) {
        goto loc_8035AEE4;
    }
}

loc_8035AEDC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8035AEE4:
{
    MemoryInline::FlatWrite32(r6, r3);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035AE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035AE0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035AE0C func_8035AE0C preserves=true fpr_mask=0x00000000
