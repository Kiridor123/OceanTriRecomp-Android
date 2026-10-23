#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D067C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800D067C;

loc_800D067C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
}

loc_800D06AC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(32))) {
        goto loc_800D06FC;
    }
}

loc_800D06B0:
{
    r0 = (r3 * 56);
    r3 = (r4 + r0);
    r31 = (r3 + 188);
    r30 = 0;
    goto loc_800D06F4;
}

loc_800D06C4:
{
    r0 = (r28 + r30);
}

loc_800D06CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_800D06FC;
    }
}

loc_800D06D0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_800D06D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D06EC;
    }
}

loc_800D06DC:
{
    r3 = r31;
    r4 = 0;
    r5 = 56;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800D06EC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 56);
}

loc_800D06F4:
{
}

loc_800D06F8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_800D06C4;
    }
}

loc_800D06FC:
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

extern "C" void func_800D067C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D067C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D067C func_800D067C preserves=true fpr_mask=0x00000000
