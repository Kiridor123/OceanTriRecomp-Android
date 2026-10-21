#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803F7368_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x803F7368u);
    goto loc_803F7368;

loc_803F7368:
{
    r7 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = (r0 + r7);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r0 = (r6 + r0);
}

loc_803F7384:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_803F7390;
    }
}

loc_803F7388:
{
}

loc_803F738C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_803F73A0;
    }
}

loc_803F7390:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x803F740Cu>(ctx);
    r0 = ctx->gpr[0];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803F73A0:
{
    r4 = (r0 - r5);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = (r0 - r7);
}

loc_803F73B0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r30))) {
        goto loc_803F73B8;
    }
}

loc_803F73B4:
{
    r30 = r4;
}

loc_803F73B8:
{
}

loc_803F73BC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803F73E4;
    }
}

loc_803F73C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_803F73C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F73E4;
    }
}

loc_803F73CC:
{
    r3 = (r0 + r7);
    r4 = MemoryInline::FlatRead32((r8 + 12));
    r0 = (r5 - r6);
    r4 = (r4 + r0);
    r5 = r30;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803F73E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x803F740Cu>(ctx);
    r0 = ctx->gpr[0];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F7368(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F7368_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xC00001FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F7368 func_803F7368 preserves=true fpr_mask=0x00000000
