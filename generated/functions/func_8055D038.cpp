#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8055D038_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8055D038;

loc_8055D038:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8055D040:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8055D05C;
    }
}

loc_8055D044:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return r3;
}

loc_8055D05C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -928));
    r0 = -1;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_8055D038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055D038_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055D038 func_8055D038 preserves=true fpr_mask=0x00000000
