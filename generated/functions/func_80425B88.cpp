#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80425B88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80425B88;

loc_80425B88:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r5 = (r3 + 25376);
    r4 = 0;
    r3 = r5;
    r0 = 128;
    ctr = r0;
}

loc_80425BA0:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80425BA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80425BD0;
    }
}

loc_80425BAC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & -32);
    r3 = (r5 + r0);
    r3 = (r3 + 8);
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80425BD0:
{
    r3 = (r3 + 32);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80425BA0;
    }
}

loc_80425BDC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80425B88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80425B88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80425B88 func_80425B88 preserves=true fpr_mask=0x00000000
