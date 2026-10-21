#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8011987C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x8011987Cu);
    goto loc_8011987C;

loc_8011987C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = r4;
    r30 = (r4 & 255);
}

loc_801198A4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_801198CC;
    }
}

loc_801198A8:
{
}

loc_801198AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(5))) {
        goto loc_80119910;
    }
}

loc_801198B0:
{
    goto loc_80119940;
}

loc_801198B8:
{
    r3 = r29;
    r4 = r30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r30 = (r30 + 1);
}

loc_801198CC:
{
}

loc_801198D0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(5))) {
        goto loc_801198B8;
    }
}

loc_801198D4:
{
    r30 = 5;
}

loc_801198D8:
{
    r3 = r29;
    r4 = r30;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r30 = (r30 + 1);
}

loc_801198F0:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_801198D8;
    }
}

loc_801198F4:
{
    goto loc_80119940;
}

loc_801198FC:
{
    r3 = r29;
    r4 = r30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r30 = (r30 + 1);
}

loc_80119910:
{
}

loc_80119914:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_801198FC;
    }
}

loc_80119918:
{
    r30 = 1;
    r31 = (r31 & 255);
    goto loc_80119938;
}

loc_80119924:
{
    r3 = r29;
    r4 = r30;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r30 = (r30 + 1);
}

loc_80119938:
{
}

loc_8011993C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r31))) {
        goto loc_80119924;
    }
}

loc_80119940:
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

extern "C" void func_8011987C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011987C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011987C func_8011987C preserves=true fpr_mask=0x00000000
