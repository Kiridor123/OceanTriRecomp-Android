#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804276D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_804276D4;

loc_804276D4:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r5 = 0;
    r3 = r4;
    r0 = 64;
    ctr = r0;
}

loc_804276E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 31126));
}

loc_804276F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80427704;
    }
}

loc_804276F4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r3 = (r3 + 31126);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80427704:
{
    r3 = (r3 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804276E8;
    }
}

loc_80427710:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804276D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804276D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804276D4 func_804276D4 preserves=true fpr_mask=0x00000000
