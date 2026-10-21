#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80146F74_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80146F74u);
    goto loc_80146F74;

loc_80146F74:
{
    r0 = (r4 + 31);
    r5 = (r0 & -32);
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r4 = (r4 + 3504);
    r3 = (r3 & 255);
    r0 = 6;
    ctr = r0;
}

loc_80146F94:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80146F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80146FDC;
    }
}

loc_80146FA0:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80146FA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80146FDC;
    }
}

loc_80146FAC:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80146FB4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_80146FE4;
    }
}

loc_80146FB8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + r0);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80146FDC:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146F94;
    }
}

loc_80146FE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80146F74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80146F74_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80146F74 func_80146F74 preserves=true fpr_mask=0x00000000
