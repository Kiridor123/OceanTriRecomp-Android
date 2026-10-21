#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80111714_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80111714u);
    goto loc_80111714;

loc_80111714:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80111738:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_80111760;
    }
}

loc_8011173C:
{
    r31 = 1;
}

loc_80111740:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = r31;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r31 = (r31 + 1);
}

loc_80111758:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(3))) {
        goto loc_80111740;
    }
}

loc_8011175C:
{
    goto loc_8011179C;
}

loc_80111760:
{
    r31 = 1;
}

loc_80111764:
{
}

loc_80111768:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r29))) {
        goto loc_80111780;
    }
}

loc_8011176C:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = r31;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    goto loc_80111790;
}

loc_80111780:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = r31;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_80111790:
{
    r31 = (r31 + 1);
}

loc_80111798:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(5))) {
        goto loc_80111764;
    }
}

loc_8011179C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80111714(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80111714_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80111714 func_80111714 preserves=true fpr_mask=0x00000000
