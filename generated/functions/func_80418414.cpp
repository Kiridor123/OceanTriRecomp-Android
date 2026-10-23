#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80418414_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80418414;

loc_80418414:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8041841C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80418420:
{
    MemoryInline::FlatWrite32((r3 + 56), r4);
    MemoryInline::FlatWrite32((r3 + 60), r5);
    MemoryInline::FlatWrite32((r3 + 64), r6);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80418414(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80418414_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80418414 func_80418414 preserves=true fpr_mask=0x00000000
