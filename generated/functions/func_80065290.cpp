#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80065290_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80065290u);
    goto loc_80065290;

loc_80065290:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80065298:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_800652B4;
    }
}

loc_8006529C:
{
}

loc_800652A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_800652B4;
    }
}

loc_800652A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 * 12);
    r5 = (r6 + r0);
    goto loc_800652BC;
}

loc_800652B4:
{
    r5 = 0;
}

loc_800652BC:
{
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_80065290(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80065290_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80065290 func_80065290 preserves=true fpr_mask=0x00000000
