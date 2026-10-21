#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8038F320_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8038F320u);
    goto loc_8038F320;

loc_8038F320:
{
    r4 = 0;
    r5 = (r3 + -1);
    r3 = (r5 & 65535);
}

loc_8038F330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F3A0;
    }
}

loc_8038F334:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8038F33C:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8038F390;
    }
}

loc_8038F344:
{
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8038F344;
    }
}

loc_8038F388:
{
    r3 = (r3 & 7);
}

loc_8038F38C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F3A0;
    }
}

loc_8038F390:
{
    ctr = r3;
}

loc_8038F394:
{
    r4 = (r4 + r5);
    r5 = (r5 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8038F394;
    }
}

loc_8038F3A0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038F320(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038F320_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8038F320 func_8038F320 preserves=true fpr_mask=0x00000000
