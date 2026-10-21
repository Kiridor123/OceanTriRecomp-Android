#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BA198_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803BA198u);
    goto loc_803BA198;

loc_803BA198:
{
    r4 = MemoryInline::FlatRead32((r13 + -16840));
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    ctr = r0;
}

loc_803BA1AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803BA1C4;
    }
}

loc_803BA1B0:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803BA1B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803BA1BC:
{
    r3 = (r3 + 524);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BA1B0;
    }
}

loc_803BA1C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803BA198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BA198_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BA198 func_803BA198 preserves=true fpr_mask=0x00000000
