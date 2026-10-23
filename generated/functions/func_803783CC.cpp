#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803783CC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    goto loc_803783CC;

loc_803783CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r3 = 0x806C0000u;
    r30 = (r3 + 6576);
    r0 = MemoryInline::FlatRead8((r30 + 5808));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80378400:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8037840C;
    }
}

loc_80378404:
{
    r3 = 0;
    goto loc_80378454;
}

loc_8037840C:
{
    r29 = 0;
    r3 = 0x806C0000u;
    r31 = (r3 + 1984);
}

loc_80378418:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80378420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80378440;
    }
}

loc_80378424:
{
    r3 = (r30 + 5808);
    r4 = (r28 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80378434:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80378440;
    }
}

loc_80378438:
{
    r3 = 1;
    goto loc_80378454;
}

loc_80378440:
{
    r31 = (r31 + 304);
    r29 = (r29 + 1);
}

loc_8037844C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(10))) {
        goto loc_80378418;
    }
}

loc_80378450:
{
    r3 = 0;
}

loc_80378454:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803783CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803783CC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803783CC func_803783CC preserves=true fpr_mask=0x00000000
